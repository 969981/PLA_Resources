/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d820; name: FUN_0282d820
 */


int FUN_0282d820(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar1 = (int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(param_1 + 0x20);
    }
    return *piVar1 + -1;
  }
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = iVar2 / iVar4;
    }
    iVar4 = iVar2 - iVar3 * iVar4;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = iVar2 / iVar3;
    }
    iVar3 = iVar2 - iVar4 * iVar3;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar3 = iVar4;
  }
  return iVar3;
}


