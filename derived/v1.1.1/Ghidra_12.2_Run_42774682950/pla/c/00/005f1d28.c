/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f1d28; name: FUN_005f1d28
 */


void FUN_005f1d28(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0418ef90;
  if (PTR_DAT_04375168[0x10] != '\0') {
                    /* try { // try from 005f1d78 to 005f1deb has its CatchHandler @ 005f1dec */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                 ,0xe9,1,"[RR %p] Destroying Round Robin policy",param_1);
  }
  if (param_1[7] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                 ,0xeb,2,"assertion failed: %s","subchannel_list_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[8] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/round_robin/round_robin.cc"
                 ,0xec,2,"assertion failed: %s","latest_pending_subchannel_list_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00548ed0(param_1);
  return;
}


