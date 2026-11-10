/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fda744; name: FUN_02fda744
 */


void FUN_02fda744(long *param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar8;
  undefined1 auVar7 [16];
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  int iVar23;
  float fVar26;
  undefined8 uVar24;
  int iVar27;
  undefined1 auVar25 [16];
  undefined8 uVar28;
  float fVar30;
  undefined1 auVar29 [16];
  
  FUN_02fda54c();
  lVar4 = *param_1;
  iVar23 = *(int *)(lVar4 + 0x40);
  if (iVar23 == 0) {
    pfVar6 = (float *)0x0;
  }
  else {
    pfVar6 = (float *)((long)iVar23 + lVar4 + 0x40);
  }
  iVar23 = *(int *)(lVar4 + 0x48);
  if (iVar23 == 0) {
    pfVar5 = (float *)0x0;
  }
  else {
    pfVar5 = (float *)((long)iVar23 + lVar4 + 0x48);
  }
  fVar30 = *param_2;
  fVar22 = param_2[1];
  fVar26 = param_2[2];
  fVar3 = param_2[3];
  fVar20 = (float)*param_3 - fVar30;
  fVar18 = (float)((ulong)*param_3 >> 0x20) - fVar22;
  uVar9 = SUB41(fVar18,0);
  uVar11 = (undefined1)((uint)fVar18 >> 8);
  uVar13 = (undefined1)((uint)fVar18 >> 0x10);
  uVar15 = (undefined1)((uint)fVar18 >> 0x18);
  fVar17 = (float)param_3[1] - fVar26;
  fVar19 = (float)((ulong)param_3[1] >> 0x20) - fVar3;
  auVar21._0_4_ = *param_4 - fVar30;
  auVar21._4_4_ = param_4[1] - fVar22;
  auVar21._8_4_ = param_4[2] - fVar26;
  auVar21._12_4_ = param_4[3] - fVar3;
  auVar29 = NEON_ext(auVar21,auVar21,4,1);
  auVar25[4] = uVar9;
  auVar25._0_4_ = fVar20;
  auVar25[5] = uVar11;
  auVar25[6] = uVar13;
  auVar25[7] = uVar15;
  auVar25._8_4_ = fVar17;
  auVar25._12_4_ = fVar19;
  auVar1[4] = uVar9;
  auVar1._0_4_ = fVar20;
  auVar1[5] = uVar11;
  auVar1[6] = uVar13;
  auVar1[7] = uVar15;
  auVar1._8_4_ = fVar17;
  auVar1._12_4_ = fVar19;
  auVar25 = NEON_ext(auVar25,auVar1,4,1);
  *pfVar6 = fVar30;
  pfVar6[1] = fVar22;
  pfVar6[2] = fVar26;
  fVar8 = fVar20 * auVar29._0_4_ - auVar21._0_4_ * auVar25._0_4_;
  fVar18 = fVar18 * auVar29._4_4_ - auVar21._4_4_ * auVar25._4_4_;
  uVar10 = SUB41(fVar18,0);
  uVar12 = (undefined1)((uint)fVar18 >> 8);
  uVar14 = (undefined1)((uint)fVar18 >> 0x10);
  uVar16 = (undefined1)((uint)fVar18 >> 0x18);
  fVar18 = fVar17 * auVar21._0_4_ - auVar21._8_4_ * fVar20;
  fVar20 = fVar19 * auVar21._4_4_ -
           auVar21._12_4_ *
           (float)(CONCAT17(uVar15,CONCAT16(uVar13,CONCAT15(uVar11,CONCAT14(uVar9,fVar20)))) >> 0x20
                  );
  auVar29[4] = uVar10;
  auVar29._0_4_ = fVar8;
  auVar29[5] = uVar12;
  auVar29[6] = uVar14;
  auVar29[7] = uVar16;
  auVar29._8_4_ = fVar18;
  auVar29._12_4_ = fVar20;
  auVar2[4] = uVar10;
  auVar2._0_4_ = fVar8;
  auVar2[5] = uVar12;
  auVar2[6] = uVar14;
  auVar2[7] = uVar16;
  auVar2._8_4_ = fVar18;
  auVar2._12_4_ = fVar20;
  auVar25 = NEON_ext(auVar29,auVar2,4,1);
  fVar17 = auVar25._0_4_;
  fVar19 = auVar25._4_4_;
  auVar7._0_4_ = fVar30 * fVar17;
  auVar7._4_4_ = fVar22 * fVar19;
  auVar7._8_4_ = fVar26 * fVar8;
  auVar7._12_4_ =
       fVar3 * (float)(CONCAT17(uVar16,CONCAT16(uVar14,CONCAT15(uVar12,CONCAT14(uVar10,fVar8)))) >>
                      0x20);
  fVar22 = fVar17 * fVar17 + fVar19 * fVar19 + fVar8 * fVar8;
  fVar26 = fVar17 * fVar17 + fVar19 * fVar19 + fVar8 * fVar8;
  uVar24 = CONCAT44(fVar26,fVar22);
  uVar28 = NEON_frsqrte(uVar24,4);
  fVar20 = (float)uVar28;
  fVar30 = (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(uVar24,CONCAT44(fVar30 * fVar30,fVar20 * fVar20),4);
  fVar20 = fVar20 * (float)uVar28;
  fVar30 = fVar30 * (float)((ulong)uVar28 >> 0x20);
  auVar25 = NEON_ext(auVar7,auVar7,8,1);
  fVar18 = fVar30 * fVar30;
  uVar24 = NEON_frsqrts(uVar24,CONCAT17((char)((uint)fVar18 >> 0x18),
                                        CONCAT16((char)((uint)fVar18 >> 0x10),
                                                 CONCAT15((char)((uint)fVar18 >> 8),
                                                          CONCAT14(SUB41(fVar18,0),fVar20 * fVar20))
                                                )),4);
  uVar28 = param_3[1];
  iVar23 = -(uint)(fVar22 <= 0.0);
  iVar27 = -(uint)(fVar26 <= 0.0);
  fVar20 = (float)uVar24 * fVar20;
  fVar30 = (float)((ulong)uVar24 >> 0x20) * fVar30;
  *(undefined8 *)(pfVar6 + 3) = *param_3;
  pfVar6[5] = (float)uVar28;
  fVar20 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar23)));
  uVar24 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)param_4;
  pfVar6[8] = (float)uVar24;
  uVar24 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(pfVar6 + 9) = *(undefined8 *)param_4;
  fVar17 = fVar17 * fVar20;
  fVar18 = (float)(CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                            CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                     CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar27 >> 8)
                                              ,CONCAT14(SUB41(fVar30,0) & ~(byte)iVar27,fVar20))))
                  >> 0x20);
  fVar19 = fVar19 * fVar18;
  fVar8 = fVar8 * fVar20;
  fVar18 = -(auVar7._0_4_ + auVar7._4_4_ + auVar25._0_4_) * fVar18;
  pfVar6[0xb] = (float)uVar24;
  iVar23 = *(int *)(lVar4 + 0x58);
  *(undefined4 *)(lVar4 + 0x44) = 3;
  if (iVar23 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)iVar23 + lVar4 + 0x58;
  }
  fVar20 = -fVar19;
  *(undefined1 *)(lVar4 + 3) = 0;
  *(undefined1 *)(lVar4 + 7) = 0;
  pfVar5[2] = fVar8;
  pfVar5[3] = fVar18;
  *pfVar5 = fVar17;
  pfVar5[1] = fVar19;
  *(ulong *)(pfVar5 + 6) = CONCAT44(-fVar18,-fVar8);
  *(ulong *)(pfVar5 + 4) =
       CONCAT17((char)((uint)fVar20 >> 0x18),
                CONCAT16((char)((uint)fVar20 >> 0x10),
                         CONCAT15((char)((uint)fVar20 >> 8),CONCAT14(SUB41(fVar20,0),-fVar17))));
  pfVar5[10] = fVar8;
  pfVar5[0xb] = fVar18;
  pfVar5[8] = fVar17;
  pfVar5[9] = fVar19;
  pfVar5[0xe] = fVar8;
  pfVar5[0xf] = fVar18;
  pfVar5[0xc] = fVar17;
  pfVar5[0xd] = fVar19;
  return;
}


