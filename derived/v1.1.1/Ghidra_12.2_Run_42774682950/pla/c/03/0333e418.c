/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333e418; name: FUN_0333e418
 */


void FUN_0333e418(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint local_38;
  uint local_34;
  
  *param_1 = &PTR_LAB_0435eac8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  puVar3 = PTR_PTR_0434a080;
  uVar2 = *(uint *)(param_2 + 0x20);
  puVar8 = *(undefined8 **)(param_2 + 0x18);
  local_34 = uVar2;
  if ((int)uVar2 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    puVar4 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,0x10,&local_34);
    param_1[3] = puVar4;
    *(uint *)(param_1 + 4) = uVar2;
    *(uint *)((long)param_1 + 0x24) = local_34;
    if (uVar2 != 1) {
      iVar6 = (uVar2 & 1) - uVar2;
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar8[1];
        *puVar5 = *puVar8;
        puVar5[3] = puVar8[3];
        puVar7 = puVar8 + 2;
        puVar4 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        iVar6 = iVar6 + 2;
        puVar5[2] = *puVar7;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar8[1];
      *puVar4 = *puVar8;
    }
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 0x30);
  puVar8 = *(undefined8 **)(param_2 + 0x28);
  if ((int)uVar2 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_38 = uVar2;
    puVar4 = (undefined8 *)FUN_032cf190(puVar3,0x10,&local_38);
    param_1[5] = puVar4;
    *(uint *)(param_1 + 6) = uVar2;
    *(uint *)((long)param_1 + 0x34) = local_38;
    if (uVar2 != 1) {
      iVar6 = (uVar2 & 1) - uVar2;
      puVar5 = puVar4;
      puVar7 = puVar8;
      do {
        uVar1 = puVar7[1];
        puVar4 = puVar5 + 4;
        *puVar5 = *puVar7;
        puVar5[1] = uVar1;
        puVar8 = puVar7 + 4;
        uVar1 = puVar7[3];
        iVar6 = iVar6 + 2;
        puVar5[2] = puVar7[2];
        puVar5[3] = uVar1;
        puVar5 = puVar4;
        puVar7 = puVar8;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar1 = puVar8[1];
      *puVar4 = *puVar8;
      puVar4[1] = uVar1;
    }
  }
  return;
}


