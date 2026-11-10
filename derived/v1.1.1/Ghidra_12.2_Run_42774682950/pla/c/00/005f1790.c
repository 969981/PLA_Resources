/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f1790; name: FUN_005f1790
 */


void FUN_005f1790(undefined8 *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_0418eea8;
  local_30 = 
  "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h";
  local_28 = 0x91;
  if (param_1[2] != 0) {
                    /* try { // try from 005f17c8 to 005f17d7 has its CatchHandler @ 005f17f0 */
    FUN_005f13cc(param_1[2],&local_30,"Watcher dtor");
  }
  param_1[2] = 0;
  FUN_005f16c4(0);
  return;
}


