/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a18f80; name: FUN_01a18f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a18f80(long param_1,float *param_2,float *param_3,float *param_4,
                 undefined1 (*param_5) [12],float *param_6,uint param_7)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  bool bVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [12];
  undefined1 extraout_var [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar41 [16];
  undefined1 auVar32 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar64;
  float fVar67;
  undefined1 auVar54 [16];
  float fVar65;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar53;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar66;
  undefined1 auVar61 [16];
  float fVar68;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar69;
  undefined8 uVar70;
  float fVar83;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar84;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar71;
  float fVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  byte bVar85;
  undefined1 uVar86;
  byte bVar87;
  undefined1 uVar88;
  byte bVar89;
  undefined1 uVar90;
  byte bVar91;
  undefined1 uVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined1 uVar98;
  byte bVar99;
  undefined1 uVar100;
  byte bVar101;
  undefined1 uVar102;
  byte bVar103;
  undefined1 uVar104;
  byte bVar105;
  undefined1 uVar106;
  byte bVar107;
  undefined1 uVar108;
  byte bVar109;
  undefined1 uVar110;
  byte bVar111;
  undefined1 uVar112;
  undefined8 uVar113;
  float fVar115;
  undefined8 uVar114;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  float fVar122;
  ulong uVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  uVar27 = *(ulong *)*param_5;
  auVar32 = *param_5;
  fStack_d8 = (float)*(undefined8 *)(*param_5 + 8);
  uStack_d4 = (undefined4)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
  local_e0 = (float)uVar27;
  fStack_dc = (float)(uVar27 >> 0x20);
  fVar46 = *param_2 - *param_3;
  fVar64 = param_2[1] - param_3[1];
  auVar75._0_8_ = CONCAT44(fVar64,fVar46);
  auVar75._8_4_ = param_2[2] - param_3[2];
  auVar75._12_4_ = param_2[3] - param_3[3];
  fVar28 = *param_6;
  auVar34._8_8_ = auVar75._8_8_;
  auVar34._0_8_ = auVar75._0_8_;
  fVar29 = (float)FUN_00aacd40(auVar34,auVar75._8_4_);
  fVar122 = fVar29 + -360.0;
  if (fVar29 <= 180.0) {
    fVar122 = fVar29;
  }
  if (fVar122 < -180.0) {
    fVar122 = fVar122 + 360.0;
  }
  fVar29 = fVar46 * fVar46 + auVar75._8_4_ * auVar75._8_4_;
  fVar47 = SQRT(fVar29);
  auVar54 = ZEXT416((uint)fVar47);
  if (NAN(fVar47)) {
    auVar33._0_4_ = sqrtf(fVar29);
    auVar33._4_12_ = extraout_var;
    auVar54._8_8_ = extraout_var._4_8_;
    auVar54._0_8_ = auVar33._0_8_;
  }
  auVar72._4_4_ = fVar64;
  auVar72._0_4_ = fVar46;
  auVar72._8_4_ = auVar75._8_4_;
  auVar72._12_4_ = auVar75._12_4_;
  FUN_00aacd40(fVar64,auVar54,auVar72);
  fVar48 = *(float *)PTR_FloatPi_04372cf0;
  fVar69 = *(float *)PTR_FloatDegree180_04372ce0;
  fVar122 = fVar122 * (fVar48 / fVar69);
  uVar123 = 0;
  FUN_009a7ff4(fVar122);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar123;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar123;
  auVar34 = FUN_009a7ff4(fVar122,auVar18 << 0x40,auVar19 << 0x40);
  uVar23 = DAT_0388a880;
  uVar22 = DAT_0388a790;
  uVar120 = DAT_0388a6c8;
  uVar21 = DAT_0388a680;
  uVar121 = DAT_0388a648;
  uVar114 = DAT_0388a580;
  fVar83 = auVar34._0_4_;
  fVar29 = (float)_DAT_03889ac0;
  fVar84 = auVar34._4_4_;
  fVar46 = (float)((ulong)_DAT_03889ac0 >> 0x20);
  auVar73._0_8_ = CONCAT44(fVar84 * fVar46,fVar83 * fVar29);
  fVar64 = (float)_UNK_03889ac8;
  auVar73._8_4_ = auVar34._8_4_ * fVar64;
  fVar47 = (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar73._12_4_ = auVar34._12_4_ * fVar47;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar27 & 0xffffffff;
  uVar52 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a580);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar27 & 0xffffffff;
  uVar71 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
  uVar113 = a64_TBL(ZEXT816(0),auVar73,DAT_0388a580);
  uVar117 = a64_TBL(ZEXT816(0),auVar73,DAT_0388a6c8);
  fVar122 = (float)((ulong)uVar71 >> 0x20);
  uVar116 = a64_TBL(ZEXT816(0),auVar73,DAT_0388a880);
  fVar45 = (float)((ulong)uVar52 >> 0x20);
  uVar30 = a64_TBL(ZEXT816(0),auVar73,DAT_0388a790);
  uVar118 = a64_TBL(ZEXT816(0),auVar73,DAT_0388a680);
  auVar74._8_8_ = auVar73._0_8_;
  auVar74._0_8_ = auVar73._0_8_;
  uVar70 = a64_TBL(ZEXT816(0),auVar74,DAT_0388a648);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar27 & 0xffffffff;
  uVar53 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a880);
  fVar67 = (float)((ulong)uVar53 >> 0x20);
  fVar124 = (float)_DAT_03889ad0;
  fVar125 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar126 = (float)_UNK_03889ad8;
  fVar127 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar49 = (fVar83 * fVar29 * (float)uVar52 + fVar124 * local_e0 * (float)uVar113 +
           fVar124 * (float)uVar53 * (float)uVar118) - (float)uVar71 * (float)uVar116;
  fVar65 = (fVar84 * fVar46 * fVar45 + fVar125 * (float)((ulong)uVar113 >> 0x20) * 0.0 +
           fVar125 * fVar67 * (float)((ulong)uVar118 >> 0x20)) -
           fVar122 * (float)((ulong)uVar116 >> 0x20);
  auVar55._0_8_ = CONCAT44(fVar65,fVar49);
  auVar55._8_4_ =
       (auVar73._8_4_ * (float)uVar52 + fVar126 * (float)uVar71 * (float)uVar117 +
       fVar126 * local_e0 * (float)uVar70) - (float)uVar53 * (float)uVar30;
  auVar55._12_4_ =
       (auVar73._12_4_ * fVar45 + fVar127 * fVar122 * (float)((ulong)uVar117 >> 0x20) +
       fVar127 * (float)((ulong)uVar70 >> 0x20) * 0.0) - fVar67 * (float)((ulong)uVar30 >> 0x20);
  uVar52 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a580);
  uVar71 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
  uVar70 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a580);
  uVar117 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a6c8);
  fVar67 = (float)((ulong)uVar52 >> 0x20);
  fVar122 = (float)((ulong)uVar71 >> 0x20);
  uVar118 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a880);
  uVar113 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a680);
  uVar116 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a790);
  auVar56._8_8_ = auVar55._0_8_;
  auVar56._0_8_ = auVar55._0_8_;
  uVar53 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a648);
  uVar30 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a880);
  fVar45 = (float)((ulong)uVar30 >> 0x20);
  fVar49 = ((float)uVar52 * fVar49 + fVar124 * fVar83 * (float)uVar70 +
           fVar124 * (float)uVar30 * (float)uVar113) - (float)uVar71 * (float)uVar118;
  fVar65 = (fVar67 * fVar65 + fVar125 * fVar84 * (float)((ulong)uVar70 >> 0x20) +
           fVar125 * fVar45 * (float)((ulong)uVar113 >> 0x20)) -
           fVar122 * (float)((ulong)uVar118 >> 0x20);
  fVar83 = ((float)uVar52 * auVar55._8_4_ + fVar126 * (float)uVar71 * (float)uVar117 +
           fVar126 * fVar83 * (float)uVar53) - (float)uVar30 * (float)uVar116;
  fVar84 = (fVar67 * auVar55._12_4_ + fVar127 * fVar122 * (float)((ulong)uVar117 >> 0x20) +
           fVar127 * fVar84 * (float)((ulong)uVar53 >> 0x20)) -
           fVar45 * (float)((ulong)uVar116 >> 0x20);
  bVar97 = (byte)_UNK_038897c8;
  bVar99 = (byte)((ulong)_UNK_038897c8 >> 8);
  bVar101 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar103 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  bVar105 = (byte)((ulong)_UNK_038897c8 >> 0x20);
  bVar107 = (byte)((ulong)_UNK_038897c8 >> 0x28);
  bVar109 = (byte)((ulong)_UNK_038897c8 >> 0x30);
  bVar111 = (byte)((ulong)_UNK_038897c8 >> 0x38);
  bVar85 = (byte)_DAT_038897c0;
  bVar87 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar89 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar91 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar93 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar94 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar95 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar96 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  fVar122 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & bVar91,
                            CONCAT12((byte)((uint)fVar49 >> 0x10) & bVar89,
                                     CONCAT11((byte)((uint)fVar49 >> 8) & bVar87,
                                              SUB41(fVar49,0) & bVar85)));
  auVar31._0_8_ =
       CONCAT17((byte)((uint)fVar65 >> 0x18) & bVar96,
                CONCAT16((byte)((uint)fVar65 >> 0x10) & bVar95,
                         CONCAT15((byte)((uint)fVar65 >> 8) & bVar94,
                                  CONCAT14(SUB41(fVar65,0) & bVar93,fVar122))));
  auVar31[8] = SUB41(fVar83,0) & bVar97;
  auVar31[9] = (byte)((uint)fVar83 >> 8) & bVar99;
  auVar31[10] = (byte)((uint)fVar83 >> 0x10) & bVar101;
  auVar31[0xb] = (byte)((uint)fVar83 >> 0x18) & bVar103;
  auVar35[0xc] = SUB41(fVar84,0) & bVar105;
  auVar35._0_12_ = auVar31;
  auVar35[0xd] = (byte)((uint)fVar84 >> 8) & bVar107;
  auVar35[0xe] = (byte)((uint)fVar84 >> 0x10) & bVar109;
  auVar35[0xf] = (byte)((uint)fVar84 >> 0x18) & bVar111;
  fVar122 = *param_2 + fVar122 + 0.0;
  fStack_dc = fStack_dc + param_2[1] + (float)((ulong)auVar31._0_8_ >> 0x20);
  uVar71 = CONCAT44(fStack_dc,fVar122);
  fVar83 = param_2[2] + auVar31._8_4_ + 0.0;
  fVar84 = param_2[3] + auVar35._12_4_ + 0.0;
  uVar116 = CONCAT44(fVar84,fVar83);
  local_d0 = *param_3 + 0.0;
  fStack_cc = param_3[1] + 0.0;
  fStack_c8 = param_3[2] + 0.0;
  fStack_c4 = param_3[3] + 0.0;
  fVar122 = *(float *)(param_1 + 0xeea0) - fVar122;
  fStack_dc = *(float *)(param_1 + 0xeea4) - fStack_dc;
  fVar83 = *(float *)(param_1 + 0xeea8) - fVar83;
  fVar84 = *(float *)(param_1 + 0xeeac) - fVar84;
  auVar57._0_4_ = fVar122 * fVar122;
  auVar57._4_4_ = fStack_dc * fStack_dc;
  auVar57._8_4_ = fVar83 * fVar83;
  auVar57._12_4_ = fVar84 * fVar84;
  auVar34 = NEON_ext(auVar57,auVar57,8,1);
  fVar122 = *(float *)(param_1 + 0xeeb0) - local_d0;
  fVar83 = *(float *)(param_1 + 0xeeb4) - fStack_cc;
  fVar84 = *(float *)(param_1 + 0xeeb8) - fStack_c8;
  fVar45 = *(float *)(param_1 + 0xeebc) - fStack_c4;
  auVar36._0_4_ = fVar122 * fVar122;
  auVar36._4_4_ = fVar83 * fVar83;
  auVar36._8_4_ = fVar84 * fVar84;
  auVar36._12_4_ = fVar45 * fVar45;
  auVar75 = NEON_ext(auVar36,auVar36,8,1);
  fVar122 = SQRT(auVar75._0_4_ + auVar36._0_4_ + auVar75._4_4_ + auVar36._4_4_);
  bVar24 = false;
  bVar25 = true;
  if (SQRT(auVar34._0_4_ + auVar57._0_4_ + auVar34._4_4_ + auVar57._4_4_) <= 0.01) {
    bVar24 = false;
    bVar25 = true;
    if (!NAN(fVar122)) {
      bVar24 = fVar122 == 0.01;
      bVar25 = 0.01 <= fVar122;
    }
  }
  if (!bVar25 || bVar24) {
    local_c0 = *(undefined8 *)(param_1 + 0xeec0);
    uStack_b8 = *(undefined8 *)(param_1 + 0xeec8);
    local_d0 = (float)*(undefined8 *)(param_1 + 0xeed0);
    fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0xeed0) >> 0x20);
    fStack_c8 = (float)*(undefined8 *)(param_1 + 0xeed8);
    fStack_c4 = (float)((ulong)*(undefined8 *)(param_1 + 0xeed8) >> 0x20);
    local_110 = *(undefined8 *)(param_1 + 0xeee0);
    uStack_108 = *(undefined8 *)(param_1 + 0xeee8);
    goto LAB_01a192ac;
  }
  *(undefined8 *)(param_1 + 0xeea8) = uVar116;
  auVar20._12_4_ = uStack_d4;
  auVar20._0_12_ = auVar32;
  auVar34 = NEON_ext(ZEXT816(0),auVar20,8,1);
  auVar34 = NEON_ext(auVar34,auVar34,8,1);
  *(undefined8 *)(param_1 + 0xeea0) = uVar71;
  *(ulong *)(param_1 + 0xeeb8) = CONCAT44(fStack_c4,fStack_c8);
  uStack_108 = auVar34._8_8_;
  local_110 = auVar34._0_8_;
  *(ulong *)(param_1 + 0xeeb0) = CONCAT44(fStack_cc,local_d0);
  local_c0 = uVar71;
  uStack_b8 = uVar116;
  if ((param_7 & 1) != 0) {
    lVar26 = FUN_01a4b9b4(param_1);
    if (lVar26 == 0) {
      auVar77._8_8_ = uVar116;
      auVar77._0_8_ = uVar71;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      uVar27 = FUN_00ab869c(&local_d0,&local_c0,&local_a0,0x26000);
      uVar50 = (undefined4)local_c0;
      if ((uVar27 & 1) == 0) {
        local_b0 = CONCAT44(local_c0._4_4_ + -0.3,uVar50);
        uStack_a8 = uStack_b8;
        uVar27 = FUN_00ab869c(&local_d0,&local_b0,&local_a0,0x26000);
        auVar77._8_8_ = uVar116;
        auVar77._0_8_ = uVar71;
        if ((uVar27 & 1) != 0) {
          local_b0._0_4_ = (undefined4)local_c0;
          uStack_a8 = uStack_b8;
LAB_01a19570:
          auVar77._4_4_ = local_c0._4_4_ + 0.3;
          auVar77._0_4_ = (undefined4)local_b0;
          auVar77._8_8_ = uStack_a8;
LAB_01a19588:
          uStack_a8 = auVar77._8_8_;
          local_b0 = auVar77._0_8_;
        }
      }
      else {
        if (fStack_cc <= local_c0._4_4_) {
          local_b0 = CONCAT44(local_c0._4_4_ + 0.3,uVar50);
          uStack_a8 = uStack_b8;
          uVar27 = FUN_00ab869c(&local_d0,&local_b0,&local_a0,0x26000);
          if ((uVar27 & 1) != 0) {
            auVar77._0_4_ = SUB84(local_a0,0);
            auVar77._4_4_ = *(undefined4 *)((ulong)&local_c0 | 4);
            auVar77._8_8_ = uStack_98;
            goto LAB_01a19588;
          }
        }
        else {
          local_b0 = CONCAT44(fStack_cc,uVar50);
          uStack_a8 = uStack_b8;
          uVar27 = FUN_00ab869c(&local_d0,&local_b0,&local_a0,0x26000);
          if ((uVar27 & 1) != 0) {
            local_b0._0_4_ = (undefined4)local_a0;
            uStack_a8 = uStack_98;
            local_c0._4_4_ = fStack_cc;
            goto LAB_01a19570;
          }
        }
        auVar77._8_8_ = uStack_a8;
        auVar77._0_8_ = local_b0;
      }
    }
    uStack_b8 = auVar77._8_8_;
    *(undefined8 *)(param_1 + 0xef08) = uStack_b8;
    local_c0 = auVar77._0_8_;
    *(undefined8 *)(param_1 + 0xef00) = local_c0;
    fVar122 = *(float *)(param_1 + 0xeea0) - auVar77._0_4_;
    fVar83 = *(float *)(param_1 + 0xeea4) - auVar77._4_4_;
    fVar84 = *(float *)(param_1 + 0xeea8) - auVar77._8_4_;
    fVar45 = *(float *)(param_1 + 0xeeac) - auVar77._12_4_;
    auVar39._0_4_ = fVar122 * fVar122;
    auVar39._4_4_ = fVar83 * fVar83;
    auVar39._8_4_ = fVar84 * fVar84;
    auVar39._12_4_ = fVar45 * fVar45;
    auVar34 = NEON_ext(auVar39,auVar39,8,1);
    if (1.1920929e-07 < SQRT(auVar34._0_4_ + auVar39._0_4_ + auVar34._4_4_ + auVar39._4_4_)) {
      fVar83 = auVar77._0_4_ - *(float *)(param_1 + 0xeeb0);
      fVar45 = auVar77._4_4_ - *(float *)(param_1 + 0xeeb4);
      auVar59._0_8_ = CONCAT44(fVar45,fVar83);
      auVar59._8_4_ = auVar77._8_4_ - *(float *)(param_1 + 0xeeb8);
      auVar59._12_4_ = auVar77._12_4_ - *(float *)(param_1 + 0xeebc);
      fVar122 = *param_6;
      auVar40._8_8_ = auVar59._8_8_;
      auVar40._0_8_ = auVar59._0_8_;
      FUN_00aacd40(auVar40,auVar59._8_4_);
      fVar83 = fVar83 * fVar83 + auVar59._8_4_ * auVar59._8_4_;
      fVar84 = SQRT(fVar83);
      auVar60 = ZEXT416((uint)fVar84);
      if (NAN(fVar84)) {
        auVar41._0_4_ = sqrtf(fVar83);
        auVar41._4_12_ = extraout_var_01;
        auVar60._8_8_ = extraout_var_01._4_8_;
        auVar60._0_8_ = auVar41._0_8_;
      }
      auVar78._8_8_ = auVar59._8_8_;
      auVar78._0_8_ = auVar59._0_8_;
      FUN_00aacd40(fVar45,auVar60,auVar78);
      auVar34 = FUN_009a7ff4();
      auVar79._0_4_ = (float)_DAT_03888d10 * fVar122;
      auVar79._4_4_ = (float)((ulong)_DAT_03888d10 >> 0x20) * fVar122;
      auVar79._8_4_ = (float)_UNK_03888d18 * fVar122;
      auVar79._12_4_ = (float)((ulong)_UNK_03888d18 >> 0x20) * fVar122;
      uVar113 = a64_TBL(ZEXT816(0),auVar79,uVar21);
      fVar67 = auVar34._0_4_;
      fVar122 = fVar67 * fVar29;
      fVar68 = auVar34._4_4_;
      fVar84 = fVar68 * fVar46;
      uVar86 = SUB41(fVar84,0);
      uVar88 = (undefined1)((uint)fVar84 >> 8);
      uVar90 = (undefined1)((uint)fVar84 >> 0x10);
      uVar92 = (undefined1)((uint)fVar84 >> 0x18);
      fVar49 = auVar34._8_4_ * fVar64;
      uVar98 = SUB41(fVar49,0);
      uVar100 = (undefined1)((uint)fVar49 >> 8);
      uVar102 = (undefined1)((uint)fVar49 >> 0x10);
      uVar104 = (undefined1)((uint)fVar49 >> 0x18);
      fVar65 = auVar34._12_4_ * fVar47;
      uVar106 = SUB41(fVar65,0);
      uVar108 = (undefined1)((uint)fVar65 >> 8);
      uVar110 = (undefined1)((uint)fVar65 >> 0x10);
      uVar112 = (undefined1)((uint)fVar65 >> 0x18);
      uVar52 = a64_TBL(ZEXT816(0),auVar79,uVar114);
      auVar1[4] = uVar86;
      auVar1._0_4_ = fVar122;
      auVar1[5] = uVar88;
      auVar1[6] = uVar90;
      auVar1[7] = uVar92;
      auVar1[8] = uVar98;
      auVar1[9] = uVar100;
      auVar1[10] = uVar102;
      auVar1[0xb] = uVar104;
      auVar1[0xc] = uVar106;
      auVar1[0xd] = uVar108;
      auVar1[0xe] = uVar110;
      auVar1[0xf] = uVar112;
      uVar117 = a64_TBL(ZEXT816(0),auVar1,uVar114);
      auVar2[4] = uVar86;
      auVar2._0_4_ = fVar122;
      auVar2[5] = uVar88;
      auVar2[6] = uVar90;
      auVar2[7] = uVar92;
      auVar2[8] = uVar98;
      auVar2[9] = uVar100;
      auVar2[10] = uVar102;
      auVar2[0xb] = uVar104;
      auVar2[0xc] = uVar106;
      auVar2[0xd] = uVar108;
      auVar2[0xe] = uVar110;
      auVar2[0xf] = uVar112;
      uVar116 = a64_TBL(ZEXT816(0),auVar2,uVar120);
      fVar115 = (float)((ulong)uVar113 >> 0x20);
      fVar66 = (float)((ulong)uVar52 >> 0x20);
      auVar3[4] = uVar86;
      auVar3._0_4_ = fVar122;
      auVar3[5] = uVar88;
      auVar3[6] = uVar90;
      auVar3[7] = uVar92;
      auVar3[8] = uVar98;
      auVar3[9] = uVar100;
      auVar3[10] = uVar102;
      auVar3[0xb] = uVar104;
      auVar3[0xc] = uVar106;
      auVar3[0xd] = uVar108;
      auVar3[0xe] = uVar110;
      auVar3[0xf] = uVar112;
      uVar53 = a64_TBL(ZEXT816(0),auVar3,uVar22);
      auVar4[4] = uVar86;
      auVar4._0_4_ = fVar122;
      auVar4[5] = uVar88;
      auVar4[6] = uVar90;
      auVar4[7] = uVar92;
      auVar4[8] = uVar98;
      auVar4[9] = uVar100;
      auVar4[10] = uVar102;
      auVar4[0xb] = uVar104;
      auVar4[0xc] = uVar106;
      auVar4[0xd] = uVar108;
      auVar4[0xe] = uVar110;
      auVar4[0xf] = uVar112;
      uVar30 = a64_TBL(ZEXT816(0),auVar4,uVar23);
      auVar5[4] = uVar86;
      auVar5._0_4_ = fVar122;
      auVar5[5] = uVar88;
      auVar5[6] = uVar90;
      auVar5[7] = uVar92;
      auVar5[8] = uVar98;
      auVar5[9] = uVar100;
      auVar5[10] = uVar102;
      auVar5[0xb] = uVar104;
      auVar5[0xc] = uVar106;
      auVar5[0xd] = uVar108;
      auVar5[0xe] = uVar110;
      auVar5[0xf] = uVar112;
      uVar118 = a64_TBL(ZEXT816(0),auVar5,uVar21);
      auVar6[4] = uVar86;
      auVar6._0_4_ = fVar122;
      auVar6[5] = uVar88;
      auVar6[6] = uVar90;
      auVar6[7] = uVar92;
      auVar6[8] = SUB41(fVar122,0);
      auVar6[9] = (char)((uint)fVar122 >> 8);
      auVar6[10] = (char)((uint)fVar122 >> 0x10);
      auVar6[0xb] = (char)((uint)fVar122 >> 0x18);
      auVar6[0xc] = uVar86;
      auVar6[0xd] = uVar88;
      auVar6[0xe] = uVar90;
      auVar6[0xf] = uVar92;
      uVar71 = a64_TBL(ZEXT816(0),auVar6,uVar121);
      fVar83 = auVar79._0_4_ * (float)uVar71;
      fVar45 = auVar79._4_4_ * (float)((ulong)uVar71 >> 0x20);
      uVar71 = a64_TBL(ZEXT816(0),auVar79,uVar23);
      fVar82 = (float)((ulong)uVar71 >> 0x20);
      uVar70 = a64_TBL(ZEXT816(0),auVar34,uVar114);
      fVar51 = (fVar122 * (float)uVar52 + fVar124 * auVar79._0_4_ * (float)uVar117 +
               fVar124 * (float)uVar71 * (float)uVar118) - (float)uVar113 * (float)uVar30;
      fVar84 = (fVar84 * fVar66 + fVar125 * auVar79._4_4_ * (float)((ulong)uVar117 >> 0x20) +
               fVar125 * fVar82 * (float)((ulong)uVar118 >> 0x20)) -
               fVar115 * (float)((ulong)uVar30 >> 0x20);
      auVar61._0_8_ = CONCAT44(fVar84,fVar51);
      auVar61._8_4_ =
           (fVar49 * (float)uVar52 + fVar126 * (float)uVar113 * (float)uVar116 + fVar126 * fVar83) -
           (float)uVar71 * (float)uVar53;
      auVar61._12_4_ =
           (fVar65 * fVar66 + fVar127 * fVar115 * (float)((ulong)uVar116 >> 0x20) +
           fVar127 * (float)(CONCAT17((char)((uint)fVar45 >> 0x18),
                                      CONCAT16((char)((uint)fVar45 >> 0x10),
                                               CONCAT15((char)((uint)fVar45 >> 8),
                                                        CONCAT14(SUB41(fVar45,0),fVar83)))) >> 0x20)
           ) - fVar82 * (float)((ulong)uVar53 >> 0x20);
      uVar71 = a64_TBL(ZEXT816(0),auVar34,uVar21);
      fVar49 = (float)((ulong)uVar70 >> 0x20);
      uVar113 = a64_TBL(ZEXT816(0),auVar61,uVar114);
      uVar117 = a64_TBL(ZEXT816(0),auVar61,uVar120);
      fVar122 = (float)((ulong)uVar71 >> 0x20);
      uVar116 = a64_TBL(ZEXT816(0),auVar61,uVar23);
      uVar118 = a64_TBL(ZEXT816(0),auVar61,uVar21);
      uVar52 = a64_TBL(ZEXT816(0),auVar61,uVar22);
      auVar15._8_8_ = auVar61._0_8_;
      auVar15._0_8_ = auVar61._0_8_;
      uVar30 = a64_TBL(ZEXT816(0),auVar15,uVar121);
      uVar53 = a64_TBL(ZEXT816(0),auVar34,uVar23);
      fVar83 = (float)((ulong)uVar53 >> 0x20);
      fVar45 = ((float)uVar70 * fVar51 + fVar124 * fVar67 * (float)uVar113 +
               fVar124 * (float)uVar53 * (float)uVar118) - (float)uVar71 * (float)uVar116;
      fVar84 = (fVar49 * fVar84 + fVar125 * fVar68 * (float)((ulong)uVar113 >> 0x20) +
               fVar125 * fVar83 * (float)((ulong)uVar118 >> 0x20)) -
               fVar122 * (float)((ulong)uVar116 >> 0x20);
      fVar65 = ((float)uVar70 * auVar61._8_4_ + fVar126 * (float)uVar71 * (float)uVar117 +
               fVar126 * fVar67 * (float)uVar30) - (float)uVar53 * (float)uVar52;
      fVar122 = (fVar49 * auVar61._12_4_ + fVar127 * fVar122 * (float)((ulong)uVar117 >> 0x20) +
                fVar127 * fVar68 * (float)((ulong)uVar30 >> 0x20)) -
                fVar83 * (float)((ulong)uVar52 >> 0x20);
      fVar83 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & bVar91,
                               CONCAT12((byte)((uint)fVar45 >> 0x10) & bVar89,
                                        CONCAT11((byte)((uint)fVar45 >> 8) & bVar87,
                                                 SUB41(fVar45,0) & bVar85)));
      auVar32._0_8_ =
           CONCAT17((byte)((uint)fVar84 >> 0x18) & bVar96,
                    CONCAT16((byte)((uint)fVar84 >> 0x10) & bVar95,
                             CONCAT15((byte)((uint)fVar84 >> 8) & bVar94,
                                      CONCAT14(SUB41(fVar84,0) & bVar93,fVar83))));
      auVar32[8] = SUB41(fVar65,0) & bVar97;
      auVar32[9] = (byte)((uint)fVar65 >> 8) & bVar99;
      auVar32[10] = (byte)((uint)fVar65 >> 0x10) & bVar101;
      auVar32[0xb] = (byte)((uint)fVar65 >> 0x18) & bVar103;
      auVar42[0xc] = SUB41(fVar122,0) & bVar105;
      auVar42._0_12_ = auVar32;
      auVar42[0xd] = (byte)((uint)fVar122 >> 8) & bVar107;
      auVar42[0xe] = (byte)((uint)fVar122 >> 0x10) & bVar109;
      auVar42[0xf] = (byte)((uint)fVar122 >> 0x18) & bVar111;
      fVar83 = *(float *)(param_1 + 0xeeb0) + fVar83;
      fVar65 = *(float *)(param_1 + 0xeeb4) + (float)((ulong)auVar32._0_8_ >> 0x20);
      fVar67 = *(float *)(param_1 + 0xeeb8) + auVar32._8_4_;
      fVar68 = *(float *)(param_1 + 0xeebc) + auVar42._12_4_;
      fVar84 = *(float *)(param_1 + 0xeea0) - fVar83;
      fVar49 = *(float *)(param_1 + 0xeea4) - fVar65;
      auVar43._0_8_ = CONCAT44(fVar49,fVar84);
      auVar43._8_4_ = *(float *)(param_1 + 0xeea8) - fVar67;
      auVar43._12_4_ = *(float *)(param_1 + 0xeeac) - fVar68;
      *(float *)(param_1 + 0xeef8) = fVar67;
      *(float *)(param_1 + 0xeefc) = fVar68;
      *(float *)(param_1 + 0xeef0) = fVar83;
      *(float *)(param_1 + 0xeef4) = fVar65;
      fVar45 = (float)FUN_00aacd40(auVar43,auVar43._8_4_);
      fVar122 = fVar45 + -360.0;
      if (fVar45 <= 180.0) {
        fVar122 = fVar45;
      }
      fVar45 = fVar122 + 360.0;
      if (-180.0 <= fVar122) {
        fVar45 = fVar122;
      }
      fVar122 = fVar84 * fVar84 + auVar43._8_4_ * auVar43._8_4_;
      fVar84 = SQRT(fVar122);
      auVar62 = ZEXT416((uint)fVar84);
      if (NAN(fVar84)) {
        auVar44._0_4_ = sqrtf(fVar122);
        auVar44._4_12_ = extraout_var_02;
        auVar62._8_8_ = extraout_var_02._4_8_;
        auVar62._0_8_ = auVar44._0_8_;
      }
      auVar80._8_8_ = auVar43._8_8_;
      auVar80._0_8_ = auVar43._0_8_;
      FUN_00aacd40(fVar49,auVar62,auVar80);
      auVar34 = FUN_009a7ff4(-((fVar48 / fVar69) * fVar45),ZEXT816(0),ZEXT816(0));
      uVar52 = a64_TBL(ZEXT816(0),auVar34,uVar23);
      fVar69 = (float)((ulong)uVar52 >> 0x20);
      auVar81._0_4_ = fVar83 - *param_2;
      auVar81._4_4_ = fVar65 - param_2[1];
      auVar81._8_4_ = fVar67 - param_2[2];
      auVar81._12_4_ = fVar68 - param_2[3];
      uVar117 = a64_TBL(ZEXT816(0),auVar81,uVar21);
      fVar84 = auVar34._0_4_;
      fVar29 = fVar84 * fVar29;
      fVar45 = auVar34._4_4_;
      fVar46 = fVar45 * fVar46;
      uVar86 = SUB41(fVar46,0);
      uVar88 = (undefined1)((uint)fVar46 >> 8);
      uVar90 = (undefined1)((uint)fVar46 >> 0x10);
      uVar92 = (undefined1)((uint)fVar46 >> 0x18);
      fVar64 = auVar34._8_4_ * fVar64;
      uVar98 = SUB41(fVar64,0);
      uVar100 = (undefined1)((uint)fVar64 >> 8);
      uVar102 = (undefined1)((uint)fVar64 >> 0x10);
      uVar104 = (undefined1)((uint)fVar64 >> 0x18);
      fVar47 = auVar34._12_4_ * fVar47;
      uVar106 = SUB41(fVar47,0);
      uVar108 = (undefined1)((uint)fVar47 >> 8);
      uVar110 = (undefined1)((uint)fVar47 >> 0x10);
      uVar112 = (undefined1)((uint)fVar47 >> 0x18);
      uVar70 = a64_TBL(ZEXT816(0),auVar81,uVar114);
      auVar7[4] = uVar86;
      auVar7._0_4_ = fVar29;
      auVar7[5] = uVar88;
      auVar7[6] = uVar90;
      auVar7[7] = uVar92;
      auVar7[8] = uVar98;
      auVar7[9] = uVar100;
      auVar7[10] = uVar102;
      auVar7[0xb] = uVar104;
      auVar7[0xc] = uVar106;
      auVar7[0xd] = uVar108;
      auVar7[0xe] = uVar110;
      auVar7[0xf] = uVar112;
      uVar118 = a64_TBL(ZEXT816(0),auVar7,uVar114);
      auVar8[4] = uVar86;
      auVar8._0_4_ = fVar29;
      auVar8[5] = uVar88;
      auVar8[6] = uVar90;
      auVar8[7] = uVar92;
      auVar8[8] = uVar98;
      auVar8[9] = uVar100;
      auVar8[10] = uVar102;
      auVar8[0xb] = uVar104;
      auVar8[0xc] = uVar106;
      auVar8[0xd] = uVar108;
      auVar8[0xe] = uVar110;
      auVar8[0xf] = uVar112;
      uVar116 = a64_TBL(ZEXT816(0),auVar8,uVar120);
      fVar65 = (float)((ulong)uVar117 >> 0x20);
      fVar48 = (float)((ulong)uVar70 >> 0x20);
      auVar9[4] = uVar86;
      auVar9._0_4_ = fVar29;
      auVar9[5] = uVar88;
      auVar9[6] = uVar90;
      auVar9[7] = uVar92;
      auVar9[8] = uVar98;
      auVar9[9] = uVar100;
      auVar9[10] = uVar102;
      auVar9[0xb] = uVar104;
      auVar9[0xc] = uVar106;
      auVar9[0xd] = uVar108;
      auVar9[0xe] = uVar110;
      auVar9[0xf] = uVar112;
      uVar53 = a64_TBL(ZEXT816(0),auVar9,uVar22);
      auVar10[4] = uVar86;
      auVar10._0_4_ = fVar29;
      auVar10[5] = uVar88;
      auVar10[6] = uVar90;
      auVar10[7] = uVar92;
      auVar10[8] = uVar98;
      auVar10[9] = uVar100;
      auVar10[10] = uVar102;
      auVar10[0xb] = uVar104;
      auVar10[0xc] = uVar106;
      auVar10[0xd] = uVar108;
      auVar10[0xe] = uVar110;
      auVar10[0xf] = uVar112;
      uVar30 = a64_TBL(ZEXT816(0),auVar10,uVar23);
      auVar11[4] = uVar86;
      auVar11._0_4_ = fVar29;
      auVar11[5] = uVar88;
      auVar11[6] = uVar90;
      auVar11[7] = uVar92;
      auVar11[8] = uVar98;
      auVar11[9] = uVar100;
      auVar11[10] = uVar102;
      auVar11[0xb] = uVar104;
      auVar11[0xc] = uVar106;
      auVar11[0xd] = uVar108;
      auVar11[0xe] = uVar110;
      auVar11[0xf] = uVar112;
      uVar119 = a64_TBL(ZEXT816(0),auVar11,uVar21);
      auVar12[4] = uVar86;
      auVar12._0_4_ = fVar29;
      auVar12[5] = uVar88;
      auVar12[6] = uVar90;
      auVar12[7] = uVar92;
      auVar12[8] = SUB41(fVar29,0);
      auVar12[9] = (char)((uint)fVar29 >> 8);
      auVar12[10] = (char)((uint)fVar29 >> 0x10);
      auVar12[0xb] = (char)((uint)fVar29 >> 0x18);
      auVar12[0xc] = uVar86;
      auVar12[0xd] = uVar88;
      auVar12[0xe] = uVar90;
      auVar12[0xf] = uVar92;
      uVar71 = a64_TBL(ZEXT816(0),auVar12,uVar121);
      fVar122 = auVar81._0_4_ * (float)uVar71;
      fVar83 = auVar81._4_4_ * (float)((ulong)uVar71 >> 0x20);
      uVar71 = a64_TBL(ZEXT816(0),auVar81,uVar23);
      fVar49 = (float)((ulong)uVar71 >> 0x20);
      uVar113 = a64_TBL(ZEXT816(0),auVar34,uVar114);
      fVar29 = (fVar29 * (float)uVar70 + fVar124 * auVar81._0_4_ * (float)uVar118 +
               fVar124 * (float)uVar71 * (float)uVar119) - (float)uVar117 * (float)uVar30;
      fVar46 = (fVar46 * fVar48 + fVar125 * auVar81._4_4_ * (float)((ulong)uVar118 >> 0x20) +
               fVar125 * fVar49 * (float)((ulong)uVar119 >> 0x20)) -
               fVar65 * (float)((ulong)uVar30 >> 0x20);
      auVar63._0_8_ = CONCAT44(fVar46,fVar29);
      auVar63._8_4_ =
           (fVar64 * (float)uVar70 + fVar126 * (float)uVar117 * (float)uVar116 + fVar126 * fVar122)
           - (float)uVar71 * (float)uVar53;
      auVar63._12_4_ =
           (fVar47 * fVar48 + fVar127 * fVar65 * (float)((ulong)uVar116 >> 0x20) +
           fVar127 * (float)(CONCAT17((char)((uint)fVar83 >> 0x18),
                                      CONCAT16((char)((uint)fVar83 >> 0x10),
                                               CONCAT15((char)((uint)fVar83 >> 8),
                                                        CONCAT14(SUB41(fVar83,0),fVar122)))) >> 0x20
                            )) - fVar49 * (float)((ulong)uVar53 >> 0x20);
      uVar71 = a64_TBL(ZEXT816(0),auVar34,uVar21);
      uVar114 = a64_TBL(ZEXT816(0),auVar63,uVar114);
      uVar120 = a64_TBL(ZEXT816(0),auVar63,uVar120);
      fVar122 = (float)((ulong)uVar71 >> 0x20);
      fVar64 = (float)((ulong)uVar113 >> 0x20);
      uVar116 = a64_TBL(ZEXT816(0),auVar63,uVar23);
      auVar16._8_8_ = auVar63._0_8_;
      auVar16._0_8_ = auVar63._0_8_;
      uVar30 = a64_TBL(ZEXT816(0),auVar16,uVar121);
      uVar121 = a64_TBL(ZEXT816(0),auVar63,uVar21);
      uVar53 = a64_TBL(ZEXT816(0),auVar63,uVar22);
      fVar29 = ((float)uVar113 * fVar29 + fVar124 * fVar84 * (float)uVar114 +
               fVar124 * (float)uVar52 * (float)uVar121) - (float)uVar71 * (float)uVar116;
      fVar46 = (fVar64 * fVar46 + fVar125 * fVar45 * (float)((ulong)uVar114 >> 0x20) +
               fVar125 * fVar69 * (float)((ulong)uVar121 >> 0x20)) -
               fVar122 * (float)((ulong)uVar116 >> 0x20);
      fVar47 = ((float)uVar113 * auVar63._8_4_ + fVar126 * (float)uVar71 * (float)uVar120 +
               fVar126 * fVar84 * (float)uVar30) - (float)uVar52 * (float)uVar53;
      fVar122 = (fVar64 * auVar63._12_4_ + fVar127 * fVar122 * (float)((ulong)uVar120 >> 0x20) +
                fVar127 * fVar45 * (float)((ulong)uVar30 >> 0x20)) -
                fVar69 * (float)((ulong)uVar53 >> 0x20);
      uStack_108 = CONCAT17((byte)((uint)fVar122 >> 0x18) & bVar111,
                            CONCAT16((byte)((uint)fVar122 >> 0x10) & bVar109,
                                     CONCAT15((byte)((uint)fVar122 >> 8) & bVar107,
                                              CONCAT14(SUB41(fVar122,0) & bVar105,
                                                       CONCAT13((byte)((uint)fVar47 >> 0x18) &
                                                                bVar103,CONCAT12((byte)((uint)fVar47
                                                                                       >> 0x10) &
                                                                                 bVar101,CONCAT11((
                                                  byte)((uint)fVar47 >> 8) & bVar99,
                                                  SUB41(fVar47,0) & bVar97)))))));
      local_110 = CONCAT17((byte)((uint)fVar46 >> 0x18) & bVar96,
                           CONCAT16((byte)((uint)fVar46 >> 0x10) & bVar95,
                                    CONCAT15((byte)((uint)fVar46 >> 8) & bVar94,
                                             CONCAT14(SUB41(fVar46,0) & bVar93,
                                                      CONCAT13((byte)((uint)fVar29 >> 0x18) & bVar91
                                                               ,CONCAT12((byte)((uint)fVar29 >> 0x10
                                                                               ) & bVar89,
                                                                         CONCAT11((byte)((uint)
                                                  fVar29 >> 8) & bVar87,SUB41(fVar29,0) & bVar85))))
                                            )));
    }
    else {
      *(undefined8 *)(param_1 + 0xeef8) = uStack_b8;
      *(undefined8 *)(param_1 + 0xeef0) = local_c0;
    }
  }
  *(undefined8 *)(param_1 + 0xeec8) = uStack_b8;
  *(undefined8 *)(param_1 + 0xeec0) = local_c0;
  *(ulong *)(param_1 + 0xeed8) = CONCAT44(fStack_c4,fStack_c8);
  *(ulong *)(param_1 + 0xeed0) = CONCAT44(fStack_cc,local_d0);
  *(undefined8 *)(param_1 + 0xeee8) = uStack_108;
  *(undefined8 *)(param_1 + 0xeee0) = local_110;
LAB_01a192ac:
  fVar122 = (float)local_c0 - local_d0;
  fVar29 = local_c0._4_4_ - fStack_cc;
  auVar37._0_8_ = CONCAT44(fVar29,fVar122);
  auVar37._8_4_ = (float)uStack_b8 - fStack_c8;
  auVar37._12_4_ = uStack_b8._4_4_ - fStack_c4;
  auVar34 = FUN_00aacd40(auVar37,auVar37._8_4_);
  fVar46 = auVar34._0_4_ + -360.0;
  uVar86 = SUB41(fVar46,0);
  uVar88 = (undefined1)((uint)fVar46 >> 8);
  uVar90 = (undefined1)((uint)fVar46 >> 0x10);
  uVar92 = (undefined1)((uint)fVar46 >> 0x18);
  if (auVar34._0_4_ <= 180.0) {
    uVar86 = auVar34[0];
    uVar88 = auVar34[1];
    uVar90 = auVar34[2];
    uVar92 = auVar34[3];
  }
  if ((float)CONCAT13(uVar92,CONCAT12(uVar90,CONCAT11(uVar88,uVar86))) < -180.0) {
    fVar46 = (float)CONCAT13(uVar92,CONCAT12(uVar90,CONCAT11(uVar88,uVar86))) + 360.0;
    uVar86 = SUB41(fVar46,0);
    uVar88 = (undefined1)((uint)fVar46 >> 8);
    uVar90 = (undefined1)((uint)fVar46 >> 0x10);
    uVar92 = (undefined1)((uint)fVar46 >> 0x18);
  }
  fVar122 = fVar122 * fVar122 + auVar37._8_4_ * auVar37._8_4_;
  fVar46 = SQRT(fVar122);
  auVar58 = ZEXT416((uint)fVar46);
  if (NAN(fVar46)) {
    auVar38._0_4_ = sqrtf(fVar122);
    auVar38._4_12_ = extraout_var_00;
    auVar58._8_8_ = extraout_var_00._4_8_;
    auVar58._0_8_ = auVar38._0_8_;
  }
  auVar76._8_8_ = auVar37._8_8_;
  auVar76._0_8_ = auVar37._0_8_;
  fVar29 = (float)FUN_00aacd40(fVar29,auVar58,auVar76);
  fVar122 = fVar29 + -360.0;
  if (fVar29 <= 180.0) {
    fVar122 = fVar29;
  }
  if (fVar122 < -180.0) {
    fVar122 = fVar122 + 360.0;
  }
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  *param_4 = -fVar122;
  param_4[1] = (float)CONCAT13(uVar92,CONCAT12(uVar90,CONCAT11(uVar88,uVar86)));
  *(undefined8 *)(*param_5 + 8) = uStack_108;
  *(undefined8 *)*param_5 = local_110;
  *param_6 = fVar28 + fStack_d8;
  return;
}


