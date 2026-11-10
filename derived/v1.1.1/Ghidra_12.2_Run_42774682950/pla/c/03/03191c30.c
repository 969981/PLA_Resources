/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03191c30; name: FUN_03191c30
 */


undefined8 * FUN_03191c30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 1);
    pvVar3 = (void *)*param_2;
    pvVar2 = (void *)*param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x14,pvVar2,*(undefined4 *)(param_1 + 1))
      ;
      *param_1 = pvVar2;
    }
    memcpy(pvVar2,pvVar3,(long)iVar1 * 0x14);
    *(int *)(param_1 + 1) = iVar1;
    iVar1 = *(int *)(param_2 + 3);
    pvVar3 = (void *)param_2[2];
    pvVar2 = (void *)param_1[2];
    if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar2,*(undefined4 *)(param_1 + 3));
      param_1[2] = pvVar2;
    }
    memcpy(pvVar2,pvVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 3) = iVar1;
    pvVar3 = (void *)param_2[4];
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_1[4];
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar2,*(undefined4 *)(param_1 + 5));
      param_1[4] = pvVar2;
    }
    memcpy(pvVar2,pvVar3,(long)iVar1 << 2);
    *(int *)(param_1 + 5) = iVar1;
  }
  return param_1;
}


