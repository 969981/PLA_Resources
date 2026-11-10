/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eda57c; name: FUN_02eda57c
 */


void FUN_02eda57c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 == 0) {
    return;
  }
  *(short *)(lVar1 + 0x90) = *(short *)(lVar1 + 0x90) + -1;
  if ((param_2 & 1) != 0) {
    *(short *)(lVar1 + 0x92) = *(short *)(lVar1 + 0x92) + -1;
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (0 < *(short *)(lVar1 + 0x90)) {
    return;
  }
  if (0 < *(short *)(lVar1 + 0x94)) {
    return;
  }
  if (*(short *)(lVar1 + 0x88) != 0) {
    return;
  }
  if (*(short *)(lVar1 + 0x8a) != 0) {
    return;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    return;
  }
  if (*(int *)(lVar1 + 8) != 0) {
    return;
  }
  if ((*(byte *)(lVar1 + 0x98) >> 1 & 1) != 0) {
    puVar4 = &DAT_0440ad60;
    plVar5 = &DAT_0440ad60;
    lVar3 = 0;
    do {
      lVar2 = lVar3;
      lVar3 = *plVar5;
      plVar5 = (long *)(lVar3 + 0x40);
    } while (lVar3 != 0 && lVar3 != param_1);
    if (lVar3 != 0) {
      if (DAT_0440ad60 != lVar3) {
        puVar4 = (undefined8 *)(lVar2 + 0x40);
      }
      *puVar4 = *(undefined8 *)(lVar3 + 0x40);
      if (DAT_0440ad58 == lVar3) {
        DAT_0440ad58 = lVar2;
      }
      DAT_0440ad50 = DAT_0440ad50 + -1;
      lVar1 = *(long *)(param_1 + 0x78);
    }
    if (lVar1 == 0) goto LAB_02eda614;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_02ed5a4c();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_02ed5a4c();
  }
LAB_02eda614:
  FUN_02ed5b5c(&DAT_0440a928,*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


