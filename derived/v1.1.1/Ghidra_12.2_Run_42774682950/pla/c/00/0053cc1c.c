/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053cc1c; name: FUN_0053cc1c
 */


void FUN_0053cc1c(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  FUN_002ef750(param_1 + 0x38);
  if (PTR_DAT_04374be8[0x10] != '\0') {
                    /* try { // try from 0053cc80 to 0053ccaf has its CatchHandler @ 0053ccb4 */
    uVar2 = FUN_003d3430(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x5b,1,"HealthCheckClient %p: setting state=%s reason=%s",param_1,uVar2,param_3);
  }
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0053cc60 to 0053cc67 has its CatchHandler @ 0053ccb4 */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
                    /* try { // try from 0053cc68 to 0053cc6f has its CatchHandler @ 0053cccc */
  FUN_002ef790(param_1 + 0x38);
  return;
}


