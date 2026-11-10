/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6ab50; name: FUN_02f6ab50
 */


long FUN_02f6ab50(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar8 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar6 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  uVar10 = uVar9 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_54 = uVar6;
  }
  local_80[0] = (ulong)local_54 * 0x50;
  if ((int)local_54 < (int)uVar10 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar9 = *param_5;
    uVar10 = uVar9 & 0x3fffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    lVar5 = 0;
    uVar7 = uVar8;
    do {
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      puVar1[2] = 1;
      *puVar1 = &PTR_LAB_042afc90;
      puVar1[1] = 0xffffffff;
      uVar7 = uVar7 - 1;
      puVar1[4] = &PTR_LAB_042afcc0;
      uVar2 = *(undefined8 *)((long)param_3 + lVar5 + 0x28);
      uVar3 = *(undefined8 *)((long)param_3 + lVar5 + 0x30);
      *puVar1 = &PTR_LAB_042afbe8;
      puVar1[5] = uVar2;
      puVar1[6] = uVar3;
      puVar1[4] = &PTR_LAB_042afc30;
      puVar1[7] = *(undefined8 *)((long)param_3 + lVar5 + 0x38);
      *(undefined4 *)(puVar1 + 8) = *(undefined4 *)((long)param_3 + lVar5 + 0x40);
      lVar5 = lVar5 + 0x50;
    } while (uVar7 != 0);
    plVar11 = param_3;
    do {
      (**(code **)(*plVar11 + 8))(plVar11);
      uVar8 = uVar8 - 1;
      plVar11 = plVar11 + 10;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0x50);
  }
  if (local_80[0] < 0x13ffffffb0) {
    uVar6 = (uint)(local_80[0] / 0x50);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return lVar4;
}


