/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e7cd8; name: FUN_031e7cd8
 */


void FUN_031e7cd8(undefined8 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  byte bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  
  uVar7 = *(undefined8 *)(*param_2 + 8);
  fVar29 = (float)((ulong)uVar7 >> 0x20);
  uVar36 = *(undefined8 *)*param_2;
  auVar32._12_4_ = fVar29;
  auVar32._0_12_ = *param_2;
  auVar1._12_4_ = fVar29;
  auVar1._0_12_ = *param_2;
  auVar32 = NEON_ext(auVar32,auVar1,8,1);
  uVar31 = NEON_ext(uVar36,auVar32._0_8_,4,1);
  param_1[1] = uVar7;
  *param_1 = uVar36;
  uVar11 = *(undefined8 *)(*param_3 + 8);
  fVar34 = (float)((ulong)uVar11 >> 0x20);
  uVar10 = *(undefined8 *)*param_3;
  fVar30 = (float)((ulong)uVar10 >> 0x20);
  auVar8._12_4_ = fVar34;
  auVar8._0_12_ = *param_3;
  auVar9._12_4_ = fVar34;
  auVar9._0_12_ = *param_3;
  auVar32 = NEON_ext(auVar8,auVar9,8,1);
  uVar35 = NEON_ext(uVar10,auVar32._0_8_,4,1);
  fVar33 = (float)((ulong)uVar36 >> 0x20);
  fVar4 = (float)uVar36 * (float)uVar35 - (float)uVar10 * (float)uVar31;
  fVar28 = fVar33 * (float)((ulong)uVar35 >> 0x20) - fVar30 * (float)((ulong)uVar31 >> 0x20);
  uVar16 = SUB41(fVar28,0);
  uVar19 = (undefined1)((uint)fVar28 >> 8);
  uVar22 = (undefined1)((uint)fVar28 >> 0x10);
  uVar25 = (undefined1)((uint)fVar28 >> 0x18);
  fVar28 = (float)uVar7 * (float)uVar10 - (float)uVar11 * (float)uVar36;
  fVar29 = fVar29 * fVar30 - fVar34 * fVar33;
  auVar2[4] = uVar16;
  auVar2._0_4_ = fVar4;
  auVar2[5] = uVar19;
  auVar2[6] = uVar22;
  auVar2[7] = uVar25;
  auVar2._8_4_ = fVar28;
  auVar2._12_4_ = fVar29;
  auVar3[4] = uVar16;
  auVar3._0_4_ = fVar4;
  auVar3[5] = uVar19;
  auVar3[6] = uVar22;
  auVar3[7] = uVar25;
  auVar3._8_4_ = fVar28;
  auVar3._12_4_ = fVar29;
  auVar32 = NEON_ext(auVar2,auVar3,4,1);
  fVar30 = auVar32._0_4_;
  fVar33 = auVar32._4_4_;
  fVar28 = fVar30 * fVar30 + fVar33 * fVar33 + fVar4 * fVar4;
  fVar29 = fVar30 * fVar30 + fVar33 * fVar33 + fVar4 * fVar4;
  uVar17 = SUB41(fVar29,0);
  uVar20 = (undefined1)((uint)fVar29 >> 8);
  uVar23 = (undefined1)((uint)fVar29 >> 0x10);
  uVar26 = (undefined1)((uint)fVar29 >> 0x18);
  uVar36 = NEON_frsqrte(CONCAT17(uVar26,CONCAT16(uVar23,CONCAT15(uVar20,CONCAT14(uVar17,fVar28)))),4
                       );
  fVar34 = (float)uVar36;
  fVar37 = (float)((ulong)uVar36 >> 0x20);
  uVar36 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar23,CONCAT15(uVar20,CONCAT14(uVar17,fVar28)))),
                        CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  fVar34 = fVar34 * (float)uVar36;
  fVar37 = fVar37 * (float)((ulong)uVar36 >> 0x20);
  uVar36 = NEON_frsqrts(CONCAT17(uVar26,CONCAT16(uVar23,CONCAT15(uVar20,CONCAT14(uVar17,fVar28)))),
                        CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  iVar5 = -(uint)(fVar28 <= 0.0);
  iVar6 = -(uint)(fVar29 <= 0.0);
  fVar34 = (float)uVar36 * fVar34;
  fVar37 = (float)((ulong)uVar36 >> 0x20) * fVar37;
  bVar12 = SUB41(fVar34,0) & ~(byte)iVar5;
  bVar13 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar5 >> 8);
  bVar14 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
  bVar15 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
  bVar18 = SUB41(fVar37,0) & ~(byte)iVar6;
  bVar21 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar6 >> 8);
  bVar24 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
  bVar27 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
  fVar28 = (float)CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar12)));
  fVar33 = fVar33 * (float)CONCAT13(bVar27,CONCAT12(bVar24,CONCAT11(bVar21,bVar18)));
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[5] = CONCAT44((float)(CONCAT17(uVar25,CONCAT16(uVar22,CONCAT15(uVar19,CONCAT14(uVar16,
                                                  fVar4)))) >> 0x20) *
                        (float)(CONCAT17(bVar27,CONCAT16(bVar24,CONCAT15(bVar21,CONCAT14(bVar18,
                                                  fVar28)))) >> 0x20),fVar4 * fVar28);
  param_1[4] = CONCAT17((char)((uint)fVar33 >> 0x18),
                        CONCAT16((char)((uint)fVar33 >> 0x10),
                                 CONCAT15((char)((uint)fVar33 >> 8),
                                          CONCAT14(SUB41(fVar33,0),
                                                   fVar30 * (float)CONCAT13(bVar15,CONCAT12(bVar14,
                                                  CONCAT11(bVar13,bVar12)))))));
  return;
}


