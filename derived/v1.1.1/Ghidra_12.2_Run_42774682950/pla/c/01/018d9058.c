/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d9058; name: FUN_018d9058
 */


uint FUN_018d9058(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined2 uVar9;
  float fVar10;
  byte bVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  undefined8 *unaff_x21;
  long lVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_q3 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 *local_1d8 [2];
  long *local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long *plStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined1 local_19b;
  long *local_190;
  char *pcStack_188;
  undefined8 local_180;
  long *plStack_178;
  undefined1 local_170;
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  float local_138;
  undefined1 local_100;
  undefined4 local_f8;
  undefined8 *local_f0 [2];
  undefined8 *local_e0 [2];
  undefined8 *local_d0 [2];
  undefined8 local_c0;
  undefined8 *local_b8 [2];
  undefined1 local_a8;
  long *local_90;
  undefined8 local_88 [3];
  
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  FUN_00ac3fa4(&local_160,param_1 + 0x248);
  if (local_160 == (undefined8 *)0x0) {
    local_90 = (long *)0x0;
    puVar12 = PTR_DAT_0437a2c8;
  }
  else {
    FUN_00bd915c(&local_90);
    puVar13 = local_160;
    puVar12 = PTR_DAT_0437a2c8;
    if (local_160 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_160 + 1);
      do {
        iVar15 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      unaff_x21 = param_2;
      puVar12 = PTR_DAT_0437a2c8;
      if (iVar15 + -1 == 0) {
        local_160[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_190 = (long *)*puVar13;
        FUN_02a44274(lVar22 + 0xd8,&local_190);
        puVar12 = PTR_DAT_0437a2c8;
      }
    }
  }
  uVar21 = (uint)unaff_x21;
  PTR_DAT_0437a2c8 = puVar12;
  if (((local_90 == (long *)0x0) || (lVar22 = param_2[2], lVar22 == 0)) ||
     (*(int *)(lVar22 + 0xc) == 0)) {
LAB_018d90b0:
    bVar11 = 0;
    if (local_90 != (long *)0x0) {
LAB_018d90bc:
      lVar22 = local_90[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
LAB_018d90d8:
    return uVar21 & bVar11;
  }
  piVar1 = (int *)(lVar22 + 0xc);
  iVar15 = *(int *)(lVar22 + 0xc);
  while( true ) {
    plVar23 = *(long **)(lVar22 + 0x10);
    FUN_018e2cec();
    while( true ) {
      if (plVar23 == (long *)0x0) goto LAB_018d90b0;
      if (plVar23 == (long *)puVar12) break;
      plVar23 = (long *)*plVar23;
    }
    iVar3 = *piVar1;
    if (iVar3 == iVar15) break;
    ClearExclusiveLocal();
LAB_018d91f0:
    iVar15 = iVar3;
    if (iVar3 == 0) goto LAB_018d90b0;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar5) {
    *piVar1 = iVar15 + 1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_018d91f0;
  lVar22 = *(long *)(lVar22 + 0x18);
  if (lVar22 == 0) goto LAB_018d90b0;
  plVar23 = (long *)(lVar22 + -0x50);
  FUN_01792e28(&local_160);
  local_160 = (undefined8 *)*param_2;
  uStack_158 = param_2[1];
  FUN_009c69bc(&local_190,plVar23);
  (**(code **)(*local_190 + 0x40))();
  uStack_148 = in_q3._8_8_;
  local_150 = in_q3._0_8_;
  if (local_190 != (long *)0x0) {
    lVar16 = local_190[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
  local_140 = 0;
  local_190 = (long *)0x32c06e5ba5fa9d59;
  pcStack_188 = "ball_out_base_distance";
  local_180 = 0x16;
  plStack_178 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  uVar17 = *(ulong *)(lVar16 + 0x60);
  fVar24 = 0.0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xb0bc20d12e286f6;
    }
    else if (uVar17 < 0xb0bc20d12e286f7) {
      uVar19 = 0;
      if (uVar17 != 0) {
        uVar19 = 0xb0bc20d12e286f6 / uVar17;
      }
      uVar19 = 0xb0bc20d12e286f6 - uVar19 * uVar17;
    }
    else {
      uVar19 = 0xb0bc20d12e286f6;
    }
    plVar20 = *(long **)(*(long *)(lVar16 + 0x58) + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] == 0xb0bc20d12e286f6) {
            if (plVar20[2] == 0xb0bc20d12e286f6) goto LAB_018d9350;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar19) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 != 0xb0bc20d12e286f6) {
            if (uVar17 <= uVar18) {
              uVar7 = 0;
              if (uVar17 != 0) {
                uVar7 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar7 * uVar17;
            }
            if (uVar18 == uVar19) goto LAB_018d9758;
            break;
          }
          if (plVar20[2] == 0xb0bc20d12e286f6) goto LAB_018d9350;
LAB_018d9758:
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_018d9390:
  local_138 = (float)FUN_01a75574(plVar23);
  local_138 = fVar24 + local_138;
  if (plStack_178 != (long *)0x0) {
    (**(code **)(*plStack_178 + 0x20))();
  }
  bVar5 = true;
  local_100 = 1;
  local_f8 = *(undefined4 *)(param_2 + 4);
  FUN_00b63974(local_f0,param_2 + 5);
  FUN_00cfa028(local_e0,param_2 + 7);
  FUN_0095aa3c(local_d0,param_2 + 9);
  local_c0 = param_2[0xb];
  FUN_00bd10a0(local_b8,param_2 + 0xc);
  local_a8 = *(undefined1 *)(param_2 + 0xe);
  FUN_018d49c8(&local_190,param_1,&local_160);
  plVar20 = plStack_178;
  uVar14 = local_180;
  if ((char)local_190 == '\0') {
    uVar21 = 0;
    puVar13 = local_b8[0];
  }
  else {
    fVar25 = (float)local_150 - (float)local_180;
    fVar27 = (float)uStack_148 - SUB84(plStack_178,0);
    fVar28 = (float)((ulong)uStack_148 >> 0x20) - (float)((ulong)plStack_178 >> 0x20);
    fVar24 = fVar25 * fVar25;
    fVar10 = fVar27 * fVar27;
    uVar29 = (undefined1)((uint)fVar10 >> 8);
    uVar30 = (undefined1)((uint)fVar10 >> 0x10);
    uVar31 = (undefined1)((uint)fVar10 >> 0x18);
    fVar28 = fVar28 * fVar28;
    uVar32 = (undefined1)((uint)fVar28 >> 8);
    uVar33 = (undefined1)((uint)fVar28 >> 0x10);
    uVar34 = (undefined1)((uint)fVar28 >> 0x18);
    auVar35._4_4_ = 0;
    auVar35._0_4_ = fVar24;
    auVar35[8] = SUB41(fVar10,0);
    auVar35[9] = uVar29;
    auVar35[10] = uVar30;
    auVar35[0xb] = uVar31;
    auVar35[0xc] = SUB41(fVar28,0);
    auVar35[0xd] = uVar32;
    auVar35[0xe] = uVar33;
    auVar35[0xf] = uVar34;
    auVar38._4_4_ = 0;
    auVar38._0_4_ = fVar24;
    auVar38[8] = SUB41(fVar10,0);
    auVar38[9] = uVar29;
    auVar38[10] = uVar30;
    auVar38[0xb] = uVar31;
    auVar38[0xc] = SUB41(fVar28,0);
    auVar38[0xd] = uVar32;
    auVar38[0xe] = uVar33;
    auVar38[0xf] = uVar34;
    auVar35 = NEON_ext(auVar35,auVar38,8,1);
    fVar24 = auVar35._0_4_ + fVar24;
    fVar10 = auVar35._4_4_ + 0.0;
    fVar28 = fVar24 + fVar10;
    fVar24 = fVar24 + fVar10;
    uVar29 = SUB41(fVar24,0);
    uVar30 = (undefined1)((uint)fVar24 >> 8);
    uVar31 = (undefined1)((uint)fVar24 >> 0x10);
    uVar32 = (undefined1)((uint)fVar24 >> 0x18);
    if (fVar28 != 0.0) {
      auVar8[4] = uVar29;
      auVar8._0_4_ = fVar28;
      auVar8[5] = uVar30;
      auVar8[6] = uVar31;
      auVar8[7] = uVar32;
      auVar8[8] = SUB41(fVar28,0);
      auVar8[9] = (char)((uint)fVar28 >> 8);
      auVar8[10] = (char)((uint)fVar28 >> 0x10);
      auVar8[0xb] = (char)((uint)fVar28 >> 0x18);
      auVar8[0xc] = uVar29;
      auVar8[0xd] = uVar30;
      auVar8[0xe] = uVar31;
      auVar8[0xf] = uVar32;
      auVar35 = NEON_frsqrte(auVar8,4);
      auVar37._0_4_ = auVar35._0_4_ * fVar28;
      auVar37._4_4_ = auVar35._4_4_ * fVar24;
      auVar37._8_4_ = auVar35._8_4_ * fVar28;
      uVar9 = (undefined2)(CONCAT15(uVar30,CONCAT14(uVar29,fVar28)) >> 0x20);
      auVar37._12_4_ = auVar35._12_4_ * (float)CONCAT13(uVar32,CONCAT12(uVar31,uVar9));
      auVar38 = NEON_frsqrts(auVar35,auVar37,4);
      auVar36._0_4_ = auVar35._0_4_ * auVar38._0_4_;
      auVar36._4_4_ = auVar35._4_4_ * auVar38._4_4_;
      auVar36._8_4_ = auVar35._8_4_ * auVar38._8_4_;
      auVar36._12_4_ = auVar35._12_4_ * auVar38._12_4_;
      auVar39._0_4_ = fVar28 * auVar36._0_4_;
      auVar39._4_4_ = fVar24 * auVar36._4_4_;
      auVar39._8_4_ = fVar28 * auVar36._8_4_;
      auVar39._12_4_ = (float)CONCAT13(uVar32,CONCAT12(uVar31,uVar9)) * auVar36._12_4_;
      iVar15 = -(uint)(fVar28 == 0.0);
      iVar3 = -(uint)(fVar24 == 0.0);
      auVar35 = NEON_frsqrts(auVar36,auVar39,4);
      fVar25 = fVar25 * auVar36._0_4_ * auVar35._0_4_;
      fVar24 = auVar36._4_4_ * auVar35._4_4_ * 0.0;
      uVar26 = FUN_01009820(CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                                     CONCAT16((byte)((uint)fVar24 >> 0x10) &
                                              ~(byte)((uint)iVar3 >> 0x10),
                                              CONCAT15((byte)((uint)fVar24 >> 8) &
                                                       ~(byte)((uint)iVar3 >> 8),
                                                       CONCAT14(SUB41(fVar24,0) & ~(byte)iVar3,
                                                                CONCAT13((byte)((uint)fVar25 >> 0x18
                                                                               ) & ~(byte)((uint)
                                                  iVar15 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                                           ~(byte)((uint)iVar15 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar25 >> 8) &
                                                                    ~(byte)((uint)iVar15 >> 8),
                                                                    SUB41(fVar25,0) & ~(byte)iVar15)
                                                          )))))),
                            SUB41(fVar27 * auVar36._8_4_ * auVar35._8_4_,0) & ~-(fVar28 == 0.0));
      FUN_009c69bc(&local_1c0,local_90);
      plVar2 = local_1c0;
      auVar35 = FUN_009a7ff4(uVar26,0,ZEXT816(0));
      *(undefined1 *)(plVar2 + 0x1c) = 1;
      *(undefined1 (*) [16])(plVar2 + 0x18) = auVar35;
      if (local_1c0 != (long *)0x0) {
        lVar16 = local_1c0[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_1c0 + 0x20))();
        }
      }
    }
    local_1a0 = 0;
    local_19b = 0;
    local_1b8 = param_2[1];
    local_1c0 = (long *)*param_2;
    local_19c = 1;
    plStack_1a8 = plVar20;
    local_1b0 = uVar14;
    uVar17 = FUN_018d782c(param_1,&local_1c0);
    bVar5 = false;
    if ((uVar17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x710) = 7;
      FUN_01a74a30(local_1d8,param_1);
      if (local_1d8[0] == (undefined8 *)0x0) {
        local_1c8 = (long *)0x0;
      }
      else {
        FUN_00ac64cc(&local_1c8);
        if (local_1d8[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_1d8[0] + 1);
          do {
            iVar15 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 == 0) {
            local_1d8[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_88[0] = *local_1d8[0];
            FUN_02a44274(lVar16 + 0xd8,local_88);
          }
        }
      }
      if ((local_1c8 != (long *)0x0) &&
         (FUN_01819ccc(local_1c8,local_170), local_1c8 != (long *)0x0)) {
        lVar16 = local_1c8[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_1c8 + 0x20))();
        }
      }
      bVar5 = true;
    }
    uVar21 = 1;
    puVar13 = local_b8[0];
  }
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_190 = (long *)*puVar13;
      FUN_02a44274(lVar16 + 0xd8,&local_190);
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0[0] + 1);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_d0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_190 = (long *)*local_d0[0];
      FUN_02a44274(lVar16 + 0xd8,&local_190);
    }
  }
  if (local_e0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e0[0] + 1);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_e0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_190 = (long *)*local_e0[0];
      FUN_02a44274(lVar16 + 0xd8,&local_190);
    }
  }
  if (local_f0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0[0] + 1);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_f0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_190 = (long *)*local_f0[0];
      FUN_02a44274(lVar16 + 0xd8,&local_190);
    }
  }
  lVar22 = *(long *)(lVar22 + 8);
  piVar1 = (int *)(lVar22 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
    if (bVar5) goto LAB_018d9718;
    goto LAB_018d90b0;
  }
  if (!bVar5) goto LAB_018d90b0;
LAB_018d9718:
  bVar11 = 1;
  if (local_90 == (long *)0x0) goto LAB_018d90d8;
  goto LAB_018d90bc;
LAB_018d9350:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar2 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    fVar24 = (float)FUN_00d7905c(plVar20,&local_190);
    do {
      iVar15 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  goto LAB_018d9390;
}


