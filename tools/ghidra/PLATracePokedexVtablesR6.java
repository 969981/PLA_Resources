// Read-only native Ghidra 12.2 PLA v1.1.1 program evidence.
// Query original Ghidra symbols, virtual table data and reference database.
// DO NOT run analyzer, write back program, or relabel unproved dispatches.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class PLATracePokedexVtablesR6 extends GhidraScript {
    private static String quote(String value) {
        if (value == null) return "null";
        StringBuilder result=new StringBuilder("\"");
        for(int i=0;i<value.length();i++){
            char ch=value.charAt(i);
            if(ch=='\\')result.append("\\\\");
            else if(ch=='"')result.append("\\\"");
            else if(ch=='\n')result.append("\\n");
            else if(ch=='\r')result.append("\\r");
            else if(ch=='\t')result.append("\\t");
            else if(ch<32)result.append(String.format("\\u%04x",(int)ch));
            else result.append(ch);
        }
        return result.append('"').toString();
    }
    private static String hex(long value) {
        return String.format("0x%016X",value);
    }
    private String containing(Address at) {
        Function f=currentProgram.getFunctionManager().getFunctionContaining(at);
        return f==null ? null:f.getEntryPoint().toString();
    }
    private String targetRefRow(String target) {
        Address at=toAddr(target);
        ReferenceIterator iterator=currentProgram.getReferenceManager().getReferencesTo(at);
        long count=0;
        StringBuilder refs=new StringBuilder();
        while(iterator.hasNext()) {
            Reference r=iterator.next();
            if(count<200) {
                if(count!=0) refs.append(',');
                refs.append("{\"from\":").append(quote(r.getFromAddress().toString()))
                    .append(",\"from_function\":").append(quote(containing(r.getFromAddress())))
                    .append(",\"reference_type\":").append(quote(r.getReferenceType().toString()))
                    .append('}');
            }
            count++;
        }
        Symbol sym=currentProgram.getSymbolTable().getPrimarySymbol(at);
        return "{\"type\":\"target_references\",\"target\":"+quote(target)+
            ",\"symbol\":"+quote(sym==null?null:sym.getName())+
            ",\"owner_function\":"+quote(containing(at))+
            ",\"reference_count\":"+count+",\"references\":["+refs+"]}";
    }
    private String tableRow(String name,Address at,int slot) {
        Memory mem=currentProgram.getMemory();
        MemoryBlock block=mem.getBlock(at);
        if(block==null){
            return "{\"type\":\"vtable_slot\",\"table\":"+quote(name)+",\"slot\":"+slot+
                ",\"address\":"+quote(at.toString())+",\"mapped\":false}";
        }
        long value=0;
        boolean readable=false;
        try { value=mem.getLong(at);readable=true; } catch(Exception ex) { }
        Data data=currentProgram.getListing().getDefinedDataAt(at);
        Symbol sym=currentProgram.getSymbolTable().getPrimarySymbol(at);
        Reference[] refs=currentProgram.getReferenceManager().getReferencesFrom(at);
        StringBuilder items=new StringBuilder();
        int limit=Math.min(refs.length,50);
        for(int i=0;i<limit;i++) {
            Reference r=refs[i];
            if(i>0)items.append(',');
            items.append("{\"to\":").append(quote(r.getToAddress().toString()))
                 .append(",\"type\":").append(quote(r.getReferenceType().toString()))
                 .append(",\"to_function\":").append(quote(containing(r.getToAddress())))
                 .append('}');
        }
        return "{\"type\":\"vtable_slot\",\"table\":"+quote(name)+
            ",\"slot\":"+slot+
            ",\"address\":"+quote(at.toString())+
            ",\"mapped\":true,\"memory_block\":"+quote(block.getName())+
            ",\"readable\":"+readable+
            ",\"u64\":"+quote(readable?hex(value):null)+
            ",\"symbol\":"+quote(sym==null?null:sym.getName())+
            ",\"defined_data_type\":"+quote(data==null?null:data.getDataType().getName())+
            ",\"defined_data_value\":"+quote(data==null?null:String.valueOf(data.getValue()))+
            ",\"reference_count\":"+refs.length+
            ",\"references\":["+items+"]}";
    }
    @Override
    protected void run() throws Exception {
        if(currentProgram==null ||
           !"main.elf".equals(currentProgram.getName()) ||
           !"00100000".equals(currentProgram.getImageBase().toString()))
            throw new IllegalStateException("Not the pinned original PLA 1.1.1 Ghidra project");
        String[] args=getScriptArgs();
        if(args==null || args.length!=1)throw new IllegalArgumentException("Expected one NDJSON output path");
        Path output=Paths.get(args[0]).toAbsolutePath();
        Files.createDirectories(output.getParent());
        try(BufferedWriter out=Files.newBufferedWriter(output,StandardCharsets.UTF_8)){
            out.write("{\"type\":\"meta\",\"status\":\"READ_ONLY_GHIDRA_VTABLE_REFERENCES\",\"program\":\"main.elf\",\"image_base\":\"00100000\",\"analysis\":\"none\"}\n");
            String[] targets={
                "0112E220","0112E580","0112E6F0","0112E4C0","0112E660",
                "01147C34","010CD044","0114725C","0114BC50","011458E8",
                "02888630","01148F20","010CEEA0","010CEC54","010CEB08"
            };
            for(String t:targets){
                out.write(targetRefRow(t));out.newLine();
                monitor.checkCancelled();
            }
            String[] names={"primary","secondaryA","secondaryB"};
            String[] starts={"041F23C8","041F2438","041F2480"};
            for(int table=0;table<starts.length;table++){
                Address origin=toAddr(starts[table]);
                for(int n=0;n<44;n++){
                    out.write(tableRow(names[table],origin.add(n*8L),n*8));
                    out.newLine();
                }
                monitor.checkCancelled();
            }
            out.write("{\"type\":\"summary\",\"complete\":true,\"targets\":15,\"tables\":3,\"slots\":132}\n");
        }
        println("PLATracePokedexVtablesR6: wrote "+output);
    }
}
