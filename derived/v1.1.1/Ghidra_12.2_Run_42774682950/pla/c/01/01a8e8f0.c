/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8e8f0; name: FUN_01a8e8f0
 */


ulong FUN_01a8e8f0(undefined1 param_1 [16],long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  float fVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 extraout_b0;
  undefined1 uVar23;
  undefined1 extraout_var;
  undefined1 uVar24;
  undefined1 extraout_var_00;
  undefined1 uVar25;
  undefined1 extraout_var_01;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  float fVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar36;
  int iVar38;
  int iVar39;
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  long *local_70 [8];
  
  fVar7 = param_1._8_4_;
  fVar6 = param_1._0_4_;
  FUN_01839c8c(local_70,param_2 + 0x15a);
  uVar14 = (**(code **)(*param_2 + 0x1a0))(param_2);
  fVar32 = 0.0;
  uVar23 = 0;
  if ((uVar14 & 1) == 0) {
    if (local_70[0] != (long *)0x0) goto LAB_01a8e970;
  }
  else if (local_70[0] != (long *)0x0) {
    fVar32 = (float)local_70[0][0x2a] * (float)DAT_0388a140;
    fVar18 = (float)((ulong)local_70[0][0x2a] >> 0x20) * (float)((ulong)DAT_0388a140 >> 0x20);
    uVar23 = (undefined1)((uint)fVar18 >> 8);
    uVar24 = (undefined1)((uint)fVar18 >> 0x10);
    uVar25 = (undefined1)((uint)fVar18 >> 0x18);
    fVar21 = (float)local_70[0][0x2b] * (float)DAT_0388a148;
    uVar26 = (undefined1)((uint)fVar21 >> 8);
    uVar27 = (undefined1)((uint)fVar21 >> 0x10);
    uVar29 = (undefined1)((uint)fVar21 >> 0x18);
    fVar19 = (float)((ulong)local_70[0][0x2b] >> 0x20) * (float)((ulong)DAT_0388a148 >> 0x20);
    uVar28 = (undefined1)((uint)fVar19 >> 8);
    uVar30 = (undefined1)((uint)fVar19 >> 0x10);
    uVar31 = (undefined1)((uint)fVar19 >> 0x18);
    auVar34[4] = SUB41(fVar18,0);
    auVar34._0_4_ = fVar32;
    auVar34[5] = uVar23;
    auVar34[6] = uVar24;
    auVar34[7] = uVar25;
    auVar34[8] = SUB41(fVar21,0);
    auVar34[9] = uVar26;
    auVar34[10] = uVar27;
    auVar34[0xb] = uVar29;
    auVar34[0xc] = SUB41(fVar19,0);
    auVar34[0xd] = uVar28;
    auVar34[0xe] = uVar30;
    auVar34[0xf] = uVar31;
    auVar44[4] = SUB41(fVar18,0);
    auVar44._0_4_ = fVar32;
    auVar44[5] = uVar23;
    auVar44[6] = uVar24;
    auVar44[7] = uVar25;
    auVar44[8] = SUB41(fVar21,0);
    auVar44[9] = uVar26;
    auVar44[10] = uVar27;
    auVar44[0xb] = uVar29;
    auVar44[0xc] = SUB41(fVar19,0);
    auVar44[0xd] = uVar28;
    auVar44[0xe] = uVar30;
    auVar44[0xf] = uVar31;
    auVar34 = NEON_ext(auVar34,auVar44,8,1);
    fVar18 = auVar34._0_4_ + fVar32 + auVar34._4_4_ + fVar18;
    fVar32 = 0.0;
    if ((-1.0 <= fVar18) && (fVar32 = fVar18, 1.0 < fVar18)) {
      fVar32 = 0.0;
    }
LAB_01a8e970:
    uVar23 = SUB41(fVar32,0);
    lVar15 = local_70[0][0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar36 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar36 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar36 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  FUN_0095d8f0(uVar23);
  uVar14 = (**(code **)(*param_2 + 0x1a0))(param_2);
  uVar16 = 0;
  uVar17 = 0;
  if ((1.0 <= (float)CONCAT13(extraout_var_01,
                              CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)))) &&
     ((uVar14 & 1) != 0)) {
    uVar14 = (**(code **)(*param_2 + 0x1a0))(param_2);
    if ((uVar14 & 1) == 0) {
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar29 = 0;
      uVar28 = 0;
      uVar30 = 0;
    }
    else {
      FUN_01a88b48(local_70,param_2);
      uVar27 = (undefined1)local_70[3]._0_4_;
      uVar29 = (undefined1)((uint)local_70[3]._0_4_ >> 8);
      uVar28 = (undefined1)((uint)local_70[3]._0_4_ >> 0x10);
      uVar30 = (undefined1)((uint)local_70[3]._0_4_ >> 0x18);
      uVar23 = (undefined1)local_70[2]._0_4_;
      uVar24 = (undefined1)((uint)local_70[2]._0_4_ >> 8);
      uVar25 = (undefined1)((uint)local_70[2]._0_4_ >> 0x10);
      uVar26 = (undefined1)((uint)local_70[2]._0_4_ >> 0x18);
    }
    fVar32 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)));
    fVar18 = (float)CONCAT13(uVar30,CONCAT12(uVar28,CONCAT11(uVar29,uVar27)));
    fVar21 = fVar18 * fVar18 + fVar32 * fVar32;
    fVar19 = fVar21 + 0.0;
    fVar21 = fVar21 + 0.0;
    if (fVar19 != 0.0) {
      fVar22 = fVar6 * fVar6;
      fVar13 = fVar7 * fVar7;
      uVar23 = (undefined1)((uint)fVar13 >> 8);
      uVar24 = (undefined1)((uint)fVar13 >> 0x10);
      uVar25 = (undefined1)((uint)fVar13 >> 0x18);
      auVar8._4_4_ = 0;
      auVar8._0_4_ = fVar22;
      auVar8[8] = SUB41(fVar13,0);
      auVar8[9] = uVar23;
      auVar8[10] = uVar24;
      auVar8[0xb] = uVar25;
      auVar8._12_4_ = 0;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = fVar22;
      auVar9[8] = SUB41(fVar13,0);
      auVar9[9] = uVar23;
      auVar9[10] = uVar24;
      auVar9[0xb] = uVar25;
      auVar9._12_4_ = 0;
      auVar34 = NEON_ext(auVar8,auVar9,8,1);
      fVar22 = auVar34._0_4_ + fVar22;
      fVar13 = auVar34._4_4_ + 0.0;
      fVar20 = fVar22 + fVar13;
      fVar22 = fVar22 + fVar13;
      uVar23 = SUB41(fVar22,0);
      uVar24 = (undefined1)((uint)fVar22 >> 8);
      uVar25 = (undefined1)((uint)fVar22 >> 0x10);
      uVar26 = (undefined1)((uint)fVar22 >> 0x18);
      if (fVar20 != 0.0) {
        auVar37._8_8_ = CONCAT44(fVar21,fVar19);
        auVar37._0_8_ = CONCAT44(fVar21,fVar19);
        auVar34 = NEON_frsqrte(auVar37,4);
        auVar43._0_4_ = auVar34._0_4_ * fVar19;
        auVar43._4_4_ = auVar34._4_4_ * fVar21;
        auVar43._8_4_ = auVar34._8_4_ * fVar19;
        auVar43._12_4_ = auVar34._12_4_ * fVar21;
        auVar44 = NEON_frsqrts(auVar34,auVar43,4);
        auVar41._0_4_ = auVar34._0_4_ * auVar44._0_4_;
        auVar41._4_4_ = auVar34._4_4_ * auVar44._4_4_;
        auVar41._8_4_ = auVar34._8_4_ * auVar44._8_4_;
        auVar41._12_4_ = auVar34._12_4_ * auVar44._12_4_;
        auVar45._0_4_ = fVar19 * auVar41._0_4_;
        auVar45._4_4_ = fVar21 * auVar41._4_4_;
        auVar45._8_4_ = fVar19 * auVar41._8_4_;
        auVar45._12_4_ = fVar21 * auVar41._12_4_;
        iVar36 = -(uint)(fVar19 == 0.0);
        iVar38 = -(uint)(fVar21 == 0.0);
        iVar39 = -(uint)(fVar19 == 0.0);
        iVar40 = -(uint)(fVar21 == 0.0);
        auVar34 = NEON_frsqrts(auVar41,auVar45,4);
        fVar32 = fVar32 * auVar41._0_4_ * auVar34._0_4_;
        fVar21 = auVar41._4_4_ * auVar34._4_4_ * 0.0;
        fVar18 = fVar18 * auVar41._8_4_ * auVar34._8_4_;
        fVar19 = auVar41._12_4_ * auVar34._12_4_ * 0.0;
        fVar32 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                                 CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                          ~(byte)((uint)iVar36 >> 0x10),
                                          CONCAT11((byte)((uint)fVar32 >> 8) &
                                                   ~(byte)((uint)iVar36 >> 8),
                                                   SUB41(fVar32,0) & ~(byte)iVar36)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                      CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                               CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                        CONCAT14(SUB41(fVar21,0) & ~(byte)iVar38,fVar32))));
        auVar33[8] = SUB41(fVar18,0) & ~(byte)iVar39;
        auVar33[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar39 >> 8);
        auVar33[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
        auVar33[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
        auVar35[0xc] = SUB41(fVar19,0) & ~(byte)iVar40;
        auVar35._0_12_ = auVar33;
        auVar35[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar40 >> 8);
        auVar35[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
        auVar35[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
        auVar10[4] = uVar23;
        auVar10._0_4_ = fVar20;
        auVar10[5] = uVar24;
        auVar10[6] = uVar25;
        auVar10[7] = uVar26;
        auVar10[8] = SUB41(fVar20,0);
        auVar10[9] = (char)((uint)fVar20 >> 8);
        auVar10[10] = (char)((uint)fVar20 >> 0x10);
        auVar10[0xb] = (char)((uint)fVar20 >> 0x18);
        auVar10[0xc] = uVar23;
        auVar10[0xd] = uVar24;
        auVar10[0xe] = uVar25;
        auVar10[0xf] = uVar26;
        auVar34 = NEON_frsqrte(auVar10,4);
        auVar46._0_4_ = auVar34._0_4_ * fVar20;
        auVar46._4_4_ = auVar34._4_4_ * fVar22;
        auVar46._8_4_ = auVar34._8_4_ * fVar20;
        uVar12 = (undefined2)(CONCAT15(uVar24,CONCAT14(uVar23,fVar20)) >> 0x20);
        auVar46._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar12));
        auVar44 = NEON_frsqrts(auVar34,auVar46,4);
        auVar42._0_4_ = auVar34._0_4_ * auVar44._0_4_;
        auVar42._4_4_ = auVar34._4_4_ * auVar44._4_4_;
        auVar42._8_4_ = auVar34._8_4_ * auVar44._8_4_;
        auVar42._12_4_ = auVar34._12_4_ * auVar44._12_4_;
        iVar36 = -(uint)(fVar20 == 0.0);
        iVar38 = -(uint)(fVar22 == 0.0);
        iVar39 = -(uint)(fVar20 == 0.0);
        iVar40 = -(uint)((float)CONCAT13(uVar26,CONCAT12(uVar25,uVar12)) == 0.0);
        fVar22 = fVar22 * auVar42._4_4_;
        fVar18 = fVar20 * auVar42._8_4_;
        fVar21 = (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar12)) * auVar42._12_4_;
        auVar11[4] = SUB41(fVar22,0);
        auVar11._0_4_ = fVar20 * auVar42._0_4_;
        auVar11[5] = (char)((uint)fVar22 >> 8);
        auVar11[6] = (char)((uint)fVar22 >> 0x10);
        auVar11[7] = (char)((uint)fVar22 >> 0x18);
        auVar11[8] = SUB41(fVar18,0);
        auVar11[9] = (char)((uint)fVar18 >> 8);
        auVar11[10] = (char)((uint)fVar18 >> 0x10);
        auVar11[0xb] = (char)((uint)fVar18 >> 0x18);
        auVar11[0xc] = SUB41(fVar21,0);
        auVar11[0xd] = (char)((uint)fVar21 >> 8);
        auVar11[0xe] = (char)((uint)fVar21 >> 0x10);
        auVar11[0xf] = (char)((uint)fVar21 >> 0x18);
        auVar34 = NEON_frsqrts(auVar42,auVar11,4);
        fVar6 = fVar6 * auVar42._0_4_ * auVar34._0_4_;
        fVar18 = auVar42._4_4_ * auVar34._4_4_ * 0.0;
        fVar7 = fVar7 * auVar42._8_4_ * auVar34._8_4_;
        fVar21 = auVar42._12_4_ * auVar34._12_4_ * 0.0;
        fVar32 = fVar32 * (float)CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                          ~(byte)((uint)iVar36 >> 0x18),
                                          CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                   ~(byte)((uint)iVar36 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar6 >> 8) &
                                                            ~(byte)((uint)iVar36 >> 8),
                                                            SUB41(fVar6,0) & ~(byte)iVar36)));
        fVar6 = (float)((ulong)auVar33._0_8_ >> 0x20) *
                (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                                CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                         ~(byte)((uint)iVar38 >> 0x10),
                                         CONCAT11((byte)((uint)fVar18 >> 8) &
                                                  ~(byte)((uint)iVar38 >> 8),
                                                  SUB41(fVar18,0) & ~(byte)iVar38)));
        uVar23 = (undefined1)((uint)fVar6 >> 8);
        uVar24 = (undefined1)((uint)fVar6 >> 0x10);
        uVar25 = (undefined1)((uint)fVar6 >> 0x18);
        fVar7 = auVar33._8_4_ *
                (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10)
                                         ,CONCAT11((byte)((uint)fVar7 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar7,0) & ~(byte)iVar39)));
        uVar26 = (undefined1)((uint)fVar7 >> 8);
        uVar27 = (undefined1)((uint)fVar7 >> 0x10);
        uVar29 = (undefined1)((uint)fVar7 >> 0x18);
        fVar18 = auVar35._12_4_ *
                 (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                 CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                          ~(byte)((uint)iVar40 >> 0x10),
                                          CONCAT11((byte)((uint)fVar21 >> 8) &
                                                   ~(byte)((uint)iVar40 >> 8),
                                                   SUB41(fVar21,0) & ~(byte)iVar40)));
        uVar28 = (undefined1)((uint)fVar18 >> 8);
        uVar30 = (undefined1)((uint)fVar18 >> 0x10);
        uVar31 = (undefined1)((uint)fVar18 >> 0x18);
        auVar4[4] = SUB41(fVar6,0);
        auVar4._0_4_ = fVar32;
        auVar4[5] = uVar23;
        auVar4[6] = uVar24;
        auVar4[7] = uVar25;
        auVar4[8] = SUB41(fVar7,0);
        auVar4[9] = uVar26;
        auVar4[10] = uVar27;
        auVar4[0xb] = uVar29;
        auVar4[0xc] = SUB41(fVar18,0);
        auVar4[0xd] = uVar28;
        auVar4[0xe] = uVar30;
        auVar4[0xf] = uVar31;
        auVar5[4] = SUB41(fVar6,0);
        auVar5._0_4_ = fVar32;
        auVar5[5] = uVar23;
        auVar5[6] = uVar24;
        auVar5[7] = uVar25;
        auVar5[8] = SUB41(fVar7,0);
        auVar5[9] = uVar26;
        auVar5[10] = uVar27;
        auVar5[0xb] = uVar29;
        auVar5[0xc] = SUB41(fVar18,0);
        auVar5[0xd] = uVar28;
        auVar5[0xe] = uVar30;
        auVar5[0xf] = uVar31;
        auVar34 = NEON_ext(auVar4,auVar5,8,1);
        uVar17 = (ulong)(auVar34._0_4_ + fVar32 + auVar34._4_4_ + fVar6 <= 0.0) << 8;
        uVar16 = 1;
        goto LAB_01a8eab0;
      }
    }
    uVar16 = 0;
    uVar17 = 0;
  }
LAB_01a8eab0:
  return uVar17 | uVar16;
}


