/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b0d28; name: FUN_031b0d28
 */


long FUN_031b0d28(long param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (param_2 != param_1) {
    pvVar4 = *(void **)(param_2 + 0x30);
    iVar1 = *(int *)(param_2 + 0x38);
    pvVar2 = *(void **)(param_1 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x10,pvVar2,
                                    *(undefined4 *)(param_1 + 0x38));
      *(void **)(param_1 + 0x30) = pvVar2;
    }
    memcpy(pvVar2,pvVar4,(long)iVar1 << 4);
    *(int *)(param_1 + 0x38) = iVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    iVar1 = *(int *)(param_2 + 0x50);
    pvVar4 = *(void **)(param_2 + 0x48);
    pvVar2 = *(void **)(param_1 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
      pvVar2 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,4,pvVar2,*(undefined4 *)(param_1 + 0x50))
      ;
      *(void **)(param_1 + 0x48) = pvVar2;
    }
    memcpy(pvVar2,pvVar4,(long)iVar1 << 2);
    *(int *)(param_1 + 0x50) = iVar1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  return param_1;
}


