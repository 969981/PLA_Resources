/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d1534; name: FUN_001d1534
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_001d1534(undefined8 *param_1)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  bool bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  float fVar36;
  undefined1 auVar30 [16];
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  int iVar38;
  double dVar39;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  float fVar51;
  undefined8 uVar49;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar62;
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  int iVar92;
  float fVar93;
  int iVar94;
  float fVar95;
  undefined1 in_q16 [16];
  float fVar96;
  undefined1 in_b17;
  undefined1 extraout_b17;
  undefined1 in_register_00005221;
  undefined1 extraout_var;
  undefined1 in_register_00005222;
  undefined1 extraout_var_00;
  undefined1 in_register_00005223;
  undefined1 extraout_var_01;
  undefined1 in_register_00005224;
  undefined1 extraout_var_02;
  undefined1 in_register_00005225;
  undefined1 extraout_var_03;
  undefined1 in_register_00005226;
  undefined1 extraout_var_04;
  undefined1 in_register_00005227;
  undefined1 extraout_var_05;
  float fVar97;
  float fVar98;
  undefined4 uVar99;
  float fVar100;
  float fVar101;
  float fStack_a8;
  float fStack_a4;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  iVar38 = *(int *)(param_1 + 0x10);
  if (iVar38 < 1) {
    iVar92 = *(int *)(param_1 + 0x18);
  }
  else {
    pfVar2 = (float *)param_1[0xe];
    pfVar3 = (float *)param_1[0xf];
    fVar47 = *pfVar2;
    fVar51 = pfVar2[1];
    fVar52 = pfVar2[2];
    fVar100 = pfVar2[3];
    fVar91 = *pfVar3;
    fVar101 = pfVar3[1];
    fVar48 = pfVar3[2];
    fVar28 = pfVar3[3];
    auVar56 = *(undefined1 (*) [16])(param_1 + 0x12);
    iVar92 = *(int *)(param_1 + 0x18);
    auVar54._0_8_ = CONCAT44((fVar51 - fVar101) + auVar56._4_4_,(fVar47 - fVar91) + auVar56._0_4_);
    auVar54._8_4_ = (fVar52 - fVar48) + auVar56._8_4_;
    auVar54._12_4_ = (fVar100 - fVar28) + auVar56._12_4_;
    param_1[(long)iVar92 * 2 + 0x11b] = auVar54._8_8_;
    param_1[(long)iVar92 * 2 + 0x11a] = auVar54._0_8_;
    iVar92 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar92 * 2 + 0x1b) = fVar52;
    *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0xdc) = fVar100;
    *(float *)(param_1 + (long)iVar92 * 2 + 0x1a) = fVar47;
    *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0xd4) = fVar51;
    iVar92 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar92 * 2 + 0x9b) = fVar48;
    *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x4dc) = fVar28;
    *(float *)(param_1 + (long)iVar92 * 2 + 0x9a) = fVar91;
    *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x4d4) = fVar101;
    iVar92 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar92;
  }
  uVar78 = iVar38 >= 1;
  uVar18 = (ulong)(byte)uVar78;
  if (iVar92 < 1) {
    fStack_88 = (float)_UNK_03889c38;
    fStack_84 = (float)((ulong)_UNK_03889c38 >> 0x20);
    local_90 = (float)_DAT_03889c30;
    fStack_8c = (float)((ulong)_DAT_03889c30 >> 0x20);
    fVar100 = *(float *)(param_1 + 0x12);
    fVar91 = *(float *)((long)param_1 + 0x94);
    fVar101 = *(float *)(param_1 + 0x13);
    fVar48 = *(float *)((long)param_1 + 0x9c);
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    auVar56 = *(undefined1 (*) [16])(param_1 + 4);
    auVar54 = *(undefined1 (*) [16])(param_1 + 6);
    auVar53 = NEON_ext(auVar56,auVar56,8,1);
    auVar86 = *(undefined1 (*) [16])(param_1 + 8);
    auVar63 = NEON_ext(auVar54,auVar54,8,1);
    auVar30 = NEON_ext(auVar86,auVar86,8,1);
    fVar47 = fStack_70 - *(float *)(param_1 + 10);
    fVar51 = fStack_6c - *(float *)((long)param_1 + 0x54);
    fVar52 = fStack_68 - *(float *)(param_1 + 0xb);
    iVar38 = *(int *)(param_1 + 0x9bd);
    fVar28 = auVar53._0_4_ * fVar52 + auVar56._0_4_ * fVar47 + auVar56._4_4_ * fVar51;
    fVar35 = auVar63._0_4_ * fVar52 + auVar54._0_4_ * fVar47 + auVar54._4_4_ * fVar51;
    fVar36 = auVar30._0_4_ * fVar52 + auVar86._0_4_ * fVar47 + auVar86._4_4_ * fVar51;
    fVar47 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar51 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar74 = SUB41(fVar51,0);
    uVar76 = (undefined1)((uint)fVar51 >> 8);
    uVar79 = (undefined1)((uint)fVar51 >> 0x10);
    uVar81 = (undefined1)((uint)fVar51 >> 0x18);
    uVar49 = NEON_frsqrte(CONCAT17(uVar81,CONCAT16(uVar79,CONCAT15(uVar76,CONCAT14(uVar74,fVar47))))
                          ,4);
    fVar85 = (float)uVar49;
    fVar52 = (float)((ulong)uVar49 >> 0x20);
    fVar37 = local_80 - fVar28;
    fVar44 = fStack_7c - fVar35;
    fVar45 = fStack_78 - fVar36;
    fVar46 = fStack_74 - fStack_64;
    uVar49 = NEON_frsqrts(CONCAT17(uVar81,CONCAT16(uVar79,CONCAT15(uVar76,CONCAT14(uVar74,fVar47))))
                          ,CONCAT44(fVar52 * fVar52,fVar85 * fVar85),4);
    in_q16._0_4_ = fVar37 - (0.0 - fVar100);
    in_q16._4_4_ = fVar44 - (0.0 - fVar91);
    in_q16._8_4_ = fVar45 - (0.0 - fVar101);
    in_q16._12_4_ = fVar46 - (0.0 - fVar48);
    fVar85 = fVar85 * (float)uVar49;
    fVar52 = fVar52 * (float)((ulong)uVar49 >> 0x20);
    auVar56._0_4_ = local_90 * in_q16._0_4_;
    auVar56._4_4_ = fStack_8c * in_q16._4_4_;
    auVar56._8_4_ = fStack_88 * in_q16._8_4_;
    auVar56._12_4_ = fStack_84 * in_q16._12_4_;
    auVar54 = NEON_ext(auVar56,auVar56,8,1);
    in_b17 = extraout_b17;
    in_register_00005221 = extraout_var;
    in_register_00005222 = extraout_var_00;
    in_register_00005223 = extraout_var_01;
    in_register_00005224 = extraout_var_02;
    in_register_00005225 = extraout_var_03;
    in_register_00005226 = extraout_var_04;
    in_register_00005227 = extraout_var_05;
    if (iVar38 == 8) {
      auVar86._0_4_ = local_90 * fVar37;
      auVar86._4_4_ = fStack_8c * fVar44;
      auVar86._8_4_ = fStack_88 * fVar45;
      auVar86._12_4_ = fStack_84 * fVar46;
      auVar30 = NEON_ext(auVar86,auVar86,8,1);
      fVar91 = -(fVar85 * (auVar30._0_4_ + auVar86._0_4_ + auVar86._4_4_));
      in_q16 = ZEXT416((uint)fVar91);
      fVar100 = (float)param_1[0xc];
      if (fVar100 < fVar91) {
        fVar91 = fVar85 * fVar85;
        in_b17 = SUB41(fVar91,0);
        in_register_00005221 = (undefined1)((uint)fVar91 >> 8);
        in_register_00005222 = (undefined1)((uint)fVar91 >> 0x10);
        in_register_00005223 = (undefined1)((uint)fVar91 >> 0x18);
        fVar101 = fVar52 * fVar52;
        in_register_00005224 = SUB41(fVar101,0);
        in_register_00005225 = (undefined1)((uint)fVar101 >> 8);
        in_register_00005226 = (undefined1)((uint)fVar101 >> 0x10);
        in_register_00005227 = (undefined1)((uint)fVar101 >> 0x18);
        in_q16._0_4_ = (float)-(uint)(fVar47 <= 0.0);
        in_q16._4_4_ = (float)-(uint)(fVar51 <= 0.0);
        in_q16._8_8_ = 0;
        uVar49 = NEON_frsqrts(CONCAT17(uVar81,CONCAT16(uVar79,CONCAT15(uVar76,CONCAT14(uVar74,fVar47
                                                                                      )))),
                              CONCAT17(in_register_00005227,
                                       CONCAT16(in_register_00005226,
                                                CONCAT15(in_register_00005225,
                                                         CONCAT14(in_register_00005224,fVar91)))),4)
        ;
        fVar47 = fVar85 * (float)uVar49;
        fVar52 = fVar52 * (float)((ulong)uVar49 >> 0x20);
        bVar70 = SUB41(fVar47,0) & ~SUB41(in_q16._0_4_,0);
        bVar71 = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)in_q16._0_4_ >> 8);
        bVar72 = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)in_q16._0_4_ >> 0x10);
        bVar73 = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)in_q16._0_4_ >> 0x18);
        bVar75 = SUB41(fVar52,0) & ~SUB41(in_q16._4_4_,0);
        bVar77 = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)in_q16._4_4_ >> 8);
        bVar80 = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)in_q16._4_4_ >> 0x10);
        bVar82 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)in_q16._4_4_ >> 0x18);
        fVar47 = (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
        fVar51 = local_90 * (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
        fVar52 = fStack_8c * (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar77,bVar75)));
        auVar63._0_8_ = CONCAT44(fVar52,fVar51);
        auVar63._8_4_ = fStack_88 * fVar47;
        auVar63._12_4_ =
             fStack_84 *
             (float)(CONCAT17(bVar82,CONCAT16(bVar80,CONCAT15(bVar77,CONCAT14(bVar75,fVar47)))) >>
                    0x20);
        fVar51 = fVar37 * fVar51;
        fVar52 = fVar44 * fVar52;
        uVar74 = (undefined1)((uint)fVar52 >> 8);
        uVar76 = (undefined1)((uint)fVar52 >> 0x10);
        uVar79 = (undefined1)((uint)fVar52 >> 0x18);
        auVar30[4] = SUB41(fVar52,0);
        auVar30._0_4_ = fVar51;
        auVar30[5] = uVar74;
        auVar30[6] = uVar76;
        auVar30[7] = uVar79;
        auVar30._8_4_ = fVar45 * auVar63._8_4_;
        auVar30._12_4_ = fVar46 * auVar63._12_4_;
        auVar53[4] = SUB41(fVar52,0);
        auVar53._0_4_ = fVar51;
        auVar53[5] = uVar74;
        auVar53[6] = uVar76;
        auVar53[7] = uVar79;
        auVar53._8_4_ = fVar45 * auVar63._8_4_;
        auVar53._12_4_ = fVar46 * auVar63._12_4_;
        auVar86 = NEON_ext(auVar30,auVar53,8,1);
        fVar47 = -(fVar51 + fVar52 + auVar86._0_4_);
        if (fVar100 < fVar47) {
          iVar38 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = auVar63._8_8_;
          param_1[0x9c0] = auVar63._0_8_;
          *(float *)(param_1 + 0x9c2) = fVar47;
          goto joined_r0x001d172c;
        }
      }
      iVar38 = 8;
    }
    else {
      fVar100 = (float)param_1[0xc];
    }
joined_r0x001d172c:
    if (fVar100 <= fVar85 * (auVar56._0_4_ + auVar56._4_4_ + auVar54._0_4_)) {
      iVar38 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar38 * 2 + 0x1b) = fStack_78;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xdc) = fStack_74;
      *(float *)(param_1 + (long)iVar38 * 2 + 0x1a) = local_80;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xd4) = fStack_7c;
      iVar38 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar38 * 2 + 0x9b) = fVar36;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0x4dc) = fStack_64;
      *(float *)(param_1 + (long)iVar38 * 2 + 0x9a) = fVar28;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0x4d4) = fVar35;
      fVar47 = *(float *)(param_1 + 0x12);
      fVar51 = *(float *)((long)param_1 + 0x94);
      fVar52 = *(float *)((long)param_1 + 0x9c);
      iVar38 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar38 * 2 + 0x11b) = fVar45 + *(float *)(param_1 + 0x13);
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0x8dc) = fVar46 + fVar52;
      *(float *)(param_1 + (long)iVar38 * 2 + 0x11a) = fVar37 + fVar47;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0x8d4) = fVar44 + fVar51;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar38 = *(int *)(param_1 + 0x9bd);
    }
    if (iVar38 == 0) goto LAB_001d24c4;
  }
  auVar56 = *(undefined1 (*) [16])(param_1 + 0x11a);
  auVar54 = *(undefined1 (*) [16])(param_1 + 0x12);
  fVar47 = auVar54._0_4_;
  fVar51 = auVar54._4_4_;
  fVar52 = auVar54._8_4_;
  fVar100 = auVar54._12_4_;
  if ((int)(uint)(byte)uVar78 < *(int *)(param_1 + 0x10)) {
    iVar38 = *(int *)(param_1 + 0x18);
    while( true ) {
      pfVar2 = (float *)(param_1[0xe] + uVar18 * 0x10);
      fVar91 = *pfVar2;
      fVar101 = pfVar2[1];
      fVar48 = pfVar2[2];
      fVar28 = pfVar2[3];
      auVar86 = *(undefined1 (*) [16])(param_1[0xf] + uVar18 * 0x10);
      pfVar2 = (float *)(param_1 + (long)iVar38 * 2 + 0x11a);
      pfVar2[2] = (fVar48 - auVar86._8_4_) + auVar54._8_4_;
      pfVar2[3] = (fVar28 - auVar86._12_4_) + auVar54._12_4_;
      *pfVar2 = (fVar91 - auVar86._0_4_) + auVar54._0_4_;
      pfVar2[1] = (fVar101 - auVar86._4_4_) + auVar54._4_4_;
      iVar38 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar38 * 2 + 0x1b) = fVar48;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xdc) = fVar28;
      *(float *)(param_1 + (long)iVar38 * 2 + 0x1a) = fVar91;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xd4) = fVar101;
      iVar38 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar38 * 2 + 0x9b] = auVar86._8_8_;
      param_1[(long)iVar38 * 2 + 0x9a] = auVar86._0_8_;
      iVar38 = *(int *)(param_1 + 0x18);
      iVar92 = iVar38 + 1;
      in_q16._0_4_ = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x11a);
      in_q16._4_4_ = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x8d4);
      in_q16._8_4_ = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x11b);
      in_q16._12_4_ = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x8dc);
      fVar91 = in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ +
               in_q16._8_4_ * in_q16._8_4_;
      in_b17 = SUB41(fVar91,0);
      in_register_00005221 = (undefined1)((uint)fVar91 >> 8);
      in_register_00005222 = (undefined1)((uint)fVar91 >> 0x10);
      in_register_00005223 = (undefined1)((uint)fVar91 >> 0x18);
      fVar101 = in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ +
                in_q16._8_4_ * in_q16._8_4_;
      in_register_00005224 = SUB41(fVar101,0);
      in_register_00005225 = (undefined1)((uint)fVar101 >> 8);
      in_register_00005226 = (undefined1)((uint)fVar101 >> 0x10);
      in_register_00005227 = (undefined1)((uint)fVar101 >> 0x18);
      *(int *)(param_1 + 0x18) = iVar92;
      if ((float)param_1[0xd] < fVar91) break;
      *(int *)(param_1 + 0x18) = iVar38;
      iVar92 = iVar38;
      if (*(int *)(param_1 + 0x10) <= (int)uVar18 + 1) break;
      auVar54 = *(undefined1 (*) [16])(param_1 + 0x12);
      uVar18 = uVar18 + 1;
    }
    uVar18 = (ulong)((int)uVar18 + 1);
    if (1 < iVar92) goto LAB_001d1828;
LAB_001d1ad8:
    fVar28 = auVar56._12_4_ - fVar100;
    fVar48 = auVar56._8_4_ - fVar52;
    fVar101 = auVar56._4_4_ - fVar51;
    fVar91 = auVar56._0_4_ - fVar47;
    iVar38 = (int)uVar18;
    local_90 = 0.0 - fVar91;
    fStack_8c = 0.0 - fVar101;
    fStack_88 = 0.0 - fVar48;
    fStack_84 = 0.0 - fVar28;
    auVar64._0_4_ = fVar91 * fVar91;
    auVar64._4_4_ = fVar101 * fVar101;
    auVar64._8_4_ = fVar48 * fVar48;
    auVar64._12_4_ = fVar28 * fVar28;
    auVar54 = NEON_ext(auVar64,auVar64,8,1);
    if (auVar54._0_4_ + auVar64._0_4_ + auVar64._4_4_ < (float)param_1[0xd]) {
      fStack_88 = (float)_UNK_03889fc8;
      fStack_84 = (float)((ulong)_UNK_03889fc8 >> 0x20);
      local_90 = (float)_DAT_03889fc0;
      fStack_8c = (float)((ulong)_DAT_03889fc0 >> 0x20);
    }
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    auVar54 = *(undefined1 (*) [16])(param_1 + 4);
    auVar86 = *(undefined1 (*) [16])(param_1 + 6);
    auVar63 = NEON_ext(auVar54,auVar54,8,1);
    auVar30 = *(undefined1 (*) [16])(param_1 + 8);
    auVar64 = NEON_ext(auVar86,auVar86,8,1);
    auVar53 = NEON_ext(auVar30,auVar30,8,1);
    fVar35 = fStack_70 - *(float *)(param_1 + 10);
    fVar36 = fStack_6c - *(float *)((long)param_1 + 0x54);
    fVar37 = fStack_68 - *(float *)(param_1 + 0xb);
    iVar92 = *(int *)(param_1 + 0x9bd);
    fVar85 = auVar63._0_4_ * fVar37 + auVar54._0_4_ * fVar35 + auVar54._4_4_ * fVar36;
    fVar61 = auVar64._0_4_ * fVar37 + auVar86._0_4_ * fVar35 + auVar86._4_4_ * fVar36;
    auVar55._0_8_ = CONCAT44(fVar61,fVar85);
    auVar55._8_4_ = auVar53._0_4_ * fVar37 + auVar30._0_4_ * fVar35 + auVar30._4_4_ * fVar36;
    auVar55._12_4_ = fStack_64;
    fVar37 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar45 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar62 = CONCAT44(fVar45,fVar37);
    uVar49 = NEON_frsqrte(uVar62,4);
    fVar85 = local_80 - fVar85;
    fVar61 = fStack_7c - fVar61;
    fVar68 = fStack_78 - auVar55._8_4_;
    fVar69 = fStack_74 - fStack_64;
    fVar44 = (float)uVar49;
    fVar46 = (float)((ulong)uVar49 >> 0x20);
    fVar35 = fVar46 * fVar46;
    uVar49 = NEON_frsqrts(uVar62,CONCAT17((char)((uint)fVar35 >> 0x18),
                                          CONCAT16((char)((uint)fVar35 >> 0x10),
                                                   CONCAT15((char)((uint)fVar35 >> 8),
                                                            CONCAT14(SUB41(fVar35,0),fVar44 * fVar44
                                                                    )))),4);
    fVar44 = fVar44 * (float)uVar49;
    fVar46 = fVar46 * (float)((ulong)uVar49 >> 0x20);
    fVar35 = local_90 * (fVar85 - fVar91);
    fVar36 = fStack_8c * (fVar61 - fVar101);
    uVar78 = (undefined1)((uint)fVar36 >> 8);
    uVar74 = (undefined1)((uint)fVar36 >> 0x10);
    uVar76 = (undefined1)((uint)fVar36 >> 0x18);
    fVar83 = fStack_88 * (fVar68 - fVar48);
    fVar84 = fStack_84 * (fVar69 - fVar28);
    auVar5[4] = SUB41(fVar36,0);
    auVar5._0_4_ = fVar35;
    auVar5[5] = uVar78;
    auVar5[6] = uVar74;
    auVar5[7] = uVar76;
    auVar5._8_4_ = fVar83;
    auVar5._12_4_ = fVar84;
    auVar6[4] = SUB41(fVar36,0);
    auVar6._0_4_ = fVar35;
    auVar6[5] = uVar78;
    auVar6[6] = uVar74;
    auVar6[7] = uVar76;
    auVar6._8_4_ = fVar83;
    auVar6._12_4_ = fVar84;
    auVar54 = NEON_ext(auVar5,auVar6,8,1);
    fVar35 = fVar44 * (fVar35 + fVar36 + auVar54._0_4_);
    if (iVar92 == 8) {
      auVar87._0_4_ = local_90 * fVar85;
      auVar87._4_4_ = fStack_8c * fVar61;
      auVar87._8_4_ = fStack_88 * fVar68;
      auVar87._12_4_ = fStack_84 * fVar69;
      auVar54 = NEON_ext(auVar87,auVar87,8,1);
      fVar36 = (float)param_1[0xc];
      if (fVar36 < -(fVar44 * (auVar54._0_4_ + auVar87._0_4_ + auVar87._4_4_))) {
        fVar83 = fVar46 * fVar46;
        uVar49 = NEON_frsqrts(uVar62,CONCAT17((char)((uint)fVar83 >> 0x18),
                                              CONCAT16((char)((uint)fVar83 >> 0x10),
                                                       CONCAT15((char)((uint)fVar83 >> 8),
                                                                CONCAT14(SUB41(fVar83,0),
                                                                         fVar44 * fVar44)))),4);
        iVar92 = -(uint)(fVar37 <= 0.0);
        iVar94 = -(uint)(fVar45 <= 0.0);
        fVar83 = fVar44 * (float)uVar49;
        fVar84 = fVar46 * (float)((ulong)uVar49 >> 0x20);
        fVar93 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                                 CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                          ~(byte)((uint)iVar92 >> 0x10),
                                          CONCAT11((byte)((uint)fVar83 >> 8) &
                                                   ~(byte)((uint)iVar92 >> 8),
                                                   SUB41(fVar83,0) & ~(byte)iVar92)));
        fVar96 = (float)(CONCAT17((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18),
                                  CONCAT16((byte)((uint)fVar84 >> 0x10) &
                                           ~(byte)((uint)iVar94 >> 0x10),
                                           CONCAT15((byte)((uint)fVar84 >> 8) &
                                                    ~(byte)((uint)iVar94 >> 8),
                                                    CONCAT14(SUB41(fVar84,0) & ~(byte)iVar94,fVar93)
                                                   ))) >> 0x20);
        fVar95 = fStack_8c * fVar96;
        fVar96 = fStack_84 * fVar96;
        fVar83 = fVar85 * local_90 * fVar93;
        fVar84 = fVar61 * fVar95;
        uVar78 = (undefined1)((uint)fVar84 >> 8);
        uVar74 = (undefined1)((uint)fVar84 >> 0x10);
        uVar76 = (undefined1)((uint)fVar84 >> 0x18);
        fVar97 = fVar68 * fStack_88 * fVar93;
        fVar98 = fVar69 * fVar96;
        auVar8[4] = SUB41(fVar84,0);
        auVar8._0_4_ = fVar83;
        auVar8[5] = uVar78;
        auVar8[6] = uVar74;
        auVar8[7] = uVar76;
        auVar8._8_4_ = fVar97;
        auVar8._12_4_ = fVar98;
        auVar9[4] = SUB41(fVar84,0);
        auVar9._0_4_ = fVar83;
        auVar9[5] = uVar78;
        auVar9[6] = uVar74;
        auVar9[7] = uVar76;
        auVar9._8_4_ = fVar97;
        auVar9._12_4_ = fVar98;
        auVar54 = NEON_ext(auVar8,auVar9,8,1);
        fVar83 = -(fVar83 + fVar84 + auVar54._0_4_);
        if (fVar36 < fVar83) {
          iVar92 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          *(float *)(param_1 + 0x9c1) = fStack_88 * fVar93;
          *(float *)((long)param_1 + 0x4e0c) = fVar96;
          *(float *)(param_1 + 0x9c0) = local_90 * fVar93;
          *(float *)((long)param_1 + 0x4e04) = fVar95;
          *(float *)(param_1 + 0x9c2) = fVar83;
          goto joined_r0x001d1c48;
        }
      }
      iVar92 = 8;
      if (fVar35 < fVar36) goto LAB_001d1c4c;
LAB_001d1d88:
      iVar92 = *(int *)(param_1 + 0x18);
      bVar15 = true;
      *(float *)(param_1 + (long)iVar92 * 2 + 0x1b) = fStack_78;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0xdc) = fStack_74;
      *(float *)(param_1 + (long)iVar92 * 2 + 0x1a) = local_80;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0xd4) = fStack_7c;
      iVar92 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar92 * 2 + 0x9b] = auVar55._8_8_;
      param_1[(long)iVar92 * 2 + 0x9a] = auVar55._0_8_;
      fVar35 = *(float *)(param_1 + 0x12);
      fVar36 = *(float *)((long)param_1 + 0x94);
      fVar83 = *(float *)((long)param_1 + 0x9c);
      iVar92 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar92 * 2 + 0x11b) = fVar68 + *(float *)(param_1 + 0x13);
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x8dc) = fVar69 + fVar83;
      *(float *)(param_1 + (long)iVar92 * 2 + 0x11a) = fVar85 + fVar35;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x8d4) = fVar61 + fVar36;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar92 = *(int *)(param_1 + 0x9bd);
    }
    else {
      fVar36 = (float)param_1[0xc];
joined_r0x001d1c48:
      if (fVar36 <= fVar35) goto LAB_001d1d88;
LAB_001d1c4c:
      bVar15 = false;
    }
    if (iVar92 == 0) goto LAB_001d24c4;
    if (!bVar15) {
      iVar38 = -(uint)(fVar37 <= 0.0);
      iVar92 = -(uint)(fVar45 <= 0.0);
      param_1[0x9bd] = 0x100000001;
      *(undefined4 *)(param_1 + 0x9be) = 0;
      uVar49 = NEON_frsqrts(uVar62,CONCAT44(fVar46 * fVar46,fVar44 * fVar44),4);
      fVar44 = (float)uVar49 * fVar44;
      fVar46 = (float)((ulong)uVar49 >> 0x20) * fVar46;
      fVar47 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                               CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar38 >> 8),
                                                  SUB41(fVar44,0) & ~(byte)iVar38)));
      fVar51 = (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                                CONCAT16((byte)((uint)fVar46 >> 0x10) &
                                         ~(byte)((uint)iVar92 >> 0x10),
                                         CONCAT15((byte)((uint)fVar46 >> 8) &
                                                  ~(byte)((uint)iVar92 >> 8),
                                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar92,fVar47)))
                               ) >> 0x20);
      fStack_8c = fStack_8c * fVar51;
      fStack_84 = fStack_84 * fVar51;
      *(float *)(param_1 + 0x9c1) = fStack_88 * fVar47;
      *(float *)((long)param_1 + 0x4e0c) = fStack_84;
      *(float *)(param_1 + 0x9c0) = local_90 * fVar47;
      *(float *)((long)param_1 + 0x4e04) = fStack_8c;
      auVar26._0_4_ = fVar91 * local_90 * fVar47;
      auVar26._4_4_ = fVar101 * fStack_8c;
      auVar26._8_4_ = fVar48 * fStack_88 * fVar47;
      auVar26._12_4_ = fVar28 * fStack_84;
      auVar56 = NEON_ext(auVar26,auVar26,8,1);
      *(float *)(param_1 + 0x9c2) = -(auVar26._0_4_ + auVar26._4_4_ + auVar56._0_4_);
      return 0;
    }
    in_q16._0_4_ = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x11a);
    in_q16._4_4_ = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x8d4);
    in_q16._8_4_ = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x11b);
    in_q16._12_4_ = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x8dc);
    fVar91 = in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ + in_q16._8_4_ * in_q16._8_4_
    ;
    in_b17 = SUB41(fVar91,0);
    in_register_00005221 = (undefined1)((uint)fVar91 >> 8);
    in_register_00005222 = (undefined1)((uint)fVar91 >> 0x10);
    in_register_00005223 = (undefined1)((uint)fVar91 >> 0x18);
    fVar91 = in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ + in_q16._8_4_ * in_q16._8_4_
    ;
    in_register_00005224 = SUB41(fVar91,0);
    in_register_00005225 = (undefined1)((uint)fVar91 >> 8);
    in_register_00005226 = (undefined1)((uint)fVar91 >> 0x10);
    in_register_00005227 = (undefined1)((uint)fVar91 >> 0x18);
    if (iVar38 < *(int *)(param_1 + 0x10)) goto LAB_001d1834;
LAB_001d1c80:
    iVar94 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 0x18) < 2) goto LAB_001d1ad8;
LAB_001d1828:
    iVar38 = (int)uVar18;
    if (*(int *)(param_1 + 0x10) <= iVar38) goto LAB_001d1c80;
LAB_001d1834:
    iVar92 = *(int *)(param_1 + 0x18);
    lVar19 = (long)iVar38;
    do {
      iVar38 = iVar38 + 1;
      pfVar2 = (float *)(param_1[0xe] + lVar19 * 0x10);
      fVar91 = *pfVar2;
      fVar101 = pfVar2[1];
      fVar48 = pfVar2[2];
      fVar28 = pfVar2[3];
      auVar54 = *(undefined1 (*) [16])(param_1 + 0x12);
      pfVar2 = (float *)(param_1[0xf] + lVar19 * 0x10);
      fVar35 = *pfVar2;
      fVar36 = pfVar2[1];
      fVar37 = pfVar2[2];
      fVar44 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (long)iVar92 * 2 + 0x11a);
      pfVar2[2] = (fVar48 - fVar37) + auVar54._8_4_;
      pfVar2[3] = (fVar28 - fVar44) + auVar54._12_4_;
      *pfVar2 = (fVar91 - fVar35) + auVar54._0_4_;
      pfVar2[1] = (fVar101 - fVar36) + auVar54._4_4_;
      iVar92 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar92 * 2 + 0x1b) = fVar48;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0xdc) = fVar28;
      *(float *)(param_1 + (long)iVar92 * 2 + 0x1a) = fVar91;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0xd4) = fVar101;
      iVar92 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar92 * 2 + 0x9b) = fVar37;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x4dc) = fVar44;
      *(float *)(param_1 + (long)iVar92 * 2 + 0x9a) = fVar35;
      *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x4d4) = fVar36;
      iVar92 = *(int *)(param_1 + 0x18);
      fVar91 = *(float *)(param_1 + 0x11e) - *(float *)(param_1 + 0x11a);
      fVar101 = *(float *)((long)param_1 + 0x8f4) - *(float *)((long)param_1 + 0x8d4);
      fVar48 = *(float *)(param_1 + 0x11f) - *(float *)(param_1 + 0x11b);
      fVar28 = *(float *)((long)param_1 + 0x8fc) - *(float *)((long)param_1 + 0x8dc);
      auVar31._0_4_ = fVar91 * fVar91;
      auVar31._4_4_ = fVar101 * fVar101;
      auVar31._8_4_ = fVar48 * fVar48;
      auVar31._12_4_ = fVar28 * fVar28;
      auVar54 = NEON_ext(auVar31,auVar31,8,1);
      fVar91 = in_q16._0_4_ * fVar91 + in_q16._4_4_ * fVar101 + in_q16._8_4_ * fVar48;
      *(int *)(param_1 + 0x18) = iVar92 + 1;
      iVar94 = iVar92 + 1;
      if (fVar91 * fVar91 <
          (float)CONCAT13(in_register_00005223,
                          CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17))) *
          (auVar31._0_4_ + auVar31._4_4_ + auVar54._0_4_)) break;
      lVar19 = lVar19 + 1;
      *(int *)(param_1 + 0x18) = iVar92;
      iVar94 = iVar92;
    } while (lVar19 < *(int *)(param_1 + 0x10));
  }
  if (iVar94 == 3) {
    FUN_001d2598(param_1);
    lVar19 = (long)iVar38;
    if (lVar19 < *(int *)(param_1 + 0x10)) {
      do {
        lVar14 = lVar19 * 0x10;
        lVar19 = lVar19 + 1;
        auVar56 = *(undefined1 (*) [16])(param_1[0xe] + lVar14);
        auVar54 = *(undefined1 (*) [16])(param_1[0xf] + lVar14);
        auVar86 = *(undefined1 (*) [16])(param_1 + 0x12);
        iVar38 = *(int *)(param_1 + 0x18);
        auVar40._0_8_ =
             CONCAT44((auVar56._4_4_ - auVar54._4_4_) + auVar86._4_4_,
                      (auVar56._0_4_ - auVar54._0_4_) + auVar86._0_4_);
        auVar40._8_4_ = (auVar56._8_4_ - auVar54._8_4_) + auVar86._8_4_;
        auVar40._12_4_ = (auVar56._12_4_ - auVar54._12_4_) + auVar86._12_4_;
        param_1[(long)iVar38 * 2 + 0x11b] = auVar40._8_8_;
        param_1[(long)iVar38 * 2 + 0x11a] = auVar40._0_8_;
        iVar38 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar38 * 2 + 0x1b] = auVar56._8_8_;
        param_1[(long)iVar38 * 2 + 0x1a] = auVar56._0_8_;
        iVar38 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar38 * 2 + 0x9b] = auVar54._8_8_;
        param_1[(long)iVar38 * 2 + 0x9a] = auVar54._0_8_;
        iVar92 = *(int *)(param_1 + 0x18);
        uVar16 = *(uint *)(param_1 + 0x1ab);
        iVar38 = iVar92 + 1;
        *(int *)(param_1 + 0x18) = iVar38;
        if ((int)uVar16 < 1) {
          *(undefined4 *)((long)param_1 + 0x4de4) = 0;
          *(uint *)(param_1 + 0x97c) = uVar16;
LAB_001d191c:
          iVar94 = 0;
          *(int *)(param_1 + 0x18) = iVar38 + -1;
        }
        else {
          iVar94 = 0;
          uVar18 = (long)(int)uVar16;
          do {
            while( true ) {
              uVar17 = uVar18 - 1;
              fVar47 = *(float *)(param_1 + (long)iVar92 * 2 + 0x11a);
              fVar51 = *(float *)(param_1 + (long)iVar92 * 2 + 0x11b);
              fVar52 = *(float *)(param_1 + uVar17 * 2 + 0x2ac);
              fVar100 = *(float *)(param_1 + uVar17 * 2 + 0x2ad);
              fVar101 = *(float *)((long)param_1 + (long)iVar92 * 0x10 + 0x8d4) -
                        *(float *)((long)param_1 + uVar17 * 0x10 + 0x1564);
              fVar91 = *(float *)(param_1 + uVar17 * 2 + 0x3ac) * (fVar47 - fVar52) +
                       *(float *)((long)param_1 + uVar17 * 0x10 + 0x1d64) * fVar101 +
                       *(float *)(param_1 + uVar17 * 2 + 0x3ad) * (fVar51 - fVar100);
              if ((float)param_1[0x17] < ABS(fVar91)) break;
              if (-3.40282e+38 < *(float *)((long)param_1 + uVar17 * 4 + 0x2760)) {
                if (*(char *)((long)param_1 + uVar18 + 0x2b5f) == '\0') {
                  FUN_001d2b94(param_1,uVar17 & 0xffffffff);
                }
                dVar29 = (double)(fVar47 - fVar52);
                dVar20 = (double)fVar101;
                dVar39 = (double)(fVar51 - fVar100);
                if (0.0 < (double)param_1[uVar17 * 4 + 0x57c] * dVar29 +
                          (double)param_1[uVar17 * 4 + 0x57d] * dVar20 +
                          (double)param_1[uVar17 * 4 + 0x57e] * dVar39 +
                          (double)param_1[uVar17 * 4 + 0x77c] * dVar29 +
                          (double)param_1[uVar17 * 4 + 0x77d] * dVar20 +
                          (double)param_1[uVar17 * 4 + 0x77e] * dVar39) goto LAB_001d1a98;
              }
LAB_001d19ac:
              *(undefined4 *)((long)param_1 + uVar17 * 4 + 0x4be4) = 0;
              uVar18 = uVar17;
              if ((long)uVar17 < 1) goto LAB_001d1ab0;
            }
            if (fVar91 <= 0.0) goto LAB_001d19ac;
LAB_001d1a98:
            iVar94 = iVar94 + 1;
            *(uint *)((long)param_1 + uVar17 * 4 + 0x4be4) = uVar16;
            uVar16 = (uint)uVar17;
            uVar18 = uVar17;
          } while (0 < (long)uVar17);
LAB_001d1ab0:
          *(int *)((long)param_1 + 0x4de4) = iVar94;
          *(uint *)(param_1 + 0x97c) = uVar16;
          if (iVar94 == 0) {
            iVar38 = *(int *)(param_1 + 0x18);
            goto LAB_001d191c;
          }
        }
        if (0 < iVar94) {
          *(undefined4 *)((long)param_1 + 0xd54) = 3;
          psVar1 = (short *)((long)param_1 +
                            (-(ulong)((uVar16 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                            (ulong)(uVar16 << 2) << 2) + 0xd60);
          sVar4 = *psVar1;
          *(short *)((long)param_1 + (ulong)*(byte *)(psVar1 + 1) * 2 + 0xcd4) = sVar4;
          uVar18 = (ulong)(long)(int)(uVar16 << 2) >> 2;
          *(int *)(param_1 + 0x19a) = (int)sVar4;
          psVar1 = (short *)((long)param_1 + (uVar18 << 4 | 4) + 0xd60);
          sVar4 = *psVar1;
          *(short *)((long)param_1 + (ulong)*(byte *)(psVar1 + 1) * 2 + 0xcd4) = sVar4;
          *(int *)(param_1 + 0x19a) = (int)sVar4;
          psVar1 = (short *)((long)param_1 + (uVar18 << 4 | 8) + 0xd60);
          sVar4 = *psVar1;
          *(short *)((long)param_1 + (ulong)*(byte *)(psVar1 + 1) * 2 + 0xcd4) = sVar4;
          *(int *)(param_1 + 0x19a) = (int)sVar4;
          FUN_001d27b0(param_1);
          return 1;
        }
      } while (lVar19 < *(int *)(param_1 + 0x10));
    }
    return 1;
  }
  fVar100 = auVar56._12_4_ - fVar100;
  fVar52 = auVar56._8_4_ - fVar52;
  fVar51 = auVar56._4_4_ - fVar51;
  fVar47 = auVar56._0_4_ - fVar47;
  auVar32._0_12_ = in_q16._0_12_;
  auVar32._12_4_ = 0;
  auVar21._8_8_ = _UNK_03889f18;
  auVar21._0_8_ = _DAT_03889f10;
  fVar48 = in_q16._0_4_;
  fVar28 = in_q16._4_4_;
  auVar54 = a64_TBL(ZEXT816(0),auVar32,auVar21);
  fVar101 = auVar54._0_4_;
  auVar22._0_4_ = fVar101 * fVar101;
  auVar22._4_4_ = auVar54._4_4_ * auVar54._4_4_;
  auVar22._8_4_ = auVar54._8_4_ * auVar54._8_4_;
  auVar22._12_4_ = auVar54._12_4_ * auVar54._12_4_;
  auVar56 = NEON_ext(auVar22,auVar22,8,1);
  fVar91 = auVar56._0_4_ + auVar56._4_4_;
  auVar57._8_8_ = _UNK_03889038;
  auVar57._0_8_ = _DAT_03889030;
  auVar56 = a64_TBL(ZEXT816(0),auVar32,auVar57);
  auVar23._0_8_ =
       CONCAT44(-(uint)(fVar48 * fVar48 + fVar28 * fVar28 < auVar22._0_4_ + auVar22._4_4_ + fVar91),
                -(uint)(fVar48 * fVar48 + fVar28 * fVar28 < auVar22._0_4_ + auVar22._4_4_ + fVar91))
  ;
  auVar24._4_12_ = auVar56._4_12_;
  auVar24._0_4_ = -auVar56._0_4_;
  auVar23._8_8_ = auVar23._0_8_;
  auVar41._4_12_ = auVar54._4_12_;
  auVar41._0_4_ = -fVar101;
  auVar24 = auVar24 ^ (auVar24 ^ auVar41) & auVar23;
  fStack_88 = auVar24._8_4_;
  fStack_84 = auVar24._12_4_;
  local_90 = auVar24._0_4_;
  fStack_8c = auVar24._4_4_;
  fStack_a8 = in_q16._8_4_;
  fStack_a4 = in_q16._12_4_;
  if (0x3f < iVar94) {
    iVar38 = *(int *)(param_1 + 0x9bd);
    if (iVar38 == 0) goto LAB_001d24c4;
    auVar25._0_4_ = 0.0 - local_90;
    auVar25._4_4_ = 0.0 - fStack_8c;
    auVar25._8_4_ = 0.0 - fStack_88;
    auVar25._12_4_ = 0.0 - fStack_84;
    goto LAB_001d1d08;
  }
  (*(code *)**(undefined8 **)*param_1)
            ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
  auVar56 = *(undefined1 (*) [16])(param_1 + 4);
  auVar54 = *(undefined1 (*) [16])(param_1 + 6);
  auVar53 = NEON_ext(auVar56,auVar56,8,1);
  auVar86 = *(undefined1 (*) [16])(param_1 + 8);
  auVar63 = NEON_ext(auVar54,auVar54,8,1);
  auVar30 = NEON_ext(auVar86,auVar86,8,1);
  fVar91 = fStack_70 - *(float *)(param_1 + 10);
  fVar101 = fStack_6c - *(float *)((long)param_1 + 0x54);
  fVar35 = fStack_68 - *(float *)(param_1 + 0xb);
  iVar38 = *(int *)(param_1 + 0x9bd);
  fVar36 = auVar53._0_4_ * fVar35 + auVar56._0_4_ * fVar91 + auVar56._4_4_ * fVar101;
  fVar37 = auVar63._0_4_ * fVar35 + auVar54._0_4_ * fVar91 + auVar54._4_4_ * fVar101;
  auVar33._0_8_ = CONCAT44(fVar37,fVar36);
  auVar33._8_4_ = auVar30._0_4_ * fVar35 + auVar86._0_4_ * fVar91 + auVar86._4_4_ * fVar101;
  fVar91 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
  fVar101 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
  uVar78 = SUB41(fVar101,0);
  uVar74 = (undefined1)((uint)fVar101 >> 8);
  uVar76 = (undefined1)((uint)fVar101 >> 0x10);
  uVar79 = (undefined1)((uint)fVar101 >> 0x18);
  uVar49 = NEON_frsqrte(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar91)))),4
                       );
  auVar33._12_4_ = fStack_64;
  fVar46 = (float)uVar49;
  fVar35 = (float)((ulong)uVar49 >> 0x20);
  fVar36 = local_80 - fVar36;
  fVar37 = fStack_7c - fVar37;
  fVar44 = fStack_78 - auVar33._8_4_;
  fVar45 = fStack_74 - fStack_64;
  uVar49 = NEON_frsqrts(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar91)))),
                        CONCAT44(fVar35 * fVar35,fVar46 * fVar46),4);
  fVar46 = fVar46 * (float)uVar49;
  fVar35 = fVar35 * (float)((ulong)uVar49 >> 0x20);
  auVar58._0_4_ = local_90 * (fVar36 - fVar47);
  auVar58._4_4_ = fStack_8c * (fVar37 - fVar51);
  auVar58._8_4_ = fStack_88 * (fVar44 - fVar52);
  auVar58._12_4_ = fStack_84 * (fVar45 - fVar100);
  auVar56 = NEON_ext(auVar58,auVar58,8,1);
  if (iVar38 == 8) {
    auVar65._0_4_ = local_90 * fVar36;
    auVar65._4_4_ = fStack_8c * fVar37;
    auVar65._8_4_ = fStack_88 * fVar44;
    auVar65._12_4_ = fStack_84 * fVar45;
    auVar54 = NEON_ext(auVar65,auVar65,8,1);
    fVar85 = (float)param_1[0xc];
    if (fVar85 < -(fVar46 * (auVar54._0_4_ + auVar65._0_4_ + auVar65._4_4_))) {
      fVar61 = fVar35 * fVar35;
      iVar38 = -(uint)(fVar91 <= 0.0);
      iVar92 = -(uint)(fVar101 <= 0.0);
      uVar49 = NEON_frsqrts(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar91))
                                                    )),
                            CONCAT17((char)((uint)fVar61 >> 0x18),
                                     CONCAT16((char)((uint)fVar61 >> 0x10),
                                              CONCAT15((char)((uint)fVar61 >> 8),
                                                       CONCAT14(SUB41(fVar61,0),fVar46 * fVar46)))),
                            4);
      fVar91 = fVar46 * (float)uVar49;
      fVar35 = fVar35 * (float)((ulong)uVar49 >> 0x20);
      bVar70 = SUB41(fVar91,0) & ~(byte)iVar38;
      bVar71 = (byte)((uint)fVar91 >> 8) & ~(byte)((uint)iVar38 >> 8);
      bVar72 = (byte)((uint)fVar91 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
      bVar73 = (byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
      bVar75 = SUB41(fVar35,0) & ~(byte)iVar92;
      bVar77 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar92 >> 8);
      bVar80 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
      bVar82 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
      fVar91 = (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
      fVar101 = local_90 * (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
      fVar35 = fStack_8c * (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar77,bVar75)));
      fVar61 = fStack_88 * fVar91;
      fVar91 = fStack_84 *
               (float)(CONCAT17(bVar82,CONCAT16(bVar80,CONCAT15(bVar77,CONCAT14(bVar75,fVar91)))) >>
                      0x20);
      auVar88._0_4_ = fVar36 * fVar101;
      auVar88._4_4_ = fVar37 * fVar35;
      auVar88._8_4_ = fVar44 * fVar61;
      auVar88._12_4_ = fVar45 * fVar91;
      auVar54 = NEON_ext(auVar88,auVar88,8,1);
      fVar68 = -(auVar88._0_4_ + auVar88._4_4_ + auVar54._0_4_);
      if (fVar85 < fVar68) {
        iVar38 = 0;
        *(undefined4 *)(param_1 + 0x9bd) = 0;
        param_1[0x9c1] = CONCAT44(fVar91,fVar61);
        param_1[0x9c0] =
             CONCAT17((char)((uint)fVar35 >> 0x18),
                      CONCAT16((char)((uint)fVar35 >> 0x10),
                               CONCAT15((char)((uint)fVar35 >> 8),CONCAT14(SUB41(fVar35,0),fVar101))
                              ));
        *(float *)(param_1 + 0x9c2) = fVar68;
        goto joined_r0x001d2014;
      }
    }
    iVar38 = 8;
  }
  else {
    fVar85 = (float)param_1[0xc];
  }
joined_r0x001d2014:
  if (fVar85 <= fVar46 * (auVar58._0_4_ + auVar58._4_4_ + auVar56._0_4_)) {
    iVar38 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar38 * 2 + 0x1b) = fStack_78;
    *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xdc) = fStack_74;
    *(float *)(param_1 + (long)iVar38 * 2 + 0x1a) = local_80;
    *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xd4) = fStack_7c;
    iVar38 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar38 * 2 + 0x9b] = auVar33._8_8_;
    param_1[(long)iVar38 * 2 + 0x9a] = auVar33._0_8_;
    auVar27._0_4_ = fVar36 + *(float *)(param_1 + 0x12);
    auVar27._4_4_ = fVar37 + *(float *)((long)param_1 + 0x94);
    auVar27._8_4_ = fVar44 + *(float *)(param_1 + 0x13);
    auVar27._12_4_ = fVar45 + *(float *)((long)param_1 + 0x9c);
    goto LAB_001d2540;
  }
  if (iVar38 == 0) {
LAB_001d24c4:
    *(undefined8 *)((long)param_1 + 0x4dec) = 1;
    return 0;
  }
  auVar25._0_4_ = 0.0 - local_90;
  auVar25._4_4_ = 0.0 - fStack_8c;
  auVar25._8_4_ = 0.0 - fStack_88;
  auVar25._12_4_ = 0.0 - fStack_84;
  if (*(int *)(param_1 + 0x18) < 0x40) {
    local_90 = auVar25._0_4_;
    fStack_8c = auVar25._4_4_;
    fStack_88 = auVar25._8_4_;
    fStack_84 = auVar25._12_4_;
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    auVar56 = *(undefined1 (*) [16])(param_1 + 4);
    auVar54 = *(undefined1 (*) [16])(param_1 + 6);
    auVar53 = NEON_ext(auVar56,auVar56,8,1);
    auVar86 = *(undefined1 (*) [16])(param_1 + 8);
    auVar63 = NEON_ext(auVar54,auVar54,8,1);
    auVar13._8_4_ = fStack_78;
    auVar13._0_8_ = CONCAT44(fStack_7c,local_80);
    auVar13._12_4_ = fStack_74;
    auVar30 = NEON_ext(auVar86,auVar86,8,1);
    fVar91 = fStack_70 - *(float *)(param_1 + 10);
    fVar101 = fStack_6c - *(float *)((long)param_1 + 0x54);
    fVar35 = fStack_68 - *(float *)(param_1 + 0xb);
    iVar38 = *(int *)(param_1 + 0x9bd);
    auVar42._0_4_ = auVar53._0_4_ * fVar35 + auVar56._0_4_ * fVar91 + auVar56._4_4_ * fVar101;
    auVar42._4_4_ = auVar63._0_4_ * fVar35 + auVar54._0_4_ * fVar91 + auVar54._4_4_ * fVar101;
    auVar42._8_4_ = auVar30._0_4_ * fVar35 + auVar86._0_4_ * fVar91 + auVar86._4_4_ * fVar101;
    auVar42._12_4_ = fStack_64;
    auVar25._4_4_ = fStack_8c;
    auVar25._0_4_ = local_90;
    auVar25._8_4_ = fStack_88;
    auVar25._12_4_ = fStack_84;
    fVar91 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar101 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar78 = SUB41(fVar101,0);
    uVar74 = (undefined1)((uint)fVar101 >> 8);
    uVar76 = (undefined1)((uint)fVar101 >> 0x10);
    uVar79 = (undefined1)((uint)fVar101 >> 0x18);
    uVar49 = NEON_frsqrte(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar91))))
                          ,4);
    auVar50._0_4_ = local_80 - auVar42._0_4_;
    auVar50._4_4_ = fStack_7c - auVar42._4_4_;
    auVar50._8_4_ = fStack_78 - auVar42._8_4_;
    auVar50._12_4_ = fStack_74 - fStack_64;
    fVar36 = (float)uVar49;
    fVar35 = (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar91))))
                          ,CONCAT44(fVar35 * fVar35,fVar36 * fVar36),4);
    fVar36 = fVar36 * (float)uVar49;
    fVar35 = fVar35 * (float)((ulong)uVar49 >> 0x20);
    auVar59._0_4_ = local_90 * (auVar50._0_4_ - fVar47);
    auVar59._4_4_ = fStack_8c * (auVar50._4_4_ - fVar51);
    auVar59._8_4_ = fStack_88 * (auVar50._8_4_ - fVar52);
    auVar59._12_4_ = fStack_84 * (auVar50._12_4_ - fVar100);
    auVar56 = NEON_ext(auVar59,auVar59,8,1);
    if (iVar38 == 8) {
      auVar66._0_4_ = local_90 * auVar50._0_4_;
      auVar66._4_4_ = fStack_8c * auVar50._4_4_;
      auVar66._8_4_ = fStack_88 * auVar50._8_4_;
      auVar66._12_4_ = fStack_84 * auVar50._12_4_;
      auVar54 = NEON_ext(auVar66,auVar66,8,1);
      fVar47 = (float)param_1[0xc];
      if (-(fVar36 * (auVar54._0_4_ + auVar66._0_4_ + auVar66._4_4_)) <= fVar47) {
        iVar38 = 8;
      }
      else {
        fVar51 = fVar35 * fVar35;
        iVar38 = -(uint)(fVar91 <= 0.0);
        iVar92 = -(uint)(fVar101 <= 0.0);
        uVar49 = NEON_frsqrts(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar91
                                                                                      )))),
                              CONCAT17((char)((uint)fVar51 >> 0x18),
                                       CONCAT16((char)((uint)fVar51 >> 0x10),
                                                CONCAT15((char)((uint)fVar51 >> 8),
                                                         CONCAT14(SUB41(fVar51,0),fVar36 * fVar36)))
                                      ),4);
        fVar51 = fVar36 * (float)uVar49;
        fVar35 = fVar35 * (float)((ulong)uVar49 >> 0x20);
        bVar70 = SUB41(fVar51,0) & ~(byte)iVar38;
        bVar71 = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar38 >> 8);
        bVar72 = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
        bVar73 = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
        bVar75 = SUB41(fVar35,0) & ~(byte)iVar92;
        bVar77 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar92 >> 8);
        bVar80 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
        bVar82 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        fVar51 = (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
        fVar52 = local_90 * (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
        fVar100 = fStack_8c * (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar77,bVar75)));
        fVar91 = fStack_88 * fVar51;
        fVar51 = fStack_84 *
                 (float)(CONCAT17(bVar82,CONCAT16(bVar80,CONCAT15(bVar77,CONCAT14(bVar75,fVar51))))
                        >> 0x20);
        auVar89._0_4_ = auVar50._0_4_ * fVar52;
        auVar89._4_4_ = auVar50._4_4_ * fVar100;
        auVar89._8_4_ = auVar50._8_4_ * fVar91;
        auVar89._12_4_ = auVar50._12_4_ * fVar51;
        auVar54 = NEON_ext(auVar89,auVar89,8,1);
        fVar101 = -(auVar89._0_4_ + auVar89._4_4_ + auVar54._0_4_);
        if (fVar47 < fVar101) {
          iVar38 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = CONCAT44(fVar51,fVar91);
          param_1[0x9c0] =
               CONCAT17((char)((uint)fVar100 >> 0x18),
                        CONCAT16((char)((uint)fVar100 >> 0x10),
                                 CONCAT15((char)((uint)fVar100 >> 8),
                                          CONCAT14(SUB41(fVar100,0),fVar52))));
          *(float *)(param_1 + 0x9c2) = fVar101;
        }
        else {
          iVar38 = 8;
        }
      }
    }
    else {
      fVar47 = (float)param_1[0xc];
    }
    if (fVar36 * (auVar59._0_4_ + auVar59._4_4_ + auVar56._0_4_) < fVar47) {
      if (iVar38 == 0) goto LAB_001d24c4;
      goto LAB_001d1d08;
    }
    iVar38 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar38 * 2 + 0x1b] = auVar13._8_8_;
    param_1[(long)iVar38 * 2 + 0x1a] = CONCAT44(fStack_7c,local_80);
LAB_001d252c:
    iVar38 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar38 * 2 + 0x9b] = auVar42._8_8_;
    param_1[(long)iVar38 * 2 + 0x9a] = auVar42._0_8_;
    auVar27._0_4_ = auVar50._0_4_ + *(float *)(param_1 + 0x12);
    auVar27._4_4_ = auVar50._4_4_ + *(float *)((long)param_1 + 0x94);
    auVar27._8_4_ = auVar50._8_4_ + *(float *)(param_1 + 0x13);
    auVar27._12_4_ = auVar50._12_4_ + *(float *)((long)param_1 + 0x9c);
LAB_001d2540:
    iVar38 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar38 * 2 + 0x11b] = auVar27._8_8_;
    param_1[(long)iVar38 * 2 + 0x11a] = auVar27._0_8_;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    iVar38 = *(int *)(param_1 + 0x9bd);
    if (iVar38 == 0) {
      *(undefined8 *)((long)param_1 + 0x4dec) = 0x200000001;
    }
    else {
      FUN_001d2598(param_1);
    }
    return iVar38 != 0;
  }
LAB_001d1d08:
  fVar100 = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x12);
  fVar91 = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x94);
  fVar101 = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x13);
  fVar35 = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x9c);
  fVar47 = fStack_a8 * fVar101 + fVar48 * fVar100 + fVar28 * fVar91;
  uVar62 = NEON_frecpe(CONCAT17(in_register_00005227,
                                CONCAT16(in_register_00005226,
                                         CONCAT15(in_register_00005225,
                                                  CONCAT14(in_register_00005224,
                                                           CONCAT13(in_register_00005223,
                                                                    CONCAT12(in_register_00005222,
                                                                             CONCAT11(
                                                  in_register_00005221,in_b17))))))),4);
  uVar49 = NEON_frecps(CONCAT17(in_register_00005227,
                                CONCAT16(in_register_00005226,
                                         CONCAT15(in_register_00005225,
                                                  CONCAT14(in_register_00005224,
                                                           CONCAT13(in_register_00005223,
                                                                    CONCAT12(in_register_00005222,
                                                                             CONCAT11(
                                                  in_register_00005221,in_b17))))))),uVar62,4);
  fVar51 = (float)uVar62 * (float)uVar49;
  fVar52 = (float)((ulong)uVar62 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frecps(CONCAT17(in_register_00005227,
                                CONCAT16(in_register_00005226,
                                         CONCAT15(in_register_00005225,
                                                  CONCAT14(in_register_00005224,
                                                           CONCAT13(in_register_00005223,
                                                                    CONCAT12(in_register_00005222,
                                                                             CONCAT11(
                                                  in_register_00005221,in_b17))))))),
                       CONCAT44(fVar52,fVar51),4);
  fVar51 = fVar51 * (float)uVar49 * fVar47;
  fVar47 = fVar52 * (float)((ulong)uVar49 >> 0x20) * fVar47;
  if (fVar51 < 0.0) {
    fVar52 = (float)param_1[0xd];
    if ((float)CONCAT13(in_register_00005223,
                        CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17))) *
        fVar51 * fVar51 <= fVar52) goto LAB_001d2180;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar44 = 0.0;
    fVar47 = 0.0;
  }
  else {
    fVar52 = (float)param_1[0xd];
LAB_001d2180:
    fVar36 = fVar48 * fVar51;
    fVar37 = fVar28 * fVar47;
    fVar44 = fStack_a8 * fVar51;
    fVar47 = fStack_a4 * fVar47;
  }
  auVar34._0_4_ = fVar36 - fVar100;
  auVar34._4_4_ = fVar37 - fVar91;
  auVar34._8_4_ = fVar44 - fVar101;
  auVar34._12_4_ = fVar47 - fVar35;
  fVar47 = auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_ +
           auVar34._8_4_ * auVar34._8_4_;
  if (fVar47 < fVar52) {
    fVar47 = auVar25._0_4_;
    fVar52 = auVar25._4_4_;
    fVar100 = auVar25._8_4_;
    param_1[0x9bd] = 0x200000001;
    *(undefined4 *)(param_1 + 0x9be) = 0;
    *(undefined1 *)((long)param_1 + 0xd62) = 1;
    *(undefined1 *)((long)param_1 + 0xd66) = 0;
    fVar91 = fVar100 * fVar100 + fVar47 * fVar47 + fVar52 * fVar52;
    fVar101 = fVar100 * fVar100 + fVar47 * fVar47 + fVar52 * fVar52;
    uVar49 = CONCAT44(fVar101,fVar91);
    uVar62 = NEON_frsqrte(uVar49,4);
    fVar48 = (float)uVar62;
    fVar28 = (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frsqrts(uVar49,CONCAT44(fVar28 * fVar28,fVar48 * fVar48),4);
    fVar48 = fVar48 * (float)uVar62;
    fVar28 = fVar28 * (float)((ulong)uVar62 >> 0x20);
    uVar49 = NEON_frsqrts(uVar49,CONCAT44(fVar28 * fVar28,fVar48 * fVar48),4);
    iVar38 = -(uint)(fVar91 <= 0.0);
    iVar92 = -(uint)(fVar101 <= 0.0);
    fVar48 = (float)uVar49 * fVar48;
    fVar28 = (float)((ulong)uVar49 >> 0x20) * fVar28;
    fVar91 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                             CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                      CONCAT11((byte)((uint)fVar48 >> 8) &
                                               ~(byte)((uint)iVar38 >> 8),
                                               SUB41(fVar48,0) & ~(byte)iVar38)));
    fVar101 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                               CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar28 >> 8) &
                                                  ~(byte)((uint)iVar92 >> 8),
                                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar92,fVar91)))
                              ) >> 0x20);
    *(float *)(param_1 + 0x9c1) = fVar100 * fVar91;
    *(float *)((long)param_1 + 0x4e0c) = auVar25._12_4_ * fVar101;
    *(float *)(param_1 + 0x9c0) = fVar47 * fVar91;
    *(float *)((long)param_1 + 0x4e04) = fVar52 * fVar101;
    *(float *)(param_1 + 0x9c2) = *(float *)(param_1 + 0xc) * 0.1;
    goto LAB_001d24a8;
  }
  local_90 = auVar34._0_4_;
  fStack_8c = auVar34._4_4_;
  fStack_88 = auVar34._8_4_;
  fStack_84 = auVar34._12_4_;
  if (fVar52 * fVar47 <
      *(float *)(param_1 + 0x16) * *(float *)(param_1 + 0x16) * 4.0 *
      (float)CONCAT13(in_register_00005223,
                      CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)))) {
    uVar7 = CONCAT13(in_register_00005223,
                     CONCAT12(in_register_00005222,CONCAT11(in_register_00005221,in_b17)));
    uVar99 = (undefined4)
             (CONCAT17(in_register_00005227,
                       CONCAT16(in_register_00005226,
                                CONCAT15(in_register_00005225,CONCAT14(in_register_00005224,uVar7)))
                      ) >> 0x20);
    fVar47 = fStack_a8 * auVar34._8_4_ + fVar48 * auVar34._0_4_ + fVar28 * auVar34._4_4_;
    auVar10[1] = in_register_00005221;
    auVar10[0] = in_b17;
    auVar10[2] = in_register_00005222;
    auVar10[3] = in_register_00005223;
    auVar10[4] = in_register_00005224;
    auVar10[5] = in_register_00005225;
    auVar10[6] = in_register_00005226;
    auVar10[7] = in_register_00005227;
    auVar10._8_4_ = uVar7;
    auVar10._12_4_ = uVar99;
    auVar56 = NEON_frecpe(auVar10,4);
    auVar11[1] = in_register_00005221;
    auVar11[0] = in_b17;
    auVar11[2] = in_register_00005222;
    auVar11[3] = in_register_00005223;
    auVar11[4] = in_register_00005224;
    auVar11[5] = in_register_00005225;
    auVar11[6] = in_register_00005226;
    auVar11[7] = in_register_00005227;
    auVar11._8_4_ = uVar7;
    auVar11._12_4_ = uVar99;
    auVar54 = NEON_frecps(auVar11,auVar56,4);
    auVar43._0_4_ = auVar56._0_4_ * auVar54._0_4_;
    auVar43._4_4_ = auVar56._4_4_ * auVar54._4_4_;
    auVar43._8_4_ = auVar56._8_4_ * auVar54._8_4_;
    auVar43._12_4_ = auVar56._12_4_ * auVar54._12_4_;
    auVar12[1] = in_register_00005221;
    auVar12[0] = in_b17;
    auVar12[2] = in_register_00005222;
    auVar12[3] = in_register_00005223;
    auVar12[4] = in_register_00005224;
    auVar12[5] = in_register_00005225;
    auVar12[6] = in_register_00005226;
    auVar12[7] = in_register_00005227;
    auVar12._8_4_ = uVar7;
    auVar12._12_4_ = uVar99;
    auVar56 = NEON_frecps(auVar12,auVar43,4);
    auVar34._0_4_ = auVar34._0_4_ - fVar48 * fVar47 * auVar43._0_4_ * auVar56._0_4_;
    auVar34._4_4_ = auVar34._4_4_ - fVar28 * fVar47 * auVar43._4_4_ * auVar56._4_4_;
    auVar34._8_4_ = auVar34._8_4_ - fStack_a8 * fVar47 * auVar43._8_4_ * auVar56._8_4_;
    auVar34._12_4_ = auVar34._12_4_ - fStack_a4 * fVar47 * auVar43._12_4_ * auVar56._12_4_;
    local_90 = auVar34._0_4_;
    fStack_8c = auVar34._4_4_;
    fStack_88 = auVar34._8_4_;
    fStack_84 = auVar34._12_4_;
  }
  if (*(int *)(param_1 + 0x18) < 0x40) {
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_90,param_1[2],param_1 + 4,&local_80);
    auVar56 = *(undefined1 (*) [16])(param_1 + 4);
    auVar54 = *(undefined1 (*) [16])(param_1 + 6);
    auVar53 = NEON_ext(auVar56,auVar56,8,1);
    auVar86 = *(undefined1 (*) [16])(param_1 + 8);
    auVar63 = NEON_ext(auVar54,auVar54,8,1);
    auVar30 = NEON_ext(auVar86,auVar86,8,1);
    fStack_70 = fStack_70 - *(float *)(param_1 + 10);
    fStack_6c = fStack_6c - *(float *)((long)param_1 + 0x54);
    fStack_68 = fStack_68 - *(float *)(param_1 + 0xb);
    iVar38 = *(int *)(param_1 + 0x9bd);
    auVar42._0_4_ =
         auVar53._0_4_ * fStack_68 + auVar56._0_4_ * fStack_70 + auVar56._4_4_ * fStack_6c;
    auVar42._4_4_ =
         auVar63._0_4_ * fStack_68 + auVar54._0_4_ * fStack_70 + auVar54._4_4_ * fStack_6c;
    auVar42._8_4_ =
         auVar30._0_4_ * fStack_68 + auVar86._0_4_ * fStack_70 + auVar86._4_4_ * fStack_6c;
    auVar42._12_4_ = fStack_64;
    auVar34._4_4_ = fStack_8c;
    auVar34._0_4_ = local_90;
    auVar34._8_4_ = fStack_88;
    auVar34._12_4_ = fStack_84;
    fVar47 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar52 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar78 = SUB41(fVar52,0);
    uVar74 = (undefined1)((uint)fVar52 >> 8);
    uVar76 = (undefined1)((uint)fVar52 >> 0x10);
    uVar79 = (undefined1)((uint)fVar52 >> 0x18);
    uVar49 = NEON_frsqrte(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar47))))
                          ,4);
    auVar50._0_4_ = local_80 - auVar42._0_4_;
    auVar50._4_4_ = fStack_7c - auVar42._4_4_;
    auVar50._8_4_ = fStack_78 - auVar42._8_4_;
    auVar50._12_4_ = fStack_74 - fStack_64;
    fVar28 = (float)uVar49;
    fVar48 = (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar47))))
                          ,CONCAT44(fVar48 * fVar48,fVar28 * fVar28),4);
    fVar28 = fVar28 * (float)uVar49;
    fVar48 = fVar48 * (float)((ulong)uVar49 >> 0x20);
    auVar60._0_4_ = local_90 * (auVar50._0_4_ - fVar100);
    auVar60._4_4_ = fStack_8c * (auVar50._4_4_ - fVar91);
    auVar60._8_4_ = fStack_88 * (auVar50._8_4_ - fVar101);
    auVar60._12_4_ = fStack_84 * (auVar50._12_4_ - fVar35);
    auVar56 = NEON_ext(auVar60,auVar60,8,1);
    if (iVar38 == 8) {
      auVar67._0_4_ = local_90 * auVar50._0_4_;
      auVar67._4_4_ = fStack_8c * auVar50._4_4_;
      auVar67._8_4_ = fStack_88 * auVar50._8_4_;
      auVar67._12_4_ = fStack_84 * auVar50._12_4_;
      auVar54 = NEON_ext(auVar67,auVar67,8,1);
      fVar100 = (float)param_1[0xc];
      if (fVar100 < -(fVar28 * (auVar54._0_4_ + auVar67._0_4_ + auVar67._4_4_))) {
        fVar91 = fVar48 * fVar48;
        iVar38 = -(uint)(fVar47 <= 0.0);
        iVar92 = -(uint)(fVar52 <= 0.0);
        uVar49 = NEON_frsqrts(CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar74,CONCAT14(uVar78,fVar47
                                                                                      )))),
                              CONCAT17((char)((uint)fVar91 >> 0x18),
                                       CONCAT16((char)((uint)fVar91 >> 0x10),
                                                CONCAT15((char)((uint)fVar91 >> 8),
                                                         CONCAT14(SUB41(fVar91,0),fVar28 * fVar28)))
                                      ),4);
        fVar47 = fVar28 * (float)uVar49;
        fVar48 = fVar48 * (float)((ulong)uVar49 >> 0x20);
        bVar70 = SUB41(fVar47,0) & ~(byte)iVar38;
        bVar71 = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar38 >> 8);
        bVar72 = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
        bVar73 = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
        bVar75 = SUB41(fVar48,0) & ~(byte)iVar92;
        bVar77 = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar92 >> 8);
        bVar80 = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
        bVar82 = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        fVar47 = (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
        fVar52 = local_90 * (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70)));
        fVar91 = fStack_8c * (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar77,bVar75)));
        fVar101 = fStack_88 * fVar47;
        fVar47 = fStack_84 *
                 (float)(CONCAT17(bVar82,CONCAT16(bVar80,CONCAT15(bVar77,CONCAT14(bVar75,fVar47))))
                        >> 0x20);
        auVar90._0_4_ = auVar50._0_4_ * fVar52;
        auVar90._4_4_ = auVar50._4_4_ * fVar91;
        auVar90._8_4_ = auVar50._8_4_ * fVar101;
        auVar90._12_4_ = auVar50._12_4_ * fVar47;
        auVar54 = NEON_ext(auVar90,auVar90,8,1);
        fVar48 = -(auVar90._0_4_ + auVar90._4_4_ + auVar54._0_4_);
        if (fVar100 < fVar48) {
          iVar38 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = CONCAT44(fVar47,fVar101);
          param_1[0x9c0] =
               CONCAT17((char)((uint)fVar91 >> 0x18),
                        CONCAT16((char)((uint)fVar91 >> 0x10),
                                 CONCAT15((char)((uint)fVar91 >> 8),CONCAT14(SUB41(fVar91,0),fVar52)
                                         )));
          *(float *)(param_1 + 0x9c2) = fVar48;
          goto joined_r0x001d2434;
        }
      }
      iVar38 = 8;
    }
    else {
      fVar100 = (float)param_1[0xc];
    }
joined_r0x001d2434:
    if (fVar100 <= fVar28 * (auVar60._0_4_ + auVar60._4_4_ + auVar56._0_4_)) {
      iVar38 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar38 * 2 + 0x1b) = fStack_78;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xdc) = fStack_74;
      *(float *)(param_1 + (long)iVar38 * 2 + 0x1a) = local_80;
      *(float *)((long)param_1 + (long)iVar38 * 0x10 + 0xd4) = fStack_7c;
      goto LAB_001d252c;
    }
  }
  *(undefined8 *)((long)param_1 + 0x4dec) = 2;
  *(undefined1 *)((long)param_1 + 0xd66) = 0;
  *(undefined1 *)((long)param_1 + 0xd62) = 1;
  if (iVar38 == 0) {
    return 0;
  }
  fVar100 = auVar34._0_4_;
  fVar91 = auVar34._4_4_;
  fVar101 = auVar34._8_4_;
  *(undefined4 *)(param_1 + 0x9bd) = 1;
  fVar47 = fVar100 * fVar100 + fVar91 * fVar91 + fVar101 * fVar101;
  fVar52 = fVar100 * fVar100 + fVar91 * fVar91 + fVar101 * fVar101;
  uVar49 = CONCAT44(fVar52,fVar47);
  uVar62 = NEON_frsqrte(uVar49,4);
  fVar48 = (float)uVar62;
  fVar28 = (float)((ulong)uVar62 >> 0x20);
  uVar62 = NEON_frsqrts(uVar49,CONCAT44(fVar28 * fVar28,fVar48 * fVar48),4);
  fVar48 = fVar48 * (float)uVar62;
  fVar28 = fVar28 * (float)((ulong)uVar62 >> 0x20);
  uVar49 = NEON_frsqrts(uVar49,CONCAT44(fVar28 * fVar28,fVar48 * fVar48),4);
  iVar38 = -(uint)(fVar47 <= 0.0);
  iVar92 = -(uint)(fVar52 <= 0.0);
  fVar48 = (float)uVar49 * fVar48;
  fVar28 = (float)((ulong)uVar49 >> 0x20) * fVar28;
  fVar52 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar38)));
  fVar48 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                            CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                                     CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar92 >> 8)
                                              ,CONCAT14(SUB41(fVar28,0) & ~(byte)iVar92,fVar52))))
                  >> 0x20);
  *(float *)(param_1 + 0x9c1) = fVar101 * fVar52;
  *(float *)((long)param_1 + 0x4e0c) = auVar34._12_4_ * fVar48;
  *(float *)(param_1 + 0x9c0) = fVar100 * fVar52;
  *(float *)((long)param_1 + 0x4e04) = fVar91 * fVar48;
  *(float *)(param_1 + 0x9c2) = fVar47 * fVar52;
LAB_001d24a8:
  *(float *)(param_1 + 0x9c6) = fVar51;
  return 0;
}


