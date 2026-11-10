/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031baf1c; name: FUN_031baf1c
 */


void FUN_031baf1c(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  byte bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  undefined8 uVar32;
  float fVar34;
  undefined1 auVar33 [16];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return;
  }
  fVar4 = (float)*param_3;
  fVar27 = fVar4 - (float)*param_2;
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  fVar25 = fVar5 - (float)((ulong)*param_2 >> 0x20);
  uVar12 = SUB41(fVar25,0);
  uVar15 = (undefined1)((uint)fVar25 >> 8);
  uVar18 = (undefined1)((uint)fVar25 >> 0x10);
  uVar21 = (undefined1)((uint)fVar25 >> 0x18);
  fVar6 = (float)param_3[1];
  fVar24 = fVar6 - (float)param_2[1];
  fVar7 = (float)((ulong)param_3[1] >> 0x20);
  fVar26 = fVar7 - (float)((ulong)param_2[1] >> 0x20);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar33 = NEON_ext(auVar2,auVar2,8,1);
  uVar32 = NEON_ext(auVar2._0_8_,auVar33._0_8_,4,1);
  auVar33[4] = uVar12;
  auVar33._0_4_ = fVar27;
  auVar33[5] = uVar15;
  auVar33[6] = uVar18;
  auVar33[7] = uVar21;
  auVar33._8_4_ = fVar24;
  auVar33._12_4_ = fVar26;
  auVar1[4] = uVar12;
  auVar1._0_4_ = fVar27;
  auVar1[5] = uVar15;
  auVar1[6] = uVar18;
  auVar1[7] = uVar21;
  auVar1._8_4_ = fVar24;
  auVar1._12_4_ = fVar26;
  auVar33 = NEON_ext(auVar33,auVar1,4,1);
  fVar28 = fVar27 * (float)uVar32 - auVar2._0_4_ * auVar33._0_4_;
  fVar25 = fVar25 * (float)((ulong)uVar32 >> 0x20) - auVar2._4_4_ * auVar33._4_4_;
  uVar13 = SUB41(fVar25,0);
  uVar16 = (undefined1)((uint)fVar25 >> 8);
  uVar19 = (undefined1)((uint)fVar25 >> 0x10);
  uVar22 = (undefined1)((uint)fVar25 >> 0x18);
  fVar25 = fVar24 * auVar2._0_4_ - auVar2._8_4_ * fVar27;
  fVar27 = fVar26 * auVar2._4_4_ -
           auVar2._12_4_ *
           (float)(CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar15,CONCAT14(uVar12,fVar27)))) >>
                  0x20);
  auVar2[4] = uVar13;
  auVar2._0_4_ = fVar28;
  auVar2[5] = uVar16;
  auVar2[6] = uVar19;
  auVar2[7] = uVar22;
  auVar2._8_4_ = fVar25;
  auVar2._12_4_ = fVar27;
  auVar3[4] = uVar13;
  auVar3._0_4_ = fVar28;
  auVar3[5] = uVar16;
  auVar3[6] = uVar19;
  auVar3[7] = uVar22;
  auVar3._8_4_ = fVar25;
  auVar3._12_4_ = fVar27;
  auVar33 = NEON_ext(auVar2,auVar3,4,1);
  fVar24 = auVar33._0_4_;
  fVar29 = auVar33._4_4_;
  fVar27 = fVar24 * fVar24 + fVar29 * fVar29 + fVar28 * fVar28;
  fVar26 = fVar24 * fVar24 + fVar29 * fVar29 + fVar28 * fVar28;
  uVar12 = SUB41(fVar26,0);
  uVar15 = (undefined1)((uint)fVar26 >> 8);
  uVar18 = (undefined1)((uint)fVar26 >> 0x10);
  uVar21 = (undefined1)((uint)fVar26 >> 0x18);
  uVar32 = NEON_frsqrte(CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar15,CONCAT14(uVar12,fVar27)))),4
                       );
  fVar25 = (float)uVar32;
  fVar34 = (float)((ulong)uVar32 >> 0x20);
  uVar32 = NEON_frsqrts(CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar15,CONCAT14(uVar12,fVar27)))),
                        CONCAT44(fVar34 * fVar34,fVar25 * fVar25),4);
  fVar25 = fVar25 * (float)uVar32;
  fVar34 = fVar34 * (float)((ulong)uVar32 >> 0x20);
  iVar30 = -(uint)(fVar27 <= 0.0);
  iVar31 = -(uint)(fVar26 <= 0.0);
  uVar32 = NEON_frsqrts(CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar15,CONCAT14(uVar12,fVar27)))),
                        CONCAT44(fVar34 * fVar34,fVar25 * fVar25),4);
  fVar25 = (float)uVar32 * fVar25;
  fVar34 = (float)((ulong)uVar32 >> 0x20) * fVar34;
  bVar8 = SUB41(fVar25,0) & ~(byte)iVar30;
  bVar9 = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar10 = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar11 = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  bVar14 = SUB41(fVar34,0) & ~(byte)iVar31;
  bVar17 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar20 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar23 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  fVar27 = (float)CONCAT13(bVar11,CONCAT12(bVar10,CONCAT11(bVar9,bVar8)));
  fVar24 = fVar24 * (float)CONCAT13(bVar11,CONCAT12(bVar10,CONCAT11(bVar9,bVar8)));
  fVar29 = fVar29 * (float)CONCAT13(bVar23,CONCAT12(bVar20,CONCAT11(bVar17,bVar14)));
  fVar25 = fVar28 * fVar27;
  fVar28 = (float)(CONCAT17(uVar22,CONCAT16(uVar19,CONCAT15(uVar16,CONCAT14(uVar13,fVar28)))) >>
                  0x20) *
           (float)(CONCAT17(bVar23,CONCAT16(bVar20,CONCAT15(bVar17,CONCAT14(bVar14,fVar27)))) >>
                  0x20);
  fVar26 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  if (param_4 == 1) {
    param_3[1] = CONCAT44(fVar7 + fVar27 * fVar28,fVar6 + fVar26 * fVar25);
    *param_3 = CONCAT44(fVar5 + fVar27 * fVar29,fVar4 + fVar26 * fVar24);
    uVar32 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    param_3[1] = CONCAT44(fVar7 + -fVar27 * fVar28,fVar6 + -fVar26 * fVar25);
    *param_3 = CONCAT44(fVar5 + -fVar27 * fVar29,fVar4 + -fVar26 * fVar24);
    uVar32 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                      -(float)*(undefined8 *)(param_1 + 0x18));
  }
  fVar27 = (float)((ulong)uVar32 >> 0x20);
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) + fVar28 * fVar27,
                        (float)param_2[1] + fVar25 * (float)uVar32);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) + fVar29 * fVar27,
                      (float)*param_2 + fVar24 * (float)uVar32);
  return;
}


