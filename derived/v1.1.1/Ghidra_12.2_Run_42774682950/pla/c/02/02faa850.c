/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02faa850; name: FUN_02faa850
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02faa850(ulong param_1,long param_2,long *param_3,long param_4,undefined1 (*param_5) [16],
                 float *param_6,long param_7,undefined8 *param_8,undefined8 *param_9,
                 undefined1 (*param_10) [16],byte param_11,long param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined *puVar24;
  undefined2 uVar25;
  undefined8 *puVar26;
  uint uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  code *pcVar31;
  float *pfVar32;
  float *pfVar33;
  ulong uVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined1 (*pauVar39) [16];
  float fVar40;
  undefined8 uVar41;
  float fVar51;
  ushort uVar52;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  int iVar74;
  float fVar78;
  int iVar79;
  float fVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar90;
  float fVar91;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar99;
  undefined1 auVar98 [16];
  float fVar100;
  undefined1 auVar101 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined4 uVar106;
  float fVar107;
  undefined1 auVar108 [16];
  float fVar109;
  long *local_c00;
  undefined8 *local_bf8;
  long local_bf0;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 auStack_b50 [4];
  float afStack_b30 [568];
  uint local_250;
  long local_248;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined2 local_230;
  int local_22c;
  long *plStack_220;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined2 local_200;
  int local_1fc;
  int local_1f0;
  int local_1ec;
  ulong local_1e0;
  ulong uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_190;
  float fStack_188;
  undefined4 uStack_184;
  undefined2 local_180;
  undefined6 uStack_17e;
  float fStack_178;
  undefined4 uStack_174;
  long local_170;
  float fStack_168;
  undefined4 uStack_164;
  long local_160;
  float fStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar28 = param_3[5];
  local_1e0 = (ulong)(uint)(float)*(int *)(param_7 + 0x58);
  uStack_1d8 = (ulong)(uint)(float)*(int *)(param_7 + 0x5c);
  uStack_148 = 0;
  local_150 = 0;
  FUN_02fa7314(auStack_b50,param_7,&local_150,&local_1e0);
  puVar24 = PTR_DAT_043723a0;
  auVar101 = *param_10;
  auVar108 = param_10[1];
  auVar81 = NEON_ext(auVar108,auVar108,8,1);
  auVar44 = param_10[2];
  auVar85 = NEON_ext(auVar44,auVar44,8,1);
  auVar75 = NEON_ext(auVar101,auVar101,8,1);
  local_b70 = CONCAT44(auVar81._0_4_,auVar75._0_4_);
  local_b90 = CONCAT44(auVar108._0_4_,auVar101._0_4_);
  uStack_b68 = auVar85._0_8_;
  fVar107 = auVar44._4_4_;
  auVar86._4_12_ = auVar85._4_12_;
  auVar86._0_4_ = fVar107;
  uStack_b88 = auVar44._0_8_;
  uStack_b80 = CONCAT44(auVar108._4_4_,auVar101._4_4_);
  auVar95 = *(undefined1 (*) [16])(param_7 + 0x80);
  auVar68 = *(undefined1 (*) [16])(param_9 + 8);
  uStack_b78 = auVar86._0_8_;
  fVar84 = -*(float *)param_10[3];
  fVar90 = -*(float *)(param_10[3] + 4);
  fVar91 = -*(float *)(param_10[3] + 8);
  auVar21 = *(undefined1 (*) [16])PTR_DAT_043723a0;
  auVar86 = *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x10);
  auVar23 = *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x40);
  auVar22 = *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x50);
  auVar101._0_8_ =
       CONCAT44(auVar81._0_4_ * fVar91 + auVar108._0_4_ * fVar84 + auVar108._4_4_ * fVar90,
                auVar75._0_4_ * fVar91 + auVar101._0_4_ * fVar84 + auVar101._4_4_ * fVar90);
  auVar101._8_4_ = auVar85._0_4_ * fVar91 + auVar44._0_4_ * fVar84 + fVar107 * fVar90;
  auVar101._12_4_ = auVar85._4_4_ * fVar91 + fVar107 * fVar84 + auVar85._4_4_ * fVar90;
  uStack_b58 = auVar101._8_8_;
  if (local_250 == 0) {
    return;
  }
  fVar107 = auVar95._0_4_ * auVar68._0_4_;
  fVar84 = auVar95._4_4_ * auVar68._4_4_;
  fVar90 = auVar95._8_4_ * auVar68._8_4_;
  fVar91 = auVar95._12_4_ * auVar68._12_4_;
  auVar108 = NEON_fmov(0x3f800000,4);
  local_b60 = auVar101._0_8_;
LAB_02faa9c0:
  uVar34 = (ulong)local_250;
  uVar29 = param_9[4];
  do {
    uVar34 = (long)(int)uVar34 - 1;
    fVar66 = afStack_b30[uVar34 * 0xc];
    fVar73 = afStack_b30[uVar34 * 0xc + 1];
    fVar78 = afStack_b30[uVar34 * 0xc + 2];
    if (fVar66 == 0.0) {
      if ((int)fVar73 < local_1f0 && (int)fVar78 < local_1ec) break;
LAB_02faade8:
      local_250 = (uint)uVar34;
    }
    else {
      uVar41 = NEON_fmax(*(undefined8 *)(param_12 + 0x10),0,4);
      fVar109 = (float)uVar41 * (float)uVar41;
      if (fVar109 < afStack_b30[uVar34 * 0xc + 3]) goto LAB_02faade8;
      fVar53 = afStack_b30[uVar34 * 0xc + -7];
      fVar61 = afStack_b30[uVar34 * 0xc + -3];
      auVar98._4_4_ = fVar53;
      auVar98._0_4_ = fVar53;
      auVar98._8_4_ = fVar53;
      auVar98._12_4_ = fVar53;
      fVar53 = fVar61;
      fVar63 = fVar61;
      fVar64 = fVar61;
      if ((int)*(uint *)(local_248 + 0x50) < (int)fVar66) {
        iVar74 = (int)fVar66 + ~*(uint *)(local_248 + 0x50);
        plVar35 = (long *)(local_248 + 0x20);
        lVar38 = *plVar35;
        if ((int)fVar73 <
            (int)(uint)*(ushort *)((long)plVar35 + (long)iVar74 * 0x18 + lVar38 + 0x10)) {
          uVar52 = *(ushort *)((long)plVar35 + (long)iVar74 * 0x18 + lVar38 + 0x12);
          if ((int)fVar78 < (int)(uint)uVar52) {
            plVar35 = (long *)((long)plVar35 + (long)iVar74 * 0x18 + lVar38);
            uVar27 = (int)fVar78 + (int)fVar73 * (uint)uVar52;
            fVar66 = *(float *)(local_248 + 0x40);
            puVar4 = (ushort *)
                     ((long)plVar35 +
                     (-(ulong)((uVar27 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                     (ulong)(uVar27 * 4) << 2) + *plVar35);
            auVar60._2_2_ = 0;
            auVar60._0_2_ = *puVar4;
            auVar60._4_2_ = puVar4[1];
            auVar60._6_2_ = 0;
            auVar60._8_2_ = puVar4[2];
            auVar60._10_2_ = 0;
            auVar60._12_2_ = puVar4[3];
            auVar60._14_2_ = 0;
            auVar49._2_2_ = 0;
            auVar49._0_2_ = puVar4[4];
            auVar49._4_2_ = puVar4[5];
            auVar49._6_2_ = 0;
            auVar49._8_2_ = puVar4[6];
            auVar49._10_2_ = 0;
            auVar49._12_2_ = puVar4[7];
            auVar49._14_2_ = 0;
            auVar44 = NEON_ucvtf(auVar60,4);
            auVar101 = NEON_ucvtf(auVar49,4);
            auVar98._0_4_ = *(float *)(local_248 + 0x30) + auVar44._0_4_ * fVar66;
            auVar98._4_4_ = *(float *)(local_248 + 0x34) + auVar44._4_4_ * fVar66;
            auVar98._8_4_ = *(float *)(local_248 + 0x38) + auVar44._8_4_ * fVar66;
            auVar98._12_4_ = *(float *)(local_248 + 0x3c) + auVar44._12_4_ * fVar66;
            fVar61 = *(float *)(local_248 + 0x30) + auVar101._0_4_ * fVar66;
            fVar53 = *(float *)(local_248 + 0x34) + auVar101._4_4_ * fVar66;
            fVar63 = *(float *)(local_248 + 0x38) + auVar101._8_4_ * fVar66;
            fVar64 = *(float *)(local_248 + 0x3c) + auVar101._12_4_ * fVar66;
          }
        }
        uVar34 = (long)(int)local_250 - 1;
        fVar66 = afStack_b30[uVar34 * 0xc];
        fVar73 = afStack_b30[uVar34 * 0xc + 1];
        fVar78 = afStack_b30[uVar34 * 0xc + 2];
      }
      local_250 = (uint)uVar34;
      fVar100 = auVar98._12_4_;
      fVar99 = auVar98._8_4_;
      fVar65 = auVar98._4_4_;
      auVar101 = *(undefined1 (*) [16])(afStack_b30 + uVar34 * 0xc + -8);
      auVar44 = *(undefined1 (*) [16])(afStack_b30 + uVar34 * 0xc + -4);
      auVar95 = *(undefined1 (*) [16])puVar24;
      auVar68 = *(undefined1 (*) [16])(puVar24 + 0x10);
      uStack_c8 = auVar95._8_8_;
      local_d0 = auVar95._0_8_;
      uStack_b8 = auVar68._8_8_;
      uStack_c0 = auVar68._0_8_;
      fVar102 = (auVar101._0_4_ + auVar44._0_4_) * 0.5;
      fVar103 = (auVar101._4_4_ + auVar44._4_4_) * 0.5;
      fVar104 = (auVar101._8_4_ + auVar44._8_4_) * 0.5;
      fVar105 = (auVar101._12_4_ + auVar44._12_4_) * 0.5;
      auVar75 = *(undefined1 (*) [16])(puVar24 + 0x40);
      auVar81 = *(undefined1 (*) [16])(puVar24 + 0x50);
      _fStack_a8 = auVar81._8_8_;
      _local_b0 = auVar81._0_8_;
      uStack_98 = auVar75._8_8_;
      uStack_a0 = auVar75._0_8_;
      fVar62 = auVar98._0_4_;
      if ((param_1 & 1) == 0) {
        auVar5._4_4_ = fVar103;
        auVar5._0_4_ = fVar102;
        auVar5._8_4_ = fVar104;
        auVar5._12_4_ = fVar105;
        auVar42._4_4_ = fVar103;
        auVar42._0_4_ = fVar102;
        auVar42._8_4_ = fVar104;
        auVar42._12_4_ = fVar105;
        auVar42 = auVar42 ^ (auVar5 ^ auVar44) & auVar95;
        auVar6._4_4_ = fVar103;
        auVar6._0_4_ = fVar102;
        auVar6._8_4_ = fVar104;
        auVar6._12_4_ = fVar105;
        auVar95 = auVar101 ^ (auVar101 ^ auVar6) & auVar95;
        auVar7._4_4_ = fVar103;
        auVar7._0_4_ = fVar102;
        auVar7._8_4_ = fVar104;
        auVar7._12_4_ = fVar105;
        auVar85 = auVar101 ^ (auVar101 ^ auVar7) & auVar68;
        auVar8._4_4_ = fVar103;
        auVar8._0_4_ = fVar102;
        auVar8._8_4_ = fVar104;
        auVar8._12_4_ = fVar105;
        auVar92._4_4_ = fVar103;
        auVar92._0_4_ = fVar102;
        auVar92._8_4_ = fVar104;
        auVar92._12_4_ = fVar105;
        auVar92 = auVar92 ^ (auVar8 ^ auVar44) & auVar68;
        auVar9._4_4_ = fVar103;
        auVar9._0_4_ = fVar102;
        auVar9._8_4_ = fVar104;
        auVar9._12_4_ = fVar105;
        auVar87._4_4_ = fVar103;
        auVar87._0_4_ = fVar102;
        auVar87._8_4_ = fVar104;
        auVar87._12_4_ = fVar105;
        auVar87 = auVar87 ^ (auVar9 ^ auVar44) & auVar81;
        uStack_138 = auVar42._8_8_;
        local_140 = CONCAT44(fVar61,auVar42._0_4_);
        auVar10._4_4_ = fVar103;
        auVar10._0_4_ = fVar102;
        auVar10._8_4_ = fVar104;
        auVar10._12_4_ = fVar105;
        auVar82._4_4_ = fVar103;
        auVar82._0_4_ = fVar102;
        auVar82._8_4_ = fVar104;
        auVar82._12_4_ = fVar105;
        auVar82 = auVar82 ^ (auVar10 ^ auVar44) & auVar75;
        auVar11._4_4_ = fVar103;
        auVar11._0_4_ = fVar102;
        auVar11._8_4_ = fVar104;
        auVar11._12_4_ = fVar105;
        auVar81 = auVar101 ^ (auVar101 ^ auVar11) & auVar81;
        uStack_148 = auVar95._8_8_;
        local_150 = CONCAT44(fVar62,auVar95._0_4_);
        fVar51 = (float)*(undefined8 *)(*param_5 + 8);
        uVar106 = (undefined4)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
        fVar40 = (float)*(undefined8 *)*param_5;
        fVar50 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
        auVar12._4_4_ = fVar103;
        auVar12._0_4_ = fVar102;
        auVar12._8_4_ = fVar104;
        auVar12._12_4_ = fVar105;
        auVar101 = auVar101 ^ (auVar101 ^ auVar12) & auVar75;
        fVar102 = (float)*(undefined8 *)param_6;
        auVar54._0_4_ = fVar107 * auVar42._0_4_ + fVar102;
        fVar103 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
        auVar54._4_4_ = fVar84 * fVar61 + fVar103;
        fVar61 = (float)*(undefined8 *)(param_6 + 2);
        auVar54._8_4_ = fVar90 * auVar42._8_4_ + fVar61;
        fVar104 = (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
        auVar54._12_4_ = fVar91 * auVar42._12_4_ + fVar104;
        auVar67._0_4_ = fVar107 * auVar92._0_4_ + fVar102;
        auVar67._4_4_ = fVar84 * fVar53 + fVar103;
        auVar67._8_4_ = fVar90 * auVar92._8_4_ + fVar61;
        auVar67._12_4_ = fVar91 * auVar92._12_4_ + fVar104;
        auVar76._0_4_ = fVar107 * auVar87._0_4_ + fVar102;
        auVar76._4_4_ = fVar84 * fVar63 + fVar103;
        auVar76._8_4_ = fVar90 * auVar87._8_4_ + fVar61;
        auVar76._12_4_ = fVar91 * auVar87._12_4_ + fVar104;
        uStack_118 = auVar92._8_8_;
        local_120 = CONCAT44(fVar53,auVar92._0_4_);
        auVar43._0_4_ = fVar107 * auVar82._0_4_ + fVar102;
        auVar43._4_4_ = fVar84 * fVar64 + fVar103;
        auVar43._8_4_ = fVar90 * auVar82._8_4_ + fVar61;
        auVar43._12_4_ = fVar91 * auVar82._12_4_ + fVar104;
        uStack_128 = auVar85._8_8_;
        local_130 = CONCAT44(fVar65,auVar85._0_4_);
        auVar97._0_4_ = fVar107 * auVar85._0_4_ - fVar102;
        auVar97._4_4_ = fVar84 * fVar65 - fVar103;
        auVar97._8_4_ = fVar90 * auVar85._8_4_ - fVar61;
        auVar97._12_4_ = fVar91 * auVar85._12_4_ - fVar104;
        auVar14._12_4_ = uVar106;
        auVar14._0_12_ = *(undefined1 (*) [12])*param_5;
        auVar75 = NEON_fmin(auVar76,auVar14,4);
        auVar96._0_4_ = fVar107 * auVar95._0_4_ - fVar102;
        auVar96._4_4_ = fVar84 * fVar62 - fVar103;
        auVar96._8_4_ = fVar90 * auVar95._8_4_ - fVar61;
        auVar96._12_4_ = fVar91 * auVar95._12_4_ - fVar104;
        auVar93._0_4_ = fVar107 * auVar101._0_4_ - fVar102;
        auVar93._4_4_ = fVar84 * fVar100 - fVar103;
        auVar93._8_4_ = fVar90 * auVar101._8_4_ - fVar61;
        auVar93._12_4_ = fVar91 * auVar101._12_4_ - fVar104;
        auVar15._12_4_ = uVar106;
        auVar15._0_12_ = *(undefined1 (*) [12])*param_5;
        auVar95 = NEON_fmin(auVar54,auVar15,4);
        auVar16._12_4_ = uVar106;
        auVar16._0_12_ = *(undefined1 (*) [12])*param_5;
        auVar68 = NEON_fmin(auVar67,auVar16,4);
        auVar17._12_4_ = uVar106;
        auVar17._0_12_ = *(undefined1 (*) [12])*param_5;
        auVar44 = NEON_fmin(auVar43,auVar17,4);
        auVar13._4_4_ = fVar84 * fVar99 - fVar103;
        auVar13._0_4_ = fVar107 * auVar81._0_4_ - fVar102;
        auVar13._8_4_ = fVar90 * auVar81._8_4_ - fVar61;
        auVar13._12_4_ = fVar91 * auVar81._12_4_ - fVar104;
        auVar75 = NEON_fmax(auVar13,auVar75,4);
        auVar95 = NEON_fmax(auVar96,auVar95,4);
        auVar68 = NEON_fmax(auVar97,auVar68,4);
        auVar44 = NEON_fmax(auVar93,auVar44,4);
        fVar104 = auVar75._0_4_ - fVar40;
        fVar105 = auVar75._4_4_ - fVar50;
        fVar80 = auVar75._8_4_ - fVar51;
        fVar53 = auVar95._0_4_ - fVar40;
        fVar61 = auVar95._4_4_ - fVar50;
        fVar62 = auVar95._8_4_ - fVar51;
        fVar65 = auVar68._0_4_ - fVar40;
        fVar102 = auVar68._4_4_ - fVar50;
        fVar103 = auVar68._8_4_ - fVar51;
        fVar40 = auVar44._0_4_ - fVar40;
        fVar50 = auVar44._4_4_ - fVar50;
        fVar51 = auVar44._8_4_ - fVar51;
        fVar104 = fVar104 * fVar104;
        fVar105 = fVar105 * fVar105;
        fVar80 = fVar80 * fVar80;
        fVar53 = fVar53 * fVar53;
        fVar61 = fVar61 * fVar61;
        fVar62 = fVar62 * fVar62;
        fVar65 = fVar65 * fVar65;
        fVar102 = fVar102 * fVar102;
        fVar103 = fVar103 * fVar103;
        fVar40 = fVar40 * fVar40;
        fVar50 = fVar50 * fVar50;
        fVar51 = fVar51 * fVar51;
        fStack_188 = fVar53 + fVar61 + fVar62;
        local_190 = CONCAT44(fVar53 + fVar61 + fVar62,fStack_188);
        fStack_178 = fVar65 + fVar102 + fVar103;
        uStack_108 = auVar81._8_8_;
        local_110 = CONCAT44(fVar99,auVar81._0_4_);
        fStack_168 = fVar104 + fVar105 + fVar80;
        local_170 = CONCAT44(fVar104 + fVar105 + fVar80,fStack_168);
        uStack_f8 = auVar87._8_8_;
        local_100 = CONCAT44(fVar63,auVar87._0_4_);
        fStack_158 = fVar40 + fVar50 + fVar51;
        local_160 = CONCAT44(fVar40 + fVar50 + fVar51,fStack_158);
        uStack_164 = 0x3f000002;
        uStack_d8 = auVar82._8_8_;
        local_e0 = CONCAT44(fVar64,auVar82._0_4_);
        uStack_e8 = auVar101._8_8_;
        local_f0 = CONCAT44(fVar100,auVar101._0_4_);
        local_180 = SUB42(fStack_178,0);
        uStack_17e = (undefined6)(CONCAT44(fVar65 + fVar102 + fVar103,fStack_178) >> 0x10);
        uStack_184 = 0x3f000000;
        uStack_174 = 0x3f000001;
        uStack_154 = 0x3f000003;
      }
      else {
        local_c00 = &local_190;
        local_bf8 = &local_150;
        auVar18._12_4_ = fVar105;
        auVar18._8_4_ = fVar104;
        auVar18._4_4_ = fVar103;
        auVar18._0_4_ = fVar102;
        local_bf0 = 0;
        while( true ) {
          auVar44 = auVar18 ^ (auVar18 ^ auVar44) & auVar95;
          auVar101 = auVar101 ^ (auVar101 ^ auVar18) & auVar95;
          auVar57._8_8_ = auVar101._8_8_;
          local_bf8[1] = auVar57._8_8_;
          *local_bf8 = auVar101._0_8_;
          local_bf8[3] = auVar44._8_8_;
          local_bf8[2] = auVar44._0_8_;
          uVar27 = (uint)local_bf0;
          auVar57._0_4_ = auVar101._0_4_;
          if (uVar27 == 1) {
            auVar57._4_4_ = fVar65;
            fVar102 = fVar53;
          }
          else if (uVar27 == 3) {
            auVar57._4_4_ = fVar100;
            fVar102 = fVar64;
          }
          else if (uVar27 == 2) {
            auVar57._4_4_ = fVar99;
            fVar102 = fVar63;
          }
          else {
            auVar57._4_4_ = fVar62;
            fVar102 = fVar61;
          }
          local_bf8[1] = auVar57._8_8_;
          *local_bf8 = auVar57._0_8_;
          auVar58._0_8_ = CONCAT44(fVar84 * auVar57._4_4_,fVar107 * auVar57._0_4_);
          auVar58._8_4_ = fVar90 * auVar57._8_4_;
          auVar58._12_4_ = fVar91 * auVar57._12_4_;
          local_bf8[3] = auVar44._8_8_;
          local_bf8[2] = CONCAT44(fVar102,auVar44._0_4_);
          auVar46._0_8_ = CONCAT44(fVar84 * fVar102,fVar107 * auVar44._0_4_);
          auVar46._8_4_ = fVar90 * auVar44._8_4_;
          auVar46._12_4_ = fVar91 * auVar44._12_4_;
          uStack_1a8 = auVar58._8_8_;
          uStack_198 = auVar46._8_8_;
          local_1b0 = auVar58._0_8_;
          local_1a0 = auVar46._0_8_;
          FUN_0333e220(uVar29,&local_1b0,&local_1d0);
          auVar47._0_4_ = (float)local_1d0 - *param_6;
          auVar47._4_4_ = local_1d0._4_4_ - param_6[1];
          auVar47._8_4_ = (float)uStack_1c8 - param_6[2];
          auVar47._12_4_ = uStack_1c8._4_4_ - param_6[3];
          auVar59._0_4_ = *param_6 + local_1c0;
          auVar59._4_4_ = param_6[1] + fStack_1bc;
          auVar59._8_4_ = param_6[2] + fStack_1b8;
          auVar59._12_4_ = param_6[3] + fStack_1b4;
          auVar101 = *param_5;
          auVar44 = NEON_fmin(auVar59,auVar101,4);
          auVar44 = NEON_fmax(auVar47,auVar44,4);
          fVar102 = auVar44._0_4_ - auVar101._0_4_;
          fVar103 = auVar44._4_4_ - auVar101._4_4_;
          fVar104 = auVar44._8_4_ - auVar101._8_4_;
          fVar102 = fVar102 * fVar102;
          fVar103 = fVar103 * fVar103;
          fVar104 = fVar104 * fVar104;
          lVar38 = CONCAT44(fVar102 + fVar103 + fVar104,fVar102 + fVar103 + fVar104);
          local_c00[1] = lVar38;
          *local_c00 = lVar38;
          *(uint *)((long)local_c00 + 0xc) = uVar27 | 0x3f000000;
          if (local_bf0 == 3) break;
          local_c00 = local_c00 + 2;
          auVar95 = *(undefined1 (*) [16])(&uStack_c0 + local_bf0 * 2);
          auVar101 = *(undefined1 (*) [16])(afStack_b30 + uVar34 * 0xc + -8);
          auVar44 = *(undefined1 (*) [16])(afStack_b30 + uVar34 * 0xc + -4);
          local_bf0 = local_bf0 + 1;
          local_bf8 = local_bf8 + 4;
        }
      }
      auVar89._8_4_ = fStack_188;
      auVar89._0_8_ = local_190;
      auVar89._12_4_ = uStack_184;
      uVar27 = (int)fVar73 << 1;
      uVar1 = (int)fVar78 << 1;
      auVar19._8_4_ = fStack_168;
      auVar19._0_8_ = local_170;
      auVar19._12_4_ = uStack_164;
      uVar2 = (uint)((float)local_190 < (float)local_170);
      auVar70._8_4_ = fStack_178;
      auVar70._0_8_ = CONCAT62(uStack_17e,local_180);
      auVar70._12_4_ = uStack_174;
      auVar20._8_4_ = fStack_158;
      auVar20._0_8_ = local_160;
      auVar20._12_4_ = uStack_154;
      uVar3 = (uint)((float)CONCAT62(uStack_17e,local_180) < (float)local_160);
      auVar77._0_8_ =
           CONCAT44((int)(uVar2 * -0x80000000) >> 0x1f,(int)(uVar2 * -0x80000000) >> 0x1f);
      auVar77._8_8_ = auVar77._0_8_;
      auVar88._8_8_ = auVar77._0_8_;
      auVar88._0_8_ = auVar77._0_8_;
      auVar68 = auVar19 ^ (auVar19 ^ auVar89) & auVar77;
      auVar89 = auVar89 ^ (auVar89 ^ auVar19) & auVar88;
      auVar55._0_8_ =
           CONCAT44((int)(uVar3 * -0x80000000) >> 0x1f,(int)(uVar3 * -0x80000000) >> 0x1f);
      auVar55._8_8_ = auVar55._0_8_;
      auVar69._8_8_ = auVar55._0_8_;
      auVar69._0_8_ = auVar55._0_8_;
      auVar44 = auVar20 ^ (auVar20 ^ auVar70) & auVar55;
      auVar70 = auVar70 ^ (auVar70 ^ auVar20) & auVar69;
      uVar2 = (uint)(auVar68._0_4_ < auVar44._0_4_);
      uVar3 = (uint)(auVar89._0_4_ < auVar70._0_4_);
      auVar45._0_8_ =
           CONCAT44((int)(uVar2 * -0x80000000) >> 0x1f,(int)(uVar2 * -0x80000000) >> 0x1f);
      auVar45._8_8_ = auVar45._0_8_;
      auVar83._8_8_ = auVar45._0_8_;
      auVar83._0_8_ = auVar45._0_8_;
      auVar101 = auVar44 ^ (auVar44 ^ auVar68) & auVar45;
      auVar68 = auVar68 ^ (auVar68 ^ auVar44) & auVar83;
      fStack_158 = auVar101._8_4_;
      uStack_154 = auVar101._12_4_;
      local_160 = auVar101._0_8_;
      auVar94._0_8_ =
           CONCAT44((int)(uVar3 * -0x80000000) >> 0x1f,(int)(uVar3 * -0x80000000) >> 0x1f);
      auVar94._8_8_ = auVar94._0_8_;
      auVar95 = auVar70 ^ (auVar70 ^ auVar89) & auVar94;
      uVar2 = (uint)(auVar95._0_4_ < auVar68._0_4_);
      auVar89 = auVar89 ^ (auVar89 ^ auVar70) & auVar94;
      fStack_188 = auVar89._8_4_;
      uStack_184 = auVar89._12_4_;
      local_190 = auVar89._0_8_;
      fVar66 = (float)((int)fVar66 + -1);
      auVar56._0_8_ =
           CONCAT44((int)(uVar2 * -0x80000000) >> 0x1f,(int)(uVar2 * -0x80000000) >> 0x1f);
      auVar56._8_8_ = auVar56._0_8_;
      auVar71._8_8_ = auVar56._0_8_;
      auVar71._0_8_ = auVar56._0_8_;
      auVar44 = auVar68 ^ (auVar68 ^ auVar95) & auVar56;
      auVar95 = auVar95 ^ (auVar95 ^ auVar68) & auVar71;
      fStack_168 = auVar44._8_4_;
      uStack_164 = auVar44._12_4_;
      local_170 = auVar44._0_8_;
      fStack_178 = auVar95._8_4_;
      uStack_174 = auVar95._12_4_;
      local_180 = auVar95._0_2_;
      uStack_17e = auVar95._2_6_;
      if (auVar89._0_4_ <= fVar109) {
        uVar52 = auVar89._12_2_;
        lVar38 = (long)(int)local_250;
        local_250 = local_250 + 1;
        afStack_b30[lVar38 * 0xc + 3] = auVar89._0_4_;
        auVar68 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar52 * 4);
        auVar75 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar52 * 4);
        afStack_b30[lVar38 * 0xc] = fVar66;
        afStack_b30[lVar38 * 0xc + 1] = (float)(uVar52 + 1 >> 1 & 1 | uVar27);
        afStack_b30[lVar38 * 0xc + 2] = (float)(uVar52 >> 1 & 1 | uVar1);
        *(long *)(afStack_b30 + lVar38 * 0xc + -6) = auVar68._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -8) = auVar68._0_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -2) = auVar75._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -4) = auVar75._0_8_;
      }
      if (auVar95._0_4_ <= fVar109) {
        uVar52 = auVar95._12_2_;
        lVar38 = (long)(int)local_250;
        local_250 = local_250 + 1;
        afStack_b30[lVar38 * 0xc + 3] = auVar95._0_4_;
        auVar95 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar52 * 4);
        auVar68 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar52 * 4);
        afStack_b30[lVar38 * 0xc] = fVar66;
        afStack_b30[lVar38 * 0xc + 1] = (float)(uVar52 + 1 >> 1 & 1 | uVar27);
        afStack_b30[lVar38 * 0xc + 2] = (float)(uVar52 >> 1 & 1 | uVar1);
        *(long *)(afStack_b30 + lVar38 * 0xc + -6) = auVar95._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -8) = auVar95._0_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -2) = auVar68._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -4) = auVar68._0_8_;
      }
      if (auVar44._0_4_ <= fVar109) {
        uVar52 = auVar44._12_2_;
        lVar38 = (long)(int)local_250;
        local_250 = local_250 + 1;
        afStack_b30[lVar38 * 0xc + 3] = auVar44._0_4_;
        auVar44 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar52 * 4);
        auVar95 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar52 * 4);
        afStack_b30[lVar38 * 0xc] = fVar66;
        afStack_b30[lVar38 * 0xc + 1] = (float)(uVar52 + 1 >> 1 & 1 | uVar27);
        afStack_b30[lVar38 * 0xc + 2] = (float)(uVar52 >> 1 & 1 | uVar1);
        *(long *)(afStack_b30 + lVar38 * 0xc + -6) = auVar44._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -8) = auVar44._0_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -2) = auVar95._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -4) = auVar95._0_8_;
      }
      if (auVar101._0_4_ <= fVar109) {
        uVar52 = auVar101._12_2_;
        lVar38 = (long)(int)local_250;
        local_250 = local_250 + 1;
        afStack_b30[lVar38 * 0xc + 2] = (float)(uVar52 >> 1 & 1 | uVar1);
        afStack_b30[lVar38 * 0xc + 3] = auVar101._0_4_;
        auVar101 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar52 * 4);
        auVar44 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar52 * 4);
        afStack_b30[lVar38 * 0xc] = fVar66;
        afStack_b30[lVar38 * 0xc + 1] = (float)(uVar52 + 1 >> 1 & 1 | uVar27);
        *(long *)(afStack_b30 + lVar38 * 0xc + -6) = auVar101._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -8) = auVar101._0_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -2) = auVar44._8_8_;
        *(long *)(afStack_b30 + lVar38 * 0xc + -4) = auVar44._0_8_;
      }
      uVar34 = (ulong)local_250;
    }
    if (local_250 == 0) {
      return;
    }
  } while( true );
  (**(code **)(*plStack_220 + 0x28))();
  uVar25 = local_200;
  local_230 = local_200;
  lVar38 = (long)(int)local_250 + -1;
  fStack_238 = fStack_208;
  fStack_234 = fStack_204;
  local_240 = local_210;
  fStack_23c = fStack_20c;
  local_250 = (uint)lVar38;
  local_22c = local_1fc;
  auVar101 = *(undefined1 (*) [16])(afStack_b30 + lVar38 * 0xc + -8);
  auVar44 = *(undefined1 (*) [16])(afStack_b30 + lVar38 * 0xc + -4);
  auVar95 = auVar101 ^ (auVar101 ^ auVar44) & auVar21;
  auVar68 = auVar101 ^ (auVar101 ^ auVar44) & auVar86;
  auVar75 = auVar101 ^ (auVar101 ^ auVar44) & auVar23;
  auVar101 = auVar101 ^ (auVar101 ^ auVar44) & auVar22;
  uStack_c8 = CONCAT44(fVar91 * auVar95._12_4_,fVar90 * auVar95._8_4_);
  local_d0 = CONCAT44(fVar84 * local_210,fVar107 * auVar95._0_4_);
  uStack_b8 = CONCAT44(fVar91 * auVar68._12_4_,fVar90 * auVar68._8_4_);
  uStack_c0 = CONCAT44(fVar84 * fStack_20c,fVar107 * auVar68._0_4_);
  fStack_a4 = fVar91 * auVar75._12_4_;
  fStack_a8 = fVar90 * auVar75._8_4_;
  fStack_ac = fVar84 * fStack_208;
  local_b0 = fVar107 * auVar75._0_4_;
  uStack_98 = CONCAT44(fVar91 * auVar101._12_4_,fVar90 * auVar101._8_4_);
  uStack_a0 = CONCAT44(fVar84 * fStack_204,fVar107 * auVar101._0_4_);
  local_150 = *param_9;
  uStack_148 = param_9[1];
  uStack_128 = 0;
  local_130 = param_9[4];
  local_120 = CONCAT44(*(undefined4 *)((long)param_9 + 0x34),(undefined4)local_120);
  local_140 = param_7;
  uStack_118 = CONCAT44(uStack_118._4_4_,*(undefined4 *)(param_9 + 7));
  uStack_f8 = 0;
  local_100 = 0;
  iVar74 = *(int *)((long)param_9 + 0x1c) + (uint)*(byte *)(param_7 + 0x1c);
  local_120 = local_120 & 0xffffffffffffff00;
  uStack_108 = auVar108._8_8_;
  local_110 = auVar108._0_8_;
  uStack_138 = CONCAT44(iVar74,(((int)afStack_b30[lVar38 * 0xc + 1] << 1 | 1U) +
                                ((int)afStack_b30[lVar38 * 0xc + 2] <<
                                (ulong)(*(int *)(param_7 + 0x60) + 1U & 0x1f)) <<
                               (ulong)(-iVar74 & 0x1f)) - 1 |
                               (&DAT_03aa74b0)[*(int *)((long)param_9 + 0x1c)] &
                               *(uint *)(param_9 + 3));
  uVar27 = 1;
  pfVar32 = (float *)&local_d0;
  local_c00 = (long *)0x3;
  uVar34 = 1;
  pauVar39 = (undefined1 (*) [16])&local_b0;
  while( true ) {
    if (local_22c != 0) {
      uVar34 = (ulong)local_c00;
    }
    lVar30 = *(long *)(param_2 + 8);
    iVar74 = *(int *)(lVar30 + 0x40);
    if (iVar74 == 0) {
      pfVar33 = (float *)0x0;
    }
    else {
      pfVar33 = (float *)((long)iVar74 + lVar30 + 0x40);
    }
    iVar74 = *(int *)(lVar30 + 0x48);
    lVar36 = (long)(int)uVar34;
    if (iVar74 == 0) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      puVar26 = (undefined8 *)((long)iVar74 + lVar30 + 0x48);
    }
    lVar37 = lVar36 * 0x10;
    fVar66 = *(float *)(&local_d0 + lVar36 * 2);
    fVar73 = *(float *)((long)&local_d0 + lVar37 + 4);
    fVar78 = *(float *)(&uStack_c8 + lVar36 * 2);
    fVar109 = *(float *)((long)&uStack_c8 + lVar37 + 4);
    fVar53 = *(float *)*pauVar39;
    fVar61 = *(float *)(*pauVar39 + 4);
    fVar63 = *(float *)(*pauVar39 + 8);
    fVar64 = *(float *)(*pauVar39 + 0xc);
    fVar62 = *pfVar32;
    fVar65 = pfVar32[1];
    fVar99 = pfVar32[2];
    fVar100 = pfVar32[3];
    *pfVar33 = fVar62;
    pfVar33[1] = fVar65;
    auVar95._0_4_ = fVar53 - fVar62;
    auVar95._4_4_ = fVar61 - fVar65;
    auVar95._8_4_ = fVar63 - fVar99;
    auVar95._12_4_ = fVar64 - fVar100;
    auVar101 = NEON_ext(auVar95,auVar95,4,1);
    auVar81._0_4_ = fVar66 - fVar62;
    auVar81._4_4_ = fVar73 - fVar65;
    auVar81._8_4_ = fVar78 - fVar99;
    auVar81._12_4_ = fVar109 - fVar100;
    auVar44 = NEON_ext(auVar81,auVar81,4,1);
    pfVar33[2] = fVar99;
    auVar75._0_4_ = auVar95._0_4_ * auVar44._0_4_ - auVar81._0_4_ * auVar101._0_4_;
    auVar75._4_4_ = auVar95._4_4_ * auVar44._4_4_ - auVar81._4_4_ * auVar101._4_4_;
    auVar75._8_4_ = auVar95._8_4_ * auVar81._0_4_ - auVar81._8_4_ * auVar95._0_4_;
    auVar75._12_4_ = auVar95._12_4_ * auVar81._4_4_ - auVar81._12_4_ * auVar95._4_4_;
    auVar101 = NEON_ext(auVar75,auVar75,4,1);
    fVar61 = auVar101._0_4_;
    fVar109 = auVar101._4_4_;
    auVar44._0_4_ = fVar62 * fVar61;
    auVar44._4_4_ = fVar65 * fVar109;
    auVar44._8_4_ = fVar99 * auVar75._0_4_;
    auVar44._12_4_ = fVar100 * auVar75._4_4_;
    fVar73 = fVar61 * fVar61 + fVar109 * fVar109 + auVar75._0_4_ * auVar75._0_4_;
    fVar78 = fVar61 * fVar61 + fVar109 * fVar109 + auVar75._0_4_ * auVar75._0_4_;
    uVar29 = CONCAT44(fVar78,fVar73);
    uVar41 = NEON_frsqrte(uVar29,4);
    fVar66 = (float)uVar41;
    fVar53 = (float)((ulong)uVar41 >> 0x20);
    uVar41 = NEON_frsqrts(uVar29,CONCAT44(fVar53 * fVar53,fVar66 * fVar66),4);
    fVar66 = fVar66 * (float)uVar41;
    fVar53 = fVar53 * (float)((ulong)uVar41 >> 0x20);
    auVar95 = NEON_ext(auVar44,auVar44,8,1);
    uVar29 = NEON_frsqrts(uVar29,CONCAT44(fVar53 * fVar53,fVar66 * fVar66),4);
    auVar101 = *pauVar39;
    iVar74 = -(uint)(fVar73 <= 0.0);
    iVar79 = -(uint)(fVar78 <= 0.0);
    fVar66 = (float)uVar29 * fVar66;
    fVar53 = (float)((ulong)uVar29 >> 0x20) * fVar53;
    *(long *)(pfVar33 + 3) = auVar101._0_8_;
    pfVar33[5] = auVar101._8_4_;
    fVar78 = (float)CONCAT13((byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                             CONCAT12((byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                      CONCAT11((byte)((uint)fVar66 >> 8) &
                                               ~(byte)((uint)iVar74 >> 8),
                                               SUB41(fVar66,0) & ~(byte)iVar74)));
    fVar66 = *(float *)((long)&local_d0 + lVar37 + 4);
    fVar73 = *(float *)(&uStack_c8 + lVar36 * 2);
    pfVar33[6] = *(float *)(&local_d0 + lVar36 * 2);
    pfVar33[7] = fVar66;
    pfVar33[8] = fVar73;
    fVar66 = *(float *)((long)&local_d0 + lVar37 + 4);
    fVar73 = *(float *)(&uStack_c8 + lVar36 * 2);
    pfVar33[9] = *(float *)(&local_d0 + lVar36 * 2);
    pfVar33[10] = fVar66;
    fVar66 = (float)(CONCAT17((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                              CONCAT16((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10),
                                       CONCAT15((byte)((uint)fVar53 >> 8) &
                                                ~(byte)((uint)iVar79 >> 8),
                                                CONCAT14(SUB41(fVar53,0) & ~(byte)iVar79,fVar78))))
                    >> 0x20);
    fVar109 = fVar109 * fVar66;
    auVar68._0_8_ = CONCAT44(fVar109,fVar61 * fVar78);
    auVar68._8_4_ = auVar75._0_4_ * fVar78;
    auVar68._12_4_ = -(auVar44._0_4_ + auVar44._4_4_ + auVar95._0_4_) * fVar66;
    pfVar33[0xb] = fVar73;
    iVar74 = *(int *)(lVar30 + 0x58);
    *(undefined4 *)(lVar30 + 0x44) = 3;
    if (iVar74 == 0) {
      lVar36 = 0;
    }
    else {
      lVar36 = (long)iVar74 + lVar30 + 0x58;
    }
    auVar85._0_8_ = CONCAT44(-fVar109,-(fVar61 * fVar78));
    auVar85._8_4_ = -auVar68._8_4_;
    auVar85._12_4_ = -auVar68._12_4_;
    *(undefined1 *)(lVar36 + 3) = 0;
    *(undefined1 *)(lVar36 + 7) = 0;
    uVar29 = auVar68._8_8_;
    puVar26[1] = uVar29;
    *puVar26 = auVar68._0_8_;
    puVar26[3] = auVar85._8_8_;
    puVar26[2] = auVar85._0_8_;
    puVar26[5] = uVar29;
    puVar26[4] = auVar68._0_8_;
    puVar26[7] = uVar29;
    puVar26[6] = auVar68._0_8_;
    *(undefined4 *)(lVar30 + 0x20) = *(undefined4 *)(param_7 + 0x20);
    local_1d0 = *param_8;
    uStack_1c8 = param_8[1];
    plVar35 = (long *)*param_3;
    if (plVar35 != (long *)0x0) {
      (**(code **)(*plVar35 + 0x40))
                (plVar35,uVar25,5,*param_9,param_9[1],param_7,uStack_138 & 0xffffffff,lVar30,
                 &local_1d0);
    }
    local_170 = param_3[4];
    local_160 = param_3[6];
    local_190 = *param_3;
    fStack_158 = (float)param_3[7];
    uStack_154 = (undefined4)((ulong)param_3[7] >> 0x20);
    uStack_17e = (undefined6)((ulong)param_3[2] >> 0x10);
    local_180 = (undefined2)local_1d0;
    uStack_174 = *(undefined4 *)((undefined8 *)((ulong)&local_1d0 | 4) + 1);
    fStack_188 = (float)param_3[1];
    uStack_184 = (undefined4)((ulong)param_3[1] >> 0x20);
    fStack_168 = (float)lVar30;
    uStack_164 = (undefined4)((ulong)lVar30 >> 0x20);
    fStack_178 = (float)((ulong)*(undefined8 *)((ulong)&local_1d0 | 4) >> 0x20);
    if (*(char *)(param_4 + 0x30) == '\0') {
      pcVar31 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar30 + 0x18) * 0x200 + 0x18);
      puVar26 = &local_b90;
    }
    else {
      puVar26 = (undefined8 *)param_9[4];
      pcVar31 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar30 + 0x18) * 0x200 + 0x18);
    }
    (*pcVar31)(lVar30,puVar26,&local_1b0);
    auVar72._0_8_ =
         CONCAT44((local_1a0._4_4_ - local_1b0._4_4_) * 0.5,
                  ((float)local_1a0 - (float)local_1b0) * 0.5);
    auVar72._8_4_ = ((float)uStack_198 - (float)uStack_1a8) * 0.5;
    auVar72._12_4_ = (uStack_198._4_4_ - uStack_1a8._4_4_) * 0.5;
    auVar48._0_8_ =
         CONCAT44((local_1a0._4_4_ + local_1b0._4_4_) * 0.5,
                  ((float)local_1a0 + (float)local_1b0) * 0.5);
    auVar48._8_4_ = ((float)uStack_198 + (float)uStack_1a8) * 0.5;
    auVar48._12_4_ = (uStack_198._4_4_ + uStack_1a8._4_4_) * 0.5;
    uStack_ba8 = auVar48._8_8_;
    uStack_b98 = auVar72._8_8_;
    local_bb0 = auVar48._0_8_;
    uStack_ba0 = auVar72._0_8_;
    FUN_02fa9640(*(undefined1 *)(param_4 + 0x30),param_2,&local_190,&local_150,&local_bb0,
                 &uStack_ba0,lVar28,param_3 + 2,param_4,&local_b90,(param_11 ^ 1) & 1,param_12);
    iVar74 = *(int *)((long)param_9 + 0x1c) + (uint)*(byte *)(param_7 + 0x1c);
    uStack_138 = CONCAT44(iVar74,(((int)afStack_b30[lVar38 * 0xc + 2] <<
                                  (ulong)(*(int *)(param_7 + 0x60) + 1U & 0x1f)) +
                                  (int)afStack_b30[lVar38 * 0xc + 1] * 2 + 2 <<
                                 (ulong)(-iVar74 & 0x1f)) - 1U |
                                 (&DAT_03aa74b0)[*(int *)((long)param_9 + 0x1c)] &
                                 *(uint *)(param_9 + 3));
    if (local_c00 == (long *)0x0) break;
    local_c00 = (long *)((long)local_c00 - 3);
    uVar27 = uVar27 + 1;
    pfVar32 = pfVar32 + 0xc;
    pauVar39 = pauVar39 + -1;
    uVar34 = (ulong)uVar27;
  }
  if (local_250 == 0) {
    return;
  }
  goto LAB_02faa9c0;
}


