/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f84cc; name: FUN_005f84cc
 */


void FUN_005f84cc(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418f370;
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc";
  local_28 = 0xa3;
  if (param_1[1] != 0) {
                    /* try { // try from 005f8504 to 005f8513 has its CatchHandler @ 005f852c */
    FUN_005f8318(param_1[1],&local_30,"Helper");
  }
  param_1[1] = 0;
  FUN_005f786c(0);
  return;
}


