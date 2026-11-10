/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5df9c; name: FUN_00d5df9c
 */


void FUN_00d5df9c(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = 0;
  if (param_2 != 2) {
    iVar1 = param_2;
  }
  lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  lVar4 = **(long **)(lVar3 + 0x838);
  lVar3 = (*(long **)(lVar3 + 0x838))[1];
  if ((lVar4 != lVar3) && (*(char *)(lVar4 + 0x20) != '\0' || *(int *)(lVar4 + 0x24) != param_3)) {
    lVar2 = lVar4 + 0x30;
    do {
      lVar4 = lVar2;
      if (lVar3 == lVar4) {
        lVar4 = lVar3;
        goto LAB_00d5e028;
      }
      lVar2 = lVar4 + 0x30;
    } while ((*(char *)(lVar4 + 0x20) != '\0') || (*(int *)(lVar4 + 0x24) != param_3));
  }
LAB_00d5e028:
  if ((lVar4 == 0 || lVar3 == lVar4) || (*(int *)(lVar4 + 0x28) == -1)) {
    return;
  }
  FUN_00d54178(param_1,param_2,param_3,param_2);
  return;
}


