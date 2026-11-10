/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cae04; name: FUN_032cae04
 */


void FUN_032cae04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  float fVar22;
  int iVar23;
  float fVar26;
  undefined8 uVar24;
  int iVar27;
  undefined1 auVar25 [16];
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fStack_8c;
  float fStack_7c;
  
  fVar4 = (float)param_2[1];
  fVar22 = (float)((ulong)param_2[1] >> 0x20);
  uVar28 = *param_2;
  uVar6 = (undefined1)uVar28;
  uVar8 = (undefined1)((ulong)uVar28 >> 8);
  uVar10 = (undefined1)((ulong)uVar28 >> 0x10);
  uVar12 = (undefined1)((ulong)uVar28 >> 0x18);
  uVar14 = (undefined1)((ulong)uVar28 >> 0x20);
  uVar16 = (undefined1)((ulong)uVar28 >> 0x28);
  uVar18 = (undefined1)((ulong)uVar28 >> 0x30);
  uVar20 = (undefined1)((ulong)uVar28 >> 0x38);
  uVar31 = param_3[1];
  uVar24 = *param_3;
  auVar25._0_4_ = (float)uVar28 * (float)uVar24;
  auVar25._4_4_ = (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar24 >> 0x20);
  auVar25._8_4_ = fVar4 * (float)uVar31;
  auVar25._12_4_ = fVar22 * (float)((ulong)uVar31 >> 0x20);
  auVar30 = NEON_ext(auVar25,auVar25,8,1);
  fVar3 = auVar30._0_4_ + auVar30._4_4_;
  fVar2 = auVar25._0_4_ + auVar25._4_4_ + fVar3;
  fVar3 = auVar25._0_4_ + auVar25._4_4_ + fVar3;
  uVar32 = CONCAT44(-(uint)(fVar3 < 0.0),-(uint)(fVar2 < 0.0)) & 0x8000000080000000;
  bVar7 = (byte)(uVar32 >> 0x18);
  fVar2 = (float)CONCAT13(bVar7 ^ (byte)((uint)fVar2 >> 0x18),SUB43(fVar2,0));
  bVar9 = (byte)(uVar32 >> 0x38);
  if (0.999 <= fVar2) {
    uVar28 = *param_4;
    uVar29 = NEON_fmov(0x3f800000,4);
    fVar3 = (float)uVar29 - (float)uVar28;
    fVar2 = (float)((ulong)uVar29 >> 0x20) - (float)((ulong)uVar28 >> 0x20);
  }
  else {
    if (1.0 <= ABS(fVar2)) {
      fVar4 = 0.0;
      if (fVar2 <= 0.0) {
        fVar4 = 3.1415927;
      }
    }
    else {
      fVar4 = acosf(fVar2);
    }
    fStack_7c = (float)(CONCAT17(bVar9 ^ (byte)((uint)fVar3 >> 0x18),
                                 CONCAT16((char)((uint)fVar3 >> 0x10),
                                          CONCAT15((char)((uint)fVar3 >> 8),
                                                   CONCAT14(SUB41(fVar3,0),fVar2)))) >> 0x20);
    uVar28 = NEON_fmov(0x3f800000,4);
    uVar29 = CONCAT44((float)((ulong)uVar28 >> 0x20) - fStack_7c * fStack_7c,
                      (float)uVar28 - fVar2 * fVar2);
    uVar28 = NEON_frsqrte(uVar29,4);
    fVar33 = (float)uVar28;
    fVar34 = (float)((ulong)uVar28 >> 0x20);
    uVar28 = NEON_frsqrts(uVar29,CONCAT44(fVar34 * fVar34,fVar33 * fVar33),4);
    fVar33 = fVar33 * (float)uVar28;
    fVar34 = fVar34 * (float)((ulong)uVar28 >> 0x20);
    fVar22 = (float)*param_4 * fVar4;
    fVar26 = (float)((ulong)*param_4 >> 0x20) * fVar4;
    uVar31 = CONCAT44(fVar4 - fVar26,fVar4 - fVar22);
    uVar28 = NEON_frecpe(0x40c90fdb40c90fdb,4);
    uVar24 = NEON_frecps(0x40c90fdb40c90fdb,uVar28,4);
    fVar2 = (float)uVar28 * (float)uVar24;
    fVar3 = (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar24 >> 0x20);
    uVar28 = NEON_frecps(0x40c90fdb40c90fdb,
                         CONCAT17((char)((uint)fVar3 >> 0x18),
                                  CONCAT16((char)((uint)fVar3 >> 0x10),
                                           CONCAT15((char)((uint)fVar3 >> 8),
                                                    CONCAT14(SUB41(fVar3,0),fVar2)))),4);
    fVar2 = fVar2 * (float)uVar28;
    do {
      fVar3 = (float)FUN_032c8fd0(fVar2 * ((float)uVar31 + 3.1415927));
      fStack_8c = (float)((ulong)uVar31 >> 0x20);
      fVar4 = (float)uVar31 - fVar3 * 6.2831855;
      uVar31 = CONCAT44(fStack_8c - fVar3 * 6.2831855,fVar4);
      uVar28 = NEON_fminnm(uVar31,0x40490fdb40490fdb,4);
      uVar28 = NEON_fmax(uVar28,0xc0490fdbc0490fdb,4);
    } while ((float)uVar28 != fVar4);
    uVar28 = NEON_frsqrts(uVar29,CONCAT44(fVar34 * fVar34,fVar33 * fVar33),4);
    uVar6 = SUB41(fVar22,0);
    uVar8 = (undefined1)((uint)fVar22 >> 8);
    uVar10 = (undefined1)((uint)fVar22 >> 0x10);
    uVar12 = (undefined1)((uint)fVar22 >> 0x18);
    uVar14 = SUB41(fVar26,0);
    uVar16 = (undefined1)((uint)fVar26 >> 8);
    uVar18 = (undefined1)((uint)fVar26 >> 0x10);
    uVar20 = (undefined1)((uint)fVar26 >> 0x18);
    do {
      fVar3 = (float)CONCAT13(uVar12,CONCAT12(uVar10,CONCAT11(uVar8,uVar6)));
      fVar26 = (float)FUN_032c8fd0(fVar2 * ((float)CONCAT13(uVar12,CONCAT12(uVar10,CONCAT11(uVar8,
                                                  uVar6))) + 3.1415927));
      fVar22 = fVar3 - fVar26 * 6.2831855;
      uVar6 = SUB41(fVar22,0);
      uVar8 = (undefined1)((uint)fVar22 >> 8);
      uVar10 = (undefined1)((uint)fVar22 >> 0x10);
      uVar12 = (undefined1)((uint)fVar22 >> 0x18);
      fVar3 = (float)(CONCAT17(uVar20,CONCAT16(uVar18,CONCAT15(uVar16,CONCAT14(uVar14,fVar3)))) >>
                     0x20) - fVar26 * 6.2831855;
      uVar14 = SUB41(fVar3,0);
      uVar16 = (undefined1)((uint)fVar3 >> 8);
      uVar18 = (undefined1)((uint)fVar3 >> 0x10);
      uVar20 = (undefined1)((uint)fVar3 >> 0x18);
      uVar24 = NEON_fminnm(CONCAT17(uVar20,CONCAT16(uVar18,CONCAT15(uVar16,CONCAT14(uVar14,fVar22)))
                                   ),0x40490fdb40490fdb,4);
      uVar24 = NEON_fmax(uVar24,0xc0490fdbc0490fdb,4);
    } while ((float)uVar24 != fVar22);
    fVar33 = (float)uVar28 * fVar33;
    fVar34 = (float)((ulong)uVar28 >> 0x20) * fVar34;
    fVar2 = sinf(fVar4);
    fVar26 = sinf(fVar22);
    fVar3 = fVar33 * fVar2;
    fVar2 = fVar34 * fVar2;
    fVar4 = (float)param_2[1];
    fVar22 = (float)((ulong)param_2[1] >> 0x20);
    uVar28 = *param_2;
    uVar6 = (undefined1)uVar28;
    uVar8 = (undefined1)((ulong)uVar28 >> 8);
    uVar10 = (undefined1)((ulong)uVar28 >> 0x10);
    uVar12 = (undefined1)((ulong)uVar28 >> 0x18);
    uVar14 = (undefined1)((ulong)uVar28 >> 0x20);
    uVar16 = (undefined1)((ulong)uVar28 >> 0x28);
    uVar18 = (undefined1)((ulong)uVar28 >> 0x30);
    uVar20 = (undefined1)((ulong)uVar28 >> 0x38);
    uVar31 = param_3[1];
    uVar24 = *param_3;
    uVar28 = CONCAT44(fVar34 * fVar26,fVar33 * fVar26);
  }
  fVar26 = (float)CONCAT13(bVar7 ^ (byte)((ulong)uVar28 >> 0x18),(int3)uVar28);
  fVar5 = (float)(CONCAT17(bVar9 ^ (byte)((ulong)uVar28 >> 0x38),
                           CONCAT16((char)((ulong)uVar28 >> 0x30),
                                    CONCAT15((char)((ulong)uVar28 >> 0x28),
                                             CONCAT14((char)((ulong)uVar28 >> 0x20),fVar26)))) >>
                 0x20);
  fVar33 = (float)CONCAT13(uVar12,CONCAT12(uVar10,CONCAT11(uVar8,uVar6))) * fVar3 +
           (float)uVar24 * fVar26;
  fVar34 = (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) * fVar2 +
           (float)((ulong)uVar24 >> 0x20) * fVar5;
  fVar26 = fVar4 * fVar3 + (float)uVar31 * fVar26;
  fVar5 = fVar22 * fVar2 + (float)((ulong)uVar31 >> 0x20) * fVar5;
  fVar2 = fVar33 * fVar33;
  fVar3 = fVar34 * fVar34;
  uVar6 = (undefined1)((uint)fVar3 >> 8);
  uVar8 = (undefined1)((uint)fVar3 >> 0x10);
  uVar10 = (undefined1)((uint)fVar3 >> 0x18);
  auVar30[4] = SUB41(fVar3,0);
  auVar30._0_4_ = fVar2;
  auVar30[5] = uVar6;
  auVar30[6] = uVar8;
  auVar30[7] = uVar10;
  auVar30._8_4_ = fVar26 * fVar26;
  auVar30._12_4_ = fVar5 * fVar5;
  auVar1[4] = SUB41(fVar3,0);
  auVar1._0_4_ = fVar2;
  auVar1[5] = uVar6;
  auVar1[6] = uVar8;
  auVar1[7] = uVar10;
  auVar1._8_4_ = fVar26 * fVar26;
  auVar1._12_4_ = fVar5 * fVar5;
  auVar25 = NEON_ext(auVar30,auVar1,8,1);
  fVar22 = auVar25._0_4_ + auVar25._4_4_;
  fVar4 = fVar2 + fVar3 + fVar22;
  fVar22 = fVar2 + fVar3 + fVar22;
  uVar6 = SUB41(fVar22,0);
  uVar8 = (undefined1)((uint)fVar22 >> 8);
  uVar10 = (undefined1)((uint)fVar22 >> 0x10);
  uVar12 = (undefined1)((uint)fVar22 >> 0x18);
  uVar28 = NEON_frsqrte(CONCAT17(uVar12,CONCAT16(uVar10,CONCAT15(uVar8,CONCAT14(uVar6,fVar4)))),4);
  fVar2 = (float)uVar28;
  fVar3 = (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(CONCAT17(uVar12,CONCAT16(uVar10,CONCAT15(uVar8,CONCAT14(uVar6,fVar4)))),
                        CONCAT44(fVar3 * fVar3,fVar2 * fVar2),4);
  fVar2 = fVar2 * (float)uVar28;
  fVar3 = fVar3 * (float)((ulong)uVar28 >> 0x20);
  iVar23 = -(uint)(fVar4 <= 0.0);
  iVar27 = -(uint)(fVar22 <= 0.0);
  uVar28 = NEON_frsqrts(CONCAT17(uVar12,CONCAT16(uVar10,CONCAT15(uVar8,CONCAT14(uVar6,fVar4)))),
                        CONCAT44(fVar3 * fVar3,fVar2 * fVar2),4);
  fVar2 = (float)uVar28 * fVar2;
  fVar3 = (float)((ulong)uVar28 >> 0x20) * fVar3;
  bVar7 = SUB41(fVar2,0) & ~(byte)iVar23;
  bVar9 = (byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar23 >> 8);
  bVar11 = (byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  bVar13 = (byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  bVar15 = SUB41(fVar3,0) & ~(byte)iVar27;
  bVar17 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar27 >> 8);
  bVar19 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  bVar21 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  fVar2 = (float)CONCAT13(bVar13,CONCAT12(bVar11,CONCAT11(bVar9,bVar7)));
  param_1[1] = CONCAT44(fVar5 * (float)(CONCAT17(bVar21,CONCAT16(bVar19,CONCAT15(bVar17,CONCAT14(
                                                  bVar15,fVar2)))) >> 0x20),fVar26 * fVar2);
  *param_1 = CONCAT44(fVar34 * (float)CONCAT13(bVar21,CONCAT12(bVar19,CONCAT11(bVar17,bVar15))),
                      fVar33 * (float)CONCAT13(bVar13,CONCAT12(bVar11,CONCAT11(bVar9,bVar7))));
  return;
}


