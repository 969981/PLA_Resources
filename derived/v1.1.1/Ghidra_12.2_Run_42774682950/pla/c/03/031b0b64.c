/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b0b64; name: FUN_031b0b64
 */


void FUN_031b0b64(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_0430b5d8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  puVar5 = PTR_PTR_0434a080;
  uVar4 = *(uint *)(param_2 + 0x38);
  puVar11 = *(undefined8 **)(param_2 + 0x30);
  local_34 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,0x10,&local_34);
    param_1[6] = puVar6;
    *(uint *)(param_1 + 7) = uVar4;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    if (uVar4 != 1) {
      iVar10 = (uVar4 & 1) - uVar4;
      puVar7 = puVar6;
      do {
        puVar7[1] = puVar11[1];
        *puVar7 = *puVar11;
        puVar7[3] = puVar11[3];
        puVar2 = puVar11 + 2;
        puVar6 = puVar7 + 4;
        puVar11 = puVar11 + 4;
        iVar10 = iVar10 + 2;
        puVar7[2] = *puVar2;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if ((uVar4 & 1) != 0) {
      puVar6[1] = puVar11[1];
      *puVar6 = *puVar11;
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x50);
  puVar12 = *(undefined4 **)(param_2 + 0x48);
  local_38 = uVar4;
  if ((int)uVar4 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)FUN_032cf190(puVar5,4,&local_38);
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)((long)param_1 + 0x54) = local_38;
    uVar3 = uVar4 & 3;
    param_1[9] = puVar8;
    if (2 < uVar4 - 1) {
      iVar10 = uVar3 - uVar4;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar12;
        puVar9[1] = puVar12[1];
        puVar9[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar8 = puVar9 + 4;
        puVar12 = puVar12 + 4;
        iVar10 = iVar10 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar12;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  memcpy(param_1 + 0xb,(void *)(param_2 + 0x58),0xa8);
  return;
}


