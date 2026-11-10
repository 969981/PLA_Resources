/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f4c68; name: FUN_019f4c68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f4c68(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],int *param_5,undefined8 *param_6,long *param_7,
                 undefined8 param_8,undefined4 param_9)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
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
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  long *plVar41;
  int iVar42;
  undefined8 uVar43;
  long lVar44;
  ushort *puVar45;
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
  undefined1 uVar46;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar47;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar48;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar49;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 uVar50;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar51;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar52;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar53;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar54;
  undefined1 extraout_var_28;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined4 uVar73;
  float fVar74;
  undefined4 uVar75;
  float fVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  float fVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  long *local_108;
  undefined8 local_100 [2];
  undefined **local_f0;
  undefined4 local_e8;
  undefined **local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 local_80;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  
  local_f0 = &PTR_LAB_04235ca0;
  local_100[0] = 0;
  local_e8 = 2;
  local_d0 = 0;
  local_e0 = &PTR_FUN_04287c58;
  local_c0 = *(undefined8 *)PTR_DAT_04379570;
  uStack_b8 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  uStack_c8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = 0;
  local_90 = 0;
  local_60 = 1;
  local_5c = 0x3f000000bf800000;
  local_54 = 0x3f000000;
  local_50 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar42 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar42 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar44 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar44;
  local_100[0] = *(undefined8 *)(lVar44 + 0x230);
  puVar2 = (uint *)((long)param_5 + (ulong)*(ushort *)((long)param_5 + (8 - (long)*param_5)));
  uVar3 = *puVar2;
  uVar73 = *(undefined4 *)((long)puVar2 + (ulong)uVar3 + 8);
  uVar18 = (ulong)*(uint *)((long)puVar2 + (ulong)uVar3 + 0xc);
  uVar43 = CONCAT17((char)((uint)uVar73 >> 0x18),
                    CONCAT16((char)((uint)uVar73 >> 0x10),
                             CONCAT15((char)((uint)uVar73 >> 8),
                                      *(undefined5 *)((long)puVar2 + (ulong)uVar3 + 4))));
  (**(code **)(*(long *)*param_6 + 0x40))();
  fVar20 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) *
           (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  fVar21 = (float)CONCAT13(extraout_var_11,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05))) *
           (float)CONCAT13(extraout_var_11,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05)));
  uVar46 = (undefined1)((uint)fVar21 >> 8);
  uVar47 = (undefined1)((uint)fVar21 >> 0x10);
  uVar48 = (undefined1)((uint)fVar21 >> 0x18);
  fVar60 = (float)CONCAT13(extraout_var_19,
                           CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13))) *
           (float)CONCAT13(extraout_var_19,
                           CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13)));
  uVar49 = (undefined1)((uint)fVar60 >> 8);
  uVar50 = (undefined1)((uint)fVar60 >> 0x10);
  uVar51 = (undefined1)((uint)fVar60 >> 0x18);
  fVar61 = (float)CONCAT13(extraout_var_27,
                           CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21))) *
           (float)CONCAT13(extraout_var_27,
                           CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21)));
  uVar52 = (undefined1)((uint)fVar61 >> 8);
  uVar53 = (undefined1)((uint)fVar61 >> 0x10);
  uVar54 = (undefined1)((uint)fVar61 >> 0x18);
  puVar45 = (ushort *)((long)param_5 - (long)*param_5);
  auVar66[4] = SUB41(fVar21,0);
  auVar66._0_4_ = fVar20;
  auVar66[5] = uVar46;
  auVar66[6] = uVar47;
  auVar66[7] = uVar48;
  auVar66[8] = SUB41(fVar60,0);
  auVar66[9] = uVar49;
  auVar66[10] = uVar50;
  auVar66[0xb] = uVar51;
  auVar66[0xc] = SUB41(fVar61,0);
  auVar66[0xd] = uVar52;
  auVar66[0xe] = uVar53;
  auVar66[0xf] = uVar54;
  auVar7[4] = SUB41(fVar21,0);
  auVar7._0_4_ = fVar20;
  auVar7[5] = uVar46;
  auVar7[6] = uVar47;
  auVar7[7] = uVar48;
  auVar7[8] = SUB41(fVar60,0);
  auVar7[9] = uVar49;
  auVar7[10] = uVar50;
  auVar7[0xb] = uVar51;
  auVar7[0xc] = SUB41(fVar61,0);
  auVar7[0xd] = uVar52;
  auVar7[0xe] = uVar53;
  auVar7[0xf] = uVar54;
  auVar66 = NEON_ext(auVar66,auVar7,8,1);
  fVar64 = SQRT(auVar66._0_4_ + fVar20 + auVar66._4_4_ + fVar21);
  uVar4 = *puVar45;
  fVar20 = param_3._0_4_ * param_3._0_4_;
  fVar21 = param_3._4_4_ * param_3._4_4_;
  uVar46 = (undefined1)((uint)fVar21 >> 8);
  uVar47 = (undefined1)((uint)fVar21 >> 0x10);
  uVar48 = (undefined1)((uint)fVar21 >> 0x18);
  fVar60 = param_3._8_4_ * param_3._8_4_;
  uVar49 = (undefined1)((uint)fVar60 >> 8);
  uVar50 = (undefined1)((uint)fVar60 >> 0x10);
  uVar51 = (undefined1)((uint)fVar60 >> 0x18);
  fVar61 = param_3._12_4_ * param_3._12_4_;
  uVar52 = (undefined1)((uint)fVar61 >> 8);
  uVar53 = (undefined1)((uint)fVar61 >> 0x10);
  uVar54 = (undefined1)((uint)fVar61 >> 0x18);
  auVar8[4] = SUB41(fVar21,0);
  auVar8._0_4_ = fVar20;
  auVar8[5] = uVar46;
  auVar8[6] = uVar47;
  auVar8[7] = uVar48;
  auVar8[8] = SUB41(fVar60,0);
  auVar8[9] = uVar49;
  auVar8[10] = uVar50;
  auVar8[0xb] = uVar51;
  auVar8[0xc] = SUB41(fVar61,0);
  auVar8[0xd] = uVar52;
  auVar8[0xe] = uVar53;
  auVar8[0xf] = uVar54;
  auVar9[4] = SUB41(fVar21,0);
  auVar9._0_4_ = fVar20;
  auVar9[5] = uVar46;
  auVar9[6] = uVar47;
  auVar9[7] = uVar48;
  auVar9[8] = SUB41(fVar60,0);
  auVar9[9] = uVar49;
  auVar9[10] = uVar50;
  auVar9[0xb] = uVar51;
  auVar9[0xc] = SUB41(fVar61,0);
  auVar9[0xd] = uVar52;
  auVar9[0xe] = uVar53;
  auVar9[0xf] = uVar54;
  auVar66 = NEON_ext(auVar8,auVar9,8,1);
  fVar55 = SQRT(auVar66._0_4_ + fVar20 + auVar66._4_4_ + fVar21);
  fVar20 = param_4._0_4_ * param_4._0_4_;
  fVar21 = param_4._4_4_ * param_4._4_4_;
  uVar46 = (undefined1)((uint)fVar21 >> 8);
  uVar47 = (undefined1)((uint)fVar21 >> 0x10);
  uVar48 = (undefined1)((uint)fVar21 >> 0x18);
  fVar60 = param_4._8_4_ * param_4._8_4_;
  uVar49 = (undefined1)((uint)fVar60 >> 8);
  uVar50 = (undefined1)((uint)fVar60 >> 0x10);
  uVar51 = (undefined1)((uint)fVar60 >> 0x18);
  fVar61 = param_4._12_4_ * param_4._12_4_;
  uVar52 = (undefined1)((uint)fVar61 >> 8);
  uVar53 = (undefined1)((uint)fVar61 >> 0x10);
  uVar54 = (undefined1)((uint)fVar61 >> 0x18);
  auVar10[4] = SUB41(fVar21,0);
  auVar10._0_4_ = fVar20;
  auVar10[5] = uVar46;
  auVar10[6] = uVar47;
  auVar10[7] = uVar48;
  auVar10[8] = SUB41(fVar60,0);
  auVar10[9] = uVar49;
  auVar10[10] = uVar50;
  auVar10[0xb] = uVar51;
  auVar10[0xc] = SUB41(fVar61,0);
  auVar10[0xd] = uVar52;
  auVar10[0xe] = uVar53;
  auVar10[0xf] = uVar54;
  auVar11[4] = SUB41(fVar21,0);
  auVar11._0_4_ = fVar20;
  auVar11[5] = uVar46;
  auVar11[6] = uVar47;
  auVar11[7] = uVar48;
  auVar11[8] = SUB41(fVar60,0);
  auVar11[9] = uVar49;
  auVar11[10] = uVar50;
  auVar11[0xb] = uVar51;
  auVar11[0xc] = SUB41(fVar61,0);
  auVar11[0xd] = uVar52;
  auVar11[0xe] = uVar53;
  auVar11[0xf] = uVar54;
  auVar66 = NEON_ext(auVar10,auVar11,8,1);
  if (uVar4 < 0xb) {
    fVar60 = fVar64 * 0.0;
  }
  else {
    if ((ulong)puVar45[5] == 0) {
      fVar60 = 0.0;
    }
    else {
      fVar60 = *(float *)((long)param_5 + (ulong)puVar45[5]);
    }
    fVar60 = fVar60 * fVar64;
    if (0xc < uVar4) {
      fVar61 = 0.0;
      fVar64 = 0.0;
      if ((ulong)puVar45[6] != 0) {
        fVar64 = *(float *)((long)param_5 + (ulong)puVar45[6]);
      }
      fVar64 = fVar64 * fVar55;
      if ((0xe < uVar4) && ((ulong)puVar45[7] != 0)) {
        fVar61 = *(float *)((long)param_5 + (ulong)puVar45[7]);
      }
      goto LAB_019f4e14;
    }
  }
  fVar61 = 0.0;
  fVar64 = fVar55 * 0.0;
LAB_019f4e14:
  fVar61 = SQRT(auVar66._0_4_ + fVar20 + auVar66._4_4_ + fVar21) * fVar61;
  uVar67 = CONCAT44(fVar64,fVar60);
  FUN_009a7ff4(SUB41(*(float *)((long)((long)param_5 + (ulong)puVar45[4]) +
                               (ulong)*(uint *)((long)param_5 + (ulong)puVar45[4]) + 0x14) *
                     (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0),0));
  uVar73 = (undefined4)_UNK_0388a138;
  uVar75 = (undefined4)((ulong)_UNK_0388a138 >> 0x20);
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
  uVar62 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a580);
  auVar22._8_4_ = uVar73;
  auVar22._0_8_ = _DAT_0388a130;
  auVar22._12_4_ = uVar75;
  uVar57 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a580);
  auVar23._8_4_ = uVar73;
  auVar23._0_8_ = _DAT_0388a130;
  auVar23._12_4_ = uVar75;
  uVar65 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a680);
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
  uVar68 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a6c8);
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
  uVar82 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
  fVar76 = (float)((ulong)uVar65 >> 0x20);
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
  uVar85 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a790);
  fVar74 = (float)((ulong)uVar57 >> 0x20);
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
  uVar84 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a880);
  auVar24._8_4_ = uVar73;
  auVar24._0_8_ = _DAT_0388a130;
  auVar24._12_4_ = uVar75;
  uVar31 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
  fVar70 = (float)((ulong)uVar31 >> 0x20);
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
  uVar63 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a648);
  fVar69 = (float)uVar63 * 0.0;
  fVar72 = (float)((ulong)uVar63 >> 0x20) * 0.0;
  local_a0 = CONCAT44(local_a0._4_4_,param_9);
  fVar20 = (float)_DAT_03889ad0;
  fVar21 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar55 = (float)_UNK_03889ad8;
  fVar19 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar56 = ((float)CONCAT13(extraout_var_04,
                            CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
            (float)uVar57 + fVar20 * (float)uVar62 * 0.0 + fVar20 * (float)uVar31 * (float)uVar82) -
           (float)uVar65 * (float)uVar84;
  fVar59 = ((float)CONCAT13(extraout_var_12,
                            CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) *
            fVar74 + fVar21 * (float)((ulong)uVar62 >> 0x20) * 0.0 +
           fVar21 * fVar70 * (float)((ulong)uVar82 >> 0x20)) -
           fVar76 * (float)((ulong)uVar84 >> 0x20);
  auVar58._0_8_ = CONCAT44(fVar59,fVar56);
  auVar58._8_4_ =
       ((float)CONCAT13(extraout_var_20,
                        CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) *
        (float)uVar57 + fVar55 * (float)uVar65 * (float)uVar68 + fVar55 * fVar69) -
       (float)uVar31 * (float)uVar85;
  auVar58._12_4_ =
       ((float)CONCAT13(extraout_var_28,
                        CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22))) *
        fVar74 + fVar19 * fVar76 * (float)((ulong)uVar68 >> 0x20) +
       fVar19 * (float)(CONCAT17((char)((uint)fVar72 >> 0x18),
                                 CONCAT16((char)((uint)fVar72 >> 0x10),
                                          CONCAT15((char)((uint)fVar72 >> 8),
                                                   CONCAT14(SUB41(fVar72,0),fVar69)))) >> 0x20)) -
       fVar70 * (float)((ulong)uVar85 >> 0x20);
  fVar69 = fVar56 * (float)_DAT_03889ac0;
  fVar72 = fVar59 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  uVar46 = SUB41(fVar72,0);
  uVar47 = (undefined1)((uint)fVar72 >> 8);
  uVar48 = (undefined1)((uint)fVar72 >> 0x10);
  uVar49 = (undefined1)((uint)fVar72 >> 0x18);
  fVar74 = auVar58._8_4_ * (float)_UNK_03889ac8;
  uVar50 = SUB41(fVar74,0);
  uVar51 = (undefined1)((uint)fVar74 >> 8);
  uVar52 = (undefined1)((uint)fVar74 >> 0x10);
  uVar53 = (undefined1)((uint)fVar74 >> 0x18);
  fVar70 = auVar58._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar54 = SUB41(fVar70,0);
  uVar77 = (undefined1)((uint)fVar70 >> 8);
  uVar78 = (undefined1)((uint)fVar70 >> 0x10);
  uVar79 = (undefined1)((uint)fVar70 >> 0x18);
  auVar32[4] = uVar46;
  auVar32._0_4_ = fVar69;
  auVar32[5] = uVar47;
  auVar32[6] = uVar48;
  auVar32[7] = uVar49;
  auVar32[8] = uVar50;
  auVar32[9] = uVar51;
  auVar32[10] = uVar52;
  auVar32[0xb] = uVar53;
  auVar32[0xc] = uVar54;
  auVar32[0xd] = uVar77;
  auVar32[0xe] = uVar78;
  auVar32[0xf] = uVar79;
  uVar68 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a580);
  auVar38._8_4_ = fVar61;
  auVar38._0_8_ = uVar67;
  auVar38._12_4_ = 0;
  uVar63 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a580);
  fVar71 = (float)((ulong)uVar63 >> 0x20);
  auVar39._8_4_ = fVar61;
  auVar39._0_8_ = uVar67;
  auVar39._12_4_ = 0;
  uVar62 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a680);
  auVar33[4] = uVar46;
  auVar33._0_4_ = fVar69;
  auVar33[5] = uVar47;
  auVar33[6] = uVar48;
  auVar33[7] = uVar49;
  auVar33[8] = uVar50;
  auVar33[9] = uVar51;
  auVar33[10] = uVar52;
  auVar33[0xb] = uVar53;
  auVar33[0xc] = uVar54;
  auVar33[0xd] = uVar77;
  auVar33[0xe] = uVar78;
  auVar33[0xf] = uVar79;
  uVar82 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a6c8);
  fVar83 = (float)((ulong)uVar62 >> 0x20);
  auVar34[4] = uVar46;
  auVar34._0_4_ = fVar69;
  auVar34[5] = uVar47;
  auVar34[6] = uVar48;
  auVar34[7] = uVar49;
  auVar34[8] = uVar50;
  auVar34[9] = uVar51;
  auVar34[10] = uVar52;
  auVar34[0xb] = uVar53;
  auVar34[0xc] = uVar54;
  auVar34[0xd] = uVar77;
  auVar34[0xe] = uVar78;
  auVar34[0xf] = uVar79;
  uVar85 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a880);
  auVar35[4] = uVar46;
  auVar35._0_4_ = fVar69;
  auVar35[5] = uVar47;
  auVar35[6] = uVar48;
  auVar35[7] = uVar49;
  auVar35[8] = uVar50;
  auVar35[9] = uVar51;
  auVar35[10] = uVar52;
  auVar35[0xb] = uVar53;
  auVar35[0xc] = uVar54;
  auVar35[0xd] = uVar77;
  auVar35[0xe] = uVar78;
  auVar35[0xf] = uVar79;
  uVar84 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a680);
  auVar36[4] = uVar46;
  auVar36._0_4_ = fVar69;
  auVar36[5] = uVar47;
  auVar36[6] = uVar48;
  auVar36[7] = uVar49;
  auVar36[8] = uVar50;
  auVar36[9] = uVar51;
  auVar36[10] = uVar52;
  auVar36[0xb] = uVar53;
  auVar36[0xc] = uVar54;
  auVar36[0xd] = uVar77;
  auVar36[0xe] = uVar78;
  auVar36[0xf] = uVar79;
  uVar86 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a790);
  auVar37[4] = uVar46;
  auVar37._0_4_ = fVar69;
  auVar37[5] = uVar47;
  auVar37[6] = uVar48;
  auVar37[7] = uVar49;
  auVar37[8] = SUB41(fVar69,0);
  auVar37[9] = (char)((uint)fVar69 >> 8);
  auVar37[10] = (char)((uint)fVar69 >> 0x10);
  auVar37[0xb] = (char)((uint)fVar69 >> 0x18);
  auVar37[0xc] = uVar46;
  auVar37[0xd] = uVar47;
  auVar37[0xe] = uVar48;
  auVar37[0xf] = uVar49;
  uVar31 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a648);
  auVar40._8_4_ = fVar61;
  auVar40._0_8_ = uVar67;
  auVar40._12_4_ = 0;
  uVar65 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a880);
  fVar80 = (float)((ulong)uVar65 >> 0x20);
  fVar61 = fVar60 * (float)uVar31;
  fVar76 = fVar64 * (float)((ulong)uVar31 >> 0x20);
  uVar57 = a64_TBL(ZEXT816(0),auVar58,DAT_0388a680);
  fVar81 = (float)((ulong)uVar57 >> 0x20);
  uVar31 = a64_TBL(ZEXT816(0),auVar58,DAT_0388a580);
  fVar69 = ((float)uVar63 * fVar69 + fVar20 * fVar60 * (float)uVar68 +
           fVar20 * (float)uVar65 * (float)uVar84) - (float)uVar62 * (float)uVar85;
  fVar72 = (fVar71 * fVar72 + fVar21 * fVar64 * (float)((ulong)uVar68 >> 0x20) +
           fVar21 * fVar80 * (float)((ulong)uVar84 >> 0x20)) -
           fVar83 * (float)((ulong)uVar85 >> 0x20);
  fVar74 = ((float)uVar63 * fVar74 + fVar55 * (float)uVar62 * (float)uVar82 + fVar55 * fVar61) -
           (float)uVar65 * (float)uVar86;
  fVar76 = (fVar71 * fVar70 + fVar19 * fVar83 * (float)((ulong)uVar82 >> 0x20) +
           fVar19 * (float)(CONCAT17((char)((uint)fVar76 >> 0x18),
                                     CONCAT16((char)((uint)fVar76 >> 0x10),
                                              CONCAT15((char)((uint)fVar76 >> 8),
                                                       CONCAT14(SUB41(fVar76,0),fVar61)))) >> 0x20))
           - fVar80 * (float)((ulong)uVar86 >> 0x20);
  auVar25._4_4_ = fVar72;
  auVar25._0_4_ = fVar69;
  auVar25._8_4_ = fVar74;
  auVar25._12_4_ = fVar76;
  uVar62 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a580);
  auVar26._4_4_ = fVar72;
  auVar26._0_4_ = fVar69;
  auVar26._8_4_ = fVar74;
  auVar26._12_4_ = fVar76;
  uVar82 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a6c8);
  fVar60 = (float)((ulong)uVar31 >> 0x20);
  auVar27._4_4_ = fVar72;
  auVar27._0_4_ = fVar69;
  auVar27._8_4_ = fVar74;
  auVar27._12_4_ = fVar76;
  uVar84 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a790);
  auVar28._4_4_ = fVar72;
  auVar28._0_4_ = fVar69;
  auVar28._8_4_ = fVar74;
  auVar28._12_4_ = fVar76;
  uVar65 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a680);
  auVar29._4_4_ = fVar72;
  auVar29._0_4_ = fVar69;
  auVar29._8_4_ = fVar74;
  auVar29._12_4_ = fVar76;
  uVar67 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a880);
  uVar63 = a64_TBL(ZEXT816(0),auVar58,DAT_0388a880);
  fVar64 = (float)((ulong)uVar63 >> 0x20);
  auVar30._4_4_ = fVar72;
  auVar30._0_4_ = fVar69;
  auVar30._8_4_ = fVar69;
  auVar30._12_4_ = fVar72;
  uVar68 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a648);
  local_50 = CONCAT11(local_50._1_1_,1);
  fVar20 = ((float)uVar31 * fVar69 + fVar20 * fVar56 * (float)uVar62 +
           fVar20 * (float)uVar63 * (float)uVar65) - (float)uVar57 * (float)uVar67;
  fVar21 = (fVar60 * fVar72 + fVar21 * fVar59 * (float)((ulong)uVar62 >> 0x20) +
           fVar21 * fVar64 * (float)((ulong)uVar65 >> 0x20)) -
           fVar81 * (float)((ulong)uVar67 >> 0x20);
  fVar61 = ((float)uVar31 * fVar74 + fVar55 * (float)uVar57 * (float)uVar82 +
           fVar55 * fVar56 * (float)uVar68) - (float)uVar63 * (float)uVar84;
  fVar60 = (fVar60 * fVar76 + fVar19 * fVar81 * (float)((ulong)uVar82 >> 0x20) +
           fVar19 * fVar59 * (float)((ulong)uVar68 >> 0x20)) -
           fVar64 * (float)((ulong)uVar84 >> 0x20);
  uStack_c8 = CONCAT17((byte)((uint)fVar60 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                       CONCAT16((byte)((uint)fVar60 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30),
                                CONCAT15((byte)((uint)fVar60 >> 8) &
                                         (byte)((ulong)_UNK_038897c8 >> 0x28),
                                         CONCAT14(SUB41(fVar60,0) &
                                                  (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                  CONCAT13((byte)((uint)fVar61 >> 0x18) &
                                                           (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                                                    (byte)((ulong)_UNK_038897c8 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((uint)fVar61 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar61,0) & (byte)_UNK_038897c8)))))));
  local_d0 = CONCAT17((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar21 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar21 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar21,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                          (byte)((ulong)_DAT_038897c0 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                                                   (byte)((ulong)_DAT_038897c0 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar20 >> 8
                                                                                  ) & (byte)((ulong)
                                                  _DAT_038897c0 >> 8),
                                                  SUB41(fVar20,0) & (byte)_DAT_038897c0)))))));
  uStack_b8 = auVar58._8_8_;
  local_108 = (long *)*param_7;
  local_c0 = auVar58._0_8_;
  local_b0 = uVar43;
  uStack_a8 = uVar18;
  if (local_108 == (long *)0x0) {
    FUN_019f7ecc(param_1,param_8,&local_108,local_100);
  }
  else {
    lVar44 = local_108[0xb];
    if (*(undefined8 **)(lVar44 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar44 + 0x10) == 0) {
      uVar43 = (**(code **)**(undefined8 **)(lVar44 + 0x18))();
      *(undefined8 *)(lVar44 + 0x10) = uVar43;
    }
    plVar41 = local_108;
    piVar1 = (int *)(lVar44 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_019f7ecc(param_1,param_8,&local_108,local_100);
    if (plVar41 != (long *)0x0) {
      lVar44 = plVar41[0xb];
      piVar1 = (int *)(lVar44 + 0xc);
      do {
        iVar42 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar42 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar42 + -1 == 0) {
        *(undefined8 *)(lVar44 + 0x18) = 0;
        (**(code **)(*plVar41 + 0x20))(plVar41);
      }
    }
  }
  return;
}


