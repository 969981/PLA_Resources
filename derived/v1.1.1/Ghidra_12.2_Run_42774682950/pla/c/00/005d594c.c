/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d594c; name: FUN_005d594c
 */


void FUN_005d594c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_0418d730;
  if (PTR_DAT_043750b8[0x10] != '\0') {
                    /* try { // try from 005d59bc to 005d59db has its CatchHandler @ 005d59e0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/lrs.cc"
                 ,0xcd,1,"[lrs_lb %p] destroying xds LB policy",param_1);
  }
  FUN_005d56bc(param_1[0xd]);
  puVar1 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005d5990 to 005d5993 has its CatchHandler @ 005d5a1c */
    (**(code **)*puVar1)();
  }
  FUN_005d57b4(param_1 + 10);
  FUN_0050df34(param_1 + 9);
  FUN_005d5880(param_1[7]);
  FUN_00548ed0(param_1);
  return;
}


