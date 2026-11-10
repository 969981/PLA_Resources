/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d1844; name: FUN_005d1844
 */


void FUN_005d1844(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418d628;
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/eds.cc";
  local_28 = 299;
  if (param_1[1] != 0) {
                    /* try { // try from 005d187c to 005d188b has its CatchHandler @ 005d18a8 */
    FUN_00549014(param_1[1],&local_30,"EndpointWatcher");
  }
  param_1[1] = 0;
  FUN_005d13d0(0);
  return;
}


