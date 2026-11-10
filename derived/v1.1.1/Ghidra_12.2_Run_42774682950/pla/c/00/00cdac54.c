/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cdac54; name: FUN_00cdac54
 */


bool FUN_00cdac54(float param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_a0;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  fVar17 = (float)*param_3;
  auVar24._0_4_ = fVar17 * fVar17;
  auVar24._4_4_ = 0;
  fVar4 = (float)param_3[1];
  auVar24._8_4_ = fVar4 * fVar4;
  fVar6 = (float)((ulong)param_3[1] >> 0x20);
  auVar24._12_4_ = fVar6 * fVar6;
  auVar23 = NEON_ext(auVar24,auVar24,8,1);
  fVar15 = auVar23._0_4_ + auVar24._0_4_;
  fVar19 = auVar23._4_4_ + 0.0;
  fVar8 = fVar15 + fVar19;
  fVar15 = fVar15 + fVar19;
  auVar23._8_8_ = CONCAT44(fVar15,fVar8);
  auVar23._0_8_ = CONCAT44(fVar15,fVar8);
  auVar24 = NEON_frsqrte(auVar23,4);
  auVar26._0_4_ = auVar24._0_4_ * fVar8;
  auVar26._4_4_ = auVar24._4_4_ * fVar15;
  auVar26._8_4_ = auVar24._8_4_ * fVar8;
  auVar26._12_4_ = auVar24._12_4_ * fVar15;
  auVar23 = NEON_frsqrts(auVar24,auVar26,4);
  auVar25._0_4_ = auVar24._0_4_ * auVar23._0_4_;
  auVar25._4_4_ = auVar24._4_4_ * auVar23._4_4_;
  auVar25._8_4_ = auVar24._8_4_ * auVar23._8_4_;
  auVar25._12_4_ = auVar24._12_4_ * auVar23._12_4_;
  auVar27._0_4_ = fVar8 * auVar25._0_4_;
  auVar27._4_4_ = fVar15 * auVar25._4_4_;
  auVar27._8_4_ = fVar8 * auVar25._8_4_;
  auVar27._12_4_ = fVar15 * auVar25._12_4_;
  iVar16 = -(uint)(fVar8 == 0.0);
  iVar20 = -(uint)(fVar15 == 0.0);
  iVar21 = -(uint)(fVar8 == 0.0);
  iVar22 = -(uint)(fVar15 == 0.0);
  auVar18[0] = ~(byte)iVar16;
  auVar18[1] = ~(byte)((uint)iVar16 >> 8);
  auVar18[2] = ~(byte)((uint)iVar16 >> 0x10);
  auVar18[3] = ~(byte)((uint)iVar16 >> 0x18);
  auVar18[4] = ~(byte)iVar20;
  auVar18[5] = ~(byte)((uint)iVar20 >> 8);
  auVar18[6] = ~(byte)((uint)iVar20 >> 0x10);
  auVar18[7] = ~(byte)((uint)iVar20 >> 0x18);
  auVar18[8] = ~(byte)iVar21;
  auVar18[9] = ~(byte)((uint)iVar21 >> 8);
  auVar18[10] = ~(byte)((uint)iVar21 >> 0x10);
  auVar18[0xb] = ~(byte)((uint)iVar21 >> 0x18);
  auVar18[0xc] = ~(byte)iVar22;
  auVar18[0xd] = ~(byte)((uint)iVar22 >> 8);
  auVar18[0xe] = ~(byte)((uint)iVar22 >> 0x10);
  auVar18[0xf] = ~(byte)((uint)iVar22 >> 0x18);
  auVar24 = NEON_frsqrts(auVar25,auVar27,4);
  fVar17 = fVar17 * auVar25._0_4_ * auVar24._0_4_;
  fVar8 = auVar25._4_4_ * auVar24._4_4_ * 0.0;
  fVar4 = fVar4 * auVar25._8_4_ * auVar24._8_4_;
  fVar6 = fVar6 * auVar25._12_4_ * auVar24._12_4_;
  uStack_38 = CONCAT17((byte)((uint)fVar6 >> 0x18) & auVar18[0xf],
                       CONCAT16((byte)((uint)fVar6 >> 0x10) & auVar18[0xe],
                                CONCAT15((byte)((uint)fVar6 >> 8) & auVar18[0xd],
                                         CONCAT14(SUB41(fVar6,0) & auVar18[0xc],
                                                  CONCAT13((byte)((uint)fVar4 >> 0x18) &
                                                           auVar18[0xb],
                                                           CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                                    auVar18[10],
                                                                    CONCAT11((byte)((uint)fVar4 >> 8
                                                                                   ) & auVar18[9],
                                                                             SUB41(fVar4,0) &
                                                                             auVar18[8])))))));
  local_40 = CONCAT17((byte)((uint)fVar8 >> 0x18) & auVar18[7],
                      CONCAT16((byte)((uint)fVar8 >> 0x10) & auVar18[6],
                               CONCAT15((byte)((uint)fVar8 >> 8) & auVar18[5],
                                        CONCAT14(SUB41(fVar8,0) & auVar18[4],
                                                 CONCAT13((byte)((uint)fVar17 >> 0x18) & auVar18[3],
                                                          CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                   auVar18[2],
                                                                   CONCAT11((byte)((uint)fVar17 >> 8
                                                                                  ) & auVar18[1],
                                                                            SUB41(fVar17,0) &
                                                                            auVar18[0])))))));
  local_48 = param_2[1];
  local_50 = *param_2;
  FUN_00cd52dc();
  fVar17 = (float)((ulong)local_50 >> 0x20);
  local_90 = CONCAT44((float)CONCAT13(extraout_var_03,
                                      CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)))
                      + fVar17,(int)local_50);
  fVar17 = auVar18._0_4_ + fVar17;
  uStack_88 = local_48;
  uStack_28 = local_48;
  local_30 = CONCAT17((char)((uint)fVar17 >> 0x18),
                      CONCAT16((char)((uint)fVar17 >> 0x10),
                               CONCAT15((char)((uint)fVar17 >> 8),
                                        CONCAT14(SUB41(fVar17,0),(int)local_50))));
  uVar7 = FUN_01f56878(&local_90,&local_30,param_4,&local_70);
  if ((uVar7 & 1) != 0) {
    local_50 = local_70;
    local_48 = uStack_68;
    uVar7 = FUN_01f56a18(SUB41(param_1,0),&local_50,&local_40,param_4,&local_90);
    if ((uVar7 & 1) != 0) {
      local_a0 = (float)uVar3;
      fStack_98 = (float)uVar5;
      fStack_94 = (float)((ulong)uVar5 >> 0x20);
      local_a0 = local_a0 - (float)local_90;
      fStack_98 = fStack_98 - (float)uStack_88;
      fStack_94 = fStack_94 - (float)((ulong)uStack_88 >> 0x20);
      local_a0 = local_a0 * local_a0;
      fStack_98 = fStack_98 * fStack_98;
      uVar9 = (undefined1)((uint)fStack_98 >> 8);
      uVar10 = (undefined1)((uint)fStack_98 >> 0x10);
      uVar11 = (undefined1)((uint)fStack_98 >> 0x18);
      fStack_94 = fStack_94 * fStack_94;
      uVar12 = (undefined1)((uint)fStack_94 >> 8);
      uVar13 = (undefined1)((uint)fStack_94 >> 0x10);
      uVar14 = (undefined1)((uint)fStack_94 >> 0x18);
      auVar1._4_4_ = 0;
      auVar1._0_4_ = local_a0;
      auVar1[8] = SUB41(fStack_98,0);
      auVar1[9] = uVar9;
      auVar1[10] = uVar10;
      auVar1[0xb] = uVar11;
      auVar1[0xc] = SUB41(fStack_94,0);
      auVar1[0xd] = uVar12;
      auVar1[0xe] = uVar13;
      auVar1[0xf] = uVar14;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = local_a0;
      auVar2[8] = SUB41(fStack_98,0);
      auVar2[9] = uVar9;
      auVar2[10] = uVar10;
      auVar2[0xb] = uVar11;
      auVar2[0xc] = SUB41(fStack_94,0);
      auVar2[0xd] = uVar12;
      auVar2[0xe] = uVar13;
      auVar2[0xf] = uVar14;
      auVar24 = NEON_ext(auVar1,auVar2,8,1);
      param_1 = param_1 - SQRT(auVar24._0_4_ + local_a0 + auVar24._4_4_ + 0.0);
      FUN_00cd5858();
      return param_1 < (float)CONCAT13(extraout_var_04,
                                       CONCAT12(extraout_var_02,
                                                CONCAT11(extraout_var_00,extraout_b0_00))) ||
             param_1 ==
             (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    }
  }
  return false;
}


