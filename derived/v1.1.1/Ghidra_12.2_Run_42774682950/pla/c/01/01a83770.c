/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a83770; name: FUN_01a83770
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a83770(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x628) == 0) {
    local_78 = (long *)0x0;
LAB_01a837a8:
    if ((0.0 < *(float *)(param_1 + 0x8e0)) &&
       (*(float *)(param_1 + 0x8e4) < *(float *)(param_1 + 0x8e0))) {
LAB_01a83df8:
      if (*(long *)(param_1 + 0x628) == 0) {
        local_78 = (long *)0x0;
      }
      else {
        FUN_009b8474(&local_78);
        if (local_78 != (long *)0x0) {
          FUN_018281e0();
          if (local_78 != (long *)0x0) {
            lVar16 = local_78[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar25 = *piVar1;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar13) {
                *piVar1 = iVar25 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar25 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
          goto LAB_01a837b4;
        }
      }
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      *(undefined4 *)(param_1 + 0x8e8) = 0;
    }
  }
  else {
    FUN_009b8474(&local_78);
    if (local_78 == (long *)0x0) goto LAB_01a837a8;
    if (*(float *)(local_78 + 0x43) <= 0.0) {
      bVar13 = false;
    }
    else {
      bVar13 = *(float *)((long)local_78 + 0x21c) < *(float *)(local_78 + 0x43);
    }
    lVar16 = local_78[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar25 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
      if (!bVar13) goto LAB_01a837b4;
      goto LAB_01a83df8;
    }
    if (bVar13) goto LAB_01a83df8;
  }
LAB_01a837b4:
  fVar29 = (float)*param_3;
  fVar33 = fVar29 * fVar29;
  fVar30 = (float)((ulong)*param_3 >> 0x20);
  fVar34 = fVar30 * fVar30;
  fVar31 = (float)param_3[1];
  fVar32 = (float)((ulong)param_3[1] >> 0x20);
  auVar35._4_4_ = fVar34;
  auVar35._0_4_ = fVar33;
  auVar35._8_4_ = fVar31 * fVar31;
  auVar35._12_4_ = fVar32 * fVar32;
  auVar38._4_4_ = fVar34;
  auVar38._0_4_ = fVar33;
  auVar38._8_4_ = fVar31 * fVar31;
  auVar38._12_4_ = fVar32 * fVar32;
  auVar35 = NEON_ext(auVar35,auVar38,8,1);
  fVar5 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  fVar33 = auVar35._0_4_ + fVar33;
  fVar34 = auVar35._4_4_ + fVar34;
  fVar24 = fVar33 + fVar34;
  fVar33 = fVar33 + fVar34;
  auVar6._4_4_ = fVar33;
  auVar6._0_4_ = fVar24;
  auVar6._8_4_ = fVar24;
  auVar6._12_4_ = fVar33;
  auVar35 = NEON_frsqrte(auVar6,4);
  iVar25 = -(uint)(fVar24 < fVar5);
  iVar26 = -(uint)(fVar33 < fVar5);
  iVar27 = -(uint)(fVar24 < fVar5);
  iVar28 = -(uint)(fVar33 < fVar5);
  auVar37._0_4_ = auVar35._0_4_ * fVar24;
  auVar37._4_4_ = auVar35._4_4_ * fVar33;
  auVar37._8_4_ = auVar35._8_4_ * fVar24;
  auVar37._12_4_ = auVar35._12_4_ * fVar33;
  auVar38 = NEON_frsqrts(auVar35,auVar37,4);
  auVar36._0_4_ = auVar35._0_4_ * auVar38._0_4_;
  auVar36._4_4_ = auVar35._4_4_ * auVar38._4_4_;
  auVar36._8_4_ = auVar35._8_4_ * auVar38._8_4_;
  auVar36._12_4_ = auVar35._12_4_ * auVar38._12_4_;
  auVar39._0_4_ = fVar24 * auVar36._0_4_;
  auVar39._4_4_ = fVar33 * auVar36._4_4_;
  auVar39._8_4_ = fVar24 * auVar36._8_4_;
  auVar39._12_4_ = fVar33 * auVar36._12_4_;
  auVar35 = NEON_frsqrts(auVar36,auVar39,4);
  fVar29 = fVar29 * auVar36._0_4_ * auVar35._0_4_;
  fVar30 = fVar30 * auVar36._4_4_ * auVar35._4_4_;
  fVar31 = fVar31 * auVar36._8_4_ * auVar35._8_4_;
  fVar32 = fVar32 * auVar36._12_4_ * auVar35._12_4_;
  lVar16 = CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                      CONCAT14(SUB41(fVar30,0) & ~(byte)iVar26,
                                               CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                        ~(byte)((uint)iVar25 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                                 ~(byte)((uint)iVar25 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar29 >> 8)
                                                                          & ~(byte)((uint)iVar25 >>
                                                                                   8),
                                                                          SUB41(fVar29,0) &
                                                                          ~(byte)iVar25)))))));
  lVar19 = CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                    CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                             CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                      CONCAT14(SUB41(fVar32,0) & ~(byte)iVar28,
                                               CONCAT13((byte)((uint)fVar31 >> 0x18) &
                                                        ~(byte)((uint)iVar27 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                                                 ~(byte)((uint)iVar27 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar31 >> 8)
                                                                          & ~(byte)((uint)iVar27 >>
                                                                                   8),
                                                                          SUB41(fVar31,0) &
                                                                          ~(byte)iVar27)))))));
  FUN_01839c8c(&local_78,param_1 + 0xad0);
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    iVar25 = *(int *)((long)local_78 + 0x7c);
    do {
      iVar26 = *piVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar26 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar26 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
    if ((iVar25 == 2) && (FUN_01839c8c(&local_78,param_1 + 0xad0), local_78 != (long *)0x0)) {
      local_78[0x13] = param_2[1];
      local_78[0x12] = *param_2;
      lVar15 = local_78[0xb];
      *(undefined1 *)(local_78 + 0x10) = 1;
      piVar1 = (int *)(lVar15 + 0xc);
      local_78[0x15] = lVar19;
      local_78[0x14] = lVar16;
      do {
        iVar25 = *piVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  FUN_009c69bc(&local_78,param_1);
  lVar15 = param_2[1];
  local_78[0x1a] = *param_2;
  local_78[0x1b] = lVar15;
  *(undefined1 *)(local_78 + 0x1c) = 1;
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar25 = *piVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  FUN_009c69bc(&local_78,param_1);
  *(undefined1 *)(local_78 + 0x1c) = 1;
  local_78[0x19] = lVar19;
  local_78[0x18] = lVar16;
  if (local_78 == (long *)0x0) {
LAB_01a83910:
    if (*(long *)(param_1 + 0x628) == 0) goto LAB_01a83918;
LAB_01a83e58:
    FUN_009b8474(&local_68);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x70))();
      plVar17 = local_68;
      if (local_68[0x4b] == 0) {
        local_78 = (long *)0x0;
LAB_01a83e84:
        cVar3 = (char)plVar17[0x3e];
      }
      else {
        FUN_0182b7ac(&local_78);
        if (local_78 == (long *)0x0) goto LAB_01a83e84;
        if ((char)local_78[0x3e] != '\0') {
          *(undefined1 *)(local_78 + 0x3e) = 0;
        }
        lVar16 = local_78[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar25 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar25 + -1 != 0) goto LAB_01a83e84;
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
        cVar3 = (char)plVar17[0x3e];
      }
      if (cVar3 != '\0') {
        *(undefined1 *)(plVar17 + 0x3e) = 0;
      }
      if (local_68 != (long *)0x0) {
        lVar16 = local_68[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar25 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
          lVar16 = *(long *)(param_1 + 0x638);
          goto joined_r0x01a83ec8;
        }
      }
    }
  }
  else {
    lVar16 = local_78[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar25 = *piVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar25 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar25 + -1 != 0) goto LAB_01a83910;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_78 + 0x20))();
    if (*(long *)(param_1 + 0x628) != 0) goto LAB_01a83e58;
LAB_01a83918:
    local_68 = (long *)0x0;
  }
  lVar16 = *(long *)(param_1 + 0x638);
joined_r0x01a83ec8:
  if (lVar16 == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_0182b7ac(&local_78);
    if (local_78 != (long *)0x0) {
      if ((char)local_78[0x3e] != '\0') {
        *(undefined1 *)(local_78 + 0x3e) = 0;
      }
      *(undefined4 *)(local_78 + 0x44) = 0;
      *(int *)((long)local_78 + 0x21c) = (int)local_78[0x43];
      lVar16 = param_3[1];
      local_78[0x4c] = *param_3;
      lVar19 = local_78[0xb];
      local_78[0x4d] = lVar16;
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar25 = *piVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  FUN_01a8958c(param_1);
  puVar7 = PTR_DAT_0437af70;
  lVar16 = *(long *)(param_1 + 0xa70);
  if (lVar16 != param_1 + 0xa68) {
    puVar18 = (undefined8 *)PTR_DAT_043794d8;
    puVar20 = (undefined8 *)PTR_DAT_0437af78;
    puVar22 = (undefined8 *)PTR_DAT_043795e0;
    do {
      lVar19 = *(long *)(lVar16 + 0x10);
      if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) != 0)) {
        piVar1 = (int *)(lVar19 + 0xc);
        iVar25 = *(int *)(lVar19 + 0xc);
        do {
          plVar17 = *(long **)(lVar19 + 0x10);
          if (((*puVar7 & 1) == 0) && (iVar26 = __cxa_guard_acquire(puVar7), iVar26 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar26 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar26 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar26 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar26 != 0)) {
                uVar14 = FUN_0087f8f0();
                *puVar18 = uVar14;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *puVar22 = puVar18;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *puVar20 = puVar22;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_01a83978;
            if (plVar17 == puVar20) break;
            plVar17 = (long *)*plVar17;
            puVar18 = (undefined8 *)PTR_DAT_043794d8;
            puVar20 = (undefined8 *)PTR_DAT_0437af78;
            puVar22 = (undefined8 *)PTR_DAT_043795e0;
          }
          iVar26 = *piVar1;
          if (iVar26 == iVar25) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = iVar25 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar19 = *(long *)(lVar19 + 0x18);
              puVar18 = (undefined8 *)PTR_DAT_043794d8;
              puVar20 = (undefined8 *)PTR_DAT_0437af78;
              puVar22 = (undefined8 *)PTR_DAT_043795e0;
              if (lVar19 != 0) {
                if (*(long *)(lVar19 + 0x1a8) != *(long *)(lVar19 + 0x1a0)) {
                  uVar21 = 0;
                  do {
                    FUN_02be8650(&local_78,(long *)(lVar19 + -0x50),uVar21 & 0xffffffff);
                    plVar17 = local_78;
                    if (local_78 != (long *)0x0) {
                      if (*(int *)((long)local_78 + 0xc) != 0) {
                        piVar1 = (int *)((long)local_78 + 0xc);
                        iVar25 = *(int *)((long)local_78 + 0xc);
                        do {
                          plVar23 = (long *)plVar17[2];
                          if (((*PTR_DAT_0437a598 & 1) == 0) &&
                             (iVar26 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar26 != 0)) {
                            if (((*PTR_DAT_043794d0 & 1) == 0) &&
                               (iVar26 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar26 != 0)) {
                              uVar14 = FUN_0087f8f0();
                              *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                              __cxa_guard_release(PTR_DAT_043794d0);
                            }
                            *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
                            __cxa_guard_release(PTR_DAT_0437a598);
                          }
                          while( true ) {
                            if (plVar23 == (long *)0x0) goto LAB_01a83d10;
                            if (plVar23 == (long *)PTR_DAT_0437a588) break;
                            plVar23 = (long *)*plVar23;
                          }
                          iVar26 = *piVar1;
                          if (iVar26 == iVar25) {
                            cVar3 = '\x01';
                            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar13) {
                              *piVar1 = iVar25 + 1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                            if (cVar3 == '\0') {
                              lVar15 = plVar17[3];
                              plVar17 = (long *)0x0;
                              plVar23 = local_78;
                              if (lVar15 != 0) {
                                plVar17 = (long *)(lVar15 + -0x50);
                              }
                              goto joined_r0x01a83c74;
                            }
                          }
                          else {
                            ClearExclusiveLocal();
                          }
                          iVar25 = iVar26;
                        } while (iVar26 != 0);
                      }
LAB_01a83d10:
                      plVar17 = (long *)0x0;
                      plVar23 = local_78;
joined_r0x01a83c74:
                      local_78 = plVar23;
                      if (plVar23 != (long *)0x0) {
                        plVar2 = plVar23 + 1;
                        do {
                          iVar25 = (int)*plVar2 + -1;
                          cVar3 = '\x01';
                          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar13) {
                            *(int *)plVar2 = iVar25;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar25 == 0) {
                          plVar23[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar15 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar15;
                          local_68 = (long *)*plVar23;
                          FUN_02a44274(lVar15 + 0xd8,&local_68);
                        }
                      }
                      if (plVar17 != (long *)0x0) {
                        *(undefined1 *)((long)plVar17 + 0x81) = 1;
                        lVar15 = plVar17[0xb];
                        piVar1 = (int *)(lVar15 + 0xc);
                        do {
                          iVar25 = *piVar1;
                          cVar3 = '\x01';
                          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar13) {
                            *piVar1 = iVar25 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar25 + -1 == 0) {
                          *(undefined8 *)(lVar15 + 0x18) = 0;
                          (**(code **)(*plVar17 + 0x20))(plVar17);
                        }
                      }
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < (ulong)(*(long *)(lVar19 + 0x1a8) - *(long *)(lVar19 + 0x1a0) >>
                                           4));
                }
                lVar15 = *(long *)(lVar19 + 8);
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar25 = *piVar1;
                  cVar3 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar13) {
                    *piVar1 = iVar25 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  puVar20 = (undefined8 *)PTR_DAT_0437af78;
                  puVar22 = (undefined8 *)PTR_DAT_043795e0;
                  puVar18 = (undefined8 *)PTR_DAT_043794d8;
                } while (cVar3 != '\0');
                if (iVar25 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))();
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          puVar18 = (undefined8 *)PTR_DAT_043794d8;
          puVar20 = (undefined8 *)PTR_DAT_0437af78;
          puVar22 = (undefined8 *)PTR_DAT_043795e0;
          iVar25 = iVar26;
        } while (iVar26 != 0);
      }
LAB_01a83978:
      lVar16 = *(long *)(lVar16 + 8);
    } while (lVar16 != param_1 + 0xa68);
  }
  if ((*(long *)(param_1 + 0x618) != 0) && (FUN_01aa5214(&local_80), local_80 != (long *)0x0)) {
    (**(code **)(*local_80 + 0x110))(&local_88);
    if (local_88 != (long *)0x0) {
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_019ec938(&local_78,local_88 + 0x3e);
      plVar17 = local_78;
      puVar12 = PTR_DAT_0437a678;
      puVar11 = PTR_DAT_0437a670;
      puVar10 = PTR_DAT_0437a598;
      puVar9 = PTR_DAT_0437a588;
      puVar8 = PTR_DAT_043794d8;
      puVar7 = PTR_DAT_043794d0;
      if (local_78 != (long *)0x0) {
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar25 = *(int *)((long)local_78 + 0xc);
          do {
            plVar23 = (long *)plVar17[2];
            if (((*puVar11 & 1) == 0) && (iVar26 = __cxa_guard_acquire(puVar11), iVar26 != 0)) {
              if (((*puVar10 & 1) == 0) && (iVar26 = __cxa_guard_acquire(puVar10), iVar26 != 0)) {
                if (((*puVar7 & 1) == 0) && (iVar26 = __cxa_guard_acquire(puVar7), iVar26 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)puVar8 = uVar14;
                  __cxa_guard_release(puVar7);
                }
                *(undefined **)puVar9 = puVar8;
                __cxa_guard_release(puVar10);
              }
              *(undefined **)puVar12 = puVar9;
              __cxa_guard_release(puVar11);
            }
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_01a841f4;
              if (plVar23 == (long *)puVar12) break;
              plVar23 = (long *)*plVar23;
            }
            iVar26 = *piVar1;
            if (iVar26 == iVar25) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar13) {
                *piVar1 = iVar25 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar16 = plVar17[3];
                plVar17 = (long *)0x0;
                plVar23 = local_78;
                if (lVar16 != 0) {
                  plVar17 = (long *)(lVar16 + -0x50);
                }
                goto joined_r0x01a84218;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar25 = iVar26;
          } while (iVar26 != 0);
        }
LAB_01a841f4:
        plVar17 = (long *)0x0;
        plVar23 = local_78;
joined_r0x01a84218:
        local_78 = plVar23;
        if (plVar23 != (long *)0x0) {
          plVar2 = plVar23 + 1;
          do {
            iVar25 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar13) {
              *(int *)plVar2 = iVar25;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar25 == 0) {
            plVar23[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_68 = (long *)*plVar23;
            FUN_02a44274(lVar16 + 0xd8,&local_68);
          }
        }
        if (plVar17 != (long *)0x0) {
          *(undefined1 *)((long)plVar17 + 0x81) = 1;
          lVar16 = plVar17[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar25 = *piVar1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = iVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar25 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
        }
      }
      if (local_88 != (long *)0x0) {
        lVar16 = local_88[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar25 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
    if (local_80 != (long *)0x0) {
      lVar16 = local_80[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar25 = *piVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar25 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  return;
}


