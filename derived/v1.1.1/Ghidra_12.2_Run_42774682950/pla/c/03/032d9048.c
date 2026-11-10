/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d9048; name: FUN_032d9048
 */


void FUN_032d9048(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x4000;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  iVar2 = *(int *)(param_1 + 0x1d8);
  lVar3 = *(long *)(param_1 + 0x1d0);
  if ((int)(*(uint *)(param_1 + 0x1dc) & 0x3fffffff) <= iVar2) {
    lVar3 = FUN_032da37c(PTR_PTR_0434a090,iVar2 + 1,lVar3,iVar2);
    *(long *)(param_1 + 0x1d0) = lVar3;
  }
  puVar1 = (undefined8 *)(lVar3 + (long)iVar2 * 0x10);
  *(int *)(param_1 + 0x1d8) = iVar2 + 1;
  *puVar1 = param_2;
  puVar1[1] = (long)param_3;
  return;
}


