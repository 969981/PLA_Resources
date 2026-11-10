/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03025120; name: FUN_03025120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03025120(long param_1,byte *param_2,undefined1 (*param_3) [16],int param_4,uint *param_5)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar47 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [12];
  float fVar56;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar67;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar75;
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  
  bVar4 = param_2[4];
  uVar17 = (uint)bVar4;
  if (3 < (ulong)bVar4) {
    uVar17 = 4;
  }
  fVar33 = *(float *)(param_1 + 0xe0);
  uVar34 = *(undefined8 *)(param_1 + 0x38);
  *param_5 = uVar17;
  pauVar1 = (undefined1 (*) [12])(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x18);
  fVar25 = (float)uVar40;
  fVar26 = (float)((ulong)uVar40 >> 0x20);
  uVar36 = *(undefined8 *)*pauVar1;
  fVar35 = *(float *)*pauVar1;
  fVar38 = *(float *)(param_2 + 0x14);
  fVar53 = *(float *)(param_2 + 0x18);
  fVar39 = *(float *)(param_2 + 0x1c);
  auVar16 = *pauVar1;
  auVar57 = *pauVar1;
  fVar23 = (float)uVar36;
  fVar24 = (float)((ulong)uVar36 >> 0x20);
  fVar27 = 0.0;
  *(undefined8 *)(param_5 + 6) = uVar40;
  *(undefined8 *)(param_5 + 4) = uVar36;
  *(undefined8 *)(param_5 + 10) = uVar40;
  *(undefined8 *)(param_5 + 8) = uVar36;
  auVar29 = *(undefined1 (*) [16])(param_2 + 0x30);
  auVar41._0_8_ =
       CONCAT17(auVar29[3],CONCAT16(auVar29[2],(uint6)(ushort)(auVar29._0_2_ ^ 0x8000) << 0x10)) ^
       0x8000000000000000;
  auVar41._8_2_ = 0;
  auVar41[10] = auVar29[4];
  auVar41[0xb] = auVar29[5] ^ 0x80;
  auVar41._12_2_ = 0;
  auVar41[0xe] = auVar29[6];
  auVar41[0xf] = auVar29[7] ^ 0x80;
  auVar29 = NEON_scvtf(auVar41,4);
  fVar28 = auVar29._0_4_ * 5.086263e-10;
  fVar30 = auVar29._4_4_ * 5.086263e-10;
  fVar31 = auVar29._8_4_ * 5.086263e-10;
  fVar32 = auVar29._12_4_ * 5.086263e-10;
  auVar29._0_4_ = fVar28 * fVar28;
  auVar29._4_4_ = fVar30 * fVar30;
  auVar29._8_4_ = fVar31 * fVar31;
  auVar29._12_4_ = fVar32 * fVar32;
  auVar41 = NEON_ext(auVar29,auVar29,8,1);
  fVar22 = auVar41._0_4_ + auVar41._4_4_;
  uVar36 = CONCAT44(auVar29._0_4_ + auVar29._4_4_ + fVar22,auVar29._0_4_ + auVar29._4_4_ + fVar22);
  uVar40 = NEON_frsqrte(uVar36,4);
  fVar22 = (float)uVar40;
  fVar44 = (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(uVar36,CONCAT44(fVar44 * fVar44,fVar22 * fVar22),4);
  fVar22 = fVar22 * (float)uVar40;
  fVar44 = fVar44 * (float)((ulong)uVar40 >> 0x20);
  uVar36 = NEON_frsqrts(uVar36,CONCAT44(fVar44 * fVar44,fVar22 * fVar22),4);
  fVar22 = (float)uVar36 * fVar22;
  fVar44 = (float)((ulong)uVar36 >> 0x20) * fVar44;
  auVar42._0_4_ = fVar28 * fVar22;
  auVar42._4_4_ = fVar30 * fVar44;
  auVar42._8_4_ = fVar31 * fVar22;
  auVar42._12_4_ = fVar32 * fVar44;
  fVar28 = (float)*(double *)(param_3[1] + 8);
  fVar22 = (float)*(double *)param_3[1];
  fVar30 = (float)*(double *)param_3[2];
  if (param_4 == 1) {
    fVar31 = (float)*(undefined8 *)(param_1 + 0x20);
    fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar22 = fVar22 - fVar31 * (float)*(undefined8 *)(param_3[3] + 8);
    fVar28 = fVar28 - fVar32 * (float)((ulong)*(undefined8 *)(param_3[3] + 8) >> 0x20);
    fVar30 = fVar30 - fVar31 * *(float *)(param_3[3] + 4);
    fVar27 = 0.0 - fVar32 * 0.0;
    auVar55._0_4_ = *(float *)(param_3[2] + 8) * -fVar31 * 0.5;
    auVar55._4_4_ = *(float *)(param_3[2] + 0xc) * -fVar32 * 0.5;
    auVar55._8_4_ = *(float *)param_3[3] * -fVar31 * 0.5;
    auVar55._12_4_ = *(float *)(param_3[3] + 4) * -fVar32 * 0.5;
    auVar69 = NEON_ext(auVar55,auVar55,4,1);
    fVar31 = auVar55._0_4_ * auVar55._0_4_ + auVar55._4_4_ * auVar55._4_4_ +
             auVar55._8_4_ * auVar55._8_4_;
    fVar32 = auVar55._0_4_ * auVar55._0_4_ + auVar55._4_4_ * auVar55._4_4_ +
             auVar55._8_4_ * auVar55._8_4_;
    auVar29 = *param_3;
    auVar41 = NEON_ext(auVar29,auVar29,8,1);
    uVar36 = NEON_ext(auVar29._0_8_,auVar41._0_8_,4,1);
    fVar44 = auVar29._0_4_;
    fVar48 = auVar29._4_4_;
    fVar50 = auVar29._8_4_;
    fVar73 = auVar29._12_4_;
    auVar72._0_4_ = fVar44 * auVar69._0_4_ - auVar55._0_4_ * (float)uVar36;
    auVar72._4_4_ = fVar48 * auVar69._4_4_ - auVar55._4_4_ * (float)((ulong)uVar36 >> 0x20);
    auVar72._8_4_ = fVar50 * auVar55._0_4_ - auVar55._8_4_ * fVar44;
    auVar72._12_4_ = fVar73 * auVar55._4_4_ - auVar55._12_4_ * fVar48;
    auVar41 = NEON_ext(auVar72,auVar72,4,1);
    auVar59._0_4_ = fVar44 * auVar55._0_4_;
    auVar59._4_4_ = fVar48 * auVar55._4_4_;
    auVar59._8_4_ = fVar50 * auVar55._8_4_;
    auVar59._12_4_ = fVar73 * auVar55._12_4_;
    uVar36 = NEON_fmov(0x3f800000,4);
    fVar31 = fVar31 * (fVar31 * (fVar31 * -0.0029562549 + -0.02144013) + -0.33352822) +
             (float)uVar36;
    auVar29 = NEON_ext(auVar59,auVar59,8,1);
    fVar45 = auVar55._0_4_ * fVar73 + auVar41._0_4_ + fVar44 * fVar31;
    fVar48 = auVar55._4_4_ * fVar73 + auVar41._4_4_ +
             fVar48 * (fVar32 * (fVar32 * (fVar32 * -0.0029562549 + -0.02144013) + -0.33352822) +
                      (float)((ulong)uVar36 >> 0x20));
    fVar50 = auVar55._8_4_ * fVar73 + auVar72._0_4_ + fVar50 * fVar31;
    fVar32 = fVar31 * fVar73 - (auVar59._0_4_ + auVar59._4_4_ + auVar29._0_4_);
    auVar66._0_4_ = fVar45 * fVar45;
    auVar66._4_4_ = fVar48 * fVar48;
    auVar66._8_4_ = fVar50 * fVar50;
    auVar66._12_4_ = fVar32 * fVar32;
    auVar29 = NEON_ext(auVar66,auVar66,8,1);
    fVar31 = auVar29._0_4_ + auVar29._4_4_;
    uVar36 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar31,auVar66._0_4_ + auVar66._4_4_ + fVar31)
    ;
    uVar40 = NEON_frsqrte(uVar36,4);
    fVar31 = (float)uVar40;
    fVar44 = (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_frsqrts(uVar36,CONCAT44(fVar44 * fVar44,fVar31 * fVar31),4);
    fVar31 = fVar31 * (float)uVar40;
    fVar44 = fVar44 * (float)((ulong)uVar40 >> 0x20);
    uVar36 = NEON_frsqrts(uVar36,CONCAT44(fVar44 * fVar44,fVar31 * fVar31),4);
    fVar31 = (float)uVar36 * fVar31;
    fVar44 = (float)((ulong)uVar36 >> 0x20) * fVar44;
    auVar69._0_4_ = fVar31 * fVar45;
    auVar69._4_4_ = fVar44 * fVar48;
    auVar69._8_4_ = fVar31 * fVar50;
    auVar69._12_4_ = fVar44 * fVar32;
  }
  else {
    auVar69 = *param_3;
  }
  fVar31 = auVar69._0_4_;
  fVar32 = auVar69._4_4_;
  fVar44 = auVar69._8_4_;
  fVar45 = auVar69._12_4_;
  auVar6._12_4_ = fVar26;
  auVar6._0_12_ = auVar57;
  auVar7._12_4_ = fVar26;
  auVar7._0_12_ = auVar16;
  auVar29 = NEON_ext(auVar6,auVar7,4,1);
  if (1.1920929e-07 < ABS(fVar45 - auVar42._12_4_) ||
      (1.1920929e-07 < ABS(fVar44 - auVar42._8_4_) ||
      (1.1920929e-07 < ABS(fVar31 - auVar42._0_4_) || 1.1920929e-07 < ABS(fVar32 - auVar42._4_4_))))
  {
    auVar54._0_4_ = -auVar42._0_4_;
    auVar54._4_4_ = -auVar42._4_4_;
    auVar54._8_4_ = -auVar42._8_4_;
    auVar54._12_4_ = auVar42._12_4_;
    auVar37._8_8_ = _UNK_038890f8;
    auVar37._0_8_ = _DAT_038890f0;
    auVar58._8_8_ = _UNK_03888e28;
    auVar58._0_8_ = _DAT_03888e20;
    auVar65._8_8_ = _UNK_03888d78;
    auVar65._0_8_ = _DAT_03888d70;
    auVar70._8_8_ = _UNK_03889108;
    auVar70._0_8_ = _DAT_03889100;
    auVar41 = a64_TBL(ZEXT816(0),auVar69,auVar37);
    auVar59 = a64_TBL(ZEXT816(0),auVar69,auVar58);
    auVar66 = a64_TBL(ZEXT816(0),auVar54,auVar65);
    auVar55 = a64_TBL(ZEXT816(0),auVar54,auVar70);
    auVar71._0_4_ = auVar59._0_4_ * auVar55._0_4_ - auVar41._0_4_ * auVar66._0_4_;
    auVar71._4_4_ = auVar59._4_4_ * auVar55._4_4_ - auVar41._4_4_ * auVar66._4_4_;
    auVar71._8_4_ = auVar59._8_4_ * auVar55._8_4_ - auVar41._8_4_ * auVar66._8_4_;
    auVar71._12_4_ = auVar59._12_4_ * auVar55._12_4_ - auVar41._12_4_ * auVar66._12_4_;
    auVar74._8_8_ = _UNK_038895d8;
    auVar74._0_8_ = _DAT_038895d0;
    auVar72 = a64_TBL(ZEXT816(0),auVar71,auVar74);
    fVar39 = auVar72._12_4_ - (auVar59._12_4_ * auVar66._12_4_ + auVar41._12_4_ * auVar55._12_4_);
    auVar57._0_4_ =
         -(auVar72._0_4_ - (auVar59._0_4_ * auVar66._0_4_ + auVar41._0_4_ * auVar55._0_4_));
    auVar57._4_4_ =
         -(auVar72._4_4_ - (auVar59._4_4_ * auVar66._4_4_ + auVar41._4_4_ * auVar55._4_4_));
    auVar57._8_4_ =
         -(auVar72._8_4_ - (auVar59._8_4_ * auVar66._8_4_ + auVar41._8_4_ * auVar55._8_4_));
    auVar60._12_4_ = -fVar39;
    auVar60._0_12_ = auVar57;
    auVar55 = NEON_ext(auVar60,auVar60,4,1);
    auVar61._12_4_ = fVar39;
    auVar61._0_12_ = auVar57;
    auVar41 = NEON_ext(auVar61,auVar61,8,1);
    fVar48 = auVar41._4_4_ * auVar41._4_4_;
    fVar53 = fVar48 + -0.5;
    fVar48 = fVar48 + -0.5;
    fVar50 = fVar23 * auVar57._0_4_ + fVar24 * auVar57._4_4_ + fVar25 * auVar57._8_4_;
    fVar73 = fVar23 * auVar57._0_4_ + fVar24 * auVar57._4_4_ + fVar25 * auVar57._8_4_;
    auVar62._0_4_ = auVar29._0_4_ * auVar57._0_4_ - fVar23 * auVar55._0_4_;
    auVar62._4_4_ = auVar29._4_4_ * auVar57._4_4_ - fVar24 * auVar55._4_4_;
    auVar62._8_4_ = fVar23 * auVar57._8_4_ - fVar25 * auVar57._0_4_;
    auVar62._12_4_ = fVar24 * fVar39 - fVar26 * auVar57._4_4_;
    auVar41 = NEON_ext(auVar62,auVar62,4,1);
    fVar35 = auVar41._0_4_ * fVar39 + fVar23 * fVar53 + auVar57._0_4_ * fVar50;
    fVar38 = auVar41._4_4_ * fVar39 + fVar24 * fVar48 + auVar57._4_4_ * fVar73;
    fVar53 = auVar62._0_4_ * fVar39 + fVar25 * fVar53 + auVar57._8_4_ * fVar50;
    fVar39 = auVar62._4_4_ * fVar39 + fVar26 * fVar48 + fVar39 * fVar73;
    fVar35 = fVar35 + fVar35;
    fVar38 = fVar38 + fVar38;
    fVar53 = fVar53 + fVar53;
    fVar39 = fVar39 + fVar39;
  }
  uVar36 = *(undefined8 *)(param_2 + 0x38);
  lVar21 = *(long *)(param_2 + 0x20);
  if (lVar21 == 0) {
    lVar20 = 0;
    bVar5 = param_2[5];
  }
  else {
    lVar20 = lVar21 + 0x50;
    bVar5 = param_2[5];
  }
  if ((bVar5 >> 3 & 1) != 0) {
    lVar3 = 0;
    if ((*param_2 & 0x30) != 0) {
      lVar3 = 0x90;
    }
    lVar3 = lVar3 + (ulong)bVar4 * 0x20;
    lVar3 = (ulong)(byte)(&DAT_03aa2d64)[param_2[lVar3 + 0x44]] + lVar3;
    fVar22 = fVar22 + *(float *)(param_2 + lVar3 + 0x40);
    fVar28 = fVar28 + *(float *)(param_2 + lVar3 + 0x44);
    fVar30 = fVar30 + *(float *)(param_2 + lVar3 + 0x48);
    fVar27 = fVar27 + *(float *)(param_2 + lVar3 + 0x4c);
  }
  if (uVar17 == 0) {
    param_5[1] = 0x7f7fffee;
    return;
  }
  auVar41 = NEON_ext(auVar42,auVar42,8,1);
  fVar63 = auVar41._4_4_ * auVar41._4_4_;
  fVar64 = fVar25 * auVar42._8_4_ + fVar23 * auVar42._0_4_ + fVar24 * auVar42._4_4_;
  fVar67 = fVar25 * auVar42._8_4_ + fVar23 * auVar42._0_4_ + fVar24 * auVar42._4_4_;
  fVar48 = (float)uVar34 * fVar33;
  fVar33 = (float)((ulong)uVar34 >> 0x20) * fVar33;
  fVar56 = fVar63 + -0.5;
  fVar63 = fVar63 + -0.5;
  auVar41 = NEON_ext(auVar69,auVar69,8,1);
  fVar75 = auVar41._4_4_ * auVar41._4_4_;
  fVar68 = fVar75 + -0.5;
  fVar75 = fVar75 + -0.5;
  auVar69 = NEON_ext(auVar69,auVar69,4,1);
  auVar41 = NEON_ext(auVar42,auVar42,4,1);
  auVar47._0_4_ = fVar23 * auVar41._0_4_ - auVar29._0_4_ * auVar42._0_4_;
  auVar47._4_4_ = fVar24 * auVar41._4_4_ - auVar29._4_4_ * auVar42._4_4_;
  auVar47._8_4_ = fVar25 * auVar42._0_4_ - fVar23 * auVar42._8_4_;
  auVar47._12_4_ = fVar26 * auVar42._4_4_ - fVar24 * auVar42._12_4_;
  auVar29 = NEON_ext(auVar47,auVar47,4,1);
  fVar46 = (float)((int)(short)uVar36 << 0x10);
  fVar49 = (float)((int)(short)((ulong)uVar36 >> 0x10) << 0x10);
  fVar51 = (float)((int)(short)((ulong)uVar36 >> 0x20) << 0x10);
  fVar52 = (float)((int)(short)((ulong)uVar36 >> 0x30) << 0x10);
  fVar50 = auVar29._0_4_ * auVar42._12_4_ + fVar23 * fVar56 + auVar42._0_4_ * fVar64;
  fVar73 = auVar29._4_4_ * auVar42._12_4_ + fVar24 * fVar63 + auVar42._4_4_ * fVar67;
  fVar56 = auVar47._0_4_ * auVar42._12_4_ + fVar25 * fVar56 + auVar42._8_4_ * fVar64;
  fVar63 = auVar47._4_4_ * auVar42._12_4_ + fVar26 * fVar63 + auVar42._12_4_ * fVar67;
  auVar43._0_4_ = fVar50 + fVar50;
  auVar43._4_4_ = fVar73 + fVar73;
  auVar43._8_4_ = fVar56 + fVar56;
  auVar43._12_4_ = fVar63 + fVar63;
  auVar29 = NEON_ext(auVar43,auVar43,4,1);
  if (lVar21 == 0) {
    uVar36 = 0x7f7fffee7f7fffee;
    param_2 = param_2 + 0x50;
    uVar19 = 0;
    do {
      fVar50 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar73 = -(fVar48 * fVar50);
      fVar56 = -(fVar33 * fVar50);
      param_5[uVar19 + 0xc] = (uint)fVar73;
      pauVar1 = (undefined1 (*) [12])(param_2 + -0x10);
      fVar78 = (float)((ulong)*(undefined8 *)(param_2 + -8) >> 0x20);
      uVar40 = *(undefined8 *)*pauVar1;
      fVar63 = (float)((ulong)uVar40 >> 0x20);
      auVar12._12_4_ = fVar78;
      auVar12._0_12_ = *pauVar1;
      auVar13._12_4_ = fVar78;
      auVar13._0_12_ = *pauVar1;
      auVar41 = NEON_ext(auVar12,auVar13,8,1);
      uVar34 = NEON_ext(uVar40,auVar41._0_8_,4,1);
      fVar50 = auVar43._0_4_ * (float)uVar34 - auVar29._0_4_ * (float)uVar40;
      fVar64 = auVar43._4_4_ * (float)((ulong)uVar34 >> 0x20) - auVar29._4_4_ * fVar63;
      fVar67 = auVar43._8_4_ * (float)uVar40 - auVar43._0_4_ * (float)*(undefined8 *)(param_2 + -8);
      fVar63 = auVar43._12_4_ * fVar63 - auVar43._4_4_ * fVar78;
      auVar14._4_4_ = fVar64;
      auVar14._0_4_ = fVar50;
      auVar14._8_4_ = fVar67;
      auVar14._12_4_ = fVar63;
      auVar15._4_4_ = fVar64;
      auVar15._0_4_ = fVar50;
      auVar15._8_4_ = fVar67;
      auVar15._12_4_ = fVar63;
      auVar41 = NEON_ext(auVar14,auVar15,4,1);
      uVar40 = NEON_ext(auVar41._0_8_,CONCAT44(fVar64,fVar50),4,1);
      fVar63 = auVar41._0_4_;
      fVar67 = auVar41._4_4_;
      fVar78 = fVar31 * fVar63 + fVar32 * fVar67 + fVar44 * fVar50;
      fVar79 = fVar31 * fVar63 + fVar32 * fVar67 + fVar44 * fVar50;
      auVar77._0_4_ = fVar31 * (float)uVar40 - auVar69._0_4_ * fVar63;
      auVar77._4_4_ = fVar32 * (float)((ulong)uVar40 >> 0x20) - auVar69._4_4_ * fVar67;
      auVar77._8_4_ = fVar44 * fVar63 - fVar31 * fVar50;
      auVar77._12_4_ = fVar45 * fVar67 - fVar32 * fVar64;
      auVar41 = NEON_ext(auVar77,auVar77,4,1);
      fVar63 = fVar68 * fVar63 + fVar31 * fVar78 + fVar45 * auVar41._0_4_;
      fVar67 = fVar75 * fVar67 + fVar32 * fVar79 + fVar45 * auVar41._4_4_;
      fVar78 = fVar68 * fVar50 + fVar44 * fVar78 + fVar45 * auVar77._0_4_;
      fVar64 = fVar75 * fVar64 + fVar45 * fVar79 + fVar45 * auVar77._4_4_;
      iVar18 = (int)uVar19;
      fVar50 = fVar46;
      if (((iVar18 != 0) && (fVar50 = fVar49, iVar18 != 1)) && (fVar50 = fVar51, iVar18 != 2)) {
        fVar50 = fVar52;
      }
      uVar36 = NEON_fmin(uVar36,CONCAT44(fVar56,fVar73),4);
      uVar2 = uVar19 + 1;
      param_2 = param_2 + 0x20;
      *(ulong *)(param_5 + uVar19 * 4 + 0x12) =
           CONCAT44((fVar27 + fVar64 + fVar64 + fVar39 * fVar50) - fVar26 * fVar56,
                    (fVar30 + fVar78 + fVar78 + fVar53 * fVar50) - fVar25 * fVar73);
      *(ulong *)(param_5 + uVar19 * 4 + 0x10) =
           CONCAT44((fVar28 + fVar67 + fVar67 + fVar38 * fVar50) - fVar24 * fVar56,
                    (fVar22 + fVar63 + fVar63 + fVar35 * fVar50) - fVar23 * fVar73);
      uVar19 = uVar2;
    } while (uVar2 < uVar17);
  }
  else {
    uVar36 = 0x7f7fffee7f7fffee;
    param_2 = param_2 + 0x50;
    uVar19 = 0;
    do {
      fVar50 = *(float *)(lVar20 + uVar19 * 4);
      fVar73 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar56 = fVar50 - fVar48 * fVar73;
      fVar50 = fVar50 - fVar33 * fVar73;
      param_5[uVar19 + 0xc] = (uint)fVar56;
      pauVar1 = (undefined1 (*) [12])(param_2 + -0x10);
      fVar78 = (float)((ulong)*(undefined8 *)(param_2 + -8) >> 0x20);
      uVar40 = *(undefined8 *)*pauVar1;
      fVar63 = (float)((ulong)uVar40 >> 0x20);
      auVar8._12_4_ = fVar78;
      auVar8._0_12_ = *pauVar1;
      auVar9._12_4_ = fVar78;
      auVar9._0_12_ = *pauVar1;
      auVar41 = NEON_ext(auVar8,auVar9,8,1);
      uVar34 = NEON_ext(uVar40,auVar41._0_8_,4,1);
      fVar73 = auVar43._0_4_ * (float)uVar34 - auVar29._0_4_ * (float)uVar40;
      fVar64 = auVar43._4_4_ * (float)((ulong)uVar34 >> 0x20) - auVar29._4_4_ * fVar63;
      fVar67 = auVar43._8_4_ * (float)uVar40 - auVar43._0_4_ * (float)*(undefined8 *)(param_2 + -8);
      fVar63 = auVar43._12_4_ * fVar63 - auVar43._4_4_ * fVar78;
      auVar10._4_4_ = fVar64;
      auVar10._0_4_ = fVar73;
      auVar10._8_4_ = fVar67;
      auVar10._12_4_ = fVar63;
      auVar11._4_4_ = fVar64;
      auVar11._0_4_ = fVar73;
      auVar11._8_4_ = fVar67;
      auVar11._12_4_ = fVar63;
      auVar41 = NEON_ext(auVar10,auVar11,4,1);
      uVar40 = NEON_ext(auVar41._0_8_,CONCAT44(fVar64,fVar73),4,1);
      fVar63 = auVar41._0_4_;
      fVar67 = auVar41._4_4_;
      fVar78 = fVar31 * fVar63 + fVar32 * fVar67 + fVar44 * fVar73;
      fVar79 = fVar31 * fVar63 + fVar32 * fVar67 + fVar44 * fVar73;
      auVar76._0_4_ = fVar31 * (float)uVar40 - auVar69._0_4_ * fVar63;
      auVar76._4_4_ = fVar32 * (float)((ulong)uVar40 >> 0x20) - auVar69._4_4_ * fVar67;
      auVar76._8_4_ = fVar44 * fVar63 - fVar31 * fVar73;
      auVar76._12_4_ = fVar45 * fVar67 - fVar32 * fVar64;
      auVar41 = NEON_ext(auVar76,auVar76,4,1);
      fVar63 = fVar68 * fVar63 + fVar31 * fVar78 + fVar45 * auVar41._0_4_;
      fVar67 = fVar75 * fVar67 + fVar32 * fVar79 + fVar45 * auVar41._4_4_;
      fVar78 = fVar68 * fVar73 + fVar44 * fVar78 + fVar45 * auVar76._0_4_;
      fVar64 = fVar75 * fVar64 + fVar45 * fVar79 + fVar45 * auVar76._4_4_;
      iVar18 = (int)uVar19;
      fVar73 = fVar46;
      if (((iVar18 != 0) && (fVar73 = fVar49, iVar18 != 1)) && (fVar73 = fVar51, iVar18 != 2)) {
        fVar73 = fVar52;
      }
      uVar36 = NEON_fmin(uVar36,CONCAT44(fVar50,fVar56),4);
      uVar2 = uVar19 + 1;
      param_2 = param_2 + 0x20;
      *(ulong *)(param_5 + uVar19 * 4 + 0x12) =
           CONCAT44((fVar27 + fVar64 + fVar64 + fVar39 * fVar73) - fVar26 * fVar50,
                    (fVar30 + fVar78 + fVar78 + fVar53 * fVar73) - fVar25 * fVar56);
      *(ulong *)(param_5 + uVar19 * 4 + 0x10) =
           CONCAT44((fVar28 + fVar67 + fVar67 + fVar38 * fVar73) - fVar24 * fVar50,
                    (fVar22 + fVar63 + fVar63 + fVar35 * fVar73) - fVar23 * fVar56);
      uVar19 = uVar2;
    } while (uVar2 < uVar17);
  }
  param_5[1] = (uint)uVar36;
  return;
}


