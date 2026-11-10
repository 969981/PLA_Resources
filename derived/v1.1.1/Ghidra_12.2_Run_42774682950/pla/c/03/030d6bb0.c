/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d6bb0; name: FUN_030d6bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d6bb0(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,float *param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  ulong uVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  float fVar42;
  undefined1 auVar40 [16];
  float fVar43;
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar57;
  undefined1 auVar52 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined1 auVar74 [16];
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar85;
  undefined1 auVar83 [16];
  float fVar86;
  undefined1 auVar84 [16];
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar91;
  float fVar92;
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar96;
  undefined1 auVar95 [16];
  int iVar97;
  int iVar100;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar101;
  int iVar102;
  
  auVar9 = NEON_fmov(0xbf800000,4);
  fVar17 = (float)*(undefined8 *)(param_1 + 0xc0) + auVar9._0_4_;
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) + auVar9._4_4_;
  fVar21 = (float)*(undefined8 *)(param_1 + 200) + auVar9._8_4_;
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) + auVar9._12_4_;
  fVar10 = (float)param_3[2];
  fVar30 = fVar10 + fVar17 * (float)param_3[8];
  fVar11 = (float)((ulong)param_3[2] >> 0x20);
  fVar31 = fVar11 + fVar19 * (float)((ulong)param_3[8] >> 0x20);
  fVar12 = (float)param_3[3];
  fVar32 = fVar12 + fVar21 * (float)param_3[9];
  fVar5 = (float)*param_3;
  fVar23 = fVar5 + (float)param_3[6] * fVar17;
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar24 = fVar6 + (float)((ulong)param_3[6] >> 0x20) * fVar19;
  fVar7 = (float)param_3[1];
  fVar25 = fVar7 + (float)param_3[7] * fVar21;
  fVar8 = (float)((ulong)param_3[1] >> 0x20);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  uVar16 = *(undefined8 *)(param_4 + 6);
  fVar13 = (float)*(undefined8 *)(param_4 + 4);
  fVar35 = fVar13 + fVar17 * (float)*(undefined8 *)(param_4 + 0x10);
  fVar14 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fVar36 = fVar14 + fVar19 * (float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
  fVar15 = (float)uVar16;
  fVar37 = fVar15 + fVar21 * (float)*(undefined8 *)(param_4 + 0x12);
  fVar26 = fVar1 + fVar17 * param_4[0xc];
  fVar28 = fVar2 + fVar19 * param_4[0xd];
  fVar29 = fVar3 + fVar21 * param_4[0xe];
  fVar18 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  auVar50._0_4_ = fVar30 * fVar18;
  auVar50._4_4_ = fVar31 * fVar20;
  auVar50._8_4_ = fVar32 * fVar18;
  auVar9 = param_2[5];
  auVar44._0_4_ = fVar35 * fVar18;
  auVar44._4_4_ = fVar36 * fVar20;
  auVar44._8_4_ = fVar37 * fVar18;
  auVar50._12_4_ = 0x40000000;
  auVar44._12_4_ = 0x40000000;
  auVar63._0_4_ = -*(float *)param_2[4];
  auVar63._4_4_ = -*(float *)(param_2[4] + 4);
  auVar63._8_4_ = -*(float *)(param_2[4] + 8);
  auVar63._12_4_ = *(undefined4 *)(param_2[4] + 0xc);
  auVar74._8_8_ = _UNK_038890f8;
  auVar74._0_8_ = _DAT_038890f0;
  auVar88._8_8_ = _UNK_03888e28;
  auVar88._0_8_ = _DAT_03888e20;
  auVar90._8_8_ = _UNK_03888d78;
  auVar90._0_8_ = _DAT_03888d70;
  auVar93 = a64_TBL(ZEXT816(0),auVar50,auVar90);
  auVar95._8_8_ = _UNK_03889108;
  auVar95._0_8_ = _DAT_03889100;
  auVar83 = a64_TBL(ZEXT816(0),auVar63,auVar74);
  auVar64 = a64_TBL(ZEXT816(0),auVar63,auVar88);
  auVar51 = a64_TBL(ZEXT816(0),auVar50,auVar95);
  auVar98._0_4_ = auVar64._0_4_ * auVar51._0_4_ - auVar83._0_4_ * auVar93._0_4_;
  auVar98._4_4_ = auVar64._4_4_ * auVar51._4_4_ - auVar83._4_4_ * auVar93._4_4_;
  auVar98._8_4_ = auVar64._8_4_ * auVar51._8_4_ - auVar83._8_4_ * auVar93._8_4_;
  auVar98._12_4_ = auVar64._12_4_ * auVar51._12_4_ - auVar83._12_4_ * auVar93._12_4_;
  fVar38 = auVar9._12_4_;
  auVar99 = a64_TBL(ZEXT816(0),auVar98,_DAT_038895d0);
  fVar57 = auVar99._12_4_ - (auVar64._12_4_ * auVar93._12_4_ + auVar83._12_4_ * auVar51._12_4_);
  fVar48 = -(auVar99._0_4_ - (auVar64._0_4_ * auVar93._0_4_ + auVar83._0_4_ * auVar51._0_4_));
  fVar53 = -(auVar99._4_4_ - (auVar64._4_4_ * auVar93._4_4_ + auVar83._4_4_ * auVar51._4_4_));
  fVar55 = -(auVar99._8_4_ - (auVar64._8_4_ * auVar93._8_4_ + auVar83._8_4_ * auVar51._8_4_));
  auVar65._0_4_ = -*(float *)param_2[6];
  auVar65._4_4_ = -*(float *)(param_2[6] + 4);
  auVar65._8_4_ = -*(float *)(param_2[6] + 8);
  auVar65._12_4_ = *(undefined4 *)(param_2[6] + 0xc);
  auVar93 = a64_TBL(ZEXT816(0),auVar44,auVar90);
  auVar51 = a64_TBL(ZEXT816(0),auVar44,auVar95);
  auVar83 = a64_TBL(ZEXT816(0),auVar65,auVar74);
  auVar64 = a64_TBL(ZEXT816(0),auVar65,auVar88);
  auVar89._0_4_ = auVar64._0_4_ * auVar51._0_4_ - auVar83._0_4_ * auVar93._0_4_;
  auVar89._4_4_ = auVar64._4_4_ * auVar51._4_4_ - auVar83._4_4_ * auVar93._4_4_;
  auVar89._8_4_ = auVar64._8_4_ * auVar51._8_4_ - auVar83._8_4_ * auVar93._8_4_;
  auVar89._12_4_ = auVar64._12_4_ * auVar51._12_4_ - auVar83._12_4_ * auVar93._12_4_;
  auVar99 = a64_TBL(ZEXT816(0),auVar89,_DAT_038895d0);
  fVar47 = auVar99._12_4_ - (auVar64._12_4_ * auVar93._12_4_ + auVar83._12_4_ * auVar51._12_4_);
  fVar19 = -(auVar99._0_4_ - (auVar64._0_4_ * auVar93._0_4_ + auVar83._0_4_ * auVar51._0_4_));
  fVar21 = -(auVar99._4_4_ - (auVar64._4_4_ * auVar93._4_4_ + auVar83._4_4_ * auVar51._4_4_));
  fVar46 = -(auVar99._8_4_ - (auVar64._8_4_ * auVar93._8_4_ + auVar83._8_4_ * auVar51._8_4_));
  auVar66._0_4_ = fVar48 * fVar48;
  auVar66._4_4_ = fVar53 * fVar53;
  auVar66._8_4_ = fVar55 * fVar55;
  auVar66._12_4_ = fVar57 * fVar57;
  auVar51 = NEON_ext(auVar66,auVar66,8,1);
  fVar17 = auVar51._0_4_ + auVar51._4_4_;
  uVar62 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar17,auVar66._0_4_ + auVar66._4_4_ + fVar17);
  uVar73 = NEON_frsqrte(uVar62,4);
  fVar17 = (float)uVar73;
  fVar79 = (float)((ulong)uVar73 >> 0x20);
  uVar73 = NEON_frsqrts(uVar62,CONCAT44(fVar79 * fVar79,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar73;
  fVar79 = fVar79 * (float)((ulong)uVar73 >> 0x20);
  uVar62 = NEON_frsqrts(uVar62,CONCAT44(fVar79 * fVar79,fVar17 * fVar17),4);
  fVar17 = (float)uVar62 * fVar17;
  fVar79 = (float)((ulong)uVar62 >> 0x20) * fVar79;
  auVar52._0_4_ = fVar48 * fVar17;
  auVar52._4_4_ = fVar53 * fVar79;
  auVar52._8_4_ = fVar55 * fVar17;
  auVar52._12_4_ = fVar57 * fVar79;
  auVar67._0_4_ = fVar19 * fVar19;
  auVar67._4_4_ = fVar21 * fVar21;
  auVar67._8_4_ = fVar46 * fVar46;
  auVar67._12_4_ = fVar47 * fVar47;
  auVar51 = NEON_ext(auVar67,auVar67,8,1);
  fVar17 = auVar51._0_4_ + auVar51._4_4_;
  uVar62 = CONCAT44(auVar67._0_4_ + auVar67._4_4_ + fVar17,auVar67._0_4_ + auVar67._4_4_ + fVar17);
  uVar73 = NEON_frsqrte(uVar62,4);
  fVar17 = (float)uVar73;
  fVar48 = (float)((ulong)uVar73 >> 0x20);
  uVar73 = NEON_frsqrts(uVar62,CONCAT44(fVar48 * fVar48,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar73;
  fVar48 = fVar48 * (float)((ulong)uVar73 >> 0x20);
  uVar62 = NEON_frsqrts(uVar62,CONCAT44(fVar48 * fVar48,fVar17 * fVar17),4);
  auVar51 = NEON_ext(auVar52,auVar52,8,1);
  fVar85 = auVar51._4_4_ * auVar51._4_4_;
  fVar17 = (float)uVar62 * fVar17;
  fVar48 = (float)((ulong)uVar62 >> 0x20) * fVar48;
  fVar80 = fVar85 + -0.5;
  fVar85 = fVar85 + -0.5;
  auVar45._0_4_ = fVar19 * fVar17;
  auVar45._4_4_ = fVar21 * fVar48;
  auVar45._8_4_ = fVar46 * fVar17;
  auVar45._12_4_ = fVar47 * fVar48;
  fVar17 = *(float *)(param_2[2] + 0xc);
  fVar19 = *(float *)(param_2[3] + 0xc);
  auVar75._0_4_ = *(float *)param_2[3] * fVar19;
  auVar75._4_4_ = *(float *)(param_2[3] + 4) * fVar19;
  auVar75._8_4_ = *(float *)(param_2[3] + 8) * fVar19;
  auVar75._12_4_ = fVar19 * fVar19;
  auVar68._0_4_ = *(float *)param_2[2] * fVar17;
  auVar68._4_4_ = *(float *)(param_2[2] + 4) * fVar17;
  auVar68._8_4_ = *(float *)(param_2[2] + 8) * fVar17;
  auVar68._12_4_ = fVar17 * fVar17;
  fVar21 = auVar52._0_4_ * auVar68._0_4_ + auVar52._4_4_ * auVar68._4_4_ +
           auVar52._8_4_ * auVar68._8_4_;
  fVar46 = auVar52._0_4_ * auVar68._0_4_ + auVar52._4_4_ * auVar68._4_4_ +
           auVar52._8_4_ * auVar68._8_4_;
  auVar51 = NEON_ext(auVar68,auVar68,4,1);
  auVar93 = NEON_ext(auVar52,auVar52,4,1);
  auVar69._0_4_ = auVar52._0_4_ * auVar51._0_4_ - auVar93._0_4_ * auVar68._0_4_;
  auVar69._4_4_ = auVar52._4_4_ * auVar51._4_4_ - auVar93._4_4_ * auVar68._4_4_;
  auVar69._8_4_ = auVar52._8_4_ * auVar68._0_4_ - auVar52._0_4_ * auVar68._8_4_;
  auVar69._12_4_ = auVar52._12_4_ * auVar68._4_4_ - auVar52._4_4_ * auVar68._12_4_;
  auVar51 = NEON_ext(auVar69,auVar69,4,1);
  fVar17 = fVar80 * auVar68._0_4_ + auVar52._0_4_ * fVar21 + auVar51._0_4_ * auVar52._12_4_;
  fVar19 = fVar85 * auVar68._4_4_ + auVar52._4_4_ * fVar46 + auVar51._4_4_ * auVar52._12_4_;
  fVar21 = fVar80 * auVar68._8_4_ + auVar52._8_4_ * fVar21 + auVar69._0_4_ * auVar52._12_4_;
  fVar46 = fVar85 * auVar68._12_4_ + auVar52._12_4_ * fVar46 + auVar69._4_4_ * auVar52._12_4_;
  auVar51 = NEON_ext(auVar45,auVar45,8,1);
  fVar91 = auVar51._4_4_ * auVar51._4_4_;
  fVar47 = auVar45._0_4_ * auVar75._0_4_ + auVar45._4_4_ * auVar75._4_4_ +
           auVar45._8_4_ * auVar75._8_4_;
  fVar48 = auVar45._0_4_ * auVar75._0_4_ + auVar45._4_4_ * auVar75._4_4_ +
           auVar45._8_4_ * auVar75._8_4_;
  auVar51 = NEON_ext(auVar75,auVar75,4,1);
  fVar87 = fVar91 + -0.5;
  fVar91 = fVar91 + -0.5;
  auVar70._0_4_ = fVar17 + fVar17;
  auVar70._4_4_ = fVar19 + fVar19;
  auVar70._8_4_ = fVar21 + fVar21;
  auVar70._12_4_ = fVar46 + fVar46;
  auVar99 = NEON_ext(auVar45,auVar45,4,1);
  auVar76._0_4_ = auVar45._0_4_ * auVar51._0_4_ - auVar99._0_4_ * auVar75._0_4_;
  auVar76._4_4_ = auVar45._4_4_ * auVar51._4_4_ - auVar99._4_4_ * auVar75._4_4_;
  auVar76._8_4_ = auVar45._8_4_ * auVar75._0_4_ - auVar45._0_4_ * auVar75._8_4_;
  auVar76._12_4_ = auVar45._12_4_ * auVar75._4_4_ - auVar45._4_4_ * auVar75._12_4_;
  auVar51 = NEON_ext(auVar76,auVar76,4,1);
  fVar17 = auVar75._0_4_ * fVar87 + auVar45._0_4_ * fVar47 + auVar51._0_4_ * auVar45._12_4_;
  fVar19 = auVar75._4_4_ * fVar91 + auVar45._4_4_ * fVar48 + auVar51._4_4_ * auVar45._12_4_;
  fVar21 = auVar75._8_4_ * fVar87 + auVar45._8_4_ * fVar47 + auVar76._0_4_ * auVar45._12_4_;
  fVar46 = auVar75._12_4_ * fVar91 + auVar45._12_4_ * fVar48 + auVar76._4_4_ * auVar45._12_4_;
  auVar77._0_4_ = fVar17 + fVar17;
  auVar77._4_4_ = fVar19 + fVar19;
  auVar77._8_4_ = fVar21 + fVar21;
  auVar77._12_4_ = fVar46 + fVar46;
  fVar59 = (fVar23 * fVar18 + 0.0 + auVar70._0_4_) -
           (auVar9._0_4_ + fVar26 * fVar18 + auVar77._0_4_);
  fVar60 = (fVar24 * fVar20 + 0.0 + auVar70._4_4_) -
           (auVar9._4_4_ + fVar28 * fVar20 + auVar77._4_4_);
  fVar61 = (fVar25 * fVar18 + 0.0 + auVar70._8_4_) -
           (auVar9._8_4_ + fVar29 * fVar18 + auVar77._8_4_);
  fVar47 = fVar59 * fVar59 + fVar60 * fVar60 + fVar61 * fVar61;
  fVar55 = fVar59 * fVar59 + fVar60 * fVar60 + fVar61 * fVar61;
  uVar73 = CONCAT44(fVar55,fVar47);
  uVar62 = NEON_frsqrte(uVar73,4);
  iVar97 = -(uint)(fVar47 < 1.4210855e-14);
  iVar100 = -(uint)(fVar55 < 1.4210855e-14);
  fVar17 = (float)uVar62;
  fVar19 = (float)((ulong)uVar62 >> 0x20);
  uVar62 = NEON_frsqrts(uVar73,CONCAT44(fVar19 * fVar19,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar62;
  fVar19 = fVar19 * (float)((ulong)uVar62 >> 0x20);
  uVar62 = NEON_frsqrts(uVar73,CONCAT44(fVar19 * fVar19,fVar17 * fVar17),4);
  iVar101 = -(uint)(fVar47 <= 0.0);
  iVar102 = -(uint)(fVar55 <= 0.0);
  auVar40._8_8_ = CONCAT44(iVar100,iVar97);
  auVar40._0_8_ = CONCAT44(iVar100,iVar97);
  fVar17 = (float)uVar62 * fVar17;
  fVar19 = (float)((ulong)uVar62 >> 0x20) * fVar19;
  auVar83._8_8_ = _UNK_03889a88;
  auVar83._0_8_ = _DAT_03889a80;
  fVar82 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar101 >> 0x18),
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar101 >> 0x10),
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar101 >> 8)
                                             ,SUB41(fVar17,0) & ~(byte)iVar101)));
  auVar51._0_4_ = fVar59 * fVar82;
  fVar19 = (float)(CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18),
                            CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar102 >> 0x10),
                                     CONCAT15((byte)((uint)fVar19 >> 8) &
                                              ~(byte)((uint)iVar102 >> 8),
                                              CONCAT14(SUB41(fVar19,0) & ~(byte)iVar102,fVar82))))
                  >> 0x20);
  auVar51._4_4_ = fVar60 * fVar19;
  auVar51._8_4_ = fVar61 * fVar82;
  auVar51._12_4_ =
       (((fVar8 + (float)((ulong)param_3[7] >> 0x20) * fVar22) * fVar20 + 0.0 + auVar70._12_4_) -
       (fVar38 + (fVar4 + fVar22 * param_4[0xf]) * fVar20 + auVar77._12_4_)) * fVar19;
  auVar51 = auVar51 ^ (auVar51 ^ auVar83) & auVar40;
  auVar64 = NEON_ext(auVar70,auVar70,4,1);
  auVar83 = NEON_ext(auVar51,auVar51,8,1);
  uVar62 = NEON_ext(auVar51._0_8_,auVar83._0_8_,4,1);
  fVar39 = auVar51._0_4_;
  fVar41 = auVar51._4_4_;
  fVar42 = auVar51._8_4_;
  fVar43 = auVar51._12_4_;
  fVar17 = (float)((ulong)uVar62 >> 0x20);
  fVar22 = auVar70._0_4_ * (float)uVar62 - auVar64._0_4_ * fVar39;
  fVar48 = auVar70._4_4_ * fVar17 - auVar64._4_4_ * fVar41;
  auVar71._0_8_ = CONCAT44(fVar48,fVar22);
  auVar71._8_4_ = auVar70._8_4_ * fVar39 - auVar70._0_4_ * fVar42;
  auVar71._12_4_ = auVar70._12_4_ * fVar41 - auVar70._4_4_ * fVar43;
  auVar51 = NEON_ext(auVar71,auVar71,4,1);
  uVar73 = NEON_ext(auVar51._0_8_,auVar71._0_8_,4,1);
  auVar64 = NEON_ext(auVar77,auVar77,4,1);
  fVar46 = auVar77._0_4_ * (float)uVar62 - auVar64._0_4_ * fVar39;
  fVar53 = auVar77._4_4_ * fVar17 - auVar64._4_4_ * fVar41;
  auVar72._0_8_ = CONCAT44(fVar53,fVar46);
  auVar72._8_4_ = auVar77._8_4_ * fVar39 - auVar77._0_4_ * fVar42;
  auVar72._12_4_ = auVar77._12_4_ * fVar41 - auVar77._4_4_ * fVar43;
  auVar64 = NEON_ext(auVar72,auVar72,4,1);
  uVar62 = NEON_ext(auVar64._0_8_,auVar72._0_8_,4,1);
  fVar17 = auVar51._0_4_;
  fVar21 = auVar51._4_4_;
  fVar81 = auVar52._0_4_ * fVar17 + auVar52._4_4_ * fVar21 + auVar52._8_4_ * fVar22;
  fVar86 = auVar52._0_4_ * fVar17 + auVar52._4_4_ * fVar21 + auVar52._8_4_ * fVar22;
  auVar84._0_4_ = auVar93._0_4_ * fVar17 - auVar52._0_4_ * (float)uVar73;
  auVar84._4_4_ = auVar93._4_4_ * fVar21 - auVar52._4_4_ * (float)((ulong)uVar73 >> 0x20);
  auVar84._8_4_ = auVar52._0_4_ * fVar22 - auVar52._8_4_ * fVar17;
  auVar84._12_4_ = auVar52._4_4_ * fVar48 - auVar52._12_4_ * fVar21;
  auVar51 = NEON_ext(auVar84,auVar84,4,1);
  fVar57 = auVar64._0_4_;
  fVar79 = auVar64._4_4_;
  fVar49 = fVar80 * fVar17 + auVar52._0_4_ * fVar81 + auVar51._0_4_ * auVar52._12_4_;
  fVar54 = fVar85 * fVar21 + auVar52._4_4_ * fVar86 + auVar51._4_4_ * auVar52._12_4_;
  fVar56 = fVar80 * fVar22 + auVar52._8_4_ * fVar81 + auVar84._0_4_ * auVar52._12_4_;
  fVar58 = fVar85 * fVar48 + auVar52._12_4_ * fVar86 + auVar84._4_4_ * auVar52._12_4_;
  fVar48 = auVar45._0_4_ * fVar57 + auVar45._4_4_ * fVar79 + auVar45._8_4_ * fVar46;
  fVar80 = auVar45._0_4_ * fVar57 + auVar45._4_4_ * fVar79 + auVar45._8_4_ * fVar46;
  fVar49 = fVar49 + fVar49;
  fVar54 = fVar54 + fVar54;
  fVar56 = fVar56 + fVar56;
  fVar47 = fVar47 * fVar82;
  fVar55 = fVar55 * fVar19;
  fVar82 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                           CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10),
                                    CONCAT11((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar97 >> 8),
                                             SUB41(fVar47,0) & ~(byte)iVar97)));
  uVar33 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18),
                    CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar100 >> 0x10),
                             CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar100 >> 8),
                                      CONCAT14(SUB41(fVar55,0) & ~(byte)iVar100,fVar82))));
  auVar78._0_4_ = auVar99._0_4_ * fVar57 - auVar45._0_4_ * (float)uVar62;
  auVar78._4_4_ = auVar99._4_4_ * fVar79 - auVar45._4_4_ * (float)((ulong)uVar62 >> 0x20);
  auVar78._8_4_ = auVar45._0_4_ * fVar46 - auVar45._8_4_ * fVar57;
  auVar78._12_4_ = auVar45._4_4_ * fVar53 - auVar45._12_4_ * fVar79;
  auVar64 = NEON_ext(auVar78,auVar78,4,1);
  fVar17 = *(float *)(param_3 + 4);
  fVar19 = *(float *)((long)param_3 + 0x24);
  fVar21 = *(float *)(param_3 + 5);
  fVar22 = *(float *)((long)param_3 + 0x2c);
  auVar51 = *param_2;
  fVar92 = auVar51._8_4_;
  fVar81 = fVar87 * fVar57 + auVar45._0_4_ * fVar48 + auVar64._0_4_ * auVar45._12_4_;
  fVar85 = fVar91 * fVar79 + auVar45._4_4_ * fVar80 + auVar64._4_4_ * auVar45._12_4_;
  fVar86 = fVar87 * fVar46 + auVar45._8_4_ * fVar48 + auVar78._0_4_ * auVar45._12_4_;
  fVar87 = fVar91 * fVar53 + auVar45._12_4_ * fVar80 + auVar78._4_4_ * auVar45._12_4_;
  fVar79 = auVar51._4_4_;
  fVar91 = (float)(uVar33 >> 0x20);
  fVar46 = param_4[8];
  fVar47 = param_4[9];
  fVar48 = param_4[10];
  fVar53 = param_4[0xb];
  fVar81 = fVar81 + fVar81;
  fVar85 = fVar85 + fVar85;
  fVar86 = fVar86 + fVar86;
  auVar83 = NEON_ext(auVar51,auVar51,8,1);
  uVar33 = uVar33 ^ (uVar33 ^ CONCAT44(fVar92,fVar92)) &
                    CONCAT44(-(uint)(fVar92 < fVar91),-(uint)(fVar92 < fVar82));
  uVar33 = uVar33 ^ (uVar33 ^ CONCAT44(fVar79,fVar79)) &
                    CONCAT44(-(uint)(fVar91 < fVar79),-(uint)(fVar82 < fVar79));
  auVar93._0_4_ = fVar17 + fVar46;
  auVar93._4_4_ = fVar19 + fVar47;
  auVar93._8_4_ = fVar21 + fVar48;
  auVar93._12_4_ = fVar22 + fVar53;
  fVar55 = fVar17 * fVar49 * fVar49 + fVar46 * fVar81 * fVar81;
  fVar57 = fVar19 * fVar54 * fVar54 + fVar47 * fVar85 * fVar85;
  auVar99._4_4_ = fVar57;
  auVar99._0_4_ = fVar55;
  auVar99._8_4_ = fVar21 * fVar56 * fVar56 + fVar48 * fVar86 * fVar86;
  fVar94 = (float)uVar33 - fVar82;
  fVar96 = (float)(uVar33 >> 0x20) - fVar91;
  auVar64._8_4_ = 0x28800000;
  auVar64._0_8_ = 0x2880000028800000;
  auVar64._12_4_ = 0x28800000;
  auVar51 = NEON_fmax(auVar93,auVar64,4);
  auVar99._12_4_ = auVar51._12_4_;
  auVar51 = NEON_ext(auVar99,auVar99,8,1);
  fVar55 = fVar55 + fVar57;
  fVar57 = auVar51._0_4_ + auVar51._4_4_;
  uVar62 = CONCAT44(fVar55 + fVar57,fVar55 + fVar57);
  uVar73 = NEON_frecpe(uVar62,4);
  uVar34 = NEON_frecps(uVar62,uVar73,4);
  fVar55 = (float)uVar73 * (float)uVar34;
  fVar57 = (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
  uVar62 = NEON_frecps(uVar62,CONCAT44(fVar57,fVar55),4);
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  fVar80 = auVar9._4_4_ * auVar83._4_4_;
  fVar55 = fVar55 * (float)uVar62 *
           (fVar80 + (float)*(undefined8 *)(param_1 + 0x40) * *(float *)(param_2[1] + 8) *
                     (fVar94 - fVar38));
  fVar57 = fVar57 * (float)((ulong)uVar62 >> 0x20) *
           (fVar80 + (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) *
                     *(float *)(param_2[1] + 8) * (fVar96 - fVar38));
  uVar33 = CONCAT44(fVar57,fVar55);
  if (param_2[1][0xc] != '\0') {
    fVar23 = fVar35 * fVar81 + (fVar26 - fVar23) * fVar59 + fVar30 * fVar49;
    fVar24 = fVar36 * fVar85 + (fVar28 - fVar24) * fVar60 + fVar31 * fVar54;
    fVar25 = fVar37 * fVar86 + (fVar29 - fVar25) * fVar61 + fVar32 * fVar56;
    fVar18 = fVar18 * (fVar94 * *(float *)param_2[1] +
                      (fVar25 + fVar23 + fVar24) * *(float *)(param_2[1] + 4));
    fVar20 = fVar20 * (fVar96 * *(float *)param_2[1] +
                      (fVar25 + fVar23 + fVar24) * *(float *)(param_2[1] + 4));
    fVar55 = ABS(fVar55);
    fVar57 = ABS(fVar57);
    uVar33 = NEON_fmax(CONCAT44(-fVar57,-fVar55),
                       CONCAT44(fVar57,fVar55) ^
                       (CONCAT44(fVar57,fVar55) ^ CONCAT44(fVar20,fVar18)) &
                       CONCAT44(-(uint)(fVar20 < fVar57),-(uint)(fVar18 < fVar55)),4);
    if (fVar79 < fVar92) {
      uVar27 = NEON_fmax(uVar33,0,4);
      uVar33 = NEON_fmin(uVar33,0,4);
      fVar55 = fVar79 + (fVar92 - fVar79) * 0.5;
      fVar79 = fVar79 + (fVar92 - fVar79) * 0.5;
      uVar33 = uVar33 & CONCAT44(-(uint)(fVar79 < fVar91),-(uint)(fVar55 < fVar82));
      uVar33 = uVar33 ^ (uVar33 ^ uVar27) &
                        CONCAT44(-(uint)(fVar91 < fVar79),-(uint)(fVar82 < fVar55));
    }
  }
  fVar55 = (float)uVar33;
  if (fVar55 != 0.0) {
    fVar57 = (float)(uVar33 >> 0x20);
    param_3[1] = CONCAT44(fVar8 + fVar43 * fVar57 * fVar22,fVar7 + fVar42 * fVar55 * fVar22);
    *param_3 = CONCAT44(fVar6 + fVar41 * fVar57 * fVar22,fVar5 + fVar39 * fVar55 * fVar22);
    param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) + fVar22 * (fVar58 + fVar58) * fVar57,
                          fVar12 + fVar21 * fVar56 * fVar55);
    param_3[2] = CONCAT44(fVar11 + fVar19 * fVar54 * fVar57,fVar10 + fVar17 * fVar49 * fVar55);
    *param_5 = fVar55 + *param_5;
    param_4[2] = fVar3 - fVar42 * fVar55 * fVar53;
    param_4[3] = fVar4 - fVar43 * fVar57 * fVar53;
    *param_4 = fVar1 - fVar39 * fVar55 * fVar53;
    param_4[1] = fVar2 - fVar41 * fVar57 * fVar53;
    *(ulong *)(param_4 + 6) =
         CONCAT44((float)((ulong)uVar16 >> 0x20) - fVar53 * (fVar87 + fVar87) * fVar57,
                  fVar15 - fVar48 * fVar86 * fVar55);
    *(ulong *)(param_4 + 4) =
         CONCAT44(fVar14 - fVar47 * fVar85 * fVar57,fVar13 - fVar46 * fVar81 * fVar55);
  }
  return;
}


