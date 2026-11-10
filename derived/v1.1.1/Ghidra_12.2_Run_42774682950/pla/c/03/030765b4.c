/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030765b4; name: FUN_030765b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030765b4(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  int iVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  fVar12 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar20 = param_2[3];
  uVar3 = *(uint *)(param_1 + 1);
  pauVar7 = (undefined1 (*) [16])*param_1;
  uVar2 = uVar3 & 3;
  iVar22 = (int)_DAT_03889d70;
  iVar25 = (int)((ulong)_DAT_03889d70 >> 0x20);
  iVar28 = (int)_UNK_03889d78;
  iVar31 = (int)((ulong)_UNK_03889d78 >> 0x20);
  iVar24 = iVar22;
  iVar27 = iVar25;
  iVar30 = iVar28;
  iVar33 = iVar31;
  if (uVar2 == 2) {
    fVar23 = fVar12 * (float)*(undefined8 *)*pauVar7;
    fVar26 = fVar14 * (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
    fVar29 = fVar15 * (float)*(undefined8 *)(*pauVar7 + 8);
    fVar32 = fVar20 * (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
    auVar41._0_4_ = fVar12 * *(float *)(*pauVar7 + 0xc);
    auVar41._4_4_ = fVar14 * *(float *)pauVar7[1];
    auVar41._8_4_ = fVar15 * *(float *)(pauVar7[1] + 4);
    auVar41._12_4_ = fVar20 * *(float *)(pauVar7[1] + 8);
    auVar21._4_4_ = fVar26;
    auVar21._0_4_ = fVar23;
    auVar21._8_4_ = fVar29;
    auVar21._12_4_ = fVar32;
    auVar38._4_4_ = fVar26;
    auVar38._0_4_ = fVar23;
    auVar38._8_4_ = fVar29;
    auVar38._12_4_ = fVar32;
    auVar37 = NEON_ext(auVar21,auVar38,8,1);
    auVar34 = NEON_ext(auVar41,auVar41,8,1);
    auVar34._4_4_ = auVar41._0_4_ + auVar41._4_4_ + auVar34._0_4_;
    auVar34._0_4_ = fVar23 + fVar26 + auVar37._0_4_;
    auVar34._8_8_ = 0xff800000ff800000;
    lVar10 = 2;
    if (2 < (int)uVar3) goto LAB_030766c4;
LAB_03076620:
    auVar43._12_4_ = iVar33;
    auVar43._8_4_ = iVar30;
    auVar43._4_4_ = iVar27;
    auVar43._0_4_ = iVar24;
  }
  else {
    if (uVar2 == 0) {
      lVar10 = 4;
    }
    else {
      if (uVar2 != 3) {
        fVar20 = fVar12 * (float)*(undefined8 *)*pauVar7;
        fVar23 = fVar14 * (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
        fVar26 = fVar15 * (float)*(undefined8 *)(*pauVar7 + 8);
        auVar34._0_8_ = CONCAT44(fVar20 + fVar23 + fVar26,fVar20 + fVar23 + fVar26);
        iVar24 = 0;
        iVar27 = 0;
        iVar30 = 0;
        iVar33 = 0;
        auVar34._8_8_ = auVar34._0_8_;
        lVar10 = 1;
        if ((int)uVar3 < 2) goto LAB_03076620;
        goto LAB_030766c4;
      }
      if (uVar3 == 3) {
        auVar37._0_4_ = fVar12 * (float)*(undefined8 *)*pauVar7;
        auVar37._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
        auVar37._8_4_ = fVar15 * *(float *)(*pauVar7 + 8);
        auVar37._12_4_ = fVar20 * *(float *)(*pauVar7 + 8);
        auVar19._0_4_ = fVar12 * (float)*(undefined8 *)(*pauVar7 + 0xc);
        auVar19._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)(*pauVar7 + 0xc) >> 0x20);
        auVar19._8_4_ = fVar15 * *(float *)(pauVar7[1] + 4);
        auVar19._12_4_ = fVar20 * *(float *)(pauVar7[1] + 4);
        auVar40._0_4_ = fVar12 * (float)*(undefined8 *)(pauVar7[1] + 8);
        auVar40._4_4_ = fVar14 * (float)((ulong)*(undefined8 *)(pauVar7[1] + 8) >> 0x20);
        auVar40._8_4_ = fVar15 * *(float *)pauVar7[2];
        auVar40._12_4_ = fVar20 * *(float *)pauVar7[2];
        auVar34 = NEON_ext(auVar37,auVar37,8,1);
        auVar21 = NEON_ext(auVar19,auVar19,8,1);
        auVar38 = NEON_ext(auVar40,auVar40,8,1);
        fVar12 = auVar34._0_4_ + auVar37._0_4_ + auVar37._4_4_;
        fVar14 = auVar21._0_4_ + auVar19._0_4_ + auVar19._4_4_;
        uVar18 = CONCAT44(fVar14,fVar12);
        fVar15 = auVar38._0_4_ + auVar40._0_4_ + auVar40._4_4_;
        uVar18 = NEON_fmaxp(uVar18,uVar18,4);
        uVar18 = NEON_fmax(CONCAT44(fVar15,fVar15),uVar18,4);
        uVar8 = (ulong)(char)(&DAT_03aadfd0)
                             [(-(uint)((float)((ulong)uVar18 >> 0x20) <= fVar14) & 2) +
                              (uint)((float)uVar18 <= fVar12) | -(uint)((float)uVar18 <= fVar15) & 4
                             ];
        uVar4 = *(undefined4 *)((long)(*pauVar7 + uVar8 * 0xc) + 8);
        uVar16 = CONCAT44(uVar4,uVar4);
        uVar18 = *(undefined8 *)(*pauVar7 + uVar8 * 0xc);
        goto LAB_03076658;
      }
      lVar10 = 3;
    }
    auVar34 = *pauVar7;
    auVar37 = *(undefined1 (*) [16])(*pauVar7 + 0xc);
    auVar19 = NEON_ext(auVar34,auVar34,8,1);
    auVar21 = NEON_ext(auVar37,auVar37,8,1);
    auVar34._0_4_ = fVar15 * auVar19._0_4_ + fVar12 * auVar34._0_4_ + fVar14 * auVar34._4_4_;
    auVar34._4_4_ = fVar15 * auVar21._0_4_ + fVar12 * auVar37._0_4_ + fVar14 * auVar37._4_4_;
    auVar34._8_4_ =
         fVar15 * *(float *)pauVar7[2] +
         fVar12 * *(float *)(pauVar7[1] + 8) + fVar14 * *(float *)(pauVar7[1] + 0xc);
    auVar34._12_4_ =
         fVar15 * *(float *)(pauVar7[2] + 0xc) +
         fVar12 * *(float *)(pauVar7[2] + 4) + fVar14 * *(float *)(pauVar7[2] + 8);
    if ((int)uVar3 <= (int)lVar10) goto LAB_03076620;
LAB_030766c4:
    iVar9 = (int)lVar10;
    pauVar11 = (undefined1 (*) [16])(pauVar7[1] + lVar10 * 0xc + 8);
    auVar35._0_4_ = iVar9 + iVar22;
    auVar35._4_4_ = iVar9 + iVar25;
    auVar35._8_4_ = iVar9 + iVar28;
    auVar35._12_4_ = iVar9 + iVar31;
    do {
      auVar37 = *(undefined1 (*) [16])(pauVar11[-2] + 8);
      lVar10 = lVar10 + 4;
      auVar19 = *(undefined1 (*) [16])(pauVar11[-1] + 4);
      auVar21 = *pauVar11;
      pauVar1 = (undefined1 (*) [16])(*pauVar11 + 0xc);
      auVar38 = NEON_ext(auVar37,auVar37,8,1);
      auVar40 = NEON_ext(auVar19,auVar19,8,1);
      auVar43 = NEON_ext(auVar21,auVar21,8,1);
      pauVar11 = pauVar11 + 3;
      auVar41 = NEON_ext(*pauVar1,*pauVar1,8,1);
      auVar42._0_4_ = fVar15 * auVar38._0_4_ + fVar12 * auVar37._0_4_ + fVar14 * auVar37._4_4_;
      auVar42._4_4_ = fVar15 * auVar40._0_4_ + fVar12 * auVar19._0_4_ + fVar14 * auVar19._4_4_;
      auVar42._8_4_ = fVar15 * auVar43._0_4_ + fVar12 * auVar21._0_4_ + fVar14 * auVar21._4_4_;
      auVar42._12_4_ =
           fVar15 * auVar41._0_4_ +
           fVar12 * (float)*(undefined8 *)*pauVar1 +
           fVar14 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar39._0_4_ = -(uint)(auVar34._0_4_ < auVar42._0_4_);
      auVar39._4_4_ = -(uint)(auVar34._4_4_ < auVar42._4_4_);
      auVar39._8_4_ = -(uint)(auVar34._8_4_ < auVar42._8_4_);
      auVar39._12_4_ = -(uint)(auVar34._12_4_ < auVar42._12_4_);
      auVar34 = NEON_fmax(auVar42,auVar34,4);
      auVar5._4_4_ = iVar27;
      auVar5._0_4_ = iVar24;
      auVar5._8_4_ = iVar30;
      auVar5._12_4_ = iVar33;
      auVar6._4_4_ = iVar27;
      auVar6._0_4_ = iVar24;
      auVar6._8_4_ = iVar30;
      auVar6._12_4_ = iVar33;
      auVar43 = auVar6 ^ (auVar5 ^ auVar35) & auVar39;
      auVar36._0_4_ = auVar35._0_4_ + 4;
      auVar36._4_4_ = auVar35._4_4_ + 4;
      auVar36._8_4_ = auVar35._8_4_ + 4;
      auVar36._12_4_ = auVar35._12_4_ + 4;
      iVar30 = auVar43._8_4_;
      iVar33 = auVar43._12_4_;
      iVar24 = auVar43._0_4_;
      iVar27 = auVar43._4_4_;
      auVar35 = auVar36;
    } while (lVar10 < (int)uVar3);
  }
  auVar37 = NEON_rev64(auVar34,4);
  auVar17._0_4_ = -(uint)(auVar37._0_4_ <= auVar34._0_4_);
  auVar17._4_4_ = -(uint)(auVar37._4_4_ <= auVar34._4_4_);
  auVar17._8_4_ = -(uint)(auVar37._8_4_ <= auVar34._8_4_);
  auVar17._12_4_ = -(uint)(auVar37._12_4_ <= auVar34._12_4_);
  auVar34 = NEON_fmax(auVar34,auVar37,4);
  auVar37 = NEON_rev64(auVar43,4);
  auVar37 = auVar37 ^ (auVar37 ^ auVar43) & auVar17;
  auVar19 = NEON_ext(auVar34,auVar34,8,1);
  auVar21 = NEON_ext(auVar37,auVar37,8,1);
  uVar13 = auVar21._0_8_ ^
           (auVar21._0_8_ ^ auVar37._0_8_) & (ulong)-(uint)(auVar19._0_4_ <= auVar34._0_4_);
  uVar8 = uVar13 & 0xffffffff;
  uVar18 = *(undefined8 *)(*pauVar7 + (long)(int)uVar13 * 0xc);
  uVar16 = *(undefined8 *)((long)(*pauVar7 + (long)(int)uVar13 * 0xc) + 8);
LAB_03076658:
  param_3[1] = uVar16;
  *param_3 = uVar18;
  *(uint *)((long)param_3 + 0xc) = (uint)uVar8 | 0x3f000000;
  return;
}


