/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2db4; name: FUN_02fa2db4
 */


void FUN_02fa2db4(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_042b81c8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  puVar6 = PTR_PTR_0434a080;
  uVar5 = *(uint *)(param_2 + 0x20);
  puVar10 = *(undefined2 **)(param_2 + 0x18);
  local_34 = uVar5;
  if ((int)uVar5 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    puVar7 = (undefined2 *)FUN_032cf190(PTR_PTR_0434a080,2,&local_34);
    *(uint *)(param_1 + 4) = uVar5;
    *(uint *)((long)param_1 + 0x24) = local_34;
    uVar2 = uVar5 & 3;
    param_1[3] = puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar10;
        puVar8[1] = puVar10[1];
        puVar8[2] = puVar10[2];
        puVar1 = puVar10 + 3;
        puVar7 = puVar8 + 4;
        puVar10 = puVar10 + 4;
        iVar9 = iVar9 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar10;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x30);
  puVar10 = *(undefined2 **)(param_2 + 0x28);
  if ((int)uVar5 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_38 = uVar5;
    puVar7 = (undefined2 *)FUN_032cf190(puVar6,2,&local_38);
    *(uint *)(param_1 + 6) = uVar5;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar5 & 3;
    param_1[5] = puVar7;
    if (2 < uVar5 - 1) {
      iVar9 = uVar2 - uVar5;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar10;
        puVar8[1] = puVar10[1];
        puVar8[2] = puVar10[2];
        puVar1 = puVar10 + 3;
        puVar7 = puVar8 + 4;
        puVar10 = puVar10 + 4;
        iVar9 = iVar9 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar10;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  return;
}


