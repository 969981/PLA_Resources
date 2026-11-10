/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa5bf4; name: FUN_02fa5bf4
 */


undefined8
FUN_02fa5bf4(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  undefined1 (*pauVar3) [12];
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar8 = *param_2;
  auVar7 = param_2[1];
  fVar24 = (auVar7._4_4_ - auVar8._4_4_) * 0.5;
  uStack_18 = CONCAT44((auVar7._12_4_ - auVar8._12_4_) * 0.5,(auVar7._8_4_ - auVar8._8_4_) * 0.5);
  fVar23 = (auVar7._4_4_ + auVar8._4_4_) * 0.5;
  local_30 = CONCAT44(fVar23,(auVar7._0_4_ + auVar8._0_4_) * 0.5);
  uStack_28 = CONCAT44((auVar7._12_4_ + auVar8._12_4_) * 0.5,(auVar7._8_4_ + auVar8._8_4_) * 0.5);
  uStack_20 = CONCAT17((char)((uint)fVar24 >> 0x18),
                       CONCAT16((char)((uint)fVar24 >> 0x10),
                                CONCAT15((char)((uint)fVar24 >> 8),
                                         CONCAT14(SUB41(fVar24,0),
                                                  (auVar7._0_4_ - auVar8._0_4_) * 0.5))));
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x90);
  uVar19 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  pauVar3 = (undefined1 (*) [12])(param_1 + 0xa0);
  uVar18 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  fVar21 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar25 = NEON_fmin(CONCAT44(fVar24 + fVar21,fVar24 + fVar21),CONCAT44(fVar23,fVar23),4);
  uVar25 = NEON_fmax(CONCAT44(fVar22 - fVar24,fVar22 - fVar24),uVar25,4);
  fVar24 = fVar23 - (float)uVar25;
  fVar23 = fVar23 - (float)((ulong)uVar25 >> 0x20);
  if (fVar24 * fVar24 <= (float)*param_3) {
    auVar6._12_4_ = uVar19;
    auVar6._0_12_ = *pauVar1;
    auVar8 = NEON_fmax(auVar6,auVar8,4);
    auVar9._12_4_ = uVar19;
    auVar9._0_12_ = *pauVar1;
    auVar6 = NEON_fmax(auVar9,auVar7,4);
    auVar7._12_4_ = uVar18;
    auVar7._0_12_ = *pauVar3;
    auVar9 = NEON_fmin(auVar7,auVar8,4);
    fVar20 = (fVar21 - fVar22) + ABS(fVar24);
    fVar22 = (fVar21 - fVar22) + ABS(fVar23);
    auVar8._12_4_ = uVar18;
    auVar8._0_12_ = *pauVar3;
    auVar7 = NEON_fmin(auVar8,auVar6,4);
    fVar21 = fVar20 * fVar20 - fVar24 * fVar24;
    fVar22 = fVar22 * fVar22 - fVar23 * fVar23;
    uVar25 = NEON_frsqrte(CONCAT44(fVar22,fVar21),4);
    fVar24 = (float)uVar25;
    fVar23 = (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar22,fVar21),CONCAT44(fVar23 * fVar23,fVar24 * fVar24),4);
    fVar24 = fVar24 * (float)uVar25;
    fVar23 = fVar23 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar22,fVar21),CONCAT44(fVar23 * fVar23,fVar24 * fVar24),4);
    iVar4 = -(uint)(fVar21 <= 0.0);
    iVar5 = -(uint)(fVar22 <= 0.0);
    fVar21 = fVar21 * (float)uVar25 * fVar24;
    fVar22 = fVar22 * (float)((ulong)uVar25 >> 0x20) * fVar23;
    bVar10 = SUB41(fVar21,0) & ~(byte)iVar4;
    bVar11 = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar4 >> 8);
    bVar12 = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
    bVar13 = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
    bVar14 = SUB41(fVar22,0) & ~(byte)iVar5;
    bVar15 = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar5 >> 8);
    bVar16 = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
    bVar17 = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
    fVar21 = (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10)));
    fVar22 = (float)(CONCAT17(bVar17,CONCAT16(bVar16,CONCAT15(bVar15,CONCAT14(bVar14,fVar21)))) >>
                    0x20);
    fStack_38 = (float)*(undefined8 *)(param_1 + 0x78);
    fStack_34 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    fStack_40 = (float)*(undefined8 *)(param_1 + 0x70);
    local_50 = (auVar9._0_4_ - (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10)))) *
               fStack_40;
    fStack_3c = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    fStack_4c = (auVar9._4_4_ - (float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)))) *
                fStack_3c;
    fStack_48 = (auVar9._8_4_ - fVar21) * fStack_38;
    fStack_44 = (auVar9._12_4_ - fVar22) * fStack_34;
    fStack_40 = (auVar7._0_4_ + (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10)))) *
                fStack_40;
    fStack_3c = (auVar7._4_4_ + (float)CONCAT13(bVar17,CONCAT12(bVar16,CONCAT11(bVar15,bVar14)))) *
                fStack_3c;
    fStack_38 = (auVar7._8_4_ + fVar21) * fStack_38;
    fStack_34 = (auVar7._12_4_ + fVar22) * fStack_34;
    uVar25 = NEON_fmax(CONCAT44(fStack_40 - local_50,fStack_40 - local_50),
                       CONCAT44(fStack_38 - fStack_48,fStack_38 - fStack_48),4);
    uVar2 = (int)(float)uVar25 + 1;
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar25 = FUN_02fa5d60(0,param_1,&DAT_03aae430,&local_50,
                          (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18,&local_30,
                          &uStack_20,param_3,param_4);
  }
  else {
    uVar25 = 0;
  }
  return uVar25;
}


