/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02599658; name: FUN_02599658
 */


void FUN_02599658(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc0) != param_2) && (*(char *)(param_1 + 0x168) == '\0')) {
    iVar2 = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0xc0) = param_2;
    if (param_2 == 0) {
      if ((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0xb8), iVar2 == 0)) {
        iVar2 = *(int *)(param_1 + 0xb4);
      }
    }
    else if ((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0xb8), iVar2 == 0)) {
      iVar2 = param_2;
    }
    else {
      bVar1 = iVar2 == param_2;
      iVar2 = param_2;
      if (bVar1) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x16c) = 1;
    FUN_025985e0(param_1);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_01b976e4(*(long *)(param_1 + 0x88),iVar2);
      return;
    }
  }
  return;
}


