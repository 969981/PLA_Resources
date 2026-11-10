/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339202c; name: FUN_0339202c
 */


void FUN_0339202c(long *param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  lVar2 = *param_1;
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_03388e24(PTR_PTR_0434a080,iVar1);
    iVar3 = (int)param_1[1];
    *param_1 = lVar2;
  }
  *(ulong *)(lVar2 + (long)iVar3 * 8) = param_2 & 0xffffffff | param_3 << 0x20;
  *(int *)(param_1 + 1) = iVar1;
  return;
}


