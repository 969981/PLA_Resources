/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031be540; name: FUN_031be540
 */


void FUN_031be540(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  puVar6 = (uint *)(param_2 + 0x44);
  iVar3 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(int *)(param_2 + 0x54) = param_3;
  lVar2 = *(long *)(param_2 + 0x38);
  *(undefined1 *)(param_2 + 0x5c) = 1;
  iVar1 = iVar3 + 1;
  if ((int)(*puVar6 & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_0318a008(PTR_PTR_0434a080,iVar1,lVar2,iVar3,puVar6);
    iVar3 = *(int *)(param_2 + 0x40);
    *(long *)(param_2 + 0x38) = lVar2;
  }
  puVar4 = (undefined8 *)(lVar2 + (long)iVar3 * 0x30);
  *(int *)(param_2 + 0x40) = iVar1;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar4[1] = *(undefined8 *)(param_1 + 0x28);
  *puVar4 = uVar7;
  *(uint *)((long)puVar4 + 0x24) = *(uint *)(param_1 + 0x40) >> 0x16;
  iVar3 = *(int *)(param_2 + 0x40);
  lVar2 = *(long *)(param_2 + 0x38);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_2 + 0x44) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_0318a008(PTR_PTR_0434a080,iVar1,lVar2,iVar3,puVar6);
    iVar3 = *(int *)(param_2 + 0x40);
    *(long *)(param_2 + 0x38) = lVar2;
  }
  puVar5 = (undefined8 *)(lVar2 + (long)iVar3 * 0x30);
  *(int *)(param_2 + 0x40) = iVar1;
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)param_3 * 0x10);
  uVar7 = *puVar4;
  puVar5[1] = puVar4[1];
  *puVar5 = uVar7;
  *(uint *)((long)puVar5 + 0x24) = *(uint *)(*(long *)(param_1 + 0x48) + (long)param_3 * 4) >> 0x16;
  if ((param_4 != 0) && (param_5 == 0)) {
    iVar3 = *(int *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x18);
    iVar1 = iVar3 + 1;
    if ((int)(*(uint *)(param_2 + 0x24) & 0x3fffffff) <= iVar3) {
      lVar2 = FUN_0315ac2c(PTR_PTR_0434a080,iVar1);
      iVar3 = *(int *)(param_2 + 0x20);
      *(long *)(param_2 + 0x18) = lVar2;
    }
    *(undefined4 *)(lVar2 + (long)iVar3 * 4) = *(undefined4 *)(param_1 + 0x40);
    *(int *)(param_2 + 0x20) = iVar1;
  }
  return;
}


