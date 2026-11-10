/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319c6e8; name: FUN_0319c6e8
 */


void FUN_0319c6e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long local_a8;
  undefined8 local_a0;
  int *piStack_98;
  long local_80;
  undefined8 local_78;
  ulong local_70;
  int local_64;
  
  *param_1 = &PTR_LAB_042f0530;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  plVar16 = param_1 + 5;
  *plVar16 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = &DAT_03aad864;
  uVar17 = (ulong)(param_6 - param_5) >> 2;
  iVar8 = (int)uVar17;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  if (iVar8 < 2) {
    uVar18 = 0x80000000;
  }
  else {
    FUN_0319da60(param_5,0,iVar8 + -1);
    uVar18 = *(uint *)((long)param_1 + 0x24);
  }
  uVar14 = uVar18 & 0x3fffffff;
  if ((int)uVar14 < iVar8) {
    puVar15 = (undefined8 *)param_1[3];
    uVar2 = *(uint *)(param_1 + 4);
    uVar21 = (ulong)uVar2;
    if (0x3fffffff < iVar8) {
      FUN_032bd0a8(uVar17 & 0xffffffff);
      uVar18 = *(uint *)((long)param_1 + 0x24);
      uVar14 = uVar18 & 0x3fffffff;
    }
    puVar3 = PTR_PTR_0434a090;
    uVar5 = (uVar18 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar17 = uVar17 & 0xffffffff;
    if (iVar8 <= (int)uVar5) {
      uVar17 = (ulong)uVar5;
    }
    local_70 = uVar17 * 0xc;
    local_64 = (int)uVar17;
    if ((local_64 < (int)uVar14) || (0x3fffffff < local_64)) {
      local_a8 = 1;
      piStack_98 = &local_64;
      local_a0 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_a8);
      uVar18 = *(uint *)((long)param_1 + 0x24);
      uVar14 = uVar18 & 0x3fffffff;
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_70,&local_70);
    if (0 < (int)uVar2) {
      puVar9 = puVar4;
      puVar11 = puVar15;
      do {
        uVar13 = *puVar11;
        uVar21 = uVar21 - 1;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
        *puVar9 = uVar13;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
      } while (uVar21 != 0);
    }
    if (-1 < (int)uVar18) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar15,(ulong)uVar14 * 0xc);
    }
    if (local_70 < 0x2fffffff4) {
      uVar6 = (undefined4)(local_70 / 0xc);
    }
    else {
      uVar6 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar6;
    param_1[3] = puVar4;
  }
  iVar7 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != iVar8) {
    *(int *)(param_1 + 4) = iVar8;
    iVar7 = iVar8;
  }
  puVar3 = PTR_PTR_0434a080;
  if (0 < iVar7) {
    lVar19 = 0;
    lVar20 = 0;
    do {
      uVar18 = *(uint *)(param_5 + lVar20 * 4);
      lVar10 = param_1[3];
      *(uint *)(lVar10 + lVar19) = uVar18;
      lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar18 >> 0x16) * 0xf0) +
                        0x20);
      if ((*(int *)(lVar12 + 0x108) != 0) &&
         ((*(byte *)(*(long *)(lVar12 + 0x100) + ((ulong)uVar18 & 0x3fffff)) >> 1 & 1) != 0)) {
        uVar18 = *(uint *)(*(long *)(lVar12 + 0x168) + ((ulong)uVar18 & 0x3fffff) * 4) |
                 uVar18 & 0xffc00000;
      }
      lVar10 = lVar10 + lVar19;
      local_70 = CONCAT44(local_70._4_4_,uVar18);
      *(uint *)(lVar10 + 4) = uVar18;
      local_a8 = 0;
      local_a0 = (undefined *)0x8000000000000000;
      local_80 = 0;
      local_78 = -0x8000000000000000;
      FUN_0319cae0(plVar16,&local_70,&local_a8);
      lVar12 = local_78;
      uVar18 = local_78._4_4_;
      local_78 = (ulong)local_78._4_4_ << 0x20;
      if ((-1 < lVar12) && (local_80 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_80,uVar18 << 2);
      }
      lVar12 = (long)local_a0;
      local_78 = CONCAT44(0x80000000,(undefined4)local_78);
      uVar17 = (ulong)local_a0._4_4_;
      local_80 = 0;
      local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
      if ((-1 < lVar12) && (local_a8 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_a8,(uVar17 & 0x3fffffff) * 0x14);
      }
      *(undefined4 *)(lVar10 + 8) = 0xffffffff;
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 0xc;
    } while (lVar20 < *(int *)(param_1 + 4));
  }
  lVar20 = (long)*(int *)(param_1 + 6);
  if (0 < *(int *)(param_1 + 6)) {
    puVar1 = (undefined4 *)(*plVar16 + (lVar20 + -1) * 0x40);
    FUN_0319dc9c(puVar1 + 2,param_2,*puVar1,param_3,param_4);
    if (-1 < (int)(lVar20 + 0xfffffffe)) {
      puVar1 = (undefined4 *)(*plVar16 + ((lVar20 + 0xfffffffe << 0x20) >> 0x1a));
      FUN_0319dc9c(puVar1 + 2,param_2,*puVar1,param_3,param_4);
      lVar20 = lVar20 + 0x1fffffffd;
      iVar8 = (int)lVar20;
      while (-1 < iVar8) {
        puVar1 = (undefined4 *)(*plVar16 + ((lVar20 << 0x20) >> 0x1a));
        FUN_0319dc9c(puVar1 + 2,param_2,*puVar1,param_3,param_4);
        lVar20 = lVar20 + 0xffffffff;
        iVar8 = (int)lVar20;
      }
    }
  }
  param_1[2] = 0xffffffff00000000;
  return;
}


