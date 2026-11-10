/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3b65c; name: FUN_01a3b65c
 */


/* WARNING: Removing unreachable block (ram,0x01a3ba84) */
/* WARNING: Removing unreachable block (ram,0x01a3bfc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b65c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 extraout_d0;
  undefined1 auVar15 [12];
  undefined8 extraout_var_03;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar14;
  float extraout_var;
  float extraout_var_01;
  float extraout_var_04;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  float extraout_var_00;
  float extraout_var_02;
  float extraout_var_05;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar18 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar38 [12];
  undefined8 uVar36;
  float fVar54;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar37;
  undefined1 auVar39 [12];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar40 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar55;
  undefined1 auVar57 [12];
  undefined8 uVar56;
  int iVar70;
  int iVar73;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar71;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar58 [12];
  float fVar72;
  float fVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar69;
  undefined1 auVar68 [16];
  int iVar75;
  undefined8 uVar76;
  undefined1 in_q3 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar77;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  undefined8 uVar87;
  float fVar106;
  undefined1 auVar91 [16];
  float fVar107;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  float fVar105;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  float fVar118;
  float fVar120;
  undefined8 uVar119;
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  byte local_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  byte bStack_ac;
  byte bStack_ab;
  byte bStack_aa;
  byte bStack_a9;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  byte bStack_a2;
  byte bStack_a1;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  
  lVar12 = FUN_01a4b9b4();
  if (lVar12 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  *(undefined8 *)(lVar12 + 0x328) = extraout_var_03;
  *(undefined8 *)(lVar12 + 800) = extraout_d0;
  if ((char)param_1[0x6e] == '\0') {
    auVar19 = ZEXT416(*(uint *)(param_1 + 0x6c));
  }
  else {
    fVar107 = *(float *)(param_1 + 0x6a) - *(float *)(param_1 + 0x68);
    fVar54 = *(float *)(param_1 + 0x6b) - *(float *)(param_1 + 0x69);
    fVar86 = *(float *)((long)param_1 + 0x35c) - *(float *)((long)param_1 + 0x34c);
    auVar19 = ZEXT816(0);
    auVar20._0_4_ = fVar107 * fVar107;
    auVar20._4_4_ = 0;
    auVar20._8_4_ = fVar54 * fVar54;
    auVar20._12_4_ = fVar86 * fVar86;
    auVar103 = NEON_ext(auVar20,auVar20,8,1);
    fVar106 = auVar103._0_4_ + auVar20._0_4_;
    fVar35 = auVar103._4_4_ + 0.0;
    fVar34 = fVar106 + fVar35;
    fVar106 = fVar106 + fVar35;
    in_q3 = auVar19;
    if (fVar34 != 0.0) {
      auVar64._8_8_ = CONCAT44(fVar106,fVar34);
      auVar64._0_8_ = CONCAT44(fVar106,fVar34);
      auVar19 = NEON_frsqrte(auVar64,4);
      auVar83._0_4_ = auVar19._0_4_ * fVar34;
      auVar83._4_4_ = auVar19._4_4_ * fVar106;
      auVar83._8_4_ = auVar19._8_4_ * fVar34;
      auVar83._12_4_ = auVar19._12_4_ * fVar106;
      auVar20 = NEON_frsqrts(auVar19,auVar83,4);
      auVar103._0_4_ = auVar19._0_4_ * auVar20._0_4_;
      auVar103._4_4_ = auVar19._4_4_ * auVar20._4_4_;
      auVar103._8_4_ = auVar19._8_4_ * auVar20._8_4_;
      auVar103._12_4_ = auVar19._12_4_ * auVar20._12_4_;
      auVar84._0_4_ = fVar34 * auVar103._0_4_;
      auVar84._4_4_ = fVar106 * auVar103._4_4_;
      auVar84._8_4_ = fVar34 * auVar103._8_4_;
      auVar84._12_4_ = fVar106 * auVar103._12_4_;
      in_q3 = NEON_frsqrts(auVar103,auVar84,4);
      fVar107 = fVar107 * auVar103._0_4_ * in_q3._0_4_;
      fVar35 = auVar103._4_4_ * in_q3._4_4_ * 0.0;
      fVar54 = fVar54 * auVar103._8_4_ * in_q3._8_4_;
      fVar86 = fVar86 * auVar103._12_4_ * in_q3._12_4_;
      iVar55 = -(uint)(fVar34 == 0.0);
      iVar70 = -(uint)(fVar106 == 0.0);
      iVar73 = -(uint)(fVar34 == 0.0);
      iVar75 = -(uint)(fVar106 == 0.0);
      fVar107 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                CONCAT12((byte)((uint)fVar107 >> 0x10) &
                                         ~(byte)((uint)iVar55 >> 0x10),
                                         CONCAT11((byte)((uint)fVar107 >> 8) &
                                                  ~(byte)((uint)iVar55 >> 8),
                                                  SUB41(fVar107,0) & ~(byte)iVar55)));
      auVar39._0_8_ =
           CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                    CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                             CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                      CONCAT14(SUB41(fVar35,0) & ~(byte)iVar70,fVar107))));
      auVar39[8] = SUB41(fVar54,0) & ~(byte)iVar73;
      auVar39[9] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar73 >> 8);
      auVar39[10] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
      auVar39[0xb] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
      auVar50[0xc] = SUB41(fVar86,0) & ~(byte)iVar75;
      auVar50._0_12_ = auVar39;
      auVar50[0xd] = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar75 >> 8);
      auVar50[0xe] = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
      auVar50[0xf] = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
      fStack_74 = auVar50._12_4_;
      fStack_7c = (float)((ulong)auVar39._0_8_ >> 0x20);
      auVar27._0_4_ = fVar107 * (float)_DAT_03888d10;
      auVar27._4_4_ = fStack_7c * (float)((ulong)_DAT_03888d10 >> 0x20);
      auVar27._8_4_ = auVar39._8_4_ * (float)_UNK_03888d18;
      auVar27._12_4_ = fStack_74 * (float)((ulong)_UNK_03888d18 >> 0x20);
      NEON_ext(auVar27,auVar27,8,1);
      fVar106 = (float)FUN_01009610();
      fVar34 = -fVar106;
      if (0.0 <= fVar107) {
        fVar34 = fVar106;
      }
      auVar19 = ZEXT416((uint)fVar34);
      if ((char)param_1[0x6e] == '\0') goto LAB_01a3b6ac;
    }
    uVar77 = auVar19._8_8_;
    fVar107 = *(float *)(param_1 + 0x6a) - *(float *)(param_1 + 0x68);
    fVar35 = *(float *)((long)param_1 + 0x354) - *(float *)((long)param_1 + 0x344);
    fVar86 = *(float *)(param_1 + 0x6b) - *(float *)(param_1 + 0x69);
    fVar105 = *(float *)((long)param_1 + 0x35c) - *(float *)((long)param_1 + 0x34c);
    auVar28._0_4_ = fVar107 * fVar107;
    auVar28._4_4_ = fVar35 * fVar35;
    auVar28._8_4_ = fVar86 * fVar86;
    auVar28._12_4_ = fVar105 * fVar105;
    auVar20 = NEON_ext(auVar28,auVar28,8,1);
    fVar106 = auVar20._0_4_ + auVar28._0_4_;
    fVar54 = auVar20._4_4_ + auVar28._4_4_;
    fVar34 = fVar106 + fVar54;
    fVar106 = fVar106 + fVar54;
    if (fVar34 != 0.0) {
      auVar51._8_8_ = CONCAT44(fVar106,fVar34);
      auVar51._0_8_ = CONCAT44(fVar106,fVar34);
      fVar108 = fVar86 * fVar86 + fVar107 * fVar107;
      fVar54 = fVar108 + 0.0;
      fVar108 = fVar108 + 0.0;
      auVar29._8_8_ = CONCAT44(fVar108,fVar54);
      auVar29._0_8_ = CONCAT44(fVar108,fVar54);
      auVar20 = NEON_frsqrte(auVar29,4);
      auVar98._0_4_ = auVar20._0_4_ * fVar54;
      auVar98._4_4_ = auVar20._4_4_ * fVar108;
      auVar98._8_4_ = auVar20._8_4_ * fVar54;
      auVar98._12_4_ = auVar20._12_4_ * fVar108;
      auVar103 = NEON_frsqrts(auVar20,auVar98,4);
      auVar65._0_4_ = auVar20._0_4_ * auVar103._0_4_;
      auVar65._4_4_ = auVar20._4_4_ * auVar103._4_4_;
      auVar65._8_4_ = auVar20._8_4_ * auVar103._8_4_;
      auVar65._12_4_ = auVar20._12_4_ * auVar103._12_4_;
      auVar99._0_4_ = fVar54 * auVar65._0_4_;
      auVar99._4_4_ = fVar108 * auVar65._4_4_;
      auVar99._8_4_ = fVar54 * auVar65._8_4_;
      auVar99._12_4_ = fVar108 * auVar65._12_4_;
      auVar20 = NEON_frsqrts(auVar65,auVar99,4);
      fVar71 = fVar107 * auVar65._0_4_ * auVar20._0_4_;
      fVar109 = auVar65._4_4_ * auVar20._4_4_ * 0.0;
      fVar72 = fVar86 * auVar65._8_4_ * auVar20._8_4_;
      fVar74 = auVar65._12_4_ * auVar20._12_4_ * 0.0;
      iVar55 = -(uint)(fVar54 == 0.0);
      iVar70 = -(uint)(fVar108 == 0.0);
      iVar73 = -(uint)(fVar54 == 0.0);
      iVar75 = -(uint)(fVar108 == 0.0);
      in_q3[0] = ~(byte)iVar55;
      in_q3[1] = ~(byte)((uint)iVar55 >> 8);
      in_q3[2] = ~(byte)((uint)iVar55 >> 0x10);
      in_q3[3] = ~(byte)((uint)iVar55 >> 0x18);
      in_q3[4] = ~(byte)iVar70;
      in_q3[5] = ~(byte)((uint)iVar70 >> 8);
      in_q3[6] = ~(byte)((uint)iVar70 >> 0x10);
      in_q3[7] = ~(byte)((uint)iVar70 >> 0x18);
      in_q3[8] = ~(byte)iVar73;
      in_q3[9] = ~(byte)((uint)iVar73 >> 8);
      in_q3[10] = ~(byte)((uint)iVar73 >> 0x10);
      in_q3[0xb] = ~(byte)((uint)iVar73 >> 0x18);
      in_q3[0xc] = ~(byte)iVar75;
      in_q3[0xd] = ~(byte)((uint)iVar75 >> 8);
      in_q3[0xe] = ~(byte)((uint)iVar75 >> 0x10);
      in_q3[0xf] = ~(byte)((uint)iVar75 >> 0x18);
      auVar20 = NEON_frsqrte(auVar51,4);
      fVar54 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & in_q3[3],
                               CONCAT12((byte)((uint)fVar71 >> 0x10) & in_q3[2],
                                        CONCAT11((byte)((uint)fVar71 >> 8) & in_q3[1],
                                                 SUB41(fVar71,0) & in_q3[0])));
      auVar58._0_8_ =
           CONCAT17((byte)((uint)fVar109 >> 0x18) & in_q3[7],
                    CONCAT16((byte)((uint)fVar109 >> 0x10) & in_q3[6],
                             CONCAT15((byte)((uint)fVar109 >> 8) & in_q3[5],
                                      CONCAT14(SUB41(fVar109,0) & in_q3[4],fVar54))));
      auVar58[8] = SUB41(fVar72,0) & in_q3[8];
      auVar58[9] = (byte)((uint)fVar72 >> 8) & in_q3[9];
      auVar58[10] = (byte)((uint)fVar72 >> 0x10) & in_q3[10];
      auVar58[0xb] = (byte)((uint)fVar72 >> 0x18) & in_q3[0xb];
      auVar66[0xc] = SUB41(fVar74,0) & in_q3[0xc];
      auVar66._0_12_ = auVar58;
      auVar66[0xd] = (byte)((uint)fVar74 >> 8) & in_q3[0xd];
      auVar66[0xe] = (byte)((uint)fVar74 >> 0x10) & in_q3[0xe];
      auVar66[0xf] = (byte)((uint)fVar74 >> 0x18) & in_q3[0xf];
      auVar100._0_4_ = fVar34 * auVar20._0_4_;
      auVar100._4_4_ = fVar106 * auVar20._4_4_;
      auVar100._8_4_ = fVar34 * auVar20._8_4_;
      auVar100._12_4_ = fVar106 * auVar20._12_4_;
      auVar103 = NEON_frsqrts(auVar20,auVar100,4);
      auVar30._0_4_ = auVar20._0_4_ * auVar103._0_4_;
      auVar30._4_4_ = auVar20._4_4_ * auVar103._4_4_;
      auVar30._8_4_ = auVar20._8_4_ * auVar103._8_4_;
      auVar30._12_4_ = auVar20._12_4_ * auVar103._12_4_;
      auVar101._0_4_ = fVar34 * auVar30._0_4_;
      auVar101._4_4_ = fVar106 * auVar30._4_4_;
      auVar101._8_4_ = fVar34 * auVar30._8_4_;
      auVar101._12_4_ = fVar106 * auVar30._12_4_;
      iVar55 = -(uint)(fVar34 == 0.0);
      iVar70 = -(uint)(fVar106 == 0.0);
      iVar73 = -(uint)(fVar34 == 0.0);
      iVar75 = -(uint)(fVar106 == 0.0);
      auVar20 = NEON_frsqrts(auVar30,auVar101,4);
      fVar107 = fVar107 * auVar30._0_4_ * auVar20._0_4_;
      fVar35 = fVar35 * auVar30._4_4_ * auVar20._4_4_;
      fVar86 = fVar86 * auVar30._8_4_ * auVar20._8_4_;
      fVar105 = fVar105 * auVar30._12_4_ * auVar20._12_4_;
      fVar34 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                               CONCAT12((byte)((uint)fVar107 >> 0x10) &
                                        ~(byte)((uint)iVar55 >> 0x10),
                                        CONCAT11((byte)((uint)fVar107 >> 8) &
                                                 ~(byte)((uint)iVar55 >> 8),
                                                 SUB41(fVar107,0) & ~(byte)iVar55)));
      auVar40._0_8_ =
           CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                    CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                             CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                      CONCAT14(SUB41(fVar35,0) & ~(byte)iVar70,fVar34))));
      auVar40[8] = SUB41(fVar86,0) & ~(byte)iVar73;
      auVar40[9] = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar73 >> 8);
      auVar40[10] = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
      auVar40[0xb] = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
      auVar52[0xc] = SUB41(fVar105,0) & ~(byte)iVar75;
      auVar52._0_12_ = auVar40;
      auVar52[0xd] = (byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar75 >> 8);
      auVar52[0xe] = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
      auVar52[0xf] = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
      auVar53._0_4_ = fVar54 * fVar34;
      auVar53._4_4_ = (float)((ulong)auVar58._0_8_ >> 0x20) * (float)((ulong)auVar40._0_8_ >> 0x20);
      auVar53._8_4_ = auVar58._8_4_ * auVar40._8_4_;
      auVar53._12_4_ = auVar66._12_4_ * auVar52._12_4_;
      NEON_ext(auVar53,auVar53,8,1);
      FUN_01009610();
      auVar19._8_8_ = uVar77;
    }
  }
LAB_01a3b6ac:
  auVar19 = FUN_009a7ff4(auVar19);
  fStack_78 = auVar19._8_4_;
  fStack_74 = auVar19._12_4_;
  local_80 = auVar19._0_4_;
  fStack_7c = auVar19._4_4_;
  if (*(int *)((long)param_1 + 0x374) == 1) {
    if ((char)param_1[0x6e] == '\0') {
      fStack_b8 = (float)param_1[0x69];
      fStack_b4 = (float)((ulong)param_1[0x69] >> 0x20);
      local_c0 = (float)param_1[0x68];
      fStack_bc = (float)((ulong)param_1[0x68] >> 0x20);
LAB_01a3b6d4:
      fVar34 = *(float *)((long)param_1 + 0x364);
    }
    else {
      FUN_01a4b7e0(param_1);
      local_c0 = *(float *)(param_1 + 0x68) - extraout_s0;
      fStack_bc = *(float *)((long)param_1 + 0x344) - extraout_var;
      fStack_b8 = *(float *)(param_1 + 0x69) - extraout_var_01;
      fStack_b4 = *(float *)((long)param_1 + 0x34c) - extraout_var_04;
      if ((char)param_1[0x6e] == '\0') goto LAB_01a3b6d4;
      fVar107 = *(float *)(param_1 + 0x6a) - *(float *)(param_1 + 0x68);
      fVar35 = *(float *)((long)param_1 + 0x354) - *(float *)((long)param_1 + 0x344);
      fVar86 = *(float *)(param_1 + 0x6b) - *(float *)(param_1 + 0x69);
      fVar105 = *(float *)((long)param_1 + 0x35c) - *(float *)((long)param_1 + 0x34c);
      auVar21._0_4_ = fVar107 * fVar107;
      auVar21._4_4_ = fVar35 * fVar35;
      auVar21._8_4_ = fVar86 * fVar86;
      auVar21._12_4_ = fVar105 * fVar105;
      auVar20 = NEON_ext(auVar21,auVar21,8,1);
      fVar106 = auVar20._0_4_ + auVar21._0_4_;
      fVar54 = auVar20._4_4_ + auVar21._4_4_;
      fVar34 = fVar106 + fVar54;
      fVar106 = fVar106 + fVar54;
      if (fVar34 == 0.0) {
        fVar34 = 0.0;
      }
      else {
        auVar22._8_8_ = CONCAT44(fVar106,fVar34);
        auVar22._0_8_ = CONCAT44(fVar106,fVar34);
        fVar108 = fVar86 * fVar86 + fVar107 * fVar107;
        fVar54 = fVar108 + 0.0;
        fVar108 = fVar108 + 0.0;
        auVar43._8_8_ = CONCAT44(fVar108,fVar54);
        auVar43._0_8_ = CONCAT44(fVar108,fVar54);
        auVar20 = NEON_frsqrte(auVar43,4);
        auVar92._0_4_ = auVar20._0_4_ * fVar54;
        auVar92._4_4_ = auVar20._4_4_ * fVar108;
        auVar92._8_4_ = auVar20._8_4_ * fVar54;
        auVar92._12_4_ = auVar20._12_4_ * fVar108;
        auVar103 = NEON_frsqrts(auVar20,auVar92,4);
        auVar61._0_4_ = auVar20._0_4_ * auVar103._0_4_;
        auVar61._4_4_ = auVar20._4_4_ * auVar103._4_4_;
        auVar61._8_4_ = auVar20._8_4_ * auVar103._8_4_;
        auVar61._12_4_ = auVar20._12_4_ * auVar103._12_4_;
        auVar93._0_4_ = fVar54 * auVar61._0_4_;
        auVar93._4_4_ = fVar108 * auVar61._4_4_;
        auVar93._8_4_ = fVar54 * auVar61._8_4_;
        auVar93._12_4_ = fVar108 * auVar61._12_4_;
        iVar55 = -(uint)(fVar54 == 0.0);
        iVar70 = -(uint)(fVar108 == 0.0);
        iVar73 = -(uint)(fVar54 == 0.0);
        iVar75 = -(uint)(fVar108 == 0.0);
        auVar20 = NEON_frsqrts(auVar61,auVar93,4);
        fVar54 = fVar107 * auVar61._0_4_ * auVar20._0_4_;
        fVar108 = auVar61._4_4_ * auVar20._4_4_ * 0.0;
        fVar71 = fVar86 * auVar61._8_4_ * auVar20._8_4_;
        fVar109 = auVar61._12_4_ * auVar20._12_4_ * 0.0;
        fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                 CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                          ~(byte)((uint)iVar55 >> 0x10),
                                          CONCAT11((byte)((uint)fVar54 >> 8) &
                                                   ~(byte)((uint)iVar55 >> 8),
                                                   SUB41(fVar54,0) & ~(byte)iVar55)));
        auVar38._0_8_ =
             CONCAT17((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                      CONCAT16((byte)((uint)fVar108 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                               CONCAT15((byte)((uint)fVar108 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                        CONCAT14(SUB41(fVar108,0) & ~(byte)iVar70,fVar54))));
        auVar38[8] = SUB41(fVar71,0) & ~(byte)iVar73;
        auVar38[9] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar73 >> 8);
        auVar38[10] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
        auVar38[0xb] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
        auVar44[0xc] = SUB41(fVar109,0) & ~(byte)iVar75;
        auVar44._0_12_ = auVar38;
        auVar44[0xd] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar75 >> 8);
        auVar44[0xe] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
        auVar44[0xf] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
        auVar20 = NEON_frsqrte(auVar22,4);
        auVar94._0_4_ = fVar34 * auVar20._0_4_;
        auVar94._4_4_ = fVar106 * auVar20._4_4_;
        auVar94._8_4_ = fVar34 * auVar20._8_4_;
        auVar94._12_4_ = fVar106 * auVar20._12_4_;
        auVar103 = NEON_frsqrts(auVar20,auVar94,4);
        auVar82._0_4_ = auVar20._0_4_ * auVar103._0_4_;
        auVar82._4_4_ = auVar20._4_4_ * auVar103._4_4_;
        auVar82._8_4_ = auVar20._8_4_ * auVar103._8_4_;
        auVar82._12_4_ = auVar20._12_4_ * auVar103._12_4_;
        auVar95._0_4_ = fVar34 * auVar82._0_4_;
        auVar95._4_4_ = fVar106 * auVar82._4_4_;
        auVar95._8_4_ = fVar34 * auVar82._8_4_;
        auVar95._12_4_ = fVar106 * auVar82._12_4_;
        iVar55 = -(uint)(fVar34 == 0.0);
        iVar70 = -(uint)(fVar106 == 0.0);
        iVar73 = -(uint)(fVar34 == 0.0);
        iVar75 = -(uint)(fVar106 == 0.0);
        auVar20 = NEON_frsqrts(auVar82,auVar95,4);
        fVar107 = fVar107 * auVar82._0_4_ * auVar20._0_4_;
        fVar106 = fVar35 * auVar82._4_4_ * auVar20._4_4_;
        fVar86 = fVar86 * auVar82._8_4_ * auVar20._8_4_;
        fVar105 = fVar105 * auVar82._12_4_ * auVar20._12_4_;
        fVar34 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                 CONCAT12((byte)((uint)fVar107 >> 0x10) &
                                          ~(byte)((uint)iVar55 >> 0x10),
                                          CONCAT11((byte)((uint)fVar107 >> 8) &
                                                   ~(byte)((uint)iVar55 >> 8),
                                                   SUB41(fVar107,0) & ~(byte)iVar55)));
        auVar15._0_8_ =
             CONCAT17((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                      CONCAT16((byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                               CONCAT15((byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                        CONCAT14(SUB41(fVar106,0) & ~(byte)iVar70,fVar34))));
        auVar15[8] = SUB41(fVar86,0) & ~(byte)iVar73;
        auVar15[9] = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar73 >> 8);
        auVar15[10] = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
        auVar15[0xb] = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
        auVar23[0xc] = SUB41(fVar105,0) & ~(byte)iVar75;
        auVar23._0_12_ = auVar15;
        auVar23[0xd] = (byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar75 >> 8);
        auVar23[0xe] = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
        auVar23[0xf] = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
        auVar24._0_4_ = fVar54 * fVar34;
        auVar24._4_4_ =
             (float)((ulong)auVar38._0_8_ >> 0x20) * (float)((ulong)auVar15._0_8_ >> 0x20);
        auVar24._8_4_ = auVar38._8_4_ * auVar15._8_4_;
        auVar24._12_4_ = auVar44._12_4_ * auVar23._12_4_;
        NEON_ext(auVar24,auVar24,8,1);
        fVar106 = (float)FUN_01009610();
        fVar34 = -fVar106;
        if (0.0 <= fVar35) {
          fVar34 = fVar106;
        }
      }
    }
    auVar20 = FUN_009a7ff4(ZEXT816(0),fVar34,ZEXT816(0));
    uVar56 = DAT_0388a880;
    uVar36 = DAT_0388a790;
    uVar90 = DAT_0388a6c8;
    uVar37 = DAT_0388a680;
    uVar11 = DAT_0388a648;
    uVar77 = DAT_0388a580;
    fVar34 = *(float *)(param_1 + 0x6b);
    if ((char)param_1[0x6e] == '\0') {
      fVar106 = fVar34;
    }
    else {
      fVar106 = *(float *)(param_1 + 0x6a) - *(float *)(param_1 + 0x68);
      fVar107 = *(float *)((long)param_1 + 0x354) - *(float *)((long)param_1 + 0x344);
      fVar35 = *(float *)((long)param_1 + 0x35c) - *(float *)((long)param_1 + 0x34c);
      auVar48._0_4_ = fVar106 * fVar106;
      auVar48._4_4_ = fVar107 * fVar107;
      auVar48._8_4_ = (fVar34 - *(float *)(param_1 + 0x69)) * (fVar34 - *(float *)(param_1 + 0x69));
      auVar48._12_4_ = fVar35 * fVar35;
      auVar103 = NEON_ext(auVar48,auVar48,8,1);
      fVar106 = SQRT(auVar103._0_4_ + auVar48._0_4_ + auVar103._4_4_ + auVar48._4_4_);
    }
    auVar91._0_4_ = (float)_DAT_03888d10 * fVar106;
    fVar54 = (float)((ulong)_DAT_03888d10 >> 0x20);
    auVar91._4_4_ = fVar54 * fVar106;
    auVar91._8_4_ = (float)_UNK_03888d18 * fVar106;
    fVar86 = (float)((ulong)_UNK_03888d18 >> 0x20);
    auVar91._12_4_ = fVar86 * fVar106;
    fVar106 = auVar20._0_4_;
    fVar105 = (float)_DAT_03889ac0;
    fVar108 = fVar106 * fVar105;
    fVar107 = auVar20._4_4_;
    fVar71 = (float)((ulong)_DAT_03889ac0 >> 0x20);
    fVar109 = fVar107 * fVar71;
    fVar72 = (float)_UNK_03889ac8;
    fVar110 = auVar20._8_4_ * fVar72;
    fVar74 = (float)((ulong)_UNK_03889ac8 >> 0x20);
    fVar111 = auVar20._12_4_ * fVar74;
    auVar4._4_4_ = fVar109;
    auVar4._0_4_ = fVar108;
    auVar4._8_4_ = fVar110;
    auVar4._12_4_ = fVar111;
    uVar113 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
    uVar76 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a580);
    uVar119 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a680);
    fVar112 = (float)((ulong)uVar119 >> 0x20);
    auVar5._4_4_ = fVar109;
    auVar5._0_4_ = fVar108;
    auVar5._8_4_ = fVar110;
    auVar5._12_4_ = fVar111;
    uVar123 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6c8);
    auVar6._4_4_ = fVar109;
    auVar6._0_4_ = fVar108;
    auVar6._8_4_ = fVar110;
    auVar6._12_4_ = fVar111;
    uVar116 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
    fVar35 = (float)((ulong)uVar76 >> 0x20);
    auVar7._4_4_ = fVar109;
    auVar7._0_4_ = fVar108;
    auVar7._8_4_ = fVar110;
    auVar7._12_4_ = fVar111;
    uVar14 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
    auVar8._4_4_ = fVar109;
    auVar8._0_4_ = fVar108;
    auVar8._8_4_ = fVar110;
    auVar8._12_4_ = fVar111;
    uVar117 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a790);
    auVar9._4_4_ = fVar109;
    auVar9._0_4_ = fVar108;
    auVar9._8_4_ = fVar108;
    auVar9._12_4_ = fVar109;
    uVar88 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a648);
    uVar87 = a64_TBL(ZEXT816(0),auVar91,DAT_0388a880);
    fVar69 = (float)((ulong)uVar87 >> 0x20);
    fVar118 = (float)_DAT_03889ad0;
    fVar120 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar121 = (float)_UNK_03889ad8;
    fVar122 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar108 = (fVar108 * (float)uVar76 + fVar118 * auVar91._0_4_ * (float)uVar113 +
              fVar118 * (float)uVar87 * (float)uVar14) - (float)uVar119 * (float)uVar116;
    fVar109 = (fVar109 * fVar35 + fVar120 * auVar91._4_4_ * (float)((ulong)uVar113 >> 0x20) +
              fVar120 * fVar69 * (float)((ulong)uVar14 >> 0x20)) -
              fVar112 * (float)((ulong)uVar116 >> 0x20);
    auVar78._0_8_ = CONCAT44(fVar109,fVar108);
    auVar78._8_4_ =
         (fVar110 * (float)uVar76 + fVar121 * (float)uVar119 * (float)uVar123 +
         fVar121 * auVar91._0_4_ * (float)uVar88) - (float)uVar87 * (float)uVar117;
    auVar78._12_4_ =
         (fVar111 * fVar35 + fVar122 * fVar112 * (float)((ulong)uVar123 >> 0x20) +
         fVar122 * auVar91._4_4_ * (float)((ulong)uVar88 >> 0x20)) -
         fVar69 * (float)((ulong)uVar117 >> 0x20);
    uVar113 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a580);
    uVar88 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a680);
    fVar110 = (float)((ulong)uVar88 >> 0x20);
    uVar119 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a580);
    uVar116 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a6c8);
    fVar69 = (float)((ulong)uVar113 >> 0x20);
    uVar14 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a790);
    uVar117 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a880);
    uVar123 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a680);
    auVar79._8_8_ = auVar78._0_8_;
    auVar79._0_8_ = auVar78._0_8_;
    uVar87 = a64_TBL(ZEXT816(0),auVar79,DAT_0388a648);
    uVar76 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
    fVar35 = (float)((ulong)uVar76 >> 0x20);
    fVar108 = ((float)uVar113 * fVar108 + fVar118 * fVar106 * (float)uVar119 +
              fVar118 * (float)uVar76 * (float)uVar123) - (float)uVar88 * (float)uVar117;
    fVar109 = (fVar69 * fVar109 + fVar120 * fVar107 * (float)((ulong)uVar119 >> 0x20) +
              fVar120 * fVar35 * (float)((ulong)uVar123 >> 0x20)) -
              fVar110 * (float)((ulong)uVar117 >> 0x20);
    fVar106 = ((float)uVar113 * auVar78._8_4_ + fVar121 * (float)uVar88 * (float)uVar116 +
              fVar121 * fVar106 * (float)uVar87) - (float)uVar76 * (float)uVar14;
    fVar107 = (fVar69 * auVar78._12_4_ + fVar122 * fVar110 * (float)((ulong)uVar116 >> 0x20) +
              fVar122 * fVar107 * (float)((ulong)uVar87 >> 0x20)) -
              fVar35 * (float)((ulong)uVar14 >> 0x20);
    bStack_a8 = (byte)_UNK_038897c8;
    bStack_a7 = (byte)((ulong)_UNK_038897c8 >> 8);
    bStack_a6 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bStack_a5 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    bStack_a4 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    bStack_a3 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    bStack_a2 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bStack_a1 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    local_b0 = (byte)_DAT_038897c0;
    bStack_af = (byte)((ulong)_DAT_038897c0 >> 8);
    bStack_ae = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bStack_ad = (byte)((ulong)_DAT_038897c0 >> 0x18);
    bStack_ac = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bStack_ab = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bStack_aa = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bStack_a9 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    uStack_c8 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & bStack_a5,
                                CONCAT12((byte)((uint)fVar106 >> 0x10) & bStack_a6,
                                         CONCAT11((byte)((uint)fVar106 >> 8) & bStack_a7,
                                                  SUB41(fVar106,0) & bStack_a8)));
    uStack_c4 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & bStack_a1,
                                CONCAT12((byte)((uint)fVar107 >> 0x10) & bStack_a2,
                                         CONCAT11((byte)((uint)fVar107 >> 8) & bStack_a3,
                                                  SUB41(fVar107,0) & bStack_a4)));
    local_d0 = (float)CONCAT13((byte)((uint)fVar108 >> 0x18) & bStack_ad,
                               CONCAT12((byte)((uint)fVar108 >> 0x10) & bStack_ae,
                                        CONCAT11((byte)((uint)fVar108 >> 8) & bStack_af,
                                                 SUB41(fVar108,0) & local_b0)));
    uStack_cc = (float)CONCAT13((byte)((uint)fVar109 >> 0x18) & bStack_a9,
                                CONCAT12((byte)((uint)fVar109 >> 0x10) & bStack_aa,
                                         CONCAT11((byte)((uint)fVar109 >> 8) & bStack_ab,
                                                  SUB41(fVar109,0) & bStack_ac)));
    if ((char)param_1[0x6e] == '\0') {
      fVar106 = *(float *)(param_1 + 0x6c);
    }
    else {
      fVar108 = *(float *)(param_1 + 0x6a) - *(float *)(param_1 + 0x68);
      fVar34 = fVar34 - *(float *)(param_1 + 0x69);
      fVar109 = *(float *)((long)param_1 + 0x35c) - *(float *)((long)param_1 + 0x34c);
      fVar106 = 0.0;
      auVar67._0_4_ = fVar108 * fVar108;
      auVar67._4_4_ = 0;
      auVar67._8_4_ = fVar34 * fVar34;
      auVar67._12_4_ = fVar109 * fVar109;
      auVar20 = NEON_ext(auVar67,auVar67,8,1);
      fVar35 = auVar20._0_4_ + auVar67._0_4_;
      fVar69 = auVar20._4_4_ + 0.0;
      fVar107 = fVar35 + fVar69;
      fVar35 = fVar35 + fVar69;
      if (fVar107 != 0.0) {
        auVar68._8_8_ = CONCAT44(fVar35,fVar107);
        auVar68._0_8_ = CONCAT44(fVar35,fVar107);
        auVar20 = NEON_frsqrte(auVar68,4);
        auVar102._0_4_ = auVar20._0_4_ * fVar107;
        auVar102._4_4_ = auVar20._4_4_ * fVar35;
        auVar102._8_4_ = auVar20._8_4_ * fVar107;
        auVar102._12_4_ = auVar20._12_4_ * fVar35;
        auVar103 = NEON_frsqrts(auVar20,auVar102,4);
        auVar85._0_4_ = auVar20._0_4_ * auVar103._0_4_;
        auVar85._4_4_ = auVar20._4_4_ * auVar103._4_4_;
        auVar85._8_4_ = auVar20._8_4_ * auVar103._8_4_;
        auVar85._12_4_ = auVar20._12_4_ * auVar103._12_4_;
        auVar104._0_4_ = fVar107 * auVar85._0_4_;
        auVar104._4_4_ = fVar35 * auVar85._4_4_;
        auVar104._8_4_ = fVar107 * auVar85._8_4_;
        auVar104._12_4_ = fVar35 * auVar85._12_4_;
        iVar55 = -(uint)(fVar107 == 0.0);
        iVar70 = -(uint)(fVar35 == 0.0);
        iVar73 = -(uint)(fVar107 == 0.0);
        iVar75 = -(uint)(fVar35 == 0.0);
        auVar20 = NEON_frsqrts(auVar85,auVar104,4);
        fVar108 = fVar108 * auVar85._0_4_ * auVar20._0_4_;
        fVar106 = auVar85._4_4_ * auVar20._4_4_ * 0.0;
        fVar34 = fVar34 * auVar85._8_4_ * auVar20._8_4_;
        fVar109 = fVar109 * auVar85._12_4_ * auVar20._12_4_;
        fVar107 = (float)CONCAT13((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                  CONCAT12((byte)((uint)fVar108 >> 0x10) &
                                           ~(byte)((uint)iVar55 >> 0x10),
                                           CONCAT11((byte)((uint)fVar108 >> 8) &
                                                    ~(byte)((uint)iVar55 >> 8),
                                                    SUB41(fVar108,0) & ~(byte)iVar55)));
        auVar18._0_8_ =
             CONCAT17((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                      CONCAT16((byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                               CONCAT15((byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                        CONCAT14(SUB41(fVar106,0) & ~(byte)iVar70,fVar107))));
        auVar18[8] = SUB41(fVar34,0) & ~(byte)iVar73;
        auVar18[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar73 >> 8);
        auVar18[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
        auVar18[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
        auVar31[0xc] = SUB41(fVar109,0) & ~(byte)iVar75;
        auVar31._0_12_ = auVar18;
        auVar31[0xd] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar75 >> 8);
        auVar31[0xe] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
        auVar31[0xf] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
        auVar32._0_4_ = fVar107 * (float)_DAT_03888d10;
        auVar32._4_4_ = (float)((ulong)auVar18._0_8_ >> 0x20) * fVar54;
        auVar32._8_4_ = auVar18._8_4_ * (float)_UNK_03888d18;
        auVar32._12_4_ = auVar31._12_4_ * fVar86;
        NEON_ext(auVar32,auVar32,8,1);
        fVar34 = (float)FUN_01009610();
        fVar106 = -fVar34;
        if (0.0 <= fVar107) {
          fVar106 = fVar34;
        }
      }
    }
    auVar20 = FUN_009a7ff4(fVar106,ZEXT816(0),ZEXT816(0));
    auVar59._0_4_ = local_c0 + local_d0;
    auVar59._4_4_ = fStack_bc + uStack_cc;
    auVar59._8_4_ = fStack_b8 + uStack_c8;
    auVar59._12_4_ = fStack_b4 + uStack_c4;
    uVar117 = a64_TBL(ZEXT816(0),auVar59,uVar37);
    fVar34 = auVar20._0_4_;
    fVar106 = auVar20._4_4_;
    auVar80._0_8_ = CONCAT44(fVar106 * fVar71,fVar34 * fVar105);
    auVar80._8_4_ = auVar20._8_4_ * fVar72;
    auVar80._12_4_ = auVar20._12_4_ * fVar74;
    uVar76 = a64_TBL(ZEXT816(0),auVar59,uVar77);
    uVar88 = a64_TBL(ZEXT816(0),auVar80,uVar77);
    uVar123 = a64_TBL(ZEXT816(0),auVar80,uVar90);
    fVar108 = (float)((ulong)uVar117 >> 0x20);
    fVar107 = (float)((ulong)uVar76 >> 0x20);
    uVar114 = a64_TBL(ZEXT816(0),auVar80,uVar36);
    uVar14 = a64_TBL(ZEXT816(0),auVar80,uVar56);
    uVar119 = a64_TBL(ZEXT816(0),auVar80,uVar37);
    auVar81._8_8_ = auVar80._0_8_;
    auVar81._0_8_ = auVar80._0_8_;
    uVar116 = a64_TBL(ZEXT816(0),auVar81,uVar11);
    uVar87 = a64_TBL(ZEXT816(0),auVar59,uVar56);
    fVar86 = (float)((ulong)uVar87 >> 0x20);
    uVar113 = a64_TBL(ZEXT816(0),auVar20,uVar77);
    fVar35 = (fVar34 * fVar105 * (float)uVar76 + fVar118 * auVar59._0_4_ * (float)uVar88 +
             fVar118 * (float)uVar87 * (float)uVar119) - (float)uVar117 * (float)uVar14;
    fVar54 = (fVar106 * fVar71 * fVar107 + fVar120 * auVar59._4_4_ * (float)((ulong)uVar88 >> 0x20)
             + fVar120 * fVar86 * (float)((ulong)uVar119 >> 0x20)) -
             fVar108 * (float)((ulong)uVar14 >> 0x20);
    auVar41._0_8_ = CONCAT44(fVar54,fVar35);
    auVar41._8_4_ =
         (auVar80._8_4_ * (float)uVar76 + fVar121 * (float)uVar117 * (float)uVar123 +
         fVar121 * auVar59._0_4_ * (float)uVar116) - (float)uVar87 * (float)uVar114;
    auVar41._12_4_ =
         (auVar80._12_4_ * fVar107 + fVar122 * fVar108 * (float)((ulong)uVar123 >> 0x20) +
         fVar122 * auVar59._4_4_ * (float)((ulong)uVar116 >> 0x20)) -
         fVar86 * (float)((ulong)uVar114 >> 0x20);
    in_q3._0_8_ = a64_TBL(ZEXT816(0),auVar20,uVar37);
    uVar87 = a64_TBL(ZEXT816(0),auVar41,uVar77);
    uVar88 = a64_TBL(ZEXT816(0),auVar41,uVar90);
    fVar108 = (float)((ulong)in_q3._0_8_ >> 0x20);
    fVar86 = (float)((ulong)uVar113 >> 0x20);
    uVar123 = a64_TBL(ZEXT816(0),auVar41,uVar56);
    uVar119 = a64_TBL(ZEXT816(0),auVar41,uVar37);
    uVar116 = a64_TBL(ZEXT816(0),auVar41,uVar36);
    auVar42._8_8_ = auVar41._0_8_;
    auVar42._0_8_ = auVar41._0_8_;
    uVar76 = a64_TBL(ZEXT816(0),auVar42,uVar11);
    uVar14 = a64_TBL(ZEXT816(0),auVar20,uVar56);
    fVar107 = (float)((ulong)uVar14 >> 0x20);
    in_q3._8_8_ = uVar14;
    fVar35 = ((float)uVar113 * fVar35 + fVar118 * fVar34 * (float)uVar87 +
             fVar118 * (float)uVar14 * (float)uVar119) - (float)in_q3._0_8_ * (float)uVar123;
    fVar54 = (fVar86 * fVar54 + fVar120 * fVar106 * (float)((ulong)uVar87 >> 0x20) +
             fVar120 * fVar107 * (float)((ulong)uVar119 >> 0x20)) -
             fVar108 * (float)((ulong)uVar123 >> 0x20);
    fVar34 = ((float)uVar113 * auVar41._8_4_ + fVar121 * (float)in_q3._0_8_ * (float)uVar88 +
             fVar121 * fVar34 * (float)uVar76) - (float)uVar14 * (float)uVar116;
    fVar106 = (fVar86 * auVar41._12_4_ + fVar122 * fVar108 * (float)((ulong)uVar88 >> 0x20) +
              fVar122 * fVar106 * (float)((ulong)uVar76 >> 0x20)) -
              fVar107 * (float)((ulong)uVar116 >> 0x20);
    local_c0 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & bStack_ad,
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & bStack_ae,
                                        CONCAT11((byte)((uint)fVar35 >> 8) & bStack_af,
                                                 SUB41(fVar35,0) & local_b0)));
    auVar57._0_8_ =
         CONCAT17((byte)((uint)fVar54 >> 0x18) & bStack_a9,
                  CONCAT16((byte)((uint)fVar54 >> 0x10) & bStack_aa,
                           CONCAT15((byte)((uint)fVar54 >> 8) & bStack_ab,
                                    CONCAT14(SUB41(fVar54,0) & bStack_ac,local_c0))));
    auVar57[8] = SUB41(fVar34,0) & bStack_a8;
    auVar57[9] = (byte)((uint)fVar34 >> 8) & bStack_a7;
    auVar57[10] = (byte)((uint)fVar34 >> 0x10) & bStack_a6;
    auVar57[0xb] = (byte)((uint)fVar34 >> 0x18) & bStack_a5;
    auVar60[0xc] = SUB41(fVar106,0) & bStack_a4;
    auVar60._0_12_ = auVar57;
    auVar60[0xd] = (byte)((uint)fVar106 >> 8) & bStack_a3;
    auVar60[0xe] = (byte)((uint)fVar106 >> 0x10) & bStack_a2;
    auVar60[0xf] = (byte)((uint)fVar106 >> 0x18) & bStack_a1;
    if (param_1[0x7a] == 0) {
      local_60 = (long *)0x0;
    }
    else {
      fStack_b8 = auVar57._8_4_;
      fStack_b4 = auVar60._12_4_;
      fStack_bc = (float)((ulong)auVar57._0_8_ >> 0x20);
      FUN_009e659c(&local_60);
      if (local_60 != (long *)0x0) {
        auVar20 = FUN_01c2f7bc();
        uVar117 = a64_TBL(ZEXT816(0),auVar20,uVar37);
        uVar115 = a64_TBL(ZEXT816(0),auVar19,uVar56);
        auVar62._0_8_ = CONCAT44(fStack_7c * fVar71,local_80 * fVar105);
        auVar62._8_4_ = fStack_78 * fVar72;
        auVar62._12_4_ = fStack_74 * fVar74;
        uVar87 = a64_TBL(ZEXT816(0),auVar20,uVar77);
        uVar114 = a64_TBL(ZEXT816(0),auVar62,uVar77);
        uVar88 = a64_TBL(ZEXT816(0),auVar62,uVar90);
        fVar54 = (float)((ulong)uVar117 >> 0x20);
        fVar106 = (float)((ulong)uVar87 >> 0x20);
        uVar119 = a64_TBL(ZEXT816(0),auVar62,uVar56);
        uVar89 = a64_TBL(ZEXT816(0),auVar62,uVar37);
        uVar123 = a64_TBL(ZEXT816(0),auVar62,uVar36);
        auVar63._8_8_ = auVar62._0_8_;
        auVar63._0_8_ = auVar62._0_8_;
        uVar113 = a64_TBL(ZEXT816(0),auVar63,uVar11);
        uVar14 = a64_TBL(ZEXT816(0),auVar20,uVar56);
        fVar34 = (float)((ulong)uVar14 >> 0x20);
        uVar76 = a64_TBL(ZEXT816(0),auVar19,uVar77);
        uVar116 = a64_TBL(ZEXT816(0),auVar19,uVar37);
        fVar107 = (local_80 * fVar105 * (float)uVar87 + fVar118 * auVar20._0_4_ * (float)uVar114 +
                  fVar118 * (float)uVar14 * (float)uVar89) - (float)uVar117 * (float)uVar119;
        fVar35 = (fStack_7c * fVar71 * fVar106 +
                  fVar120 * auVar20._4_4_ * (float)((ulong)uVar114 >> 0x20) +
                 fVar120 * fVar34 * (float)((ulong)uVar89 >> 0x20)) -
                 fVar54 * (float)((ulong)uVar119 >> 0x20);
        auVar49._0_8_ = CONCAT44(fVar35,fVar107);
        auVar49._8_4_ =
             (auVar62._8_4_ * (float)uVar87 + fVar121 * (float)uVar117 * (float)uVar88 +
             fVar121 * auVar20._0_4_ * (float)uVar113) - (float)uVar14 * (float)uVar123;
        auVar49._12_4_ =
             (auVar62._12_4_ * fVar106 + fVar122 * fVar54 * (float)((ulong)uVar88 >> 0x20) +
             fVar122 * auVar20._4_4_ * (float)((ulong)uVar113 >> 0x20)) -
             fVar34 * (float)((ulong)uVar123 >> 0x20);
        uVar77 = a64_TBL(ZEXT816(0),auVar49,uVar77);
        uVar90 = a64_TBL(ZEXT816(0),auVar49,uVar90);
        in_q3._0_4_ = local_80 * (float)uVar77;
        in_q3._4_4_ = fStack_7c * (float)((ulong)uVar77 >> 0x20);
        fVar86 = (float)uVar116 * (float)uVar90;
        fVar54 = (float)((ulong)uVar116 >> 0x20);
        fVar105 = fVar54 * (float)((ulong)uVar90 >> 0x20);
        in_q3._12_4_ = fVar105;
        in_q3._8_4_ = fVar86;
        fVar106 = (float)((ulong)uVar76 >> 0x20);
        auVar10._8_4_ = fVar107;
        auVar10._0_8_ = auVar49._0_8_;
        auVar10._12_4_ = fVar35;
        uVar11 = a64_TBL(ZEXT816(0),auVar10,uVar11);
        uVar90 = a64_TBL(ZEXT816(0),auVar49,uVar37);
        fVar108 = (float)((ulong)uVar115 >> 0x20);
        uVar77 = a64_TBL(ZEXT816(0),auVar49,uVar56);
        uVar37 = a64_TBL(ZEXT816(0),auVar49,uVar36);
        fVar34 = ((float)uVar76 * fVar107 + fVar118 * in_q3._0_4_ +
                 fVar118 * (float)uVar115 * (float)uVar90) - (float)uVar116 * (float)uVar77;
        fVar107 = (fVar106 * fVar35 + fVar120 * in_q3._4_4_ +
                  fVar120 * fVar108 * (float)((ulong)uVar90 >> 0x20)) -
                  fVar54 * (float)((ulong)uVar77 >> 0x20);
        fVar35 = ((float)uVar76 * auVar49._8_4_ + fVar121 * fVar86 +
                 fVar121 * local_80 * (float)uVar11) - (float)uVar115 * (float)uVar37;
        fVar106 = (fVar106 * auVar49._12_4_ + fVar122 * fVar105 +
                  fVar122 * fStack_7c * (float)((ulong)uVar11 >> 0x20)) -
                  fVar108 * (float)((ulong)uVar37 >> 0x20);
        fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & bStack_ad,
                                 CONCAT12((byte)((uint)fVar34 >> 0x10) & bStack_ae,
                                          CONCAT11((byte)((uint)fVar34 >> 8) & bStack_af,
                                                   SUB41(fVar34,0) & local_b0)));
        auVar17._0_8_ =
             CONCAT17((byte)((uint)fVar107 >> 0x18) & bStack_a9,
                      CONCAT16((byte)((uint)fVar107 >> 0x10) & bStack_aa,
                               CONCAT15((byte)((uint)fVar107 >> 8) & bStack_ab,
                                        CONCAT14(SUB41(fVar107,0) & bStack_ac,fVar34))));
        auVar17[8] = SUB41(fVar35,0) & bStack_a8;
        auVar17[9] = (byte)((uint)fVar35 >> 8) & bStack_a7;
        auVar17[10] = (byte)((uint)fVar35 >> 0x10) & bStack_a6;
        auVar17[0xb] = (byte)((uint)fVar35 >> 0x18) & bStack_a5;
        auVar26[0xc] = SUB41(fVar106,0) & bStack_a4;
        auVar26._0_12_ = auVar17;
        auVar26[0xd] = (byte)((uint)fVar106 >> 8) & bStack_a3;
        auVar26[0xe] = (byte)((uint)fVar106 >> 0x10) & bStack_a2;
        auVar26[0xf] = (byte)((uint)fVar106 >> 0x18) & bStack_a1;
        local_c0 = local_c0 + fVar34;
        fStack_bc = fStack_bc + (float)((ulong)auVar17._0_8_ >> 0x20);
        fStack_b8 = fStack_b8 + auVar17._8_4_;
        fStack_b4 = fStack_b4 + auVar26._12_4_;
        if (local_60 != (long *)0x0) {
          lVar13 = local_60[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar55 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar55 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar55 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
      }
      auVar60._4_4_ = fStack_bc;
      auVar60._0_4_ = local_c0;
      auVar60._8_4_ = fStack_b8;
      auVar60._12_4_ = fStack_b4;
    }
    fVar34 = 0.0;
    *(long *)(lVar12 + 0x348) = auVar60._8_8_;
    *(long *)(lVar12 + 0x340) = auVar60._0_8_;
  }
  else {
    if (*(int *)((long)param_1 + 0x374) != 0) goto LAB_01a3b918;
    if ((char)param_1[0x6e] == '\0') {
      auVar45 = *(undefined1 (*) [16])(param_1 + 0x68);
      if (param_1[0x7a] != 0) goto LAB_01a3baf4;
LAB_01a3babc:
      local_60 = (long *)0x0;
    }
    else {
      FUN_01a4b7e0(param_1);
      auVar45._0_4_ = *(float *)(param_1 + 0x68) - extraout_s0_00;
      auVar45._4_4_ = *(float *)((long)param_1 + 0x344) - extraout_var_00;
      auVar45._8_4_ = *(float *)(param_1 + 0x69) - extraout_var_02;
      auVar45._12_4_ = *(float *)((long)param_1 + 0x34c) - extraout_var_05;
      if (param_1[0x7a] == 0) goto LAB_01a3babc;
LAB_01a3baf4:
      fStack_88 = auVar45._8_4_;
      fStack_84 = auVar45._12_4_;
      local_90 = auVar45._0_4_;
      fStack_8c = auVar45._4_4_;
      FUN_009e659c(&local_60);
      if (local_60 != (long *)0x0) {
        auVar20 = FUN_01c2f7bc();
        fVar107 = local_80 * (float)_DAT_03889ac0;
        fVar35 = fStack_7c * (float)((ulong)_DAT_03889ac0 >> 0x20);
        auVar96._0_8_ = CONCAT44(fVar35,fVar107);
        auVar96._8_4_ = fStack_78 * (float)_UNK_03889ac8;
        auVar96._12_4_ = fStack_74 * (float)((ulong)_UNK_03889ac8 >> 0x20);
        uVar36 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a580);
        uVar77 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a680);
        fVar54 = (float)((ulong)uVar77 >> 0x20);
        uVar56 = a64_TBL(ZEXT816(0),auVar96,DAT_0388a580);
        uVar11 = a64_TBL(ZEXT816(0),auVar96,DAT_0388a6c8);
        uVar119 = a64_TBL(ZEXT816(0),auVar96,DAT_0388a680);
        fVar106 = (float)((ulong)uVar36 >> 0x20);
        uVar123 = a64_TBL(ZEXT816(0),auVar96,DAT_0388a880);
        uVar14 = a64_TBL(ZEXT816(0),auVar96,DAT_0388a790);
        auVar97._8_8_ = auVar96._0_8_;
        auVar97._0_8_ = auVar96._0_8_;
        uVar88 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a648);
        uVar37 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
        fVar34 = (float)((ulong)uVar37 >> 0x20);
        uVar90 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a580);
        fVar86 = (float)_DAT_03889ad0;
        fVar105 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar108 = (float)_UNK_03889ad8;
        fVar71 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        fVar107 = (fVar107 * (float)uVar36 + fVar86 * auVar20._0_4_ * (float)uVar56 +
                  fVar86 * (float)uVar37 * (float)uVar119) - (float)uVar77 * (float)uVar123;
        fVar35 = (fVar35 * fVar106 + fVar105 * auVar20._4_4_ * (float)((ulong)uVar56 >> 0x20) +
                 fVar105 * fVar34 * (float)((ulong)uVar119 >> 0x20)) -
                 fVar54 * (float)((ulong)uVar123 >> 0x20);
        auVar46._0_8_ = CONCAT44(fVar35,fVar107);
        auVar46._8_4_ =
             (auVar96._8_4_ * (float)uVar36 + fVar108 * (float)uVar77 * (float)uVar11 +
             fVar108 * auVar20._0_4_ * (float)uVar88) - (float)uVar37 * (float)uVar14;
        auVar46._12_4_ =
             (auVar96._12_4_ * fVar106 + fVar71 * fVar54 * (float)((ulong)uVar11 >> 0x20) +
             fVar71 * auVar20._4_4_ * (float)((ulong)uVar88 >> 0x20)) -
             fVar34 * (float)((ulong)uVar14 >> 0x20);
        uVar37 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
        fVar109 = (float)((ulong)uVar37 >> 0x20);
        uVar77 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a580);
        uVar119 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a6c8);
        fVar106 = (float)((ulong)uVar90 >> 0x20);
        uVar88 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a680);
        uVar123 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a790);
        uVar11 = a64_TBL(ZEXT816(0),auVar46,DAT_0388a880);
        uVar56 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a880);
        auVar47._8_8_ = auVar46._0_8_;
        auVar47._0_8_ = auVar46._0_8_;
        fVar54 = (float)((ulong)uVar56 >> 0x20);
        uVar36 = a64_TBL(ZEXT816(0),auVar47,DAT_0388a648);
        fVar34 = ((float)uVar90 * fVar107 + fVar86 * local_80 * (float)uVar77 +
                 fVar86 * (float)uVar56 * (float)uVar88) - (float)uVar37 * (float)uVar11;
        fVar107 = (fVar106 * fVar35 + fVar105 * fStack_7c * (float)((ulong)uVar77 >> 0x20) +
                  fVar105 * fVar54 * (float)((ulong)uVar88 >> 0x20)) -
                  fVar109 * (float)((ulong)uVar11 >> 0x20);
        fVar35 = ((float)uVar90 * auVar46._8_4_ + fVar108 * (float)uVar37 * (float)uVar119 +
                 fVar108 * local_80 * (float)uVar36) - (float)uVar56 * (float)uVar123;
        fVar106 = (fVar106 * auVar46._12_4_ + fVar71 * fVar109 * (float)((ulong)uVar119 >> 0x20) +
                  fVar71 * fStack_7c * (float)((ulong)uVar36 >> 0x20)) -
                  fVar54 * (float)((ulong)uVar123 >> 0x20);
        fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18)
                                 ,CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x10),
                                           CONCAT11((byte)((uint)fVar34 >> 8) &
                                                    (byte)((ulong)_DAT_038897c0 >> 8),
                                                    SUB41(fVar34,0) & (byte)_DAT_038897c0)));
        auVar16._0_8_ =
             CONCAT17((byte)((uint)fVar107 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                      CONCAT16((byte)((uint)fVar107 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                               CONCAT15((byte)((uint)fVar107 >> 8) &
                                        (byte)((ulong)_DAT_038897c0 >> 0x28),
                                        CONCAT14(SUB41(fVar107,0) &
                                                 (byte)((ulong)_DAT_038897c0 >> 0x20),fVar34))));
        auVar16[8] = SUB41(fVar35,0) & (byte)_UNK_038897c8;
        auVar16[9] = (byte)((uint)fVar35 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
        auVar16[10] = (byte)((uint)fVar35 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
        auVar16[0xb] = (byte)((uint)fVar35 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
        auVar25[0xc] = SUB41(fVar106,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
        auVar25._0_12_ = auVar16;
        auVar25[0xd] = (byte)((uint)fVar106 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
        auVar25[0xe] = (byte)((uint)fVar106 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
        auVar25[0xf] = (byte)((uint)fVar106 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
        local_90 = local_90 + fVar34;
        fStack_8c = fStack_8c + (float)((ulong)auVar16._0_8_ >> 0x20);
        fStack_88 = fStack_88 + auVar16._8_4_;
        fStack_84 = fStack_84 + auVar25._12_4_;
        if (local_60 != (long *)0x0) {
          lVar13 = local_60[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar55 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar55 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar55 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
      }
      auVar45._4_4_ = fStack_8c;
      auVar45._0_4_ = local_90;
      auVar45._8_4_ = fStack_88;
      auVar45._12_4_ = fStack_84;
    }
    *(long *)(lVar12 + 0x348) = auVar45._8_8_;
    *(long *)(lVar12 + 0x340) = auVar45._0_8_;
    in_q3 = *(undefined1 (*) [16])(param_1 + 0x6a);
    fVar34 = in_q3._8_4_;
    if ((char)param_1[0x6e] != '\0') {
      fVar106 = in_q3._0_4_ - *(float *)(param_1 + 0x68);
      fVar107 = in_q3._4_4_ - *(float *)((long)param_1 + 0x344);
      fVar35 = in_q3._12_4_ - *(float *)((long)param_1 + 0x34c);
      auVar33._0_4_ = fVar106 * fVar106;
      auVar33._4_4_ = fVar107 * fVar107;
      auVar33._8_4_ = (fVar34 - *(float *)(param_1 + 0x69)) * (fVar34 - *(float *)(param_1 + 0x69));
      auVar33._12_4_ = fVar35 * fVar35;
      auVar20 = NEON_ext(auVar33,auVar33,8,1);
      fVar34 = SQRT(auVar20._0_4_ + auVar33._0_4_ + auVar20._4_4_ + auVar33._4_4_);
    }
  }
  *(float *)(lVar12 + 0x388) = fVar34;
LAB_01a3b918:
  *(long *)(lVar12 + 0x358) = auVar19._8_8_;
  *(long *)(lVar12 + 0x350) = auVar19._0_8_;
  *(undefined4 *)(lVar12 + 0x23c) = *(undefined4 *)((long)param_1 + 0x36c);
  lVar12 = param_1[0x1d9a];
  FUN_00956dac(&local_68,param_1 + 0x35);
  (**(code **)(*local_68 + 0x40))();
  uStack_58 = in_q3._8_8_;
  local_60 = in_q3._0_8_;
  FUN_019ee1e0(lVar12,&local_60);
  if (local_68 != (long *)0x0) {
    lVar12 = local_68[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar55 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar55 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar55 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


