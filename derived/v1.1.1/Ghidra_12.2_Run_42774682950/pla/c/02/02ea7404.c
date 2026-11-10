/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7404; name: FUN_02ea7404
 */


void FUN_02ea7404(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1 + 0xa0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  lVar3 = param_1;
  lVar2 = DAT_0440a410;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    while( true ) {
      if (lVar2 == 0) {
        FUN_02e43d1c();
        cVar1 = *(char *)(DAT_0440a410 + 0xb8);
        lVar3 = DAT_0440a410;
      }
      else {
        cVar1 = *(char *)(lVar2 + 0xb8);
        lVar3 = lVar2;
      }
      if (cVar1 != '\0') break;
      lVar2 = lVar3;
    }
  }
  FUN_02ea7720(lVar4,lVar3 + 0x48);
  lVar2 = FUN_02e9ed40(param_1);
  FUN_02ea7720(lVar4,lVar2 + 0x28);
  FUN_02ea7840(lVar4);
  if (DAT_0440a410 != param_1) {
    return;
  }
  lVar4 = *(long *)(PTR_DAT_043885c8 + 0x10);
joined_r0x02ea7494:
  if (lVar4 == 0) {
    return;
  }
  do {
    if (lVar4 != param_1) {
      if (*(char *)(lVar4 + 0xb9) == '\0') {
        *(undefined4 *)(lVar4 + 0xb0) = 0;
        lVar2 = DAT_0440a410;
        if (*(char *)(lVar4 + 0xb8) == '\0') goto joined_r0x02ea74f8;
        lVar2 = lVar4;
        goto LAB_02ea7504;
      }
      if (*(char *)(lVar4 + 0xb8) == '\0') break;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
  } while( true );
  *(undefined4 *)(lVar4 + 0xb0) = 0;
  lVar2 = DAT_0440a410;
joined_r0x02ea74f8:
  do {
    if (lVar2 == 0) {
      FUN_02e43d1c();
      lVar2 = DAT_0440a410;
    }
  } while (*(char *)(lVar2 + 0xb8) == '\0');
LAB_02ea7504:
  lVar3 = lVar4 + 0xa0;
  FUN_02ea7720(lVar3,lVar2 + 0x48);
  lVar2 = FUN_02e9ed40(lVar4);
  FUN_02ea7720(lVar3,lVar2 + 0x28);
  FUN_02ea7840(lVar3);
  lVar4 = *(long *)(lVar4 + 0x10);
  goto joined_r0x02ea7494;
}


