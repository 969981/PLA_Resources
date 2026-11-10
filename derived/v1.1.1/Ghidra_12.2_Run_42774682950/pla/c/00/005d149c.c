/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d149c; name: FUN_005d149c
 */


void FUN_005d149c(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418d580;
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/eds.cc";
  local_28 = 0x84;
  if (param_1[1] != 0) {
                    /* try { // try from 005d14d4 to 005d14e3 has its CatchHandler @ 005d1500 */
    FUN_00549014(param_1[1],&local_30,"Helper");
  }
  param_1[1] = 0;
  FUN_005d13d0(0);
  return;
}


