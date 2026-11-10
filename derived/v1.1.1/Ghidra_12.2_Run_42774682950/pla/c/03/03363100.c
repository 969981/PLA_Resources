/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03363100; name: FUN_03363100
 */


void FUN_03363100(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_04367e40;
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[5],((ulong)*(uint *)((long)param_1 + 0x34) & 0x3fffffff) << 5);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 0x28);
  }
  param_1[3] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


