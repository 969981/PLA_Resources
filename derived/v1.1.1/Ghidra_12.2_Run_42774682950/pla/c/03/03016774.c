/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016774; name: FUN_03016774
 */


void FUN_03016774(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar44;
  undefined8 uVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined8 uVar54;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar54 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = (ushort)((ulong)uVar54 >> 0x30);
  uVar6 = 10;
  uVar8 = 0xd7;
  uVar14 = 0x23;
  uVar16 = 0x3c;
  if (NAN((float)((uint)uVar5 << 0x10)) || (float)((uint)uVar5 << 0x10) != 0.0) {
    uVar6 = 0;
    uVar8 = 0;
    uVar14 = (char)((ulong)uVar54 >> 0x30);
    uVar16 = (char)((ulong)uVar54 >> 0x38);
  }
  fVar24 = (float)CONCAT13(uVar16,CONCAT12(uVar14,CONCAT11(uVar8,uVar6)));
  fVar27 = (float)((ulong)*param_2 >> 0x20) - (float)*(double *)(param_1 + 0x18);
  fVar49 = (float)((ulong)param_2[1] >> 0x20) - 0.0;
  uStack_38 = CONCAT17((char)((uint)fVar49 >> 0x18),
                       CONCAT16((char)((uint)fVar49 >> 0x10),
                                CONCAT15((char)((uint)fVar49 >> 8),
                                         CONCAT14(SUB41(fVar49,0),
                                                  (float)param_2[1] -
                                                  (float)*(double *)(param_1 + 0x20)))));
  local_40 = CONCAT17((char)((uint)fVar27 >> 0x18),
                      CONCAT16((char)((uint)fVar27 >> 0x10),
                               CONCAT15((char)((uint)fVar27 >> 8),
                                        CONCAT14(SUB41(fVar27,0),
                                                 (float)*param_2 -
                                                 (float)*(double *)(param_1 + 0x10)))));
  FUN_032c920c(auStack_70,&local_40);
  FUN_03016274(param_1,auStack_a0);
  FUN_032c9038(auStack_d0,auStack_70,auStack_a0);
  FUN_032c9038(&local_100,auStack_d0,auStack_70);
  fVar36 = 0.0 - (float)local_e0;
  fVar28 = (float)((ulong)local_e0 >> 0x20);
  fVar37 = 0.0 - fVar28;
  fVar38 = fVar24 - (float)uStack_d8;
  fVar39 = 0.0 - (float)((ulong)uStack_d8 >> 0x20);
  auVar51._4_4_ = fVar37;
  auVar51._0_4_ = fVar36;
  auVar51._8_4_ = fVar38;
  auVar51._12_4_ = fVar39;
  auVar2._4_4_ = fVar37;
  auVar2._0_4_ = fVar36;
  auVar2._8_4_ = fVar38;
  auVar2._12_4_ = fVar39;
  auVar42 = NEON_ext(auVar51,auVar2,4,1);
  fVar27 = 0.0 - (float)uStack_f0;
  fVar49 = (float)((ulong)uStack_f0 >> 0x20);
  fVar29 = fVar24 - fVar49;
  uVar6 = SUB41(fVar29,0);
  uVar8 = (undefined1)((uint)fVar29 >> 8);
  uVar14 = (undefined1)((uint)fVar29 >> 0x10);
  uVar16 = (undefined1)((uint)fVar29 >> 0x18);
  fVar46 = 0.0 - (float)uStack_e8;
  uVar18 = (undefined1)((uint)fVar46 >> 8);
  uVar19 = (undefined1)((uint)fVar46 >> 0x10);
  uVar20 = (undefined1)((uint)fVar46 >> 0x18);
  fVar48 = 0.0 - (float)((ulong)uStack_e8 >> 0x20);
  uVar21 = (undefined1)((uint)fVar48 >> 8);
  uVar22 = (undefined1)((uint)fVar48 >> 0x10);
  uVar23 = (undefined1)((uint)fVar48 >> 0x18);
  fVar32 = ABS(0.0 - (float)local_e0);
  fVar33 = ABS(0.0 - fVar28);
  fVar34 = ABS(fVar24 - (float)uStack_d8);
  fVar28 = ABS(0.0 - (float)uStack_f0);
  fVar30 = ABS(fVar24 - fVar49);
  fVar31 = ABS(0.0 - (float)uStack_e8);
  auVar40[4] = uVar6;
  auVar40._0_4_ = fVar27;
  auVar40[5] = uVar8;
  auVar40[6] = uVar14;
  auVar40[7] = uVar16;
  auVar40[8] = SUB41(fVar46,0);
  auVar40[9] = uVar18;
  auVar40[10] = uVar19;
  auVar40[0xb] = uVar20;
  auVar40[0xc] = SUB41(fVar48,0);
  auVar40[0xd] = uVar21;
  auVar40[0xe] = uVar22;
  auVar40[0xf] = uVar23;
  auVar35[4] = uVar6;
  auVar35._0_4_ = fVar27;
  auVar35[5] = uVar8;
  auVar35[6] = uVar14;
  auVar35[7] = uVar16;
  auVar35[8] = SUB41(fVar46,0);
  auVar35[9] = uVar18;
  auVar35[10] = uVar19;
  auVar35[0xb] = uVar20;
  auVar35[0xc] = SUB41(fVar48,0);
  auVar35[0xd] = uVar21;
  auVar35[0xe] = uVar22;
  auVar35[0xf] = uVar23;
  auVar40 = NEON_ext(auVar40,auVar35,4,1);
  auVar25._0_4_ = fVar24 - local_100;
  auVar25._4_4_ = 0.0 - fStack_fc;
  auVar25._8_4_ = 0.0 - fStack_f8;
  auVar25._12_4_ = 0.0 - fStack_f4;
  auVar52 = NEON_ext(auVar25,auVar25,4,1);
  fVar41 = (float)(CONCAT17(uVar16,CONCAT16(uVar14,CONCAT15(uVar8,CONCAT14(uVar6,fVar27)))) >> 0x20)
  ;
  fVar45 = fVar27 * auVar42._0_4_ - fVar36 * auVar40._0_4_;
  fVar47 = fVar29 * auVar42._4_4_ - fVar37 * auVar40._4_4_;
  fVar49 = fVar46 * fVar36 - fVar38 * fVar27;
  fVar50 = fVar48 * fVar37 - fVar39 * fVar41;
  auVar3._4_4_ = fVar47;
  auVar3._0_4_ = fVar45;
  auVar3._8_4_ = fVar49;
  auVar3._12_4_ = fVar50;
  auVar4._4_4_ = fVar47;
  auVar4._0_4_ = fVar45;
  auVar4._8_4_ = fVar49;
  auVar4._12_4_ = fVar50;
  auVar51 = NEON_ext(auVar3,auVar4,4,1);
  fVar49 = auVar25._0_4_ * auVar51._0_4_;
  fVar44 = auVar25._4_4_ * auVar51._4_4_;
  fVar50 = fVar49 + fVar44 + auVar25._8_4_ * fVar45;
  fVar44 = fVar49 + fVar44 + auVar25._8_4_ * fVar45;
  uVar43 = CONCAT44(fVar44,fVar50);
  uVar54 = NEON_frecpe(uVar43,4);
  uVar53 = NEON_frecps(uVar43,uVar54,4);
  auVar26._0_4_ = fVar36 * auVar52._0_4_ - auVar25._0_4_ * auVar42._0_4_;
  auVar26._4_4_ = fVar37 * auVar52._4_4_ - auVar25._4_4_ * auVar42._4_4_;
  auVar26._8_4_ = fVar38 * auVar25._0_4_ - auVar25._8_4_ * fVar36;
  auVar26._12_4_ = fVar39 * auVar25._4_4_ - auVar25._12_4_ * fVar37;
  auVar35 = NEON_ext(auVar26,auVar26,4,1);
  fVar49 = auVar25._0_4_ * auVar40._0_4_ - fVar27 * auVar52._0_4_;
  fVar29 = auVar25._4_4_ * auVar40._4_4_ - fVar29 * auVar52._4_4_;
  uVar6 = SUB41(fVar29,0);
  uVar8 = (undefined1)((uint)fVar29 >> 8);
  uVar14 = (undefined1)((uint)fVar29 >> 0x10);
  uVar16 = (undefined1)((uint)fVar29 >> 0x18);
  fVar27 = auVar25._8_4_ * fVar27 - fVar46 * auVar25._0_4_;
  uVar18 = (undefined1)((uint)fVar27 >> 8);
  uVar19 = (undefined1)((uint)fVar27 >> 0x10);
  uVar20 = (undefined1)((uint)fVar27 >> 0x18);
  fVar29 = auVar25._12_4_ * fVar41 - fVar48 * auVar25._4_4_;
  uVar21 = (undefined1)((uint)fVar29 >> 8);
  uVar22 = (undefined1)((uint)fVar29 >> 0x10);
  uVar23 = (undefined1)((uint)fVar29 >> 0x18);
  fVar46 = (float)uVar54 * (float)uVar53;
  fVar48 = (float)((ulong)uVar54 >> 0x20) * (float)((ulong)uVar53 >> 0x20);
  auVar42[4] = uVar6;
  auVar42._0_4_ = fVar49;
  auVar42[5] = uVar8;
  auVar42[6] = uVar14;
  auVar42[7] = uVar16;
  auVar42[8] = SUB41(fVar27,0);
  auVar42[9] = uVar18;
  auVar42[10] = uVar19;
  auVar42[0xb] = uVar20;
  auVar42[0xc] = SUB41(fVar29,0);
  auVar42[0xd] = uVar21;
  auVar42[0xe] = uVar22;
  auVar42[0xf] = uVar23;
  auVar52[4] = uVar6;
  auVar52._0_4_ = fVar49;
  auVar52[5] = uVar8;
  auVar52[6] = uVar14;
  auVar52[7] = uVar16;
  auVar52[8] = SUB41(fVar27,0);
  auVar52[9] = uVar18;
  auVar52[10] = uVar19;
  auVar52[0xb] = uVar20;
  auVar52[0xc] = SUB41(fVar29,0);
  auVar52[0xd] = uVar21;
  auVar52[0xe] = uVar22;
  auVar52[0xf] = uVar23;
  auVar40 = NEON_ext(auVar42,auVar52,4,1);
  iVar1 = -(uint)((ABS(0.0 - fStack_f8) + ABS(fVar24 - local_100) + ABS(0.0 - fStack_fc)) *
                  1.1920929e-07 * (fVar31 + fVar28 + fVar30) * (fVar34 + fVar32 + fVar33) <
                 ABS(fVar50));
  bVar7 = (byte)iVar1;
  bVar9 = (byte)((uint)iVar1 >> 8);
  bVar10 = (byte)((uint)iVar1 >> 0x10);
  bVar11 = (byte)((uint)iVar1 >> 0x18);
  iVar1 = -(uint)((ABS(0.0 - fStack_f8) + ABS(fVar24 - local_100) + ABS(0.0 - fStack_fc)) *
                  1.1920929e-07 * (fVar31 + fVar28 + fVar30) * (fVar34 + fVar32 + fVar33) <
                 ABS(fVar44));
  bVar12 = (byte)iVar1;
  bVar13 = (byte)((uint)iVar1 >> 8);
  bVar15 = (byte)((uint)iVar1 >> 0x10);
  bVar17 = (byte)((uint)iVar1 >> 0x18);
  uVar54 = NEON_frecps(uVar43,CONCAT44(fVar48,fVar46),4);
  fVar46 = fVar46 * (float)uVar54;
  fVar48 = fVar48 * (float)((ulong)uVar54 >> 0x20);
  fVar29 = auVar51._0_4_ * fVar46;
  fVar28 = auVar51._4_4_ * fVar48;
  fVar45 = fVar45 * fVar46;
  fVar47 = fVar47 * fVar48;
  fVar30 = auVar35._0_4_ * fVar46;
  fVar31 = auVar35._4_4_ * fVar48;
  fVar32 = auVar26._0_4_ * fVar46;
  fVar33 = auVar26._4_4_ * fVar48;
  fVar24 = auVar40._0_4_ * fVar46;
  fVar27 = auVar40._4_4_ * fVar48;
  fVar46 = fVar49 * fVar46;
  fVar48 = (float)(CONCAT17(uVar16,CONCAT16(uVar14,CONCAT15(uVar8,CONCAT14(uVar6,fVar49)))) >> 0x20)
           * fVar48;
  param_3[1] = CONCAT17(bVar17 & (byte)((uint)fVar47 >> 0x18),
                        CONCAT16(bVar15 & (byte)((uint)fVar47 >> 0x10),
                                 CONCAT15(bVar13 & (byte)((uint)fVar47 >> 8),
                                          CONCAT14(bVar12 & SUB41(fVar47,0),
                                                   CONCAT13(bVar11 & (byte)((uint)fVar45 >> 0x18),
                                                            CONCAT12(bVar10 & (byte)((uint)fVar45 >>
                                                                                    0x10),
                                                                     CONCAT11(bVar9 & (byte)((uint)
                                                  fVar45 >> 8),bVar7 & SUB41(fVar45,0))))))));
  *param_3 = CONCAT17(bVar17 & (byte)((uint)fVar28 >> 0x18),
                      CONCAT16(bVar15 & (byte)((uint)fVar28 >> 0x10),
                               CONCAT15(bVar13 & (byte)((uint)fVar28 >> 8),
                                        CONCAT14(bVar12 & SUB41(fVar28,0),
                                                 CONCAT13(bVar11 & (byte)((uint)fVar29 >> 0x18),
                                                          CONCAT12(bVar10 & (byte)((uint)fVar29 >>
                                                                                  0x10),
                                                                   CONCAT11(bVar9 & (byte)((uint)
                                                  fVar29 >> 8),bVar7 & SUB41(fVar29,0))))))));
  *(byte *)(param_3 + 3) = bVar7 & SUB41(fVar32,0);
  *(byte *)((long)param_3 + 0x19) = bVar9 & (byte)((uint)fVar32 >> 8);
  *(byte *)((long)param_3 + 0x1a) = bVar10 & (byte)((uint)fVar32 >> 0x10);
  *(byte *)((long)param_3 + 0x1b) = bVar11 & (byte)((uint)fVar32 >> 0x18);
  *(byte *)((long)param_3 + 0x1c) = bVar12 & SUB41(fVar33,0);
  *(byte *)((long)param_3 + 0x1d) = bVar13 & (byte)((uint)fVar33 >> 8);
  *(byte *)((long)param_3 + 0x1e) = bVar15 & (byte)((uint)fVar33 >> 0x10);
  *(byte *)((long)param_3 + 0x1f) = bVar17 & (byte)((uint)fVar33 >> 0x18);
  *(byte *)(param_3 + 2) = bVar7 & SUB41(fVar30,0);
  *(byte *)((long)param_3 + 0x11) = bVar9 & (byte)((uint)fVar30 >> 8);
  *(byte *)((long)param_3 + 0x12) = bVar10 & (byte)((uint)fVar30 >> 0x10);
  *(byte *)((long)param_3 + 0x13) = bVar11 & (byte)((uint)fVar30 >> 0x18);
  *(byte *)((long)param_3 + 0x14) = bVar12 & SUB41(fVar31,0);
  *(byte *)((long)param_3 + 0x15) = bVar13 & (byte)((uint)fVar31 >> 8);
  *(byte *)((long)param_3 + 0x16) = bVar15 & (byte)((uint)fVar31 >> 0x10);
  *(byte *)((long)param_3 + 0x17) = bVar17 & (byte)((uint)fVar31 >> 0x18);
  param_3[5] = CONCAT17(bVar17 & (byte)((uint)fVar48 >> 0x18),
                        CONCAT16(bVar15 & (byte)((uint)fVar48 >> 0x10),
                                 CONCAT15(bVar13 & (byte)((uint)fVar48 >> 8),
                                          CONCAT14(bVar12 & SUB41(fVar48,0),
                                                   CONCAT13(bVar11 & (byte)((uint)fVar46 >> 0x18),
                                                            CONCAT12(bVar10 & (byte)((uint)fVar46 >>
                                                                                    0x10),
                                                                     CONCAT11(bVar9 & (byte)((uint)
                                                  fVar46 >> 8),bVar7 & SUB41(fVar46,0))))))));
  param_3[4] = CONCAT17(bVar17 & (byte)((uint)fVar27 >> 0x18),
                        CONCAT16(bVar15 & (byte)((uint)fVar27 >> 0x10),
                                 CONCAT15(bVar13 & (byte)((uint)fVar27 >> 8),
                                          CONCAT14(bVar12 & SUB41(fVar27,0),
                                                   CONCAT13(bVar11 & (byte)((uint)fVar24 >> 0x18),
                                                            CONCAT12(bVar10 & (byte)((uint)fVar24 >>
                                                                                    0x10),
                                                                     CONCAT11(bVar9 & (byte)((uint)
                                                  fVar24 >> 8),bVar7 & SUB41(fVar24,0))))))));
  return;
}


