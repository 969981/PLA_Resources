/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03198f50; name: FUN_03198f50
 */


void FUN_03198f50(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined8 uVar37;
  float fVar39;
  float fVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar54 [16];
  undefined8 uVar53;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar20 = *(long *)(param_1 + 0x18);
    iVar16 = param_2;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar16 = *(int *)(*(long *)(param_1 + 0x90) + (long)param_2 * 4);
    }
    if (iVar16 != -1) {
      lVar20 = *(long *)(param_1 + 0xb0);
      param_2 = iVar16;
    }
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x20);
    lVar20 = *(long *)(param_1 + 0xd0);
  }
  piVar17 = (int *)(lVar20 + (long)param_2 * 0x10);
  iVar16 = *piVar17;
  iVar24 = *(int *)(param_1 + 0x30);
  lVar23 = (long)iVar24;
  sVar4 = (short)piVar17[2];
  lVar20 = (long)sVar4;
  lVar21 = (long)iVar16;
  lVar22 = *(long *)(param_1 + 0x28);
  if (iVar16 < iVar24) {
    iVar25 = iVar16;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar25 = *(int *)(*(long *)(param_1 + 0x70) + lVar21 * 4);
    }
    lVar27 = lVar22;
    iVar24 = iVar16;
    if (iVar25 != -1) {
      lVar27 = *(long *)(param_1 + 0xc0);
      iVar24 = iVar25;
    }
  }
  else {
    lVar27 = *(long *)(param_1 + 0xe0);
    iVar24 = iVar16 - iVar24;
  }
  lVar26 = *(long *)(param_1 + 0x38);
  iVar25 = *(int *)(lVar27 + (long)iVar24 * 0x14);
  iVar24 = *(int *)(param_1 + 0x40);
  lVar27 = *(long *)(param_1 + 0xf0);
  puVar1 = (undefined8 *)(lVar26 + (long)iVar25 * 0x10);
  if (iVar24 <= iVar25) {
    puVar1 = (undefined8 *)(lVar27 + (long)(iVar25 - iVar24) * 0x10);
  }
  if (sVar4 < 1) {
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    fVar38 = 0.0;
    fVar39 = 0.0;
    fVar40 = 0.0;
  }
  else {
    fVar36 = (float)puVar1[1];
    fVar51 = (float)((ulong)puVar1[1] >> 0x20);
    fVar29 = (float)*puVar1;
    fVar30 = (float)((ulong)*puVar1 >> 0x20);
    if (*(int *)(param_1 + 0x78) == 0) {
      fVar31 = 0.0;
      fVar32 = 0.0;
      fVar35 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      piVar17 = (int *)(*(long *)(param_1 + 0xe0) + (lVar21 - lVar23) * 0x14);
      fVar33 = 0.0;
      fVar34 = 0.0;
      lVar28 = 0;
      lVar18 = lVar21;
      do {
        iVar16 = iVar16 + 1;
        piVar19 = piVar17;
        if (lVar18 < lVar23) {
          piVar19 = (int *)(lVar22 + (lVar28 + lVar21) * 0x14);
          if (iVar16 != 0) {
            piVar19 = (int *)(*(long *)(param_1 + 0xc0) + (lVar28 + lVar21) * 0x14);
          }
        }
        iVar25 = *piVar19;
        iVar3 = piVar19[1];
        puVar1 = (undefined8 *)(lVar26 + (long)iVar25 * 0x10);
        if (iVar24 <= iVar25) {
          puVar1 = (undefined8 *)(lVar27 + (long)(iVar25 - iVar24) * 0x10);
        }
        fVar49 = (float)puVar1[1];
        fVar50 = (float)((ulong)puVar1[1] >> 0x20);
        pfVar2 = (float *)(lVar26 + (long)iVar3 * 0x10);
        if (iVar24 <= iVar3) {
          pfVar2 = (float *)(lVar27 + (long)(iVar3 - iVar24) * 0x10);
        }
        lVar20 = lVar20 + -1;
        fVar13 = (float)*puVar1;
        fVar35 = fVar35 + fVar13;
        fVar15 = (float)((ulong)*puVar1 >> 0x20);
        fVar38 = fVar38 + fVar15;
        fVar39 = fVar39 + fVar49;
        fVar40 = fVar40 + fVar50;
        lVar28 = lVar28 + 1;
        fVar13 = fVar13 - fVar29;
        fVar15 = fVar15 - fVar30;
        uVar41 = SUB41(fVar15,0);
        uVar43 = (undefined1)((uint)fVar15 >> 8);
        uVar45 = (undefined1)((uint)fVar15 >> 0x10);
        uVar47 = (undefined1)((uint)fVar15 >> 0x18);
        fVar49 = fVar49 - fVar36;
        fVar50 = fVar50 - fVar51;
        auVar56[4] = uVar41;
        auVar56._0_4_ = fVar13;
        auVar56[5] = uVar43;
        auVar56[6] = uVar45;
        auVar56[7] = uVar47;
        auVar56._8_4_ = fVar49;
        auVar56._12_4_ = fVar50;
        auVar57[4] = uVar41;
        auVar57._0_4_ = fVar13;
        auVar57[5] = uVar43;
        auVar57[6] = uVar45;
        auVar57[7] = uVar47;
        auVar57._8_4_ = fVar49;
        auVar57._12_4_ = fVar50;
        auVar56 = NEON_ext(auVar56,auVar57,4,1);
        auVar55._0_4_ = *pfVar2 - fVar29;
        auVar55._4_4_ = pfVar2[1] - fVar30;
        auVar55._8_4_ = pfVar2[2] - fVar36;
        auVar55._12_4_ = pfVar2[3] - fVar51;
        auVar57 = NEON_ext(auVar55,auVar55,4,1);
        piVar17 = piVar17 + 5;
        lVar18 = lVar18 + 1;
        fVar14 = fVar13 * auVar57._0_4_ - auVar56._0_4_ * auVar55._0_4_;
        fVar15 = fVar15 * auVar57._4_4_ - auVar56._4_4_ * auVar55._4_4_;
        uVar42 = SUB41(fVar15,0);
        uVar44 = (undefined1)((uint)fVar15 >> 8);
        uVar46 = (undefined1)((uint)fVar15 >> 0x10);
        uVar48 = (undefined1)((uint)fVar15 >> 0x18);
        fVar49 = fVar49 * auVar55._0_4_ - fVar13 * auVar55._8_4_;
        fVar50 = fVar50 * auVar55._4_4_ -
                 (float)(CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar43,CONCAT14(uVar41,fVar13))))
                        >> 0x20) * auVar55._12_4_;
        auVar11[4] = uVar42;
        auVar11._0_4_ = fVar14;
        auVar11[5] = uVar44;
        auVar11[6] = uVar46;
        auVar11[7] = uVar48;
        auVar11._8_4_ = fVar49;
        auVar11._12_4_ = fVar50;
        auVar12[4] = uVar42;
        auVar12._0_4_ = fVar14;
        auVar12[5] = uVar44;
        auVar12[6] = uVar46;
        auVar12[7] = uVar48;
        auVar12._8_4_ = fVar49;
        auVar12._12_4_ = fVar50;
        auVar56 = NEON_ext(auVar11,auVar12,4,1);
        fVar31 = fVar31 + auVar56._0_4_;
        fVar32 = fVar32 + auVar56._4_4_;
        fVar33 = fVar33 + fVar14;
        fVar34 = fVar34 + (float)(CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(uVar42,
                                                  fVar14)))) >> 0x20);
      } while (lVar20 != 0);
    }
    else {
      fVar31 = 0.0;
      fVar32 = 0.0;
      fVar35 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      piVar17 = (int *)(*(long *)(param_1 + 0xe0) + (lVar21 - lVar23) * 0x14);
      fVar33 = 0.0;
      fVar34 = 0.0;
      lVar28 = 0;
      lVar18 = lVar21;
      do {
        piVar19 = piVar17;
        if (lVar18 < lVar23) {
          iVar16 = *(int *)(*(long *)(param_1 + 0x70) + lVar18 * 4);
          if (iVar16 == -1) {
            piVar19 = (int *)(lVar22 + (lVar28 + lVar21) * 0x14);
          }
          else {
            piVar19 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar16 * 0x14);
          }
        }
        iVar16 = *piVar19;
        iVar25 = piVar19[1];
        puVar1 = (undefined8 *)(lVar26 + (long)iVar16 * 0x10);
        if (iVar24 <= iVar16) {
          puVar1 = (undefined8 *)(lVar27 + (long)(iVar16 - iVar24) * 0x10);
        }
        fVar49 = (float)puVar1[1];
        fVar50 = (float)((ulong)puVar1[1] >> 0x20);
        pfVar2 = (float *)(lVar26 + (long)iVar25 * 0x10);
        if (iVar24 <= iVar25) {
          pfVar2 = (float *)(lVar27 + (long)(iVar25 - iVar24) * 0x10);
        }
        lVar20 = lVar20 + -1;
        fVar13 = (float)*puVar1;
        fVar35 = fVar35 + fVar13;
        fVar15 = (float)((ulong)*puVar1 >> 0x20);
        fVar38 = fVar38 + fVar15;
        fVar39 = fVar39 + fVar49;
        fVar40 = fVar40 + fVar50;
        lVar28 = lVar28 + 1;
        fVar13 = fVar13 - fVar29;
        fVar15 = fVar15 - fVar30;
        uVar41 = SUB41(fVar15,0);
        uVar43 = (undefined1)((uint)fVar15 >> 8);
        uVar45 = (undefined1)((uint)fVar15 >> 0x10);
        uVar47 = (undefined1)((uint)fVar15 >> 0x18);
        fVar49 = fVar49 - fVar36;
        fVar50 = fVar50 - fVar51;
        auVar7[4] = uVar41;
        auVar7._0_4_ = fVar13;
        auVar7[5] = uVar43;
        auVar7[6] = uVar45;
        auVar7[7] = uVar47;
        auVar7._8_4_ = fVar49;
        auVar7._12_4_ = fVar50;
        auVar8[4] = uVar41;
        auVar8._0_4_ = fVar13;
        auVar8[5] = uVar43;
        auVar8[6] = uVar45;
        auVar8[7] = uVar47;
        auVar8._8_4_ = fVar49;
        auVar8._12_4_ = fVar50;
        auVar56 = NEON_ext(auVar7,auVar8,4,1);
        auVar54._0_4_ = *pfVar2 - fVar29;
        auVar54._4_4_ = pfVar2[1] - fVar30;
        auVar54._8_4_ = pfVar2[2] - fVar36;
        auVar54._12_4_ = pfVar2[3] - fVar51;
        auVar57 = NEON_ext(auVar54,auVar54,4,1);
        piVar17 = piVar17 + 5;
        lVar18 = lVar18 + 1;
        fVar14 = fVar13 * auVar57._0_4_ - auVar56._0_4_ * auVar54._0_4_;
        fVar15 = fVar15 * auVar57._4_4_ - auVar56._4_4_ * auVar54._4_4_;
        uVar42 = SUB41(fVar15,0);
        uVar44 = (undefined1)((uint)fVar15 >> 8);
        uVar46 = (undefined1)((uint)fVar15 >> 0x10);
        uVar48 = (undefined1)((uint)fVar15 >> 0x18);
        fVar49 = fVar49 * auVar54._0_4_ - fVar13 * auVar54._8_4_;
        fVar50 = fVar50 * auVar54._4_4_ -
                 (float)(CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar43,CONCAT14(uVar41,fVar13))))
                        >> 0x20) * auVar54._12_4_;
        auVar9[4] = uVar42;
        auVar9._0_4_ = fVar14;
        auVar9[5] = uVar44;
        auVar9[6] = uVar46;
        auVar9[7] = uVar48;
        auVar9._8_4_ = fVar49;
        auVar9._12_4_ = fVar50;
        auVar10[4] = uVar42;
        auVar10._0_4_ = fVar14;
        auVar10[5] = uVar44;
        auVar10[6] = uVar46;
        auVar10[7] = uVar48;
        auVar10._8_4_ = fVar49;
        auVar10._12_4_ = fVar50;
        auVar56 = NEON_ext(auVar9,auVar10,4,1);
        fVar31 = fVar31 + auVar56._0_4_;
        fVar32 = fVar32 + auVar56._4_4_;
        fVar33 = fVar33 + fVar14;
        fVar34 = fVar34 + (float)(CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(uVar42,
                                                  fVar14)))) >> 0x20);
      } while (lVar20 != 0);
    }
  }
  uVar37 = NEON_scvtf(CONCAT44((int)sVar4,(int)sVar4),4);
  uVar53 = NEON_frecpe(uVar37,4);
  uVar52 = NEON_frecps(uVar37,uVar53,4);
  fVar29 = (float)uVar53 * (float)uVar52;
  fVar30 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar52 >> 0x20);
  uVar37 = NEON_frecps(uVar37,CONCAT17((char)((uint)fVar30 >> 0x18),
                                       CONCAT16((char)((uint)fVar30 >> 0x10),
                                                CONCAT15((char)((uint)fVar30 >> 8),
                                                         CONCAT14(SUB41(fVar30,0),fVar29)))),4);
  fVar29 = fVar29 * (float)uVar37;
  fVar30 = fVar30 * (float)((ulong)uVar37 >> 0x20);
  fVar36 = fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32;
  fVar49 = fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32;
  uVar37 = CONCAT44(fVar49,fVar36);
  uVar53 = NEON_frsqrte(uVar37,4);
  fVar51 = (float)uVar53;
  fVar50 = (float)((ulong)uVar53 >> 0x20);
  uVar53 = NEON_frsqrts(uVar37,CONCAT44(fVar50 * fVar50,fVar51 * fVar51),4);
  fVar51 = fVar51 * (float)uVar53;
  fVar50 = fVar50 * (float)((ulong)uVar53 >> 0x20);
  iVar16 = -(uint)(fVar36 <= 0.0);
  iVar24 = -(uint)(fVar49 <= 0.0);
  uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar50 * fVar50,fVar51 * fVar51),4);
  fVar51 = (float)uVar37 * fVar51;
  fVar50 = (float)((ulong)uVar37 >> 0x20) * fVar50;
  fVar36 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar51,0) & ~(byte)iVar16)));
  fVar51 = (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                            CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                     CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar24 >> 8)
                                              ,CONCAT14(SUB41(fVar50,0) & ~(byte)iVar24,fVar36))))
                  >> 0x20);
  fVar32 = fVar32 * fVar51;
  fVar35 = fVar35 * fVar29 * fVar31 * fVar36;
  fVar38 = fVar38 * fVar30 * fVar32;
  fVar39 = fVar39 * fVar29 * fVar33 * fVar36;
  fVar34 = fVar40 * fVar30 * fVar34 * fVar51;
  auVar5._4_4_ = fVar38;
  auVar5._0_4_ = fVar35;
  auVar5._8_4_ = fVar39;
  auVar5._12_4_ = fVar34;
  auVar6._4_4_ = fVar38;
  auVar6._0_4_ = fVar35;
  auVar6._8_4_ = fVar39;
  auVar6._12_4_ = fVar34;
  auVar56 = NEON_ext(auVar5,auVar6,8,1);
  param_3[1] = CONCAT44(-(fVar35 + fVar38 + auVar56._0_4_),fVar33 * fVar36);
  *param_3 = CONCAT44(fVar32,fVar31 * fVar36);
  return;
}


