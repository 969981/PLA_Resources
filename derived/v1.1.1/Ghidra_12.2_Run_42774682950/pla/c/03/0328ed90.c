/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328ed90; name: FUN_0328ed90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0328ed90(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar12;
  undefined8 uVar8;
  float fVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  
  auVar9 = *(undefined1 (*) [16])(param_2 + 4);
  *(long *)(param_1 + 6) = auVar9._8_8_;
  *(long *)(param_1 + 4) = auVar9._0_8_;
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  uStack_68 = *(undefined8 *)(param_2 + 0x12);
  local_78 = *(undefined8 *)(param_2 + 0xe);
  uStack_88 = *(undefined8 *)(param_2 + 10);
  local_90 = *(undefined8 *)(param_2 + 8);
  local_80 = *(undefined8 *)(param_2 + 0xc);
  local_70 = *(undefined8 *)(param_2 + 0x10);
  FUN_032c9878(&local_90,&local_60,local_30,10);
  puVar5 = PTR_DAT_043723a0;
  fVar7 = (float)local_60 * (float)local_60 + local_60._4_4_ * local_60._4_4_ +
          (float)uStack_58 * (float)uStack_58;
  fVar12 = (float)local_60 * (float)local_60 + local_60._4_4_ * local_60._4_4_ +
           (float)uStack_58 * (float)uStack_58;
  uVar8 = CONCAT44(fVar12,fVar7);
  uVar22 = NEON_frsqrte(uVar8,4);
  fVar21 = (float)uVar22;
  fVar24 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar8,CONCAT44(fVar24 * fVar24,fVar21 * fVar21),4);
  fVar21 = fVar21 * (float)uVar22;
  fVar24 = fVar24 * (float)((ulong)uVar22 >> 0x20);
  iVar34 = -(uint)(fVar7 <= 0.0);
  iVar35 = -(uint)(fVar12 <= 0.0);
  uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar24 * fVar24,fVar21 * fVar21),4);
  fVar21 = (float)uVar8 * fVar21;
  fVar24 = (float)((ulong)uVar8 >> 0x20) * fVar24;
  fVar7 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                          CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                   CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                            SUB41(fVar21,0) & ~(byte)iVar34)));
  auVar4._8_4_ = fStack_38;
  auVar4._0_8_ = CONCAT44(fStack_3c,local_40);
  auVar4._12_4_ = fStack_34;
  local_60._0_4_ = (float)local_60 * fVar7;
  fVar21 = (float)(CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                            CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                     CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar35 >> 8)
                                              ,CONCAT14(SUB41(fVar24,0) & ~(byte)iVar35,fVar7)))) >>
                  0x20);
  local_60._4_4_ = local_60._4_4_ * fVar21;
  auVar6._0_8_ = CONCAT44(local_60._4_4_,(float)local_60);
  auVar6._8_4_ = (float)uStack_58 * fVar7;
  auVar6._12_4_ = uStack_58._4_4_ * fVar21;
  auVar9 = NEON_ext(auVar4,auVar4,8,1);
  uVar8 = NEON_ext(CONCAT44(fStack_3c,local_40),auVar9._0_8_,4,1);
  auVar10._8_4_ = 0x34000000;
  auVar10._0_8_ = 0x3400000034000000;
  auVar10._12_4_ = 0x34000000;
  auVar23 = NEON_ext(auVar6,auVar6,4,1);
  fVar7 = local_40 * auVar23._0_4_ - (float)local_60 * (float)uVar8;
  fVar21 = fStack_3c * auVar23._4_4_ - local_60._4_4_ * (float)((ulong)uVar8 >> 0x20);
  uVar17 = SUB41(fVar21,0);
  uVar18 = (undefined1)((uint)fVar21 >> 8);
  uVar19 = (undefined1)((uint)fVar21 >> 0x10);
  uVar20 = (undefined1)((uint)fVar21 >> 0x18);
  fVar12 = fStack_38 * (float)local_60 - auVar6._8_4_ * local_40;
  fVar24 = fStack_34 * local_60._4_4_ - auVar6._12_4_ * fStack_3c;
  auVar9[4] = uVar17;
  auVar9._0_4_ = fVar7;
  auVar9[5] = uVar18;
  auVar9[6] = uVar19;
  auVar9[7] = uVar20;
  auVar9._8_4_ = fVar12;
  auVar9._12_4_ = fVar24;
  auVar1[4] = uVar17;
  auVar1._0_4_ = fVar7;
  auVar1[5] = uVar18;
  auVar1[6] = uVar19;
  auVar1[7] = uVar20;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar24;
  auVar9 = NEON_ext(auVar9,auVar1,4,1);
  fVar13 = auVar9._0_4_;
  fVar14 = auVar9._4_4_;
  fVar12 = fVar13 * fVar13 + fVar14 * fVar14 + fVar7 * fVar7;
  fVar26 = fVar13 * fVar13 + fVar14 * fVar14 + fVar7 * fVar7;
  uVar8 = CONCAT44(fVar26,fVar12);
  uVar22 = NEON_frsqrte(uVar8,4);
  fVar24 = (float)uVar22;
  fVar31 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar8,CONCAT44(fVar31 * fVar31,fVar24 * fVar24),4);
  fVar24 = fVar24 * (float)uVar22;
  fVar31 = fVar31 * (float)((ulong)uVar22 >> 0x20);
  iVar34 = -(uint)(fVar12 <= 0.0);
  iVar35 = -(uint)(fVar26 <= 0.0);
  uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar31 * fVar31,fVar24 * fVar24),4);
  fVar24 = (float)uVar8 * fVar24;
  fVar31 = (float)((ulong)uVar8 >> 0x20) * fVar31;
  fVar26 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                           CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                    CONCAT11((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                             SUB41(fVar24,0) & ~(byte)iVar34)));
  fVar12 = fVar13 * fVar26;
  fVar31 = (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                            CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                     CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar35 >> 8)
                                              ,CONCAT14(SUB41(fVar31,0) & ~(byte)iVar35,fVar26))))
                  >> 0x20);
  fVar24 = fVar14 * fVar31;
  uVar27 = (undefined1)((uint)fVar24 >> 8);
  uVar28 = (undefined1)((uint)fVar24 >> 0x10);
  uVar29 = (undefined1)((uint)fVar24 >> 0x18);
  uVar8 = NEON_ext(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(SUB41(fVar24,0),fVar12))
                                           )),CONCAT44(fVar21 * fVar31,fVar7 * fVar26),4,1);
  auVar25._0_8_ = CONCAT44(fVar14 * fVar31,fVar13 * fVar26);
  auVar25._8_4_ = fVar7 * fVar26;
  auVar25._12_4_ =
       (float)(CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,fVar7)))) >> 0x20) *
       fVar31;
  fVar7 = (float)local_60 * (float)uVar8 - auVar23._0_4_ * fVar13 * fVar26;
  fVar21 = local_60._4_4_ * (float)((ulong)uVar8 >> 0x20) - auVar23._4_4_ * fVar14 * fVar31;
  uVar17 = SUB41(fVar21,0);
  uVar18 = (undefined1)((uint)fVar21 >> 8);
  uVar19 = (undefined1)((uint)fVar21 >> 0x10);
  uVar20 = (undefined1)((uint)fVar21 >> 0x18);
  fVar21 = auVar6._8_4_ * fVar12 - (float)local_60 * auVar25._8_4_;
  fVar12 = auVar6._12_4_ *
           (float)(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(SUB41(fVar24,0),fVar12))
                                           )) >> 0x20) - local_60._4_4_ * auVar25._12_4_;
  auVar23[4] = uVar17;
  auVar23._0_4_ = fVar7;
  auVar23[5] = uVar18;
  auVar23[6] = uVar19;
  auVar23[7] = uVar20;
  auVar23._8_4_ = fVar21;
  auVar23._12_4_ = fVar12;
  auVar2[4] = uVar17;
  auVar2._0_4_ = fVar7;
  auVar2[5] = uVar18;
  auVar2[6] = uVar19;
  auVar2[7] = uVar20;
  auVar2._8_4_ = fVar21;
  auVar2._12_4_ = fVar12;
  auVar9 = NEON_ext(auVar23,auVar2,4,1);
  local_40 = auVar9._0_4_;
  fStack_3c = auVar9._4_4_;
  fVar21 = local_40 * local_40 + fStack_3c * fStack_3c + fVar7 * fVar7;
  fVar12 = local_40 * local_40 + fStack_3c * fStack_3c + fVar7 * fVar7;
  uVar22 = CONCAT44(fVar12,fVar21);
  uVar8 = NEON_frsqrte(uVar22,4);
  fVar32 = (float)uVar8;
  fVar33 = (float)((ulong)uVar8 >> 0x20);
  uVar8 = NEON_frsqrts(uVar22,CONCAT44(fVar33 * fVar33,fVar32 * fVar32),4);
  fVar32 = fVar32 * (float)uVar8;
  fVar33 = fVar33 * (float)((ulong)uVar8 >> 0x20);
  auVar9 = NEON_fmax(local_30,auVar10,4);
  iVar34 = -(uint)(fVar21 <= 0.0);
  iVar35 = -(uint)(fVar12 <= 0.0);
  uVar8 = NEON_frsqrts(uVar22,CONCAT44(fVar33 * fVar33,fVar32 * fVar32),4);
  fVar32 = (float)uVar8 * fVar32;
  fVar33 = (float)((ulong)uVar8 >> 0x20) * fVar33;
  fVar24 = auVar9._0_4_;
  fVar13 = auVar9._4_4_;
  auVar15._0_8_ =
       CONCAT44(fVar13 * (float)((ulong)_DAT_03889a80 >> 0x20),fVar24 * (float)_DAT_03889a80);
  fVar14 = auVar9._8_4_;
  auVar15._8_4_ = fVar14 * (float)_UNK_03889a88;
  fVar26 = auVar9._12_4_;
  auVar15._12_4_ = fVar26 * (float)((ulong)_UNK_03889a88 >> 0x20);
  fVar21 = fVar24 * (float)DAT_0388a140;
  fVar12 = fVar13 * (float)((ulong)DAT_0388a140 >> 0x20);
  uVar27 = (undefined1)((uint)fVar12 >> 8);
  uVar28 = (undefined1)((uint)fVar12 >> 0x10);
  uVar29 = (undefined1)((uint)fVar12 >> 0x18);
  fVar31 = fVar14 * (float)DAT_0388a148;
  fVar30 = fVar26 * (float)((ulong)DAT_0388a148 >> 0x20);
  auVar11._0_8_ =
       CONCAT44(fVar13 * (float)((ulong)_DAT_03888d10 >> 0x20),fVar24 * (float)_DAT_03888d10);
  auVar11._8_4_ = fVar14 * (float)_UNK_03888d18;
  auVar11._12_4_ = fVar26 * (float)((ulong)_UNK_03888d18 >> 0x20);
  uStack_68 = auVar11._8_8_;
  uStack_58 = auVar6._8_8_;
  fStack_38 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                              CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                       CONCAT11((byte)((uint)fVar32 >> 8) &
                                                ~(byte)((uint)iVar34 >> 8),
                                                SUB41(fVar32,0) & ~(byte)iVar34)));
  uStack_88 = auVar15._8_8_;
  local_78 = CONCAT44(fVar30,fVar31);
  local_80 = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(SUB41(fVar12,0),fVar21))));
  local_40 = local_40 * fStack_38;
  fStack_34 = (float)(CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                               CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar35 >> 8),
                                                  CONCAT14(SUB41(fVar33,0) & ~(byte)iVar35,fStack_38
                                                          )))) >> 0x20);
  fStack_3c = fStack_3c * fStack_34;
  fStack_38 = fVar7 * fStack_38;
  fStack_34 = (float)(CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,fVar7)))) >>
                     0x20) * fStack_34;
  uStack_48 = auVar25._8_8_;
  *(undefined8 *)(param_1 + 10) = uStack_88;
  *(undefined8 *)(param_1 + 8) = auVar15._0_8_;
  auVar3[4] = SUB41(fVar12,0);
  auVar3._0_4_ = fVar21;
  auVar3[5] = uVar27;
  auVar3[6] = uVar28;
  auVar3[7] = uVar29;
  auVar3._8_4_ = fVar31;
  auVar3._12_4_ = fVar30;
  auVar9 = auVar15 ^ (auVar15 ^ auVar3) & *(undefined1 (*) [16])(puVar5 + 0x20);
  *(long *)(param_1 + 10) = auVar9._8_8_;
  *(long *)(param_1 + 8) = auVar9._0_8_;
  auVar9 = auVar9 ^ (auVar9 ^ auVar11) & *(undefined1 (*) [16])(puVar5 + 0x40);
  *(long *)(param_1 + 10) = auVar9._8_8_;
  *(long *)(param_1 + 8) = auVar9._0_8_;
  auVar16._0_12_ = auVar9._0_12_;
  auVar16._12_4_ = *param_2;
  *(long *)(param_1 + 10) = auVar16._8_8_;
  *(long *)(param_1 + 8) = auVar9._0_8_;
  local_90 = auVar15._0_8_;
  local_70 = auVar11._0_8_;
  local_60 = auVar6._0_8_;
  local_50 = auVar25._0_8_;
  FUN_032cb060(param_1 + 0xc,&local_60);
  return;
}


