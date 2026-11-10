/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a97370; name: FUN_01a97370
 */


/* WARNING: Removing unreachable block (ram,0x01a97508) */

bool FUN_01a97370(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  float fVar28;
  float fVar29;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar35;
  int iVar38;
  int iVar39;
  undefined1 auVar36 [16];
  int iVar40;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = 0x6c43119d71eecde9;
  pcStack_58 = "character_controller";
  local_50 = 0x14;
  local_48 = (long *)0x0;
  local_80 = 0xf9ec47b6c2cddbe6;
  pcStack_78 = "control_checkTranslationDirEqualNormal";
  local_70 = 0x26;
  local_68 = (long *)0x0;
  uVar10 = FUN_00e9e50c(&local_60,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar10 & 1) != 0) {
    puVar2 = (undefined8 *)param_1[1];
    fVar18 = (float)*puVar2;
    auVar41._0_4_ = fVar18 * fVar18;
    fVar29 = (float)((ulong)*puVar2 >> 0x20);
    auVar41._4_4_ = fVar29 * fVar29;
    fVar34 = (float)puVar2[1];
    auVar41._8_4_ = fVar34 * fVar34;
    fVar9 = (float)((ulong)puVar2[1] >> 0x20);
    auVar41._12_4_ = fVar9 * fVar9;
    auVar36 = NEON_ext(auVar41,auVar41,8,1);
    fVar28 = auVar36._0_4_ + auVar41._0_4_;
    fVar33 = auVar36._4_4_ + auVar41._4_4_;
    fVar17 = fVar28 + fVar33;
    fVar28 = fVar28 + fVar33;
    auVar36._8_8_ = CONCAT44(fVar28,fVar17);
    auVar36._0_8_ = CONCAT44(fVar28,fVar17);
    auVar41 = NEON_frsqrte(auVar36,4);
    fVar33 = *(float *)(*param_1 + 0x10);
    fVar8 = *(float *)(*param_1 + 0x18);
    auVar44._0_4_ = auVar41._0_4_ * fVar17;
    auVar44._4_4_ = auVar41._4_4_ * fVar28;
    auVar44._8_4_ = auVar41._8_4_ * fVar17;
    auVar44._12_4_ = auVar41._12_4_ * fVar28;
    auVar36 = NEON_frsqrts(auVar41,auVar44,4);
    auVar42._0_4_ = auVar41._0_4_ * auVar36._0_4_;
    auVar42._4_4_ = auVar41._4_4_ * auVar36._4_4_;
    auVar42._8_4_ = auVar41._8_4_ * auVar36._8_4_;
    auVar42._12_4_ = auVar41._12_4_ * auVar36._12_4_;
    auVar45._0_4_ = fVar17 * auVar42._0_4_;
    auVar45._4_4_ = fVar28 * auVar42._4_4_;
    auVar45._8_4_ = fVar17 * auVar42._8_4_;
    auVar45._12_4_ = fVar28 * auVar42._12_4_;
    iVar35 = -(uint)(fVar17 == 0.0);
    iVar38 = -(uint)(fVar28 == 0.0);
    iVar39 = -(uint)(fVar17 == 0.0);
    iVar40 = -(uint)(fVar28 == 0.0);
    auVar41 = NEON_frsqrts(auVar42,auVar45,4);
    fVar18 = fVar18 * auVar42._0_4_ * auVar41._0_4_;
    fVar29 = fVar29 * auVar42._4_4_ * auVar41._4_4_;
    fVar34 = fVar34 * auVar42._8_4_ * auVar41._8_4_;
    fVar9 = fVar9 * auVar42._12_4_ * auVar41._12_4_;
    puVar2[1] = CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                         CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                  CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                           CONCAT14(SUB41(fVar9,0) & ~(byte)iVar40,
                                                    CONCAT13((byte)((uint)fVar34 >> 0x18) &
                                                             ~(byte)((uint)iVar39 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                                                      ~(byte)((uint)iVar39 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar34
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar39
                                                                                      >> 8),
                                                                               SUB41(fVar34,0) &
                                                                               ~(byte)iVar39)))))));
    *puVar2 = CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                       CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                         CONCAT14(SUB41(fVar29,0) & ~(byte)iVar38,
                                                  CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                           ~(byte)((uint)iVar35 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                                                    ~(byte)((uint)iVar35 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar18 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar35 >>
                                                                                    8),
                                                                             SUB41(fVar18,0) &
                                                                             ~(byte)iVar35)))))));
    if (fVar17 != 0.0) {
      auVar30._0_4_ = fVar33 * fVar33;
      auVar30._4_4_ = 0;
      auVar30._8_4_ = fVar8 * fVar8;
      auVar30._12_4_ = 0;
      auVar41 = NEON_ext(auVar30,auVar30,8,1);
      fVar29 = auVar41._0_4_ + auVar30._0_4_;
      fVar34 = auVar41._4_4_ + 0.0;
      fVar18 = fVar29 + fVar34;
      fVar29 = fVar29 + fVar34;
      if (fVar18 != 0.0) {
        auVar31._8_8_ = CONCAT44(fVar29,fVar18);
        auVar31._0_8_ = CONCAT44(fVar29,fVar18);
        auVar41 = NEON_frsqrte(auVar31,4);
        pfVar11 = (float *)param_1[1];
        auVar43._0_4_ = auVar41._0_4_ * fVar18;
        auVar43._4_4_ = auVar41._4_4_ * fVar29;
        auVar43._8_4_ = auVar41._8_4_ * fVar18;
        auVar43._12_4_ = auVar41._12_4_ * fVar29;
        auVar36 = NEON_frsqrts(auVar41,auVar43,4);
        auVar37._0_4_ = auVar41._0_4_ * auVar36._0_4_;
        auVar37._4_4_ = auVar41._4_4_ * auVar36._4_4_;
        auVar37._8_4_ = auVar41._8_4_ * auVar36._8_4_;
        auVar37._12_4_ = auVar41._12_4_ * auVar36._12_4_;
        iVar35 = -(uint)(fVar18 == 0.0);
        iVar38 = -(uint)(fVar29 == 0.0);
        iVar39 = -(uint)(fVar18 == 0.0);
        iVar40 = -(uint)(fVar29 == 0.0);
        auVar32._0_4_ = fVar18 * auVar37._0_4_;
        auVar32._4_4_ = fVar29 * auVar37._4_4_;
        auVar32._8_4_ = fVar18 * auVar37._8_4_;
        auVar32._12_4_ = fVar29 * auVar37._12_4_;
        auVar41 = NEON_frsqrts(auVar37,auVar32,4);
        fVar33 = fVar33 * auVar37._0_4_ * auVar41._0_4_;
        fVar29 = auVar37._4_4_ * auVar41._4_4_ * 0.0;
        fVar8 = fVar8 * auVar37._8_4_ * auVar41._8_4_;
        fVar9 = auVar37._12_4_ * auVar41._12_4_ * 0.0;
        fVar18 = *pfVar11 *
                 (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                 CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                          ~(byte)((uint)iVar35 >> 0x10),
                                          CONCAT11((byte)((uint)fVar33 >> 8) &
                                                   ~(byte)((uint)iVar35 >> 8),
                                                   SUB41(fVar33,0) & ~(byte)iVar35)));
        fVar29 = pfVar11[1] *
                 (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                                 CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                          ~(byte)((uint)iVar38 >> 0x10),
                                          CONCAT11((byte)((uint)fVar29 >> 8) &
                                                   ~(byte)((uint)iVar38 >> 8),
                                                   SUB41(fVar29,0) & ~(byte)iVar38)));
        uVar19 = (undefined1)((uint)fVar29 >> 8);
        uVar20 = (undefined1)((uint)fVar29 >> 0x10);
        uVar21 = (undefined1)((uint)fVar29 >> 0x18);
        fVar34 = pfVar11[2] *
                 (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                 CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                          ~(byte)((uint)iVar39 >> 0x10),
                                          CONCAT11((byte)((uint)fVar8 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar8,0) & ~(byte)iVar39)));
        uVar22 = (undefined1)((uint)fVar34 >> 8);
        uVar23 = (undefined1)((uint)fVar34 >> 0x10);
        uVar24 = (undefined1)((uint)fVar34 >> 0x18);
        fVar9 = pfVar11[3] *
                (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10)
                                         ,CONCAT11((byte)((uint)fVar9 >> 8) &
                                                   ~(byte)((uint)iVar40 >> 8),
                                                   SUB41(fVar9,0) & ~(byte)iVar40)));
        uVar25 = (undefined1)((uint)fVar9 >> 8);
        uVar26 = (undefined1)((uint)fVar9 >> 0x10);
        uVar27 = (undefined1)((uint)fVar9 >> 0x18);
        auVar6[4] = SUB41(fVar29,0);
        auVar6._0_4_ = fVar18;
        auVar6[5] = uVar19;
        auVar6[6] = uVar20;
        auVar6[7] = uVar21;
        auVar6[8] = SUB41(fVar34,0);
        auVar6[9] = uVar22;
        auVar6[10] = uVar23;
        auVar6[0xb] = uVar24;
        auVar6[0xc] = SUB41(fVar9,0);
        auVar6[0xd] = uVar25;
        auVar6[0xe] = uVar26;
        auVar6[0xf] = uVar27;
        auVar7[4] = SUB41(fVar29,0);
        auVar7._0_4_ = fVar18;
        auVar7[5] = uVar19;
        auVar7[6] = uVar20;
        auVar7[7] = uVar21;
        auVar7[8] = SUB41(fVar34,0);
        auVar7[9] = uVar22;
        auVar7[10] = uVar23;
        auVar7[0xb] = uVar24;
        auVar7[0xc] = SUB41(fVar9,0);
        auVar7[0xd] = uVar25;
        auVar7[0xe] = uVar26;
        auVar7[0xf] = uVar27;
        auVar41 = NEON_ext(auVar6,auVar7,8,1);
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_04379660), iVar35 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar13 = *(long *)PTR_DAT_04379668;
        fVar34 = 0.0;
        *(long *)PTR_DAT_04379670 = lVar13;
        uVar10 = *(ulong *)(lVar13 + 0x60);
        if (uVar10 != 0) {
          uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar12 < 2) {
            uVar15 = uVar10 - 1 & 0x6c43119d71eecde9;
          }
          else {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = 0x6c43119d71eecde9 / uVar10;
            }
            uVar15 = 0x6c43119d71eecde9;
            if (uVar10 < 0x6c43119d71eecdea) {
              uVar15 = 0x6c43119d71eecde9 - uVar5 * uVar10;
            }
          }
          plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar15 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if (uVar12 < 2) {
              do {
                if (plVar14[1] == 0x6c43119d71eecde9) {
                  if (plVar14[2] == 0x6c43119d71eecde9) goto LAB_01a97668;
                }
                else if ((plVar14[1] & uVar10 - 1) != uVar15) break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                uVar12 = plVar14[1];
                if (uVar12 == 0x6c43119d71eecde9) {
                  if (plVar14[2] == 0x6c43119d71eecde9) goto LAB_01a97668;
                }
                else {
                  if (uVar10 <= uVar12) {
                    uVar5 = 0;
                    if (uVar10 != 0) {
                      uVar5 = uVar12 / uVar10;
                    }
                    uVar12 = uVar12 - uVar5 * uVar10;
                  }
                  if (uVar12 != uVar15) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
        goto LAB_01a977a0;
      }
    }
  }
  return false;
LAB_01a97668:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) goto LAB_01a977a0;
  plVar1 = plVar14 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar10 = plVar14[0x21];
  fVar34 = 0.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar15 = uVar10 - 1 & 0x91b61b34faff6aea;
    }
    else if (uVar10 < 0x91b61b34faff6aeb) {
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = 0x91b61b34faff6aea / uVar10;
      }
      uVar15 = 0x91b61b34faff6aea - uVar15 * uVar10;
    }
    else {
      uVar15 = 0x91b61b34faff6aea;
    }
    plVar16 = *(long **)(plVar14[0x20] + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x91b61b34faff6aea) {
            if (plVar16[2] == -0x6e49e4cb05009516) goto LAB_01a97788;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x91b61b34faff6aea) {
            if (plVar16[2] == -0x6e49e4cb05009516) goto LAB_01a97788;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01a9778c;
LAB_01a97788:
  fVar34 = *(float *)(plVar16 + 6);
LAB_01a9778c:
  do {
    iVar35 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar35;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar35 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01a977a0:
  return fVar34 < auVar41._0_4_ + fVar18 + auVar41._4_4_ + fVar29;
}


