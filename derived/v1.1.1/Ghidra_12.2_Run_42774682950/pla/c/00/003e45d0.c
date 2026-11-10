/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e45d0; name: FUN_003e45d0
 */


undefined * FUN_003e45d0(uint param_1)

{
  if (4 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel_stack_type.cc",0x39,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (&PTR_s_CLIENT_CHANNEL_04157028)[(int)param_1];
}


