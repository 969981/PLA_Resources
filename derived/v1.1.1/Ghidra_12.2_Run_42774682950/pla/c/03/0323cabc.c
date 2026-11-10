/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0323cabc; name: FUN_0323cabc
 */


void FUN_0323cabc(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_0430b128;
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xc],*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[10],(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 1);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[7],*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[5],*(int *)((long)param_1 + 0x34) << 2);
  }
  param_1[5] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


