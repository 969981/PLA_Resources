/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006011c0; name: FUN_006011c0
 */


void FUN_006011c0(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418f680;
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
  ;
  local_28 = 0x90;
  if (param_1[1] != 0) {
                    /* try { // try from 006011f8 to 00601207 has its CatchHandler @ 00601220 */
    FUN_0060100c(param_1[1],&local_30,"Helper");
  }
  param_1[1] = 0;
  FUN_00600530(0);
  return;
}


