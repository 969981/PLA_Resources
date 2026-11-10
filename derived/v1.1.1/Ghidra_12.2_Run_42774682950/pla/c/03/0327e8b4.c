/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327e8b4; name: FUN_0327e8b4
 */


void FUN_0327e8b4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  byte bVar15;
  float fVar16;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  float fVar23;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 0xac);
  lVar14 = *(long *)(param_1 + 0x100);
  fVar10 = *(float *)(lVar14 + 0x40);
  fVar11 = *(float *)(lVar14 + 0x44);
  fVar12 = *(float *)(lVar14 + 0x48);
  fVar13 = *(float *)(lVar14 + 0x4c);
  fVar24 = *(float *)(param_1 + 0xb0);
  fVar28 = -*(float *)(param_1 + 0xb4);
  iVar2 = -(uint)(fVar10 == 0.0);
  iVar4 = -(uint)(fVar11 == 0.0);
  iVar6 = -(uint)(fVar12 == 0.0);
  iVar8 = -(uint)(fVar13 == 0.0);
  bVar15 = (byte)uVar1;
  bVar20 = (byte)((uint)uVar1 >> 8);
  bVar21 = (byte)((uint)uVar1 >> 0x10);
  bVar22 = (byte)((uint)uVar1 >> 0x18);
  fVar16 = (float)CONCAT13(bVar22 & (byte)((uint)iVar2 >> 0x18),
                           CONCAT12(bVar21 & (byte)((uint)iVar2 >> 0x10),
                                    CONCAT11(bVar20 & (byte)((uint)iVar2 >> 8),bVar15 & (byte)iVar2)
                                   ));
  auVar17._0_8_ =
       CONCAT17(bVar22 & (byte)((uint)iVar4 >> 0x18),
                CONCAT16(bVar21 & (byte)((uint)iVar4 >> 0x10),
                         CONCAT15(bVar20 & (byte)((uint)iVar4 >> 8),
                                  CONCAT14(bVar15 & (byte)iVar4,fVar16))));
  auVar17[8] = bVar15 & (byte)iVar6;
  auVar17[9] = bVar20 & (byte)((uint)iVar6 >> 8);
  auVar17[10] = bVar21 & (byte)((uint)iVar6 >> 0x10);
  auVar17[0xb] = bVar22 & (byte)((uint)iVar6 >> 0x18);
  auVar27[0xc] = bVar15 & (byte)iVar8;
  auVar27._0_12_ = auVar17;
  auVar27[0xd] = bVar20 & (byte)((uint)iVar8 >> 8);
  auVar27[0xe] = bVar21 & (byte)((uint)iVar8 >> 0x10);
  auVar27[0xf] = bVar22 & (byte)((uint)iVar8 >> 0x18);
  fVar3 = *(float *)(param_1 + 0x30) + fVar16;
  fVar23 = (float)((ulong)auVar17._0_8_ >> 0x20);
  fVar5 = *(float *)(param_1 + 0x34) + fVar23;
  fVar7 = *(float *)(param_1 + 0x38) + auVar17._8_4_;
  fVar9 = *(float *)(param_1 + 0x3c) + auVar27._12_4_;
  auVar18._0_4_ = *(float *)(param_1 + 0x30) - fVar16;
  auVar18._4_4_ = *(float *)(param_1 + 0x34) - fVar23;
  auVar18._8_4_ = *(float *)(param_1 + 0x38) - auVar17._8_4_;
  auVar18._12_4_ = *(float *)(param_1 + 0x3c) - auVar27._12_4_;
  auVar29._0_4_ = fVar3 + fVar10 * fVar24;
  auVar29._4_4_ = fVar5 + fVar11 * fVar24;
  auVar29._8_4_ = fVar7 + fVar12 * fVar24;
  auVar29._12_4_ = fVar9 + fVar13 * fVar24;
  auVar25._0_4_ = auVar18._0_4_ + fVar10 * fVar24;
  auVar25._4_4_ = auVar18._4_4_ + fVar11 * fVar24;
  auVar25._8_4_ = auVar18._8_4_ + fVar12 * fVar24;
  auVar25._12_4_ = auVar18._12_4_ + fVar13 * fVar24;
  auVar19[4] = SUB41(fVar5,0);
  auVar19._0_4_ = fVar3;
  auVar19[5] = (char)((uint)fVar5 >> 8);
  auVar19[6] = (char)((uint)fVar5 >> 0x10);
  auVar19[7] = (char)((uint)fVar5 >> 0x18);
  auVar19[8] = SUB41(fVar7,0);
  auVar19[9] = (char)((uint)fVar7 >> 8);
  auVar19[10] = (char)((uint)fVar7 >> 0x10);
  auVar19[0xb] = (char)((uint)fVar7 >> 0x18);
  auVar19[0xc] = SUB41(fVar9,0);
  auVar19[0xd] = (char)((uint)fVar9 >> 8);
  auVar19[0xe] = (char)((uint)fVar9 >> 0x10);
  auVar19[0xf] = (char)((uint)fVar9 >> 0x18);
  auVar30 = NEON_fmax(auVar19,auVar29,4);
  auVar19 = NEON_fmin(auVar18,auVar25,4);
  auVar26._0_4_ = auVar30._0_4_ + fVar10 * fVar28;
  auVar26._4_4_ = auVar30._4_4_ + fVar11 * fVar28;
  auVar26._8_4_ = auVar30._8_4_ + fVar12 * fVar28;
  auVar26._12_4_ = auVar30._12_4_ + fVar13 * fVar28;
  auVar27 = NEON_fmax(auVar30,auVar26,4);
  auVar30._4_4_ = auVar19._4_4_ + fVar11 * fVar28;
  auVar30._0_4_ = auVar19._0_4_ + fVar10 * fVar28;
  auVar30._8_4_ = auVar19._8_4_ + fVar12 * fVar28;
  auVar30._12_4_ = auVar19._12_4_ + fVar13 * fVar28;
  auVar30 = NEON_fmin(auVar19,auVar30,4);
  param_2[1] = auVar30._8_8_;
  *param_2 = auVar30._0_8_;
  param_2[3] = auVar27._8_8_;
  param_2[2] = auVar27._0_8_;
  return;
}


