/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c7984; name: FUN_005c7984
 */


void FUN_005c7984(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_0418d280;
  if (PTR_DAT_043750a8[0x10] != '\0') {
                    /* try { // try from 005c79ec to 005c7a0b has its CatchHandler @ 005c7a14 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/cds.cc"
                 ,0x11b,1,"[cdslb %p] destroying cds LB policy",param_1);
  }
                    /* try { // try from 005c79b0 to 005c79b3 has its CatchHandler @ 005c7a14 */
  FUN_002e4a10(param_1[8]);
  puVar1 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005c79c8 to 005c79cb has its CatchHandler @ 005c7a10 */
    (**(code **)*puVar1)();
  }
  FUN_0050df34(param_1 + 9);
  FUN_005c78b8(param_1[7]);
  FUN_00548ed0(param_1);
  return;
}


