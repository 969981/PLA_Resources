/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cba20; name: FUN_003cba20
 */


undefined * FUN_003cba20(uint param_1)

{
  if (0xf < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x7fa,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (&PTR_s_GRPC_CALL_OK_04156870)[(int)param_1];
}


