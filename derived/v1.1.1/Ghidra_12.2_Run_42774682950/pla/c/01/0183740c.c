/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183740c; name: FUN_0183740c
 */


void FUN_0183740c(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte *pbVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar15 = PTR_DAT_04379e80;
  puVar14 = PTR_DAT_04379e78;
  uVar29 = *(uint *)(param_1 + 0x220);
  if (7 < uVar29 || (1 << (ulong)(uVar29 & 0x1f) & 0xd4U) == 0) {
    return;
  }
  local_80 = &DAT_cbf29ce484222645;
  iVar23 = (int)DAT_042284a0;
  bVar8 = true;
  switch(uVar29) {
  case 2:
  case 4:
    if (*(int *)(param_1 + 0x360) != 0) goto switchD_0183749c_caseD_3;
    local_80 = (undefined1 *)0xc3fa1f35da167a4a;
    bVar9 = true;
    break;
  default:
switchD_0183749c_caseD_3:
    bVar8 = false;
  case 6:
    uVar29 = 0;
    bVar9 = false;
    cVar6 = *(char *)(param_1 + 0x366);
    goto joined_r0x018375a8;
  case 7:
    local_80 = (undefined1 *)0x381f5545ab689b30;
    bVar9 = false;
  }
  bVar8 = false;
  uVar29 = 1;
  cVar6 = *(char *)(param_1 + 0x366);
joined_r0x018375a8:
  if (((cVar6 != '\0') && (lVar28 = *(long *)(param_1 + 0x268), lVar28 != 0)) &&
     (*(int *)(lVar28 + 0xc) != 0)) {
    piVar1 = (int *)(lVar28 + 0xc);
    iVar17 = *(int *)(lVar28 + 0xc);
    do {
      plVar20 = *(long **)(lVar28 + 0x10);
      if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar14), iVar18 != 0)) {
        uVar22 = FUN_0095a420();
        *(undefined8 *)puVar15 = uVar22;
        __cxa_guard_release(puVar14);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_018374c4;
        if (plVar20 == (long *)puVar15) break;
        plVar20 = (long *)*plVar20;
      }
      iVar18 = *piVar1;
      if (iVar18 == iVar17) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar28 = *(long *)(lVar28 + 0x18);
          if (lVar28 != 0) {
            lVar21 = *(long *)(lVar28 + 0x1a0);
            plVar20 = (long *)(lVar28 + -0x50);
            if ((lVar21 == 0) || (*(int *)(lVar21 + 0xc) == 0)) goto LAB_0183778c;
            piVar1 = (int *)(lVar21 + 0xc);
            iVar17 = *(int *)(lVar21 + 0xc);
            goto LAB_01837b0c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar17 = iVar18;
    } while (iVar18 != 0);
  }
  goto LAB_018374c4;
LAB_01837b0c:
  do {
    plVar27 = *(long **)(lVar21 + 0x10);
    plVar25 = (long *)FUN_00a3edb8();
    if (plVar27 == (long *)0x0) goto LAB_0183778c;
    while (plVar27 != plVar25) {
      plVar27 = (long *)*plVar27;
      uVar19 = 1;
      if (plVar27 == (long *)0x0) goto LAB_01837790;
    }
    iVar18 = *piVar1;
    if (iVar18 == iVar17) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      puVar15 = PTR_DAT_043794d8;
      puVar14 = PTR_DAT_043794d0;
      if (cVar6 == '\0') {
        lVar21 = *(long *)(lVar21 + 0x18);
        if (lVar21 == 0) goto LAB_0183778c;
        fVar31 = (float)*(undefined8 *)(lVar21 + 0x248);
        fVar32 = (float)((ulong)*(undefined8 *)(lVar21 + 0x248) >> 0x20);
        fVar30 = (float)*(undefined8 *)(lVar21 + 0x240);
        fVar45 = (float)((ulong)*(undefined8 *)(lVar21 + 0x240) >> 0x20);
        if (*(char *)(param_1 + 0x45c) == '\0') {
          auVar43._0_4_ = fVar30 * *(float *)(param_2 + 0x20);
          auVar43._4_4_ = fVar45 * *(float *)(param_2 + 0x24);
          auVar43._8_4_ = fVar31 * *(float *)(param_2 + 0x28);
          auVar43._12_4_ = *(float *)(param_2 + 0x2c) * 1.0;
        }
        else {
          auVar43 = *(undefined1 (*) [16])(param_1 + 0x340);
          fVar45 = (fVar45 - *(float *)(param_1 + 0x350)) + auVar43._4_4_;
          fVar30 = auVar43._0_4_;
          auVar43 = NEON_ext(auVar43,auVar43,8,1);
          fVar31 = auVar43._0_4_;
          auVar43._0_4_ = *(float *)(param_2 + 0x20) * fVar30;
          auVar43._4_4_ = *(float *)(param_2 + 0x24) * fVar45;
          auVar43._8_4_ = *(float *)(param_2 + 0x28) * fVar31;
          auVar43._12_4_ = *(float *)(param_2 + 0x2c) * 1.0;
        }
        auVar44 = NEON_ext(auVar43,auVar43,8,1);
        if (((((0.0 < fVar32 + auVar44._0_4_ + auVar43._0_4_ + auVar44._4_4_ + auVar43._4_4_) &&
              (auVar44._0_4_ = fVar30 * *(float *)(param_2 + 0x30),
              auVar44._4_4_ = fVar45 * *(float *)(param_2 + 0x34),
              auVar44._8_4_ = fVar31 * *(float *)(param_2 + 0x38),
              auVar44._12_4_ = *(float *)(param_2 + 0x3c) * 1.0,
              auVar43 = NEON_ext(auVar44,auVar44,8,1),
              0.0 < fVar32 + auVar43._0_4_ + auVar44._0_4_ + auVar43._4_4_ + auVar44._4_4_)) &&
             (auVar34._0_4_ = fVar30 * *(float *)(param_2 + 0x40),
             auVar34._4_4_ = fVar45 * *(float *)(param_2 + 0x44),
             auVar34._8_4_ = fVar31 * *(float *)(param_2 + 0x48),
             auVar34._12_4_ = *(float *)(param_2 + 0x4c) * 1.0,
             auVar43 = NEON_ext(auVar34,auVar34,8,1),
             0.0 < fVar32 + auVar43._0_4_ + auVar34._0_4_ + auVar43._4_4_ + auVar34._4_4_)) &&
            ((auVar35._0_4_ = fVar30 * *(float *)(param_2 + 0x50),
             auVar35._4_4_ = fVar45 * *(float *)(param_2 + 0x54),
             auVar35._8_4_ = fVar31 * *(float *)(param_2 + 0x58),
             auVar35._12_4_ = *(float *)(param_2 + 0x5c) * 1.0,
             auVar43 = NEON_ext(auVar35,auVar35,8,1),
             0.0 < fVar32 + auVar43._0_4_ + auVar35._0_4_ + auVar43._4_4_ + auVar35._4_4_ &&
             (auVar36._0_4_ = fVar30 * *(float *)(param_2 + 0x60),
             auVar36._4_4_ = fVar45 * *(float *)(param_2 + 100),
             auVar36._8_4_ = fVar31 * *(float *)(param_2 + 0x68),
             auVar36._12_4_ = *(float *)(param_2 + 0x6c) * 1.0,
             auVar43 = NEON_ext(auVar36,auVar36,8,1),
             0.0 < fVar32 + auVar43._0_4_ + auVar36._0_4_ + auVar43._4_4_ + auVar36._4_4_)))) &&
           (auVar37._0_4_ = fVar30 * *(float *)(param_2 + 0x70),
           auVar37._4_4_ = fVar45 * *(float *)(param_2 + 0x74),
           auVar37._8_4_ = fVar31 * *(float *)(param_2 + 0x78),
           auVar37._12_4_ = *(float *)(param_2 + 0x7c) * 1.0,
           auVar43 = NEON_ext(auVar37,auVar37,8,1),
           0.0 < fVar32 + auVar43._0_4_ + auVar37._0_4_ + auVar43._4_4_ + auVar37._4_4_)) {
LAB_01837d3c:
          if (((!bVar9) || (lVar26 = *(long *)(param_1 + 0x380), lVar26 == 0)) ||
             (*(int *)(lVar26 + 0xc) == 0)) goto LAB_018380d0;
          piVar1 = (int *)(lVar26 + 0xc);
          iVar17 = *(int *)(lVar26 + 0xc);
          goto LAB_01837d74;
        }
        if (((*(char *)(param_2 + 0x140) != '\0') &&
            (auVar38._0_4_ = fVar30 * *(float *)(param_2 + 0x80),
            auVar38._4_4_ = fVar45 * *(float *)(param_2 + 0x84),
            auVar38._8_4_ = fVar31 * *(float *)(param_2 + 0x88),
            auVar38._12_4_ = *(float *)(param_2 + 0x8c) * 1.0,
            auVar43 = NEON_ext(auVar38,auVar38,8,1),
            0.0 < fVar32 + auVar43._0_4_ + auVar38._0_4_ + auVar43._4_4_ + auVar38._4_4_)) &&
           ((auVar39._0_4_ = fVar30 * *(float *)(param_2 + 0x90),
            auVar39._4_4_ = fVar45 * *(float *)(param_2 + 0x94),
            auVar39._8_4_ = fVar31 * *(float *)(param_2 + 0x98),
            auVar39._12_4_ = *(float *)(param_2 + 0x9c) * 1.0,
            auVar43 = NEON_ext(auVar39,auVar39,8,1),
            0.0 < fVar32 + auVar43._0_4_ + auVar39._0_4_ + auVar43._4_4_ + auVar39._4_4_ &&
            (((auVar40._0_4_ = fVar30 * *(float *)(param_2 + 0xa0),
              auVar40._4_4_ = fVar45 * *(float *)(param_2 + 0xa4),
              auVar40._8_4_ = fVar31 * *(float *)(param_2 + 0xa8),
              auVar40._12_4_ = *(float *)(param_2 + 0xac) * 1.0,
              auVar43 = NEON_ext(auVar40,auVar40,8,1),
              0.0 < fVar32 + auVar43._0_4_ + auVar40._0_4_ + auVar43._4_4_ + auVar40._4_4_ &&
              (auVar41._0_4_ = fVar30 * *(float *)(param_2 + 0xb0),
              auVar41._4_4_ = fVar45 * *(float *)(param_2 + 0xb4),
              auVar41._8_4_ = fVar31 * *(float *)(param_2 + 0xb8),
              auVar41._12_4_ = *(float *)(param_2 + 0xbc) * 1.0,
              auVar43 = NEON_ext(auVar41,auVar41,8,1),
              0.0 < fVar32 + auVar43._0_4_ + auVar41._0_4_ + auVar43._4_4_ + auVar41._4_4_)) &&
             (auVar42._0_4_ = fVar30 * *(float *)(param_2 + 0xc0),
             auVar42._4_4_ = fVar45 * *(float *)(param_2 + 0xc4),
             auVar42._8_4_ = fVar31 * *(float *)(param_2 + 200),
             auVar42._12_4_ = *(float *)(param_2 + 0xcc) * 1.0,
             auVar43 = NEON_ext(auVar42,auVar42,8,1),
             0.0 < fVar32 + auVar43._0_4_ + auVar42._0_4_ + auVar43._4_4_ + auVar42._4_4_)))))) {
          fVar30 = fVar30 * *(float *)(param_2 + 0xd0);
          fVar45 = fVar45 * *(float *)(param_2 + 0xd4);
          fVar31 = fVar31 * *(float *)(param_2 + 0xd8);
          fVar33 = *(float *)(param_2 + 0xdc) * 1.0;
          auVar10._4_4_ = fVar45;
          auVar10._0_4_ = fVar30;
          auVar10._8_4_ = fVar31;
          auVar10._12_4_ = fVar33;
          auVar11._4_4_ = fVar45;
          auVar11._0_4_ = fVar30;
          auVar11._8_4_ = fVar31;
          auVar11._12_4_ = fVar33;
          auVar43 = NEON_ext(auVar10,auVar11,8,1);
          if (0.0 < fVar32 + auVar43._0_4_ + fVar30 + auVar43._4_4_ + fVar45) goto LAB_01837d3c;
        }
        uVar19 = uVar29 ^ 1;
        if (!bVar8) goto LAB_018382a0;
        uVar3 = *(uint *)(lVar28 + 0x1c4);
        uVar4 = uVar3 | 2;
        if (((uVar4 == uVar3) || (*(int *)(lVar28 + 0x1cc) == 0)) || (*(int *)(lVar28 + 0x1d4) == 0)
           ) {
          if (uVar3 != 0) goto LAB_018380a0;
        }
        else if ((uVar3 != 0) && (*(int *)(lVar28 + 0x1cc) != 2)) {
LAB_018380a0:
          *(uint *)(lVar28 + 0x1c4) = uVar4;
          if ((*(uint *)(lVar28 + 0x1c0) != uVar4) && (*(int *)(lVar28 + 0x1cc) == 0)) {
            *(uint *)(lVar28 + 0x1c0) = uVar4;
          }
          goto LAB_018382a0;
        }
        *(undefined8 *)(lVar28 + 0x1cc) = 0;
        *(undefined8 *)(lVar28 + 0x1d4) = 0;
        FUN_01bdb280(0,plVar20);
        if (*(uint *)(lVar28 + 0x1c0) != uVar4) {
          *(uint *)(lVar28 + 0x1c0) = uVar4;
          FUN_01bdb4e8(plVar20);
        }
        *(uint *)(lVar28 + 0x1c4) = uVar4;
        goto LAB_018382a0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar19 = 1;
    iVar17 = iVar18;
  } while (iVar18 != 0);
  goto LAB_01837790;
LAB_0183778c:
  uVar19 = 1;
  goto LAB_01837790;
LAB_01837604:
  do {
    plVar20 = *(long **)(lVar28 + 0x10);
    lVar21 = FUN_00a3edb8();
    while( true ) {
      pbVar12 = PTR_DAT_043794d0;
      puVar13 = (undefined8 *)PTR_DAT_043794d8;
      if (plVar20 == (long *)0x0) goto joined_r0x018376bc;
      if (plVar20 == (long *)lVar21) break;
      plVar20 = (long *)*plVar20;
    }
    iVar17 = *piVar1;
    if (iVar17 == iVar23) {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar28 = *(long *)(lVar28 + 0x18);
        pbVar12 = PTR_DAT_043794d0;
        puVar13 = (undefined8 *)PTR_DAT_043794d8;
        if (lVar28 != 0) {
          plVar20 = (long *)(lVar28 + -0x50);
          FUN_009c69bc(&local_78,plVar20);
          *(undefined1 *)((long)local_78 + 0x33c) = 0;
          if (local_78 != (long *)0x0) {
            lVar21 = local_78[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar23 = *piVar1;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar23 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar23 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
          lVar28 = *(long *)(lVar28 + 8);
          piVar1 = (int *)(lVar28 + 0xc);
          do {
            iVar23 = *piVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          pbVar12 = PTR_DAT_043794d0;
          puVar13 = (undefined8 *)PTR_DAT_043794d8;
          if (iVar23 + -1 == 0) {
            *(undefined8 *)(lVar28 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
            pbVar12 = PTR_DAT_043794d0;
            puVar13 = (undefined8 *)PTR_DAT_043794d8;
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar23 = iVar17;
    pbVar12 = PTR_DAT_043794d0;
    puVar13 = (undefined8 *)PTR_DAT_043794d8;
  } while (iVar17 != 0);
  goto joined_r0x018376bc;
LAB_01837d74:
  do {
    plVar25 = *(long **)(lVar26 + 0x10);
    if (((*puVar14 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar14), iVar18 != 0)) {
      uVar22 = FUN_0087f8f0();
      *(undefined8 *)puVar15 = uVar22;
      __cxa_guard_release(puVar14);
    }
    while( true ) {
      if (plVar25 == (long *)0x0) goto LAB_018380d0;
      if (plVar25 == (long *)puVar15) break;
      plVar25 = (long *)*plVar25;
    }
    iVar18 = *piVar1;
    if (iVar18 == iVar17) {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_01837d6c;
      if (*(long *)(lVar26 + 0x18) != 0) {
        plVar25 = *(long **)(param_1 + 0x390);
        plVar27 = (long *)(*(long *)(lVar26 + 0x18) + -8);
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          (**(code **)(*plVar27 + 0x18))(plVar27);
          local_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_008802f0(&local_78,param_1 + 0x58);
          local_90 = (undefined8 *)0x0;
          uStack_88 = 0;
          FUN_00b5f91c(&local_90,&local_78);
          plVar27 = local_78;
          puVar16 = PTR_DAT_043794a8;
          puVar15 = PTR_DAT_043794a0;
          puVar14 = PTR_DAT_04379498;
          if (local_78 != (long *)0x0) {
            plVar2 = local_78 + 1;
            do {
              iVar17 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(int *)plVar2 = iVar17;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 == 0) {
              local_78[2] = 0;
              if (((*puVar14 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)puVar15;
              *(long *)puVar16 = lVar26;
              local_a0 = (undefined8 *)*plVar27;
              FUN_02a44274(lVar26 + 0xd8,&local_a0);
            }
          }
          (**(code **)(*plVar25 + 0x30))(plVar25,&local_90);
          puVar13 = local_90;
          if (local_90 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_90 + 1);
            do {
              iVar17 = *piVar1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = iVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 + -1 == 0) {
              local_90[2] = 0;
              if (((*puVar14 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)puVar15;
              *(long *)puVar16 = lVar26;
              local_78 = (long *)*puVar13;
              FUN_02a44274(lVar26 + 0xd8,&local_78);
            }
          }
          local_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_008802f0(&local_78,param_1 + 0x58);
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          FUN_00b5f91c(&local_a0,&local_78);
          plVar27 = local_78;
          if (local_78 != (long *)0x0) {
            plVar2 = local_78 + 1;
            do {
              iVar17 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(int *)plVar2 = iVar17;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 == 0) {
              local_78[2] = 0;
              if (((*puVar14 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)puVar15;
              *(long *)puVar16 = lVar26;
              local_68 = *plVar27;
              FUN_02a44274(lVar26 + 0xd8,&local_68);
            }
          }
          if (local_a0 == (undefined8 *)0x0) {
            uVar22 = 0;
          }
          else {
            uVar22 = *local_a0;
          }
          uVar19 = (**(code **)(*plVar25 + 0x38))(plVar25,uVar22);
          puVar13 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_a0 + 1);
            do {
              iVar17 = *piVar1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = iVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 + -1 == 0) {
              local_a0[2] = 0;
              if (((*puVar14 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)puVar15;
              *(long *)puVar16 = lVar26;
              local_78 = (long *)*puVar13;
              FUN_02a44274(lVar26 + 0xd8,&local_78);
            }
          }
          uVar19 = ~uVar19 & 1;
          (**(code **)(*plVar25 + 0x18))(plVar25);
          goto joined_r0x01838194;
        }
        (**(code **)(*plVar27 + 0x18))(plVar27);
      }
      break;
    }
    ClearExclusiveLocal();
LAB_01837d6c:
    iVar17 = iVar18;
  } while (iVar18 != 0);
LAB_018380d0:
  uVar19 = 1;
joined_r0x01838194:
  if (bVar8) {
    uVar4 = *(uint *)(lVar28 + 0x1c4);
    uVar3 = uVar4 & 0xfffffffd;
    bVar8 = (uVar4 != 0) != ((uVar4 & 0xfffffffd) != 0);
    if ((((uVar3 != uVar4) && (uVar3 == 0)) && (*(int *)(lVar28 + 0x1cc) != 0)) &&
       (*(int *)(lVar28 + 0x1d4) != 0)) {
      bVar8 = bVar8 || *(int *)(lVar28 + 0x1cc) == 1;
    }
    if (bVar8) {
      *(undefined8 *)(lVar28 + 0x1cc) = 0;
      uVar5 = *(undefined4 *)(lVar28 + 0x1dc);
      *(undefined4 *)(lVar28 + 0x1d4) = 0;
      *(undefined4 *)(lVar28 + 0x1d8) = uVar5;
      if (uVar3 == 0) {
        *(undefined4 *)(lVar28 + 0x1d8) = uVar5;
        FUN_01bdb280(uVar5,plVar20);
        if (*(int *)(lVar28 + 0x1c0) != 0) {
          *(undefined4 *)(lVar28 + 0x1c0) = 0;
          goto LAB_01838294;
        }
      }
      else {
        *(undefined4 *)(lVar28 + 0x1d8) = 0;
        FUN_01bdb280(0,plVar20);
        if (*(uint *)(lVar28 + 0x1c0) != uVar3) {
          *(uint *)(lVar28 + 0x1c0) = uVar3;
LAB_01838294:
          FUN_01bdb4e8(plVar20);
        }
      }
      *(uint *)(lVar28 + 0x1c4) = uVar3;
    }
    else {
      *(uint *)(lVar28 + 0x1c4) = uVar3;
      if ((*(uint *)(lVar28 + 0x1c0) != uVar3) && (*(int *)(lVar28 + 0x1cc) == 0)) {
        *(uint *)(lVar28 + 0x1c0) = uVar3;
      }
    }
  }
LAB_018382a0:
  lVar26 = *(long *)(lVar21 + 8);
  piVar1 = (int *)(lVar26 + 0xc);
  do {
    iVar17 = *piVar1;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar17 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar17 + -1 == 0) {
    *(undefined8 *)(lVar26 + 0x18) = 0;
    (**(code **)(*(long *)(lVar21 + -0x50) + 0x20))();
  }
LAB_01837790:
  lVar28 = *(long *)(lVar28 + 8);
  piVar1 = (int *)(lVar28 + 0xc);
  do {
    iVar17 = *piVar1;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar17 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar17 + -1 == 0) {
    *(undefined8 *)(lVar28 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (uVar19 == 0) {
    FUN_015916d0(param_1,1,0x80,iVar23);
  }
  else {
LAB_018374c4:
    FUN_015916d0(param_1,0,0x80,iVar23);
    pbVar12 = PTR_DAT_043794d0;
    puVar13 = (undefined8 *)PTR_DAT_043794d8;
    if ((*(long *)(param_1 + 0x268) != 0) &&
       (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x268) + 0x18), puVar24 != (undefined8 *)0x0)
       ) {
      plVar20 = (long *)(**(code **)*puVar24)(puVar24);
      if (((*PTR_DAT_04379e78 & 1) == 0) &&
         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar23 != 0)) {
        uVar22 = FUN_0095a420();
        *(undefined8 *)PTR_DAT_04379e80 = uVar22;
        __cxa_guard_release(PTR_DAT_04379e78);
      }
      for (; pbVar12 = PTR_DAT_043794d0, puVar13 = (undefined8 *)PTR_DAT_043794d8,
          plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        if (plVar20 == (long *)PTR_DAT_04379e80) {
          lVar28 = puVar24[0x34];
          if ((lVar28 != 0) && (*(int *)(lVar28 + 0xc) != 0)) {
            piVar1 = (int *)(lVar28 + 0xc);
            iVar23 = *(int *)(lVar28 + 0xc);
            goto LAB_01837604;
          }
          break;
        }
      }
    }
joined_r0x018376bc:
    PTR_DAT_043794d0 = pbVar12;
    PTR_DAT_043794d8 = (undefined *)puVar13;
    if (((uVar29 != 0) && (lVar28 = *(long *)(param_1 + 0x398), lVar28 != 0)) &&
       (*(int *)(lVar28 + 0xc) != 0)) {
      piVar1 = (int *)(lVar28 + 0xc);
      iVar23 = *(int *)(lVar28 + 0xc);
      do {
        plVar20 = *(long **)(lVar28 + 0x10);
        if (((*pbVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar12), iVar17 != 0)) {
          uVar22 = FUN_0087f8f0();
          *puVar13 = uVar22;
          __cxa_guard_release(pbVar12);
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto LAB_0183753c;
          if (plVar20 == puVar13) break;
          plVar20 = (long *)*plVar20;
        }
        iVar17 = *piVar1;
        if (iVar17 == iVar23) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar23 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_018377ec;
          if (*(long *)(lVar28 + 0x18) != 0) {
            plVar25 = *(long **)(param_1 + 0x3a8);
            plVar20 = (long *)(*(long *)(lVar28 + 0x18) + -8);
            if (plVar25 == (long *)0x0) {
              lVar28 = *plVar20;
            }
            else {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              (**(code **)(*plVar20 + 0x18))(plVar20);
              local_78 = (long *)0x0;
              uStack_70 = 0;
              FUN_008802f0(&local_78,param_1 + 0x58);
              local_a0 = (undefined8 *)0x0;
              uStack_98 = 0;
              FUN_00b5f91c(&local_a0,&local_78);
              plVar20 = local_78;
              if (local_78 != (long *)0x0) {
                plVar27 = local_78 + 1;
                do {
                  iVar23 = (int)*plVar27 + -1;
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar8) {
                    *(int *)plVar27 = iVar23;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar23 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar28 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar28;
                  local_68 = *plVar20;
                  FUN_02a44274(lVar28 + 0xd8,&local_68);
                }
              }
              if ((local_a0 == (undefined8 *)0x0) ||
                 (puVar24 = (undefined8 *)local_a0[3], puVar24 == (undefined8 *)0x0)) {
LAB_0183795c:
                puVar24 = (undefined8 *)0x0;
              }
              else {
                plVar20 = (long *)(**(code **)*puVar24)(puVar24);
                if (((*PTR_DAT_0437a250 & 1) == 0) &&
                   (iVar23 = __cxa_guard_acquire(PTR_DAT_0437a250), puVar14 = PTR_DAT_043795e0,
                   iVar23 != 0)) {
                  if (((*PTR_DAT_043795d8 & 1) == 0) &&
                     (iVar23 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar23 != 0)) {
                    if (((*pbVar12 & 1) == 0) &&
                       (iVar23 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar23 != 0)) {
                      uVar22 = FUN_0087f8f0();
                      *puVar13 = uVar22;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined8 **)puVar14 = puVar13;
                    __cxa_guard_release(PTR_DAT_043795d8);
                  }
                  *(undefined **)PTR_DAT_0437a258 = puVar14;
                  __cxa_guard_release(PTR_DAT_0437a250);
                  if (plVar20 != (long *)0x0) goto LAB_0183794c;
                  goto LAB_0183795c;
                }
                while( true ) {
                  if (plVar20 == (long *)0x0) goto LAB_0183795c;
LAB_0183794c:
                  if (plVar20 == (long *)PTR_DAT_0437a258) break;
                  plVar20 = (long *)*plVar20;
                }
                puVar24 = puVar24 + -10;
              }
              (**(code **)(*plVar25 + 0x30))(plVar25,&local_80,puVar24);
              puVar13 = local_a0;
              if (local_a0 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_a0 + 1);
                do {
                  iVar23 = *piVar1;
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar23 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar23 + -1 == 0) {
                  local_a0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar28 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar28;
                  local_78 = (long *)*puVar13;
                  FUN_02a44274(lVar28 + 0xd8,&local_78);
                }
              }
              lVar28 = *plVar25;
              plVar20 = plVar25;
            }
            (**(code **)(lVar28 + 0x18))(plVar20);
            if (*(int *)(param_1 + 0x354) != 0) {
              return;
            }
            goto LAB_01837544;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_018377ec:
        iVar23 = iVar17;
      } while (iVar17 != 0);
    }
LAB_0183753c:
    if (*(int *)(param_1 + 0x354) == 0) {
LAB_01837544:
      *(undefined1 *)(param_1 + 0x45c) = 0;
    }
  }
  return;
}


