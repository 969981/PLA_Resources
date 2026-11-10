/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030feb84; name: FUN_030feb84
 */


void FUN_030feb84(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x334) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19a4)) && (param_1[0x333] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x333],((ulong)*(uint *)((long)param_1 + 0x19a4) & 0x3fffffff) << 3);
  }
  param_1[0x333] = 0;
  *(undefined4 *)((long)param_1 + 0x19a4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x329) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x194c)) && (param_1[0x328] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x328],*(int *)((long)param_1 + 0x194c) << 2);
  }
  param_1[0x328] = 0;
  *(undefined4 *)((long)param_1 + 0x194c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x187c)) && (param_1[0x30e] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x30e],((ulong)*(uint *)((long)param_1 + 0x187c) & 0x3fffffff) * 0xc);
  }
  *param_1 = &PTR_LAB_04363a18;
  param_1[0x30e] = 0;
  *(undefined4 *)((long)param_1 + 0x187c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 5);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 4);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


