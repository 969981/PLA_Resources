/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d9420; name: FUN_028d9420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_028d9420(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar19;
  int iVar21;
  undefined1 auVar15 [16];
  int iVar14;
  undefined1 auVar16 [16];
  int iVar20;
  int iVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  if (*(short *)(param_1 + 10) < 0) {
    return ZEXT816(0);
  }
  fVar6 = *(float *)(param_1 + 0x50);
  fVar13 = *(float *)(param_1 + 0x54);
  fVar19 = *(float *)(param_1 + 0x58);
  fVar5 = *(float *)(param_1 + 0x5c);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x20);
  uVar12 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  auVar7._0_4_ = (float)*(undefined8 *)(param_1 + 0x10) - (float)*(undefined8 *)(param_1 + 0x40);
  auVar7._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  auVar7._8_4_ = (float)*(undefined8 *)(param_1 + 0x18) - (float)*(undefined8 *)(param_1 + 0x48);
  auVar7._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) -
       (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar8 = fVar6 * (float)_DAT_03889ac0;
  fVar9 = fVar13 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar10 = fVar19 * (float)_UNK_03889ac8;
  fVar11 = fVar5 * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar15._0_4_ = fVar6 * fVar6;
  auVar15._4_4_ = fVar13 * fVar13;
  auVar15._8_4_ = fVar19 * fVar19;
  auVar15._12_4_ = fVar5 * fVar5;
  auVar23 = NEON_ext(auVar15,auVar15,8,1);
  fVar13 = auVar23._0_4_ + auVar15._0_4_;
  fVar19 = auVar23._4_4_ + auVar15._4_4_;
  fVar6 = fVar13 + fVar19;
  fVar13 = fVar13 + fVar19;
  auVar16._8_8_ = CONCAT44(fVar13,fVar6);
  auVar16._0_8_ = CONCAT44(fVar13,fVar6);
  auVar23 = NEON_frecpe(auVar16,4);
  auVar26 = NEON_frecps(auVar23,auVar16,4);
  auVar24._0_4_ = auVar23._0_4_ * auVar26._0_4_;
  auVar24._4_4_ = auVar23._4_4_ * auVar26._4_4_;
  auVar24._8_4_ = auVar23._8_4_ * auVar26._8_4_;
  auVar24._12_4_ = auVar23._12_4_ * auVar26._12_4_;
  auVar23 = NEON_frecps(auVar24,auVar16,4);
  iVar14 = -(uint)(fVar6 == 0.0);
  iVar20 = -(uint)(fVar13 == 0.0);
  iVar21 = -(uint)(fVar6 == 0.0);
  iVar22 = -(uint)(fVar13 == 0.0);
  auVar17[0] = ~(byte)iVar14;
  auVar17[1] = ~(byte)((uint)iVar14 >> 8);
  auVar17[2] = ~(byte)((uint)iVar14 >> 0x10);
  auVar17[3] = ~(byte)((uint)iVar14 >> 0x18);
  auVar17[4] = ~(byte)iVar20;
  auVar17[5] = ~(byte)((uint)iVar20 >> 8);
  auVar17[6] = ~(byte)((uint)iVar20 >> 0x10);
  auVar17[7] = ~(byte)((uint)iVar20 >> 0x18);
  auVar17[8] = ~(byte)iVar21;
  auVar17[9] = ~(byte)((uint)iVar21 >> 8);
  auVar17[10] = ~(byte)((uint)iVar21 >> 0x10);
  auVar17[0xb] = ~(byte)((uint)iVar21 >> 0x18);
  auVar17[0xc] = ~(byte)iVar22;
  auVar17[0xd] = ~(byte)((uint)iVar22 >> 8);
  auVar17[0xe] = ~(byte)((uint)iVar22 >> 0x10);
  auVar17[0xf] = ~(byte)((uint)iVar22 >> 0x18);
  auVar25._0_4_ = fVar8 * auVar24._0_4_ * auVar23._0_4_;
  auVar25._4_4_ = fVar9 * auVar24._4_4_ * auVar23._4_4_;
  auVar25._8_4_ = fVar10 * auVar24._8_4_ * auVar23._8_4_;
  auVar25._12_4_ = fVar11 * auVar24._12_4_ * auVar23._12_4_;
  auVar23._4_4_ = fVar9;
  auVar23._0_4_ = fVar8;
  auVar23._8_4_ = fVar10;
  auVar23._12_4_ = fVar11;
  auVar26._4_4_ = fVar9;
  auVar26._0_4_ = fVar8;
  auVar26._8_4_ = fVar10;
  auVar26._12_4_ = fVar11;
  auVar26 = auVar26 ^ (auVar23 ^ auVar25) & auVar17;
  auVar2._12_4_ = uVar12;
  auVar2._0_12_ = *pauVar1;
  a64_TBL(ZEXT816(0),auVar2,DAT_0388a580);
  a64_TBL(ZEXT816(0),auVar26,DAT_0388a580);
  auVar3._12_4_ = uVar12;
  auVar3._0_12_ = *pauVar1;
  a64_TBL(ZEXT816(0),auVar3,DAT_0388a680);
  a64_TBL(ZEXT816(0),auVar26,DAT_0388a6c8);
  a64_TBL(ZEXT816(0),auVar26,DAT_0388a680);
  a64_TBL(ZEXT816(0),auVar26,DAT_0388a880);
  a64_TBL(ZEXT816(0),auVar26,DAT_0388a790);
  auVar18._0_8_ = auVar26._0_8_;
  auVar18._8_8_ = auVar18._0_8_;
  a64_TBL(ZEXT816(0),auVar18,DAT_0388a648);
  auVar4._12_4_ = uVar12;
  auVar4._0_12_ = *pauVar1;
  a64_TBL(ZEXT816(0),auVar4,DAT_0388a880);
  return auVar7;
}


