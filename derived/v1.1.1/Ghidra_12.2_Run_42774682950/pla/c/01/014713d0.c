/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014713d0; name: FUN_014713d0
 */


void FUN_014713d0(long param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  ushort uVar20;
  uint *puVar21;
  ulong uVar22;
  float *pfVar23;
  int *piVar24;
  float fVar25;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  uVar22 = (ulong)param_2;
  lVar13 = (**(code **)(**(long **)(param_1 + 0x1a0) + 0x50))();
  lVar15 = param_1 + uVar22 * 0x34;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_9b = 0;
  uStack_98 = 0;
  pfVar23 = (float *)(lVar15 + 0x68);
  pfVar23[0] = 0.0;
  pfVar23[1] = 0.0;
  puVar21 = (uint *)(lVar15 + 0x78);
  puVar21[0] = 0xffffffff;
  puVar21[1] = 0x1e;
  *(undefined4 *)(lVar15 + 0x80) = 0x1e;
  *(undefined8 *)(lVar15 + 0x70) = 0;
  *(undefined1 *)(lVar15 + 0x98) = 0;
  *(uint *)(lVar15 + 0x6c) = param_2;
  *(undefined8 *)(lVar15 + 0x88) = 0;
  *(undefined8 *)(lVar15 + 0x90) = 3;
  piVar24 = (int *)(lVar15 + 0x84);
  *piVar24 = *(int *)(param_1 + (ulong)param_2 * 4 + 0x1a8);
  *(undefined1 *)(lVar15 + 0x98) = 1;
  FUN_0109aad0(&uStack_a0);
  if (*piVar24 < 1) {
    iVar12 = FUN_02c5fb2c(lVar13);
    if (iVar12 == 100) {
      bVar3 = FUN_02c63e34(DAT_04407c28,(long)&local_a8 + 4,&local_a8,lVar13,
                           *(undefined8 *)(param_1 + 0x1a0),&uStack_a0);
      *(byte *)(param_1 + uVar22 * 0x34 + 0x96) = bVar3 & 1;
      return;
    }
    return;
  }
  FUN_0109f020();
  uVar5 = FUN_02c6849c(*(undefined8 *)(lVar13 + 0x98));
  uVar4 = FUN_02c6f924(*(undefined8 *)(lVar13 + 0x98));
  if (((int)uVar5 < 0x38a) && (uVar4 < 0x1c)) {
    lVar16 = *(&DAT_04400660)[(ulong)uVar5 * 4];
    uVar19 = (&DAT_04400660)[(ulong)uVar5 * 4][1] - lVar16 >> 3;
    if ((uVar4 < uVar19) && (*(long *)(lVar16 + (ulong)uVar4 * 8) != 0)) {
      uVar20 = uVar4;
      goto LAB_01471518;
    }
  }
  uVar20 = 0;
  lVar16 = *DAT_04400660;
  uVar19 = DAT_04400660[1] - lVar16 >> 3;
LAB_01471518:
  if (uVar19 <= uVar20) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar17 = *(int **)(lVar16 + (ulong)uVar20 * 8);
  puVar1 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (10 - (long)*piVar17)));
  uVar10 = *(uint *)((long)puVar1 + (ulong)*puVar1);
  plStack_c8 = *(long **)(param_1 + 8);
  local_d0 = 0;
  uVar19 = (ulong)uVar10 & 0xff;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_c0 = 0xffffffffffffffff;
  uStack_b8 = 0;
  iVar12 = (int)uVar19;
  if ((uVar10 & 0xff) != 0) {
    iVar8 = 0;
    do {
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar5;
      local_64 = uVar4;
      uVar6 = FUN_02c55e48(&local_70,iVar8);
      uVar14 = FUN_02c618d4(lVar13,uVar6);
      if ((uVar14 & 1) == 0) {
        local_70 = (undefined **)((ulong)local_70._1_7_ << 8);
      }
      else {
        local_70 = (undefined **)CONCAT71(local_70._1_7_,1);
      }
      FUN_01471a84(&local_e0,&local_70);
      iVar8 = iVar8 + 1;
    } while (iVar12 != iVar8);
  }
  uVar7 = FUN_02c5fb2c(lVar13);
  iVar8 = FUN_02c60024(lVar13);
  iVar9 = FUN_02c68e44(*(undefined8 *)(lVar13 + 0x98));
  uVar10 = iVar9 - iVar8;
  iVar9 = FUN_02c600e8(lVar13);
  uVar11 = iVar9 - iVar8;
  if (uVar11 == 0 && uVar10 == 0) {
    iVar8 = 0;
  }
  else {
    fVar25 = (float)(uVar10 * 100) / (float)uVar11;
    uVar18 = (uint)fVar25;
    iVar8 = (fVar25 - (float)uVar18 != 0.0) + uVar18;
    iVar8 = ((uint)(uVar10 != uVar11 && iVar8 == 100) - iVar8) + 100;
  }
  piVar17 = (int *)(param_1 + uVar22 * 0x34 + 0x70);
  *piVar17 = iVar8;
  iVar8 = FUN_02c68e44(*(undefined8 *)(lVar13 + 0x98));
  FUN_02c5fee8(lVar13,*piVar24 + iVar8);
  iVar8 = FUN_02c60024(lVar13);
  iVar9 = FUN_02c68e44(*(undefined8 *)(lVar13 + 0x98));
  uVar10 = iVar9 - iVar8;
  iVar9 = FUN_02c600e8(lVar13);
  uVar11 = iVar9 - iVar8;
  if (uVar11 == 0 && uVar10 == 0) {
    iVar8 = 0;
  }
  else {
    fVar25 = (float)(uVar10 * 100) / (float)uVar11;
    uVar18 = (uint)fVar25;
    iVar8 = (fVar25 - (float)uVar18 != 0.0) + uVar18;
    iVar8 = ((uint)(uVar10 != uVar11 && iVar8 == 100) - iVar8) + 100;
  }
  piVar24 = (int *)(param_1 + uVar22 * 0x34 + 0x74);
  *piVar24 = iVar8;
  uVar10 = FUN_02c5fb2c(lVar13);
  if (uVar7 == uVar10) {
    uVar10 = 0xffffffff;
    *puVar21 = 0xffffffff;
  }
  else {
    uVar10 = FUN_02c5fb2c(lVar13);
    *puVar21 = uVar10;
    if (99 < (int)uVar10) {
      *piVar24 = 100;
    }
  }
  iVar9 = *piVar17;
  iVar8 = iVar9 + 100;
  if ((int)uVar10 < 1) {
    iVar8 = iVar9;
  }
  if (iVar8 - *piVar24 == 0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = (float)(uint)(iVar8 - *piVar24) / 30.0;
  }
  *pfVar23 = fVar25;
  if (0 < (int)uVar10) {
    iVar8 = 0;
    local_e8 = 0;
    uVar11 = uVar7;
    while( true ) {
      uVar11 = uVar11 + 1;
      while (iVar9 = FUN_02c61edc(lVar13,uVar11,(long)&local_e8 + 4,&local_e8,0), iVar9 != 3) {
        if ((iVar9 == 1) || (iVar9 == 0)) {
          uVar18 = FUN_02c61828(lVar13,local_e8 & 0xffffffff);
          iVar8 = iVar8 + (~uVar18 & 1);
        }
      }
      if (uVar11 == uVar10) break;
      local_e8 = local_e8 & 0xffffffff;
    }
    if (0 < iVar8) {
      *(undefined1 *)(lVar15 + 0x94) = 1;
    }
    if (iVar12 != 0) {
      uVar14 = 0;
      do {
        if (*(char *)(local_e0 + uVar14) == '\0') {
          local_70 = &PTR_LAB_0428acc8;
          local_68 = uVar5;
          local_64 = uVar4;
          uVar10 = FUN_02c55cf4(&local_70,uVar14 & 0xffffffff);
          if (uVar7 < (uVar10 & 0xffff)) {
            uVar10 = *puVar21;
            local_70 = &PTR_LAB_0428acc8;
            local_68 = uVar5;
            local_64 = uVar4;
            uVar11 = FUN_02c55cf4(&local_70,uVar14 & 0xffffffff);
            if ((uVar11 & 0xffff) <= uVar10) {
              *(undefined1 *)(param_1 + uVar22 * 0x34 + 0x95) = 1;
              break;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar19 != uVar14);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    uVar5 = *puVar21;
    if ((uVar7 < uVar5) && (FUN_0109ddb8(lVar13), uVar7 + 1 != uVar5)) {
      iVar12 = ~uVar7 + uVar5;
      do {
        FUN_0109ddb8(lVar13);
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  bVar3 = FUN_02c63e34(DAT_04407c28,(long)&local_a8 + 4,&local_a8,lVar13,
                       *(undefined8 *)(param_1 + 0x1a0),&uStack_a0);
  plVar2 = plStack_c8;
  lVar13 = local_e0;
  *(byte *)(param_1 + uVar22 * 0x34 + 0x96) = bVar3 & 1;
  if (local_e0 != 0) {
    local_d8 = local_e0;
    lVar15 = local_d0 - local_e0;
    uVar22 = (**(code **)(*plStack_c8 + 0xc0))(plStack_c8);
    if ((uVar22 & 1) != 0) {
      lVar16 = tpidr_el0;
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar16 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar13,lVar15,1);
        return;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar13,lVar15,1);
  }
  return;
}


