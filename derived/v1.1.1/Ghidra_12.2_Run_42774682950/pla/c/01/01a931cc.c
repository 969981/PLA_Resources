/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a931cc; name: FUN_01a931cc
 */


bool FUN_01a931cc(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [12];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  int iVar45;
  int iVar48;
  int iVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar50;
  float fVar51;
  float fVar52;
  
  puVar8 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar45 = __cxa_guard_acquire(PTR_DAT_04379660), iVar45 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar10 = PTR_DAT_04379670;
  puVar9 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar51 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x6c43119d71eecde9;
    }
    else {
      uVar16 = 0x6c43119d71eecde9;
      if (uVar14 < 0x6c43119d71eecdea) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x6c43119d71eecde9 / uVar14;
        }
        uVar16 = 0x6c43119d71eecde9 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x6c43119d71eecde9) {
            if (plVar18[2] == 0x6c43119d71eecde9) goto LAB_01a93364;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x6c43119d71eecde9) {
            if (plVar18[2] == 0x6c43119d71eecde9) goto LAB_01a93364;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01a9349c:
  bVar2 = *puVar8;
joined_r0x01a93570:
  if (((bVar2 & 1) == 0) && (iVar45 = __cxa_guard_acquire(PTR_DAT_04379660), iVar45 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar9;
  *(long *)puVar10 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar52 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x6c43119d71eecde9;
    }
    else {
      uVar16 = 0x6c43119d71eecde9;
      if (uVar14 < 0x6c43119d71eecdea) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x6c43119d71eecde9 / uVar14;
        }
        uVar16 = 0x6c43119d71eecde9 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x6c43119d71eecde9) {
            if (plVar18[2] == 0x6c43119d71eecde9) goto LAB_01a935f4;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x6c43119d71eecde9) {
            if (plVar18[2] == 0x6c43119d71eecde9) goto LAB_01a935f4;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_01a9372c;
LAB_01a93364:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = plVar18[0x21];
    fVar51 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0x135d004b89efa018;
      }
      else if (uVar14 < 0x135d004b89efa019) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x135d004b89efa018 / uVar14;
        }
        uVar16 = 0x135d004b89efa018 - uVar16 * uVar14;
      }
      else {
        uVar16 = 0x135d004b89efa018;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0x135d004b89efa018) {
              if (plVar19[2] == 0x135d004b89efa018) goto LAB_01a93484;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0x135d004b89efa018) {
              if (plVar19[2] == 0x135d004b89efa018) goto LAB_01a93484;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar4 = 0;
                if (uVar14 != 0) {
                  uVar4 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar4 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01a93488;
  }
  goto LAB_01a9349c;
LAB_01a93484:
  fVar51 = *(float *)(plVar19 + 6);
LAB_01a93488:
  do {
    iVar45 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = iVar45;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar45 != 0) goto LAB_01a9349c;
  (**(code **)(*plVar18 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01a93570;
LAB_01a935f4:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_01a9372c;
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar18[0x21];
  fVar52 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x732f1340c2f5189d;
    }
    else if (uVar14 < 0x732f1340c2f5189e) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x732f1340c2f5189d / uVar14;
      }
      uVar16 = 0x732f1340c2f5189d - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x732f1340c2f5189d;
    }
    plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x732f1340c2f5189d) {
            if (plVar19[2] == 0x732f1340c2f5189d) goto LAB_01a93714;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x732f1340c2f5189d) {
            if (plVar19[2] == 0x732f1340c2f5189d) goto LAB_01a93714;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_01a93718;
LAB_01a93714:
  fVar52 = *(float *)(plVar19 + 6);
LAB_01a93718:
  do {
    iVar45 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = iVar45;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar45 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_01a9372c:
  uVar14 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((uVar14 & 1) != 0) {
    fVar21 = (float)*param_3 * *param_2;
    fVar22 = (float)((ulong)*param_3 >> 0x20) * param_2[1];
    fVar23 = (float)param_3[1] * param_2[2];
    fVar24 = (float)((ulong)param_3[1] >> 0x20) * param_2[3];
    auVar26._4_4_ = fVar22;
    auVar26._0_4_ = fVar21;
    auVar26._8_4_ = fVar23;
    auVar26._12_4_ = fVar24;
    auVar47._4_4_ = fVar22;
    auVar47._0_4_ = fVar21;
    auVar47._8_4_ = fVar23;
    auVar47._12_4_ = fVar24;
    auVar26 = NEON_ext(auVar26,auVar47,8,1);
    if ((auVar26._0_4_ + fVar21 + auVar26._4_4_ + fVar22 < fVar51) && (fVar52 < param_2[4])) {
      return true;
    }
  }
  plVar18 = (long *)param_1[299];
  param_1 = param_1 + 0x12a;
  if (param_1 != plVar18) {
    fVar25 = param_2[4];
    fVar23 = (float)*(undefined8 *)(param_2 + 2);
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    fVar21 = (float)*(undefined8 *)param_2;
    fVar22 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    do {
      fVar27 = *(float *)(plVar18 + 2);
      fVar5 = *(float *)((long)plVar18 + 0x14);
      fVar6 = *(float *)(plVar18 + 3);
      fVar7 = *(float *)((long)plVar18 + 0x1c);
      fVar29 = fVar21 - fVar27;
      fVar33 = fVar22 - fVar5;
      fVar34 = fVar23 - fVar6;
      fVar35 = fVar24 - fVar7;
      auVar37._0_4_ = fVar29 * fVar29;
      auVar37._4_4_ = fVar33 * fVar33;
      auVar37._8_4_ = fVar34 * fVar34;
      auVar37._12_4_ = fVar35 * fVar35;
      auVar26 = NEON_ext(auVar37,auVar37,8,1);
      fVar36 = auVar26._0_4_ + auVar37._0_4_;
      fVar40 = auVar26._4_4_ + auVar37._4_4_;
      fVar20 = fVar36 + fVar40;
      fVar36 = fVar36 + fVar40;
      if (fVar20 != 0.0) {
        auVar38._8_8_ = CONCAT44(fVar36,fVar20);
        auVar38._0_8_ = CONCAT44(fVar36,fVar20);
        fVar40 = *(float *)(plVar18 + 4);
        auVar26 = NEON_frsqrte(auVar38,4);
        fVar41 = fVar21 * fVar25 - fVar27 * fVar40;
        fVar42 = fVar22 * fVar25 - fVar5 * fVar40;
        fVar43 = fVar23 * fVar25 - fVar6 * fVar40;
        fVar40 = fVar24 * fVar25 - fVar7 * fVar40;
        auVar46._0_4_ = auVar26._0_4_ * fVar20;
        auVar46._4_4_ = auVar26._4_4_ * fVar36;
        auVar46._8_4_ = auVar26._8_4_ * fVar20;
        auVar46._12_4_ = auVar26._12_4_ * fVar36;
        auVar47 = NEON_frsqrts(auVar26,auVar46,4);
        auVar44._0_4_ = auVar26._0_4_ * auVar47._0_4_;
        auVar44._4_4_ = auVar26._4_4_ * auVar47._4_4_;
        auVar44._8_4_ = auVar26._8_4_ * auVar47._8_4_;
        auVar44._12_4_ = auVar26._12_4_ * auVar47._12_4_;
        iVar45 = -(uint)(fVar20 == 0.0);
        iVar48 = -(uint)(fVar36 == 0.0);
        iVar49 = -(uint)(fVar20 == 0.0);
        iVar50 = -(uint)(fVar36 == 0.0);
        auVar39._0_4_ = fVar20 * auVar44._0_4_;
        auVar39._4_4_ = fVar36 * auVar44._4_4_;
        auVar39._8_4_ = fVar20 * auVar44._8_4_;
        auVar39._12_4_ = fVar36 * auVar44._12_4_;
        auVar26 = NEON_frsqrts(auVar44,auVar39,4);
        fVar29 = fVar29 * auVar44._0_4_ * auVar26._0_4_;
        fVar33 = fVar33 * auVar44._4_4_ * auVar26._4_4_;
        fVar34 = fVar34 * auVar44._8_4_ * auVar26._8_4_;
        fVar35 = fVar35 * auVar44._12_4_ * auVar26._12_4_;
        fVar20 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                          ~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11((byte)((uint)fVar29 >> 8) &
                                                   ~(byte)((uint)iVar45 >> 8),
                                                   SUB41(fVar29,0) & ~(byte)iVar45)));
        auVar30._0_8_ =
             CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                      CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                               CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                        CONCAT14(SUB41(fVar33,0) & ~(byte)iVar48,fVar20))));
        auVar30[8] = SUB41(fVar34,0) & ~(byte)iVar49;
        auVar30[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar49 >> 8);
        auVar30[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
        auVar30[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
        auVar31[0xc] = SUB41(fVar35,0) & ~(byte)iVar50;
        auVar31._0_12_ = auVar30;
        auVar31[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar50 >> 8);
        auVar31[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
        auVar31[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
        auVar28._0_4_ = fVar27 * fVar20;
        auVar28._4_4_ = fVar5 * (float)((ulong)auVar30._0_8_ >> 0x20);
        auVar28._8_4_ = fVar6 * auVar30._8_4_;
        auVar28._12_4_ = fVar7 * auVar31._12_4_;
        auVar47 = NEON_ext(auVar28,auVar28,8,1);
        auVar32._0_4_ = fVar41 * fVar41;
        auVar32._4_4_ = fVar42 * fVar42;
        auVar32._8_4_ = fVar43 * fVar43;
        auVar32._12_4_ = fVar40 * fVar40;
        auVar26 = NEON_ext(auVar32,auVar32,8,1);
        fVar27 = SQRT(auVar26._0_4_ + auVar32._0_4_ + auVar26._4_4_ + auVar32._4_4_);
        bVar11 = false;
        bVar12 = true;
        bVar13 = false;
        if (auVar47._0_4_ + auVar28._0_4_ + auVar47._4_4_ + auVar28._4_4_ < fVar51) {
          bVar11 = false;
          bVar12 = false;
          bVar13 = true;
          if (!NAN(fVar27) && !NAN(fVar52)) {
            bVar11 = fVar27 < fVar52;
            bVar12 = fVar27 == fVar52;
            bVar13 = false;
          }
        }
        if (!bVar12 && bVar11 == bVar13) {
          if (param_4 != (undefined8 *)0x0) {
            param_4[1] = plVar18[3];
            *param_4 = plVar18[2];
          }
          break;
        }
      }
      plVar18 = (long *)plVar18[1];
    } while (param_1 != plVar18);
  }
  return param_1 != plVar18;
}


