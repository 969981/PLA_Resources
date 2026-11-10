/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03072af0; name: FUN_03072af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03072af0(long param_1,undefined8 *param_2,byte *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int *piVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  float fVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  float fVar54;
  int iVar55;
  float fVar56;
  int iVar57;
  int iVar61;
  int iVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  
  auVar64 = ZEXT816(0);
  piVar5 = (int *)(*(long *)(param_1 + 0x360) + 0x48);
  auVar47 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar46 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar58 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar22 = NEON_ext(auVar47,auVar47,8,1);
  auVar27 = NEON_ext(auVar46,auVar46,8,1);
  pfVar8 = (float *)((long)*piVar5 + (long)piVar5);
  fVar15 = *pfVar8;
  fVar31 = pfVar8[1];
  fVar39 = pfVar8[2];
  uVar18 = *(uint *)(param_1 + 0x1bb0);
  auVar13 = NEON_ext(auVar58,auVar58,8,1);
  auVar41._0_4_ = fVar15 * *(float *)(param_1 + 0x80);
  auVar41._4_4_ = fVar31 * *(float *)(param_1 + 0x84);
  auVar41._8_4_ = fVar39 * *(float *)(param_1 + 0x88);
  auVar41._12_4_ = pfVar8[3] * *(float *)(param_1 + 0x8c);
  pauVar6 = *(undefined1 (**) [16])(param_1 + 0x1ba8);
  uVar16 = uVar18 & 3;
  auVar34 = NEON_ext(auVar41,auVar41,8,1);
  fVar26 = auVar22._0_4_ * fVar39 + auVar47._0_4_ * fVar15 + auVar47._4_4_ * fVar31;
  fVar30 = auVar27._0_4_ * fVar39 + auVar46._0_4_ * fVar15 + auVar46._4_4_ * fVar31;
  fVar31 = auVar13._0_4_ * fVar39 + auVar58._0_4_ * fVar15 + auVar58._4_4_ * fVar31;
  fVar15 = pfVar8[3] + auVar41._0_4_ + auVar41._4_4_ + auVar34._0_4_;
  fVar39 = 0.0 - fVar26;
  fVar43 = 0.0 - fVar30;
  fVar44 = 0.0 - fVar31;
  fVar45 = 0.0 - fVar15;
  iVar61 = (int)((ulong)_DAT_03889d70 >> 0x20);
  iVar62 = (int)((ulong)_UNK_03889d78 >> 0x20);
  if (uVar16 != 2) {
    if (uVar16 == 0) {
      lVar9 = 4;
LAB_03072d98:
      auVar47 = *pauVar6;
      auVar46 = NEON_ext(auVar47,auVar47,8,1);
      auVar58 = *(undefined1 (*) [16])(*pauVar6 + 0xc);
      auVar13 = NEON_ext(auVar58,auVar58,8,1);
      auVar46._0_4_ = fVar44 * auVar46._0_4_ + fVar39 * auVar47._0_4_ + fVar43 * auVar47._4_4_;
      auVar46._4_4_ = fVar44 * auVar13._0_4_ + fVar39 * auVar58._0_4_ + fVar43 * auVar58._4_4_;
      auVar46._8_4_ =
           fVar44 * *(float *)pauVar6[2] +
           fVar39 * *(float *)(pauVar6[1] + 8) + fVar43 * *(float *)(pauVar6[1] + 0xc);
      auVar46._12_4_ =
           fVar44 * *(float *)(pauVar6[2] + 0xc) +
           fVar39 * *(float *)(pauVar6[2] + 4) + fVar43 * *(float *)(pauVar6[2] + 8);
      auVar64._8_8_ = _UNK_03889d78;
      auVar64._0_8_ = _DAT_03889d70;
      if ((int)lVar9 < (int)uVar18) goto LAB_03072dec;
      goto LAB_03072bd8;
    }
    if (uVar16 != 3) {
      auVar47 = *pauVar6;
      fVar45 = fVar39 * auVar47._0_4_;
      fVar50 = fVar43 * auVar47._4_4_;
      fVar52 = fVar44 * auVar47._8_4_;
      auVar46._0_8_ = CONCAT44(fVar45 + fVar50 + fVar52,fVar45 + fVar50 + fVar52);
      auVar46._8_8_ = auVar46._0_8_;
      lVar9 = 1;
      if (1 < (int)uVar18) goto LAB_03072dec;
      goto LAB_03072bd8;
    }
    if (uVar18 != 3) {
      lVar9 = 3;
      goto LAB_03072d98;
    }
    fVar50 = *(float *)(*pauVar6 + 8);
    auVar58._12_4_ = fVar50;
    auVar58._8_4_ = fVar50;
    auVar58._0_8_ = *(undefined8 *)*pauVar6;
    fVar56 = *(float *)(*pauVar6 + 0xc);
    fVar11 = *(float *)pauVar6[1];
    fVar40 = *(float *)(pauVar6[1] + 8);
    fVar32 = *(float *)(pauVar6[1] + 0xc);
    fVar52 = *(float *)(pauVar6[1] + 4);
    fVar54 = *(float *)pauVar6[2];
    auVar47._0_4_ = fVar39 * (float)auVar58._0_8_;
    auVar47._4_4_ = fVar43 * (float)((ulong)auVar58._0_8_ >> 0x20);
    auVar47._8_4_ = fVar44 * fVar50;
    auVar47._12_4_ = fVar45 * fVar50;
    auVar13._0_4_ = fVar39 * fVar56;
    auVar13._4_4_ = fVar43 * fVar11;
    auVar13._8_4_ = fVar44 * fVar52;
    auVar13._12_4_ = fVar45 * fVar52;
    auVar27._0_4_ = fVar39 * fVar40;
    auVar27._4_4_ = fVar43 * fVar32;
    auVar27._8_4_ = fVar44 * fVar54;
    auVar27._12_4_ = fVar45 * fVar54;
    auVar46 = NEON_ext(auVar47,auVar47,8,1);
    auVar41 = NEON_ext(auVar13,auVar13,8,1);
    auVar22 = NEON_ext(auVar27,auVar27,8,1);
    fVar39 = auVar46._0_4_ + auVar47._0_4_ + auVar47._4_4_;
    fVar43 = auVar41._0_4_ + auVar13._0_4_ + auVar13._4_4_;
    uVar33 = CONCAT44(fVar43,fVar39);
    fVar44 = auVar22._0_4_ + auVar27._0_4_ + auVar27._4_4_;
    uVar33 = NEON_fmaxp(uVar33,uVar33,4);
    uVar33 = NEON_fmax(CONCAT44(fVar44,fVar44),uVar33,4);
    pfVar8 = (float *)(*pauVar6 +
                      (long)(char)(&DAT_03aadfd0)
                                  [(-(uint)((float)((ulong)uVar33 >> 0x20) <= fVar43) & 2) +
                                   (uint)((float)uVar33 <= fVar39) |
                                   -(uint)((float)uVar33 <= fVar44) & 4] * 0xc);
    fVar39 = (float)((int)(char)(&DAT_03aadfd0)
                                [(-(uint)((float)((ulong)uVar33 >> 0x20) <= fVar43) & 2) +
                                 (uint)((float)uVar33 <= fVar39) |
                                 -(uint)((float)uVar33 <= fVar44) & 4] | 0x3f000000);
    fVar43 = *pfVar8;
    fVar44 = pfVar8[1];
    fVar45 = pfVar8[2];
LAB_0307305c:
    auVar25._0_4_ = fVar26 * auVar58._0_4_;
    auVar25._4_4_ = fVar30 * auVar58._4_4_;
    auVar25._8_4_ = fVar31 * auVar58._8_4_;
    auVar25._12_4_ = fVar15 * auVar58._12_4_;
    auVar29._0_4_ = fVar26 * fVar56;
    auVar29._4_4_ = fVar30 * fVar11;
    auVar29._8_4_ = fVar31 * fVar52;
    auVar29._12_4_ = fVar15 * fVar52;
    auVar37._0_4_ = fVar26 * fVar40;
    auVar37._4_4_ = fVar30 * fVar32;
    auVar37._8_4_ = fVar31 * fVar54;
    auVar37._12_4_ = fVar15 * fVar54;
    auVar47 = NEON_ext(auVar25,auVar25,8,1);
    auVar46 = NEON_ext(auVar29,auVar29,8,1);
    auVar58 = NEON_ext(auVar37,auVar37,8,1);
    fVar50 = auVar47._0_4_ + auVar25._0_4_ + auVar25._4_4_;
    fVar52 = auVar46._0_4_ + auVar29._0_4_ + auVar29._4_4_;
    uVar33 = CONCAT44(fVar52,fVar50);
    fVar54 = auVar58._0_4_ + auVar37._0_4_ + auVar37._4_4_;
    uVar33 = NEON_fmaxp(uVar33,uVar33,4);
    uVar33 = NEON_fmax(CONCAT44(fVar54,fVar54),uVar33,4);
    uVar7 = (ulong)(char)(&DAT_03aadfd0)
                         [(-(uint)((float)((ulong)uVar33 >> 0x20) <= fVar52) & 2) +
                          (uint)((float)uVar33 <= fVar50) | -(uint)((float)uVar33 <= fVar54) & 4];
    pfVar8 = (float *)(*pauVar6 + uVar7 * 0xc);
    fVar50 = *pfVar8;
    fVar52 = pfVar8[1];
    fVar54 = pfVar8[2];
    goto LAB_03072ca4;
  }
  auVar47 = *pauVar6;
  fVar50 = fVar39 * auVar47._0_4_;
  fVar52 = fVar43 * auVar47._4_4_;
  fVar54 = fVar44 * auVar47._8_4_;
  fVar56 = fVar45 * auVar47._12_4_;
  auVar67._0_4_ = fVar39 * *(float *)(*pauVar6 + 0xc);
  auVar67._4_4_ = fVar43 * *(float *)pauVar6[1];
  auVar67._8_4_ = fVar44 * *(float *)(pauVar6[1] + 4);
  auVar67._12_4_ = fVar45 * *(float *)(pauVar6[1] + 8);
  auVar22._4_4_ = fVar52;
  auVar22._0_4_ = fVar50;
  auVar22._8_4_ = fVar54;
  auVar22._12_4_ = fVar56;
  auVar34._4_4_ = fVar52;
  auVar34._0_4_ = fVar50;
  auVar34._8_4_ = fVar54;
  auVar34._12_4_ = fVar56;
  auVar58 = NEON_ext(auVar22,auVar34,8,1);
  auVar46 = NEON_ext(auVar67,auVar67,8,1);
  auVar46._4_4_ = auVar67._0_4_ + auVar67._4_4_ + auVar46._0_4_;
  auVar46._0_4_ = fVar50 + fVar52 + auVar58._0_4_;
  auVar46._8_8_ = 0xff800000ff800000;
  auVar64._8_8_ = _UNK_03889d78;
  auVar64._0_8_ = _DAT_03889d70;
  lVar9 = 2;
  if (2 < (int)uVar18) {
LAB_03072dec:
    iVar57 = (int)lVar9;
    pauVar10 = (undefined1 (*) [16])(pauVar6[1] + lVar9 * 0xc + 8);
    iVar51 = iVar57 + (int)_DAT_03889d70;
    iVar53 = iVar57 + iVar61;
    iVar55 = iVar57 + (int)_UNK_03889d78;
    iVar57 = iVar57 + iVar62;
    do {
      auVar58 = *(undefined1 (*) [16])(pauVar10[-2] + 8);
      lVar9 = lVar9 + 4;
      auVar13 = *(undefined1 (*) [16])(pauVar10[-1] + 4);
      auVar41 = *pauVar10;
      pauVar1 = (undefined1 (*) [12])(*pauVar10 + 0xc);
      uVar68 = (undefined4)((ulong)*(undefined8 *)(pauVar10[1] + 4) >> 0x20);
      auVar22 = NEON_ext(auVar58,auVar58,8,1);
      auVar27 = NEON_ext(auVar13,auVar13,8,1);
      auVar67 = NEON_ext(auVar41,auVar41,8,1);
      pauVar10 = pauVar10 + 3;
      auVar3._12_4_ = uVar68;
      auVar3._0_12_ = *pauVar1;
      auVar4._12_4_ = uVar68;
      auVar4._0_12_ = *pauVar1;
      auVar34 = NEON_ext(auVar3,auVar4,8,1);
      auVar66._0_4_ = fVar44 * auVar22._0_4_ + fVar39 * auVar58._0_4_ + fVar43 * auVar58._4_4_;
      auVar66._4_4_ = fVar44 * auVar27._0_4_ + fVar39 * auVar13._0_4_ + fVar43 * auVar13._4_4_;
      auVar66._8_4_ = fVar44 * auVar67._0_4_ + fVar39 * auVar41._0_4_ + fVar43 * auVar41._4_4_;
      auVar66._12_4_ =
           fVar44 * auVar34._0_4_ +
           fVar39 * (float)*(undefined8 *)*pauVar1 +
           fVar43 * (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar63._0_4_ = -(uint)(auVar46._0_4_ < auVar66._0_4_);
      auVar63._4_4_ = -(uint)(auVar46._4_4_ < auVar66._4_4_);
      auVar63._8_4_ = -(uint)(auVar46._8_4_ < auVar66._8_4_);
      auVar63._12_4_ = -(uint)(auVar46._12_4_ < auVar66._12_4_);
      auVar46 = NEON_fmax(auVar66,auVar46,4);
      auVar2._4_4_ = iVar53;
      auVar2._0_4_ = iVar51;
      auVar2._8_4_ = iVar55;
      auVar2._12_4_ = iVar57;
      auVar64 = auVar64 ^ (auVar64 ^ auVar2) & auVar63;
      iVar51 = iVar51 + 4;
      iVar53 = iVar53 + 4;
      iVar55 = iVar55 + 4;
      iVar57 = iVar57 + 4;
    } while (lVar9 < (int)uVar18);
  }
LAB_03072bd8:
  auVar58 = NEON_rev64(auVar46,4);
  auVar35._0_4_ = -(uint)(auVar58._0_4_ <= auVar46._0_4_);
  auVar35._4_4_ = -(uint)(auVar58._4_4_ <= auVar46._4_4_);
  auVar35._8_4_ = -(uint)(auVar58._8_4_ <= auVar46._8_4_);
  auVar35._12_4_ = -(uint)(auVar58._12_4_ <= auVar46._12_4_);
  auVar46 = NEON_fmax(auVar46,auVar58,4);
  auVar58 = NEON_rev64(auVar64,4);
  auVar58 = auVar58 ^ (auVar58 ^ auVar64) & auVar35;
  auVar13 = NEON_ext(auVar46,auVar46,8,1);
  auVar41 = NEON_ext(auVar58,auVar58,8,1);
  uVar20 = auVar41._0_4_ ^ (auVar41._0_4_ ^ auVar58._0_4_) & -(uint)(auVar13._0_4_ <= auVar46._0_4_)
  ;
  fVar39 = (float)(uVar20 | 0x3f000000);
  pfVar8 = (float *)(*pauVar6 + (long)(int)uVar20 * 0xc);
  fVar43 = *pfVar8;
  fVar44 = pfVar8[1];
  fVar45 = pfVar8[2];
  fVar50 = auVar47._0_4_;
  fVar52 = auVar47._4_4_;
  if (uVar16 == 2) {
    auVar23._0_4_ = fVar26 * fVar50;
    auVar23._4_4_ = fVar30 * fVar52;
    auVar23._8_4_ = fVar31 * auVar47._8_4_;
    auVar23._12_4_ = fVar15 * auVar47._12_4_;
    auVar47 = NEON_ext(auVar23,auVar23,8,1);
    auVar24._0_4_ = auVar47._0_4_ + auVar23._0_4_ + auVar23._4_4_;
    auVar42._0_4_ = fVar26 * *(float *)(*pauVar6 + 0xc);
    auVar42._4_4_ = fVar30 * *(float *)pauVar6[1];
    auVar42._8_4_ = fVar31 * *(float *)(pauVar6[1] + 4);
    auVar42._12_4_ = fVar15 * *(float *)(pauVar6[1] + 8);
    auVar47 = NEON_ext(auVar42,auVar42,8,1);
    auVar24._4_4_ = auVar42._0_4_ + auVar42._4_4_ + auVar47._0_4_;
    auVar24._8_8_ = 0xff800000ff800000;
    auVar60._8_8_ = _UNK_03889d78;
    auVar60._0_8_ = _DAT_03889d70;
    lVar9 = 2;
    if (2 < (int)uVar18) goto LAB_03072ee4;
  }
  else {
    auVar58._0_8_ = auVar47._0_8_;
    if (uVar16 == 0) {
      lVar9 = 4;
    }
    else {
      if (uVar16 != 3) {
        fVar54 = fVar31 * auVar47._8_4_;
        lVar9 = 1;
        auVar24._0_8_ =
             CONCAT44(fVar54 + fVar26 * fVar50 + fVar30 * fVar52,
                      fVar54 + fVar26 * fVar50 + fVar30 * fVar52);
        auVar60 = ZEXT816(0);
        auVar24._8_8_ = auVar24._0_8_;
        if (1 < (int)uVar18) goto LAB_03072ee4;
        goto LAB_03072c70;
      }
      if (uVar18 == 3) {
        auVar58._12_4_ = *(undefined4 *)(*pauVar6 + 8);
        auVar58._8_4_ = *(undefined4 *)(*pauVar6 + 8);
        fVar52 = *(float *)(pauVar6[1] + 4);
        fVar54 = *(float *)pauVar6[2];
        fVar56 = *(float *)(*pauVar6 + 0xc);
        fVar11 = *(float *)pauVar6[1];
        fVar40 = *(float *)(pauVar6[1] + 8);
        fVar32 = *(float *)(pauVar6[1] + 0xc);
        goto LAB_0307305c;
      }
      lVar9 = 3;
    }
    auVar46 = *(undefined1 (*) [16])(*pauVar6 + 0xc);
    auVar47 = NEON_ext(auVar47,auVar47,8,1);
    auVar58 = NEON_ext(auVar46,auVar46,8,1);
    auVar24._0_4_ = fVar31 * auVar47._0_4_ + fVar26 * fVar50 + fVar30 * fVar52;
    auVar24._4_4_ = fVar31 * auVar58._0_4_ + fVar26 * auVar46._0_4_ + fVar30 * auVar46._4_4_;
    auVar24._8_4_ =
         fVar31 * *(float *)pauVar6[2] +
         fVar26 * *(float *)(pauVar6[1] + 8) + fVar30 * *(float *)(pauVar6[1] + 0xc);
    auVar24._12_4_ =
         fVar31 * *(float *)(pauVar6[2] + 0xc) +
         fVar26 * *(float *)(pauVar6[2] + 4) + fVar30 * *(float *)(pauVar6[2] + 8);
    auVar60._8_8_ = _UNK_03889d78;
    auVar60._0_8_ = _DAT_03889d70;
    if ((int)lVar9 < (int)uVar18) {
LAB_03072ee4:
      iVar57 = (int)lVar9;
      pauVar10 = (undefined1 (*) [16])(pauVar6[1] + lVar9 * 0xc + 8);
      auVar48._0_4_ = iVar57 + (int)_DAT_03889d70;
      auVar48._4_4_ = iVar57 + iVar61;
      auVar48._8_4_ = iVar57 + (int)_UNK_03889d78;
      auVar48._12_4_ = iVar57 + iVar62;
      do {
        auVar47 = *(undefined1 (*) [16])(pauVar10[-2] + 8);
        lVar9 = lVar9 + 4;
        auVar46 = *(undefined1 (*) [16])(pauVar10[-1] + 4);
        auVar58 = *pauVar10;
        auVar13 = *(undefined1 (*) [16])(*pauVar10 + 0xc);
        auVar41 = NEON_ext(auVar47,auVar47,8,1);
        auVar22 = NEON_ext(auVar46,auVar46,8,1);
        auVar34 = NEON_ext(auVar58,auVar58,8,1);
        pauVar10 = pauVar10 + 3;
        auVar27 = NEON_ext(auVar13,auVar13,8,1);
        auVar65._0_4_ = fVar31 * auVar41._0_4_ + fVar26 * auVar47._0_4_ + fVar30 * auVar47._4_4_;
        auVar65._4_4_ = fVar31 * auVar22._0_4_ + fVar26 * auVar46._0_4_ + fVar30 * auVar46._4_4_;
        auVar65._8_4_ = fVar31 * auVar34._0_4_ + fVar26 * auVar58._0_4_ + fVar30 * auVar58._4_4_;
        auVar65._12_4_ = fVar31 * auVar27._0_4_ + fVar26 * auVar13._0_4_ + fVar30 * auVar13._4_4_;
        auVar59._0_4_ = -(uint)(auVar24._0_4_ < auVar65._0_4_);
        auVar59._4_4_ = -(uint)(auVar24._4_4_ < auVar65._4_4_);
        auVar59._8_4_ = -(uint)(auVar24._8_4_ < auVar65._8_4_);
        auVar59._12_4_ = -(uint)(auVar24._12_4_ < auVar65._12_4_);
        auVar24 = NEON_fmax(auVar65,auVar24,4);
        auVar60 = auVar60 ^ (auVar60 ^ auVar48) & auVar59;
        auVar49._0_4_ = auVar48._0_4_ + 4;
        auVar49._4_4_ = auVar48._4_4_ + 4;
        auVar49._8_4_ = auVar48._8_4_ + 4;
        auVar49._12_4_ = auVar48._12_4_ + 4;
        auVar48 = auVar49;
      } while (lVar9 < (int)uVar18);
    }
  }
LAB_03072c70:
  auVar47 = NEON_rev64(auVar24,4);
  auVar36._0_4_ = -(uint)(auVar47._0_4_ <= auVar24._0_4_);
  auVar36._4_4_ = -(uint)(auVar47._4_4_ <= auVar24._4_4_);
  auVar36._8_4_ = -(uint)(auVar47._8_4_ <= auVar24._8_4_);
  auVar36._12_4_ = -(uint)(auVar47._12_4_ <= auVar24._12_4_);
  auVar47 = NEON_fmax(auVar24,auVar47,4);
  auVar46 = NEON_rev64(auVar60,4);
  auVar46 = auVar46 ^ (auVar46 ^ auVar60) & auVar36;
  auVar58 = NEON_ext(auVar47,auVar47,8,1);
  auVar13 = NEON_ext(auVar46,auVar46,8,1);
  uVar21 = auVar13._0_8_ ^
           (auVar13._0_8_ ^ auVar46._0_8_) & (ulong)-(uint)(auVar58._0_4_ <= auVar47._0_4_);
  uVar7 = uVar21 & 0xffffffff;
  pfVar8 = (float *)(*pauVar6 + (long)(int)uVar21 * 0xc);
  fVar50 = *pfVar8;
  fVar52 = pfVar8[1];
  fVar54 = pfVar8[2];
LAB_03072ca4:
  auVar28._0_4_ = fVar26 * fVar43;
  auVar28._4_4_ = fVar30 * fVar44;
  auVar28._8_4_ = fVar31 * fVar45;
  auVar28._12_4_ = fVar15 * fVar39;
  auVar47 = NEON_ext(auVar28,auVar28,8,1);
  auVar38._0_4_ = fVar26 * fVar50;
  auVar38._4_4_ = fVar30 * fVar52;
  auVar38._8_4_ = fVar31 * fVar54;
  auVar38._12_4_ = fVar15 * (float)((uint)uVar7 | 0x3f000000);
  fVar56 = auVar47._0_4_ + fVar15;
  auVar47 = NEON_ext(auVar38,auVar38,8,1);
  fVar32 = *(float *)(*(long *)(param_1 + 0x360) + 0x20);
  fVar11 = auVar47._0_4_ + fVar15;
  uVar16 = -(uint)(auVar28._0_4_ + auVar28._4_4_ + fVar56 <
                  -(auVar38._0_4_ + auVar38._4_4_ + fVar11));
  uVar18 = -(uint)(auVar28._0_4_ + auVar28._4_4_ + fVar56 <
                  -(auVar38._0_4_ + auVar38._4_4_ + fVar11));
  fVar40 = fVar32 + *(float *)(param_2 + 3);
  fVar56 = (float)*param_2 - (float)*(undefined8 *)((long)param_2 + 0xc) * fVar40;
  fVar11 = (float)((ulong)*param_2 >> 0x20) -
           (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20) * fVar40;
  fVar40 = *(float *)(param_2 + 1) - *(float *)((long)param_2 + 0x14) * fVar40;
  bVar17 = (byte)(uVar16 >> 0x18);
  bVar19 = (byte)(uVar18 >> 0x18);
  uVar21 = CONCAT17(bVar19,(uint7)(bVar17 & 0x80) << 0x18) & 0x80ffffffffffffff;
  fVar26 = (float)CONCAT13((byte)(uVar21 >> 0x18) ^ (byte)((uint)fVar26 >> 0x18),SUB43(fVar26,0));
  auVar12._0_8_ =
       CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)((uint)fVar30 >> 0x18),
                CONCAT16((char)((uint)fVar30 >> 0x10),
                         CONCAT15((char)((uint)fVar30 >> 8),CONCAT14(SUB41(fVar30,0),fVar26))));
  auVar12[8] = SUB41(fVar31,0);
  auVar12[9] = (undefined1)((uint)fVar31 >> 8);
  auVar12[10] = (undefined1)((uint)fVar31 >> 0x10);
  auVar12[0xb] = bVar17 & 0x80 ^ (byte)((uint)fVar31 >> 0x18);
  auVar14[0xc] = SUB41(fVar15,0);
  auVar14._0_12_ = auVar12;
  auVar14[0xd] = (undefined1)((uint)fVar15 >> 8);
  auVar14[0xe] = (undefined1)((uint)fVar15 >> 0x10);
  auVar14[0xf] = bVar19 & 0x80 ^ (byte)((uint)fVar15 >> 0x18);
  fVar15 = *(float *)(*(long *)(param_1 + 0x328) + 0x20);
  *(undefined8 *)((long)param_2 + 0xc) = auVar12._0_8_;
  fVar30 = ((float)((uint)fVar43 ^ ((uint)fVar43 ^ (uint)fVar50) & uVar16) - fVar56) * fVar26;
  fVar31 = (float)((ulong)auVar12._0_8_ >> 0x20);
  fVar44 = ((float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)fVar52) & uVar18) - fVar11) * fVar31;
  fVar45 = ((float)((uint)fVar45 ^ ((uint)fVar45 ^ (uint)fVar54) & uVar16) - fVar40) * auVar12._8_4_
  ;
  auVar47 = NEON_ext(auVar14,auVar14,8,1);
  fVar43 = (fVar30 + fVar44 + fVar45) - fVar15;
  *(float *)((long)param_2 + 0x14) = auVar12._8_4_;
  *(float *)(param_2 + 3) = fVar43 - fVar32;
  *param_2 = CONCAT44(fVar11 + fVar31 * ((fVar30 + fVar44 + fVar45) - fVar15),
                      fVar56 + fVar26 * fVar43);
  *(float *)(param_2 + 1) = fVar40 + auVar47._0_4_ * fVar43;
  *param_3 = SUB41(fVar39,0) ^ (SUB41(fVar39,0) ^ (byte)uVar7) & (byte)uVar18;
  param_3[1] = 0;
  param_3[2] = 1;
  param_3[3] = 2;
  param_3[4] = 0x43;
  return;
}


