/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339c02c; name: FUN_0339c02c
 */


void FUN_0339c02c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)&PTR_LAB_0436fa38;
  if ((int)param_1[6] != 0) {
    lVar1 = param_1[5];
    lVar2 = (long)(int)param_1[6] << 4;
    do {
      FUN_032c7b9c(lVar1 + lVar2 + -8);
      FUN_032c7b9c(lVar1 + lVar2 + -0x10);
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[5],0x10,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  FUN_032c7b9c(param_1 + 4);
  if (param_1[3] != 0) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


