/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c0eb0; name: FUN_030c0eb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_030c0eb0(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  uint *puVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  ulong *local_10e8 [512];
  uint local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  ulong *local_a8;
  uint local_a0;
  uint local_9c;
  ulong local_90;
  uint local_84;
  int *local_80;
  undefined8 local_78;
  uint *puStack_70;
  
  puVar23 = *(undefined8 **)(param_2 + 0x4e0);
  plVar6 = (long *)*puVar23;
  puVar30 = (undefined8 *)(param_1 + 0x80);
  *puVar30 = plVar6;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  iVar24 = *(int *)(puVar23 + 0xb) + -1;
  if (*(int *)(puVar23 + 0xb) < 1) {
    lVar31 = puVar23[1];
    (**(code **)(*plVar6 + 0x20))(plVar6,lVar31,6);
    *(undefined4 *)(puVar23 + 0xb) = 5;
    puVar23 = (undefined8 *)(lVar31 + 0x28);
  }
  else {
    *(int *)(puVar23 + 0xb) = iVar24;
    puVar23 = (undefined8 *)(puVar23[1] + (long)iVar24 * 8);
  }
  puVar5 = PTR_PTR_0434a080;
  puVar23 = (undefined8 *)*puVar23;
  puVar23[2] = 0;
  puVar23[3] = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  *(undefined4 *)((long)puVar23 + 4) = *(undefined4 *)(param_1 + 0x98);
  iVar24 = *(int *)(param_1 + 0x98);
  lVar31 = (long)iVar24;
  puVar27 = (uint *)(param_1 + 0x9c);
  uVar26 = *puVar27;
  uVar9 = iVar24 + 1;
  if (iVar24 < (int)(uVar26 & 0x3fffffff)) {
    lVar7 = *(long *)(param_1 + 0x90);
  }
  else {
    uVar18 = *(undefined8 *)(param_1 + 0x90);
    if (0x3ffffffe < iVar24) {
      FUN_032bd0a8(uVar9);
      uVar26 = *puVar27;
    }
    uVar26 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar26) {
      uVar26 = 0x3fffffff;
    }
    uVar2 = uVar9;
    if ((int)uVar9 <= (int)uVar26) {
      uVar2 = uVar26;
    }
    lVar7 = FUN_032bd1d4(puVar5,uVar2,8,uVar18,iVar24,puVar27);
    iVar24 = *(int *)(param_1 + 0x98);
    *(long *)(param_1 + 0x90) = lVar7;
  }
  *(undefined8 **)(lVar7 + (long)iVar24 * 8) = puVar23;
  *(uint *)(param_1 + 0x98) = uVar9;
  *(char **)(param_1 + 0x170) = "hknpPrepareNarrowPhasePairsTask::m_workItemStream";
  local_b0 = *(undefined8 **)(param_2 + 0x4e0);
  local_a8 = *(ulong **)(*(long *)(param_1 + 0x90) + lVar31 * 8);
  local_a0 = (uint)*local_a8 >> 0x10;
  local_9c = (uint)*local_a8 & 0xffff;
  *(uint *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - local_9c;
  lVar31 = tpidr_el0;
  local_b8 = puVar30;
  if (*(long *)(lVar31 + 0x38d490) == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar7;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar31 + 0x38d490) + 0x10);
  }
  if (lVar7 != 0) {
    puVar23 = *(undefined8 **)(lVar7 + 8);
    uVar12 = *(ulong *)(lVar7 + 0x10);
    uVar17 = (ulong)((long)puVar23 + 0x17) & 0xfffffffffffffff8;
    if (uVar17 <= uVar12) {
      *(ulong *)(lVar7 + 8) = uVar17;
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar23 = "TtNarrowPhase";
        uVar18 = nn::os::GetSystemTick();
        puVar23[1] = uVar18;
        puVar23 = *(undefined8 **)(lVar7 + 8);
        uVar12 = *(ulong *)(lVar7 + 0x10);
      }
    }
    uVar17 = (ulong)((long)puVar23 + 0x17) & 0xfffffffffffffff8;
    if (uVar17 <= uVar12) {
      *(ulong *)(lVar7 + 8) = uVar17;
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar23 = "TtPairsTask";
        uVar18 = nn::os::GetSystemTick();
        puVar23[1] = uVar18;
        puVar23 = *(undefined8 **)(lVar7 + 8);
        uVar12 = *(ulong *)(lVar7 + 0x10);
      }
    }
    uVar17 = (ulong)((long)puVar23 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar17 <= uVar12) && (*(ulong *)(lVar7 + 8) = uVar17, puVar23 != (undefined8 *)0x0)) {
      *puVar23 = "LtPrepare";
      puVar23[2] = "StActivation";
      uVar18 = nn::os::GetSystemTick();
      puVar23[1] = uVar18;
    }
  }
  lVar25 = *(long *)(param_2 + 8);
  lVar29 = *(long *)(lVar25 + 0x698);
  lVar28 = *(long *)(lVar25 + 0x500);
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0x8000000000000000;
  iVar24 = *(int *)(*(long *)(param_1 + 0x38) + 8);
  uVar9 = *(int *)(lVar28 + 0x948) + iVar24 + *(int *)(lVar28 + 0x548);
  local_c8 = lVar7;
  local_c0 = lVar7;
  if (0 < (int)uVar9) {
    if (0x3fffffff < (int)uVar9) {
      FUN_032bd0a8(uVar9);
    }
    local_80 = (int *)((ulong)uVar9 << 4);
    local_90 = CONCAT44(local_90._4_4_,uVar9);
    if (uVar9 >> 0x1e == 0) {
      uVar9 = 0x80000000;
    }
    else {
      local_10e8[0] = (ulong *)0x1;
      local_10e8[2] = &local_90;
      local_10e8[1] = (ulong *)&DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",local_10e8);
      uVar9 = local_d0._4_4_;
    }
    puVar23 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_80,&local_80);
    if (-1 < (int)uVar9) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,0,(ulong)(uVar9 & 0x3fffffff) << 4);
    }
    if (local_80 < (int *)0x3fffffff0) {
      uVar10 = (undefined4)((ulong)local_80 >> 4);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    local_d0 = CONCAT44(uVar10,(int)local_d0);
    local_d8 = puVar23;
  }
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  local_e8 = 0;
  if (lVar29 == 0) {
LAB_030c114c:
    if (lVar7 == 0) goto LAB_030c1164;
LAB_030c1150:
    puVar23 = *(undefined8 **)(lVar7 + 8);
    uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(lVar7 + 0x10) < uVar12) ||
       (*(ulong *)(lVar7 + 8) = uVar12, puVar23 == (undefined8 *)0x0)) goto LAB_030c1164;
    *puVar23 = "StCreateNewCollisionCaches";
    uVar18 = nn::os::GetSystemTick();
    puVar23[1] = uVar18;
    iVar24 = *(int *)(lVar28 + 0x948);
  }
  else {
    if (lVar7 != 0) {
      puVar23 = *(undefined8 **)(lVar7 + 8);
      uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= *(ulong *)(lVar7 + 0x10)) &&
         (*(ulong *)(lVar7 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
        *puVar23 = "StActivateBodies";
        uVar18 = nn::os::GetSystemTick();
        puVar23[1] = uVar18;
      }
    }
    puVar13 = *(undefined4 **)
               (*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8);
    uVar10 = *puVar13;
    uVar1 = *puVar13;
    *(undefined4 **)(param_2 + 0x730) = puVar13;
    *(short *)(param_2 + 0x738) = (short)((uint)uVar10 >> 0x10);
    *(short *)(param_2 + 0x73a) = (short)uVar1;
    *(int *)(param_2 + 0x73c) = -*(int *)(param_2 + 0x528);
    FUN_03051f1c(lVar29,param_2,lVar28 + 0x540,*(undefined8 *)(param_1 + 0x38),&local_b8,local_10e8,
                 **(undefined8 **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x70));
    puVar23 = local_d8;
    iVar11 = *(int *)(*(long *)(param_1 + 0x38) + 8);
    if (iVar24 < iVar11) {
      uVar26 = local_d0._4_4_ & 0x3fffffff;
      uVar9 = (uVar26 - iVar24) + iVar11;
      if ((int)uVar26 < (int)uVar9) {
        iVar24 = (int)local_d0;
        uVar12 = local_d0 & 0xffffffff;
        if (0x3fffffff < (int)uVar9) {
          FUN_032bd0a8(uVar9);
          uVar26 = local_d0._4_4_ & 0x3fffffff;
        }
        uVar2 = (local_d0._4_4_ & 0x3fffffff) * 2;
        if (uVar2 < 0x3fffffff) {
          if ((int)uVar9 <= (int)uVar2) {
LAB_030c1da0:
            uVar9 = uVar2;
          }
        }
        else {
          uVar2 = 0x3fffffff;
          if ((int)uVar9 < 0x40000000) goto LAB_030c1da0;
        }
        local_90 = (ulong)uVar9 << 4;
        local_84 = uVar9;
        if (((int)uVar9 < (int)uVar26) || (uVar2 = local_d0._4_4_, 0x3fffffff < (int)uVar9)) {
          local_80 = (int *)0x1;
          puStack_70 = &local_84;
          local_78 = &DAT_0411b3b8;
          FUN_03320b50(0x65816502,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x5a,"Invalid requestedCapacity {}",&local_80);
          uVar26 = local_d0._4_4_ & 0x3fffffff;
          uVar2 = local_d0._4_4_;
        }
        puVar30 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
        if (0 < iVar24) {
          puVar15 = puVar30;
          puVar20 = puVar23;
          do {
            puVar15[1] = puVar20[1];
            uVar12 = uVar12 - 1;
            *puVar15 = *puVar20;
            puVar15 = puVar15 + 2;
            puVar20 = puVar20 + 2;
          } while (uVar12 != 0);
        }
        if (-1 < (int)uVar2) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar23,(ulong)uVar26 << 4);
        }
        if (local_90 < 0x3fffffff0) {
          uVar10 = (undefined4)(local_90 >> 4);
        }
        else {
          uVar10 = 0x3fffffff;
        }
        local_d0 = CONCAT44(uVar10,(int)local_d0);
        local_d8 = puVar30;
      }
    }
    iVar24 = *(int *)(param_2 + 0x73c) + *(int *)(param_2 + 0x528);
    if (iVar24 != 0) {
      puVar27 = *(uint **)(param_2 + 0x730);
      if ((puVar27 !=
           *(uint **)(*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8)) &&
         ((uint)*(ushort *)(param_2 + 0x73a) == (*puVar27 & 0xffff))) {
        puVar27 = *(uint **)(puVar27 + 2);
        *(undefined4 *)(param_2 + 0x738) = 0;
      }
      uVar9 = *puVar27;
      *(uint **)(param_2 + 0x730) = puVar27;
      *(short *)(param_2 + 0x73a) = (short)uVar9 - *(short *)(param_2 + 0x73a);
    }
    *(int *)(param_2 + 0x73c) = iVar24;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x738);
    uVar18 = *(undefined8 *)(param_2 + 0x730);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x740);
    *(undefined8 *)(param_1 + 0x50) = uVar18;
    puVar13 = *(undefined4 **)
               (*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8);
    uVar10 = *puVar13;
    uVar1 = *puVar13;
    *(undefined4 **)(param_2 + 0x730) = puVar13;
    *(short *)(param_2 + 0x738) = (short)((uint)uVar10 >> 0x10);
    *(short *)(param_2 + 0x73a) = (short)uVar1;
    *(int *)(param_2 + 0x73c) = -*(int *)(param_2 + 0x528);
    if (((*(int *)(*(long *)(lVar25 + 0x488) + 0x28) != 0) &&
        (*(int *)(*(long *)(param_1 + 0x70) + 8) != 0)) &&
       (*(int *)(*(long *)(lVar25 + 0x488) + 0x58) != 0)) {
      if (lVar7 != 0) {
        puVar23 = *(undefined8 **)(lVar7 + 8);
        uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
        if ((uVar12 <= *(ulong *)(lVar7 + 0x10)) &&
           (*(ulong *)(lVar7 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
          *puVar23 = "StPrepareActivatedConstraintGroups";
          uVar18 = nn::os::GetSystemTick();
          puVar23[1] = uVar18;
        }
      }
      FUN_0309d080(*(undefined8 *)(param_1 + 0x40),lVar25,
                   *(undefined8 *)(*(long *)(lVar25 + 0x488) + 8),*(undefined8 *)(param_1 + 0x70));
    }
    if ((*(int *)(*(long *)(lVar25 + 0x488) + 0x28) == 0) ||
       (lVar29 = *(long *)(param_1 + 0x70), *(int *)(lVar29 + 8) == 0)) goto LAB_030c114c;
    if (lVar7 != 0) {
      puVar23 = *(undefined8 **)(lVar7 + 8);
      uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= *(ulong *)(lVar7 + 0x10)) &&
         (*(ulong *)(lVar7 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
        *puVar23 = "StPrepareActivatedConstraints";
        uVar18 = nn::os::GetSystemTick();
        puVar23[1] = uVar18;
      }
      lVar29 = *(long *)(param_1 + 0x70);
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar25 + 0x488) + 8);
    FUN_0309d1d0(*(undefined8 *)(param_1 + 0x40),lVar25,uVar18,lVar29);
    lVar29 = *(long *)(param_1 + 0x40);
    FUN_0309d59c(*(undefined8 *)(param_1 + 0x70),lVar25,lVar29,*(int *)(lVar29 + 0x10),
                 *(int *)(lVar29 + 0x10) + *(int *)(lVar29 + 0x14) + -1,uVar18);
    if (lVar7 != 0) goto LAB_030c1150;
LAB_030c1164:
    iVar24 = *(int *)(lVar28 + 0x948);
  }
  if (iVar24 != 0) {
    if (lVar7 == 0) {
      FUN_0305ddb4(lVar28,param_2,*(undefined8 *)(param_1 + 0x38));
    }
    else {
      puVar23 = *(undefined8 **)(lVar7 + 8);
      uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= *(ulong *)(lVar7 + 0x10)) &&
         (*(ulong *)(lVar7 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
        *puVar23 = "TtAppendForcedBodyPairs";
        uVar18 = nn::os::GetSystemTick();
        puVar23[1] = uVar18;
      }
      FUN_0305ddb4(lVar28,param_2,*(undefined8 *)(param_1 + 0x38));
      puVar23 = *(undefined8 **)(lVar7 + 8);
      uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= *(ulong *)(lVar7 + 0x10)) &&
         (*(ulong *)(lVar7 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
        *puVar23 = &DAT_0390f40e;
        uVar18 = nn::os::GetSystemTick();
        puVar23[1] = uVar18;
      }
    }
  }
  lVar29 = *(long *)(param_1 + 0x38);
  iVar24 = *(int *)(lVar29 + 8);
  if (0 < iVar24) {
    if (*(int *)(lVar29 + 8) == 0) {
      local_80 = (int *)0x0;
      iVar11 = 0;
    }
    else {
      local_80 = (int *)**(undefined8 **)(lVar29 + 0x10);
      iVar11 = *local_80;
    }
    local_78 = (undefined *)CONCAT44(*(undefined4 *)(lVar29 + 8),iVar11 << 0x10);
    FUN_0305dc7c(lVar28,lVar25,*(undefined8 *)(param_2 + 0x4e0),&local_80,&local_d8);
    lVar25 = *(long *)(lVar31 + 0x38d490);
    if (lVar25 == 0) {
      lVar25 = FUN_0333d16c(0,1);
      *(long *)(lVar31 + 0x38d490) = lVar25;
      lVar28 = *(long *)(lVar25 + 0x10);
      if (lVar28 != 0) goto LAB_030c1414;
LAB_030c1428:
      if (lVar25 != 0) goto LAB_030c142c;
LAB_030c164c:
      lVar25 = FUN_0333d16c(0,1);
      *(long *)(lVar31 + 0x38d490) = lVar25;
      lVar31 = *(long *)(lVar25 + 0x10);
    }
    else {
      lVar28 = *(long *)(lVar25 + 0x10);
      if (lVar28 == 0) goto LAB_030c1428;
LAB_030c1414:
      puVar23 = *(undefined8 **)(lVar28 + 8);
      uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((*(ulong *)(lVar28 + 0x10) < uVar12) ||
         (*(ulong *)(lVar28 + 8) = uVar12, puVar23 == (undefined8 *)0x0)) goto LAB_030c1428;
      *puVar23 = "MiNumNewBodyPairs";
      *(float *)(puVar23 + 1) = (float)iVar24;
      lVar25 = *(long *)(lVar31 + 0x38d490);
      if (lVar25 == 0) goto LAB_030c164c;
LAB_030c142c:
      lVar31 = *(long *)(lVar25 + 0x10);
    }
    if (lVar31 != 0) {
      puVar23 = *(undefined8 **)(lVar31 + 8);
      uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((uVar12 <= *(ulong *)(lVar31 + 0x10)) &&
         (*(ulong *)(lVar31 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
        *puVar23 = "MiNumNewCollisionCaches";
        *(float *)(puVar23 + 1) = (float)(int)local_d0;
      }
    }
    if (0 < (int)local_d0) {
      lVar25 = 0;
      lVar31 = 0;
      do {
        uVar26 = local_9c;
        uVar9 = local_a0;
        puVar21 = local_a8;
        uVar18 = *(undefined8 *)((long)local_d8 + lVar25);
        uVar4 = *(undefined2 *)((undefined8 *)((long)local_d8 + lVar25) + 1);
        iVar24 = *(int *)(local_b8 + 1) + local_9c;
        if ((int)local_a0 < 0xed1) {
          puVar23 = (undefined8 *)((long)local_a8 + (long)(int)local_a0 + 0x20);
        }
        else {
          puVar23 = (undefined8 *)FUN_032bf82c(&local_b8);
        }
        *puVar23 = uVar18;
        *(undefined2 *)(puVar23 + 1) = uVar4;
        *(undefined1 *)((long)puVar23 + 0xb) = 0;
        *(undefined4 *)((long)puVar23 + 0xc) = 0;
        local_a0 = local_a0 + 0x10;
        local_9c = local_9c + 1;
        if ((*(int *)(local_b8 + 1) + local_9c != iVar24) && (local_a8 != puVar21)) {
          if ((uVar26 & 0xffff) == ((uint)*puVar21 & 0xffff)) {
            puVar21 = (ulong *)puVar21[1];
            uVar9 = 0;
          }
          if (puVar21 == local_a8) {
            puVar21 = local_a8;
          }
          else {
          }
        }
        if (local_e8 == 0x100) {
          FUN_030600f0(local_e0,local_10e8,0x100);
          local_e8 = 0;
        }
        uVar12 = (ulong)local_e8;
        local_10e8[uVar12 * 2] = puVar21;
        local_e8 = local_e8 + 1;
        *(short *)((long)local_10e8 + uVar12 * 0x10 + 8) = (short)uVar9;
        lVar31 = lVar31 + 1;
        lVar25 = lVar25 + 0x10;
      } while (lVar31 < (int)local_d0);
    }
    lVar29 = *(long *)(param_1 + 0x38);
  }
  FUN_032beab0(lVar29,*(undefined8 *)(param_2 + 0x4e0));
  lVar31 = *(long *)(param_1 + 0x48);
  uVar26 = *(uint *)(lVar31 + 0x2ac4);
  uVar2 = *(uint *)(*(long *)(*(long *)(param_2 + 8) + 0x4b0) + 0x20);
  uVar9 = uVar26 & 0x3fffffff;
  if ((int)uVar9 < (int)uVar2) {
    puVar13 = *(undefined4 **)(lVar31 + 0x2ab8);
    uVar3 = *(uint *)(lVar31 + 0x2ac0);
    uVar12 = (ulong)uVar3;
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar26 = *(uint *)(lVar31 + 0x2ac4);
      uVar9 = uVar26 & 0x3fffffff;
    }
    uVar16 = (uVar26 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    local_84 = uVar2;
    if ((int)uVar2 <= (int)uVar16) {
      local_84 = uVar16;
    }
    local_90 = (ulong)local_84 << 2;
    if (((int)local_84 < (int)uVar9) || (0x3fffffff < (int)local_84)) {
      local_80 = (int *)0x1;
      puStack_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
      uVar26 = *(uint *)(lVar31 + 0x2ac4);
    }
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
    if (0 < (int)uVar3) {
      puVar14 = puVar13;
      puVar19 = puVar8;
      do {
        uVar10 = *puVar14;
        uVar12 = uVar12 - 1;
        puVar14 = puVar14 + 1;
        *puVar19 = uVar10;
        puVar19 = puVar19 + 1;
      } while (uVar12 != 0);
    }
    if (-1 < (int)uVar26) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar13,uVar26 << 2);
    }
    if (local_90 < 0xfffffffc) {
      uVar10 = (undefined4)(local_90 >> 2);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)(lVar31 + 0x2ac4) = uVar10;
    *(undefined4 **)(lVar31 + 0x2ab8) = puVar8;
  }
  uVar9 = *(uint *)(lVar31 + 0x2ac0);
  if ((int)uVar9 < (int)uVar2) {
    *(uint *)(lVar31 + 0x2ac0) = uVar2;
    memset((void *)(*(long *)(lVar31 + 0x2ab8) + (long)(int)uVar9 * 4),0,
           (ulong)(uVar2 + ~uVar9) * 4 + 4);
  }
  else if ((int)uVar2 < (int)uVar9) {
    *(uint *)(lVar31 + 0x2ac0) = uVar2;
  }
  puVar23 = local_b0;
  if (local_9c == 0) {
    piVar22 = (int *)(local_b8 + 3);
    iVar24 = *piVar22;
    if (iVar24 < 2) goto LAB_030c12c8;
    iVar11 = *(int *)(local_b0 + 0xb);
    lVar25 = *(long *)(local_b8[2] + (long)(iVar24 + -2) * 8);
    lVar31 = local_b0[1];
    *(undefined8 *)(lVar31 + (long)iVar11 * 8) =
         *(undefined8 *)(local_b8[2] + (long)(iVar24 + -1) * 8);
    *(int *)(local_b0 + 0xb) = iVar11 + 1;
    if (*(int *)((long)local_b0 + 0x5c) <= iVar11 + 1) {
      (**(code **)(*(long *)*local_b0 + 0x28))((long *)*local_b0,lVar31 + (long)(iVar11 + -5) * 8,6)
      ;
      *(int *)(puVar23 + 0xb) = iVar11 + -5;
    }
    *(undefined8 *)(lVar25 + 8) = 0;
    uVar9 = 0xffffffff;
  }
  else {
LAB_030c12c8:
    piVar22 = (int *)(local_b8 + 1);
    local_a8[1] = 0;
    *(uint *)local_a8 = (uint)*local_a8 & 0xffff0000 | local_9c & 0xffff;
    *(uint *)local_a8 = (uint)*local_a8 & 0xffff | local_a0 << 0x10;
    uVar9 = local_9c;
  }
  *piVar22 = *piVar22 + uVar9;
  local_a8 = (ulong *)0x0;
  local_b8 = (undefined8 *)0x0;
  if (lVar7 != 0) {
    puVar23 = *(undefined8 **)(lVar7 + 8);
    uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
      *puVar23 = &DAT_03922da5;
      uVar18 = nn::os::GetSystemTick();
      puVar23[1] = uVar18;
    }
  }
  if (local_e8 != 0) {
    FUN_030600f0(local_e0,local_10e8);
    local_e8 = 0;
  }
  uVar12 = local_d0;
  uVar17 = (ulong)local_d0._4_4_;
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_d8 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_d8,(uVar17 & 0x3fffffff) << 4);
  }
  if (local_c8 != 0) {
    puVar23 = *(undefined8 **)(local_c8 + 8);
    uVar12 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(local_c8 + 0x10)) &&
       (*(ulong *)(local_c8 + 8) = uVar12, puVar23 != (undefined8 *)0x0)) {
      *puVar23 = &DAT_0390f40e;
      uVar18 = nn::os::GetSystemTick();
      puVar23[1] = uVar18;
    }
  }
  puVar23 = local_b0;
  if (local_c0 != 0) {
    puVar30 = *(undefined8 **)(local_c0 + 8);
    uVar12 = (long)puVar30 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(local_c0 + 0x10)) &&
       (*(ulong *)(local_c0 + 8) = uVar12, puVar30 != (undefined8 *)0x0)) {
      *puVar30 = &DAT_0390f40e;
      uVar18 = nn::os::GetSystemTick();
      puVar30[1] = uVar18;
      puVar23 = local_b0;
    }
  }
  if (local_b8 == (undefined8 *)0x0) {
    return;
  }
  if (local_9c == 0) {
    piVar22 = (int *)(local_b8 + 3);
    iVar24 = *piVar22;
    if (1 < iVar24) {
      iVar11 = *(int *)(puVar23 + 0xb);
      lVar7 = *(long *)(local_b8[2] + (long)(iVar24 + -2) * 8);
      lVar31 = puVar23[1];
      *(undefined8 *)(lVar31 + (long)iVar11 * 8) =
           *(undefined8 *)(local_b8[2] + (long)(iVar24 + -1) * 8);
      *(int *)(puVar23 + 0xb) = iVar11 + 1;
      if (*(int *)((long)puVar23 + 0x5c) <= iVar11 + 1) {
        local_b0 = puVar23;
        (**(code **)(*(long *)*puVar23 + 0x28))((long *)*puVar23,lVar31 + (long)(iVar11 + -5) * 8,6)
        ;
        *(int *)(puVar23 + 0xb) = iVar11 + -5;
      }
      *(undefined8 *)(lVar7 + 8) = 0;
      local_9c = 0xffffffff;
      goto LAB_030c17ac;
    }
  }
  piVar22 = (int *)(local_b8 + 1);
  *(uint *)((long)local_a8 + 8) = 0;
  *(uint *)((long)local_a8 + 0xc) = 0;
  *(uint *)local_a8 = *(uint *)local_a8 & 0xffff0000 | local_9c & 0xffff;
  *(uint *)local_a8 = *(uint *)local_a8 & 0xffff | local_a0 << 0x10;
LAB_030c17ac:
  *piVar22 = *piVar22 + local_9c;
  return;
}


