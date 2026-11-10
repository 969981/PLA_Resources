/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317d3e8; name: FUN_0317d3e8
 */


long FUN_0317d3e8(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint local_94;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar9 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar11 = *param_5;
  uVar6 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  local_94 = uVar11 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_7c = uVar6;
  }
  local_88 = (ulong)local_7c * 0x38;
  if ((int)local_7c < (int)local_94 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar11 = *param_5;
    local_94 = uVar11 & 0x3fffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar4 = PTR_PTR_0434a090;
  puVar3 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar7 = 0;
    uVar10 = uVar9;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      puVar2 = (undefined4 *)(lVar5 + lVar7);
      *puVar2 = *puVar1;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0x8000000000000000;
      if ((int)puVar1[5] < 0) {
        FUN_032bcf84(puVar4,puVar1 + 2,2);
      }
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0x8000000000000000;
      if ((int)puVar1[9] < 0) {
        FUN_032bcf84(puVar3,puVar1 + 6,4);
      }
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
      puVar2[8] = puVar1[8];
      puVar2[9] = puVar1[9];
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar2[10] = puVar1[10];
      uVar10 = uVar10 - 1;
      lVar7 = lVar7 + 0x38;
      *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    } while (uVar10 != 0);
    puVar8 = (uint *)(param_3 + 0x14);
    do {
      puVar8[3] = 0;
      if ((-1 < (int)puVar8[4]) && (*(long *)(puVar8 + 1) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*(long *)(puVar8 + 1),puVar8[4] << 2);
      }
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[4] = 0x80000000;
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))
                  (puVar4,*(long *)(puVar8 + -3),(*puVar8 & 0x3fffffff) << 1);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      uVar9 = uVar9 - 1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 0xe;
    } while (uVar9 != 0);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)local_94 * 0x38);
  }
  if (local_88 < 0xdffffffc8) {
    uVar6 = (uint)(local_88 / 0x38);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return lVar5;
}


