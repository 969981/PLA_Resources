/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399638; name: FUN_03399638
 */


void FUN_03399638(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc0);
  lVar3 = *(long *)(param_1 + 0xb8);
  iVar2 = iVar4 + 1;
  if ((int)(*(uint *)(param_1 + 0xc4) & 0x3fffffff) <= iVar4) {
    lVar3 = FUN_03399cb0(PTR_PTR_0434a080,iVar2);
    iVar4 = *(int *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xb8) = lVar3;
  }
  piVar1 = (int *)(lVar3 + (long)iVar4 * 8);
  *(int *)(param_1 + 0xc0) = iVar2;
  *piVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
  piVar1[1] = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x80);
  return;
}


