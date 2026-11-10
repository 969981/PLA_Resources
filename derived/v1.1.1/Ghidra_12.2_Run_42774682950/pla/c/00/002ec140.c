/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec140; name: FUN_002ec140
 */


undefined * FUN_002ec140(uint param_1)

{
  if (2 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/log.cc",0x2f,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (&PTR_DAT_04152fa8)[(int)param_1];
}


