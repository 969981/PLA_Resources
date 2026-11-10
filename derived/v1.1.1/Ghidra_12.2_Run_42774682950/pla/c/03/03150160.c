/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150160; name: FUN_03150160
 */


void FUN_03150160(float param_1,float param_2,float param_3,long param_4,int param_5,float *param_6)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar38;
  undefined8 uVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar45;
  undefined8 uVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  lVar13 = *(long *)(param_4 + 0x90);
  lVar12 = lVar13 + (long)param_5 * 0xd0;
  pauVar1 = (undefined1 (*) [12])(lVar12 + 0x10);
  fVar16 = (float)*(undefined8 *)(lVar12 + 0x18);
  fVar18 = (float)((ulong)*(undefined8 *)(lVar12 + 0x18) >> 0x20);
  uVar20 = *(undefined8 *)*pauVar1;
  fVar17 = (float)uVar20;
  fVar19 = (float)((ulong)uVar20 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(lVar12 + 0x90);
  fVar43 = (float)*(undefined8 *)(lVar12 + 0x98);
  fVar46 = (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20);
  uVar44 = *(undefined8 *)*pauVar2;
  lVar12 = (long)param_5;
  auVar21._12_4_ = fVar18;
  auVar21._0_12_ = *pauVar1;
  auVar34._12_4_ = fVar18;
  auVar34._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar21,auVar34,8,1);
  auVar5._12_4_ = fVar46;
  auVar5._0_12_ = *pauVar2;
  auVar6._12_4_ = fVar46;
  auVar6._0_12_ = *pauVar2;
  auVar34 = NEON_ext(auVar5,auVar6,8,1);
  uVar20 = NEON_ext(uVar20,auVar21._0_8_,4,1);
  uVar39 = NEON_ext(uVar44,auVar34._0_8_,4,1);
  fVar37 = (float)((ulong)uVar39 >> 0x20);
  fVar41 = (float)uVar44;
  fVar42 = (float)((ulong)uVar44 >> 0x20);
  fVar15 = (float)((ulong)uVar20 >> 0x20);
  fVar47 = fVar17 * (float)uVar39 - fVar41 * (float)uVar20;
  fVar48 = fVar19 * fVar37 - fVar42 * fVar15;
  fVar49 = fVar16 * fVar41 - fVar43 * fVar17;
  fVar50 = fVar18 * fVar42 - fVar46 * fVar19;
  auVar9._4_4_ = fVar48;
  auVar9._0_4_ = fVar47;
  auVar9._8_4_ = fVar49;
  auVar9._12_4_ = fVar50;
  auVar10._4_4_ = fVar48;
  auVar10._0_4_ = fVar47;
  auVar10._8_4_ = fVar49;
  auVar10._12_4_ = fVar50;
  auVar21 = NEON_ext(auVar9,auVar10,4,1);
  fVar50 = auVar21._0_4_ * auVar21._0_4_;
  fVar45 = auVar21._4_4_ * auVar21._4_4_;
  fVar49 = fVar50 + fVar45;
  fVar50 = fVar50 + fVar45;
  auVar35._0_8_ = auVar21._0_8_;
  if (fVar49 + fVar47 * fVar47 < 1.1920929e-07) {
    auVar21 = *(undefined1 (*) [16])(lVar13 + lVar12 * 0xd0 + 0x70);
    auVar34 = NEON_ext(auVar21,auVar21,8,1);
    uVar44 = NEON_ext(auVar21._0_8_,auVar34._0_8_,4,1);
    fVar49 = fVar41 * (float)uVar44 - (float)uVar39 * auVar21._0_4_;
    fVar50 = fVar42 * (float)((ulong)uVar44 >> 0x20) - fVar37 * auVar21._4_4_;
    uVar26 = SUB41(fVar50,0);
    uVar28 = (undefined1)((uint)fVar50 >> 8);
    uVar30 = (undefined1)((uint)fVar50 >> 0x10);
    uVar32 = (undefined1)((uint)fVar50 >> 0x18);
    fVar50 = fVar43 * auVar21._0_4_ - fVar41 * auVar21._8_4_;
    fVar43 = fVar46 * auVar21._4_4_ - fVar42 * auVar21._12_4_;
    auVar7[4] = uVar26;
    auVar7._0_4_ = fVar49;
    auVar7[5] = uVar28;
    auVar7[6] = uVar30;
    auVar7[7] = uVar32;
    auVar7._8_4_ = fVar50;
    auVar7._12_4_ = fVar43;
    auVar8[4] = uVar26;
    auVar8._0_4_ = fVar49;
    auVar8[5] = uVar28;
    auVar8[6] = uVar30;
    auVar8[7] = uVar32;
    auVar8._8_4_ = fVar50;
    auVar8._12_4_ = fVar43;
    auVar21 = NEON_ext(auVar7,auVar8,4,1);
    fVar50 = auVar21._0_4_ * auVar21._0_4_;
    fVar43 = auVar21._4_4_ * auVar21._4_4_;
    auVar35[0xc] = uVar26;
    auVar35._8_4_ = fVar49;
    auVar35[0xd] = uVar28;
    auVar35[0xe] = uVar30;
    auVar35[0xf] = uVar32;
    auVar35._0_8_ = auVar21._0_8_;
    fVar49 = fVar50 + fVar43;
    fVar50 = fVar50 + fVar43;
  }
  else {
    auVar35._12_4_ = fVar48;
    auVar35._8_4_ = fVar47;
  }
  fVar37 = auVar35._8_4_;
  fVar49 = fVar49 + fVar37 * fVar37;
  fVar50 = fVar50 + fVar37 * fVar37;
  uVar26 = SUB41(fVar50,0);
  uVar28 = (undefined1)((uint)fVar50 >> 8);
  uVar30 = (undefined1)((uint)fVar50 >> 0x10);
  uVar32 = (undefined1)((uint)fVar50 >> 0x18);
  uVar44 = NEON_frsqrte(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar49)))),4
                       );
  fVar43 = (float)uVar44;
  fVar46 = (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar49)))),
                        CONCAT44(fVar46 * fVar46,fVar43 * fVar43),4);
  fVar43 = fVar43 * (float)uVar44;
  fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
  iVar38 = -(uint)(fVar49 <= 0.0);
  iVar40 = -(uint)(fVar50 <= 0.0);
  uVar44 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar30,CONCAT15(uVar28,CONCAT14(uVar26,fVar49)))),
                        CONCAT44(fVar46 * fVar46,fVar43 * fVar43),4);
  fVar43 = (float)uVar44 * fVar43;
  fVar46 = (float)((ulong)uVar44 >> 0x20) * fVar46;
  bVar22 = SUB41(fVar43,0) & ~(byte)iVar38;
  bVar23 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar38 >> 8);
  bVar24 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
  bVar25 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
  bVar27 = SUB41(fVar46,0) & ~(byte)iVar40;
  bVar29 = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar40 >> 8);
  bVar31 = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
  bVar33 = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
  fVar49 = (float)CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar22)));
  auVar36._0_4_ = auVar35._0_4_ * (float)CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar22)));
  auVar36._4_4_ = auVar35._4_4_ * (float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar27)));
  auVar36._8_4_ = fVar37 * fVar49;
  auVar36._12_4_ =
       auVar35._12_4_ *
       (float)(CONCAT17(bVar33,CONCAT16(bVar31,CONCAT15(bVar29,CONCAT14(bVar27,fVar49)))) >> 0x20);
  auVar21 = NEON_ext(auVar36,auVar36,4,1);
  fVar49 = 1.0 / (float)(int)*(char *)(*(long *)(*(long *)(param_4 + 0x38) + 0xb0) +
                                      (long)*(char *)(*(long *)(*(long *)(param_4 + 0x38) + 0xa0) +
                                                      (long)param_5 * 0x28 + 0x24));
  puVar14 = (undefined8 *)(lVar13 + lVar12 * 0xd0);
  fVar43 = *(float *)(puVar14 + 4);
  fVar50 = (float)uVar20 * auVar36._0_4_ - fVar17 * auVar21._0_4_;
  fVar15 = fVar15 * auVar36._4_4_ - fVar19 * auVar21._4_4_;
  fVar17 = fVar17 * auVar36._8_4_ - fVar16 * auVar36._0_4_;
  fVar19 = fVar19 * auVar36._12_4_ - fVar18 * auVar36._4_4_;
  auVar3._4_4_ = fVar15;
  auVar3._0_4_ = fVar50;
  auVar3._8_4_ = fVar17;
  auVar3._12_4_ = fVar19;
  auVar4._4_4_ = fVar15;
  auVar4._0_4_ = fVar50;
  auVar4._8_4_ = fVar17;
  auVar4._12_4_ = fVar19;
  auVar21 = NEON_ext(auVar3,auVar4,4,1);
  uVar44 = puVar14[1];
  uVar20 = *puVar14;
  param_6[10] = auVar36._8_4_ + param_6[10];
  param_6[0xb] = auVar36._12_4_ + param_6[0xb];
  param_6[8] = auVar36._0_4_ + param_6[8];
  param_6[9] = auVar36._4_4_ + param_6[9];
  lVar13 = lVar12 * 0x28;
  param_6[6] = param_6[6] + fVar50;
  param_6[7] = param_6[7] + fVar15;
  param_6[4] = param_6[4] + auVar21._0_4_;
  param_6[5] = param_6[5] + auVar21._4_4_;
  fVar43 = fVar43 * fVar49;
  *(ulong *)(param_6 + 2) =
       CONCAT44(param_6[3] + (float)((ulong)uVar44 >> 0x20) * fVar49,
                param_6[2] + (float)uVar44 * fVar49);
  *(ulong *)param_6 =
       CONCAT44(param_6[1] + (float)((ulong)uVar20 >> 0x20) * fVar49,
                *param_6 + (float)uVar20 * fVar49);
  param_6[0x10] =
       param_6[0x10] +
       fVar43 * *(float *)(*(long *)(*(long *)(param_4 + 0x38) + 0xa0) + lVar13 + 0xc);
  param_6[0x11] =
       param_6[0x11] +
       fVar43 * *(float *)(*(long *)(*(long *)(param_4 + 0x38) + 0xa0) + lVar13 + 0x10);
  fVar50 = *(float *)(*(long *)(*(long *)(param_4 + 0x38) + 0xa0) + lVar13 + 0x14);
  param_6[0x13] = param_6[0x13] + param_2;
  param_6[0x14] = param_6[0x14] + param_1;
  param_6[0x12] = param_6[0x12] + fVar43 * fVar50;
  if (*(char *)(param_6 + 0x16) == '\0') {
    bVar11 = *(char *)(*(long *)(param_4 + 0xf0) + lVar12) != '\0';
  }
  else {
    bVar11 = true;
  }
  *(bool *)(param_6 + 0x16) = bVar11;
  param_6[0x15] =
       param_6[0x15] +
       fVar49 * *(float *)(*(long *)(*(long *)(param_4 + 0x38) + 0xa0) + lVar12 * 0x28 + 0x18) *
       param_3;
  return;
}


