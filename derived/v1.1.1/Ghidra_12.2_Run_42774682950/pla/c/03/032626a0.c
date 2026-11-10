/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032626a0; name: FUN_032626a0
 */


void FUN_032626a0(undefined1 param_1 [16],undefined1 (*param_2) [12],undefined8 param_3,
                 long *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar22;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  uVar9 = *(ulong *)(*param_2 + 8);
  fVar42 = (float)uVar9;
  fVar43 = (float)(uVar9 >> 0x20);
  uVar8 = *(undefined8 *)*param_2;
  fVar40 = (float)uVar8;
  fVar41 = (float)((ulong)uVar8 >> 0x20);
  uVar1 = *(uint *)(param_4 + 1);
  uVar10 = (ulong)uVar1;
  auVar13 = param_1;
  if (0 < (int)uVar1) {
    auVar13 = *(undefined1 (*) [16])((undefined8 *)*param_4 + (long)(int)(uVar1 - 1) * 2);
    fVar17 = fVar40 * auVar13._0_4_;
    fVar22 = fVar41 * auVar13._4_4_;
    fVar23 = fVar42 * auVar13._8_4_;
    fVar18 = fVar23 + fVar17 + fVar22;
    fVar23 = fVar23 + fVar17 + fVar22;
    fVar17 = auVar13._0_4_ - fVar40 * fVar18;
    uVar24 = SUB41(fVar17,0);
    uVar25 = (undefined1)((uint)fVar17 >> 8);
    uVar26 = (undefined1)((uint)fVar17 >> 0x10);
    uVar27 = (undefined1)((uint)fVar17 >> 0x18);
    fVar17 = auVar13._4_4_ - fVar41 * fVar23;
    uVar28 = SUB41(fVar17,0);
    uVar29 = (undefined1)((uint)fVar17 >> 8);
    uVar30 = (undefined1)((uint)fVar17 >> 0x10);
    uVar31 = (undefined1)((uint)fVar17 >> 0x18);
    auVar14 = ZEXT816(0);
    puVar11 = (undefined8 *)*param_4;
    fVar17 = auVar13._8_4_ - fVar42 * fVar18;
    fVar18 = auVar13._12_4_ - fVar43 * fVar23;
    do {
      fVar32 = (float)*puVar11;
      fVar22 = fVar40 * fVar32;
      fVar34 = (float)((ulong)*puVar11 >> 0x20);
      fVar36 = fVar41 * fVar34;
      fVar35 = (float)puVar11[1];
      fVar38 = fVar42 * fVar35;
      fVar23 = fVar22 + fVar36 + fVar38;
      fVar38 = fVar22 + fVar36 + fVar38;
      uVar10 = uVar10 - 1;
      fVar32 = fVar32 - fVar40 * fVar23;
      fVar34 = fVar34 - fVar41 * fVar38;
      fVar35 = fVar35 - fVar42 * fVar23;
      fVar36 = (float)((ulong)puVar11[1] >> 0x20) - fVar43 * fVar38;
      fVar38 = fVar32 - (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
      fVar37 = fVar34 - (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
      fVar17 = fVar35 - fVar17;
      fVar22 = fVar38 * fVar38 + fVar37 * fVar37 + fVar17 * fVar17;
      fVar23 = fVar38 * fVar38 + fVar37 * fVar37 + fVar17 * fVar17;
      uVar39 = CONCAT44(-(uint)(auVar14._4_4_ < fVar23),-(uint)(auVar14._0_4_ < fVar22));
      auVar12._8_8_ = uVar39;
      auVar12._0_8_ = uVar39;
      uVar19 = auVar14._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ =
           uVar19 ^ (uVar19 ^ CONCAT17((char)((uint)fVar23 >> 0x18),
                                       CONCAT16((char)((uint)fVar23 >> 0x10),
                                                CONCAT15((char)((uint)fVar23 >> 8),
                                                         CONCAT14(SUB41(fVar23,0),fVar22))))) &
                    uVar39;
      uVar24 = SUB41(fVar32,0);
      uVar25 = (undefined1)((uint)fVar32 >> 8);
      uVar26 = (undefined1)((uint)fVar32 >> 0x10);
      uVar27 = (undefined1)((uint)fVar32 >> 0x18);
      uVar28 = SUB41(fVar34,0);
      uVar29 = (undefined1)((uint)fVar34 >> 8);
      uVar30 = (undefined1)((uint)fVar34 >> 0x10);
      uVar31 = (undefined1)((uint)fVar34 >> 0x18);
      auVar5._4_4_ = fVar37;
      auVar5._0_4_ = fVar38;
      auVar5._8_4_ = fVar17;
      auVar5._12_4_ = fVar36 - fVar18;
      auVar13 = auVar13 ^ (auVar13 ^ auVar5) & auVar12;
      puVar11 = puVar11 + 2;
      fVar17 = fVar35;
      fVar18 = fVar36;
    } while (uVar10 != 0);
  }
  fVar17 = auVar13._0_4_;
  fVar18 = auVar13._4_4_;
  fVar23 = auVar13._8_4_;
  fVar22 = fVar17 * fVar17 + fVar18 * fVar18 + fVar23 * fVar23;
  fVar34 = fVar17 * fVar17 + fVar18 * fVar18 + fVar23 * fVar23;
  uVar20 = CONCAT44(fVar34,fVar22);
  uVar33 = NEON_frsqrte(uVar20,4);
  fVar32 = (float)uVar33;
  fVar35 = (float)((ulong)uVar33 >> 0x20);
  uVar33 = NEON_frsqrts(uVar20,CONCAT44(fVar35 * fVar35,fVar32 * fVar32),4);
  fVar32 = fVar32 * (float)uVar33;
  fVar35 = fVar35 * (float)((ulong)uVar33 >> 0x20);
  iVar3 = -(uint)(fVar22 <= 0.0);
  iVar4 = -(uint)(fVar34 <= 0.0);
  uVar33 = NEON_frsqrts(uVar20,CONCAT44(fVar35 * fVar35,fVar32 * fVar32),4);
  fVar32 = (float)uVar33 * fVar32;
  fVar35 = (float)((ulong)uVar33 >> 0x20) * fVar35;
  fVar22 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                           CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                    CONCAT11((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                             SUB41(fVar32,0) & ~(byte)iVar3)));
  fVar17 = fVar17 * fVar22;
  fVar32 = (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                            CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                     CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                              CONCAT14(SUB41(fVar35,0) & ~(byte)iVar4,fVar22)))) >>
                  0x20);
  fVar18 = fVar18 * fVar32;
  uVar24 = SUB41(fVar18,0);
  uVar25 = (undefined1)((uint)fVar18 >> 8);
  uVar26 = (undefined1)((uint)fVar18 >> 0x10);
  uVar27 = (undefined1)((uint)fVar18 >> 0x18);
  fVar23 = fVar23 * fVar22;
  fVar32 = auVar13._12_4_ * fVar32;
  auVar6._12_4_ = fVar43;
  auVar6._0_12_ = *param_2;
  auVar7._12_4_ = fVar43;
  auVar7._0_12_ = *param_2;
  auVar14 = NEON_ext(auVar6,auVar7,4,1);
  auVar13[4] = uVar24;
  auVar13._0_4_ = fVar17;
  auVar13[5] = uVar25;
  auVar13[6] = uVar26;
  auVar13[7] = uVar27;
  auVar13._8_4_ = fVar23;
  auVar13._12_4_ = fVar32;
  auVar2[4] = uVar24;
  auVar2._0_4_ = fVar17;
  auVar2[5] = uVar25;
  auVar2[6] = uVar26;
  auVar2[7] = uVar27;
  auVar2._8_4_ = fVar23;
  auVar2._12_4_ = fVar32;
  auVar13 = NEON_ext(auVar13,auVar2,4,1);
  uStack_28 = CONCAT44(fVar32,fVar23);
  local_30 = CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,fVar17))));
  fVar22 = fVar40 * auVar13._0_4_ - auVar14._0_4_ * fVar17;
  auVar15._0_8_ = CONCAT44(fVar41 * auVar13._4_4_ - auVar14._4_4_ * fVar18,fVar22);
  auVar15._8_4_ = fVar42 * fVar17 - fVar40 * fVar23;
  auVar15._12_4_ =
       fVar43 * (float)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,fVar17))))
                       >> 0x20) - fVar41 * fVar32;
  auVar13 = NEON_ext(auVar15,auVar15,4,1);
  local_40 = auVar13._0_8_;
  uStack_38 = auVar15._0_8_;
  FUN_03261180(&local_30,&local_40,param_4,&local_50);
  fVar40 = (float)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,fVar17)))) >>
                  0x20);
  auVar16._0_8_ =
       CONCAT44(fVar40 * local_50 + auVar13._4_4_ * fStack_48,
                fVar17 * local_50 + auVar13._0_4_ * fStack_48);
  auVar16._8_4_ = fVar23 * local_50 + fVar22 * fStack_48;
  uVar28 = param_1[0];
  uVar29 = param_1[1];
  uVar30 = param_1[2];
  uVar31 = param_1[3];
  uVar33 = NEON_fmax(CONCAT44((fStack_4c - local_50) * 6.103888e-05,
                              (fStack_4c - local_50) * 6.103888e-05),0x3400000034000000,4);
  uVar21 = NEON_fmax(CONCAT44((fStack_44 - fStack_48) * 6.103888e-05,
                              (fStack_44 - fStack_48) * 6.103888e-05),0x3400000034000000,4);
  uVar24 = uVar28;
  uVar25 = uVar29;
  uVar26 = uVar30;
  uVar27 = uVar31;
  uVar20 = CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,param_1._0_4_))));
  if (param_1._0_4_ <= 0.0) {
    uVar28 = (undefined1)uVar33;
    uVar29 = (undefined1)((ulong)uVar33 >> 8);
    uVar30 = (undefined1)((ulong)uVar33 >> 0x10);
    uVar31 = (undefined1)((ulong)uVar33 >> 0x18);
    uVar24 = (undefined1)((ulong)uVar33 >> 0x20);
    uVar25 = (undefined1)((ulong)uVar33 >> 0x28);
    uVar26 = (undefined1)((ulong)uVar33 >> 0x30);
    uVar27 = (undefined1)((ulong)uVar33 >> 0x38);
    uVar20 = uVar21;
  }
  fVar40 = fVar40 * (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
  *(ulong *)(param_2[7] + 4) =
       (ulong)(uint)(fVar23 * (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))));
  *(ulong *)(param_2[6] + 8) =
       CONCAT17((char)((uint)fVar40 >> 0x18),
                CONCAT16((char)((uint)fVar40 >> 0x10),
                         CONCAT15((char)((uint)fVar40 >> 8),
                                  CONCAT14(SUB41(fVar40,0),
                                           fVar17 * (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(
                                                  uVar29,uVar28)))))));
  *(ulong *)(param_2[8] + 8) = (ulong)(uint)(fVar22 * (float)uVar20);
  *(ulong *)param_2[8] =
       CONCAT44(auVar13._4_4_ * (float)((ulong)uVar20 >> 0x20),auVar13._0_4_ * (float)uVar20);
  *(ulong *)param_2[10] = uVar9 & 0xffffffff;
  *(undefined8 *)(param_2[9] + 4) = uVar8;
  auVar16._12_4_ = 0x3f800000;
  *(long *)(param_2[0xb] + 4) = auVar16._8_8_;
  *(undefined8 *)(param_2[10] + 8) = auVar16._0_8_;
  local_18 = 0;
  FUN_032c9ce4(param_2[1] + 4,param_2[6] + 8,&local_18);
  return;
}


