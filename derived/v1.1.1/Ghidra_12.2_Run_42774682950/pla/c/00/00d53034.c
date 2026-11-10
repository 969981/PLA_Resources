/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d53034; name: FUN_00d53034
 */


undefined4 FUN_00d53034(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = 0;
  if (param_2 != 2) {
    iVar1 = param_2;
  }
  lVar4 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  lVar5 = **(long **)(lVar4 + 0x838);
  lVar4 = (*(long **)(lVar4 + 0x838))[1];
  if ((lVar5 != lVar4) && (*(char *)(lVar5 + 0x20) != '\0' || *(int *)(lVar5 + 0x24) != param_3)) {
    lVar2 = lVar5 + 0x30;
    do {
      lVar5 = lVar2;
      if (lVar4 == lVar5) {
        lVar5 = lVar4;
        goto LAB_00d530b4;
      }
      lVar2 = lVar5 + 0x30;
    } while ((*(char *)(lVar5 + 0x20) != '\0') || (*(int *)(lVar5 + 0x24) != param_3));
  }
LAB_00d530b4:
  if (lVar5 == 0 || lVar4 == lVar5) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(lVar5 + 0x28);
  }
  return uVar3;
}


