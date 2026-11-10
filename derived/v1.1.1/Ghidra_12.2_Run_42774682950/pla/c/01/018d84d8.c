/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d84d8; name: FUN_018d84d8
 */


uint FUN_018d84d8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  float fVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_q3 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long *local_190;
  undefined8 local_188;
  undefined8 local_180;
  long *plStack_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined1 local_16b;
  long *local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *plStack_148;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  float local_108;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined8 *local_c0 [2];
  undefined8 *local_b0 [2];
  undefined8 *local_a0 [2];
  undefined8 local_90;
  undefined8 *local_88 [2];
  undefined1 local_78;
  long *local_58;
  long *local_48;
  
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_00ac3fa4(&local_130,param_1 + 0x248);
  if (local_130 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_48);
    puVar12 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_160 = (long *)*puVar12;
        FUN_02a44274(lVar15 + 0xd8,&local_160);
      }
    }
  }
  if (local_48 != (long *)0x0) {
    FUN_018d6bd0(&local_58,param_2 + 2);
    if (local_58 != (long *)0x0) {
      FUN_01792e28(&local_130);
      local_128 = param_2[1];
      local_130 = (undefined8 *)*param_2;
      FUN_009c69bc(&local_160,local_58);
      (**(code **)(*local_160 + 0x40))();
      uStack_118 = in_q3._8_8_;
      local_120 = in_q3._0_8_;
      if (local_160 != (long *)0x0) {
        lVar15 = local_160[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_160 + 0x20))();
        }
      }
      local_110 = 0;
      local_160 = (long *)0x32c06e5ba5fa9d59;
      pcStack_158 = "ball_out_base_distance";
      local_150 = 0x16;
      plStack_148 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar15 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar15;
      uVar16 = *(ulong *)(lVar15 + 0x60);
      fVar21 = 0.0;
      if (uVar16 != 0) {
        uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          uVar18 = uVar16 - 1 & 0x6af7749a577985d7;
        }
        else if (uVar16 < 0x6af7749a577985d8) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0x6af7749a577985d7 / uVar16;
          }
          uVar18 = 0x6af7749a577985d7 - uVar18 * uVar16;
        }
        else {
          uVar18 = 0x6af7749a577985d7;
        }
        plVar19 = *(long **)(*(long *)(lVar15 + 0x58) + uVar18 * 8);
        if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
          if (uVar17 < 2) {
            do {
              if (plVar19[1] == 0x6af7749a577985d7) {
                if (plVar19[2] == 0x6af7749a577985d7) goto LAB_018d867c;
              }
              else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              uVar17 = plVar19[1];
              if (uVar17 == 0x6af7749a577985d7) {
                if (plVar19[2] == 0x6af7749a577985d7) goto LAB_018d867c;
              }
              else {
                if (uVar16 <= uVar17) {
                  uVar6 = 0;
                  if (uVar16 != 0) {
                    uVar6 = uVar17 / uVar16;
                  }
                  uVar17 = uVar17 - uVar6 * uVar16;
                }
                if (uVar17 != uVar18) break;
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
      }
      goto LAB_018d86bc;
    }
    goto LAB_018d89f8;
  }
LAB_018d8b34:
  uVar20 = (uint)param_1;
  bVar11 = 0;
joined_r0x018d8a2c:
  if (local_48 != (long *)0x0) {
    lVar15 = local_48[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return uVar20 & bVar11;
LAB_018d867c:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar2 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar21 = (float)FUN_00d7905c(plVar19,&local_160);
    do {
      iVar14 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
LAB_018d86bc:
  local_108 = (float)FUN_01a75574(local_58);
  local_108 = fVar21 + local_108;
  if (plStack_148 != (long *)0x0) {
    (**(code **)(*plStack_148 + 0x20))();
  }
  bVar4 = true;
  local_d0 = 1;
  local_c8 = *(undefined4 *)(param_2 + 4);
  FUN_00b63974(local_c0,param_2 + 5);
  FUN_00cfa028(local_b0,param_2 + 7);
  FUN_0095aa3c(local_a0,param_2 + 9);
  local_90 = param_2[0xb];
  FUN_00bd10a0(local_88,param_2 + 0xc);
  local_78 = *(undefined1 *)(param_2 + 0xe);
  FUN_018d49c8(&local_160,param_1,&local_130);
  plVar19 = plStack_148;
  uVar13 = local_150;
  if ((char)local_160 == '\0') {
    param_1 = 0;
    puVar12 = local_88[0];
  }
  else {
    fVar22 = (float)local_120 - (float)local_150;
    fVar24 = (float)uStack_118 - SUB84(plStack_148,0);
    fVar25 = (float)((ulong)uStack_118 >> 0x20) - (float)((ulong)plStack_148 >> 0x20);
    fVar21 = fVar22 * fVar22;
    fVar10 = fVar24 * fVar24;
    uVar26 = (undefined1)((uint)fVar10 >> 8);
    uVar27 = (undefined1)((uint)fVar10 >> 0x10);
    uVar28 = (undefined1)((uint)fVar10 >> 0x18);
    fVar25 = fVar25 * fVar25;
    uVar29 = (undefined1)((uint)fVar25 >> 8);
    uVar30 = (undefined1)((uint)fVar25 >> 0x10);
    uVar31 = (undefined1)((uint)fVar25 >> 0x18);
    auVar32._4_4_ = 0;
    auVar32._0_4_ = fVar21;
    auVar32[8] = SUB41(fVar10,0);
    auVar32[9] = uVar26;
    auVar32[10] = uVar27;
    auVar32[0xb] = uVar28;
    auVar32[0xc] = SUB41(fVar25,0);
    auVar32[0xd] = uVar29;
    auVar32[0xe] = uVar30;
    auVar32[0xf] = uVar31;
    auVar35._4_4_ = 0;
    auVar35._0_4_ = fVar21;
    auVar35[8] = SUB41(fVar10,0);
    auVar35[9] = uVar26;
    auVar35[10] = uVar27;
    auVar35[0xb] = uVar28;
    auVar35[0xc] = SUB41(fVar25,0);
    auVar35[0xd] = uVar29;
    auVar35[0xe] = uVar30;
    auVar35[0xf] = uVar31;
    auVar32 = NEON_ext(auVar32,auVar35,8,1);
    fVar21 = auVar32._0_4_ + fVar21;
    fVar10 = auVar32._4_4_ + 0.0;
    fVar25 = fVar21 + fVar10;
    fVar21 = fVar21 + fVar10;
    uVar26 = SUB41(fVar21,0);
    uVar27 = (undefined1)((uint)fVar21 >> 8);
    uVar28 = (undefined1)((uint)fVar21 >> 0x10);
    uVar29 = (undefined1)((uint)fVar21 >> 0x18);
    if (fVar25 != 0.0) {
      auVar7[4] = uVar26;
      auVar7._0_4_ = fVar25;
      auVar7[5] = uVar27;
      auVar7[6] = uVar28;
      auVar7[7] = uVar29;
      auVar7[8] = SUB41(fVar25,0);
      auVar7[9] = (char)((uint)fVar25 >> 8);
      auVar7[10] = (char)((uint)fVar25 >> 0x10);
      auVar7[0xb] = (char)((uint)fVar25 >> 0x18);
      auVar7[0xc] = uVar26;
      auVar7[0xd] = uVar27;
      auVar7[0xe] = uVar28;
      auVar7[0xf] = uVar29;
      auVar32 = NEON_frsqrte(auVar7,4);
      auVar34._0_4_ = auVar32._0_4_ * fVar25;
      auVar34._4_4_ = auVar32._4_4_ * fVar21;
      auVar34._8_4_ = auVar32._8_4_ * fVar25;
      uVar8 = (undefined2)(CONCAT15(uVar27,CONCAT14(uVar26,fVar25)) >> 0x20);
      auVar34._12_4_ = auVar32._12_4_ * (float)CONCAT13(uVar29,CONCAT12(uVar28,uVar8));
      auVar35 = NEON_frsqrts(auVar32,auVar34,4);
      auVar33._0_4_ = auVar32._0_4_ * auVar35._0_4_;
      auVar33._4_4_ = auVar32._4_4_ * auVar35._4_4_;
      auVar33._8_4_ = auVar32._8_4_ * auVar35._8_4_;
      auVar33._12_4_ = auVar32._12_4_ * auVar35._12_4_;
      auVar36._0_4_ = fVar25 * auVar33._0_4_;
      auVar36._4_4_ = fVar21 * auVar33._4_4_;
      auVar36._8_4_ = fVar25 * auVar33._8_4_;
      auVar36._12_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar28,uVar8)) * auVar33._12_4_;
      iVar14 = -(uint)(fVar25 == 0.0);
      iVar9 = -(uint)(fVar21 == 0.0);
      auVar32 = NEON_frsqrts(auVar33,auVar36,4);
      fVar22 = fVar22 * auVar33._0_4_ * auVar32._0_4_;
      fVar21 = auVar33._4_4_ * auVar32._4_4_ * 0.0;
      uVar23 = FUN_01009820(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                                     CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                              ~(byte)((uint)iVar9 >> 0x10),
                                              CONCAT15((byte)((uint)fVar21 >> 8) &
                                                       ~(byte)((uint)iVar9 >> 8),
                                                       CONCAT14(SUB41(fVar21,0) & ~(byte)iVar9,
                                                                CONCAT13((byte)((uint)fVar22 >> 0x18
                                                                               ) & ~(byte)((uint)
                                                  iVar14 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                           ~(byte)((uint)iVar14 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar22 >> 8) &
                                                                    ~(byte)((uint)iVar14 >> 8),
                                                                    SUB41(fVar22,0) & ~(byte)iVar14)
                                                          )))))),
                            SUB41(fVar24 * auVar33._8_4_ * auVar32._8_4_,0) & ~-(fVar25 == 0.0));
      FUN_009c69bc(&local_190,local_48);
      plVar2 = local_190;
      auVar32 = FUN_009a7ff4(uVar23,0,ZEXT816(0));
      *(undefined1 *)(plVar2 + 0x1c) = 1;
      *(undefined1 (*) [16])(plVar2 + 0x18) = auVar32;
      if (local_190 != (long *)0x0) {
        lVar15 = local_190[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_190 + 0x20))();
        }
      }
    }
    local_170 = 0;
    local_16b = 0;
    local_188 = param_2[1];
    local_190 = (long *)*param_2;
    local_16c = 1;
    local_180 = uVar13;
    plStack_178 = plVar19;
    uVar16 = FUN_018d782c(param_1,&local_190);
    bVar4 = (uVar16 & 1) != 0;
    if (bVar4) {
      *(undefined4 *)(param_1 + 0x710) = 3;
      FUN_00b636fc(param_1 + 0x738,param_2 + 2);
      *(undefined1 *)(param_1 + 0x758) = *(undefined1 *)(param_2 + 0xf);
    }
    param_1 = 1;
    puVar12 = local_88[0];
  }
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_160 = (long *)*puVar12;
      FUN_02a44274(lVar15 + 0xd8,&local_160);
    }
  }
  if (local_a0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0[0] + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_a0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_160 = (long *)*local_a0[0];
      FUN_02a44274(lVar15 + 0xd8,&local_160);
    }
  }
  if (local_b0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0[0] + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_b0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_160 = (long *)*local_b0[0];
      FUN_02a44274(lVar15 + 0xd8,&local_160);
    }
  }
  if (local_c0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0[0] + 1);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_c0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_160 = (long *)*local_c0[0];
      FUN_02a44274(lVar15 + 0xd8,&local_160);
    }
  }
  if (bVar4) {
    bVar4 = true;
    if (local_58 != (long *)0x0) goto LAB_018d8a04;
LAB_018d8a20:
    uVar20 = (uint)param_1;
  }
  else {
LAB_018d89f8:
    bVar4 = false;
    if (local_58 == (long *)0x0) goto LAB_018d8a20;
LAB_018d8a04:
    uVar20 = (uint)param_1;
    lVar15 = local_58[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 != 0) goto LAB_018d8a20;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*local_58 + 0x20))();
  }
  if (bVar4) {
    bVar11 = 1;
    goto joined_r0x018d8a2c;
  }
  goto LAB_018d8b34;
}


