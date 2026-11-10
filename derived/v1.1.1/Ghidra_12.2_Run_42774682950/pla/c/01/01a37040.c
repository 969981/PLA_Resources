/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a37040; name: FUN_01a37040
 */


/* WARNING: Removing unreachable block (ram,0x01a37778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a37040(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined4 uVar23;
  long lVar24;
  float *pfVar25;
  undefined1 uVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  float extraout_s0;
  float fVar31;
  undefined8 uVar32;
  undefined8 extraout_d0;
  float extraout_var;
  float fVar36;
  undefined8 uVar37;
  float extraout_var_01;
  float fVar38;
  undefined8 extraout_var_00;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  int iVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar48;
  float fVar49;
  int iVar50;
  float fVar51;
  int iVar52;
  undefined1 auVar47 [16];
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  float fVar67;
  float local_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 uStack_a4;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_78;
  
  lVar24 = *(long *)(param_1 + 0xe2b0);
  if (*(char *)(lVar24 + 8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xe110) == '\0') {
    if (*(char *)(param_1 + 0xde00) != '\0') {
      lVar27 = 0xdee0;
      goto LAB_01a3709c;
    }
    iVar40 = *(int *)(param_1 + 0x3e4);
    if (iVar40 == 0) {
LAB_01a37098:
      lVar27 = 0xdd60;
      goto LAB_01a3709c;
    }
    if (iVar40 == 1) {
      puVar28 = (undefined8 *)(param_1 + 0x500);
      if (1.0 <= *(float *)(param_1 + 0x54c)) {
        puVar28 = (undefined8 *)(param_1 + 0x4c0);
      }
      goto LAB_01a370a0;
    }
    if (iVar40 == 2) {
      if (1.0 <= *(float *)(param_1 + 0x54c)) goto LAB_01a37098;
      puVar28 = (undefined8 *)(param_1 + 0x500);
      goto LAB_01a370a0;
    }
    uVar32 = 0;
    uVar37 = 0;
  }
  else {
    lVar27 = 0xe1f0;
LAB_01a3709c:
    puVar28 = (undefined8 *)(param_1 + lVar27);
LAB_01a370a0:
    uVar32 = *puVar28;
    uVar37 = puVar28[1];
  }
  if (*(float *)(param_1 + 0x46c) < *(float *)(param_1 + 0x468)) {
    uVar26 = 1;
LAB_01a3718c:
    *(undefined1 *)(lVar24 + 0x158) = uVar26;
  }
  else if (*(char *)(lVar24 + 0x158) != '\0') {
    uVar26 = 0;
    goto LAB_01a3718c;
  }
  local_90 = 0;
  uStack_88 = 0;
  FUN_01a4b7e0(param_1);
  fVar31 = extraout_s0 - *(float *)(param_1 + 0x550);
  fVar36 = extraout_var - *(float *)(param_1 + 0x558);
  fVar38 = extraout_var_01 - *(float *)(param_1 + 0x55c);
  auVar33._0_4_ = fVar31 * fVar31;
  auVar33._4_4_ = 0;
  auVar33._8_4_ = fVar36 * fVar36;
  auVar33._12_4_ = fVar38 * fVar38;
  auVar44 = NEON_ext(auVar33,auVar33,8,1);
  fVar31 = auVar44._0_4_ + auVar33._0_4_ + auVar44._4_4_ + 0.0;
  if (fVar31 <= 0.0025000002) goto LAB_01a3710c;
  if (*(long *)(param_1 + 0xeca0) == 0) {
    local_98 = (long *)0x0;
    goto LAB_01a3710c;
  }
  fVar36 = 0.0;
  FUN_00cfac20(&local_98);
  if (local_98 == (long *)0x0) goto LAB_01a3710c;
  FUN_01af344c(&local_a8);
  puVar21 = PTR_DAT_04379e90;
  puVar20 = PTR_DAT_04379e88;
  puVar19 = PTR_DAT_043795d8;
  puVar18 = PTR_DAT_043794d0;
  lVar24 = CONCAT44(uStack_a4,local_a8);
  if (lVar24 != 0) {
    if (*(int *)(lVar24 + 0xc) != 0) {
      piVar1 = (int *)(lVar24 + 0xc);
      iVar40 = *(int *)(lVar24 + 0xc);
      do {
        plVar29 = *(long **)(lVar24 + 0x10);
        if (((*puVar20 & 1) == 0) && (iVar48 = __cxa_guard_acquire(puVar20), iVar48 != 0)) {
          if (((*puVar19 & 1) == 0) && (iVar48 = __cxa_guard_acquire(puVar19), iVar48 != 0)) {
            if (((*puVar18 & 1) == 0) && (iVar48 = __cxa_guard_acquire(puVar18), iVar48 != 0)) {
              uVar42 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar42;
              __cxa_guard_release(puVar18);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar19);
          }
          *(undefined **)puVar21 = PTR_DAT_043795e0;
          __cxa_guard_release(puVar20);
        }
        while( true ) {
          if (plVar29 == (long *)0x0) goto LAB_01a37348;
          if (plVar29 == (long *)puVar21) break;
          plVar29 = (long *)*plVar29;
        }
        iVar48 = *piVar1;
        if (iVar48 == iVar40) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar40 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar29 = (long *)0x0;
            if (*(long *)(lVar24 + 0x18) != 0) {
              plVar29 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
            }
            puVar17 = (ulong *)CONCAT44(uStack_a4,local_a8);
            goto joined_r0x01a372c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar40 = iVar48;
      } while (iVar48 != 0);
    }
LAB_01a37348:
    plVar29 = (long *)0x0;
    puVar17 = (ulong *)CONCAT44(uStack_a4,local_a8);
joined_r0x01a372c0:
    if (puVar17 != (ulong *)0x0) {
      puVar2 = puVar17 + 1;
      do {
        iVar40 = (int)*puVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *(int *)puVar2 = iVar40;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar40 == 0) {
        puVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar40 = __cxa_guard_acquire(PTR_DAT_04379498), iVar40 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar24 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar24;
        local_78 = *puVar17;
        FUN_02a44274(lVar24 + 0xd8,&local_78);
      }
    }
    if (plVar29 != (long *)0x0) {
      local_ac = 0.0;
      FUN_01a82160(&local_a8,plVar29);
      puVar20 = PTR_DAT_0437a3d0;
      lVar24 = CONCAT44(uStack_a4,local_a8);
      if (lVar24 == 0) {
LAB_01a373c8:
        uVar22 = (**(code **)(*plVar29 + 0x250))(plVar29);
        if ((uVar22 & 1) != 0) {
          fVar31 = SQRT(fVar31);
          local_ac = 1.0;
          if (fVar31 <= 1.0) {
            local_ac = fVar31;
          }
        }
      }
      else {
        if (*(int *)(lVar24 + 0xc) != 0) {
          piVar1 = (int *)(lVar24 + 0xc);
          iVar40 = *(int *)(lVar24 + 0xc);
          do {
            plVar30 = *(long **)(lVar24 + 0x10);
            if (((*PTR_DAT_0437a3c8 & 1) == 0) &&
               (iVar48 = __cxa_guard_acquire(PTR_DAT_0437a3c8), iVar48 != 0)) {
              if (((*puVar19 & 1) == 0) && (iVar48 = __cxa_guard_acquire(puVar19), iVar48 != 0)) {
                if (((*puVar18 & 1) == 0) && (iVar48 = __cxa_guard_acquire(puVar18), iVar48 != 0)) {
                  uVar42 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar42;
                  __cxa_guard_release(puVar18);
                }
                *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar19);
              }
              *(undefined **)puVar20 = PTR_DAT_043795e0;
              __cxa_guard_release(PTR_DAT_0437a3c8);
            }
            while( true ) {
              if (plVar30 == (long *)0x0) goto LAB_01a376e4;
              if (plVar30 == (long *)puVar20) break;
              plVar30 = (long *)*plVar30;
            }
            iVar48 = *piVar1;
            if (iVar48 == iVar40) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar40 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar30 = (long *)0x0;
                if (*(long *)(lVar24 + 0x18) != 0) {
                  plVar30 = (long *)(*(long *)(lVar24 + 0x18) + -0x50);
                }
                puVar17 = (ulong *)CONCAT44(uStack_a4,local_a8);
                goto joined_r0x01a377a8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar40 = iVar48;
          } while (iVar48 != 0);
        }
LAB_01a376e4:
        plVar30 = (long *)0x0;
        puVar17 = (ulong *)CONCAT44(uStack_a4,local_a8);
joined_r0x01a377a8:
        if (puVar17 != (ulong *)0x0) {
          puVar2 = puVar17 + 1;
          do {
            iVar40 = (int)*puVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *(int *)puVar2 = iVar40;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar40 == 0) {
            puVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar40 = __cxa_guard_acquire(PTR_DAT_04379498), iVar40 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar24 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar24;
            local_78 = *puVar17;
            FUN_02a44274(lVar24 + 0xd8,&local_78);
          }
        }
        if (plVar30 == (long *)0x0) {
          fVar36 = local_ac;
        }
        else {
          fVar38 = (float)FUN_01a587a8(plVar30,1);
          iVar40 = FUN_01a587a0(plVar30);
          uVar23 = 2;
          if (iVar40 == 3) {
            uVar23 = 3;
          }
          fVar39 = (float)FUN_01a587a8(plVar30,uVar23);
          fVar49 = (float)FUN_01a50478(plVar30);
          if (0.0 < fVar39 - fVar38) {
            fVar36 = (fVar49 - fVar38) / (fVar39 - fVar38);
          }
          local_b0 = 1.0;
          pfVar25 = &local_b0;
          if (fVar36 <= 1.0) {
            pfVar25 = &local_a8;
          }
          local_a8 = fVar36;
          local_78 = local_78 & 0xffffffff00000000;
          if (fVar36 < 0.0) {
            pfVar25 = (float *)&local_78;
          }
          fVar36 = *pfVar25;
          lVar24 = plVar30[0xb];
          piVar1 = (int *)(lVar24 + 0xc);
          do {
            iVar40 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar40 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          local_ac = fVar36;
          if (iVar40 + -1 == 0) {
            *(undefined8 *)(lVar24 + 0x18) = 0;
            (**(code **)(*plVar30 + 0x20))(plVar30);
          }
        }
        if (fVar36 <= 0.0) goto LAB_01a373c8;
      }
      FUN_01a8d048(plVar29);
      local_d0 = (float)extraout_d0;
      fStack_cc = (float)((ulong)extraout_d0 >> 0x20);
      if (((*(char *)(param_1 + 0xe110) != '\0') || (*(char *)(param_1 + 0xde00) != '\0')) ||
         ((*(int *)(param_1 + 0x3e4) != 1 &&
          ((*(int *)(param_1 + 0x3e4) != 2 || (1.0 <= *(float *)(param_1 + 0x54c))))))) {
        if (*(char *)(param_1 + 0x370) == '\0') {
          fVar31 = *(float *)(param_1 + 0x360);
        }
        else {
          fVar39 = *(float *)(param_1 + 0x350) - *(float *)(param_1 + 0x340);
          fVar49 = *(float *)(param_1 + 0x358) - *(float *)(param_1 + 0x348);
          fVar51 = *(float *)(param_1 + 0x35c) - *(float *)(param_1 + 0x34c);
          fVar31 = 0.0;
          fVar38 = fVar39 * fVar39;
          auVar44._4_4_ = 0;
          auVar44._0_4_ = fVar38;
          auVar44._8_4_ = fVar49 * fVar49;
          auVar44._12_4_ = fVar51 * fVar51;
          auVar5._4_4_ = 0;
          auVar5._0_4_ = fVar38;
          auVar5._8_4_ = fVar49 * fVar49;
          auVar5._12_4_ = fVar51 * fVar51;
          auVar33 = NEON_ext(auVar44,auVar5,8,1);
          fVar38 = auVar33._0_4_ + fVar38;
          fVar53 = auVar33._4_4_ + 0.0;
          fVar36 = fVar38 + fVar53;
          fVar38 = fVar38 + fVar53;
          if (fVar36 != 0.0) {
            auVar6._4_4_ = fVar38;
            auVar6._0_4_ = fVar36;
            auVar6._8_4_ = fVar36;
            auVar6._12_4_ = fVar38;
            auVar33 = NEON_frsqrte(auVar6,4);
            auVar56._0_4_ = auVar33._0_4_ * fVar36;
            auVar56._4_4_ = auVar33._4_4_ * fVar38;
            auVar56._8_4_ = auVar33._8_4_ * fVar36;
            auVar56._12_4_ = auVar33._12_4_ * fVar38;
            auVar44 = NEON_frsqrts(auVar33,auVar56,4);
            auVar34._0_4_ = auVar33._0_4_ * auVar44._0_4_;
            auVar34._4_4_ = auVar33._4_4_ * auVar44._4_4_;
            auVar34._8_4_ = auVar33._8_4_ * auVar44._8_4_;
            auVar34._12_4_ = auVar33._12_4_ * auVar44._12_4_;
            auVar57._0_4_ = fVar36 * auVar34._0_4_;
            auVar57._4_4_ = fVar38 * auVar34._4_4_;
            auVar57._8_4_ = fVar36 * auVar34._8_4_;
            auVar57._12_4_ = fVar38 * auVar34._12_4_;
            auVar33 = NEON_frsqrts(auVar34,auVar57,4);
            fVar39 = fVar39 * auVar34._0_4_ * auVar33._0_4_;
            fVar31 = auVar34._4_4_ * auVar33._4_4_ * 0.0;
            fVar49 = fVar49 * auVar34._8_4_ * auVar33._8_4_;
            fVar51 = fVar51 * auVar34._12_4_ * auVar33._12_4_;
            iVar40 = -(uint)(fVar36 == 0.0);
            iVar48 = -(uint)(fVar38 == 0.0);
            iVar50 = -(uint)(fVar36 == 0.0);
            iVar52 = -(uint)(fVar38 == 0.0);
            fVar38 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                     CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                              ~(byte)((uint)iVar40 >> 0x10),
                                              CONCAT11((byte)((uint)fVar39 >> 8) &
                                                       ~(byte)((uint)iVar40 >> 8),
                                                       SUB41(fVar39,0) & ~(byte)iVar40)));
            auVar43._0_8_ =
                 CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                          CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                   CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                            CONCAT14(SUB41(fVar31,0) & ~(byte)iVar48,fVar38))));
            auVar43[8] = SUB41(fVar49,0) & ~(byte)iVar50;
            auVar43[9] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar50 >> 8);
            auVar43[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
            auVar43[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
            auVar47[0xc] = SUB41(fVar51,0) & ~(byte)iVar52;
            auVar47._0_12_ = auVar43;
            auVar47[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar52 >> 8);
            auVar47[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
            auVar47[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
            auVar35._0_4_ = fVar38 * (float)_DAT_03888d10;
            auVar35._4_4_ =
                 (float)((ulong)auVar43._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
            auVar35._8_4_ = auVar43._8_4_ * (float)_UNK_03888d18;
            auVar35._12_4_ = auVar47._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
            NEON_ext(auVar35,auVar35,8,1);
            fVar36 = (float)FUN_01009610();
            fVar31 = -fVar36;
            if (0.0 <= fVar38) {
              fVar31 = fVar36;
            }
          }
        }
      }
      else {
        fVar31 = *(float *)(param_1 + 0x4e0);
      }
      auVar33 = FUN_009a7ff4(-fVar31,ZEXT816(0),0);
      auVar16._8_8_ = extraout_var_00;
      auVar16._0_8_ = extraout_d0;
      auVar15._8_8_ = extraout_var_00;
      auVar15._0_8_ = extraout_d0;
      auVar14._8_8_ = extraout_var_00;
      auVar14._0_8_ = extraout_d0;
      fVar31 = auVar33._0_4_;
      fVar36 = fVar31 * (float)_DAT_03889ac0;
      fVar59 = auVar33._4_4_ * (float)((ulong)_DAT_03889ac0 >> 0x20);
      fVar60 = auVar33._8_4_ * (float)_UNK_03889ac8;
      fVar61 = auVar33._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
      uVar41 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
      uVar62 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
      auVar7._4_4_ = fVar59;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar60;
      auVar7._12_4_ = fVar61;
      uVar42 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
      auVar8._4_4_ = fVar59;
      auVar8._0_4_ = fVar36;
      auVar8._8_4_ = fVar60;
      auVar8._12_4_ = fVar61;
      uVar54 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a6c8);
      auVar9._4_4_ = fVar59;
      auVar9._0_4_ = fVar36;
      auVar9._8_4_ = fVar60;
      auVar9._12_4_ = fVar61;
      uVar64 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
      fVar63 = (float)((ulong)uVar62 >> 0x20);
      fVar38 = (float)((ulong)uVar41 >> 0x20);
      fVar51 = (float)_UNK_03889ad8;
      fVar53 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      fVar39 = (float)_DAT_03889ad0;
      fVar49 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      auVar10._4_4_ = fVar59;
      auVar10._0_4_ = fVar36;
      auVar10._8_4_ = fVar60;
      auVar10._12_4_ = fVar61;
      uVar65 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
      auVar11._4_4_ = fVar59;
      auVar11._0_4_ = fVar36;
      auVar11._8_4_ = fVar60;
      auVar11._12_4_ = fVar61;
      uVar66 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a790);
      auVar12._4_4_ = fVar59;
      auVar12._0_4_ = fVar36;
      auVar12._8_4_ = fVar36;
      auVar12._12_4_ = fVar59;
      uVar55 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a648);
      uVar58 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a880);
      fVar67 = (float)((ulong)uVar58 >> 0x20);
      uVar13 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a580);
      fVar36 = (fVar36 * (float)uVar41 + fVar39 * local_d0 * (float)uVar42 +
               fVar39 * (float)uVar58 * (float)uVar64) - (float)uVar62 * (float)uVar65;
      auVar45._0_8_ =
           CONCAT44((fVar59 * fVar38 + fVar49 * fStack_cc * (float)((ulong)uVar42 >> 0x20) +
                    fVar49 * fVar67 * (float)((ulong)uVar64 >> 0x20)) -
                    fVar63 * (float)((ulong)uVar65 >> 0x20),fVar36);
      auVar45._8_4_ =
           (fVar60 * (float)uVar41 + fVar51 * (float)uVar62 * (float)uVar54 +
           fVar51 * local_d0 * (float)uVar55) - (float)uVar58 * (float)uVar66;
      auVar45._12_4_ =
           (fVar61 * fVar38 + fVar53 * fVar63 * (float)((ulong)uVar54 >> 0x20) +
           fVar53 * fStack_cc * (float)((ulong)uVar55 >> 0x20)) -
           fVar67 * (float)((ulong)uVar66 >> 0x20);
      uVar54 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a680);
      uVar41 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a580);
      uVar62 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a6c8);
      uVar58 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a680);
      uVar64 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a880);
      uVar65 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a790);
      auVar46._8_8_ = auVar45._0_8_;
      auVar46._0_8_ = auVar45._0_8_;
      uVar55 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a880);
      uVar42 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a648);
      local_90 = CONCAT44(-(((float)uVar13 * auVar45._8_4_ + fVar51 * (float)uVar54 * (float)uVar62
                            + fVar51 * fVar31 * (float)uVar42) - (float)uVar55 * (float)uVar65) *
                          local_ac,(((float)uVar13 * fVar36 + fVar39 * fVar31 * (float)uVar41 +
                                    fVar39 * (float)uVar55 * (float)uVar58) -
                                   (float)uVar54 * (float)uVar64) * local_ac);
      lVar24 = plVar29[0xb];
      piVar1 = (int *)(lVar24 + 0xc);
      do {
        iVar40 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar40 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar40 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar29 + 0x20))(plVar29);
      }
    }
  }
  if (local_98 != (long *)0x0) {
    lVar24 = local_98[0xb];
    piVar1 = (int *)(lVar24 + 0xc);
    do {
      iVar40 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar40 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar40 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
LAB_01a3710c:
  FUN_01904754(*(undefined8 *)(param_1 + 0xe2b0),*(undefined8 *)(param_1 + 0xe2d0),&local_90);
  if (*(char *)(param_1 + 0x370) == '\0') {
    lVar24 = *(long *)(param_1 + 0xe2b0);
    fVar31 = *(float *)(lVar24 + 0x100);
    fVar36 = *(float *)(lVar24 + 0x104);
    fVar38 = *(float *)(lVar24 + 0x10c);
    local_c0 = (float)uVar32;
    fStack_bc = (float)((ulong)uVar32 >> 0x20);
    fStack_b8 = (float)uVar37;
    fStack_b4 = (float)((ulong)uVar37 >> 0x20);
    *(float *)(param_1 + 0x348) = fStack_b8 + *(float *)(lVar24 + 0x108);
    *(float *)(param_1 + 0x34c) = fStack_b4 + fVar38;
    *(float *)(param_1 + 0x340) = local_c0 + fVar31;
    *(float *)(param_1 + 0x344) = fStack_bc + fVar36;
  }
  return;
}


