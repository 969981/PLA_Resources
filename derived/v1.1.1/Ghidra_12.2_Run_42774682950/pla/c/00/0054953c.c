/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054953c; name: FUN_0054953c
 */


void FUN_0054953c(long *param_1)

{
  long lVar1;
  char *local_30;
  undefined4 local_28;
  
  *param_1 = (long)(PTR_DAT_04374cb0 + 0x10);
  local_30 = "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy.h";
  local_28 = 0x179;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
                    /* try { // try from 00549578 to 00549587 has its CatchHandler @ 0054959c */
    FUN_00549014(lVar1,&local_30,"QueuePicker");
  }
  param_1[1] = 0;
  return;
}


