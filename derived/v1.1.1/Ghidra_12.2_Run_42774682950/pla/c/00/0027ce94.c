/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027ce94; name: FUN_0027ce94
 */


void FUN_0027ce94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar11 = param_8[5];
  uVar7 = param_8[4];
  uVar3 = *param_7;
  uVar4 = param_7[1];
  uVar12 = param_8[1];
  uVar8 = *param_8;
  uVar13 = param_8[3];
  uVar9 = param_8[2];
  fVar15 = *(float *)(param_6 + 0x10);
  iVar5 = *(int *)(param_8 + 0xe);
  uVar14 = param_8[9];
  uVar10 = param_8[8];
  uVar1 = *(undefined4 *)((long)param_8 + 0x7c);
  uVar2 = *(undefined4 *)(param_8 + 0x10);
  local_70 = 0;
  uStack_68 = 0;
  puVar6 = (undefined8 *)FUN_0028cb08(param_3,&local_70,0x60);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_00271760(0,0x8000);
    iVar5 = *(int *)(param_6 + 8);
  }
  else {
    puVar6[1] = uVar11;
    *puVar6 = uVar7;
    *(undefined4 *)(puVar6 + 8) = uVar1;
    puVar6[5] = uVar12;
    puVar6[4] = uVar8;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined4 *)(puVar6 + 9) = 0;
    *(undefined4 *)((long)puVar6 + 0x4c) = uVar2;
    puVar6[7] = uVar13;
    puVar6[6] = uVar9;
    *(float *)((long)puVar6 + 0x44) = fVar15 * (float)(iVar5 + -1) + (float)iVar5;
    puVar6[10] = uVar10;
    *(int *)(puVar6 + 0xb) = (int)uVar14;
    *(undefined4 *)((long)puVar6 + 0x5c) = 0;
    iVar5 = *(int *)(param_5 + 0x148);
    if (*(int *)(param_5 + 0x144) != -1) {
      FUN_00878324(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
    }
    if (iVar5 != -1) {
      FUN_00878324(param_1,iVar5,4,&local_70,0x60);
    }
    FUN_0028cc20(param_3);
    FUN_008774bc(param_1,4,*(undefined4 *)(param_8 + 0xf),
                 *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x74));
    iVar5 = *(int *)(param_6 + 8);
  }
  if (iVar5 == 1) {
    uVar11 = param_8[5];
    uVar7 = param_8[4];
    uVar3 = *param_7;
    uVar4 = param_7[1];
    uVar12 = param_8[1];
    uVar8 = *param_8;
    uVar13 = param_8[3];
    uVar9 = param_8[2];
    fVar15 = *(float *)(param_6 + 0x10);
    iVar5 = *(int *)(param_8 + 0xe);
    uVar14 = param_8[9];
    uVar10 = param_8[8];
    uVar1 = *(undefined4 *)((long)param_8 + 0x7c);
    uVar2 = *(undefined4 *)(param_8 + 0x10);
    local_70 = 0;
    uStack_68 = 0;
    puVar6 = (undefined8 *)FUN_0028cb08(param_3,&local_70,0x60);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_00271760(0,0x8000);
    }
    else {
      puVar6[1] = uVar11;
      *puVar6 = uVar7;
      *(undefined4 *)(puVar6 + 8) = uVar1;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      *(float *)((long)puVar6 + 0x44) = fVar15 * (float)(iVar5 + -1) + (float)iVar5;
      puVar6[5] = uVar12;
      puVar6[4] = uVar8;
      *(undefined4 *)(puVar6 + 9) = 0x3f800000;
      *(undefined4 *)((long)puVar6 + 0x4c) = uVar2;
      puVar6[10] = uVar10;
      puVar6[7] = uVar13;
      puVar6[6] = uVar9;
      *(int *)(puVar6 + 0xb) = (int)uVar14;
      *(undefined4 *)((long)puVar6 + 0x5c) = 0;
      iVar5 = *(int *)(param_5 + 0x148);
      if (*(int *)(param_5 + 0x144) != -1) {
        FUN_00878324(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
      }
      if (iVar5 != -1) {
        FUN_00878324(param_1,iVar5,4,&local_70,0x60);
      }
      FUN_0028cc20(param_3);
      FUN_008774bc(param_1,4,*(undefined4 *)(param_8 + 0xf),
                   *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x74));
    }
  }
  return;
}


