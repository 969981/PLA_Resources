/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315507c; name: FUN_0315507c
 */


void FUN_0315507c(undefined8 *param_1,float *param_2,undefined1 (*param_3) [12],float *param_4,
                 undefined8 *param_5,undefined1 (*param_6) [12],undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar37;
  undefined1 auVar36 [16];
  int iVar38;
  int iVar40;
  undefined8 uVar39;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  byte bVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar61;
  undefined1 auVar60 [16];
  undefined1 local_c0 [8];
  float fStack_b8;
  undefined8 local_b0;
  float fStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar19 = (float)*param_5 - *param_4;
  fVar20 = (float)((ulong)*param_5 >> 0x20) - param_4[1];
  fVar21 = (float)param_5[1] - param_4[2];
  fVar33 = (float)*(undefined8 *)(*param_6 + 8);
  fVar13 = (float)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
  uStack_88 = *(undefined8 *)*param_6;
  fVar31 = (float)uStack_88;
  fVar11 = (float)((ulong)uStack_88 >> 0x20);
  fVar22 = fVar31 * fVar19;
  fVar25 = fVar11 * fVar20;
  fVar28 = fVar33 * fVar21;
  fVar14 = *param_2 - (float)*param_1;
  fVar16 = param_2[1] - (float)((ulong)*param_1 >> 0x20);
  fVar17 = param_2[2] - (float)param_1[1];
  uStack_38 = *(undefined8 *)(*param_3 + 8);
  fVar59 = (float)uStack_38;
  fVar61 = (float)((ulong)uStack_38 >> 0x20);
  local_40 = *(undefined8 *)*param_3;
  fVar57 = (float)local_40;
  fVar12 = (float)((ulong)local_40 >> 0x20);
  fVar23 = fVar57 * fVar14;
  fVar26 = fVar12 * fVar16;
  fVar29 = fVar59 * fVar17;
  fVar18 = fVar22 + fVar25 + fVar28;
  fVar28 = fVar22 + fVar25 + fVar28;
  fVar22 = fVar23 + fVar26 + fVar29;
  fVar29 = fVar23 + fVar26 + fVar29;
  fVar19 = fVar19 - fVar31 * fVar18;
  fVar20 = fVar20 - fVar11 * fVar28;
  fVar21 = fVar21 - fVar33 * fVar18;
  fVar14 = fVar14 - fVar57 * fVar22;
  fVar16 = fVar16 - fVar12 * fVar29;
  fVar17 = fVar17 - fVar59 * fVar22;
  fVar25 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
  fVar26 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
  uVar35 = NEON_frsqrte(CONCAT44(fVar26,fVar25),4);
  fVar24 = fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17;
  fVar27 = fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17;
  uVar39 = CONCAT44(fVar27,fVar24);
  fVar18 = (float)uVar35;
  fVar22 = (float)((ulong)uVar35 >> 0x20);
  uVar58 = NEON_frsqrts(CONCAT44(fVar26,fVar25),CONCAT44(fVar22 * fVar22,fVar18 * fVar18),4);
  uVar35 = NEON_frsqrte(uVar39,4);
  iVar30 = -(uint)(fVar24 <= 0.0);
  iVar32 = -(uint)(fVar27 <= 0.0);
  fVar18 = fVar18 * (float)uVar58;
  fVar22 = fVar22 * (float)((ulong)uVar58 >> 0x20);
  fVar34 = (float)uVar35;
  fVar37 = (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(uVar39,CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  uVar58 = NEON_frsqrts(CONCAT44(fVar26,fVar25),CONCAT44(fVar22 * fVar22,fVar18 * fVar18),4);
  fVar34 = fVar34 * (float)uVar35;
  fVar37 = fVar37 * (float)((ulong)uVar35 >> 0x20);
  iVar38 = -(uint)(fVar25 <= 0.0);
  iVar40 = -(uint)(fVar26 <= 0.0);
  fVar18 = (float)uVar58 * fVar18;
  fVar22 = (float)((ulong)uVar58 >> 0x20) * fVar22;
  auVar60._12_4_ = fVar61;
  auVar60._0_12_ = *param_3;
  auVar36._12_4_ = fVar61;
  auVar36._0_12_ = *param_3;
  auVar60 = NEON_ext(auVar60,auVar36,8,1);
  uVar58 = NEON_ext(local_40,auVar60._0_8_,4,1);
  fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar38)));
  uVar35 = NEON_frsqrts(uVar39,CONCAT44(fVar37 * fVar37,fVar34 * fVar34),4);
  fVar25 = fVar25 * fVar18;
  fVar23 = (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                            CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar40 >> 8)
                                              ,CONCAT14(SUB41(fVar22,0) & ~(byte)iVar40,fVar18))))
                  >> 0x20);
  fVar26 = fVar26 * fVar23;
  fVar34 = (float)uVar35 * fVar34;
  fVar37 = (float)((ulong)uVar35 >> 0x20) * fVar37;
  fVar19 = fVar19 * fVar18;
  fVar20 = fVar20 * fVar23;
  fVar21 = fVar21 * fVar18;
  fVar23 = (((float)((ulong)param_5[1] >> 0x20) - param_4[3]) - fVar13 * fVar28) * fVar23;
  uVar39 = NEON_frecpe(CONCAT44(fVar26,fVar25),4);
  fVar28 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar34,0) & ~(byte)iVar30)));
  auVar1._12_4_ = fVar13;
  auVar1._0_12_ = *param_6;
  auVar2._12_4_ = fVar13;
  auVar2._0_12_ = *param_6;
  auVar36 = NEON_ext(auVar1,auVar2,8,1);
  uVar35 = NEON_frecps(CONCAT44(fVar26,fVar25),uVar39,4);
  fVar34 = (float)(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                            CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                     CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar32 >> 8)
                                              ,CONCAT14(SUB41(fVar37,0) & ~(byte)iVar32,fVar28))))
                  >> 0x20);
  fVar14 = fVar14 * fVar28;
  fVar16 = fVar16 * fVar34;
  auVar15._0_8_ = CONCAT44(fVar16,fVar14);
  auVar15._8_4_ = fVar17 * fVar28;
  auVar15._12_4_ = ((param_2[3] - (float)((ulong)param_1[1] >> 0x20)) - fVar61 * fVar29) * fVar34;
  fVar17 = (float)uVar39 * (float)uVar35;
  fVar29 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
  auVar60 = NEON_ext(auVar15,auVar15,4,1);
  uVar35 = NEON_frecps(CONCAT44(fVar26,fVar25),CONCAT44(fVar29,fVar17),4);
  uStack_68 = auVar36._0_8_;
  uVar39 = NEON_ext(uStack_88,uStack_68,4,1);
  fVar22 = fVar57 * auVar60._0_4_ - (float)uVar58 * fVar14;
  fVar18 = fVar12 * auVar60._4_4_ - (float)((ulong)uVar58 >> 0x20) * fVar16;
  uVar45 = SUB41(fVar18,0);
  uVar48 = (undefined1)((uint)fVar18 >> 8);
  uVar51 = (undefined1)((uint)fVar18 >> 0x10);
  uVar54 = (undefined1)((uint)fVar18 >> 0x18);
  fVar18 = fVar59 * fVar14 - fVar57 * auVar15._8_4_;
  fVar57 = fVar61 * fVar16 - fVar12 * auVar15._12_4_;
  auVar9[4] = uVar45;
  auVar9._0_4_ = fVar22;
  auVar9[5] = uVar48;
  auVar9[6] = uVar51;
  auVar9[7] = uVar54;
  auVar9._8_4_ = fVar18;
  auVar9._12_4_ = fVar57;
  auVar10[4] = uVar45;
  auVar10._0_4_ = fVar22;
  auVar10[5] = uVar48;
  auVar10[6] = uVar51;
  auVar10[7] = uVar54;
  auVar10._8_4_ = fVar18;
  auVar10._12_4_ = fVar57;
  auVar60 = NEON_ext(auVar9,auVar10,4,1);
  fVar25 = auVar60._0_4_;
  fVar12 = auVar60._4_4_;
  fVar18 = fVar25 * fVar25 + fVar12 * fVar12 + fVar22 * fVar22;
  fVar57 = fVar25 * fVar25 + fVar12 * fVar12 + fVar22 * fVar22;
  uVar46 = SUB41(fVar57,0);
  uVar49 = (undefined1)((uint)fVar57 >> 8);
  uVar52 = (undefined1)((uint)fVar57 >> 0x10);
  uVar55 = (undefined1)((uint)fVar57 >> 0x18);
  uVar58 = NEON_frsqrte(CONCAT17(uVar55,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar46,fVar18)))),4
                       );
  fVar59 = (float)uVar58;
  fVar61 = (float)((ulong)uVar58 >> 0x20);
  uVar58 = NEON_frsqrts(CONCAT17(uVar55,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar46,fVar18)))),
                        CONCAT44(fVar61 * fVar61,fVar59 * fVar59),4);
  fVar59 = fVar59 * (float)uVar58;
  fVar61 = fVar61 * (float)((ulong)uVar58 >> 0x20);
  uVar58 = NEON_frsqrts(CONCAT17(uVar55,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar46,fVar18)))),
                        CONCAT44(fVar61 * fVar61,fVar59 * fVar59),4);
  iVar30 = -(uint)(fVar18 <= 0.0);
  iVar32 = -(uint)(fVar57 <= 0.0);
  fVar59 = (float)uVar58 * fVar59;
  fVar61 = (float)((ulong)uVar58 >> 0x20) * fVar61;
  auVar3._4_4_ = fVar20;
  auVar3._0_4_ = fVar19;
  auVar3._8_4_ = fVar21;
  auVar3._12_4_ = fVar23;
  auVar4._4_4_ = fVar20;
  auVar4._0_4_ = fVar19;
  auVar4._8_4_ = fVar21;
  auVar4._12_4_ = fVar23;
  auVar60 = NEON_ext(auVar3,auVar4,4,1);
  fVar14 = fVar24 * fVar28 * fVar17 * (float)uVar35;
  fVar16 = fVar27 * fVar34 * fVar29 * (float)((ulong)uVar35 >> 0x20);
  bVar41 = SUB41(fVar59,0) & ~(byte)iVar30;
  bVar42 = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar43 = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar44 = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  bVar47 = SUB41(fVar61,0) & ~(byte)iVar32;
  bVar50 = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar32 >> 8);
  bVar53 = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  bVar56 = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  fVar57 = fVar31 * auVar60._0_4_ - (float)uVar39 * fVar19;
  fVar18 = fVar11 * auVar60._4_4_ - (float)((ulong)uVar39 >> 0x20) * fVar20;
  fVar59 = fVar33 * fVar19 - fVar31 * fVar21;
  fVar61 = fVar13 * fVar20 - fVar11 * fVar23;
  auVar7._4_4_ = fVar18;
  auVar7._0_4_ = fVar57;
  auVar7._8_4_ = fVar59;
  auVar7._12_4_ = fVar61;
  auVar8._4_4_ = fVar18;
  auVar8._0_4_ = fVar57;
  auVar8._8_4_ = fVar59;
  auVar8._12_4_ = fVar61;
  auVar60 = NEON_ext(auVar7,auVar8,4,1);
  fVar18 = (float)CONCAT13(bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)));
  fVar59 = auVar60._0_4_;
  fVar61 = auVar60._4_4_;
  fVar12 = fVar12 * (float)CONCAT13(bVar56,CONCAT12(bVar53,CONCAT11(bVar50,bVar47)));
  fVar31 = fVar59 * fVar59 + fVar61 * fVar61 + fVar57 * fVar57;
  fVar33 = fVar59 * fVar59 + fVar61 * fVar61 + fVar57 * fVar57;
  uVar35 = CONCAT44(fVar33,fVar31);
  uStack_58 = auVar15._8_8_;
  uStack_48 = CONCAT44((float)(CONCAT17(uVar54,CONCAT16(uVar51,CONCAT15(uVar48,CONCAT14(uVar45,
                                                  fVar22)))) >> 0x20) *
                       (float)(CONCAT17(bVar56,CONCAT16(bVar53,CONCAT15(bVar50,CONCAT14(bVar47,
                                                  fVar18)))) >> 0x20),fVar22 * fVar18);
  uStack_50 = CONCAT17((char)((uint)fVar12 >> 0x18),
                       CONCAT16((char)((uint)fVar12 >> 0x10),
                                CONCAT15((char)((uint)fVar12 >> 8),
                                         CONCAT14(SUB41(fVar12,0),
                                                  fVar25 * (float)CONCAT13(bVar44,CONCAT12(bVar43,
                                                  CONCAT11(bVar42,bVar41)))))));
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar21;
  auVar5._12_4_ = fVar23;
  auVar6._4_4_ = fVar20;
  auVar6._0_4_ = fVar19;
  auVar6._8_4_ = fVar21;
  auVar6._12_4_ = fVar23;
  auVar60 = NEON_ext(auVar5,auVar6,8,1);
  uVar39 = NEON_frsqrte(uVar35,4);
  fVar18 = (float)uVar39;
  fVar22 = (float)((ulong)uVar39 >> 0x20);
  uVar39 = NEON_frsqrts(uVar35,CONCAT44(fVar22 * fVar22,fVar18 * fVar18),4);
  fVar18 = fVar18 * (float)uVar39;
  fVar22 = fVar22 * (float)((ulong)uVar39 >> 0x20);
  iVar30 = -(uint)(fVar31 <= 0.0);
  iVar32 = -(uint)(fVar33 <= 0.0);
  uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar22 * fVar22,fVar18 * fVar18),4);
  fVar18 = (float)uVar35 * fVar18;
  fVar22 = (float)((ulong)uVar35 >> 0x20) * fVar22;
  fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar30)));
  local_70 = CONCAT44(fVar57 * fVar18,auVar60._0_4_);
  local_90 = CONCAT44(fVar59 * fVar18,fVar19);
  uStack_78 = CONCAT44(auVar36._4_4_,fVar11);
  uStack_80 = CONCAT44(fVar61 * (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) &
                                                 ~(byte)((uint)iVar32 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar22 >> 0x10) &
                                                          ~(byte)((uint)iVar32 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar22 >> 8) &
                                                                   ~(byte)((uint)iVar32 >> 8),
                                                                   CONCAT14(SUB41(fVar22,0) &
                                                                            ~(byte)iVar32,fVar18))))
                                       >> 0x20),fVar20);
  local_60 = auVar15._0_8_;
  FUN_032c9038(local_c0,&local_60,&local_90);
  fVar18 = fVar14 * local_c0._0_4_;
  fVar22 = fVar16 * local_c0._4_4_;
  fVar57 = fVar14 * (float)local_b0;
  fVar12 = fVar16 * (float)((ulong)local_b0 >> 0x20);
  fVar31 = (float)*(undefined8 *)(param_4 + 2);
  fVar59 = (float)*(undefined8 *)param_4;
  fVar61 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  uVar39 = param_1[1];
  uVar35 = *param_1;
  param_7[1] = (ulong)(uint)(fVar14 * fStack_b8);
  *param_7 = CONCAT44(fVar22,fVar18);
  param_7[3] = (ulong)(uint)(fVar14 * fStack_a8);
  param_7[2] = CONCAT44(fVar12,fVar57);
  param_7[5] = (ulong)(uint)(fVar14 * fStack_98);
  param_7[4] = CONCAT44(fVar16 * fStack_9c,fVar14 * local_a0);
  param_7[7] = CONCAT44(0x3f800000,
                        (float)uVar39 -
                        (fVar14 * fStack_98 * fVar31 +
                        fVar14 * fStack_b8 * fVar59 + fVar14 * fStack_a8 * fVar61));
  param_7[6] = CONCAT44((float)((ulong)uVar35 >> 0x20) -
                        (fVar16 * fStack_9c * fVar31 + fVar22 * fVar59 + fVar12 * fVar61),
                        (float)uVar35 -
                        (fVar14 * local_a0 * fVar31 + fVar18 * fVar59 + fVar57 * fVar61));
  return;
}


