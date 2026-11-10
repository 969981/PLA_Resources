/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181a3b4; name: FUN_0181a3b4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0181a3b4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  code *pcVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  float fVar25;
  float extraout_s0;
  float fVar26;
  float extraout_var;
  float fVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar29 [16];
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_68;
  
  if (*(char *)(param_1 + 0x228) == '\0') {
    return;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,param_1 + 0x1f0);
  FUN_0099c748(&local_68,&local_80);
  plVar21 = local_80;
  if (local_80 != (long *)0x0) {
    plVar23 = local_80 + 1;
    do {
      iVar15 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar13) {
        *(int *)plVar23 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_b0 = (long *)*plVar21;
      FUN_02a44274(lVar18 + 0xd8,&local_b0);
    }
  }
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00ac3fa4(&local_98,param_1 + 0x1f0);
  FUN_01819ff0(&local_88,local_98);
  puVar12 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_98 + 1);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_80 = (long *)*puVar12;
      FUN_02a44274(lVar18 + 0xd8,&local_80);
    }
  }
  FUN_0181d68c(&local_80,param_1);
  plVar21 = local_80;
  puVar10 = PTR_DAT_0437de28;
  puVar9 = PTR_DAT_0437de20;
  if (local_80 == (long *)0x0) {
    plVar21 = (long *)0x0;
LAB_0181a4fc:
    if (local_68 == (long *)0x0) goto LAB_0181a720;
LAB_0181a504:
    plVar24 = local_68;
    plVar23 = local_88;
    puVar10 = PTR_DAT_043794d8;
    puVar9 = PTR_DAT_043794d0;
    if (local_88 == (long *)0x0) goto LAB_0181a720;
    if (plVar21 == (long *)0x0) goto joined_r0x0181a7ac;
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      if (*(char *)(param_1 + 0x240) == '\0') {
        if (((*(long *)(param_1 + 0x430) != 0) && (*(int *)(*(long *)(param_1 + 0x430) + 0xc) != 0))
           && (*(char *)(param_1 + 0x470) == '\0')) {
          plVar23 = (long *)(param_1 + 0x430);
          if (*(char *)(param_1 + 0x471) == '\0') {
            lVar18 = *(long *)(param_1 + 0x210);
            fVar25 = 1.0;
            if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
              piVar1 = (int *)(lVar18 + 0xc);
              iVar15 = *(int *)(lVar18 + 0xc);
              do {
                plVar24 = *(long **)(lVar18 + 0x10);
                if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                  uVar17 = FUN_0087f8f0();
                  *(undefined8 *)puVar10 = uVar17;
                  __cxa_guard_release(puVar9);
                }
                while( true ) {
                  if (plVar24 == (long *)0x0) goto LAB_0181a85c;
                  if (plVar24 == (long *)puVar10) break;
                  plVar24 = (long *)*plVar24;
                }
                iVar14 = *piVar1;
                if (iVar14 == iVar15) {
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar13) {
                    *piVar1 = iVar15 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    if (*(long *)(lVar18 + 0x18) != 0) {
                      plVar22 = *(long **)(param_1 + 0x220);
                      plVar24 = (long *)(*(long *)(lVar18 + 0x18) + -8);
                      if (plVar22 == (long *)0x0) {
                        pcVar20 = *(code **)(*plVar24 + 0x18);
                      }
                      else {
                        (**(code **)(*plVar22 + 0x10))(plVar22);
                        (**(code **)(*plVar24 + 0x18))(plVar24);
                        fVar25 = (float)(**(code **)(*plVar22 + 0x40))(plVar22);
                        if (fVar25 <= 1.1920929e-07) {
                          fVar25 = 1.1920929e-07;
                        }
                        pcVar20 = *(code **)(*plVar22 + 0x18);
                        plVar24 = plVar22;
                      }
                      (*pcVar20)(plVar24);
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar15 = iVar14;
              } while (iVar14 != 0);
            }
LAB_0181a85c:
            lVar18 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
            FUN_01089394(fVar25 * (float)((double)*(long *)(lVar18 + 8) / 1000000000.0),0,plVar23);
          }
          else {
            local_80 = (long *)0x0;
            uStack_78 = 0;
            FUN_01a2bf84(&local_80,local_68 + 0xb9);
            plVar24 = local_80;
            puVar11 = PTR_DAT_0437a3d0;
            puVar10 = PTR_DAT_0437a3c8;
            puVar9 = PTR_DAT_043795e0;
            if (local_80 != (long *)0x0) {
              if (*(int *)((long)local_80 + 0xc) != 0) {
                piVar1 = (int *)((long)local_80 + 0xc);
                iVar15 = *(int *)((long)local_80 + 0xc);
                do {
                  plVar22 = (long *)plVar24[2];
                  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0))
                  {
                    if (((*PTR_DAT_043795d8 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
                        uVar17 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar17;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)puVar9 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043795d8);
                    }
                    *(undefined **)puVar11 = puVar9;
                    __cxa_guard_release(puVar10);
                  }
                  while( true ) {
                    if (plVar22 == (long *)0x0) goto LAB_0181acf4;
                    if (plVar22 == (long *)puVar11) break;
                    plVar22 = (long *)*plVar22;
                  }
                  iVar14 = *piVar1;
                  if (iVar14 == iVar15) {
                    cVar4 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar13) {
                      *piVar1 = iVar15 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') {
                      lVar18 = plVar24[3];
                      plVar24 = (long *)0x0;
                      plVar22 = local_80;
                      if (lVar18 != 0) {
                        plVar24 = (long *)(lVar18 + -0x50);
                      }
                      goto joined_r0x0181ac08;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar15 = iVar14;
                } while (iVar14 != 0);
              }
LAB_0181acf4:
              plVar24 = (long *)0x0;
              plVar22 = local_80;
joined_r0x0181ac08:
              local_80 = plVar22;
              if (plVar22 != (long *)0x0) {
                plVar2 = plVar22 + 1;
                do {
                  iVar15 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar13) {
                    *(int *)plVar2 = iVar15;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar15 == 0) {
                  plVar22[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_b0 = (long *)*plVar22;
                  FUN_02a44274(lVar18 + 0xd8,&local_b0);
                }
              }
              if (plVar24 != (long *)0x0) {
                FUN_01a57e30(plVar24);
                fVar35 = extraout_s0 * extraout_s0;
                fVar37 = extraout_var * extraout_var;
                *(float *)(param_1 + 0x428) = extraout_var_00;
                *(float *)(param_1 + 0x42c) = extraout_var_01;
                *(float *)(param_1 + 0x420) = extraout_s0;
                *(float *)(param_1 + 0x424) = extraout_var;
                auVar28._4_4_ = fVar37;
                auVar28._0_4_ = fVar35;
                auVar28._8_4_ = extraout_var_00 * extraout_var_00;
                auVar28._12_4_ = extraout_var_01 * extraout_var_01;
                auVar42._4_4_ = fVar37;
                auVar42._0_4_ = fVar35;
                auVar42._8_4_ = extraout_var_00 * extraout_var_00;
                auVar42._12_4_ = extraout_var_01 * extraout_var_01;
                auVar28 = NEON_ext(auVar28,auVar42,8,1);
                fVar26 = auVar28._0_4_ + fVar35;
                fVar37 = auVar28._4_4_ + fVar37;
                fVar25 = fVar26 + fVar37;
                fVar26 = fVar26 + fVar37;
                auVar29._0_4_ = SQRT(fVar25);
                auVar29._4_4_ = SQRT(fVar26);
                auVar29._8_4_ = SQRT(fVar25);
                auVar29._12_4_ = SQRT(fVar26);
                FUN_010894b8(auVar29,fVar35,plVar23);
                lVar18 = plVar24[0xb];
                piVar1 = (int *)(lVar18 + 0xc);
                do {
                  iVar15 = *piVar1;
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar13) {
                    *piVar1 = iVar15 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*plVar24 + 0x20))(plVar24);
                }
              }
            }
          }
          plVar24 = local_68;
          if ((*plVar23 == 0) ||
             (FUN_01089924(&local_80), plVar22 = local_80, local_80 == (long *)0x0)) {
            local_80 = (long *)0x0;
            uStack_78 = 0;
          }
          else {
            FUN_01088458(local_80);
            auVar28 = (**(code **)(*plVar22 + 0x40))(plVar22);
            if (local_80 != (long *)0x0) {
              lVar18 = local_80[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar13) {
                  *piVar1 = iVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*local_80 + 0x20))();
              }
            }
            local_80 = auVar28._0_8_;
            uStack_78 = auVar28._8_8_;
          }
          if ((*plVar23 == 0) ||
             (FUN_01089924(&local_b0), plVar22 = local_b0, local_b0 == (long *)0x0)) {
            local_b0 = _DAT_0388a130;
            uStack_a8 = _UNK_0388a138;
          }
          else {
            FUN_01088458(local_b0);
            auVar28 = (**(code **)(*plVar22 + 0x50))(plVar22);
            uStack_a8 = auVar28._8_8_;
            if (local_b0 != (long *)0x0) {
              lVar18 = local_b0[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar13) {
                  *piVar1 = iVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*local_b0 + 0x20))();
              }
            }
            local_b0 = auVar28._0_8_;
          }
          FUN_01a83770(plVar24,&local_80,&local_b0);
          if (*plVar23 == 0) {
            local_80 = (long *)0x0;
          }
          else {
            FUN_01089924(&local_80);
            if (local_80 != (long *)0x0) {
              uVar16 = FUN_01088420();
              if ((uVar16 & 1) == 0) {
                lVar18 = FUN_0108838c(local_80);
                bVar13 = lVar18 + -1 == *(long *)(param_1 + 0x450);
              }
              else {
                bVar13 = false;
              }
              if (local_80 != (long *)0x0) {
                lVar18 = local_80[0xb];
                piVar1 = (int *)(lVar18 + 0xc);
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
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              if (!bVar13) goto LAB_0181a720;
            }
          }
          FUN_0181aef4(param_1);
          goto LAB_0181a720;
        }
      }
      else {
        fVar25 = *(float *)(plVar21 + 0x3a);
        fVar26 = *(float *)((long)plVar21 + 0x1d4);
        fVar37 = *(float *)(plVar21 + 0x36) * fVar25 + (float)plVar21[0x38] * fVar26;
        fVar35 = *(float *)((long)plVar21 + 0x1b4) * fVar25 +
                 (float)((ulong)plVar21[0x38] >> 0x20) * fVar26;
        fVar30 = *(float *)(plVar21 + 0x37) * fVar25 + (float)plVar21[0x39] * fVar26;
        fVar32 = *(float *)((long)plVar21 + 0x1bc) * fVar25 +
                 (float)((ulong)plVar21[0x39] >> 0x20) * fVar26;
        fVar26 = fVar37 * fVar37;
        fVar36 = fVar35 * fVar35;
        auVar6._4_4_ = fVar36;
        auVar6._0_4_ = fVar26;
        auVar6._8_4_ = fVar30 * fVar30;
        auVar6._12_4_ = fVar32 * fVar32;
        auVar7._4_4_ = fVar36;
        auVar7._0_4_ = fVar26;
        auVar7._8_4_ = fVar30 * fVar30;
        auVar7._12_4_ = fVar32 * fVar32;
        auVar28 = NEON_ext(auVar6,auVar7,8,1);
        fVar26 = auVar28._0_4_ + fVar26;
        fVar36 = auVar28._4_4_ + fVar36;
        fVar25 = fVar26 + fVar36;
        fVar26 = fVar26 + fVar36;
        if (fVar25 == 0.0) {
          auVar27 = FUN_01a831dc(local_68);
          lVar18 = *plVar23;
          uVar34 = 0;
          uVar38 = 0;
LAB_0181a66c:
          pcVar20 = *(code **)(lVar18 + 0x38);
        }
        else {
          auVar8._4_4_ = fVar26;
          auVar8._0_4_ = fVar25;
          auVar8._8_4_ = fVar25;
          auVar8._12_4_ = fVar26;
          auVar28 = NEON_frsqrte(auVar8,4);
          auVar41._0_4_ = auVar28._0_4_ * fVar25;
          auVar41._4_4_ = auVar28._4_4_ * fVar26;
          auVar41._8_4_ = auVar28._8_4_ * fVar25;
          auVar41._12_4_ = auVar28._12_4_ * fVar26;
          cVar4 = *(char *)(param_1 + 0x410);
          auVar42 = NEON_frsqrts(auVar28,auVar41,4);
          auVar39._0_4_ = auVar28._0_4_ * auVar42._0_4_;
          auVar39._4_4_ = auVar28._4_4_ * auVar42._4_4_;
          auVar39._8_4_ = auVar28._8_4_ * auVar42._8_4_;
          auVar39._12_4_ = auVar28._12_4_ * auVar42._12_4_;
          auVar43._0_4_ = fVar25 * auVar39._0_4_;
          auVar43._4_4_ = fVar26 * auVar39._4_4_;
          auVar43._8_4_ = fVar25 * auVar39._8_4_;
          auVar43._12_4_ = fVar26 * auVar39._12_4_;
          auVar28 = NEON_frsqrts(auVar39,auVar43,4);
          auVar40._0_8_ =
               CONCAT44(fVar35 * auVar39._4_4_ * auVar28._4_4_,
                        fVar37 * auVar39._0_4_ * auVar28._0_4_);
          auVar40._8_4_ = fVar30 * auVar39._8_4_ * auVar28._8_4_;
          auVar40._12_4_ = fVar32 * auVar39._12_4_ * auVar28._12_4_;
          iVar15 = -(uint)(fVar25 == 0.0);
          iVar14 = -(uint)(fVar26 == 0.0);
          iVar31 = -(uint)(fVar25 == 0.0);
          iVar33 = -(uint)(fVar26 == 0.0);
          auVar44._0_8_ =
               CONCAT17(~(byte)((uint)iVar14 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar14 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar14 >> 8),
                                          CONCAT14(~(byte)iVar14,
                                                   CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar15
                                                                                     >> 8),
                                                                              ~(byte)iVar15)))))));
          auVar44[8] = ~(byte)iVar31;
          auVar44[9] = ~(byte)((uint)iVar31 >> 8);
          auVar44[10] = ~(byte)((uint)iVar31 >> 0x10);
          auVar44[0xb] = ~(byte)((uint)iVar31 >> 0x18);
          auVar44[0xc] = ~(byte)iVar33;
          auVar44[0xd] = ~(byte)((uint)iVar33 >> 8);
          auVar44[0xe] = ~(byte)((uint)iVar33 >> 0x10);
          auVar44[0xf] = ~(byte)((uint)iVar33 >> 0x18);
          lVar18 = local_68[0xb8];
          fVar25 = SQRT(fVar25) + 1.5e-05;
          if (fVar25 < *(float *)(lVar18 + 0xb4)) {
            uVar16 = (**(code **)(*local_68 + 0x238))(local_68);
            if ((uVar16 & 1) == 0) {
              lVar18 = plVar24[0xb8];
            }
            else {
              lVar18 = 4;
              if (*(char *)((long)plVar24 + 0xb73) != '\0') {
                lVar18 = 8;
              }
              lVar18 = plVar24[0xb8] + lVar18;
            }
            auVar44._8_8_ = auVar44._8_8_;
            auVar40._8_8_ = auVar40._8_8_;
LAB_0181a64c:
            puVar19 = (undefined4 *)(lVar18 + 0x6c);
          }
          else {
            if (fVar25 < *(float *)(lVar18 + 0xb8)) {
              lVar3 = 4;
              if (*(char *)((long)local_68 + 0xb73) != '\0') {
                lVar3 = 8;
              }
              lVar18 = lVar18 + lVar3;
              goto LAB_0181a64c;
            }
            if (*(float *)(lVar18 + 0xbc) <= fVar25) {
              puVar19 = (undefined4 *)(lVar18 + 0x78);
            }
            else {
              puVar19 = (undefined4 *)(lVar18 + 0x74);
            }
          }
          uVar34 = *puVar19;
          auVar27[0] = auVar40[0] & auVar44[0];
          auVar27[1] = auVar40[1] & auVar44[1];
          auVar27[2] = auVar40[2] & auVar44[2];
          auVar27[3] = auVar40[3] & auVar44[3];
          auVar27[4] = auVar40[4] & auVar44[4];
          auVar27[5] = auVar40[5] & auVar44[5];
          auVar27[6] = auVar40[6] & auVar44[6];
          auVar27[7] = auVar40[7] & auVar44[7];
          auVar27[8] = auVar40[8] & auVar44[8];
          auVar27[9] = auVar40[9] & auVar44[9];
          auVar27[10] = auVar40[10] & auVar44[10];
          auVar27[0xb] = auVar40[0xb] & auVar44[0xb];
          auVar27[0xc] = auVar40[0xc] & auVar44[0xc];
          auVar27[0xd] = auVar40[0xd] & auVar44[0xd];
          auVar27[0xe] = auVar40[0xe] & auVar44[0xe];
          auVar27[0xf] = auVar40[0xf] & auVar44[0xf];
          if (cVar4 == '\0') {
            if (plVar21[0x2e] == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = *(undefined4 *)(plVar21[0x2e] + 0xa8);
            }
            lVar18 = *plVar23;
            goto LAB_0181a66c;
          }
          if (*(char *)(param_1 + 0x410) == '\0') {
            uVar38 = 0;
          }
          else {
            uVar38 = *(undefined4 *)(param_1 + 0x414);
          }
          pcVar20 = *(code **)(*plVar23 + 0x40);
        }
        (*pcVar20)(auVar27,uVar34,uVar38,plVar23);
      }
    }
  }
  else {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar15 = *(int *)((long)local_80 + 0xc);
      do {
        plVar23 = (long *)plVar21[2];
        if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
          uVar17 = FUN_00fd7558();
          *(undefined8 *)puVar10 = uVar17;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_0181ab54;
          if (plVar23 == (long *)puVar10) break;
          plVar23 = (long *)*plVar23;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar15) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar18 = plVar21[3];
            plVar21 = (long *)0x0;
            plVar23 = local_80;
            if (lVar18 != 0) {
              plVar21 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x0181aacc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar14;
      } while (iVar14 != 0);
    }
LAB_0181ab54:
    plVar21 = (long *)0x0;
    plVar23 = local_80;
joined_r0x0181aacc:
    local_80 = plVar23;
    if (plVar23 == (long *)0x0) goto LAB_0181a4fc;
    plVar24 = plVar23 + 1;
    do {
      iVar15 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar13) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 != 0) goto LAB_0181a4fc;
    plVar23[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar18 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar18;
    local_b0 = (long *)*plVar23;
    FUN_02a44274(lVar18 + 0xd8,&local_b0);
    if (local_68 != (long *)0x0) goto LAB_0181a504;
LAB_0181a720:
    if (plVar21 == (long *)0x0) goto joined_r0x0181a7ac;
  }
  lVar18 = plVar21[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar15 = *piVar1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar13) {
      *piVar1 = iVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
joined_r0x0181a7ac:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  if (local_68 != (long *)0x0) {
    lVar18 = local_68[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


