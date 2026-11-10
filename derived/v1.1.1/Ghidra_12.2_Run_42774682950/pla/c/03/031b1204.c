/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b1204; name: FUN_031b1204
 */


undefined8 * FUN_031b1204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  if (param_2 != param_1) {
    iVar3 = *(int *)(param_2 + 1);
    pvVar6 = (void *)*param_2;
    pvVar4 = (void *)*param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar3) {
      pvVar4 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar3,4,pvVar4,*(undefined4 *)(param_1 + 1));
      *param_1 = pvVar4;
    }
    memcpy(pvVar4,pvVar6,(long)iVar3 << 2);
    *(int *)(param_1 + 1) = iVar3;
    iVar3 = *(int *)(param_2 + 3);
    pvVar6 = (void *)param_2[2];
    pvVar4 = (void *)param_1[2];
    if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) < iVar3) {
      pvVar4 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar3,4,pvVar4,*(undefined4 *)(param_1 + 3));
      param_1[2] = pvVar4;
    }
    memcpy(pvVar4,pvVar6,(long)iVar3 << 2);
    *(int *)(param_1 + 3) = iVar3;
    iVar3 = *(int *)(param_2 + 5);
    pvVar6 = (void *)param_2[4];
    pvVar4 = (void *)param_1[4];
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < iVar3) {
      pvVar4 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar3,4,pvVar4,*(undefined4 *)(param_1 + 5));
      param_1[4] = pvVar4;
    }
    memcpy(pvVar4,pvVar6,(long)iVar3 << 2);
    *(int *)(param_1 + 5) = iVar3;
    iVar3 = *(int *)(param_2 + 7);
    pvVar6 = (void *)param_2[6];
    pvVar4 = (void *)param_1[6];
    if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar3) {
      pvVar4 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar3,4,pvVar4,*(undefined4 *)(param_1 + 7));
      param_1[6] = pvVar4;
    }
    memcpy(pvVar4,pvVar6,(long)iVar3 << 2);
    *(int *)(param_1 + 7) = iVar3;
  }
  uVar1 = param_2[8];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  param_1[8] = uVar1;
  uVar1 = param_2[0xb];
  uVar5 = param_2[0xc];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar5;
  uVar1 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar2;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar5;
  return param_1;
}


