/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a72c0; name: FUN_005a72c0
 */


void FUN_005a72c0(ulong param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((long)param_1 < 1) {
    param_2[2] = '\0';
    param_2[0] = '1';
    param_2[1] = 'n';
    return;
  }
  if ((long)param_1 < 1000000) {
    uVar2 = FUN_005a7660();
    if (((long)uVar2 < 1000) || (uVar4 = uVar2 / 1000, uVar2 % 1000 != 0)) {
      iVar1 = FUN_002ec860(uVar2,param_2);
      (param_2 + iVar1)[0] = 'm';
      (param_2 + iVar1)[1] = '\0';
      return;
    }
  }
  else {
    if (0x174876e417 < (long)param_1) {
      param_2[8] = 'S';
      param_2[9] = '\0';
      *(undefined8 *)param_2 = s_99999999S_03911aa6._0_8_;
      return;
    }
    uVar4 = param_1 / 1000;
    if (param_1 % 1000 != 0) {
      uVar4 = uVar4 + 1;
    }
  }
  lVar3 = FUN_005a7660(uVar4);
  if (lVar3 % 0xe10 == 0) {
    iVar1 = FUN_002ec860(lVar3 / 0xe10,param_2);
    (param_2 + iVar1)[0] = 'H';
    (param_2 + iVar1)[1] = '\0';
    return;
  }
  if (lVar3 % 0x3c == 0) {
    iVar1 = FUN_002ec860(lVar3 / 0x3c,param_2);
    (param_2 + iVar1)[0] = 'M';
    (param_2 + iVar1)[1] = '\0';
    return;
  }
  iVar1 = FUN_002ec860(lVar3,param_2);
  (param_2 + iVar1)[0] = 'S';
  (param_2 + iVar1)[1] = '\0';
  return;
}


