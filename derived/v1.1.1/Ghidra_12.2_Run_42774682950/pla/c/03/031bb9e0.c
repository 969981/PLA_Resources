/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb9e0; name: FUN_031bb9e0
 */


void FUN_031bb9e0(long param_1,int *param_2,int *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined8 uVar30;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar33;
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  int iVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  int local_c0;
  undefined1 local_bc;
  undefined4 local_bb;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_8b;
  
  uVar10 = 4;
  if (*(char *)((long)param_2 + 7) != '\0') {
    uVar10 = 6;
  }
  uVar11 = 8;
  if (*(char *)((long)param_3 + 7) != '\0') {
    uVar11 = 9;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_031bc44c(param_1,param_2,uVar10);
    FUN_031bc44c(param_1,param_3,uVar11);
    return;
  }
  local_8c = 0xff;
  local_90 = 0xfffffffe;
  local_8b = 0;
  FUN_031bc554(param_1,param_2,&local_90);
  FUN_031bc44c(param_1,&local_90,uVar10);
  iVar15 = *param_2;
  lVar13 = (long)iVar15;
  iVar12 = *param_3;
  if (iVar15 < iVar12) {
    lVar14 = lVar13 << 7;
    do {
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + 1;
      if (*(int *)(param_1 + 0x24) <= lVar13) break;
      lVar1 = *(long *)(param_1 + 0x40) + lVar14;
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x90);
      fVar24 = (float)*(undefined8 *)(lVar1 + 0xb8);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb8) >> 0x20);
      fVar22 = (float)*(undefined8 *)(lVar1 + 0xb0);
      fVar23 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb0) >> 0x20);
      fVar18 = (float)*(undefined8 *)(lVar1 + 0xc0) - fVar22;
      fVar19 = (float)((ulong)*(undefined8 *)(lVar1 + 0xc0) >> 0x20) - fVar23;
      fVar20 = (float)*(undefined8 *)(lVar1 + 200) - fVar24;
      fVar21 = (float)((ulong)*(undefined8 *)(lVar1 + 200) >> 0x20) - fVar25;
      auVar27 = NEON_ext(auVar2,auVar2,8,1);
      uVar30 = NEON_ext(auVar2._0_8_,auVar27._0_8_,4,1);
      auVar27._4_4_ = fVar19;
      auVar27._0_4_ = fVar18;
      auVar27._8_4_ = fVar20;
      auVar27._12_4_ = fVar21;
      auVar36._4_4_ = fVar19;
      auVar36._0_4_ = fVar18;
      auVar36._8_4_ = fVar20;
      auVar36._12_4_ = fVar21;
      auVar27 = NEON_ext(auVar27,auVar36,4,1);
      fVar34 = auVar2._0_4_;
      fVar35 = auVar2._4_4_;
      fVar26 = auVar2._8_4_;
      auVar31._0_4_ = fVar34 * auVar27._0_4_ - fVar18 * (float)uVar30;
      auVar31._4_4_ = fVar35 * auVar27._4_4_ - fVar19 * (float)((ulong)uVar30 >> 0x20);
      auVar31._8_4_ = fVar26 * fVar18 - fVar20 * fVar34;
      auVar31._12_4_ = auVar2._12_4_ * fVar19 - fVar21 * fVar35;
      auVar36 = NEON_ext(auVar31,auVar31,4,1);
      fVar49 = auVar36._0_4_;
      fVar50 = auVar36._4_4_;
      fVar29 = fVar49 * fVar49 + fVar50 * fVar50 + auVar31._0_4_ * auVar31._0_4_;
      fVar33 = fVar49 * fVar49 + fVar50 * fVar50 + auVar31._0_4_ * auVar31._0_4_;
      uVar30 = CONCAT44(fVar33,fVar29);
      uVar41 = NEON_frsqrte(uVar30,4);
      fVar40 = (float)uVar41;
      fVar43 = (float)((ulong)uVar41 >> 0x20);
      uVar41 = NEON_frsqrts(uVar30,CONCAT44(fVar43 * fVar43,fVar40 * fVar40),4);
      fVar40 = fVar40 * (float)uVar41;
      fVar43 = fVar43 * (float)((ulong)uVar41 >> 0x20);
      iVar38 = -(uint)(fVar29 <= 0.0);
      iVar39 = -(uint)(fVar33 <= 0.0);
      uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar43 * fVar43,fVar40 * fVar40),4);
      fVar40 = (float)uVar30 * fVar40;
      fVar43 = (float)((ulong)uVar30 >> 0x20) * fVar43;
      fVar29 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                               CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar40 >> 8) &
                                                  ~(byte)((uint)iVar38 >> 8),
                                                  SUB41(fVar40,0) & ~(byte)iVar38)));
      auVar32._0_4_ = fVar49 * fVar29;
      fVar40 = (float)(CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                CONCAT16((byte)((uint)fVar43 >> 0x10) &
                                         ~(byte)((uint)iVar39 >> 0x10),
                                         CONCAT15((byte)((uint)fVar43 >> 8) &
                                                  ~(byte)((uint)iVar39 >> 8),
                                                  CONCAT14(SUB41(fVar43,0) & ~(byte)iVar39,fVar29)))
                               ) >> 0x20);
      auVar32._4_4_ = fVar50 * fVar40;
      auVar32._8_4_ = auVar31._0_4_ * fVar29;
      auVar32._12_4_ = auVar31._4_4_ * fVar40;
      auVar37._0_4_ = fVar22 * auVar32._0_4_;
      auVar37._4_4_ = fVar23 * auVar32._4_4_;
      auVar37._8_4_ = fVar24 * auVar32._8_4_;
      auVar37._12_4_ = fVar25 * auVar32._12_4_;
      auVar36 = NEON_ext(auVar37,auVar37,8,1);
      fVar29 = (float)param_2[4];
      fVar40 = (float)param_2[5];
      fVar33 = (float)param_2[6];
      fVar43 = (float)param_2[7];
      fVar46 = -(auVar37._0_4_ + auVar37._4_4_ + auVar36._0_4_);
      auVar42._0_4_ = fVar29 * auVar32._0_4_;
      auVar42._4_4_ = fVar40 * auVar32._4_4_;
      auVar42._8_4_ = fVar33 * auVar32._8_4_;
      auVar42._12_4_ = fVar43 * fVar46;
      auVar36 = NEON_ext(auVar42,auVar42,8,1);
      fVar16 = auVar36._0_4_ + fVar46;
      fVar47 = (float)param_3[4] * auVar32._0_4_;
      fVar48 = (float)param_3[5] * auVar32._4_4_;
      fVar49 = (float)param_3[6] * auVar32._8_4_;
      fVar50 = (float)param_3[7] * fVar46;
      auVar6._4_4_ = fVar48;
      auVar6._0_4_ = fVar47;
      auVar6._8_4_ = fVar49;
      auVar6._12_4_ = fVar50;
      auVar7._4_4_ = fVar48;
      auVar7._0_4_ = fVar47;
      auVar7._8_4_ = fVar49;
      auVar7._12_4_ = fVar50;
      auVar36 = NEON_ext(auVar6,auVar7,8,1);
      fVar17 = auVar36._0_4_ + fVar46;
      fVar49 = auVar42._0_4_ + auVar42._4_4_ + fVar16;
      fVar16 = auVar42._0_4_ + auVar42._4_4_ + fVar16;
      fVar50 = fVar47 + fVar48 + fVar17;
      if (((0.0 < fVar49) && (fVar50 < 0.0)) || ((fVar49 < 0.0 && (0.0 < fVar50)))) {
        uVar41 = CONCAT44(fVar16 - (fVar47 + fVar48 + fVar17),fVar49 - fVar50);
        uVar30 = NEON_frecpe(uVar41,4);
        local_bb = 0;
        uVar51 = NEON_frecps(uVar41,uVar30,4);
        fVar50 = (float)uVar30 * (float)uVar51;
        fVar17 = (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar51 >> 0x20);
        uVar30 = NEON_frecps(uVar41,CONCAT44(fVar17,fVar50),4);
        fVar49 = fVar49 * fVar50 * (float)uVar30;
        fVar16 = fVar16 * fVar17 * (float)((ulong)uVar30 >> 0x20);
        local_bc = 0xff;
        fVar29 = fVar29 + ((float)param_3[4] - fVar29) * fVar49;
        fVar40 = fVar40 + ((float)param_3[5] - fVar40) * fVar16;
        fVar33 = fVar33 + ((float)param_3[6] - fVar33) * fVar49;
        auVar36 = NEON_ext(auVar32,auVar32,4,1);
        auVar28._0_4_ = fVar18 * auVar36._0_4_ - auVar27._0_4_ * auVar32._0_4_;
        auVar28._4_4_ = fVar19 * auVar36._4_4_ - auVar27._4_4_ * auVar32._4_4_;
        auVar28._8_4_ = fVar20 * auVar32._0_4_ - fVar18 * auVar32._8_4_;
        auVar28._12_4_ = fVar21 * auVar32._4_4_ - fVar19 * fVar46;
        auVar27 = NEON_ext(auVar28,auVar28,4,1);
        fVar17 = auVar27._0_4_;
        fVar48 = auVar27._4_4_;
        fVar49 = auVar28._0_4_ * auVar28._0_4_ + fVar17 * fVar17 + fVar48 * fVar48;
        fVar46 = auVar28._0_4_ * auVar28._0_4_ + fVar17 * fVar17 + fVar48 * fVar48;
        uVar30 = CONCAT44(fVar46,fVar49);
        uVar41 = NEON_frsqrte(uVar30,4);
        fVar50 = (float)uVar41;
        fVar47 = (float)((ulong)uVar41 >> 0x20);
        uVar41 = NEON_frsqrts(uVar30,CONCAT44(fVar47 * fVar47,fVar50 * fVar50),4);
        fVar50 = fVar50 * (float)uVar41;
        fVar47 = fVar47 * (float)((ulong)uVar41 >> 0x20);
        iVar38 = -(uint)(fVar49 <= 0.0);
        iVar39 = -(uint)(fVar46 <= 0.0);
        uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar47 * fVar47,fVar50 * fVar50),4);
        fVar50 = (float)uVar30 * fVar50;
        fVar47 = (float)((ulong)uVar30 >> 0x20) * fVar47;
        fVar49 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                                 CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                          ~(byte)((uint)iVar38 >> 0x10),
                                          CONCAT11((byte)((uint)fVar50 >> 8) &
                                                   ~(byte)((uint)iVar38 >> 8),
                                                   SUB41(fVar50,0) & ~(byte)iVar38)));
        fVar17 = fVar17 * fVar49;
        fVar48 = fVar48 * (float)(CONCAT17((byte)((uint)fVar47 >> 0x18) &
                                           ~(byte)((uint)iVar39 >> 0x18),
                                           CONCAT16((byte)((uint)fVar47 >> 0x10) &
                                                    ~(byte)((uint)iVar39 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar47 >> 8) &
                                                             ~(byte)((uint)iVar39 >> 8),
                                                             CONCAT14(SUB41(fVar47,0) &
                                                                      ~(byte)iVar39,fVar49)))) >>
                                 0x20);
        fVar49 = auVar28._0_4_ * fVar49;
        fVar47 = fVar29 * fVar17;
        fVar44 = fVar40 * fVar48;
        fVar45 = fVar33 * fVar49;
        uVar30 = CONCAT44(fVar34 * fVar17 + fVar35 * fVar48 + fVar26 * fVar49,
                          fVar34 * fVar17 + fVar35 * fVar48 + fVar26 * fVar49);
        uVar41 = NEON_frecpe(uVar30,4);
        uVar51 = NEON_frecps(uVar30,uVar41,4);
        fVar50 = (float)uVar41 * (float)uVar51;
        fVar46 = (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar51 >> 0x20);
        uVar30 = NEON_frecps(uVar30,CONCAT44(fVar46,fVar50),4);
        fVar50 = fVar50 * (float)uVar30 *
                 ((fVar22 * fVar17 + fVar23 * fVar48 + fVar24 * fVar49) - (fVar47 + fVar44 + fVar45)
                 );
        fVar49 = fVar46 * (float)((ulong)uVar30 >> 0x20) *
                 ((fVar22 * fVar17 + fVar23 * fVar48 + fVar24 * fVar49) - (fVar47 + fVar44 + fVar45)
                 );
        local_b0 = fVar29 + fVar34 * fVar50;
        fStack_ac = fVar40 + fVar35 * fVar49;
        fStack_a8 = fVar33 + fVar26 * fVar50;
        fStack_a4 = fVar43 + ((float)param_3[7] - fVar43) * fVar16 + auVar2._12_4_ * fVar49;
        fVar29 = fVar18 * (local_b0 - fVar22);
        fVar40 = fVar19 * (fStack_ac - fVar23);
        fVar33 = fVar20 * (fStack_a8 - fVar24);
        fVar43 = fVar21 * (fStack_a4 - fVar25);
        auVar4._4_4_ = fVar40;
        auVar4._0_4_ = fVar29;
        auVar4._8_4_ = fVar33;
        auVar4._12_4_ = fVar43;
        auVar5._4_4_ = fVar40;
        auVar5._0_4_ = fVar29;
        auVar5._8_4_ = fVar33;
        auVar5._12_4_ = fVar43;
        auVar27 = NEON_ext(auVar4,auVar5,8,1);
        fVar40 = fVar29 + fVar40 + auVar27._0_4_;
        fVar18 = fVar18 * fVar18;
        fVar19 = fVar19 * fVar19;
        auVar2._4_4_ = fVar19;
        auVar2._0_4_ = fVar18;
        auVar2._8_4_ = fVar20 * fVar20;
        auVar2._12_4_ = fVar21 * fVar21;
        auVar3._4_4_ = fVar19;
        auVar3._0_4_ = fVar18;
        auVar3._8_4_ = fVar20 * fVar20;
        auVar3._12_4_ = fVar21 * fVar21;
        auVar27 = NEON_ext(auVar2,auVar3,8,1);
        fVar29 = auVar27._0_4_ + fVar18 + fVar19;
        bVar8 = false;
        bVar9 = true;
        if (0.0 <= fVar40) {
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar40) && !NAN(fVar29)) {
            bVar8 = fVar40 == fVar29;
            bVar9 = fVar29 <= fVar40;
          }
        }
        local_a0 = local_b0;
        fStack_9c = fStack_ac;
        fStack_98 = fStack_a8;
        if (!bVar9 || bVar8) {
          local_c0 = iVar15;
          FUN_031bc44c(param_1,&local_c0,0);
          iVar12 = *param_3;
        }
      }
      lVar14 = lVar14 + 0x80;
    } while (lVar13 < iVar12);
  }
  local_c0 = -2;
  local_bc = 0xff;
  local_bb = 0;
  FUN_031bc554(param_1,param_3,&local_c0);
  FUN_031bc44c(param_1,&local_c0,uVar11);
  return;
}


