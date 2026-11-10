/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f4944; name: FUN_005f4944
 */


void FUN_005f4944(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418f158;
  local_30 = 
  "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h";
  local_28 = 0x91;
  if (param_1[2] != 0) {
                    /* try { // try from 005f497c to 005f498b has its CatchHandler @ 005f49a4 */
    FUN_005f479c(param_1[2],&local_30,"Watcher dtor");
  }
  param_1[2] = 0;
  FUN_005f4878(0);
  return;
}


