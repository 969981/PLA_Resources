/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03208848; name: FUN_03208848
 */


void FUN_03208848(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_LAB_042f1e28;
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 4);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) * 0xc);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  if ((int)param_1[5] != 0) {
    lVar2 = param_1[4];
    lVar3 = (long)(int)param_1[5] * 0x58;
    do {
      FUN_031ce6c4(lVar2 + -0x58 + lVar3);
      lVar3 = lVar3 + -0x58;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) * 0x58);
  }
  param_1[4] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


