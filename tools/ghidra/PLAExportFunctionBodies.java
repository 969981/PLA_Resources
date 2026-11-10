// Export exact Ghidra Function body address ranges from an existing project.
// This script is intentionally read-only and must be run with -noanalysis -readOnly.
// It does not import an ELF, rerun analysis, or invoke the decompiler.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressRangeIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

public class PLAExportFunctionBodies extends GhidraScript {
    private static String q(String s) {
        if (s == null) return "null";
        StringBuilder b = new StringBuilder(s.length() + 8);
        b.append('"');
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '"': b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n"); break;
                case '\r': b.append("\\r"); break;
                case '\t': b.append("\\t"); break;
                default:
                    if (c < 0x20) b.append(String.format("\\u%04x", (int)c));
                    else b.append(c);
            }
        }
        return b.append('"').toString();
    }

    private static String record(String type, String key, String value) {
        return "{\"type\":" + q(type) + ",\"" + key + "\":" + value + "}";
    }

    @Override
    protected void run() throws Exception {
        if (currentProgram == null) {
            throw new IllegalStateException("Ghidra did not open a program");
        }
        String[] args = getScriptArgs();
        if (args == null || args.length != 1) {
            throw new IllegalArgumentException("Expected one NDJSON output path");
        }
        Path output = Paths.get(args[0]).toAbsolutePath();
        Files.createDirectories(output.getParent());

        long functionCount = 0;
        long rangeCount = 0;
        try (BufferedWriter writer = Files.newBufferedWriter(output, StandardCharsets.UTF_8)) {
            writer.write("{\"type\":\"meta\",\"program\":" + q(currentProgram.getName())
                + ",\"image_base\":" + q(currentProgram.getImageBase().toString())
                + ",\"mode\":\"READ_ONLY_NO_ANALYSIS\"}\n");

            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                Function f = functions.next();
                List<String> ranges = new ArrayList<String>();
                AddressRangeIterator iterator = f.getBody().getAddressRanges();
                while (iterator.hasNext()) {
                    AddressRange span = iterator.next();
                    ranges.add("{\"start\":" + q(span.getMinAddress().toString())
                        + ",\"end\":" + q(span.getMaxAddress().toString())
                        + ",\"bytes\":" + span.getLength() + "}");
                    rangeCount++;
                }

                StringBuilder row = new StringBuilder(128 + ranges.size() * 64);
                row.append("{\"type\":\"function\",\"entry\":")
                    .append(q(f.getEntryPoint().toString()))
                    .append(",\"body_bytes\":").append(f.getBody().getNumAddresses())
                    .append(",\"range_count\":").append(ranges.size())
                    .append(",\"ranges\":[");
                for (int i = 0; i < ranges.size(); i++) {
                    if (i != 0) row.append(',');
                    row.append(ranges.get(i));
                }
                row.append("]}\n");
                writer.write(row.toString());
                functionCount++;
                if ((functionCount % 4096) == 0) {
                    writer.flush();
                    monitor.checkCancelled();
                    println("Exported exact function bodies: " + functionCount);
                }
            }
            writer.write("{\"type\":\"summary\",\"complete\":true,\"functions\":"
                + functionCount + ",\"ranges\":" + rangeCount + "}\n");
        }

        println("PLAExportFunctionBodies: functions=" + functionCount + ", ranges=" + rangeCount);
        if (!"main.elf".equals(currentProgram.getName())) {
            throw new IllegalStateException("Unexpected program: " + currentProgram.getName());
        }
        if (!"00100000".equals(currentProgram.getImageBase().toString())) {
            throw new IllegalStateException("Unexpected image base: " + currentProgram.getImageBase());
        }
        if (functionCount != 82760L) {
            throw new IllegalStateException("Expected 82760 functions, found " + functionCount);
        }
    }
}
