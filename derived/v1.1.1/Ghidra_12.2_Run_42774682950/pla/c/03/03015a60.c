/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03015a60; name: FUN_03015a60
 */


/* WARNING: Removing unreachable block (ram,0x03015ab4) */

void FUN_03015a60(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined *local_68;
  uint *local_60;
  undefined4 *puStack_58;
  
  puVar4 = PTR_PTR_0434a080;
  uVar2 = *(uint *)(*(long *)(*(long *)*param_1 + 0x4b0) + 0x1c);
  uVar15 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    return;
  }
  if (uVar2 == 1) {
    lVar11 = 0;
    uVar6 = 0;
LAB_03015ae8:
    uVar8 = (ulong)(*(int *)(param_1 + lVar11 * 3 + 9) + uVar6);
  }
  else {
    lVar11 = 0;
    uVar8 = 0;
    piVar12 = (int *)(param_1 + 0xc);
    do {
      lVar11 = lVar11 + 2;
      uVar6 = *piVar12 + piVar12[-6] + (int)uVar8;
      uVar8 = (ulong)uVar6;
      piVar12 = piVar12 + 0xc;
    } while (uVar15 - (uVar15 & 1) != lVar11);
    if ((uVar2 & 1) != 0) goto LAB_03015ae8;
  }
  uVar2 = *(uint *)((long)param_2 + 0xc) & 0x3fffffff;
  local_74 = (uint)uVar8;
  if ((int)local_74 <= (int)uVar2) goto LAB_03015bc4;
  puVar14 = (undefined4 *)*param_2;
  uVar6 = *(uint *)(param_2 + 1);
  uVar16 = (ulong)uVar6;
  local_78 = 4;
  local_80 = -(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
  if ((int)local_74 < 0) {
    local_70 = 2;
    local_68 = &DAT_0411b3a0;
    local_60 = &local_74;
    puStack_58 = &local_78;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_70);
    uVar8 = (ulong)local_74;
    if ((int)uVar2 <= (int)local_74) goto LAB_03015b34;
LAB_03015b40:
    local_70 = 1;
    local_60 = &local_74;
    local_68 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_70);
  }
  else {
    if ((int)local_74 < (int)uVar2) goto LAB_03015b40;
LAB_03015b34:
    if (0x3fffffff < (int)uVar8) goto LAB_03015b40;
  }
  iVar3 = *(int *)((long)param_2 + 0xc);
  puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
  if (0 < (int)uVar6) {
    puVar9 = puVar5;
    puVar10 = puVar14;
    do {
      uVar16 = uVar16 - 1;
      *puVar9 = *puVar10;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar16 != 0);
  }
  if (-1 < iVar3) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,puVar14,iVar3 << 2);
  }
  if (local_80 < 0xfffffffc) {
    uVar7 = (undefined4)(local_80 >> 2);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *(undefined4 *)((long)param_2 + 0xc) = uVar7;
  *param_2 = (long)puVar5;
LAB_03015bc4:
  uVar8 = 0;
  do {
    uVar2 = *(uint *)(param_1 + uVar8 * 3 + 9);
    if (1 < (int)uVar2) {
      puVar14 = (undefined4 *)(*param_2 + (long)(int)param_2[1] * 4);
      *(uint *)(param_2 + 1) = (int)param_2[1] + uVar2;
      plVar1 = param_1 + uVar8 * 3 + 8;
      uVar16 = (ulong)(uVar2 - 1) & 3;
      *puVar14 = 0;
      if ((ulong)uVar2 - 2 < 3) {
        lVar13 = 1;
      }
      else {
        lVar11 = 0;
        do {
          lVar13 = lVar11;
          lVar11 = lVar13 * 4;
          puVar14[lVar13 + 1] = *(undefined4 *)(*plVar1 + lVar11 + 4);
          puVar14[lVar13 + 2] = *(undefined4 *)(*plVar1 + lVar11 + 8);
          puVar14[lVar13 + 3] = *(undefined4 *)(*plVar1 + lVar11 + 0xc);
          puVar14[lVar13 + 4] = *(undefined4 *)(*plVar1 + lVar11 + 0x10);
          lVar11 = lVar13 + 4;
        } while (~uVar16 + (ulong)uVar2 != lVar13 + 4);
        lVar13 = lVar13 + 5;
      }
      if ((uVar2 - 1 & 3) != 0) {
        lVar13 = lVar13 << 2;
        do {
          uVar16 = uVar16 - 1;
          *(undefined4 *)((long)puVar14 + lVar13) = *(undefined4 *)(*plVar1 + lVar13);
          lVar13 = lVar13 + 4;
        } while (uVar16 != 0);
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != uVar15);
  return;
}


