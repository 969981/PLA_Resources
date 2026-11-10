/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e5a44; name: FUN_003e5a44
 */


undefined * FUN_003e5a44(uint param_1)

{
  if (4 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channelz.cc",0xc4,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (&PTR_s_Channel_state_change_to_IDLE_04157150)[(int)param_1];
}


