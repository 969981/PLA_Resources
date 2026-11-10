/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01817130; name: FUN_01817130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01817130(undefined1 param_1 [16],long param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  float fVar30;
  undefined1 auVar31 [12];
  float fVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined8 uVar38;
  float fVar43;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  int iVar45;
  int iVar51;
  undefined8 uVar46;
  int iVar52;
  undefined1 auVar47 [16];
  int iVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  
  fVar37 = param_1._0_4_;
  auVar41._0_4_ = fVar37 * fVar37;
  fVar43 = param_1._4_4_;
  auVar41._4_4_ = fVar43 * fVar43;
  fVar54 = param_1._8_4_;
  auVar41._8_4_ = fVar54 * fVar54;
  fVar55 = param_1._12_4_;
  auVar41._12_4_ = fVar55 * fVar55;
  auVar40 = NEON_ext(auVar41,auVar41,8,1);
  fVar30 = auVar40._0_4_ + auVar41._0_4_;
  fVar36 = auVar40._4_4_ + auVar41._4_4_;
  fVar9 = fVar30 + fVar36;
  fVar30 = fVar30 + fVar36;
  if (fVar9 == 0.0) {
    uVar2 = *(undefined8 *)(param_2 + 0x268);
    uVar39 = *(undefined8 *)(param_2 + 0x260);
    fVar9 = (float)CONCAT13((byte)((ulong)uVar39 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                            CONCAT12((byte)((ulong)uVar39 >> 0x10) &
                                     (byte)((ulong)_DAT_038897c0 >> 0x10),
                                     CONCAT11((byte)((ulong)uVar39 >> 8) &
                                              (byte)((ulong)_DAT_038897c0 >> 8),
                                              (byte)uVar39 & (byte)_DAT_038897c0)));
    auVar31._0_8_ =
         CONCAT17((byte)((ulong)uVar39 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                  CONCAT16((byte)((ulong)uVar39 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                           CONCAT15((byte)((ulong)uVar39 >> 0x28) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar39 >> 0x20) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x20),fVar9))));
    auVar31[8] = (byte)uVar2 & (byte)_UNK_038897c8;
    auVar31[9] = (byte)((ulong)uVar2 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    auVar31[10] = (byte)((ulong)uVar2 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar31[0xb] = (byte)((ulong)uVar2 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar34[0xc] = (byte)((ulong)uVar2 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar34._0_12_ = auVar31;
    auVar34[0xd] = (byte)((ulong)uVar2 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar34[0xe] = (byte)((ulong)uVar2 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar34[0xf] = (byte)((ulong)uVar2 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    uVar38 = NEON_ext(auVar31._0_8_,auVar31._0_8_,4,1);
    uVar46 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6f0);
    uVar39 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a5e0);
    fVar55 = (float)((ulong)uVar39 >> 0x20);
    uVar58 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6d8);
    fVar56 = (float)uVar58;
    fVar57 = (float)((ulong)uVar58 >> 0x20);
    fVar37 = (float)uVar38 * (float)uVar38;
    fVar43 = (float)((ulong)uVar38 >> 0x20);
    fVar43 = fVar43 * fVar43;
    fVar36 = (float)uVar46;
    fVar44 = (float)((ulong)uVar46 >> 0x20);
    fVar54 = (float)uVar39 * (float)uVar39;
    fVar55 = fVar55 * fVar55;
    fVar59 = (float)_DAT_03888fc0 - (fVar54 + fVar54 + fVar37 + fVar37);
    fVar60 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar55 + fVar55 + fVar43 + fVar43);
    fVar61 = (float)_UNK_03888fc8 -
             (fVar56 * fVar56 + fVar56 * fVar56 + fVar36 * fVar36 + fVar36 * fVar36);
    fVar62 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
             (fVar57 * fVar57 + fVar57 * fVar57 + fVar44 * fVar44 + fVar44 * fVar44);
    uVar39 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a880);
    fVar9 = (float)uVar39 * fVar9;
    fVar30 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)auVar31._0_8_ >> 0x20);
    fVar36 = fVar36 * auVar31._8_4_;
    fVar44 = fVar44 * auVar34._12_4_;
    uVar39 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
    fVar9 = fVar9 + fVar9;
    fVar30 = fVar30 + fVar30;
    fVar36 = fVar36 + fVar36;
    fVar44 = fVar44 + fVar44;
    fVar37 = (float)((ulong)uVar2 >> 0x20);
    fVar43 = (float)uVar39 * fVar37;
    fVar54 = (float)((ulong)uVar39 >> 0x20) * fVar37;
    fVar43 = fVar43 + fVar43;
    fVar54 = fVar54 + fVar54;
    fVar55 = fVar56 * fVar37 + fVar56 * fVar37;
    fVar37 = fVar57 * fVar37 + fVar57 * fVar37;
    auVar48._0_4_ = fVar9 + fVar43;
    auVar48._4_4_ = fVar30 + fVar54;
    auVar48._8_4_ = fVar36 + fVar55;
    auVar48._12_4_ = fVar44 + fVar37;
    fVar9 = fVar9 - fVar43;
    fVar30 = fVar30 - fVar54;
    fVar36 = fVar36 - fVar55;
    fVar44 = fVar44 - fVar37;
    auVar3._4_4_ = fVar30;
    auVar3._0_4_ = fVar9;
    auVar3._8_4_ = fVar36;
    auVar3._12_4_ = fVar44;
    uVar38 = a64_TBL(ZEXT816(0),auVar48,auVar3,DAT_0388a758);
    auVar4._4_4_ = fVar30;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = fVar36;
    auVar4._12_4_ = fVar44;
    uVar39 = a64_TBL(ZEXT816(0),auVar48,auVar4,DAT_0388a720);
    auVar5._4_4_ = fVar60;
    auVar5._0_4_ = fVar59;
    auVar5._8_4_ = fVar61;
    auVar5._12_4_ = fVar62;
    auVar7._8_8_ = uVar39;
    auVar7._0_8_ = uVar38;
    uVar2 = a64_TBL(ZEXT816(0),auVar5,auVar7,DAT_0388a668);
    auVar6._4_4_ = fVar60;
    auVar6._0_4_ = fVar59;
    auVar6._8_4_ = fVar61;
    auVar6._12_4_ = fVar62;
    auVar8._8_8_ = uVar39;
    auVar8._0_8_ = uVar38;
    uVar39 = a64_TBL(ZEXT816(0),auVar6,auVar8,DAT_0388a5a8);
    fVar37 = (float)uVar2;
    fVar43 = (float)((ulong)uVar2 >> 0x20);
    fVar36 = (float)uVar39;
    fVar9 = (float)((ulong)uVar39 >> 0x20);
    fVar54 = fVar36 * fVar36 + fVar37 * fVar37;
    fVar55 = fVar9 * fVar9 + fVar43 * fVar43;
    fVar30 = fVar54 + fVar55;
    fVar54 = fVar54 + fVar55;
    uVar15 = SUB41(fVar54,0);
    uVar17 = (undefined1)((uint)fVar54 >> 8);
    uVar19 = (undefined1)((uint)fVar54 >> 0x10);
    uVar21 = (undefined1)((uint)fVar54 >> 0x18);
    auVar40[4] = uVar15;
    auVar40._0_4_ = fVar30;
    auVar40[5] = uVar17;
    auVar40[6] = uVar19;
    auVar40[7] = uVar21;
    auVar40[8] = SUB41(fVar30,0);
    auVar40[9] = (char)((uint)fVar30 >> 8);
    auVar40[10] = (char)((uint)fVar30 >> 0x10);
    auVar40[0xb] = (char)((uint)fVar30 >> 0x18);
    auVar40[0xc] = uVar15;
    auVar40[0xd] = uVar17;
    auVar40[0xe] = uVar19;
    auVar40[0xf] = uVar21;
    auVar41 = NEON_frsqrte(auVar40,4);
    auVar49._0_4_ = auVar41._0_4_ * fVar30;
    auVar49._4_4_ = auVar41._4_4_ * fVar54;
    auVar49._8_4_ = auVar41._8_4_ * fVar30;
    uVar1 = (undefined2)(CONCAT15(uVar17,CONCAT14(uVar15,fVar30)) >> 0x20);
    auVar49._12_4_ = auVar41._12_4_ * (float)CONCAT13(uVar21,CONCAT12(uVar19,uVar1));
    auVar40 = NEON_frsqrts(auVar41,auVar49,4);
    auVar35._0_4_ = auVar41._0_4_ * auVar40._0_4_;
    auVar35._4_4_ = auVar41._4_4_ * auVar40._4_4_;
    auVar35._8_4_ = auVar41._8_4_ * auVar40._8_4_;
    auVar35._12_4_ = auVar41._12_4_ * auVar40._12_4_;
    auVar50._0_4_ = fVar30 * auVar35._0_4_;
    auVar50._4_4_ = fVar54 * auVar35._4_4_;
    auVar50._8_4_ = fVar30 * auVar35._8_4_;
    auVar50._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar19,uVar1)) * auVar35._12_4_;
    iVar45 = -(uint)(fVar30 == 0.0);
    iVar51 = -(uint)(fVar54 == 0.0);
    iVar52 = -(uint)(fVar30 == 0.0);
    iVar53 = -(uint)((float)CONCAT13(uVar21,CONCAT12(uVar19,uVar1)) == 0.0);
    auVar41 = NEON_frsqrts(auVar35,auVar50,4);
    fVar37 = fVar37 * auVar35._0_4_ * auVar41._0_4_;
    fVar43 = fVar43 * auVar35._4_4_ * auVar41._4_4_;
    fVar36 = fVar36 * auVar35._8_4_ * auVar41._8_4_;
    fVar9 = fVar9 * auVar35._12_4_ * auVar41._12_4_;
    bVar10 = SUB41(fVar37,0) & ~(byte)iVar45;
    bVar11 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar45 >> 8);
    bVar12 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    bVar13 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    bVar14 = SUB41(fVar43,0) & ~(byte)iVar51;
    bVar16 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar51 >> 8);
    bVar18 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    bVar20 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    bVar22 = SUB41(fVar36,0) & ~(byte)iVar52;
    bVar23 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar52 >> 8);
    bVar24 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    bVar25 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    bVar26 = SUB41(fVar9,0) & ~(byte)iVar53;
    bVar27 = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar53 >> 8);
    bVar28 = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    bVar29 = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
  }
  else {
    auVar32._8_8_ = CONCAT44(fVar30,fVar9);
    auVar32._0_8_ = CONCAT44(fVar30,fVar9);
    auVar41 = NEON_frsqrte(auVar32,4);
    auVar47._0_4_ = auVar41._0_4_ * fVar9;
    auVar47._4_4_ = auVar41._4_4_ * fVar30;
    auVar47._8_4_ = auVar41._8_4_ * fVar9;
    auVar47._12_4_ = auVar41._12_4_ * fVar30;
    auVar40 = NEON_frsqrts(auVar41,auVar47,4);
    auVar42._0_4_ = auVar41._0_4_ * auVar40._0_4_;
    auVar42._4_4_ = auVar41._4_4_ * auVar40._4_4_;
    auVar42._8_4_ = auVar41._8_4_ * auVar40._8_4_;
    auVar42._12_4_ = auVar41._12_4_ * auVar40._12_4_;
    iVar45 = -(uint)(fVar9 == 0.0);
    iVar51 = -(uint)(fVar30 == 0.0);
    iVar52 = -(uint)(fVar9 == 0.0);
    iVar53 = -(uint)(fVar30 == 0.0);
    auVar33._0_4_ = fVar9 * auVar42._0_4_;
    auVar33._4_4_ = fVar30 * auVar42._4_4_;
    auVar33._8_4_ = fVar9 * auVar42._8_4_;
    auVar33._12_4_ = fVar30 * auVar42._12_4_;
    auVar41 = NEON_frsqrts(auVar42,auVar33,4);
    fVar37 = fVar37 * auVar42._0_4_ * auVar41._0_4_;
    fVar43 = fVar43 * auVar42._4_4_ * auVar41._4_4_;
    fVar54 = fVar54 * auVar42._8_4_ * auVar41._8_4_;
    fVar55 = fVar55 * auVar42._12_4_ * auVar41._12_4_;
    bVar10 = SUB41(fVar37,0) & ~(byte)iVar45;
    bVar11 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar45 >> 8);
    bVar12 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    bVar13 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    bVar14 = SUB41(fVar43,0) & ~(byte)iVar51;
    bVar16 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar51 >> 8);
    bVar18 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
    bVar20 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
    bVar22 = SUB41(fVar54,0) & ~(byte)iVar52;
    bVar23 = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar52 >> 8);
    bVar24 = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    bVar25 = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    bVar26 = SUB41(fVar55,0) & ~(byte)iVar53;
    bVar27 = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar53 >> 8);
    bVar28 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    bVar29 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
  }
  *(ulong *)(param_2 + 0x208) =
       CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(bVar27,CONCAT14(bVar26,CONCAT13(bVar25,CONCAT12(
                                                  bVar24,CONCAT11(bVar23,bVar22)))))));
  *(ulong *)(param_2 + 0x200) =
       CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar16,CONCAT14(bVar14,CONCAT13(bVar13,CONCAT12(
                                                  bVar12,CONCAT11(bVar11,bVar10)))))));
  if (*(char *)(param_2 + 0x1f0) == '\0') {
    *(undefined1 *)(param_2 + 0x1f0) = 1;
  }
  return;
}


