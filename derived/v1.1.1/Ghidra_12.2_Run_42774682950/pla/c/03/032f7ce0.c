/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f7ce0; name: FUN_032f7ce0
 */


void FUN_032f7ce0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1);
    iVar3 = *(int *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar2;
  }
  *(undefined8 *)(lVar2 + (long)iVar3 * 8) = param_2;
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}


