/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282dbf0; name: FUN_0282dbf0
 */


uint FUN_0282dbf0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = param_2 / iVar3;
  }
  uVar2 = iVar1 - *(int *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar2) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
}


