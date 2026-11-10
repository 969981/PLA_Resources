/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d521c; name: FUN_032d521c
 */


long FUN_032d521c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar10 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar11 = *param_5;
  uVar7 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  uVar12 = uVar11 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar7) {
    local_54 = uVar7;
  }
  local_80[0] = (ulong)local_54 * 0x38;
  if ((int)local_54 < (int)uVar12 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar11 = *param_5;
    uVar12 = uVar11 & 0x3fffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    lVar5 = 0;
    uVar8 = uVar10;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar5);
      puVar2 = (undefined8 *)(lVar4 + lVar5);
      lVar5 = lVar5 + 0x38;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)((long)puVar1 + 0x14);
      puVar2[3] = puVar1[3];
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar8 = uVar8 - 1;
      uVar3 = puVar1[4];
      uVar9 = puVar1[6];
      puVar2[5] = puVar1[5];
      puVar2[6] = uVar9;
      puVar2[4] = uVar3;
    } while (uVar8 != 0);
    puVar6 = (ulong *)(param_3 + 0x18);
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_032e0c40(*puVar6 & 0xfffffffffffffffe);
      }
      uVar10 = uVar10 - 1;
      puVar6 = puVar6 + 7;
    } while (uVar10 != 0);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar12 * 0x38);
  }
  if (local_80[0] < 0xdffffffc8) {
    uVar7 = (uint)(local_80[0] / 0x38);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return lVar4;
}


