/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c21e90; name: FUN_02c21e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c21e90(long param_1,uint param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 extraout_d0;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_var;
  float fVar14;
  float fVar22;
  float fVar24;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar15;
  undefined1 auVar20 [16];
  int iVar23;
  int iVar25;
  int iVar26;
  undefined1 auVar21 [16];
  float fVar27;
  float fVar36;
  undefined1 auVar28 [12];
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar37;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 0x1f8) == 4) {
    fVar4 = *param_3;
    fVar11 = param_3[1];
    fVar12 = param_3[2];
    fVar13 = param_3[3];
    fVar14 = param_3[4];
    fVar22 = param_3[5];
    fVar24 = param_3[6];
    auVar29._0_4_ = fVar4 * fVar4;
    auVar29._4_4_ = fVar11 * fVar11;
    auVar29._8_4_ = fVar12 * fVar12;
    auVar29._12_4_ = fVar13 * fVar13;
    auVar38 = NEON_ext(auVar29,auVar29,8,1);
    auVar39._0_4_ = fVar14 * fVar14;
    auVar39._4_4_ = fVar22 * fVar22;
    auVar39._8_4_ = fVar24 * fVar24;
    auVar39._12_4_ = param_3[7] * param_3[7];
    auVar59 = NEON_ext(auVar39,auVar39,8,1);
    fVar55 = SQRT(auVar59._0_4_ + auVar39._0_4_ + auVar59._4_4_ + auVar39._4_4_);
    fVar27 = param_3[8];
    fVar35 = param_3[9];
    fVar36 = param_3[10];
    local_40 = *(undefined8 *)(param_3 + 0xc);
    fVar61 = fVar27 * fVar27;
    fVar62 = fVar35 * fVar35;
    fVar64 = param_3[0xb] * param_3[0xb];
    auVar59._4_4_ = fVar62;
    auVar59._0_4_ = fVar61;
    auVar59._8_4_ = fVar36 * fVar36;
    auVar59._12_4_ = fVar64;
    auVar41._4_4_ = fVar62;
    auVar41._0_4_ = fVar61;
    auVar41._8_4_ = fVar36 * fVar36;
    auVar41._12_4_ = fVar64;
    auVar59 = NEON_ext(auVar59,auVar41,8,1);
    fVar64 = SQRT(auVar38._0_4_ + auVar29._0_4_ + auVar38._4_4_ + auVar29._4_4_);
    fVar62 = SQRT(auVar59._0_4_ + fVar61 + auVar59._4_4_ + fVar62);
    uStack_58 = (ulong)(uint)fVar62;
    fVar61 = 1.0 / fVar64;
    fVar4 = fVar4 * fVar61;
    fVar11 = fVar11 * fVar61;
    fVar12 = fVar12 * fVar61;
    fVar13 = fVar13 * fVar61;
    fVar61 = 1.0 / fVar55;
    fVar14 = fVar14 * fVar61;
    fVar22 = fVar22 * fVar61;
    fVar24 = fVar24 * fVar61;
    fVar62 = 1.0 / fVar62;
    fVar27 = fVar27 * fVar62;
    fVar35 = fVar35 * fVar62;
    fVar36 = fVar36 * fVar62;
    bVar37 = (byte)_DAT_038897c0;
    bVar44 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar45 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar46 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar4 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & bVar46,
                            CONCAT12((byte)((uint)fVar4 >> 0x10) & bVar45,
                                     CONCAT11((byte)((uint)fVar4 >> 8) & bVar44,
                                              SUB41(fVar4,0) & bVar37)));
    bVar47 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar48 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar49 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar50 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar6._0_8_ = CONCAT17((byte)((uint)fVar11 >> 0x18) & bVar50,
                            CONCAT16((byte)((uint)fVar11 >> 0x10) & bVar49,
                                     CONCAT15((byte)((uint)fVar11 >> 8) & bVar48,
                                              CONCAT14(SUB41(fVar11,0) & bVar47,fVar4))));
    bVar51 = (byte)_UNK_038897c8;
    auVar6[8] = SUB41(fVar12,0) & bVar51;
    bVar52 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar6[9] = (byte)((uint)fVar12 >> 8) & bVar52;
    bVar53 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar6[10] = (byte)((uint)fVar12 >> 0x10) & bVar53;
    bVar54 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar6[0xb] = (byte)((uint)fVar12 >> 0x18) & bVar54;
    auVar6[0xc] = SUB41(fVar13,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar6[0xd] = (byte)((uint)fVar13 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar6[0xe] = (byte)((uint)fVar13 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar6[0xf] = (byte)((uint)fVar13 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    fVar11 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & bVar46,
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & bVar45,
                                      CONCAT11((byte)((uint)fVar14 >> 8) & bVar44,
                                               SUB41(fVar14,0) & bVar37)));
    auVar16._0_8_ =
         CONCAT17((byte)((uint)fVar22 >> 0x18) & bVar50,
                  CONCAT16((byte)((uint)fVar22 >> 0x10) & bVar49,
                           CONCAT15((byte)((uint)fVar22 >> 8) & bVar48,
                                    CONCAT14(SUB41(fVar22,0) & bVar47,fVar11))));
    auVar16[8] = SUB41(fVar24,0) & bVar51;
    auVar16[9] = (byte)((uint)fVar24 >> 8) & bVar52;
    auVar16[10] = (byte)((uint)fVar24 >> 0x10) & bVar53;
    auVar16[0xb] = (byte)((uint)fVar24 >> 0x18) & bVar54;
    auVar28._0_8_ =
         CONCAT17((byte)((uint)fVar35 >> 0x18) & bVar50,
                  CONCAT16((byte)((uint)fVar35 >> 0x10) & bVar49,
                           CONCAT15((byte)((uint)fVar35 >> 8) & bVar48,
                                    CONCAT14(SUB41(fVar35,0) & bVar47,
                                             CONCAT13((byte)((uint)fVar27 >> 0x18) & bVar46,
                                                      CONCAT12((byte)((uint)fVar27 >> 0x10) & bVar45
                                                               ,CONCAT11((byte)((uint)fVar27 >> 8) &
                                                                         bVar44,SUB41(fVar27,0) &
                                                                                bVar37)))))));
    auVar28[8] = SUB41(fVar36,0) & bVar51;
    auVar28[9] = (byte)((uint)fVar36 >> 8) & bVar52;
    auVar28[10] = (byte)((uint)fVar36 >> 0x10) & bVar53;
    auVar28[0xb] = (byte)((uint)fVar36 >> 0x18) & bVar54;
    fVar12 = (float)((ulong)auVar16._0_8_ >> 0x20);
    fVar13 = auVar28._8_4_;
    auVar59 = NEON_fmov(0x3f800000,4);
    fVar14 = (float)_DAT_03889820 * fVar4 + (float)_DAT_0388a450 * fVar12 +
             (float)_DAT_03889eb0 * fVar13 + auVar59._0_4_;
    fVar22 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar4 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar12 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar13 + auVar59._4_4_;
    fVar24 = (float)_UNK_03889828 * fVar4 + (float)_UNK_0388a458 * fVar12 +
             (float)_UNK_03889eb8 * fVar13 + auVar59._8_4_;
    fVar12 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar4 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar12 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar13 + auVar59._12_4_;
    uVar56 = NEON_ext(auVar6._0_8_,auVar28._0_8_,4,1);
    auVar59 = NEON_ext(auVar6,auVar6,8,1);
    uStack_38 = *(ulong *)(param_3 + 0xe) & 0xffffffff;
    fVar4 = (float)((ulong)auVar28._0_8_ >> 0x20);
    auVar17._0_4_ = (float)uVar56 + fVar11;
    fVar13 = (float)((ulong)uVar56 >> 0x20);
    auVar17._4_4_ = fVar13 + auVar59._0_4_;
    auVar17._8_4_ = auVar16._8_4_ + fVar4;
    auVar17._12_4_ = 0;
    auVar30._0_4_ = (float)uVar56 - fVar11;
    auVar30._4_4_ = fVar13 - auVar59._0_4_;
    auVar30._8_4_ = auVar16._8_4_ - fVar4;
    auVar30._12_4_ = 0;
    uVar5 = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a888);
    uVar63 = (undefined4)((ulong)uVar5 >> 0x20);
    uVar57 = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a710);
    uVar65 = (undefined4)((ulong)uVar57 >> 0x20);
    uVar58 = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a758);
    auVar60._0_8_ = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a880);
    uVar56 = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a640);
    auVar7._0_4_ = (undefined4)uVar5;
    auVar7._4_4_ = fVar22;
    auVar7._8_8_ = uVar58;
    uVar5 = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a700);
    uVar58 = a64_TBL(ZEXT816(0),auVar17,auVar30,DAT_0388a590);
    auVar31._4_4_ = fVar22;
    auVar31._0_4_ = fVar22;
    auVar31._8_4_ = fVar22;
    auVar31._12_4_ = fVar22;
    auVar60._12_4_ = (undefined4)((ulong)uVar56 >> 0x20);
    auVar60._8_4_ = fVar24;
    auVar69._4_4_ = fVar14;
    auVar69._0_4_ = fVar14;
    auVar69._8_4_ = fVar14;
    auVar69._12_4_ = fVar14;
    auVar66._0_8_ = CONCAT44(-(uint)(fVar14 <= fVar22),-(uint)(fVar14 <= fVar22));
    auVar66._8_4_ = -(uint)(fVar14 <= fVar22);
    auVar66._12_4_ = -(uint)(fVar14 <= fVar22);
    auVar68._8_8_ = auVar66._8_8_;
    auVar68._0_8_ = auVar66._0_8_;
    auVar38._4_4_ = uVar63;
    auVar38._0_4_ = fVar14;
    auVar38._8_4_ = (int)uVar57;
    auVar38._12_4_ = uVar65;
    auVar67._4_4_ = uVar63;
    auVar67._0_4_ = fVar14;
    auVar67._8_4_ = (int)uVar57;
    auVar67._12_4_ = uVar65;
    auVar67 = auVar67 ^ (auVar38 ^ auVar7) & auVar66;
    auVar8._4_4_ = fVar24;
    auVar8._0_4_ = fVar24;
    auVar8._8_4_ = fVar24;
    auVar8._12_4_ = fVar24;
    auVar69 = auVar69 ^ (auVar69 ^ auVar31) & auVar68;
    auVar18._0_8_ = CONCAT44(-(uint)(auVar69._4_4_ <= fVar24),-(uint)(auVar69._0_4_ <= fVar24));
    auVar18._8_4_ = -(uint)(auVar69._8_4_ <= fVar24);
    auVar18._12_4_ = -(uint)(auVar69._12_4_ <= fVar24);
    auVar32._8_8_ = auVar18._8_8_;
    auVar32._0_8_ = auVar18._0_8_;
    auVar67 = auVar67 ^ (auVar67 ^ auVar60) & auVar18;
    auVar69 = auVar69 ^ (auVar69 ^ auVar8) & auVar32;
    auVar9._0_4_ = -(uint)(auVar69._0_4_ <= fVar12);
    auVar9._4_4_ = -(uint)(auVar69._4_4_ <= fVar12);
    auVar9._8_4_ = -(uint)(auVar69._8_4_ <= fVar12);
    auVar9._12_4_ = -(uint)(auVar69._12_4_ <= fVar12);
    auVar2._8_4_ = (int)uVar58;
    auVar2._0_8_ = uVar5;
    auVar2._12_4_ = fVar12;
    auVar67 = auVar67 ^ (auVar67 ^ auVar2) & auVar9;
    fVar12 = auVar67._0_4_;
    auVar19._0_4_ = fVar12 * fVar12;
    fVar13 = auVar67._4_4_;
    auVar19._4_4_ = fVar13 * fVar13;
    fVar14 = auVar67._8_4_;
    auVar19._8_4_ = fVar14 * fVar14;
    fVar22 = auVar67._12_4_;
    auVar19._12_4_ = fVar22 * fVar22;
    auVar59 = NEON_ext(auVar19,auVar19,8,1);
    fVar11 = auVar59._0_4_ + auVar19._0_4_;
    fVar24 = auVar59._4_4_ + auVar19._4_4_;
    fVar4 = fVar11 + fVar24;
    fVar11 = fVar11 + fVar24;
    auVar20._8_8_ = CONCAT44(fVar11,fVar4);
    auVar20._0_8_ = CONCAT44(fVar11,fVar4);
    auVar59 = NEON_frsqrte(auVar20,4);
    auVar40._0_4_ = auVar59._0_4_ * fVar4;
    auVar40._4_4_ = auVar59._4_4_ * fVar11;
    auVar40._8_4_ = auVar59._8_4_ * fVar4;
    auVar40._12_4_ = auVar59._12_4_ * fVar11;
    auVar41 = NEON_frsqrts(auVar59,auVar40,4);
    auVar33._0_4_ = auVar59._0_4_ * auVar41._0_4_;
    auVar33._4_4_ = auVar59._4_4_ * auVar41._4_4_;
    auVar33._8_4_ = auVar59._8_4_ * auVar41._8_4_;
    auVar33._12_4_ = auVar59._12_4_ * auVar41._12_4_;
    auVar42._0_4_ = fVar4 * auVar33._0_4_;
    auVar42._4_4_ = fVar11 * auVar33._4_4_;
    auVar42._8_4_ = fVar4 * auVar33._8_4_;
    auVar42._12_4_ = fVar11 * auVar33._12_4_;
    iVar15 = -(uint)(fVar4 == 0.0);
    iVar23 = -(uint)(fVar11 == 0.0);
    iVar25 = -(uint)(fVar4 == 0.0);
    iVar26 = -(uint)(fVar11 == 0.0);
    auVar21[0] = ~(byte)iVar15;
    auVar21[1] = ~(byte)((uint)iVar15 >> 8);
    auVar21[2] = ~(byte)((uint)iVar15 >> 0x10);
    auVar21[3] = ~(byte)((uint)iVar15 >> 0x18);
    auVar21[4] = ~(byte)iVar23;
    auVar21[5] = ~(byte)((uint)iVar23 >> 8);
    auVar21[6] = ~(byte)((uint)iVar23 >> 0x10);
    auVar21[7] = ~(byte)((uint)iVar23 >> 0x18);
    auVar21[8] = ~(byte)iVar25;
    auVar21[9] = ~(byte)((uint)iVar25 >> 8);
    auVar21[10] = ~(byte)((uint)iVar25 >> 0x10);
    auVar21[0xb] = ~(byte)((uint)iVar25 >> 0x18);
    auVar21[0xc] = ~(byte)iVar26;
    auVar21[0xd] = ~(byte)((uint)iVar26 >> 8);
    auVar21[0xe] = ~(byte)((uint)iVar26 >> 0x10);
    auVar21[0xf] = ~(byte)((uint)iVar26 >> 0x18);
    auVar59 = NEON_frsqrts(auVar33,auVar42,4);
    auVar34._0_4_ = auVar33._0_4_ * auVar59._0_4_;
    auVar34._4_4_ = auVar33._4_4_ * auVar59._4_4_;
    auVar34._8_4_ = auVar33._8_4_ * auVar59._8_4_;
    auVar34._12_4_ = auVar33._12_4_ * auVar59._12_4_;
    fVar12 = auVar34._0_4_ * fVar12;
    fVar13 = auVar34._4_4_ * fVar13;
    fVar14 = auVar34._8_4_ * fVar14;
    fVar22 = auVar34._12_4_ * fVar22;
    auVar10._0_8_ =
         CONCAT17((byte)((uint)fVar13 >> 0x18) & auVar21[7],
                  CONCAT16((byte)((uint)fVar13 >> 0x10) & auVar21[6],
                           CONCAT15((byte)((uint)fVar13 >> 8) & auVar21[5],
                                    CONCAT14(SUB41(fVar13,0) & auVar21[4],
                                             CONCAT13((byte)((uint)fVar12 >> 0x18) & auVar21[3],
                                                      CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                                               auVar21[2],
                                                               CONCAT11((byte)((uint)fVar12 >> 8) &
                                                                        auVar21[1],
                                                                        SUB41(fVar12,0) & auVar21[0]
                                                                       )))))));
    auVar10[8] = SUB41(fVar14,0) & auVar21[8];
    auVar10[9] = (byte)((uint)fVar14 >> 8) & auVar21[9];
    auVar10[10] = (byte)((uint)fVar14 >> 0x10) & auVar21[10];
    auVar10[0xb] = (byte)((uint)fVar14 >> 0x18) & auVar21[0xb];
    auVar10[0xc] = SUB41(fVar22,0) & auVar21[0xc];
    auVar10[0xd] = (byte)((uint)fVar22 >> 8) & auVar21[0xd];
    auVar10[0xe] = (byte)((uint)fVar22 >> 0x10) & auVar21[0xe];
    auVar10[0xf] = (byte)((uint)fVar22 >> 0x18) & auVar21[0xf];
    local_60 = CONCAT44(fVar55,fVar64);
    uStack_48 = auVar10._8_8_;
    lVar3 = *(long *)(param_1 + 0x200);
    uStack_50 = auVar10._0_8_;
    FUN_02bcb330(&local_60);
    lVar3 = *(long *)(lVar3 + 0x60);
    if ((ulong)param_2 < (ulong)(*(long *)(lVar3 + 0xb0) - *(long *)(lVar3 + 0xa8) >> 6)) {
      auVar43._0_12_ = auVar59._0_12_;
      auVar43._12_4_ = 0x3f800000;
      FUN_02bc0574(lVar3);
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0xa8) + (ulong)param_2 * 0x40);
      puVar1[1] = extraout_var;
      *puVar1 = extraout_d0;
      puVar1[3] = auVar21._8_8_;
      puVar1[2] = auVar21._0_8_;
      puVar1[5] = auVar34._8_8_;
      puVar1[4] = auVar34._0_8_;
      puVar1[7] = auVar43._8_8_;
      puVar1[6] = auVar59._0_8_;
    }
  }
  return;
}


