/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e598; name: FUN_0333e598
 */


long FUN_0333e598(long param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 != param_1) {
    pvVar3 = *(void **)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x20);
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar2,
                                    *(undefined4 *)(param_1 + 0x20));
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    memcpy(pvVar2,pvVar3,(long)iVar1 << 4);
    *(int *)(param_1 + 0x20) = iVar1;
    pvVar3 = *(void **)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x30);
    pvVar2 = *(void **)(param_1 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar2,
                                    *(undefined4 *)(param_1 + 0x30));
      *(void **)(param_1 + 0x28) = pvVar2;
    }
    memcpy(pvVar2,pvVar3,(long)iVar1 << 4);
    *(int *)(param_1 + 0x30) = iVar1;
  }
  return param_1;
}


