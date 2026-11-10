/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bd934; name: FUN_031bd934
 */


long FUN_031bd934(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (param_2 != param_1) {
    pvVar5 = *(void **)(param_2 + 0x30);
    iVar1 = *(int *)(param_2 + 0x38);
    pvVar3 = *(void **)(param_1 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar3,
                                    *(undefined4 *)(param_1 + 0x38));
      *(void **)(param_1 + 0x30) = pvVar3;
    }
    memcpy(pvVar3,pvVar5,(long)iVar1 << 4);
    *(int *)(param_1 + 0x38) = iVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    iVar1 = *(int *)(param_2 + 0x50);
    pvVar5 = *(void **)(param_2 + 0x48);
    pvVar3 = *(void **)(param_1 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
      pvVar3 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar3,*(undefined4 *)(param_1 + 0x50))
      ;
      *(void **)(param_1 + 0x48) = pvVar3;
    }
    memcpy(pvVar3,pvVar5,(long)iVar1 << 2);
    *(int *)(param_1 + 0x50) = iVar1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  return param_1;
}


