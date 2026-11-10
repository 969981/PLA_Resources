/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba07e8; name: FUN_01ba07e8
 */


int FUN_01ba07e8(long param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x8b0) + param_3 * param_2;
  if (iVar1 < 0) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x8b0) = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x8b4);
    if (iVar1 <= *(int *)(param_1 + 0x8b4)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x8b0) = iVar2;
  }
  if (((param_4 & 1) == 0) && (*(int *)(param_1 + 0x8b4) <= iVar2)) {
    *(int *)(param_1 + 0x8b0) = iVar2 + -1;
    return iVar2 + -1;
  }
  return iVar2;
}


