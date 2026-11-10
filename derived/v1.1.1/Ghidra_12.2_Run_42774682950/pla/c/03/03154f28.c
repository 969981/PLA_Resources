/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03154f28; name: FUN_03154f28
 */


void FUN_03154f28(undefined8 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],
                 float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined1 auVar28 [16];
  float fVar31;
  undefined8 uVar30;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined8 uVar35;
  float fVar36;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  fVar18 = (float)*(undefined8 *)(*param_3 + 8);
  fVar11 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uStack_78 = *(undefined8 *)*param_3;
  fVar17 = (float)uStack_78;
  fVar10 = (float)((ulong)uStack_78 >> 0x20);
  auVar12._12_4_ = fVar11;
  auVar12._0_12_ = *param_3;
  auVar20._12_4_ = fVar11;
  auVar20._0_12_ = *param_3;
  auVar12 = NEON_ext(auVar12,auVar20,8,1);
  uStack_28 = *(undefined8 *)(*param_2 + 8);
  fVar13 = (float)((ulong)uStack_28 >> 0x20);
  local_30 = *(undefined8 *)*param_2;
  fVar14 = (float)local_30;
  fVar16 = (float)((ulong)local_30 >> 0x20);
  auVar1._12_4_ = fVar13;
  auVar1._0_12_ = *param_2;
  auVar2._12_4_ = fVar13;
  auVar2._0_12_ = *param_2;
  auVar20 = NEON_ext(auVar1,auVar2,8,1);
  uStack_58 = auVar12._0_8_;
  uVar5 = NEON_ext(uStack_78,uStack_58,4,1);
  fVar15 = (float)((ulong)uVar5 >> 0x20);
  uVar19 = NEON_ext(local_30,auVar20._0_8_,4,1);
  fVar22 = (float)((ulong)uVar19 >> 0x20);
  fVar23 = fVar17 * (float)uVar19 - fVar14 * (float)uVar5;
  fVar24 = fVar10 * fVar22 - fVar16 * fVar15;
  fVar25 = fVar18 * fVar14 - (float)uStack_28 * fVar17;
  fVar26 = fVar11 * fVar16 - fVar13 * fVar10;
  auVar6._4_4_ = fVar24;
  auVar6._0_4_ = fVar23;
  auVar6._8_4_ = fVar25;
  auVar6._12_4_ = fVar26;
  auVar7._4_4_ = fVar24;
  auVar7._0_4_ = fVar23;
  auVar7._8_4_ = fVar25;
  auVar7._12_4_ = fVar26;
  auVar20 = NEON_ext(auVar6,auVar7,4,1);
  fVar27 = auVar20._0_4_;
  fVar29 = auVar20._4_4_;
  fVar25 = fVar27 * fVar27 + fVar29 * fVar29 + fVar23 * fVar23;
  fVar31 = fVar27 * fVar27 + fVar29 * fVar29 + fVar23 * fVar23;
  uVar30 = CONCAT44(fVar31,fVar25);
  uVar35 = NEON_frsqrte(uVar30,4);
  fVar26 = (float)uVar35;
  fVar36 = (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(uVar30,CONCAT44(fVar36 * fVar36,fVar26 * fVar26),4);
  fVar26 = fVar26 * (float)uVar35;
  fVar36 = fVar36 * (float)((ulong)uVar35 >> 0x20);
  iVar8 = -(uint)(fVar25 <= 0.0);
  iVar9 = -(uint)(fVar31 <= 0.0);
  uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar36 * fVar36,fVar26 * fVar26),4);
  fVar26 = (float)uVar30 * fVar26;
  fVar36 = (float)((ulong)uVar30 >> 0x20) * fVar36;
  fVar31 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar26,0) & ~(byte)iVar8)));
  fVar25 = fVar27 * fVar31;
  fVar36 = (float)(CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              CONCAT14(SUB41(fVar36,0) & ~(byte)iVar9,fVar31)))) >>
                  0x20);
  fVar26 = fVar29 * fVar36;
  uVar32 = (undefined1)((uint)fVar26 >> 8);
  uVar33 = (undefined1)((uint)fVar26 >> 0x10);
  uVar34 = (undefined1)((uint)fVar26 >> 0x18);
  uVar30 = NEON_ext(CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(SUB41(fVar26,0),fVar25)
                                                            ))),
                    CONCAT44(fVar24 * fVar36,fVar23 * fVar31),4,1);
  fVar27 = fVar27 * fVar31;
  fVar29 = fVar29 * fVar36;
  auVar28._0_8_ = CONCAT44(fVar29,fVar27);
  auVar28._8_4_ = fVar23 * fVar31;
  auVar28._12_4_ = fVar24 * fVar36;
  fVar24 = (float)((ulong)uVar30 >> 0x20);
  fVar36 = (float)(CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(SUB41(fVar26,0),fVar25))
                                           )) >> 0x20);
  auVar21._0_8_ =
       CONCAT44(fVar16 * fVar24 - fVar22 * fVar29,fVar14 * (float)uVar30 - (float)uVar19 * fVar27);
  auVar21._8_4_ = (float)uStack_28 * fVar25 - fVar14 * auVar28._8_4_;
  auVar21._12_4_ = fVar13 * fVar36 - fVar16 * auVar28._12_4_;
  auVar20 = NEON_ext(auVar21,auVar21,4,1);
  uStack_40 = auVar20._0_8_;
  fVar14 = fVar17 * (float)uVar30 - (float)uVar5 * fVar27;
  fVar16 = fVar10 * fVar24 - fVar15 * fVar29;
  fVar17 = fVar18 * fVar25 - fVar17 * auVar28._8_4_;
  fVar18 = fVar11 * fVar36 - fVar10 * auVar28._12_4_;
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar14;
  auVar3._8_4_ = fVar17;
  auVar3._12_4_ = fVar18;
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar14;
  auVar4._8_4_ = fVar17;
  auVar4._12_4_ = fVar18;
  auVar20 = NEON_ext(auVar3,auVar4,4,1);
  uStack_48 = auVar28._8_8_;
  local_60 = CONCAT44(fVar14,fVar23 * fVar31);
  local_80 = CONCAT44(auVar20._0_4_,fVar25);
  uStack_68 = CONCAT44(auVar12._4_4_,fVar10);
  uStack_70 = CONCAT44(auVar20._4_4_,fVar26);
  local_50 = auVar28._0_8_;
  uStack_38 = auVar21._0_8_;
  FUN_032c9038(&local_b0,&local_50,&local_80);
  fVar17 = (float)param_1[1];
  fVar25 = (float)*param_1;
  fVar26 = (float)((ulong)*param_1 >> 0x20);
  *(ulong *)(param_4 + 2) = (ulong)(uint)fStack_a8;
  *param_4 = local_b0;
  param_4[1] = fStack_ac;
  *(ulong *)(param_4 + 6) = uStack_98 & 0xffffffff;
  *(undefined8 *)(param_4 + 4) = uStack_a0;
  *(ulong *)(param_4 + 10) = (ulong)(uint)fStack_88;
  param_4[8] = local_90;
  param_4[9] = fStack_8c;
  *(ulong *)(param_4 + 0xe) =
       CONCAT44(0x3f800000,
                fVar17 - (fStack_a8 * fVar25 + (float)uStack_98 * fVar26 + fStack_88 * fVar17));
  *(ulong *)(param_4 + 0xc) =
       CONCAT44(fVar26 - (fStack_ac * fVar25 + (float)((ulong)uStack_a0 >> 0x20) * fVar26 +
                         fStack_8c * fVar17),
                fVar25 - (local_b0 * fVar25 + (float)uStack_a0 * fVar26 + local_90 * fVar17));
  return;
}


