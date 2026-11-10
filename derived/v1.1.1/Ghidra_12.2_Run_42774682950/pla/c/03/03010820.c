/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03010820; name: FUN_03010820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03010820(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 (*param_4) [16])

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar8;
  undefined1 auVar7 [16];
  int iVar9;
  int iVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  
  uVar6 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  uVar6 = *param_3;
  bVar2 = *(byte *)(param_1 + 0xc2);
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  uVar4 = DAT_0388a148;
  uVar19 = DAT_0388a140;
  uVar6 = _DAT_03889a80;
  lVar1 = param_1 + 0x80;
  auVar20._8_8_ = _UNK_03889f18;
  auVar20._0_8_ = _DAT_03889f10;
  *(undefined8 *)(param_1 + 0x48) = _UNK_03889a88;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar19;
  uVar6 = _DAT_03888d10;
  *(undefined8 *)(param_1 + 0x68) = _UNK_03888d18;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  auVar7 = *param_4;
  fVar13 = auVar7._0_4_ * auVar7._0_4_;
  fVar16 = auVar7._4_4_ * auVar7._4_4_;
  puVar3 = (undefined8 *)(lVar1 + (ulong)bVar2 * 0x10);
  puVar3[1] = auVar7._8_8_;
  *puVar3 = auVar7._0_8_;
  auVar7._12_4_ = 0;
  auVar10._8_8_ = _UNK_03889038;
  auVar10._0_8_ = _DAT_03889030;
  auVar11 = a64_TBL(ZEXT816(0),auVar7,auVar10);
  auVar7 = a64_TBL(ZEXT816(0),auVar7,auVar20);
  fVar18 = auVar7._0_4_;
  auVar21._0_4_ = fVar18 * fVar18;
  auVar21._4_4_ = auVar7._4_4_ * auVar7._4_4_;
  auVar21._8_4_ = auVar7._8_4_ * auVar7._8_4_;
  auVar21._12_4_ = auVar7._12_4_ * auVar7._12_4_;
  auVar24 = NEON_ext(auVar21,auVar21,8,1);
  fVar5 = auVar24._0_4_ + auVar24._4_4_;
  auVar15._4_12_ = auVar11._4_12_;
  auVar15._0_4_ = -auVar11._0_4_;
  auVar11._4_12_ = auVar7._4_12_;
  auVar11._0_4_ = -fVar18;
  auVar14._0_8_ =
       CONCAT44(-(uint)(fVar13 + fVar16 < auVar21._0_4_ + auVar21._4_4_ + fVar5),
                -(uint)(fVar13 + fVar16 < auVar21._0_4_ + auVar21._4_4_ + fVar5));
  auVar14._8_8_ = auVar14._0_8_;
  auVar15 = auVar15 ^ (auVar15 ^ auVar11) & auVar14;
  fVar13 = auVar15._0_4_;
  fVar8 = auVar15._4_4_;
  fVar17 = auVar15._8_4_;
  fVar5 = fVar13 * fVar13 + fVar8 * fVar8 + fVar17 * fVar17;
  fVar16 = fVar13 * fVar13 + fVar8 * fVar8 + fVar17 * fVar17;
  uVar6 = CONCAT44(fVar16,fVar5);
  uVar19 = NEON_frsqrte(uVar6,4);
  fVar18 = (float)uVar19;
  fVar23 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = NEON_frsqrts(uVar6,CONCAT44(fVar23 * fVar23,fVar18 * fVar18),4);
  fVar18 = fVar18 * (float)uVar19;
  fVar23 = fVar23 * (float)((ulong)uVar19 >> 0x20);
  iVar9 = -(uint)(fVar5 <= 0.0);
  iVar12 = -(uint)(fVar16 <= 0.0);
  uVar6 = NEON_frsqrts(uVar6,CONCAT44(fVar23 * fVar23,fVar18 * fVar18),4);
  fVar18 = (float)uVar6 * fVar18;
  fVar23 = (float)((ulong)uVar6 >> 0x20) * fVar23;
  fVar5 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                          CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                   CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                            SUB41(fVar18,0) & ~(byte)iVar9)));
  fVar13 = fVar13 * fVar5;
  fVar18 = (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                            CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                     CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar12 >> 8)
                                              ,CONCAT14(SUB41(fVar23,0) & ~(byte)iVar12,fVar5)))) >>
                  0x20);
  fVar8 = fVar8 * fVar18;
  auVar24._0_8_ = CONCAT44(fVar8,fVar13);
  auVar24._8_4_ = fVar17 * fVar5;
  auVar24._12_4_ = auVar15._12_4_ * fVar18;
  auVar22 = NEON_ext(auVar24,auVar24,4,1);
  puVar3 = (undefined8 *)(lVar1 + (ulong)((bVar2 + 1) % 3) * 0x10);
  puVar3[1] = auVar24._8_8_;
  *puVar3 = auVar24._0_8_;
  auVar7 = *(undefined1 (*) [16])(lVar1 + (ulong)bVar2 * 0x10);
  auVar11 = NEON_ext(auVar7,auVar7,8,1);
  uVar6 = NEON_ext(auVar7._0_8_,auVar11._0_8_,4,1);
  auVar22._0_8_ =
       CONCAT44(auVar7._4_4_ * auVar22._4_4_ - (float)((ulong)uVar6 >> 0x20) * fVar8,
                auVar7._0_4_ * auVar22._0_4_ - (float)uVar6 * fVar13);
  auVar22._8_4_ = auVar7._8_4_ * fVar13 - auVar7._0_4_ * auVar24._8_4_;
  auVar22._12_4_ = auVar7._12_4_ * fVar8 - auVar7._4_4_ * auVar24._12_4_;
  auVar7 = NEON_ext(auVar22,auVar22,4,1);
  puVar3 = (undefined8 *)(lVar1 + (ulong)((bVar2 + 2) % 3) * 0x10);
  puVar3[1] = auVar22._0_8_;
  *puVar3 = auVar7._0_8_;
  return;
}


