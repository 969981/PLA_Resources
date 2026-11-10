/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005eb128; name: FUN_005eb128
 */


void FUN_005eb128(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418e830;
  local_30 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
  ;
  local_28 = 0x94;
  if (param_1[1] != 0) {
                    /* try { // try from 005eb160 to 005eb16f has its CatchHandler @ 005eb188 */
    FUN_005eb320(param_1[1],&local_30,"Helper");
  }
  param_1[1] = 0;
  FUN_005eb030(0);
  return;
}


