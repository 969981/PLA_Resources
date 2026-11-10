/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300e1d8; name: FUN_0300e1d8
 */


void FUN_0300e1d8(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,float *param_5
                 ,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar15;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar16;
  float fVar17;
  int iVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  
  fVar7 = (float)param_6[1];
  fVar5 = (float)*param_6;
  fVar6 = (float)((ulong)*param_6 >> 0x20);
  fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar15 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  uVar9 = CONCAT44(fVar15,fVar8);
  uVar22 = NEON_frsqrte(uVar9,4);
  fVar21 = (float)uVar22;
  fVar25 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar9,CONCAT44(fVar25 * fVar25,fVar21 * fVar21),4);
  fVar21 = fVar21 * (float)uVar22;
  fVar25 = fVar25 * (float)((ulong)uVar22 >> 0x20);
  iVar16 = -(uint)(fVar8 <= 0.0);
  iVar19 = -(uint)(fVar15 <= 0.0);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar25 * fVar25,fVar21 * fVar21),4);
  fVar21 = (float)uVar9 * fVar21;
  fVar25 = (float)((ulong)uVar9 >> 0x20) * fVar25;
  fVar8 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                          CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                   CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                            SUB41(fVar21,0) & ~(byte)iVar16)));
  fVar5 = fVar5 * fVar8;
  fVar25 = (float)(CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                            CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                     CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar19 >> 8)
                                              ,CONCAT14(SUB41(fVar25,0) & ~(byte)iVar19,fVar8)))) >>
                  0x20);
  fVar6 = fVar6 * fVar25;
  fVar7 = fVar7 * fVar8;
  fVar25 = (float)((ulong)param_6[1] >> 0x20) * fVar25;
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar25,fVar7);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar6,fVar5);
  fVar8 = *param_4;
  fVar21 = param_4[1];
  fVar15 = param_4[2];
  fVar17 = fVar8 * fVar8 + fVar21 * fVar21 + fVar15 * fVar15;
  fVar20 = fVar8 * fVar8 + fVar21 * fVar21 + fVar15 * fVar15;
  uVar9 = CONCAT44(fVar20,fVar17);
  uVar22 = NEON_frsqrte(uVar9,4);
  fVar26 = (float)uVar22;
  fVar27 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar9,CONCAT44(fVar27 * fVar27,fVar26 * fVar26),4);
  fVar26 = fVar26 * (float)uVar22;
  fVar27 = fVar27 * (float)((ulong)uVar22 >> 0x20);
  iVar16 = -(uint)(fVar17 <= 0.0);
  iVar19 = -(uint)(fVar20 <= 0.0);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar27 * fVar27,fVar26 * fVar26),4);
  fVar26 = (float)uVar9 * fVar26;
  fVar27 = (float)((ulong)uVar9 >> 0x20) * fVar27;
  fVar17 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar26,0) & ~(byte)iVar16)));
  auVar10._0_4_ = fVar8 * fVar17;
  fVar8 = (float)(CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                           CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                    CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                             CONCAT14(SUB41(fVar27,0) & ~(byte)iVar19,fVar17)))) >>
                 0x20);
  auVar10._4_4_ = fVar21 * fVar8;
  auVar10._8_4_ = fVar15 * fVar17;
  auVar10._12_4_ = param_4[3] * fVar8;
  auVar18._4_4_ = fVar6;
  auVar18._0_4_ = fVar5;
  auVar18._8_4_ = fVar7;
  auVar18._12_4_ = fVar25;
  auVar24._4_4_ = fVar6;
  auVar24._0_4_ = fVar5;
  auVar24._8_4_ = fVar7;
  auVar24._12_4_ = fVar25;
  auVar18 = NEON_ext(auVar18,auVar24,4,1);
  auVar24 = NEON_ext(auVar10,auVar10,4,1);
  fVar15 = fVar5 * auVar24._0_4_ - auVar18._0_4_ * auVar10._0_4_;
  fVar17 = fVar6 * auVar24._4_4_ - auVar18._4_4_ * auVar10._4_4_;
  auVar11._0_8_ = CONCAT44(fVar17,fVar15);
  auVar11._8_4_ = fVar7 * auVar10._0_4_ - fVar5 * auVar10._8_4_;
  auVar11._12_4_ = fVar25 * auVar10._4_4_ - fVar6 * auVar10._12_4_;
  auVar24 = NEON_ext(auVar11,auVar11,4,1);
  uVar9 = NEON_ext(auVar24._0_8_,auVar11._0_8_,4,1);
  fVar8 = auVar18._0_4_ * auVar24._0_4_ - fVar5 * (float)uVar9;
  fVar21 = auVar18._4_4_ * auVar24._4_4_ - fVar6 * (float)((ulong)uVar9 >> 0x20);
  fVar15 = fVar5 * fVar15 - fVar7 * auVar24._0_4_;
  fVar5 = fVar6 * fVar17 - fVar25 * auVar24._4_4_;
  auVar1._4_4_ = fVar21;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar15;
  auVar1._12_4_ = fVar5;
  auVar2._4_4_ = fVar21;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar15;
  auVar2._12_4_ = fVar5;
  auVar18 = NEON_ext(auVar1,auVar2,4,1);
  *(ulong *)(param_1 + 0x58) = CONCAT44(fVar21,fVar8);
  *(long *)(param_1 + 0x50) = auVar18._0_8_;
  *(undefined8 *)(param_1 + 0x68) = auVar11._0_8_;
  *(long *)(param_1 + 0x60) = auVar24._0_8_;
  uVar9 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  fVar7 = (float)param_7[1];
  fVar5 = (float)*param_7;
  fVar6 = (float)((ulong)*param_7 >> 0x20);
  fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar15 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  uVar9 = CONCAT44(fVar15,fVar8);
  uVar22 = NEON_frsqrte(uVar9,4);
  fVar21 = (float)uVar22;
  fVar25 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar9,CONCAT44(fVar25 * fVar25,fVar21 * fVar21),4);
  fVar21 = fVar21 * (float)uVar22;
  fVar25 = fVar25 * (float)((ulong)uVar22 >> 0x20);
  iVar16 = -(uint)(fVar8 <= 0.0);
  iVar19 = -(uint)(fVar15 <= 0.0);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar25 * fVar25,fVar21 * fVar21),4);
  fVar21 = (float)uVar9 * fVar21;
  fVar25 = (float)((ulong)uVar9 >> 0x20) * fVar25;
  fVar8 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                          CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                   CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                            SUB41(fVar21,0) & ~(byte)iVar16)));
  fVar5 = fVar5 * fVar8;
  fVar25 = (float)(CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                            CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                     CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar19 >> 8)
                                              ,CONCAT14(SUB41(fVar25,0) & ~(byte)iVar19,fVar8)))) >>
                  0x20);
  fVar6 = fVar6 * fVar25;
  fVar7 = fVar7 * fVar8;
  fVar25 = (float)((ulong)param_7[1] >> 0x20) * fVar25;
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar25,fVar7);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar6,fVar5);
  fVar8 = *param_5;
  fVar21 = param_5[1];
  fVar15 = param_5[2];
  fVar17 = fVar8 * fVar8 + fVar21 * fVar21 + fVar15 * fVar15;
  fVar20 = fVar8 * fVar8 + fVar21 * fVar21 + fVar15 * fVar15;
  uVar9 = CONCAT44(fVar20,fVar17);
  uVar22 = NEON_frsqrte(uVar9,4);
  fVar26 = (float)uVar22;
  fVar27 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar9,CONCAT44(fVar27 * fVar27,fVar26 * fVar26),4);
  fVar26 = fVar26 * (float)uVar22;
  fVar27 = fVar27 * (float)((ulong)uVar22 >> 0x20);
  iVar16 = -(uint)(fVar17 <= 0.0);
  iVar19 = -(uint)(fVar20 <= 0.0);
  uVar9 = NEON_frsqrts(uVar9,CONCAT44(fVar27 * fVar27,fVar26 * fVar26),4);
  fVar26 = (float)uVar9 * fVar26;
  fVar27 = (float)((ulong)uVar9 >> 0x20) * fVar27;
  fVar17 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar26,0) & ~(byte)iVar16)));
  auVar12._0_4_ = fVar8 * fVar17;
  fVar8 = (float)(CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                           CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                    CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                             CONCAT14(SUB41(fVar27,0) & ~(byte)iVar19,fVar17)))) >>
                 0x20);
  auVar12._4_4_ = fVar21 * fVar8;
  auVar12._8_4_ = fVar15 * fVar17;
  auVar12._12_4_ = param_5[3] * fVar8;
  auVar3._4_4_ = fVar6;
  auVar3._0_4_ = fVar5;
  auVar3._8_4_ = fVar7;
  auVar3._12_4_ = fVar25;
  auVar4._4_4_ = fVar6;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar25;
  auVar18 = NEON_ext(auVar3,auVar4,4,1);
  auVar24 = NEON_ext(auVar12,auVar12,4,1);
  fVar8 = fVar5 * auVar24._0_4_ - auVar18._0_4_ * auVar12._0_4_;
  fVar21 = fVar6 * auVar24._4_4_ - auVar18._4_4_ * auVar12._4_4_;
  auVar13._0_8_ = CONCAT44(fVar21,fVar8);
  auVar13._8_4_ = fVar7 * auVar12._0_4_ - fVar5 * auVar12._8_4_;
  auVar13._12_4_ = fVar25 * auVar12._4_4_ - fVar6 * auVar12._12_4_;
  auVar24 = NEON_ext(auVar13,auVar13,4,1);
  uVar23 = auVar24._0_8_;
  uVar9 = NEON_ext(uVar23,auVar13._0_8_,4,1);
  auVar14._0_8_ =
       CONCAT44(auVar18._4_4_ * auVar24._4_4_ - fVar6 * (float)((ulong)uVar9 >> 0x20),
                auVar18._0_4_ * auVar24._0_4_ - fVar5 * (float)uVar9);
  auVar14._8_4_ = fVar5 * fVar8 - fVar7 * auVar24._0_4_;
  auVar14._12_4_ = fVar6 * fVar21 - fVar25 * auVar24._4_4_;
  auVar18 = NEON_ext(auVar14,auVar14,4,1);
  *(undefined8 *)(param_1 + 0x98) = auVar14._0_8_;
  *(long *)(param_1 + 0x90) = auVar18._0_8_;
  *(undefined8 *)(param_1 + 0xa8) = auVar13._0_8_;
  *(undefined8 *)(param_1 + 0xa0) = uVar23;
  uVar9 = *param_3;
  uVar22 = param_3[1];
  *(ulong *)(param_1 + 0xe8) = CONCAT44(fVar25,fVar7);
  *(ulong *)(param_1 + 0xe0) = CONCAT44(fVar6,fVar5);
  *(undefined8 *)(param_1 + 0xf8) = auVar14._0_8_;
  *(long *)(param_1 + 0xf0) = auVar18._0_8_;
  *(undefined8 *)(param_1 + 0xb8) = uVar22;
  *(undefined8 *)(param_1 + 0xb0) = uVar9;
  *(undefined8 *)(param_1 + 0x108) = auVar13._0_8_;
  *(undefined8 *)(param_1 + 0x100) = uVar23;
  return;
}


