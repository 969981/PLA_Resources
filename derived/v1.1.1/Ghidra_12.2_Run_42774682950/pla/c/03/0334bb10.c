/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334bb10; name: FUN_0334bb10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0334bb10(float *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16])

{
  long lVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar13;
  undefined1 auVar10 [16];
  int iVar14;
  uint uVar15;
  int iVar19;
  int iVar20;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar21;
  int iVar23;
  int iVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  
  fVar40 = (float)*(undefined8 *)(*param_2 + 8);
  fVar41 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar38 = (float)*(undefined8 *)*param_2;
  fVar39 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  auVar42 = *param_3;
  auVar45 = *param_4;
  auVar3._12_4_ = fVar41;
  auVar3._0_12_ = *param_2;
  auVar3 = NEON_fmin(auVar3,auVar42,4);
  auVar9._12_4_ = fVar41;
  auVar9._0_12_ = *param_2;
  auVar9 = NEON_fmax(auVar9,auVar42,4);
  auVar3 = NEON_fmin(auVar3,auVar45,4);
  auVar9 = NEON_fmax(auVar9,auVar45,4);
  fVar2 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[4];
  fVar8 = param_1[5];
  fVar11 = param_1[6];
  iVar14 = -(uint)(auVar3._0_4_ <= fVar7);
  iVar19 = -(uint)(auVar3._4_4_ <= fVar8);
  iVar20 = -(uint)(auVar3._8_4_ <= fVar11);
  iVar21 = -(uint)(fVar2 <= auVar9._0_4_);
  iVar23 = -(uint)(fVar5 <= auVar9._4_4_);
  iVar24 = -(uint)(fVar6 <= auVar9._8_4_);
  uVar15 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                    CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                             CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar21 >> 8),
                                      (byte)iVar14 & (byte)iVar21)));
  auVar16._0_8_ =
       CONCAT17((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                CONCAT16((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                         CONCAT15((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar23 >> 8),
                                  CONCAT14((byte)iVar19 & (byte)iVar23,uVar15))));
  auVar16[8] = (byte)iVar20 & (byte)iVar24;
  auVar16[9] = (byte)((uint)iVar20 >> 8) & (byte)((uint)iVar24 >> 8);
  auVar16[10] = (byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar24 >> 0x10);
  auVar16[0xb] = (byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar24 >> 0x18);
  if ((uVar15 & (uint)((ulong)auVar16._0_8_ >> 0x20) & auVar16._8_4_) != 0) {
    fVar30 = (fVar2 + fVar7) * 0.5;
    fVar32 = (fVar5 + fVar8) * 0.5;
    fVar34 = (fVar6 + fVar11) * 0.5;
    fVar36 = (param_1[3] + param_1[7]) * 0.5;
    fVar25 = auVar42._0_4_;
    auVar17._0_4_ = fVar25 - fVar38;
    fVar27 = auVar42._4_4_;
    auVar17._4_4_ = fVar27 - fVar39;
    fVar28 = auVar42._8_4_;
    auVar17._8_4_ = fVar28 - fVar40;
    fVar29 = auVar42._12_4_;
    auVar17._12_4_ = fVar29 - fVar41;
    lVar1 = 0;
    fVar31 = auVar45._0_4_;
    auVar22._0_4_ = fVar31 - fVar25;
    fVar33 = auVar45._4_4_;
    auVar22._4_4_ = fVar33 - fVar27;
    fVar35 = auVar45._8_4_;
    auVar22._8_4_ = fVar35 - fVar28;
    fVar37 = auVar45._12_4_;
    auVar22._12_4_ = fVar37 - fVar29;
    auVar9 = NEON_ext(auVar22,auVar22,4,1);
    fVar2 = (fVar7 - fVar2) * 0.5;
    fVar5 = (fVar8 - fVar5) * 0.5;
    fVar6 = (fVar11 - fVar6) * 0.5;
    fVar7 = (param_1[7] - param_1[3]) * 0.5;
    fVar8 = fVar38 - fVar30;
    fVar11 = fVar39 - fVar32;
    fVar12 = fVar40 - fVar34;
    fVar13 = fVar41 - fVar36;
    fVar38 = fVar38 - fVar31;
    fVar39 = fVar39 - fVar33;
    fVar40 = fVar40 - fVar35;
    fVar41 = fVar41 - fVar37;
    fVar25 = fVar25 - fVar30;
    fVar27 = fVar27 - fVar32;
    fVar28 = fVar28 - fVar34;
    fVar29 = fVar29 - fVar36;
    auVar3 = NEON_ext(auVar17,auVar17,4,1);
    fVar31 = fVar31 - fVar30;
    fVar33 = fVar33 - fVar32;
    fVar35 = fVar35 - fVar34;
    fVar37 = fVar37 - fVar36;
    auVar42._4_4_ = fVar39;
    auVar42._0_4_ = fVar38;
    auVar42._8_4_ = fVar40;
    auVar42._12_4_ = fVar41;
    auVar45._4_4_ = fVar39;
    auVar45._0_4_ = fVar38;
    auVar45._8_4_ = fVar40;
    auVar45._12_4_ = fVar41;
    auVar42 = NEON_ext(auVar42,auVar45,4,1);
    while( true ) {
      auVar45 = *(undefined1 (*) [16])((long)&DAT_03aae430 + lVar1);
      auVar44 = NEON_ext(auVar45,auVar45,8,1);
      uVar53 = NEON_ext(auVar45._0_8_,auVar44._0_8_,4,1);
      fVar30 = auVar45._0_4_;
      fVar32 = auVar45._4_4_;
      fVar34 = auVar45._8_4_;
      fVar36 = auVar45._12_4_;
      fVar49 = (float)uVar53;
      fVar52 = (float)((ulong)uVar53 >> 0x20);
      auVar68._0_4_ = auVar3._0_4_ * fVar30 - auVar17._0_4_ * fVar49;
      auVar68._4_4_ = auVar3._4_4_ * fVar32 - auVar17._4_4_ * fVar52;
      auVar68._8_4_ = auVar17._0_4_ * fVar34 - auVar17._8_4_ * fVar30;
      auVar68._12_4_ = auVar17._4_4_ * fVar36 - auVar17._12_4_ * fVar32;
      auVar45 = NEON_ext(auVar68,auVar68,4,1);
      auVar57._0_4_ = auVar9._0_4_ * fVar30 - auVar22._0_4_ * fVar49;
      auVar57._4_4_ = auVar9._4_4_ * fVar32 - auVar22._4_4_ * fVar52;
      auVar57._8_4_ = auVar22._0_4_ * fVar34 - auVar22._8_4_ * fVar30;
      auVar57._12_4_ = auVar22._4_4_ * fVar36 - auVar22._12_4_ * fVar32;
      auVar44 = NEON_ext(auVar57,auVar57,4,1);
      auVar54._0_4_ = auVar42._0_4_ * fVar30 - fVar38 * fVar49;
      auVar54._4_4_ = auVar42._4_4_ * fVar32 - fVar39 * fVar52;
      auVar54._8_4_ = fVar38 * fVar34 - fVar40 * fVar30;
      auVar54._12_4_ = fVar39 * fVar36 - fVar41 * fVar32;
      auVar50 = NEON_ext(auVar54,auVar54,4,1);
      fVar30 = auVar45._0_4_;
      auVar55._0_4_ = fVar8 * fVar30;
      fVar32 = auVar45._4_4_;
      auVar55._4_4_ = fVar11 * fVar32;
      auVar55._8_4_ = fVar12 * auVar68._0_4_;
      auVar55._12_4_ = fVar13 * auVar68._4_4_;
      fVar34 = auVar44._0_4_;
      auVar58._0_4_ = fVar8 * fVar34;
      fVar36 = auVar44._4_4_;
      auVar58._4_4_ = fVar11 * fVar36;
      auVar58._8_4_ = fVar12 * auVar57._0_4_;
      auVar58._12_4_ = fVar13 * auVar57._4_4_;
      fVar49 = auVar50._0_4_;
      auVar61._0_4_ = fVar8 * fVar49;
      fVar52 = auVar50._4_4_;
      auVar61._4_4_ = fVar11 * fVar52;
      auVar61._8_4_ = fVar12 * auVar54._0_4_;
      auVar61._12_4_ = fVar13 * auVar54._4_4_;
      auVar45 = NEON_ext(auVar55,auVar55,8,1);
      auVar44 = NEON_ext(auVar58,auVar58,8,1);
      auVar50 = NEON_ext(auVar61,auVar61,8,1);
      auVar56._0_4_ = auVar45._0_4_ + auVar55._0_4_ + auVar55._4_4_;
      auVar56._4_4_ = auVar44._0_4_ + auVar58._0_4_ + auVar58._4_4_;
      auVar65._0_4_ = fVar25 * fVar49;
      auVar65._4_4_ = fVar27 * fVar52;
      auVar65._8_4_ = fVar28 * auVar54._0_4_;
      auVar65._12_4_ = fVar29 * auVar54._4_4_;
      auVar56._12_4_ = auVar50._4_4_ + auVar61._4_4_ + auVar50._4_4_;
      auVar56._8_4_ = auVar50._0_4_ + auVar61._0_4_ + auVar61._4_4_;
      auVar62._0_4_ = fVar25 * fVar34;
      auVar62._4_4_ = fVar27 * fVar36;
      auVar62._8_4_ = fVar28 * auVar57._0_4_;
      auVar62._12_4_ = fVar29 * auVar57._4_4_;
      auVar59._0_4_ = fVar25 * fVar30;
      auVar59._4_4_ = fVar27 * fVar32;
      auVar59._8_4_ = fVar28 * auVar68._0_4_;
      auVar59._12_4_ = fVar29 * auVar68._4_4_;
      auVar45 = NEON_ext(auVar59,auVar59,8,1);
      auVar44 = NEON_ext(auVar62,auVar62,8,1);
      auVar50 = NEON_ext(auVar65,auVar65,8,1);
      auVar60._0_4_ = auVar45._0_4_ + auVar59._0_4_ + auVar59._4_4_;
      auVar60._4_4_ = auVar44._0_4_ + auVar62._0_4_ + auVar62._4_4_;
      fVar69 = fVar31 * fVar49;
      fVar70 = fVar33 * fVar52;
      auVar51._0_4_ = fVar2 * ABS(fVar49);
      auVar51._4_4_ = fVar5 * ABS(fVar52);
      auVar51._8_4_ = fVar6 * ABS(auVar54._0_4_);
      auVar51._12_4_ = fVar7 * ABS(auVar54._4_4_);
      auVar60._12_4_ = auVar50._4_4_ + auVar65._4_4_ + auVar50._4_4_;
      auVar60._8_4_ = auVar50._0_4_ + auVar65._0_4_ + auVar65._4_4_;
      auVar66._0_4_ = fVar31 * fVar34;
      auVar66._4_4_ = fVar33 * fVar36;
      auVar66._8_4_ = fVar35 * auVar57._0_4_;
      auVar66._12_4_ = fVar37 * auVar57._4_4_;
      auVar47._0_4_ = fVar2 * ABS(fVar34);
      auVar47._4_4_ = fVar5 * ABS(fVar36);
      auVar47._8_4_ = fVar6 * ABS(auVar57._0_4_);
      auVar47._12_4_ = fVar7 * ABS(auVar57._4_4_);
      auVar63._0_4_ = fVar31 * fVar30;
      auVar63._4_4_ = fVar33 * fVar32;
      auVar63._8_4_ = fVar35 * auVar68._0_4_;
      auVar63._12_4_ = fVar37 * auVar68._4_4_;
      auVar46._0_4_ = fVar2 * ABS(fVar30);
      auVar46._4_4_ = fVar5 * ABS(fVar32);
      auVar46._8_4_ = fVar6 * ABS(auVar68._0_4_);
      auVar46._12_4_ = fVar7 * ABS(auVar68._4_4_);
      auVar45 = NEON_ext(auVar63,auVar63,8,1);
      auVar67 = NEON_ext(auVar66,auVar66,8,1);
      auVar44._4_4_ = fVar70;
      auVar44._0_4_ = fVar69;
      auVar44._8_4_ = fVar35 * auVar54._0_4_;
      auVar44._12_4_ = fVar37 * auVar54._4_4_;
      auVar50._4_4_ = fVar70;
      auVar50._0_4_ = fVar69;
      auVar50._8_4_ = fVar35 * auVar54._0_4_;
      auVar50._12_4_ = fVar37 * auVar54._4_4_;
      auVar44 = NEON_ext(auVar44,auVar50,8,1);
      auVar64._0_4_ = auVar45._0_4_ + auVar63._0_4_ + auVar63._4_4_;
      auVar64._4_4_ = auVar67._0_4_ + auVar66._0_4_ + auVar66._4_4_;
      auVar64._12_4_ = auVar44._4_4_ + fVar70 + auVar44._4_4_;
      auVar64._8_4_ = auVar44._0_4_ + fVar69 + fVar70;
      auVar44 = NEON_fmin(auVar56,auVar60,4);
      auVar45 = NEON_fmax(auVar56,auVar60,4);
      auVar68 = NEON_fmin(auVar44,auVar64,4);
      auVar67 = NEON_fmax(auVar45,auVar64,4);
      auVar45 = NEON_ext(auVar46,auVar46,8,1);
      auVar44 = NEON_ext(auVar47,auVar47,8,1);
      auVar50 = NEON_ext(auVar51,auVar51,8,1);
      auVar48._0_4_ = -auVar67._0_4_;
      auVar48._4_4_ = -auVar67._4_4_;
      auVar48._8_4_ = -auVar67._8_4_;
      auVar48._12_4_ = -auVar67._12_4_;
      auVar67 = NEON_fmax(auVar48,auVar68,4);
      iVar14 = -(uint)(auVar44._0_4_ + auVar47._0_4_ + auVar47._4_4_ < auVar67._4_4_);
      iVar19 = -(uint)(auVar50._0_4_ + auVar51._0_4_ + auVar51._4_4_ < auVar67._8_4_);
      iVar20 = -(uint)(auVar50._4_4_ + auVar51._4_4_ + auVar50._4_4_ < auVar67._12_4_);
      uVar15 = (uint)(byte)(-(auVar45._0_4_ + auVar46._0_4_ + auVar46._4_4_ < auVar67._0_4_) &
                           (byte)_DAT_03889700);
      auVar43._0_8_ =
           CONCAT17((byte)((uint)iVar14 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                    (uint7)CONCAT14((byte)iVar14 & (byte)((ulong)_DAT_03889700 >> 0x20),uVar15));
      auVar43[8] = (byte)iVar19 & (byte)_UNK_03889708;
      auVar43[9] = (byte)((uint)iVar19 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
      auVar43[10] = (byte)((uint)iVar19 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
      auVar43[0xb] = (byte)((uint)iVar19 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
      auVar67[0xc] = (byte)iVar20 & (byte)((ulong)_UNK_03889708 >> 0x20);
      auVar67._0_12_ = auVar43;
      auVar67[0xd] = (byte)((uint)iVar20 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
      auVar67[0xe] = (byte)((uint)iVar20 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
      auVar67[0xf] = (byte)((uint)iVar20 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
      if ((uVar15 + (int)((ulong)auVar43._0_8_ >> 0x20) + auVar43._8_4_ + auVar67._12_4_ & 7) != 0)
      break;
      lVar1 = lVar1 + 0x10;
      if (lVar1 == 0x30) {
        auVar18._0_4_ = auVar17._0_4_ * auVar9._0_4_ - auVar3._0_4_ * auVar22._0_4_;
        auVar18._4_4_ = auVar17._4_4_ * auVar9._4_4_ - auVar3._4_4_ * auVar22._4_4_;
        auVar18._8_4_ = auVar17._8_4_ * auVar22._0_4_ - auVar17._0_4_ * auVar22._8_4_;
        auVar18._12_4_ = auVar17._12_4_ * auVar22._4_4_ - auVar17._4_4_ * auVar22._12_4_;
        auVar3 = NEON_ext(auVar18,auVar18,4,1);
        fVar27 = auVar3._0_4_;
        fVar25 = auVar3._4_4_;
        fVar38 = auVar18._0_4_ * auVar18._0_4_ + fVar27 * fVar27 + fVar25 * fVar25;
        fVar40 = auVar18._0_4_ * auVar18._0_4_ + fVar27 * fVar27 + fVar25 * fVar25;
        uVar53 = CONCAT44(fVar40,fVar38);
        uVar26 = NEON_frsqrte(uVar53,4);
        fVar39 = (float)uVar26;
        fVar41 = (float)((ulong)uVar26 >> 0x20);
        uVar26 = NEON_frsqrts(uVar53,CONCAT44(fVar41 * fVar41,fVar39 * fVar39),4);
        fVar39 = fVar39 * (float)uVar26;
        fVar41 = fVar41 * (float)((ulong)uVar26 >> 0x20);
        iVar14 = -(uint)(fVar38 <= 0.0);
        iVar19 = -(uint)(fVar40 <= 0.0);
        uVar53 = NEON_frsqrts(uVar53,CONCAT44(fVar41 * fVar41,fVar39 * fVar39),4);
        fVar39 = (float)uVar53 * fVar39;
        fVar41 = (float)((ulong)uVar53 >> 0x20) * fVar41;
        fVar38 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                 CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                          ~(byte)((uint)iVar14 >> 0x10),
                                          CONCAT11((byte)((uint)fVar39 >> 8) &
                                                   ~(byte)((uint)iVar14 >> 8),
                                                   SUB41(fVar39,0) & ~(byte)iVar14)));
        fVar39 = (float)(CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                  CONCAT16((byte)((uint)fVar41 >> 0x10) &
                                           ~(byte)((uint)iVar19 >> 0x10),
                                           CONCAT15((byte)((uint)fVar41 >> 8) &
                                                    ~(byte)((uint)iVar19 >> 8),
                                                    CONCAT14(SUB41(fVar41,0) & ~(byte)iVar19,fVar38)
                                                   ))) >> 0x20);
        fVar25 = fVar25 * fVar39;
        auVar10._0_4_ = fVar8 * fVar27 * fVar38;
        auVar10._4_4_ = fVar11 * fVar25;
        auVar10._8_4_ = fVar12 * auVar18._0_4_ * fVar38;
        auVar10._12_4_ = fVar13 * auVar18._4_4_ * fVar39;
        auVar3 = NEON_ext(auVar10,auVar10,8,1);
        fVar8 = ABS(-(auVar10._0_4_ + auVar10._4_4_ + auVar3._0_4_));
        auVar4._0_4_ = fVar2 * ABS(fVar27 * fVar38);
        auVar4._4_4_ = fVar5 * ABS(fVar25);
        auVar4._8_4_ = fVar6 * ABS(auVar18._0_4_ * fVar38);
        auVar4._12_4_ = fVar7 * fVar8;
        auVar3 = NEON_ext(auVar4,auVar4,8,1);
        return fVar8 <= auVar4._0_4_ + auVar4._4_4_ + auVar3._0_4_;
      }
    }
  }
  return false;
}


