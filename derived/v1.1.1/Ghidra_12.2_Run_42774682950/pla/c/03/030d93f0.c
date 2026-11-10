/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d93f0; name: FUN_030d93f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d93f0(long param_1,long param_2,long param_3,long param_4,float *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar30 [12];
  ulong uVar29;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  int iVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  int iVar57;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar55;
  float fVar56;
  float fVar58;
  int iVar59;
  undefined1 auVar54 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar64 [16];
  float fVar75;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  float fVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar84;
  undefined8 uVar85;
  float fVar92;
  float fVar93;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar94;
  float fVar99;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar102;
  undefined1 auVar103 [16];
  float fVar104;
  float fVar106;
  undefined8 uVar105;
  undefined8 uVar107;
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  auVar17 = NEON_fmov(0xbf800000,4);
  fVar13 = *(float *)(param_1 + 0xc0) + auVar17._0_4_;
  fVar15 = *(float *)(param_1 + 0xc4) + auVar17._4_4_;
  fVar16 = *(float *)(param_1 + 200) + auVar17._8_4_;
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_3 + 0x1c);
  fVar6 = *(float *)(param_4 + 0x10);
  fVar7 = *(float *)(param_4 + 0x14);
  fVar8 = *(float *)(param_4 + 0x18);
  fVar9 = *(float *)(param_4 + 0x1c);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x38) * *(float *)(param_2 + 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * *(float *)(param_2 + 0x20);
  auVar101._0_4_ = (fVar2 + *(float *)(param_3 + 0x40) * fVar13) * fVar11;
  auVar101._4_4_ = (fVar3 + *(float *)(param_3 + 0x44) * fVar15) * fVar12;
  auVar101._8_4_ = (fVar4 + *(float *)(param_3 + 0x48) * fVar16) * fVar11;
  auVar44._0_4_ = (fVar6 + fVar13 * *(float *)(param_4 + 0x40)) * fVar11;
  auVar44._4_4_ = (fVar7 + fVar15 * *(float *)(param_4 + 0x44)) * fVar12;
  auVar44._8_4_ = (fVar8 + fVar16 * *(float *)(param_4 + 0x48)) * fVar11;
  auVar101._12_4_ = 0x40000000;
  auVar44._12_4_ = 0x40000000;
  auVar45._0_4_ = -*(float *)(param_2 + 0x50);
  auVar45._4_4_ = -*(float *)(param_2 + 0x54);
  auVar45._8_4_ = -*(float *)(param_2 + 0x58);
  auVar45._12_4_ = *(undefined4 *)(param_2 + 0x5c);
  auVar17._8_8_ = _UNK_038890f8;
  auVar17._0_8_ = _DAT_038890f0;
  auVar14._8_8_ = _UNK_03888e28;
  auVar14._0_8_ = _DAT_03888e20;
  auVar64 = a64_TBL(ZEXT816(0),auVar45,auVar17);
  auVar78 = a64_TBL(ZEXT816(0),auVar45,auVar14);
  auVar22._8_8_ = _UNK_03888d78;
  auVar22._0_8_ = _DAT_03888d70;
  auVar50._8_8_ = _UNK_03889108;
  auVar50._0_8_ = _DAT_03889100;
  auVar86 = a64_TBL(ZEXT816(0),auVar101,auVar22);
  auVar95 = a64_TBL(ZEXT816(0),auVar101,auVar50);
  auVar87 = a64_TBL(ZEXT816(0),auVar44,auVar22);
  auVar45 = a64_TBL(ZEXT816(0),auVar44,auVar50);
  auVar100._0_4_ = auVar78._0_4_ * auVar95._0_4_ - auVar64._0_4_ * auVar86._0_4_;
  auVar100._4_4_ = auVar78._4_4_ * auVar95._4_4_ - auVar64._4_4_ * auVar86._4_4_;
  auVar100._8_4_ = auVar78._8_4_ * auVar95._8_4_ - auVar64._8_4_ * auVar86._8_4_;
  auVar100._12_4_ = auVar78._12_4_ * auVar95._12_4_ - auVar64._12_4_ * auVar86._12_4_;
  auVar52._8_8_ = _UNK_038895d8;
  auVar52._0_8_ = _DAT_038895d0;
  auVar101 = a64_TBL(ZEXT816(0),auVar100,auVar52);
  fVar75 = auVar101._12_4_ - (auVar78._12_4_ * auVar86._12_4_ + auVar64._12_4_ * auVar95._12_4_);
  fVar60 = -(auVar101._0_4_ - (auVar78._0_4_ * auVar86._0_4_ + auVar64._0_4_ * auVar95._0_4_));
  fVar67 = -(auVar101._4_4_ - (auVar78._4_4_ * auVar86._4_4_ + auVar64._4_4_ * auVar95._4_4_));
  fVar71 = -(auVar101._8_4_ - (auVar78._8_4_ * auVar86._8_4_ + auVar64._8_4_ * auVar95._8_4_));
  auVar53._0_4_ = -*(float *)(param_2 + 0x60);
  auVar53._4_4_ = -*(float *)(param_2 + 100);
  auVar53._8_4_ = -*(float *)(param_2 + 0x68);
  auVar53._12_4_ = *(undefined4 *)(param_2 + 0x6c);
  auVar78 = a64_TBL(ZEXT816(0),auVar53,auVar17);
  auVar64 = a64_TBL(ZEXT816(0),auVar53,auVar14);
  auVar96._0_4_ = auVar64._0_4_ * auVar45._0_4_ - auVar78._0_4_ * auVar87._0_4_;
  auVar96._4_4_ = auVar64._4_4_ * auVar45._4_4_ - auVar78._4_4_ * auVar87._4_4_;
  auVar96._8_4_ = auVar64._8_4_ * auVar45._8_4_ - auVar78._8_4_ * auVar87._8_4_;
  auVar96._12_4_ = auVar64._12_4_ * auVar45._12_4_ - auVar78._12_4_ * auVar87._12_4_;
  auVar86 = a64_TBL(ZEXT816(0),auVar96,auVar52);
  fVar16 = auVar86._12_4_ - (auVar64._12_4_ * auVar87._12_4_ + auVar78._12_4_ * auVar45._12_4_);
  fVar12 = -(auVar86._0_4_ - (auVar64._0_4_ * auVar87._0_4_ + auVar78._0_4_ * auVar45._0_4_));
  fVar13 = -(auVar86._4_4_ - (auVar64._4_4_ * auVar87._4_4_ + auVar78._4_4_ * auVar45._4_4_));
  fVar15 = -(auVar86._8_4_ - (auVar64._8_4_ * auVar87._8_4_ + auVar78._8_4_ * auVar45._8_4_));
  auVar46._0_4_ = fVar60 * fVar60;
  auVar46._4_4_ = fVar67 * fVar67;
  auVar46._8_4_ = fVar71 * fVar71;
  auVar46._12_4_ = fVar75 * fVar75;
  auVar64 = NEON_ext(auVar46,auVar46,8,1);
  fVar11 = auVar64._0_4_ + auVar64._4_4_;
  uVar43 = CONCAT44(auVar46._0_4_ + auVar46._4_4_ + fVar11,auVar46._0_4_ + auVar46._4_4_ + fVar11);
  uVar77 = NEON_frsqrte(uVar43,4);
  fVar11 = (float)uVar77;
  fVar83 = (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(uVar43,CONCAT44(fVar83 * fVar83,fVar11 * fVar11),4);
  fVar11 = fVar11 * (float)uVar77;
  fVar83 = fVar83 * (float)((ulong)uVar77 >> 0x20);
  uVar43 = NEON_frsqrts(uVar43,CONCAT44(fVar83 * fVar83,fVar11 * fVar11),4);
  fVar11 = (float)uVar43 * fVar11;
  fVar83 = (float)((ulong)uVar43 >> 0x20) * fVar83;
  auVar47._0_4_ = fVar60 * fVar11;
  auVar47._4_4_ = fVar67 * fVar83;
  auVar47._8_4_ = fVar71 * fVar11;
  auVar47._12_4_ = fVar75 * fVar83;
  auVar65._0_4_ = fVar12 * fVar12;
  auVar65._4_4_ = fVar13 * fVar13;
  auVar65._8_4_ = fVar15 * fVar15;
  auVar65._12_4_ = fVar16 * fVar16;
  auVar64 = NEON_ext(auVar65,auVar65,8,1);
  fVar11 = auVar64._0_4_ + auVar64._4_4_;
  uVar43 = CONCAT44(auVar65._0_4_ + auVar65._4_4_ + fVar11,auVar65._0_4_ + auVar65._4_4_ + fVar11);
  uVar77 = NEON_frsqrte(uVar43,4);
  fVar11 = (float)uVar77;
  fVar83 = (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(uVar43,CONCAT44(fVar83 * fVar83,fVar11 * fVar11),4);
  fVar11 = fVar11 * (float)uVar77;
  fVar83 = fVar83 * (float)((ulong)uVar77 >> 0x20);
  uVar43 = NEON_frsqrts(uVar43,CONCAT44(fVar83 * fVar83,fVar11 * fVar11),4);
  fVar11 = (float)uVar43 * fVar11;
  fVar83 = (float)((ulong)uVar43 >> 0x20) * fVar83;
  auVar31._0_4_ = fVar12 * fVar11;
  auVar31._4_4_ = fVar13 * fVar83;
  auVar31._8_4_ = fVar15 * fVar11;
  auVar31._12_4_ = fVar16 * fVar83;
  auVar66._0_4_ = -*(float *)(param_2 + 0x30);
  auVar66._4_4_ = -*(float *)(param_2 + 0x34);
  auVar66._8_4_ = -*(float *)(param_2 + 0x38);
  auVar66._12_4_ = *(undefined4 *)(param_2 + 0x3c);
  auVar78 = a64_TBL(ZEXT816(0),auVar47,auVar17);
  auVar64 = a64_TBL(ZEXT816(0),auVar47,auVar14);
  auVar17 = a64_TBL(ZEXT816(0),auVar31,auVar17);
  auVar14 = a64_TBL(ZEXT816(0),auVar31,auVar14);
  auVar86 = a64_TBL(ZEXT816(0),auVar66,auVar22);
  auVar45 = a64_TBL(ZEXT816(0),auVar66,auVar50);
  auVar97._0_4_ = auVar64._0_4_ * auVar45._0_4_ - auVar78._0_4_ * auVar86._0_4_;
  auVar97._4_4_ = auVar64._4_4_ * auVar45._4_4_ - auVar78._4_4_ * auVar86._4_4_;
  auVar97._8_4_ = auVar64._8_4_ * auVar45._8_4_ - auVar78._8_4_ * auVar86._8_4_;
  auVar97._12_4_ = auVar64._12_4_ * auVar45._12_4_ - auVar78._12_4_ * auVar86._12_4_;
  auVar87 = a64_TBL(ZEXT816(0),auVar97,auVar52);
  fStack_34 = auVar87._12_4_ - (auVar64._12_4_ * auVar86._12_4_ + auVar78._12_4_ * auVar45._12_4_);
  local_40 = -(auVar87._0_4_ - (auVar64._0_4_ * auVar86._0_4_ + auVar78._0_4_ * auVar45._0_4_));
  fStack_3c = -(auVar87._4_4_ - (auVar64._4_4_ * auVar86._4_4_ + auVar78._4_4_ * auVar45._4_4_));
  fStack_38 = -(auVar87._8_4_ - (auVar64._8_4_ * auVar86._8_4_ + auVar78._8_4_ * auVar45._8_4_));
  auVar48._0_4_ = -*(float *)(param_2 + 0x40);
  auVar48._4_4_ = -*(float *)(param_2 + 0x44);
  auVar48._8_4_ = -*(float *)(param_2 + 0x48);
  auVar48._12_4_ = *(undefined4 *)(param_2 + 0x4c);
  auVar45 = a64_TBL(ZEXT816(0),auVar48,auVar22);
  auVar22 = a64_TBL(ZEXT816(0),auVar48,auVar50);
  auVar32._0_4_ = auVar14._0_4_ * auVar22._0_4_ - auVar17._0_4_ * auVar45._0_4_;
  auVar32._4_4_ = auVar14._4_4_ * auVar22._4_4_ - auVar17._4_4_ * auVar45._4_4_;
  auVar32._8_4_ = auVar14._8_4_ * auVar22._8_4_ - auVar17._8_4_ * auVar45._8_4_;
  auVar32._12_4_ = auVar14._12_4_ * auVar22._12_4_ - auVar17._12_4_ * auVar45._12_4_;
  auVar78 = a64_TBL(ZEXT816(0),auVar32,auVar52);
  auVar64._12_4_ =
       auVar78._12_4_ - (auVar14._12_4_ * auVar45._12_4_ + auVar17._12_4_ * auVar22._12_4_);
  auVar64._0_8_ =
       CONCAT44(-(auVar78._4_4_ - (auVar14._4_4_ * auVar45._4_4_ + auVar17._4_4_ * auVar22._4_4_)),
                -(auVar78._0_4_ - (auVar14._0_4_ * auVar45._0_4_ + auVar17._0_4_ * auVar22._0_4_)));
  auVar64._8_4_ = -(auVar78._8_4_ - (auVar14._8_4_ * auVar45._8_4_ + auVar17._8_4_ * auVar22._8_4_))
  ;
  uStack_48 = auVar64._8_8_;
  local_50 = auVar64._0_8_;
  FUN_032c9fc0(&local_80,&local_40);
  FUN_032c9fc0(&local_b0,&local_50);
  fVar13 = local_60._0_4_;
  auVar33._0_4_ = fVar13 * local_b0;
  fVar15 = local_60._4_4_;
  auVar33._4_4_ = fVar15 * fStack_ac;
  fVar16 = local_60._8_4_;
  auVar33._8_4_ = fVar16 * fStack_a8;
  fVar83 = local_60._12_4_;
  auVar33._12_4_ = fVar83 * fStack_a4;
  auVar25._0_4_ = local_80 * local_b0;
  auVar25._4_4_ = fStack_7c * fStack_ac;
  auVar25._8_4_ = fStack_78 * fStack_a8;
  auVar25._12_4_ = fStack_74 * fStack_a4;
  fVar60 = auStack_70._0_4_;
  auVar86._0_4_ = fVar60 * local_b0;
  fVar67 = auStack_70._4_4_;
  auVar86._4_4_ = fVar67 * fStack_ac;
  fVar71 = auStack_70._8_4_;
  auVar86._8_4_ = fVar71 * fStack_a8;
  fVar75 = auStack_70._12_4_;
  auVar86._12_4_ = fVar75 * fStack_a4;
  auVar64 = NEON_ext(auVar25,auVar25,8,1);
  auVar14 = NEON_ext(auVar33,auVar33,8,1);
  auVar45 = NEON_ext(auVar86,auVar86,8,1);
  auVar34._0_4_ = local_80 * local_a0;
  auVar34._4_4_ = fStack_7c * fStack_9c;
  auVar34._8_4_ = fStack_78 * fStack_98;
  auVar34._12_4_ = fStack_74 * fStack_94;
  auVar49._0_4_ = fVar13 * local_a0;
  auVar49._4_4_ = fVar15 * fStack_9c;
  auVar49._8_4_ = fVar16 * fStack_98;
  auVar49._12_4_ = fVar83 * fStack_94;
  auVar87._0_4_ = fVar60 * local_a0;
  auVar87._4_4_ = fVar67 * fStack_9c;
  auVar87._8_4_ = fVar71 * fStack_98;
  auVar87._12_4_ = fVar75 * fStack_94;
  auVar22 = NEON_ext(auVar34,auVar34,8,1);
  auVar50 = NEON_ext(auVar49,auVar49,8,1);
  auVar101 = NEON_ext(auVar87,auVar87,8,1);
  auVar78._0_4_ = local_80 * local_90;
  auVar78._4_4_ = fStack_7c * fStack_8c;
  auVar78._8_4_ = fStack_78 * fStack_88;
  auVar78._12_4_ = fStack_74 * fStack_84;
  auVar51._0_4_ = fVar13 * local_90;
  auVar51._4_4_ = fVar15 * fStack_8c;
  auVar51._8_4_ = fVar16 * fStack_88;
  auVar51._12_4_ = fVar83 * fStack_84;
  auVar95._0_4_ = fVar60 * local_90;
  auVar95._4_4_ = fVar67 * fStack_8c;
  auVar95._8_4_ = fVar71 * fStack_88;
  auVar95._12_4_ = fVar75 * fStack_84;
  auVar17 = NEON_ext(auVar78,auVar78,8,1);
  auVar52 = NEON_ext(auVar51,auVar51,8,1);
  auVar53 = NEON_ext(auVar95,auVar95,8,1);
  fVar11 = (float)_DAT_03889420;
  fVar24 = (auVar64._0_4_ + auVar25._0_4_ + auVar25._4_4_) * fVar11;
  fVar12 = (float)((ulong)_DAT_03889420 >> 0x20);
  fVar38 = (float)_UNK_03889428;
  fVar39 = (float)((ulong)_UNK_03889428 >> 0x20);
  fVar27 = (auVar22._0_4_ + auVar34._0_4_ + auVar34._4_4_) * fVar11;
  fVar11 = (auVar17._0_4_ + auVar78._0_4_ + auVar78._4_4_) * fVar11;
  fVar41 = (float)_DAT_03889930;
  fVar42 = (float)((ulong)_DAT_03889930 >> 0x20);
  fVar56 = (float)_UNK_03889938;
  fVar58 = (float)((ulong)_UNK_03889938 >> 0x20);
  auVar17 = NEON_fmov(0x3f800000,4);
  auVar35._0_4_ = ((fVar24 + fVar24) * fVar41 + auVar17._0_4_) * 0.5;
  auVar35._4_4_ =
       (((auVar14._0_4_ + auVar33._0_4_ + auVar33._4_4_) * fVar12 + fVar24) * fVar42 + auVar17._4_4_
       ) * 0.5;
  auVar35._8_4_ =
       (((auVar45._0_4_ + auVar86._0_4_ + auVar86._4_4_) * fVar38 + fVar24) * fVar56 + auVar17._8_4_
       ) * 0.5;
  auVar35._12_4_ =
       (((auVar45._4_4_ + auVar86._4_4_ + auVar45._4_4_) * fVar39 + fVar24) * fVar58 +
       auVar17._12_4_) * 0.5;
  auVar64 = NEON_frsqrte(auVar35,4);
  iVar40 = -(uint)(auVar35._0_4_ <= 0.0);
  iVar55 = -(uint)(auVar35._4_4_ <= 0.0);
  iVar57 = -(uint)(auVar35._8_4_ <= 0.0);
  iVar59 = -(uint)(auVar35._12_4_ <= 0.0);
  fVar24 = auVar64._0_4_;
  auVar79._0_4_ = fVar24 * fVar24;
  fVar68 = auVar64._4_4_;
  auVar79._4_4_ = fVar68 * fVar68;
  fVar72 = auVar64._8_4_;
  auVar79._8_4_ = fVar72 * fVar72;
  fVar76 = auVar64._12_4_;
  auVar79._12_4_ = fVar76 * fVar76;
  auVar64 = NEON_frsqrts(auVar35,auVar79,4);
  fVar24 = fVar24 * auVar64._0_4_;
  fVar68 = fVar68 * auVar64._4_4_;
  fVar72 = fVar72 * auVar64._8_4_;
  fVar76 = fVar76 * auVar64._12_4_;
  auVar80._0_4_ = fVar24 * fVar24;
  auVar80._4_4_ = fVar68 * fVar68;
  auVar80._8_4_ = fVar72 * fVar72;
  auVar80._12_4_ = fVar76 * fVar76;
  auVar64 = NEON_frsqrts(auVar35,auVar80,4);
  fVar24 = auVar64._0_4_ * fVar24;
  fVar68 = auVar64._4_4_ * fVar68;
  fVar72 = auVar64._8_4_ * fVar72;
  fVar76 = auVar64._12_4_ * fVar76;
  fVar28 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                           CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                    CONCAT11((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                             SUB41(fVar24,0) & ~(byte)iVar40)));
  auVar30._0_8_ =
       CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                CONCAT16((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                         CONCAT15((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                  CONCAT14(SUB41(fVar68,0) & ~(byte)iVar55,fVar28))));
  auVar30[8] = SUB41(fVar72,0) & ~(byte)iVar57;
  auVar30[9] = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar57 >> 8);
  auVar30[10] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
  auVar30[0xb] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
  auVar36[0xc] = SUB41(fVar76,0) & ~(byte)iVar59;
  auVar36._0_12_ = auVar30;
  auVar36[0xd] = (byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar59 >> 8);
  auVar36[0xe] = (byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
  auVar36[0xf] = (byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
  fVar24 = (fVar27 + fVar27) * fVar41 * fVar28;
  fVar76 = (float)((ulong)auVar30._0_8_ >> 0x20);
  fVar68 = ((auVar50._0_4_ + auVar49._0_4_ + auVar49._4_4_) * fVar12 + fVar27) * fVar42 * fVar76;
  fVar72 = ((auVar101._0_4_ + auVar87._0_4_ + auVar87._4_4_) * fVar38 + fVar27) * fVar56 *
           auVar30._8_4_;
  fVar27 = ((auVar101._4_4_ + auVar87._4_4_ + auVar101._4_4_) * fVar39 + fVar27) * fVar58 *
           auVar36._12_4_;
  fVar28 = (fVar11 + fVar11) * fVar41 * fVar28;
  fVar76 = ((auVar52._0_4_ + auVar51._0_4_ + auVar51._4_4_) * fVar12 + fVar11) * fVar42 * fVar76;
  fVar38 = ((auVar53._0_4_ + auVar95._0_4_ + auVar95._4_4_) * fVar38 + fVar11) * fVar56 *
           auVar30._8_4_;
  fVar39 = ((auVar53._4_4_ + auVar95._4_4_ + auVar53._4_4_) * fVar39 + fVar11) * fVar58 *
           auVar36._12_4_;
  fVar11 = 0.0;
  fVar12 = 0.0;
  if (*(char *)(param_2 + 4) == '\0') {
LAB_030d988c:
    bVar10 = false;
    fVar39 = 0.0;
    fVar27 = 0.0;
    cVar1 = *(char *)(param_2 + 5);
  }
  else {
    fVar61 = *(float *)(param_2 + 0x10);
    fVar41 = *(float *)(param_2 + 0x14);
    fVar42 = fVar24 * fVar41;
    fVar56 = fVar68 * fVar41;
    fVar58 = fVar72 * fVar41;
    fVar41 = fVar27 * fVar41;
    fVar62 = fVar28 * fVar61;
    fVar69 = fVar76 * fVar61;
    fVar73 = fVar38 * fVar61;
    fVar61 = fVar39 * fVar61;
    auVar81._0_4_ = fVar62 * fVar62 + fVar42 * fVar42;
    auVar81._4_4_ = fVar69 * fVar69 + fVar56 * fVar56;
    auVar81._8_4_ = fVar73 * fVar73 + fVar58 * fVar58;
    auVar81._12_4_ = fVar61 * fVar61 + fVar41 * fVar41;
    if (auVar81._0_4_ <= 1.0) goto LAB_030d988c;
    auVar64 = NEON_frsqrte(auVar81,4);
    fVar11 = auVar64._0_4_;
    auVar88._0_4_ = fVar11 * fVar11;
    fVar12 = auVar64._4_4_;
    auVar88._4_4_ = fVar12 * fVar12;
    fVar19 = auVar64._8_4_;
    auVar88._8_4_ = fVar19 * fVar19;
    fVar20 = auVar64._12_4_;
    auVar88._12_4_ = fVar20 * fVar20;
    auVar54._0_4_ = fVar28 * fVar62 + fVar24 * fVar42;
    auVar54._4_4_ = fVar76 * fVar69 + fVar68 * fVar56;
    auVar54._8_4_ = fVar38 * fVar73 + fVar72 * fVar58;
    auVar54._12_4_ = fVar39 * fVar61 + fVar27 * fVar41;
    auVar64 = NEON_frsqrts(auVar81,auVar88,4);
    iVar40 = -(uint)(auVar54._0_4_ <= 0.0);
    iVar55 = -(uint)(auVar54._4_4_ <= 0.0);
    iVar57 = -(uint)(auVar54._8_4_ <= 0.0);
    iVar59 = -(uint)(auVar54._12_4_ <= 0.0);
    fVar11 = fVar11 * auVar64._0_4_;
    fVar12 = fVar12 * auVar64._4_4_;
    fVar19 = fVar19 * auVar64._8_4_;
    fVar20 = fVar20 * auVar64._12_4_;
    auVar89._0_4_ = fVar11 * fVar11;
    auVar89._4_4_ = fVar12 * fVar12;
    auVar89._8_4_ = fVar19 * fVar19;
    auVar89._12_4_ = fVar20 * fVar20;
    auVar64 = NEON_frsqrts(auVar81,auVar89,4);
    auVar14 = NEON_frsqrte(auVar54,4);
    fVar39 = auVar14._0_4_;
    auVar90._0_4_ = fVar39 * fVar39;
    fVar27 = auVar14._4_4_;
    auVar90._4_4_ = fVar27 * fVar27;
    fVar41 = auVar14._8_4_;
    auVar90._8_4_ = fVar41 * fVar41;
    fVar42 = auVar14._12_4_;
    auVar90._12_4_ = fVar42 * fVar42;
    auVar14 = NEON_frsqrts(auVar54,auVar90,4);
    fVar39 = fVar39 * auVar14._0_4_;
    fVar27 = fVar27 * auVar14._4_4_;
    fVar41 = fVar41 * auVar14._8_4_;
    fVar42 = fVar42 * auVar14._12_4_;
    auVar91._0_4_ = fVar39 * fVar39;
    auVar91._4_4_ = fVar27 * fVar27;
    auVar91._8_4_ = fVar41 * fVar41;
    auVar91._12_4_ = fVar42 * fVar42;
    auVar14 = NEON_frsqrts(auVar54,auVar91,4);
    fVar39 = auVar54._0_4_ * auVar14._0_4_ * fVar39;
    fVar27 = auVar54._4_4_ * auVar14._4_4_ * fVar27;
    fVar41 = auVar54._8_4_ * auVar14._8_4_ * fVar41;
    fVar42 = auVar54._12_4_ * auVar14._12_4_ * fVar42;
    fVar39 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                             CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                      CONCAT11((byte)((uint)fVar39 >> 8) &
                                               ~(byte)((uint)iVar40 >> 8),
                                               SUB41(fVar39,0) & ~(byte)iVar40)));
    auVar21._0_8_ =
         CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                    CONCAT14(SUB41(fVar27,0) & ~(byte)iVar55,fVar39))));
    auVar21[8] = SUB41(fVar41,0) & ~(byte)iVar57;
    auVar21[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar21[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar21[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar23[0xc] = SUB41(fVar42,0) & ~(byte)iVar59;
    auVar23._0_12_ = auVar21;
    auVar23[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar23[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar23[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    bVar10 = true;
    auVar18._0_4_ = (auVar17._0_4_ - auVar64._0_4_ * fVar11) * fVar39;
    auVar18._4_4_ = (auVar17._4_4_ - auVar64._4_4_ * fVar12) * (float)((ulong)auVar21._0_8_ >> 0x20)
    ;
    auVar18._8_4_ = (auVar17._8_4_ - auVar64._8_4_ * fVar19) * auVar21._8_4_;
    auVar18._12_4_ = (auVar17._12_4_ - auVar64._12_4_ * fVar20) * auVar23._12_4_;
    auVar17 = NEON_ext(auVar18,auVar18,8,1);
    fVar12 = auVar17._0_4_ - auVar18._0_4_;
    fVar39 = (auVar18._4_4_ - auVar18._0_4_) * 100.0;
    fVar27 = (auVar18._4_4_ - auVar18._0_4_) * 100.0;
    fVar11 = fVar12 * 100.0;
    fVar12 = fVar12 * 100.0;
    uVar43 = CONCAT44(fVar27 * fVar27 + fVar12 * fVar12,fVar39 * fVar39 + fVar11 * fVar11);
    uVar77 = NEON_frecpe(uVar43,4);
    uVar85 = NEON_frecps(uVar43,uVar77,4);
    fVar41 = (float)uVar77 * (float)uVar85;
    fVar42 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
    uVar43 = NEON_frecps(uVar43,CONCAT44(fVar42,fVar41),4);
    fVar41 = -(fVar41 * (float)uVar43 * auVar18._0_4_);
    fVar42 = -(fVar42 * (float)((ulong)uVar43 >> 0x20) * auVar18._0_4_);
    fVar39 = fVar39 * fVar41;
    fVar27 = fVar27 * fVar42;
    fVar11 = fVar11 * fVar41;
    fVar12 = fVar12 * fVar42;
    cVar1 = *(char *)(param_2 + 5);
  }
  if (cVar1 != '\0') {
    fVar41 = *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18);
    fVar24 = (fVar24 * fVar24 + fVar28 * fVar28) - fVar41;
    fVar68 = (fVar68 * fVar68 + fVar76 * fVar76) - fVar41;
    fVar41 = (fVar72 * fVar72 + fVar38 * fVar38) - fVar41;
    if (0.0 < fVar24) {
      fVar28 = (fVar68 - fVar24) * 100.0;
      fVar42 = (fVar68 - fVar24) * 100.0;
      fVar38 = (fVar41 - fVar24) * 100.0;
      fVar68 = (fVar41 - fVar24) * 100.0;
      uVar43 = CONCAT44(fVar42 * fVar42 + fVar68 * fVar68,fVar28 * fVar28 + fVar38 * fVar38);
      uVar77 = NEON_frecpe(uVar43,4);
      uVar85 = NEON_frecps(uVar43,uVar77,4);
      fVar72 = (float)uVar77 * (float)uVar85;
      fVar41 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
      uVar43 = NEON_frecps(uVar43,CONCAT44(fVar41,fVar72),4);
      fVar72 = fVar24 * fVar72 * (float)uVar43;
      fVar24 = fVar24 * fVar41 * (float)((ulong)uVar43 >> 0x20);
      fVar39 = fVar39 - fVar28 * fVar72;
      fVar27 = fVar27 - fVar42 * fVar24;
      fVar11 = fVar11 - fVar38 * fVar72;
      fVar12 = fVar12 - fVar68 * fVar24;
      goto LAB_030d991c;
    }
  }
  if (!bVar10) {
    return;
  }
LAB_030d991c:
  auVar37._0_4_ = -fVar60;
  auVar37._4_4_ = -fVar67;
  auVar37._8_4_ = -fVar71;
  auVar37._12_4_ = -fVar75;
  auVar22 = NEON_ext(auVar37,auVar37,4,1);
  auVar14 = NEON_ext(auStack_70,auStack_70,4,1);
  auVar64 = *(undefined1 (*) [16])(param_2 + 0x50);
  auVar17 = *(undefined1 (*) [16])(param_2 + 0x60);
  fVar69 = auVar17._0_4_;
  fVar73 = auVar17._4_4_;
  fVar63 = auVar17._8_4_;
  fVar70 = auVar17._12_4_;
  auVar78 = NEON_ext(auVar17,auVar17,8,1);
  auVar45 = NEON_ext(auVar64,auVar64,8,1);
  uVar77 = NEON_ext(auVar17._0_8_,auVar78._0_8_,4,1);
  uVar43 = NEON_ext(auVar64._0_8_,auVar45._0_8_,4,1);
  auVar17 = NEON_ext(local_60,local_60,4,1);
  fVar62 = auVar45._4_4_ * auVar45._4_4_;
  fVar56 = auVar64._0_4_;
  fVar58 = auVar64._4_4_;
  fVar19 = auVar64._8_4_;
  fVar74 = auVar64._12_4_;
  fVar110 = auVar78._4_4_ * auVar78._4_4_;
  fVar38 = (float)((ulong)uVar43 >> 0x20);
  auVar98._0_4_ = -fVar13;
  auVar98._4_4_ = -fVar15;
  auVar98._8_4_ = -fVar16;
  auVar98._12_4_ = -fVar83;
  auVar64 = NEON_ext(auVar98,auVar98,4,1);
  auVar26._0_4_ = fVar56 * auVar14._0_4_ - fVar60 * (float)uVar43;
  auVar26._4_4_ = fVar58 * auVar14._4_4_ - fVar67 * fVar38;
  auVar26._8_4_ = fVar19 * fVar60 - fVar71 * fVar56;
  auVar26._12_4_ = fVar74 * fVar67 - fVar75 * fVar58;
  fVar24 = (float)((ulong)uVar77 >> 0x20);
  auVar103._0_4_ = fVar69 * auVar22._0_4_ + (float)uVar77 * fVar60;
  auVar103._4_4_ = fVar73 * auVar22._4_4_ + fVar24 * fVar67;
  auVar103._8_4_ = fVar63 * auVar37._0_4_ + fVar69 * fVar71;
  auVar103._12_4_ = fVar70 * auVar37._4_4_ + fVar73 * fVar75;
  fVar61 = fVar62 + -0.5;
  fVar62 = fVar62 + -0.5;
  fVar109 = fVar110 + -0.5;
  fVar110 = fVar110 + -0.5;
  auVar82._0_4_ = fVar56 * auVar17._0_4_ - (float)uVar43 * fVar13;
  auVar82._4_4_ = fVar58 * auVar17._4_4_ - fVar38 * fVar15;
  auVar82._8_4_ = fVar19 * fVar13 - fVar56 * fVar16;
  auVar82._12_4_ = fVar74 * fVar15 - fVar58 * fVar83;
  fVar84 = fVar56 * fVar60 + fVar58 * fVar67 + fVar19 * fVar71;
  fVar92 = fVar56 * fVar60 + fVar58 * fVar67 + fVar19 * fVar71;
  auVar108._0_4_ = fVar69 * auVar64._0_4_ + (float)uVar77 * fVar13;
  auVar108._4_4_ = fVar73 * auVar64._4_4_ + fVar24 * fVar15;
  auVar108._8_4_ = fVar63 * auVar98._0_4_ + fVar69 * fVar16;
  auVar108._12_4_ = fVar70 * auVar98._4_4_ + fVar73 * fVar83;
  fVar38 = fVar69 * auVar37._0_4_ + fVar73 * auVar37._4_4_ + fVar63 * auVar37._8_4_;
  fVar24 = fVar69 * auVar37._0_4_ + fVar73 * auVar37._4_4_ + fVar63 * auVar37._8_4_;
  auVar45 = NEON_ext(auVar26,auVar26,4,1);
  auVar17 = NEON_ext(auVar103,auVar103,4,1);
  auVar14 = NEON_ext(auVar82,auVar82,4,1);
  auVar64 = NEON_ext(auVar108,auVar108,4,1);
  fVar104 = fVar56 * fVar13 + fVar58 * fVar15 + fVar19 * fVar16;
  fVar106 = fVar56 * fVar13 + fVar58 * fVar15 + fVar19 * fVar16;
  fVar94 = fVar69 * auVar98._0_4_ + fVar73 * auVar98._4_4_ + fVar63 * auVar98._8_4_;
  fVar99 = fVar69 * auVar98._0_4_ + fVar73 * auVar98._4_4_ + fVar63 * auVar98._8_4_;
  fVar41 = (fVar69 * fVar38 - fVar109 * fVar60) + auVar17._0_4_ * fVar70;
  fVar28 = (fVar73 * fVar24 - fVar110 * fVar67) + auVar17._4_4_ * fVar70;
  fVar42 = (fVar63 * fVar38 - fVar109 * fVar71) + auVar103._0_4_ * fVar70;
  fVar76 = (fVar70 * fVar24 - fVar110 * fVar75) + auVar103._4_4_ * fVar70;
  fVar38 = *(float *)(param_3 + 0x20);
  fVar24 = *(float *)(param_3 + 0x24);
  fVar68 = *(float *)(param_3 + 0x28);
  fVar72 = *(float *)(param_3 + 0x2c);
  fVar41 = fVar41 + fVar41;
  fVar28 = fVar28 + fVar28;
  fVar42 = fVar42 + fVar42;
  fVar102 = *(float *)(param_2 + 0x1c);
  fVar20 = fVar60 * fVar61 + fVar56 * fVar84 + auVar45._0_4_ * fVar74;
  fVar93 = fVar67 * fVar62 + fVar58 * fVar92 + auVar45._4_4_ * fVar74;
  fVar84 = fVar71 * fVar61 + fVar19 * fVar84 + auVar26._0_4_ * fVar74;
  fVar92 = fVar75 * fVar62 + fVar74 * fVar92 + auVar26._4_4_ * fVar74;
  fVar56 = fVar61 * fVar13 + fVar56 * fVar104 + auVar14._0_4_ * fVar74;
  fVar58 = fVar62 * fVar15 + fVar58 * fVar106 + auVar14._4_4_ * fVar74;
  fVar61 = fVar61 * fVar16 + fVar19 * fVar104 + auVar82._0_4_ * fVar74;
  fVar19 = fVar62 * fVar83 + fVar74 * fVar106 + auVar82._4_4_ * fVar74;
  fVar20 = fVar20 + fVar20;
  fVar93 = fVar93 + fVar93;
  fVar84 = fVar84 + fVar84;
  fVar60 = *(float *)(param_4 + 0x20);
  fVar67 = *(float *)(param_4 + 0x24);
  fVar71 = *(float *)(param_4 + 0x28);
  fVar13 = (fVar69 * fVar94 - fVar109 * fVar13) + auVar64._0_4_ * fVar70;
  fVar15 = (fVar73 * fVar99 - fVar110 * fVar15) + auVar64._4_4_ * fVar70;
  fVar16 = (fVar63 * fVar94 - fVar109 * fVar16) + auVar108._0_4_ * fVar70;
  fVar83 = (fVar70 * fVar99 - fVar110 * fVar83) + auVar108._4_4_ * fVar70;
  fVar56 = fVar56 + fVar56;
  fVar58 = fVar58 + fVar58;
  fVar61 = fVar61 + fVar61;
  fVar13 = fVar13 + fVar13;
  fVar15 = fVar15 + fVar15;
  fVar16 = fVar16 + fVar16;
  fVar75 = fVar38 * fVar20 * fVar20 + fVar60 * fVar41 * fVar41;
  fVar69 = fVar24 * fVar93 * fVar93 + fVar67 * fVar28 * fVar28;
  fVar73 = fVar68 * fVar84 * fVar84 + fVar71 * fVar42 * fVar42;
  fVar63 = fVar38 * fVar56 * fVar56 + fVar60 * fVar13 * fVar13;
  fVar70 = fVar24 * fVar58 * fVar58 + fVar67 * fVar15 * fVar15;
  fVar74 = fVar68 * fVar61 * fVar61 + fVar71 * fVar16 * fVar16;
  fVar62 = fVar75 + fVar69 + fVar73 + 1.1920929e-07;
  fVar75 = fVar75 + fVar69 + fVar73 + 1.1920929e-07;
  uVar43 = CONCAT44(fVar75,fVar62);
  uVar85 = NEON_frecpe(uVar43,4);
  fVar69 = fVar63 + fVar70 + fVar74 + 1.1920929e-07;
  fVar73 = fVar63 + fVar70 + fVar74 + 1.1920929e-07;
  uVar77 = CONCAT44(fVar73,fVar69);
  uVar107 = NEON_frecps(uVar43,uVar85,4);
  uVar105 = NEON_frecpe(uVar77,4);
  iVar57 = -(uint)(fVar69 == 0.0);
  iVar59 = -(uint)(fVar73 == 0.0);
  fVar69 = (float)uVar85 * (float)uVar107;
  fVar73 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar107 >> 0x20);
  uVar85 = NEON_frecps(uVar77,uVar105,4);
  iVar40 = -(uint)(fVar62 == 0.0);
  iVar55 = -(uint)(fVar75 == 0.0);
  uVar43 = NEON_frecps(uVar43,CONCAT44(fVar73,fVar69),4);
  fVar62 = (float)uVar105 * (float)uVar85;
  fVar63 = (float)((ulong)uVar105 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
  uVar77 = NEON_frecps(uVar77,CONCAT44(fVar63,fVar62),4);
  uVar29 = CONCAT44(fVar73 * (float)((ulong)uVar43 >> 0x20),fVar69 * (float)uVar43) &
           CONCAT17(~(byte)((uint)iVar55 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar55 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar55 >> 8),
                                      CONCAT14(~(byte)iVar55,
                                               CONCAT13(~(byte)((uint)iVar40 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar40 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar40 >> 8)
                                                                          ,~(byte)iVar40)))))));
  fVar75 = -(fVar39 * fVar102 * (float)uVar29);
  fVar39 = -(fVar27 * fVar102 * (float)(uVar29 >> 0x20));
  uVar29 = CONCAT44(fVar63 * (float)((ulong)uVar77 >> 0x20),fVar62 * (float)uVar77) &
           CONCAT17(~(byte)((uint)iVar59 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar59 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar59 >> 8),
                                      CONCAT14(~(byte)iVar59,
                                               CONCAT13(~(byte)((uint)iVar57 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar57 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar57 >> 8)
                                                                          ,~(byte)iVar57)))))));
  fVar11 = fVar11 * fVar102 * (float)uVar29;
  fVar12 = fVar12 * fVar102 * (float)(uVar29 >> 0x20);
  fVar27 = *param_5;
  fVar62 = param_5[1];
  *(float *)(param_4 + 0x18) = fVar8 + fVar42 * fVar71 * fVar75 + fVar16 * fVar71 * fVar11;
  *(float *)(param_4 + 0x1c) =
       fVar9 + (fVar76 + fVar76) * *(float *)(param_4 + 0x2c) * fVar39 +
       (fVar83 + fVar83) * *(float *)(param_4 + 0x2c) * fVar12;
  *(float *)(param_4 + 0x10) = fVar6 + fVar41 * fVar60 * fVar75 + fVar13 * fVar60 * fVar11;
  *(float *)(param_4 + 0x14) = fVar7 + fVar28 * fVar67 * fVar39 + fVar15 * fVar67 * fVar12;
  *param_5 = fVar27 + fVar75;
  param_5[1] = fVar62 + fVar11;
  *(float *)(param_3 + 0x18) = fVar4 + fVar84 * fVar68 * fVar75 + fVar61 * fVar68 * fVar11;
  *(float *)(param_3 + 0x1c) =
       fVar5 + (fVar92 + fVar92) * fVar72 * fVar39 + (fVar19 + fVar19) * fVar72 * fVar12;
  *(float *)(param_3 + 0x10) = fVar2 + fVar20 * fVar38 * fVar75 + fVar56 * fVar38 * fVar11;
  *(float *)(param_3 + 0x14) = fVar3 + fVar93 * fVar24 * fVar39 + fVar58 * fVar24 * fVar12;
  return;
}


