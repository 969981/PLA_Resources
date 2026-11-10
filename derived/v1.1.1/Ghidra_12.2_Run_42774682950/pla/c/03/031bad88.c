/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bad88; name: FUN_031bad88
 */


void FUN_031bad88(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3,
                 undefined8 *param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  float fVar36;
  int iVar37;
  undefined8 uVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  
  fVar9 = (float)param_3[1];
  fVar7 = (float)*param_3;
  fVar8 = (float)((ulong)*param_3 >> 0x20);
  fVar11 = (float)*param_1;
  fVar46 = fVar11 - fVar7;
  fVar12 = (float)((ulong)*param_1 >> 0x20);
  fVar49 = fVar12 - fVar8;
  fVar13 = (float)param_1[1];
  fVar19 = fVar13 - fVar9;
  auVar2 = *param_2;
  fVar7 = fVar7 - fVar11;
  fVar8 = fVar8 - fVar12;
  fVar9 = fVar9 - fVar13;
  fVar14 = (float)((ulong)param_1[1] >> 0x20);
  fVar46 = fVar46 * fVar46;
  fVar49 = fVar49 * fVar49;
  fVar19 = fVar19 * fVar19;
  fVar3 = fVar46 + fVar49 + fVar19;
  fVar19 = fVar46 + fVar49 + fVar19;
  uVar15 = SUB41(fVar19,0);
  uVar16 = (undefined1)((uint)fVar19 >> 8);
  uVar17 = (undefined1)((uint)fVar19 >> 0x10);
  uVar18 = (undefined1)((uint)fVar19 >> 0x18);
  uVar38 = NEON_frsqrte(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar3)))),4)
  ;
  fVar41 = auVar2._0_4_;
  fVar46 = fVar7 * fVar41;
  fVar44 = auVar2._4_4_;
  fVar49 = fVar8 * fVar44;
  fVar21 = auVar2._8_4_;
  fVar51 = fVar9 * fVar21;
  fVar47 = fVar46 + fVar49 + fVar51;
  fVar51 = fVar46 + fVar49 + fVar51;
  auVar53 = NEON_ext(auVar2,auVar2,8,1);
  uVar52 = NEON_ext(auVar2._0_8_,auVar53._0_8_,4,1);
  fVar46 = (float)uVar38;
  fVar49 = (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frsqrts(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar3)))),
                        CONCAT44(fVar49 * fVar49,fVar46 * fVar46),4);
  fVar46 = fVar46 * (float)uVar38;
  fVar49 = fVar49 * (float)((ulong)uVar38 >> 0x20);
  iVar20 = -(uint)(fVar3 <= 0.0);
  iVar22 = -(uint)(fVar19 <= 0.0);
  fVar36 = fVar41 * fVar47;
  fVar39 = fVar44 * fVar51;
  fVar47 = fVar21 * fVar47;
  fVar51 = auVar2._12_4_ * fVar51;
  fVar7 = fVar7 - fVar36;
  fVar8 = fVar8 - fVar39;
  fVar9 = fVar9 - fVar47;
  fVar10 = ((float)((ulong)param_3[1] >> 0x20) - fVar14) - fVar51;
  uVar38 = NEON_frsqrts(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar3)))),
                        CONCAT44(fVar49 * fVar49,fVar46 * fVar46),4);
  auVar53._4_4_ = fVar8;
  auVar53._0_4_ = fVar7;
  auVar53._8_4_ = fVar9;
  auVar53._12_4_ = fVar10;
  auVar1._4_4_ = fVar8;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = fVar10;
  auVar53 = NEON_ext(auVar53,auVar1,4,1);
  fVar3 = fVar3 * (float)uVar38 * fVar46;
  fVar19 = fVar19 * (float)((ulong)uVar38 >> 0x20) * fVar49;
  fVar6 = (float)uVar52 * fVar7 - fVar41 * auVar53._0_4_;
  fVar46 = (float)((ulong)uVar52 >> 0x20) * fVar8 - fVar44 * auVar53._4_4_;
  uVar18 = SUB41(fVar46,0);
  uVar29 = (undefined1)((uint)fVar46 >> 8);
  uVar31 = (undefined1)((uint)fVar46 >> 0x10);
  uVar33 = (undefined1)((uint)fVar46 >> 0x18);
  fVar46 = fVar41 * fVar9 - fVar21 * fVar7;
  fVar49 = fVar44 * fVar10 - auVar2._12_4_ * fVar8;
  auVar4[4] = uVar18;
  auVar4._0_4_ = fVar6;
  auVar4[5] = uVar29;
  auVar4[6] = uVar31;
  auVar4[7] = uVar33;
  auVar4._8_4_ = fVar46;
  auVar4._12_4_ = fVar49;
  auVar5[4] = uVar18;
  auVar5._0_4_ = fVar6;
  auVar5[5] = uVar29;
  auVar5[6] = uVar31;
  auVar5[7] = uVar33;
  auVar5._8_4_ = fVar46;
  auVar5._12_4_ = fVar49;
  auVar53 = NEON_ext(auVar4,auVar5,4,1);
  fVar21 = auVar53._0_4_;
  fVar23 = auVar53._4_4_;
  fVar46 = fVar21 * fVar21 + fVar23 * fVar23 + fVar6 * fVar6;
  fVar41 = fVar21 * fVar21 + fVar23 * fVar23 + fVar6 * fVar6;
  uVar15 = SUB41(fVar41,0);
  uVar16 = (undefined1)((uint)fVar41 >> 8);
  uVar17 = (undefined1)((uint)fVar41 >> 0x10);
  uVar34 = (undefined1)((uint)fVar41 >> 0x18);
  uVar38 = NEON_frsqrte(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar46)))),4
                       );
  fVar49 = (float)uVar38;
  fVar44 = (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frsqrts(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar46)))),
                        CONCAT44(fVar44 * fVar44,fVar49 * fVar49),4);
  fVar49 = fVar49 * (float)uVar38;
  fVar44 = fVar44 * (float)((ulong)uVar38 >> 0x20);
  iVar37 = -(uint)(fVar46 <= 0.0);
  iVar40 = -(uint)(fVar41 <= 0.0);
  uVar38 = NEON_frsqrts(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar46)))),
                        CONCAT44(fVar44 * fVar44,fVar49 * fVar49),4);
  fVar49 = (float)uVar38 * fVar49;
  fVar44 = (float)((ulong)uVar38 >> 0x20) * fVar44;
  bVar24 = SUB41(fVar49,0) & ~(byte)iVar37;
  bVar25 = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar37 >> 8);
  bVar26 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
  bVar27 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
  bVar28 = SUB41(fVar44,0) & ~(byte)iVar40;
  bVar30 = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar40 >> 8);
  bVar32 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
  bVar35 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
  uVar38 = NEON_fmin(CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                              CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                       CONCAT15((byte)((uint)fVar19 >> 8) &
                                                ~(byte)((uint)iVar22 >> 8),
                                                CONCAT14(SUB41(fVar19,0) & ~(byte)iVar22,
                                                         CONCAT13((byte)((uint)fVar3 >> 0x18) &
                                                                  ~(byte)((uint)iVar20 >> 0x18),
                                                                  CONCAT12((byte)((uint)fVar3 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar20 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  fVar3 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                                  SUB41(fVar3,0) & ~(byte)iVar20))))))),*param_4,4);
  fVar41 = (float)CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
  fVar49 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  fVar19 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  uVar15 = SUB41(fVar19,0);
  uVar16 = (undefined1)((uint)fVar19 >> 8);
  uVar17 = (undefined1)((uint)fVar19 >> 0x10);
  uVar34 = (undefined1)((uint)fVar19 >> 0x18);
  uVar52 = NEON_frsqrte(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar49)))),4
                       );
  fVar46 = (float)uVar52;
  fVar45 = (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frsqrts(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar49)))),
                        CONCAT44(fVar45 * fVar45,fVar46 * fVar46),4);
  fVar46 = fVar46 * (float)uVar52;
  fVar45 = fVar45 * (float)((ulong)uVar52 >> 0x20);
  uVar52 = NEON_frsqrts(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar49)))),
                        CONCAT44(fVar45 * fVar45,fVar46 * fVar46),4);
  iVar20 = -(uint)(fVar49 <= 0.0);
  iVar22 = -(uint)(fVar19 <= 0.0);
  fVar46 = (float)uVar52 * fVar46;
  fVar45 = (float)((ulong)uVar52 >> 0x20) * fVar45;
  fVar44 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                           CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                    CONCAT11((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                             SUB41(fVar46,0) & ~(byte)iVar20)));
  fVar46 = (float)uVar38;
  fVar3 = (float)((ulong)uVar38 >> 0x20);
  fVar49 = fVar49 - fVar46 * fVar46;
  fVar19 = fVar19 - fVar3 * fVar3;
  uVar15 = SUB41(fVar19,0);
  uVar16 = (undefined1)((uint)fVar19 >> 8);
  uVar17 = (undefined1)((uint)fVar19 >> 0x10);
  uVar34 = (undefined1)((uint)fVar19 >> 0x18);
  uVar38 = NEON_frsqrte(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar49)))),4
                       );
  fVar48 = (float)uVar38;
  fVar50 = (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frsqrts(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar49)))),
                        CONCAT44(fVar50 * fVar50,fVar48 * fVar48),4);
  fVar48 = fVar48 * (float)uVar38;
  fVar50 = fVar50 * (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frsqrts(CONCAT17(uVar34,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,fVar49)))),
                        CONCAT44(fVar50 * fVar50,fVar48 * fVar48),4);
  iVar20 = -(uint)(fVar49 <= 0.0);
  iVar37 = -(uint)(fVar19 <= 0.0);
  fVar48 = fVar49 * (float)uVar38 * fVar48;
  fVar50 = fVar19 * (float)((ulong)uVar38 >> 0x20) * fVar50;
  fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar20)));
  fVar46 = fVar44 * fVar46 * fVar48;
  fVar45 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                            CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                     CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar22 >> 8)
                                              ,CONCAT14(SUB41(fVar45,0) & ~(byte)iVar22,fVar44))))
                  >> 0x20);
  fVar3 = fVar45 * fVar3 * (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) &
                                            ~(byte)((uint)iVar37 >> 0x18),
                                            CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                                     ~(byte)((uint)iVar37 >> 0x10),
                                                     CONCAT15((byte)((uint)fVar50 >> 8) &
                                                              ~(byte)((uint)iVar37 >> 8),
                                                              CONCAT14(SUB41(fVar50,0) &
                                                                       ~(byte)iVar37,fVar48)))) >>
                                  0x20);
  uVar15 = (undefined1)((uint)fVar3 >> 8);
  uVar16 = (undefined1)((uint)fVar3 >> 0x10);
  uVar17 = (undefined1)((uint)fVar3 >> 0x18);
  auVar43._0_8_ = CONCAT44(-fVar3,-fVar46);
  auVar43._8_8_ = auVar43._0_8_;
  auVar42._0_4_ = -(uint)(param_5 == 1);
  auVar42._4_4_ = auVar42._0_4_;
  auVar42._8_4_ = auVar42._0_4_;
  auVar42._12_4_ = auVar42._0_4_;
  auVar2[4] = SUB41(fVar3,0);
  auVar2._0_4_ = fVar46;
  auVar2[5] = uVar15;
  auVar2[6] = uVar16;
  auVar2[7] = uVar17;
  auVar2._8_4_ = fVar46;
  auVar2._12_4_ =
       (int)(CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(SUB41(fVar3,0),fVar46)))) >>
            0x20);
  auVar43 = auVar43 ^ (auVar43 ^ auVar2) & auVar42;
  fVar49 = fVar49 * fVar44;
  fVar19 = fVar19 * fVar45;
  param_3[1] = CONCAT44((float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                                         CONCAT16((char)((uint)fVar19 >> 0x10),
                                                  CONCAT15((char)((uint)fVar19 >> 8),
                                                           CONCAT14(SUB41(fVar19,0),fVar49)))) >>
                               0x20) * fVar10 * fVar45 +
                        fVar14 + fVar51 +
                        auVar43._12_4_ *
                        (float)(CONCAT17(uVar33,CONCAT16(uVar31,CONCAT15(uVar29,CONCAT14(uVar18,
                                                  fVar6)))) >> 0x20) *
                        (float)(CONCAT17(bVar35,CONCAT16(bVar32,CONCAT15(bVar30,CONCAT14(bVar28,
                                                  fVar41)))) >> 0x20),
                        fVar49 * fVar9 * fVar44 + fVar13 + fVar47 + auVar43._8_4_ * fVar6 * fVar41);
  *param_3 = CONCAT44(fVar19 * fVar8 * fVar45 +
                      fVar12 + fVar39 +
                      auVar43._4_4_ *
                      fVar23 * (float)CONCAT13(bVar35,CONCAT12(bVar32,CONCAT11(bVar30,bVar28))),
                      fVar49 * fVar7 * fVar44 +
                      fVar11 + fVar36 +
                      auVar43._0_4_ *
                      fVar21 * (float)CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24))));
  return;
}


