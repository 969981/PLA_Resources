/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832b18; name: FUN_01832b18
 */


/* WARNING: Removing unreachable block (ram,0x01832ba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01832b18(undefined1 param_1 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [12];
  int iVar22;
  undefined1 auVar20 [16];
  int iVar23;
  int iVar24;
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  fVar18 = 0.0;
  fVar7 = param_1._0_4_;
  fVar25 = fVar7 * fVar7;
  fVar3 = param_1._8_4_;
  fVar4 = param_1._12_4_;
  auVar27._4_4_ = 0;
  auVar27._0_4_ = fVar25;
  auVar27._8_4_ = fVar3 * fVar3;
  auVar27._12_4_ = fVar4 * fVar4;
  auVar29._4_4_ = 0;
  auVar29._0_4_ = fVar25;
  auVar29._8_4_ = fVar3 * fVar3;
  auVar29._12_4_ = fVar4 * fVar4;
  auVar27 = NEON_ext(auVar27,auVar29,8,1);
  fVar25 = auVar27._0_4_ + fVar25;
  fVar26 = auVar27._4_4_ + 0.0;
  fVar6 = fVar25 + fVar26;
  fVar25 = fVar25 + fVar26;
  if (fVar6 != 0.0) {
    auVar5._4_4_ = fVar25;
    auVar5._0_4_ = fVar6;
    auVar5._8_4_ = fVar6;
    auVar5._12_4_ = fVar25;
    auVar27 = NEON_frsqrte(auVar5,4);
    auVar28._0_4_ = auVar27._0_4_ * fVar6;
    auVar28._4_4_ = auVar27._4_4_ * fVar25;
    auVar28._8_4_ = auVar27._8_4_ * fVar6;
    auVar28._12_4_ = auVar27._12_4_ * fVar25;
    auVar29 = NEON_frsqrts(auVar27,auVar28,4);
    auVar20._0_4_ = auVar27._0_4_ * auVar29._0_4_;
    auVar20._4_4_ = auVar27._4_4_ * auVar29._4_4_;
    auVar20._8_4_ = auVar27._8_4_ * auVar29._8_4_;
    auVar20._12_4_ = auVar27._12_4_ * auVar29._12_4_;
    auVar30._0_4_ = fVar6 * auVar20._0_4_;
    auVar30._4_4_ = fVar25 * auVar20._4_4_;
    auVar30._8_4_ = fVar6 * auVar20._8_4_;
    auVar30._12_4_ = fVar25 * auVar20._12_4_;
    auVar27 = NEON_frsqrts(auVar20,auVar30,4);
    fVar7 = fVar7 * auVar20._0_4_ * auVar27._0_4_;
    fVar18 = auVar20._4_4_ * auVar27._4_4_ * 0.0;
    fVar3 = fVar3 * auVar20._8_4_ * auVar27._8_4_;
    fVar4 = fVar4 * auVar20._12_4_ * auVar27._12_4_;
    iVar17 = -(uint)(fVar6 == 0.0);
    iVar22 = -(uint)(fVar25 == 0.0);
    iVar23 = -(uint)(fVar6 == 0.0);
    iVar24 = -(uint)(fVar25 == 0.0);
    fVar6 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                            CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                     CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                              SUB41(fVar7,0) & ~(byte)iVar17)));
    auVar19._0_8_ =
         CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                  CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                           CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                    CONCAT14(SUB41(fVar18,0) & ~(byte)iVar22,fVar6))));
    auVar19[8] = SUB41(fVar3,0) & ~(byte)iVar23;
    auVar19[9] = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar23 >> 8);
    auVar19[10] = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
    auVar19[0xb] = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
    auVar21[0xc] = SUB41(fVar4,0) & ~(byte)iVar24;
    auVar21._0_12_ = auVar19;
    auVar21[0xd] = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar24 >> 8);
    auVar21[0xe] = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
    auVar21[0xf] = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
    fVar7 = fVar6 * (float)_DAT_03888d10;
    fVar3 = (float)((ulong)auVar19._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
    uVar8 = (undefined1)((uint)fVar3 >> 8);
    uVar9 = (undefined1)((uint)fVar3 >> 0x10);
    uVar10 = (undefined1)((uint)fVar3 >> 0x18);
    fVar4 = auVar19._8_4_ * (float)_UNK_03888d18;
    uVar11 = (undefined1)((uint)fVar4 >> 8);
    uVar12 = (undefined1)((uint)fVar4 >> 0x10);
    uVar13 = (undefined1)((uint)fVar4 >> 0x18);
    fVar18 = auVar21._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
    uVar14 = (undefined1)((uint)fVar18 >> 8);
    uVar15 = (undefined1)((uint)fVar18 >> 0x10);
    uVar16 = (undefined1)((uint)fVar18 >> 0x18);
    auVar1[4] = SUB41(fVar3,0);
    auVar1._0_4_ = fVar7;
    auVar1[5] = uVar8;
    auVar1[6] = uVar9;
    auVar1[7] = uVar10;
    auVar1[8] = SUB41(fVar4,0);
    auVar1[9] = uVar11;
    auVar1[10] = uVar12;
    auVar1[0xb] = uVar13;
    auVar1[0xc] = SUB41(fVar18,0);
    auVar1[0xd] = uVar14;
    auVar1[0xe] = uVar15;
    auVar1[0xf] = uVar16;
    auVar2[4] = SUB41(fVar3,0);
    auVar2._0_4_ = fVar7;
    auVar2[5] = uVar8;
    auVar2[6] = uVar9;
    auVar2[7] = uVar10;
    auVar2[8] = SUB41(fVar4,0);
    auVar2[9] = uVar11;
    auVar2[10] = uVar12;
    auVar2[0xb] = uVar13;
    auVar2[0xc] = SUB41(fVar18,0);
    auVar2[0xd] = uVar14;
    auVar2[0xe] = uVar15;
    auVar2[0xf] = uVar16;
    auVar27 = NEON_ext(auVar1,auVar2,8,1);
    fVar7 = auVar27._0_4_ + fVar7 + auVar27._4_4_ + fVar3;
    uVar8 = 0;
    if (-1.0 <= fVar7) {
      uVar8 = SUB41(fVar7,0);
    }
    uVar8 = FUN_01009610(uVar8);
    fVar18 = -(float)CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,uVar8))
                             );
    if (0.0 <= fVar6) {
      fVar18 = (float)CONCAT13(extraout_var_01,
                               CONCAT12(extraout_var_00,CONCAT11(extraout_var,uVar8)));
    }
  }
  return fVar18;
}


