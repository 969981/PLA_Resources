/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e0964; name: FUN_002e0964
 */


long FUN_002e0964(long *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  cVar2 = *param_3;
  if (cVar2 < '\0') {
    auVar5 = FUN_003232c0(param_3,cVar2);
    if (auVar5._0_8_ == 0) {
      return 0;
    }
  }
  else {
    auVar5[8] = cVar2;
    auVar5._0_8_ = param_3 + 1;
    auVar5._9_7_ = 0;
  }
  iVar3 = FUN_0031e1b4(param_1,auVar5._0_8_,auVar5._8_8_);
  lVar4 = param_1[0xb];
  *(int *)(param_1 + 0xb) = (int)lVar4 + -1;
  if ((int)lVar4 < 1) {
    return 0;
  }
  lVar4 = FUN_002dee80(param_2,auVar5._0_8_,param_1);
  if (lVar4 != 0) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    if ((int)param_1[10] != 0) {
      return 0;
    }
    uVar1 = *(int *)((long)param_1 + 0x1c) + iVar3;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return lVar4;
}


