/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ee7d4; name: FUN_005ee7d4
 */


void FUN_005ee7d4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0418ece0;
  if (PTR_DAT_04375160[0x10] != '\0') {
                    /* try { // try from 005ee82c to 005ee89f has its CatchHandler @ 005ee8a0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                 ,0x98,1,"Destroying Pick First %p",param_1);
  }
  if (param_1[0x1c] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                 ,0x9a,2,"assertion failed: %s","subchannel_list_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[0x1d] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                 ,0x9b,2,"assertion failed: %s","latest_pending_subchannel_list_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00547658(param_1 + 7);
  FUN_00548ed0(param_1);
  return;
}


