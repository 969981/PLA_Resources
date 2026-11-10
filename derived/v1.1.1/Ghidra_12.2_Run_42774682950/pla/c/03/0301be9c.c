/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301be9c; name: FUN_0301be9c
 */


undefined8 * FUN_0301be9c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 != param_1) {
    pvVar2 = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    pvVar3 = (void *)*param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 1));
      *param_1 = pvVar3;
    }
    memcpy(pvVar3,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 1) = iVar1;
    iVar1 = *(int *)(param_2 + 3);
    pvVar2 = (void *)param_2[2];
    pvVar3 = (void *)param_1[2];
    if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 3));
      param_1[2] = pvVar3;
    }
    memcpy(pvVar3,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 3) = iVar1;
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_2[4];
    pvVar3 = (void *)param_1[4];
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 5));
      param_1[4] = pvVar3;
    }
    memcpy(pvVar3,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 5) = iVar1;
    iVar1 = *(int *)(param_2 + 7);
    pvVar2 = (void *)param_2[6];
    pvVar3 = (void *)param_1[6];
    if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 7));
      param_1[6] = pvVar3;
    }
    memcpy(pvVar3,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 7) = iVar1;
    iVar1 = *(int *)(param_2 + 9);
    pvVar2 = (void *)param_2[8];
    pvVar3 = (void *)param_1[8];
    if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 9));
      param_1[8] = pvVar3;
    }
    memcpy(pvVar3,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 9) = iVar1;
    pvVar2 = (void *)param_2[10];
    iVar1 = *(int *)(param_2 + 0xb);
    pvVar3 = (void *)param_1[10];
    if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 0xb));
      param_1[10] = pvVar3;
    }
    memcpy(pvVar3,pvVar2,(long)iVar1 << 2);
    *(int *)(param_1 + 0xb) = iVar1;
  }
  return param_1;
}


