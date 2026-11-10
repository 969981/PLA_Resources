/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260f80; name: FUN_03260f80
 */


undefined8 FUN_03260f80(long param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0x90);
  iVar2 = iVar4 + 1;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff) <= iVar4) {
    lVar3 = FUN_032610ec(PTR_PTR_0434a080,iVar2);
    iVar4 = *(int *)(param_1 + 0x98);
    *(long *)(param_1 + 0x90) = lVar3;
  }
  puVar1 = (uint *)(lVar3 + (long)iVar4 * 0x10);
  *(int *)(param_1 + 0x98) = iVar2;
  *(undefined2 *)((long)puVar1 + 6) = param_3;
  *puVar1 = param_4 << 2 | 1;
  *(undefined2 *)(puVar1 + 1) = param_2;
  return 1;
}


