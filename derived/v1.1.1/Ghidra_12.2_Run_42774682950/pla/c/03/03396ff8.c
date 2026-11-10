/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03396ff8; name: FUN_03396ff8
 */


ulong FUN_03396ff8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar4 = (long)iVar3;
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_03152c04(PTR_PTR_0434a080,iVar1);
    iVar3 = *(int *)(param_1 + 0x30);
    *(long *)(param_1 + 0x28) = lVar2;
  }
  FUN_032c7a54(lVar2 + (long)iVar3 * 8,param_2,0xffffffff);
  *(int *)(param_1 + 0x30) = iVar1;
  return *(ulong *)(*(long *)(param_1 + 0x28) + lVar4 * 8) & 0xfffffffffffffffe;
}


