/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03072080; name: FUN_03072080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03072080(long param_1,float *param_2,uint param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6,uint *param_7)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  int iVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  int iVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  uint uVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar18 = param_4[1];
  *(undefined8 *)((long)param_6 + 0xc) = *param_4;
  *(int *)((long)param_6 + 0x14) = (int)uVar18;
  fVar12 = (float)param_4[1];
  fVar13 = (float)*param_4;
  fVar11 = (float)((ulong)*param_4 >> 0x20);
  iVar25 = 0;
  iVar28 = 0;
  iVar31 = 0;
  iVar34 = 0;
  fVar20 = 0.0 - fVar13;
  fVar22 = 0.0 - fVar11;
  fVar23 = 0.0 - fVar12;
  fVar24 = 0.0 - (float)((ulong)param_4[1] >> 0x20);
  uVar43 = *(uint *)(param_1 + 0x10);
  pauVar6 = *(undefined1 (**) [16])(param_1 + 8);
  uVar41 = uVar43 & 3;
  iVar26 = (int)_DAT_03889d70;
  iVar29 = (int)((ulong)_DAT_03889d70 >> 0x20);
  iVar32 = (int)_UNK_03889d78;
  iVar35 = (int)((ulong)_UNK_03889d78 >> 0x20);
  if (uVar41 == 2) {
    fVar27 = fVar20 * (float)*(undefined8 *)*pauVar6;
    fVar30 = fVar22 * (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
    fVar33 = fVar23 * (float)*(undefined8 *)(*pauVar6 + 8);
    fVar36 = fVar24 * (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
    auVar47._0_4_ = fVar20 * *(float *)(*pauVar6 + 0xc);
    auVar47._4_4_ = fVar22 * *(float *)pauVar6[1];
    auVar47._8_4_ = fVar23 * *(float *)(pauVar6[1] + 4);
    auVar47._12_4_ = fVar24 * *(float *)(pauVar6[1] + 8);
    auVar21._4_4_ = fVar30;
    auVar21._0_4_ = fVar27;
    auVar21._8_4_ = fVar33;
    auVar21._12_4_ = fVar36;
    auVar44._4_4_ = fVar30;
    auVar44._0_4_ = fVar27;
    auVar44._8_4_ = fVar33;
    auVar44._12_4_ = fVar36;
    auVar42 = NEON_ext(auVar21,auVar44,8,1);
    auVar38 = NEON_ext(auVar47,auVar47,8,1);
    auVar38._4_4_ = auVar47._0_4_ + auVar47._4_4_ + auVar38._0_4_;
    auVar38._0_4_ = fVar27 + fVar30 + auVar42._0_4_;
    auVar38._8_8_ = 0xff800000ff800000;
    lVar9 = 2;
    iVar25 = iVar26;
    iVar28 = iVar29;
    iVar31 = iVar32;
    iVar34 = iVar35;
    if (2 < (int)uVar43) goto LAB_0307224c;
LAB_03072104:
    auVar49._12_4_ = iVar34;
    auVar49._8_4_ = iVar31;
    auVar49._4_4_ = iVar28;
    auVar49._0_4_ = iVar25;
  }
  else {
    if (uVar41 == 0) {
      lVar9 = 4;
    }
    else {
      if (uVar41 != 3) {
        fVar24 = fVar20 * *(float *)*pauVar6;
        fVar27 = fVar22 * *(float *)(*pauVar6 + 4);
        fVar30 = fVar23 * *(float *)(*pauVar6 + 8);
        auVar38._0_8_ = CONCAT44(fVar24 + fVar27 + fVar30,fVar24 + fVar27 + fVar30);
        auVar38._8_8_ = auVar38._0_8_;
        lVar9 = 1;
        if ((int)uVar43 < 2) goto LAB_03072104;
        goto LAB_0307224c;
      }
      if (uVar43 == 3) {
        auVar42._0_4_ = fVar20 * (float)*(undefined8 *)*pauVar6;
        auVar42._4_4_ = fVar22 * (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
        auVar42._8_4_ = fVar23 * *(float *)(*pauVar6 + 8);
        auVar42._12_4_ = fVar24 * *(float *)(*pauVar6 + 8);
        auVar19._0_4_ = fVar20 * (float)*(undefined8 *)(*pauVar6 + 0xc);
        auVar19._4_4_ = fVar22 * (float)((ulong)*(undefined8 *)(*pauVar6 + 0xc) >> 0x20);
        auVar19._8_4_ = fVar23 * *(float *)(pauVar6[1] + 4);
        auVar19._12_4_ = fVar24 * *(float *)(pauVar6[1] + 4);
        auVar46._0_4_ = fVar20 * (float)*(undefined8 *)(pauVar6[1] + 8);
        auVar46._4_4_ = fVar22 * (float)((ulong)*(undefined8 *)(pauVar6[1] + 8) >> 0x20);
        auVar46._8_4_ = fVar23 * *(float *)pauVar6[2];
        auVar46._12_4_ = fVar24 * *(float *)pauVar6[2];
        auVar38 = NEON_ext(auVar42,auVar42,8,1);
        auVar21 = NEON_ext(auVar19,auVar19,8,1);
        auVar44 = NEON_ext(auVar46,auVar46,8,1);
        fVar20 = auVar38._0_4_ + auVar42._0_4_ + auVar42._4_4_;
        fVar22 = auVar21._0_4_ + auVar19._0_4_ + auVar19._4_4_;
        uVar18 = CONCAT44(fVar22,fVar20);
        fVar23 = auVar44._0_4_ + auVar46._0_4_ + auVar46._4_4_;
        uVar18 = NEON_fmaxp(uVar18,uVar18,4);
        uVar18 = NEON_fmax(CONCAT44(fVar23,fVar23),uVar18,4);
        auVar14 = *(undefined1 (*) [12])
                   (*pauVar6 +
                   (long)(char)(&DAT_03aadfd0)
                               [(-(uint)((float)((ulong)uVar18 >> 0x20) <= fVar22) & 2) +
                                (uint)((float)uVar18 <= fVar20) |
                                -(uint)((float)uVar18 <= fVar23) & 4] * 0xc);
        fVar20 = (float)((int)(char)(&DAT_03aadfd0)
                                    [(-(uint)((float)((ulong)uVar18 >> 0x20) <= fVar22) & 2) +
                                     (uint)((float)uVar18 <= fVar20) |
                                     -(uint)((float)uVar18 <= fVar23) & 4] | 0x3f000000);
        fVar22 = fVar20;
        goto LAB_03072140;
      }
      lVar9 = 3;
    }
    auVar38 = *pauVar6;
    auVar42 = *(undefined1 (*) [16])(*pauVar6 + 0xc);
    auVar19 = NEON_ext(auVar38,auVar38,8,1);
    auVar21 = NEON_ext(auVar42,auVar42,8,1);
    auVar38._0_4_ = fVar23 * auVar19._0_4_ + fVar20 * auVar38._0_4_ + fVar22 * auVar38._4_4_;
    auVar38._4_4_ = fVar23 * auVar21._0_4_ + fVar20 * auVar42._0_4_ + fVar22 * auVar42._4_4_;
    auVar38._8_4_ =
         fVar23 * *(float *)pauVar6[2] +
         fVar20 * *(float *)(pauVar6[1] + 8) + fVar22 * *(float *)(pauVar6[1] + 0xc);
    auVar38._12_4_ =
         fVar23 * *(float *)(pauVar6[2] + 0xc) +
         fVar20 * *(float *)(pauVar6[2] + 4) + fVar22 * *(float *)(pauVar6[2] + 8);
    iVar25 = iVar26;
    iVar28 = iVar29;
    iVar31 = iVar32;
    iVar34 = iVar35;
    if ((int)uVar43 <= (int)lVar9) goto LAB_03072104;
LAB_0307224c:
    iVar8 = (int)lVar9;
    pauVar10 = (undefined1 (*) [16])(pauVar6[1] + lVar9 * 0xc + 8);
    auVar39._0_4_ = iVar8 + iVar26;
    auVar39._4_4_ = iVar8 + iVar29;
    auVar39._8_4_ = iVar8 + iVar32;
    auVar39._12_4_ = iVar8 + iVar35;
    do {
      auVar42 = *(undefined1 (*) [16])(pauVar10[-2] + 8);
      lVar9 = lVar9 + 4;
      auVar19 = *(undefined1 (*) [16])(pauVar10[-1] + 4);
      auVar21 = *pauVar10;
      pauVar1 = (undefined1 (*) [16])(*pauVar10 + 0xc);
      auVar44 = NEON_ext(auVar42,auVar42,8,1);
      auVar46 = NEON_ext(auVar19,auVar19,8,1);
      auVar49 = NEON_ext(auVar21,auVar21,8,1);
      pauVar10 = pauVar10 + 3;
      auVar47 = NEON_ext(*pauVar1,*pauVar1,8,1);
      auVar48._0_4_ = fVar23 * auVar44._0_4_ + fVar20 * auVar42._0_4_ + fVar22 * auVar42._4_4_;
      auVar48._4_4_ = fVar23 * auVar46._0_4_ + fVar20 * auVar19._0_4_ + fVar22 * auVar19._4_4_;
      auVar48._8_4_ = fVar23 * auVar49._0_4_ + fVar20 * auVar21._0_4_ + fVar22 * auVar21._4_4_;
      auVar48._12_4_ =
           fVar23 * auVar47._0_4_ +
           fVar20 * (float)*(undefined8 *)*pauVar1 +
           fVar22 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar45._0_4_ = -(uint)(auVar38._0_4_ < auVar48._0_4_);
      auVar45._4_4_ = -(uint)(auVar38._4_4_ < auVar48._4_4_);
      auVar45._8_4_ = -(uint)(auVar38._8_4_ < auVar48._8_4_);
      auVar45._12_4_ = -(uint)(auVar38._12_4_ < auVar48._12_4_);
      auVar38 = NEON_fmax(auVar48,auVar38,4);
      auVar4._4_4_ = iVar28;
      auVar4._0_4_ = iVar25;
      auVar4._8_4_ = iVar31;
      auVar4._12_4_ = iVar34;
      auVar5._4_4_ = iVar28;
      auVar5._0_4_ = iVar25;
      auVar5._8_4_ = iVar31;
      auVar5._12_4_ = iVar34;
      auVar49 = auVar5 ^ (auVar4 ^ auVar39) & auVar45;
      auVar40._0_4_ = auVar39._0_4_ + 4;
      auVar40._4_4_ = auVar39._4_4_ + 4;
      auVar40._8_4_ = auVar39._8_4_ + 4;
      auVar40._12_4_ = auVar39._12_4_ + 4;
      iVar31 = auVar49._8_4_;
      iVar34 = auVar49._12_4_;
      iVar25 = auVar49._0_4_;
      iVar28 = auVar49._4_4_;
      auVar39 = auVar40;
    } while (lVar9 < (int)uVar43);
  }
  auVar42 = NEON_rev64(auVar38,4);
  auVar15._0_4_ = -(uint)(auVar42._0_4_ <= auVar38._0_4_);
  auVar15._4_4_ = -(uint)(auVar42._4_4_ <= auVar38._4_4_);
  auVar15._8_4_ = -(uint)(auVar42._8_4_ <= auVar38._8_4_);
  auVar15._12_4_ = -(uint)(auVar42._12_4_ <= auVar38._12_4_);
  auVar38 = NEON_fmax(auVar38,auVar42,4);
  auVar42 = NEON_rev64(auVar49,4);
  auVar42 = auVar42 ^ (auVar42 ^ auVar49) & auVar15;
  auVar19 = NEON_ext(auVar38,auVar38,8,1);
  auVar21 = NEON_ext(auVar42,auVar42,8,1);
  fVar22 = (float)(auVar21._0_4_ ^
                  (auVar21._0_4_ ^ auVar42._0_4_) & -(uint)(auVar19._0_4_ <= auVar38._0_4_));
  auVar14 = SUB1612(*(undefined1 (*) [16])(*pauVar6 + (long)(int)fVar22 * 0xc),0);
  fVar20 = (float)((uint)fVar22 | 0x3f000000);
LAB_03072140:
  fVar23 = *(float *)(param_1 + 0x14);
  *param_6 = CONCAT44(auVar14._4_4_ - fVar11 * fVar23,auVar14._0_4_ - fVar13 * fVar23);
  *(float *)(param_6 + 1) = auVar14._8_4_ - fVar12 * fVar23;
  *param_7 = (uint)fVar22 & 0xffff;
  fVar13 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar22 = param_2[3];
  fVar27 = (float)param_4[1];
  fVar23 = (float)*param_4;
  fVar24 = (float)((ulong)*param_4 >> 0x20);
  if (1 < (int)param_3) {
    lVar9 = (ulong)param_3 - 1;
    fVar30 = fVar27 * fVar12 + fVar23 * fVar13 + fVar24 * fVar11;
    fVar33 = fVar27 * fVar12 + fVar23 * fVar13 + fVar24 * fVar11;
    do {
      pfVar7 = param_2 + 4;
      fVar36 = fVar23 * (float)*(undefined8 *)pfVar7;
      fVar16 = fVar24 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
      fVar17 = fVar27 * (float)*(undefined8 *)(param_2 + 6);
      fVar37 = fVar36 + fVar16 + fVar17;
      fVar17 = fVar36 + fVar16 + fVar17;
      uVar41 = -(uint)(fVar30 < fVar37);
      uVar43 = -(uint)(fVar33 < fVar17);
      fVar30 = (float)((uint)fVar30 ^ ((uint)fVar30 ^ (uint)fVar37) & uVar41);
      fVar33 = (float)((uint)fVar33 ^ ((uint)fVar33 ^ (uint)fVar17) & uVar43);
      lVar9 = lVar9 + -1;
      fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)*pfVar7) & uVar41);
      fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)param_2[5]) & uVar43);
      fVar12 = (float)((uint)fVar12 ^ ((uint)fVar12 ^ (uint)param_2[6]) & uVar41);
      fVar22 = (float)((uint)fVar22 ^
                      ((uint)fVar22 ^ (uint)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20)) & uVar43)
      ;
      param_2 = pfVar7;
    } while (lVar9 != 0);
  }
  fVar23 = fVar23 * (auVar14._0_4_ - fVar13);
  fVar24 = fVar24 * (auVar14._4_4_ - fVar11);
  fVar27 = fVar27 * (auVar14._8_4_ - fVar12);
  fVar13 = (float)((ulong)param_4[1] >> 0x20) * (fVar20 - fVar22);
  auVar2._4_4_ = fVar24;
  auVar2._0_4_ = fVar23;
  auVar2._8_4_ = fVar27;
  auVar2._12_4_ = fVar13;
  auVar3._4_4_ = fVar24;
  auVar3._0_4_ = fVar23;
  auVar3._8_4_ = fVar27;
  auVar3._12_4_ = fVar13;
  auVar38 = NEON_ext(auVar2,auVar3,8,1);
  *(float *)(param_6 + 3) = (fVar23 + fVar24 + auVar38._0_4_) - (float)*param_5;
  return;
}


