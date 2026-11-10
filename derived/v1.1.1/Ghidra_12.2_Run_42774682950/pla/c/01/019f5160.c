/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f5160; name: FUN_019f5160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f5160(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],int *param_5,undefined8 *param_6,undefined8 *param_7,
                 undefined8 *param_8,undefined4 param_9)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar40;
  long lVar41;
  ushort *puVar42;
  long *plVar43;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar44;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar45;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar46;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar47;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 uVar48;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar49;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar50;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar51;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar52;
  undefined1 extraout_var_28;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar57;
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined8 uVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  float fVar73;
  undefined4 uVar74;
  float fVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 local_120 [2];
  undefined *local_110;
  undefined4 local_108;
  undefined **local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  float local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 local_a0;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined2 local_70;
  long *local_58;
  
  local_120[0] = 0;
  local_f0 = 0;
  local_110 = PTR_DAT_04382390 + 0x10;
  local_100 = &PTR_FUN_04287c30;
  local_108 = 3;
  uStack_e8 = 0;
  local_e0 = *(undefined8 *)PTR_DAT_04379570;
  uStack_d8 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  local_a0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_80 = 1;
  local_7c = 0x3f000000bf800000;
  local_74 = 0x3f000000;
  local_70 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar40 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar40 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar41 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar41;
  local_120[0] = *(undefined8 *)(lVar41 + 0x230);
  puVar2 = (uint *)((long)param_5 + (ulong)*(ushort *)((long)param_5 + (8 - (long)*param_5)));
  uVar3 = *(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 4);
  fVar67 = *(float *)((long)puVar2 + (ulong)*puVar2 + 8);
  (**(code **)(*(long *)*param_6 + 0x40))();
  fVar19 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) *
           (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  fVar20 = (float)CONCAT13(extraout_var_11,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05))) *
           (float)CONCAT13(extraout_var_11,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05)));
  uVar44 = (undefined1)((uint)fVar20 >> 8);
  uVar45 = (undefined1)((uint)fVar20 >> 0x10);
  uVar46 = (undefined1)((uint)fVar20 >> 0x18);
  fVar58 = (float)CONCAT13(extraout_var_19,
                           CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13))) *
           (float)CONCAT13(extraout_var_19,
                           CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13)));
  uVar47 = (undefined1)((uint)fVar58 >> 8);
  uVar48 = (undefined1)((uint)fVar58 >> 0x10);
  uVar49 = (undefined1)((uint)fVar58 >> 0x18);
  fVar59 = (float)CONCAT13(extraout_var_27,
                           CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21))) *
           (float)CONCAT13(extraout_var_27,
                           CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21)));
  uVar50 = (undefined1)((uint)fVar59 >> 8);
  uVar51 = (undefined1)((uint)fVar59 >> 0x10);
  uVar52 = (undefined1)((uint)fVar59 >> 0x18);
  puVar42 = (ushort *)((long)param_5 - (long)*param_5);
  auVar64[4] = SUB41(fVar20,0);
  auVar64._0_4_ = fVar19;
  auVar64[5] = uVar44;
  auVar64[6] = uVar45;
  auVar64[7] = uVar46;
  auVar64[8] = SUB41(fVar58,0);
  auVar64[9] = uVar47;
  auVar64[10] = uVar48;
  auVar64[0xb] = uVar49;
  auVar64[0xc] = SUB41(fVar59,0);
  auVar64[0xd] = uVar50;
  auVar64[0xe] = uVar51;
  auVar64[0xf] = uVar52;
  auVar7[4] = SUB41(fVar20,0);
  auVar7._0_4_ = fVar19;
  auVar7[5] = uVar44;
  auVar7[6] = uVar45;
  auVar7[7] = uVar46;
  auVar7[8] = SUB41(fVar58,0);
  auVar7[9] = uVar47;
  auVar7[10] = uVar48;
  auVar7[0xb] = uVar49;
  auVar7[0xc] = SUB41(fVar59,0);
  auVar7[0xd] = uVar50;
  auVar7[0xe] = uVar51;
  auVar7[0xf] = uVar52;
  auVar64 = NEON_ext(auVar64,auVar7,8,1);
  fVar62 = SQRT(auVar64._0_4_ + fVar19 + auVar64._4_4_ + fVar20);
  uVar4 = *puVar42;
  fVar19 = param_3._0_4_ * param_3._0_4_;
  fVar20 = param_3._4_4_ * param_3._4_4_;
  uVar44 = (undefined1)((uint)fVar20 >> 8);
  uVar45 = (undefined1)((uint)fVar20 >> 0x10);
  uVar46 = (undefined1)((uint)fVar20 >> 0x18);
  fVar58 = param_3._8_4_ * param_3._8_4_;
  uVar47 = (undefined1)((uint)fVar58 >> 8);
  uVar48 = (undefined1)((uint)fVar58 >> 0x10);
  uVar49 = (undefined1)((uint)fVar58 >> 0x18);
  fVar59 = param_3._12_4_ * param_3._12_4_;
  uVar50 = (undefined1)((uint)fVar59 >> 8);
  uVar51 = (undefined1)((uint)fVar59 >> 0x10);
  uVar52 = (undefined1)((uint)fVar59 >> 0x18);
  auVar8[4] = SUB41(fVar20,0);
  auVar8._0_4_ = fVar19;
  auVar8[5] = uVar44;
  auVar8[6] = uVar45;
  auVar8[7] = uVar46;
  auVar8[8] = SUB41(fVar58,0);
  auVar8[9] = uVar47;
  auVar8[10] = uVar48;
  auVar8[0xb] = uVar49;
  auVar8[0xc] = SUB41(fVar59,0);
  auVar8[0xd] = uVar50;
  auVar8[0xe] = uVar51;
  auVar8[0xf] = uVar52;
  auVar9[4] = SUB41(fVar20,0);
  auVar9._0_4_ = fVar19;
  auVar9[5] = uVar44;
  auVar9[6] = uVar45;
  auVar9[7] = uVar46;
  auVar9[8] = SUB41(fVar58,0);
  auVar9[9] = uVar47;
  auVar9[10] = uVar48;
  auVar9[0xb] = uVar49;
  auVar9[0xc] = SUB41(fVar59,0);
  auVar9[0xd] = uVar50;
  auVar9[0xe] = uVar51;
  auVar9[0xf] = uVar52;
  auVar64 = NEON_ext(auVar8,auVar9,8,1);
  fVar53 = SQRT(auVar64._0_4_ + fVar19 + auVar64._4_4_ + fVar20);
  fVar19 = param_4._0_4_ * param_4._0_4_;
  fVar20 = param_4._4_4_ * param_4._4_4_;
  uVar44 = (undefined1)((uint)fVar20 >> 8);
  uVar45 = (undefined1)((uint)fVar20 >> 0x10);
  uVar46 = (undefined1)((uint)fVar20 >> 0x18);
  fVar58 = param_4._8_4_ * param_4._8_4_;
  uVar47 = (undefined1)((uint)fVar58 >> 8);
  uVar48 = (undefined1)((uint)fVar58 >> 0x10);
  uVar49 = (undefined1)((uint)fVar58 >> 0x18);
  fVar59 = param_4._12_4_ * param_4._12_4_;
  uVar50 = (undefined1)((uint)fVar59 >> 8);
  uVar51 = (undefined1)((uint)fVar59 >> 0x10);
  uVar52 = (undefined1)((uint)fVar59 >> 0x18);
  auVar10[4] = SUB41(fVar20,0);
  auVar10._0_4_ = fVar19;
  auVar10[5] = uVar44;
  auVar10[6] = uVar45;
  auVar10[7] = uVar46;
  auVar10[8] = SUB41(fVar58,0);
  auVar10[9] = uVar47;
  auVar10[10] = uVar48;
  auVar10[0xb] = uVar49;
  auVar10[0xc] = SUB41(fVar59,0);
  auVar10[0xd] = uVar50;
  auVar10[0xe] = uVar51;
  auVar10[0xf] = uVar52;
  auVar11[4] = SUB41(fVar20,0);
  auVar11._0_4_ = fVar19;
  auVar11[5] = uVar44;
  auVar11[6] = uVar45;
  auVar11[7] = uVar46;
  auVar11[8] = SUB41(fVar58,0);
  auVar11[9] = uVar47;
  auVar11[10] = uVar48;
  auVar11[0xb] = uVar49;
  auVar11[0xc] = SUB41(fVar59,0);
  auVar11[0xd] = uVar50;
  auVar11[0xe] = uVar51;
  auVar11[0xf] = uVar52;
  auVar64 = NEON_ext(auVar10,auVar11,8,1);
  if (uVar4 < 0xb) {
    fVar58 = fVar62 * 0.0;
LAB_019f5610:
    fVar59 = 0.0;
    fVar53 = fVar67 * 0.5 + fVar53 * 0.0;
  }
  else {
    if ((ulong)puVar42[5] == 0) {
      fVar58 = 0.0;
    }
    else {
      fVar58 = *(float *)((long)param_5 + (ulong)puVar42[5]);
    }
    fVar58 = fVar58 * fVar62;
    if (uVar4 < 0xd) goto LAB_019f5610;
    fVar59 = 0.0;
    fVar62 = 0.0;
    if ((ulong)puVar42[6] != 0) {
      fVar62 = *(float *)((long)param_5 + (ulong)puVar42[6]);
    }
    fVar53 = fVar67 * 0.5 + fVar62 * fVar53;
    if ((0xe < uVar4) && ((ulong)puVar42[7] != 0)) {
      fVar59 = *(float *)((long)param_5 + (ulong)puVar42[7]);
    }
  }
  fVar59 = SQRT(auVar64._0_4_ + fVar19 + auVar64._4_4_ + fVar20) * fVar59;
  uVar65 = CONCAT44(fVar53,fVar58);
  FUN_009a7ff4(SUB41(*(float *)((long)((long)param_5 + (ulong)puVar42[4]) +
                               (ulong)*(uint *)((long)param_5 + (ulong)puVar42[4]) + 0x14) *
                     (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0),0));
  uVar72 = (undefined4)_UNK_0388a138;
  uVar74 = (undefined4)((ulong)_UNK_0388a138 >> 0x20);
  auVar12[1] = extraout_var_00;
  auVar12[0] = extraout_b0_00;
  auVar12[2] = extraout_var_02;
  auVar12[3] = extraout_var_04;
  auVar12[4] = extraout_var_06;
  auVar12[5] = extraout_var_08;
  auVar12[6] = extraout_var_10;
  auVar12[7] = extraout_var_12;
  auVar12[8] = extraout_var_14;
  auVar12[9] = extraout_var_16;
  auVar12[10] = extraout_var_18;
  auVar12[0xb] = extraout_var_20;
  auVar12[0xc] = extraout_var_22;
  auVar12[0xd] = extraout_var_24;
  auVar12[0xe] = extraout_var_26;
  auVar12[0xf] = extraout_var_28;
  uVar60 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a580);
  auVar21._8_4_ = uVar72;
  auVar21._0_8_ = _DAT_0388a130;
  auVar21._12_4_ = uVar74;
  uVar55 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a580);
  auVar22._8_4_ = uVar72;
  auVar22._0_8_ = _DAT_0388a130;
  auVar22._12_4_ = uVar74;
  uVar63 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a680);
  auVar13[1] = extraout_var_00;
  auVar13[0] = extraout_b0_00;
  auVar13[2] = extraout_var_02;
  auVar13[3] = extraout_var_04;
  auVar13[4] = extraout_var_06;
  auVar13[5] = extraout_var_08;
  auVar13[6] = extraout_var_10;
  auVar13[7] = extraout_var_12;
  auVar13[8] = extraout_var_14;
  auVar13[9] = extraout_var_16;
  auVar13[10] = extraout_var_18;
  auVar13[0xb] = extraout_var_20;
  auVar13[0xc] = extraout_var_22;
  auVar13[0xd] = extraout_var_24;
  auVar13[0xe] = extraout_var_26;
  auVar13[0xf] = extraout_var_28;
  uVar66 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a6c8);
  auVar14[1] = extraout_var_00;
  auVar14[0] = extraout_b0_00;
  auVar14[2] = extraout_var_02;
  auVar14[3] = extraout_var_04;
  auVar14[4] = extraout_var_06;
  auVar14[5] = extraout_var_08;
  auVar14[6] = extraout_var_10;
  auVar14[7] = extraout_var_12;
  auVar14[8] = extraout_var_14;
  auVar14[9] = extraout_var_16;
  auVar14[10] = extraout_var_18;
  auVar14[0xb] = extraout_var_20;
  auVar14[0xc] = extraout_var_22;
  auVar14[0xd] = extraout_var_24;
  auVar14[0xe] = extraout_var_26;
  auVar14[0xf] = extraout_var_28;
  uVar81 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
  fVar73 = (float)((ulong)uVar55 >> 0x20);
  fVar75 = (float)((ulong)uVar63 >> 0x20);
  auVar15[1] = extraout_var_00;
  auVar15[0] = extraout_b0_00;
  auVar15[2] = extraout_var_02;
  auVar15[3] = extraout_var_04;
  auVar15[4] = extraout_var_06;
  auVar15[5] = extraout_var_08;
  auVar15[6] = extraout_var_10;
  auVar15[7] = extraout_var_12;
  auVar15[8] = extraout_var_14;
  auVar15[9] = extraout_var_16;
  auVar15[10] = extraout_var_18;
  auVar15[0xb] = extraout_var_20;
  auVar15[0xc] = extraout_var_22;
  auVar15[0xd] = extraout_var_24;
  auVar15[0xe] = extraout_var_26;
  auVar15[0xf] = extraout_var_28;
  uVar83 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a880);
  auVar16[1] = extraout_var_00;
  auVar16[0] = extraout_b0_00;
  auVar16[2] = extraout_var_02;
  auVar16[3] = extraout_var_04;
  auVar16[4] = extraout_var_06;
  auVar16[5] = extraout_var_08;
  auVar16[6] = extraout_var_10;
  auVar16[7] = extraout_var_12;
  auVar16[8] = extraout_var_14;
  auVar16[9] = extraout_var_16;
  auVar16[10] = extraout_var_18;
  auVar16[0xb] = extraout_var_20;
  auVar16[0xc] = extraout_var_22;
  auVar16[0xd] = extraout_var_24;
  auVar16[0xe] = extraout_var_26;
  auVar16[0xf] = extraout_var_28;
  uVar84 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a790);
  auVar23._8_4_ = uVar72;
  auVar23._0_8_ = _DAT_0388a130;
  auVar23._12_4_ = uVar74;
  uVar30 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
  fVar69 = (float)((ulong)uVar30 >> 0x20);
  auVar17[1] = extraout_var_00;
  auVar17[0] = extraout_b0_00;
  auVar17[2] = extraout_var_02;
  auVar17[3] = extraout_var_04;
  auVar17[4] = extraout_var_06;
  auVar17[5] = extraout_var_08;
  auVar17[6] = extraout_var_10;
  auVar17[7] = extraout_var_12;
  auVar17[8] = extraout_b0_00;
  auVar17[9] = extraout_var_00;
  auVar17[10] = extraout_var_02;
  auVar17[0xb] = extraout_var_04;
  auVar17[0xc] = extraout_var_06;
  auVar17[0xd] = extraout_var_08;
  auVar17[0xe] = extraout_var_10;
  auVar17[0xf] = extraout_var_12;
  uVar61 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a648);
  fVar68 = (float)uVar61 * 0.0;
  fVar71 = (float)((ulong)uVar61 >> 0x20) * 0.0;
  fVar19 = (float)_DAT_03889ad0;
  fVar20 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar62 = (float)_UNK_03889ad8;
  fVar18 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar54 = ((float)CONCAT13(extraout_var_04,
                            CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
            (float)uVar55 + fVar19 * (float)uVar60 * 0.0 + fVar19 * (float)uVar30 * (float)uVar81) -
           (float)uVar63 * (float)uVar83;
  fVar57 = ((float)CONCAT13(extraout_var_12,
                            CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) *
            fVar73 + fVar20 * (float)((ulong)uVar60 >> 0x20) * 0.0 +
           fVar20 * fVar69 * (float)((ulong)uVar81 >> 0x20)) -
           fVar75 * (float)((ulong)uVar83 >> 0x20);
  auVar56._0_8_ = CONCAT44(fVar57,fVar54);
  auVar56._8_4_ =
       ((float)CONCAT13(extraout_var_20,
                        CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) *
        (float)uVar55 + fVar62 * (float)uVar63 * (float)uVar66 + fVar62 * fVar68) -
       (float)uVar30 * (float)uVar84;
  auVar56._12_4_ =
       ((float)CONCAT13(extraout_var_28,
                        CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22))) *
        fVar73 + fVar18 * fVar75 * (float)((ulong)uVar66 >> 0x20) +
       fVar18 * (float)(CONCAT17((char)((uint)fVar71 >> 0x18),
                                 CONCAT16((char)((uint)fVar71 >> 0x10),
                                          CONCAT15((char)((uint)fVar71 >> 8),
                                                   CONCAT14(SUB41(fVar71,0),fVar68)))) >> 0x20)) -
       fVar69 * (float)((ulong)uVar84 >> 0x20);
  fVar68 = fVar54 * (float)_DAT_03889ac0;
  fVar71 = fVar57 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  uVar44 = SUB41(fVar71,0);
  uVar45 = (undefined1)((uint)fVar71 >> 8);
  uVar46 = (undefined1)((uint)fVar71 >> 0x10);
  uVar47 = (undefined1)((uint)fVar71 >> 0x18);
  fVar73 = auVar56._8_4_ * (float)_UNK_03889ac8;
  uVar48 = SUB41(fVar73,0);
  uVar49 = (undefined1)((uint)fVar73 >> 8);
  uVar50 = (undefined1)((uint)fVar73 >> 0x10);
  uVar51 = (undefined1)((uint)fVar73 >> 0x18);
  fVar69 = auVar56._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar52 = SUB41(fVar69,0);
  uVar76 = (undefined1)((uint)fVar69 >> 8);
  uVar77 = (undefined1)((uint)fVar69 >> 0x10);
  uVar78 = (undefined1)((uint)fVar69 >> 0x18);
  auVar31[4] = uVar44;
  auVar31._0_4_ = fVar68;
  auVar31[5] = uVar45;
  auVar31[6] = uVar46;
  auVar31[7] = uVar47;
  auVar31[8] = uVar48;
  auVar31[9] = uVar49;
  auVar31[10] = uVar50;
  auVar31[0xb] = uVar51;
  auVar31[0xc] = uVar52;
  auVar31[0xd] = uVar76;
  auVar31[0xe] = uVar77;
  auVar31[0xf] = uVar78;
  uVar66 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a580);
  auVar37._8_4_ = fVar59;
  auVar37._0_8_ = uVar65;
  auVar37._12_4_ = 0;
  uVar61 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a580);
  fVar70 = (float)((ulong)uVar61 >> 0x20);
  auVar38._8_4_ = fVar59;
  auVar38._0_8_ = uVar65;
  auVar38._12_4_ = 0;
  uVar60 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a680);
  auVar32[4] = uVar44;
  auVar32._0_4_ = fVar68;
  auVar32[5] = uVar45;
  auVar32[6] = uVar46;
  auVar32[7] = uVar47;
  auVar32[8] = uVar48;
  auVar32[9] = uVar49;
  auVar32[10] = uVar50;
  auVar32[0xb] = uVar51;
  auVar32[0xc] = uVar52;
  auVar32[0xd] = uVar76;
  auVar32[0xe] = uVar77;
  auVar32[0xf] = uVar78;
  uVar81 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a6c8);
  fVar82 = (float)((ulong)uVar60 >> 0x20);
  auVar33[4] = uVar44;
  auVar33._0_4_ = fVar68;
  auVar33[5] = uVar45;
  auVar33[6] = uVar46;
  auVar33[7] = uVar47;
  auVar33[8] = uVar48;
  auVar33[9] = uVar49;
  auVar33[10] = uVar50;
  auVar33[0xb] = uVar51;
  auVar33[0xc] = uVar52;
  auVar33[0xd] = uVar76;
  auVar33[0xe] = uVar77;
  auVar33[0xf] = uVar78;
  uVar84 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a880);
  auVar34[4] = uVar44;
  auVar34._0_4_ = fVar68;
  auVar34[5] = uVar45;
  auVar34[6] = uVar46;
  auVar34[7] = uVar47;
  auVar34[8] = uVar48;
  auVar34[9] = uVar49;
  auVar34[10] = uVar50;
  auVar34[0xb] = uVar51;
  auVar34[0xc] = uVar52;
  auVar34[0xd] = uVar76;
  auVar34[0xe] = uVar77;
  auVar34[0xf] = uVar78;
  uVar83 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
  auVar35[4] = uVar44;
  auVar35._0_4_ = fVar68;
  auVar35[5] = uVar45;
  auVar35[6] = uVar46;
  auVar35[7] = uVar47;
  auVar35[8] = uVar48;
  auVar35[9] = uVar49;
  auVar35[10] = uVar50;
  auVar35[0xb] = uVar51;
  auVar35[0xc] = uVar52;
  auVar35[0xd] = uVar76;
  auVar35[0xe] = uVar77;
  auVar35[0xf] = uVar78;
  uVar85 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a790);
  auVar36[4] = uVar44;
  auVar36._0_4_ = fVar68;
  auVar36[5] = uVar45;
  auVar36[6] = uVar46;
  auVar36[7] = uVar47;
  auVar36[8] = SUB41(fVar68,0);
  auVar36[9] = (char)((uint)fVar68 >> 8);
  auVar36[10] = (char)((uint)fVar68 >> 0x10);
  auVar36[0xb] = (char)((uint)fVar68 >> 0x18);
  auVar36[0xc] = uVar44;
  auVar36[0xd] = uVar45;
  auVar36[0xe] = uVar46;
  auVar36[0xf] = uVar47;
  uVar30 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a648);
  auVar39._8_4_ = fVar59;
  auVar39._0_8_ = uVar65;
  auVar39._12_4_ = 0;
  uVar63 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a880);
  fVar79 = (float)((ulong)uVar63 >> 0x20);
  fVar59 = fVar58 * (float)uVar30;
  fVar75 = fVar53 * (float)((ulong)uVar30 >> 0x20);
  uVar55 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a680);
  fVar80 = (float)((ulong)uVar55 >> 0x20);
  uVar30 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a580);
  fVar68 = ((float)uVar61 * fVar68 + fVar19 * fVar58 * (float)uVar66 +
           fVar19 * (float)uVar63 * (float)uVar83) - (float)uVar60 * (float)uVar84;
  fVar71 = (fVar70 * fVar71 + fVar20 * fVar53 * (float)((ulong)uVar66 >> 0x20) +
           fVar20 * fVar79 * (float)((ulong)uVar83 >> 0x20)) -
           fVar82 * (float)((ulong)uVar84 >> 0x20);
  fVar73 = ((float)uVar61 * fVar73 + fVar62 * (float)uVar60 * (float)uVar81 + fVar62 * fVar59) -
           (float)uVar63 * (float)uVar85;
  fVar75 = (fVar70 * fVar69 + fVar18 * fVar82 * (float)((ulong)uVar81 >> 0x20) +
           fVar18 * (float)(CONCAT17((char)((uint)fVar75 >> 0x18),
                                     CONCAT16((char)((uint)fVar75 >> 0x10),
                                              CONCAT15((char)((uint)fVar75 >> 8),
                                                       CONCAT14(SUB41(fVar75,0),fVar59)))) >> 0x20))
           - fVar79 * (float)((ulong)uVar85 >> 0x20);
  auVar24._4_4_ = fVar71;
  auVar24._0_4_ = fVar68;
  auVar24._8_4_ = fVar73;
  auVar24._12_4_ = fVar75;
  uVar60 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a580);
  auVar25._4_4_ = fVar71;
  auVar25._0_4_ = fVar68;
  auVar25._8_4_ = fVar73;
  auVar25._12_4_ = fVar75;
  uVar81 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a6c8);
  fVar58 = (float)((ulong)uVar30 >> 0x20);
  auVar26._4_4_ = fVar71;
  auVar26._0_4_ = fVar68;
  auVar26._8_4_ = fVar73;
  auVar26._12_4_ = fVar75;
  uVar83 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a790);
  auVar27._4_4_ = fVar71;
  auVar27._0_4_ = fVar68;
  auVar27._8_4_ = fVar73;
  auVar27._12_4_ = fVar75;
  uVar63 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
  auVar28._4_4_ = fVar71;
  auVar28._0_4_ = fVar68;
  auVar28._8_4_ = fVar73;
  auVar28._12_4_ = fVar75;
  uVar65 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a880);
  uVar61 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a880);
  fVar53 = (float)((ulong)uVar61 >> 0x20);
  auVar29._4_4_ = fVar71;
  auVar29._0_4_ = fVar68;
  auVar29._8_4_ = fVar68;
  auVar29._12_4_ = fVar71;
  uVar66 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a648);
  local_70 = CONCAT11(local_70._1_1_,1);
  fVar19 = ((float)uVar30 * fVar68 + fVar19 * fVar54 * (float)uVar60 +
           fVar19 * (float)uVar61 * (float)uVar63) - (float)uVar55 * (float)uVar65;
  fVar20 = (fVar58 * fVar71 + fVar20 * fVar57 * (float)((ulong)uVar60 >> 0x20) +
           fVar20 * fVar53 * (float)((ulong)uVar63 >> 0x20)) -
           fVar80 * (float)((ulong)uVar65 >> 0x20);
  fVar59 = ((float)uVar30 * fVar73 + fVar62 * (float)uVar55 * (float)uVar81 +
           fVar62 * fVar54 * (float)uVar66) - (float)uVar61 * (float)uVar83;
  fVar58 = (fVar58 * fVar75 + fVar18 * fVar80 * (float)((ulong)uVar81 >> 0x20) +
           fVar18 * fVar57 * (float)((ulong)uVar66 >> 0x20)) -
           fVar53 * (float)((ulong)uVar83 >> 0x20);
  local_c0 = CONCAT44(local_c0._4_4_,param_9);
  uStack_e8 = CONCAT17((byte)((uint)fVar58 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                       CONCAT16((byte)((uint)fVar58 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30),
                                CONCAT15((byte)((uint)fVar58 >> 8) &
                                         (byte)((ulong)_UNK_038897c8 >> 0x28),
                                         CONCAT14(SUB41(fVar58,0) &
                                                  (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                  CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                                           (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                                                    (byte)((ulong)_UNK_038897c8 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((uint)fVar59 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar59,0) & (byte)_UNK_038897c8)))))));
  local_f0 = CONCAT17((byte)((uint)fVar20 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar20 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar20,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                          (byte)((ulong)_DAT_038897c0 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                   (byte)((ulong)_DAT_038897c0 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar19 >> 8
                                                                                  ) & (byte)((ulong)
                                                  _DAT_038897c0 >> 8),
                                                  SUB41(fVar19,0) & (byte)_DAT_038897c0)))))));
  uStack_d8 = auVar56._8_8_;
  plVar43 = (long *)*param_7;
  local_e0 = auVar56._0_8_;
  local_d0 = uVar3;
  local_cc = fVar67;
  if (plVar43 != (long *)0x0) {
    lVar41 = plVar43[0xb];
    if (*(undefined8 **)(lVar41 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar41 + 0x10) == 0) {
        uVar61 = (**(code **)**(undefined8 **)(lVar41 + 0x18))();
        *(undefined8 *)(lVar41 + 0x10) = uVar61;
      }
      piVar1 = (int *)(lVar41 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar41 = plVar43[0xb];
      local_58 = plVar43;
      if (*(undefined8 **)(lVar41 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar41 + 0x10) == 0) {
          uVar61 = (**(code **)**(undefined8 **)(lVar41 + 0x18))();
          *(undefined8 *)(lVar41 + 0x10) = uVar61;
        }
        piVar1 = (int *)(lVar41 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_019f5578;
      }
    }
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_58 = (long *)0x0;
LAB_019f5578:
  (*(code *)*param_8)(param_1,param_8 + 4,&local_58,local_120);
  if (local_58 != (long *)0x0) {
    lVar41 = local_58[0xb];
    piVar1 = (int *)(lVar41 + 0xc);
    do {
      iVar40 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar40 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar40 + -1 == 0) {
      *(undefined8 *)(lVar41 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (plVar43 != (long *)0x0) {
    lVar41 = plVar43[0xb];
    piVar1 = (int *)(lVar41 + 0xc);
    do {
      iVar40 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar40 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar40 + -1 == 0) {
      *(undefined8 *)(lVar41 + 0x18) = 0;
      (**(code **)(*plVar43 + 0x20))(plVar43);
    }
  }
  return;
}


