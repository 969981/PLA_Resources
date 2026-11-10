/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d6d34; name: FUN_018d6d34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d6d34(float *param_1,undefined1 (*param_2) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 uVar7;
  int iVar14;
  undefined1 auVar8 [16];
  int iVar6;
  float fVar12;
  undefined1 auVar9 [16];
  int iVar13;
  int iVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 local_20;
  undefined8 uStack_18;
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar12 = param_1[2];
  fVar31 = param_1[3];
  fVar16 = fVar4 * (float)_DAT_03889ac0;
  fVar17 = fVar5 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar18 = fVar12 * (float)_UNK_03889ac8;
  fVar19 = fVar31 * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar8._0_4_ = fVar4 * fVar4;
  auVar8._4_4_ = fVar5 * fVar5;
  auVar8._8_4_ = fVar12 * fVar12;
  auVar8._12_4_ = fVar31 * fVar31;
  auVar23 = NEON_ext(auVar8,auVar8,8,1);
  fVar5 = auVar23._0_4_ + auVar8._0_4_;
  fVar12 = auVar23._4_4_ + auVar8._4_4_;
  fVar4 = fVar5 + fVar12;
  fVar5 = fVar5 + fVar12;
  auVar9._8_8_ = CONCAT44(fVar5,fVar4);
  auVar9._0_8_ = CONCAT44(fVar5,fVar4);
  auVar23 = NEON_frecpe(auVar9,4);
  auVar27 = NEON_frecps(auVar23,auVar9,4);
  auVar24._0_4_ = auVar23._0_4_ * auVar27._0_4_;
  auVar24._4_4_ = auVar23._4_4_ * auVar27._4_4_;
  auVar24._8_4_ = auVar23._8_4_ * auVar27._8_4_;
  auVar24._12_4_ = auVar23._12_4_ * auVar27._12_4_;
  auVar23 = NEON_frecps(auVar24,auVar9,4);
  iVar6 = -(uint)(fVar4 == 0.0);
  iVar13 = -(uint)(fVar5 == 0.0);
  iVar14 = -(uint)(fVar4 == 0.0);
  iVar15 = -(uint)(fVar5 == 0.0);
  auVar10[0] = ~(byte)iVar6;
  auVar10[1] = ~(byte)((uint)iVar6 >> 8);
  auVar10[2] = ~(byte)((uint)iVar6 >> 0x10);
  auVar10[3] = ~(byte)((uint)iVar6 >> 0x18);
  auVar10[4] = ~(byte)iVar13;
  auVar10[5] = ~(byte)((uint)iVar13 >> 8);
  auVar10[6] = ~(byte)((uint)iVar13 >> 0x10);
  auVar10[7] = ~(byte)((uint)iVar13 >> 0x18);
  auVar10[8] = ~(byte)iVar14;
  auVar10[9] = ~(byte)((uint)iVar14 >> 8);
  auVar10[10] = ~(byte)((uint)iVar14 >> 0x10);
  auVar10[0xb] = ~(byte)((uint)iVar14 >> 0x18);
  auVar10[0xc] = ~(byte)iVar15;
  auVar10[0xd] = ~(byte)((uint)iVar15 >> 8);
  auVar10[0xe] = ~(byte)((uint)iVar15 >> 0x10);
  auVar10[0xf] = ~(byte)((uint)iVar15 >> 0x18);
  auVar25._0_4_ = fVar16 * auVar24._0_4_ * auVar23._0_4_;
  auVar25._4_4_ = fVar17 * auVar24._4_4_ * auVar23._4_4_;
  auVar25._8_4_ = fVar18 * auVar24._8_4_ * auVar23._8_4_;
  auVar25._12_4_ = fVar19 * auVar24._12_4_ * auVar23._12_4_;
  auVar23._4_4_ = fVar17;
  auVar23._0_4_ = fVar16;
  auVar23._8_4_ = fVar18;
  auVar23._12_4_ = fVar19;
  auVar27._4_4_ = fVar17;
  auVar27._0_4_ = fVar16;
  auVar27._8_4_ = fVar18;
  auVar27._12_4_ = fVar19;
  auVar27 = auVar27 ^ (auVar23 ^ auVar25) & auVar10;
  uVar20 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar4 = (float)*(undefined8 *)*param_2;
  fVar5 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  auVar1._12_4_ = uVar20;
  auVar1._0_12_ = *param_2;
  uVar26 = a64_TBL(ZEXT816(0),auVar1,DAT_0388a580);
  uVar21 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a580);
  auVar2._12_4_ = uVar20;
  auVar2._0_12_ = *param_2;
  uVar30 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a680);
  uVar32 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a6c8);
  fVar31 = (float)((ulong)uVar30 >> 0x20);
  uVar29 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
  fVar12 = (float)((ulong)uVar26 >> 0x20);
  fVar16 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar17 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar3._12_4_ = uVar20;
  auVar3._0_12_ = *param_2;
  uVar33 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a880);
  uVar22 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a880);
  uVar34 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a790);
  auVar11._0_8_ = auVar27._0_8_;
  auVar11._8_8_ = auVar11._0_8_;
  fVar18 = (float)((ulong)uVar33 >> 0x20);
  uVar7 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a648);
  auVar28._0_8_ =
       CONCAT44((auVar27._4_4_ * fVar12 + fVar16 * fVar5 * (float)((ulong)uVar21 >> 0x20) +
                fVar16 * fVar18 * (float)((ulong)uVar29 >> 0x20)) -
                fVar31 * (float)((ulong)uVar22 >> 0x20),
                (auVar27._0_4_ * (float)uVar26 + (float)_DAT_03889ad0 * fVar4 * (float)uVar21 +
                (float)_DAT_03889ad0 * (float)uVar33 * (float)uVar29) -
                (float)uVar30 * (float)uVar22);
  auVar28._8_4_ =
       (auVar27._8_4_ * (float)uVar26 + (float)_UNK_03889ad8 * (float)uVar30 * (float)uVar32 +
       (float)_UNK_03889ad8 * fVar4 * (float)uVar7) - (float)uVar33 * (float)uVar34;
  auVar28._12_4_ =
       (auVar27._12_4_ * fVar12 + fVar17 * fVar31 * (float)((ulong)uVar32 >> 0x20) +
       fVar17 * fVar5 * (float)((ulong)uVar7 >> 0x20)) - fVar18 * (float)((ulong)uVar34 >> 0x20);
  uStack_18 = auVar28._8_8_;
  local_20 = auVar28._0_8_;
  FUN_00cb8d18(&local_20);
  return;
}


