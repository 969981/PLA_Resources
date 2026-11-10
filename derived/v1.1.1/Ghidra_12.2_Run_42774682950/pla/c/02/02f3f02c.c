/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3f02c; name: FUN_02f3f02c
 */


void FUN_02f3f02c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_042adbe0;
  puVar1 = param_1 + 0xb;
  *puVar1 = &PTR_LAB_042adc98;
  param_1[0xe] = &PTR_LAB_042add08;
  if (param_1[0x1c] != 0) {
    FUN_02ef66a4(param_1[0x19]);
  }
  if (param_1[0x1b] != 0) {
    FUN_02e8e5e0(param_1[0x1b],0);
  }
  (**(code **)(*(long *)param_1[0x18] + 0x138))((long *)param_1[0x18],1);
  FUN_02ed5d64(param_1[0x18]);
  FUN_02f4006c(param_1[0x18] + 0x120,param_1);
  (**(code **)(*(long *)param_1[0x18] + 0x18))();
  if (param_1[0x17] != 0) {
    FUN_02e7a0dc(param_1[0x17],param_1);
  }
  if (param_1[0xd] != 0) {
    FUN_02f567b4(param_1[0xd],puVar1);
  }
  FUN_02f3c554(puVar1);
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
    FUN_02f59e60(0);
    param_1[0x2c] = 0;
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
  }
  FUN_02f40104(param_1 + 0x1e);
  FUN_02ee8c50(param_1 + 0xe);
  FUN_02f3c51c(puVar1);
  FUN_02e7c0f0(param_1);
  return;
}


