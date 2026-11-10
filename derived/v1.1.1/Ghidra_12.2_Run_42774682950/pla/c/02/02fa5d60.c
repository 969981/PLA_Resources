/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa5d60; name: FUN_02fa5d60
 */


/* WARNING: Removing unreachable block (ram,0x02fa6188) */
/* WARNING: Removing unreachable block (ram,0x02fa6280) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_02fa5d60(ulong param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                 undefined1 (*param_6) [16],undefined1 (*param_7) [16],undefined8 *param_8,
                 undefined8 *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
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
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar38;
  undefined8 uVar30;
  float fVar39;
  ushort uVar40;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar48;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
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
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  undefined8 *local_b90;
  undefined8 *local_b88;
  long local_b80;
  undefined8 *local_b70 [2];
  uint local_b5c;
  undefined8 local_b58 [3];
  undefined1 auStack_b40 [4];
  float afStack_b3c [7];
  float afStack_b20 [568];
  int local_240;
  long local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined2 local_220;
  undefined4 local_21c;
  long *plStack_210;
  undefined1 local_200 [16];
  undefined2 local_1f0;
  undefined4 local_1ec;
  int local_1e0;
  int local_1dc;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  float fStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  float fStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  float fStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  local_b70[0] = param_9;
  local_b70[1] = (undefined8 *)param_3;
  auVar31 = FUN_02fa7314(auStack_b40,param_2,param_4,param_4 + 0x10);
  local_b58[1] = *param_8;
  local_b58[2] = 0;
  local_b5c = 0;
  local_b58[0] = local_b58[1];
joined_r0x02fa5dec:
  do {
    if (local_240 == 0) {
LAB_02fa662c:
      *local_b70[0] = local_b58[0];
      return local_b5c & 1;
    }
    iVar3 = local_240 + -1;
    lVar24 = (long)iVar3;
    fVar38 = afStack_b20[lVar24 * 0xc + 2];
    fVar28 = afStack_b20[lVar24 * 0xc];
    fVar29 = afStack_b20[lVar24 * 0xc + 1];
    if (fVar28 == 0.0) {
      if (local_1e0 <= (int)fVar29 || local_1dc <= (int)fVar38) {
        bVar19 = false;
        goto LAB_02fa5e34;
      }
      (**(code **)(*plStack_210 + 0x28))(auVar31);
      local_220 = local_1f0;
      lVar24 = (long)local_240;
      uStack_228 = local_200._8_8_;
      local_230 = local_200._0_8_;
      local_21c = local_1ec;
      local_150._4_4_ = (float)NEON_fminnmv(local_200,4);
      uStack_138 = local_b58[lVar24 * 6];
      local_140._4_4_ = (float)NEON_fmaxnmv(local_200,4);
      local_150._0_4_ = SUB84(local_b70[lVar24 * 6],0);
      uStack_148._0_4_ = SUB84(local_b70[lVar24 * 6 + 1],0);
      uStack_148._4_4_ = (float)((ulong)local_b70[lVar24 * 6 + 1] >> 0x20);
      local_140._0_4_ = SUB84(local_b70[lVar24 * 6 + 2],0);
      uStack_138._4_4_ = (float)((ulong)uStack_138 >> 0x20);
    }
    else {
      bVar19 = true;
LAB_02fa5e34:
      lVar24 = (long)iVar3;
      if (param_5 < (int)fVar28) {
        if (bVar19) {
          fVar27 = *(float *)((long)local_b58 + lVar24 * 0x30 + 0x1c);
          fVar37 = afStack_b20[lVar24 * 0xc + -3];
          fVar39 = fVar37;
          fVar48 = fVar37;
          fVar50 = fVar37;
          fVar49 = fVar27;
          fVar77 = fVar27;
          fVar78 = fVar27;
          if ((int)*(uint *)(local_238 + 0x50) < (int)fVar28) {
            iVar1 = (int)fVar28 + ~*(uint *)(local_238 + 0x50);
            plVar25 = (long *)(local_238 + 0x20);
            lVar26 = *plVar25;
            if ((int)fVar29 <
                (int)(uint)*(ushort *)((long)plVar25 + (long)iVar1 * 0x18 + lVar26 + 0x10)) {
              uVar40 = *(ushort *)((long)plVar25 + (long)iVar1 * 0x18 + lVar26 + 0x12);
              if ((int)fVar38 < (int)(uint)uVar40) {
                plVar25 = (long *)((long)plVar25 + (long)iVar1 * 0x18 + lVar26);
                uVar23 = (int)fVar38 + (int)fVar29 * (uint)uVar40;
                fVar50 = *(float *)(local_238 + 0x40);
                puVar6 = (ushort *)
                         ((long)plVar25 +
                         (-(ulong)((uVar23 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                         (ulong)(uVar23 * 4) << 2) + *plVar25);
                auVar47._2_2_ = 0;
                auVar47._0_2_ = *puVar6;
                auVar47._4_2_ = puVar6[1];
                auVar47._6_2_ = 0;
                auVar47._8_2_ = puVar6[2];
                auVar47._10_2_ = 0;
                auVar47._12_2_ = puVar6[3];
                auVar47._14_2_ = 0;
                auVar74._2_2_ = 0;
                auVar74._0_2_ = puVar6[4];
                auVar74._4_2_ = puVar6[5];
                auVar74._6_2_ = 0;
                auVar74._8_2_ = puVar6[6];
                auVar74._10_2_ = 0;
                auVar74._12_2_ = puVar6[7];
                auVar74._14_2_ = 0;
                auVar52 = NEON_ucvtf(auVar47,4);
                auVar31 = NEON_ucvtf(auVar74,4);
                fVar27 = *(float *)(local_238 + 0x30) + auVar52._0_4_ * fVar50;
                fVar49 = *(float *)(local_238 + 0x34) + auVar52._4_4_ * fVar50;
                fVar77 = *(float *)(local_238 + 0x38) + auVar52._8_4_ * fVar50;
                fVar78 = *(float *)(local_238 + 0x3c) + auVar52._12_4_ * fVar50;
                fVar37 = *(float *)(local_238 + 0x30) + auVar31._0_4_ * fVar50;
                fVar39 = *(float *)(local_238 + 0x34) + auVar31._4_4_ * fVar50;
                fVar48 = *(float *)(local_238 + 0x38) + auVar31._8_4_ * fVar50;
                fVar50 = *(float *)(local_238 + 0x3c) + auVar31._12_4_ * fVar50;
              }
            }
          }
          local_240 = iVar3;
          auVar31 = *(undefined1 (*) [16])(local_b58 + lVar24 * 6 + 3);
          auVar52 = *(undefined1 (*) [16])(afStack_b20 + lVar24 * 0xc + -4);
          auVar70 = *(undefined1 (*) [16])PTR_DAT_043723a0;
          auVar72 = *(undefined1 (*) [16])((long)PTR_DAT_043723a0 + 0x10);
          fVar79 = (auVar31._0_4_ + auVar52._0_4_) * 0.5;
          fVar80 = (auVar31._4_4_ + auVar52._4_4_) * 0.5;
          fVar81 = (auVar31._8_4_ + auVar52._8_4_) * 0.5;
          fVar82 = (auVar31._12_4_ + auVar52._12_4_) * 0.5;
          auVar76 = *(undefined1 (*) [16])((long)PTR_DAT_043723a0 + 0x40);
          auVar74 = *(undefined1 (*) [16])((long)PTR_DAT_043723a0 + 0x50);
          uStack_c8 = auVar70._8_8_;
          local_d0 = auVar70._0_8_;
          uStack_b8 = auVar72._8_8_;
          uStack_c0 = auVar72._0_8_;
          uStack_a8 = auVar74._8_8_;
          local_b0 = auVar74._0_8_;
          uStack_98 = auVar76._8_8_;
          uStack_a0 = auVar76._0_8_;
          if ((param_1 & 1) == 0) {
            auVar7._4_4_ = fVar80;
            auVar7._0_4_ = fVar79;
            auVar7._8_4_ = fVar81;
            auVar7._12_4_ = fVar82;
            auVar67._4_4_ = fVar80;
            auVar67._0_4_ = fVar79;
            auVar67._8_4_ = fVar81;
            auVar67._12_4_ = fVar82;
            auVar67 = auVar67 ^ (auVar7 ^ auVar52) & auVar72;
            auVar8._4_4_ = fVar80;
            auVar8._0_4_ = fVar79;
            auVar8._8_4_ = fVar81;
            auVar8._12_4_ = fVar82;
            auVar72 = auVar31 ^ (auVar31 ^ auVar8) & auVar72;
            auVar9._4_4_ = fVar80;
            auVar9._0_4_ = fVar79;
            auVar9._8_4_ = fVar81;
            auVar9._12_4_ = fVar82;
            auVar32._4_4_ = fVar80;
            auVar32._0_4_ = fVar79;
            auVar32._8_4_ = fVar81;
            auVar32._12_4_ = fVar82;
            auVar32 = auVar32 ^ (auVar9 ^ auVar52) & auVar70;
            auVar10._4_4_ = fVar80;
            auVar10._0_4_ = fVar79;
            auVar10._8_4_ = fVar81;
            auVar10._12_4_ = fVar82;
            auVar70 = auVar31 ^ (auVar31 ^ auVar10) & auVar70;
            auVar11._4_4_ = fVar80;
            auVar11._0_4_ = fVar79;
            auVar11._8_4_ = fVar81;
            auVar11._12_4_ = fVar82;
            auVar64._4_4_ = fVar80;
            auVar64._0_4_ = fVar79;
            auVar64._8_4_ = fVar81;
            auVar64._12_4_ = fVar82;
            auVar64 = auVar64 ^ (auVar11 ^ auVar52) & auVar74;
            uStack_138 = auVar32._8_8_;
            local_140 = CONCAT44(fVar37,auVar32._0_4_);
            auVar12._4_4_ = fVar80;
            auVar12._0_4_ = fVar79;
            auVar12._8_4_ = fVar81;
            auVar12._12_4_ = fVar82;
            auVar74 = auVar31 ^ (auVar31 ^ auVar12) & auVar74;
            uStack_148 = auVar70._8_8_;
            local_150 = CONCAT44(fVar27,auVar70._0_4_);
            auVar13._4_4_ = fVar80;
            auVar13._0_4_ = fVar79;
            auVar13._8_4_ = fVar81;
            auVar13._12_4_ = fVar82;
            auVar62._4_4_ = fVar80;
            auVar62._0_4_ = fVar79;
            auVar62._8_4_ = fVar81;
            auVar62._12_4_ = fVar82;
            auVar62 = auVar62 ^ (auVar13 ^ auVar52) & auVar76;
            fVar56 = *(float *)(param_2 + 0x80);
            fVar57 = *(float *)(param_2 + 0x84);
            fVar60 = *(float *)(param_2 + 0x88);
            fVar61 = *(float *)(param_2 + 0x8c);
            auVar14._4_4_ = fVar80;
            auVar14._0_4_ = fVar79;
            auVar14._8_4_ = fVar81;
            auVar14._12_4_ = fVar82;
            auVar31 = auVar31 ^ (auVar31 ^ auVar14) & auVar76;
            fVar81 = (float)*(undefined8 *)(*param_6 + 8);
            uVar86 = (undefined4)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
            fVar79 = (float)*(undefined8 *)*param_6;
            fVar80 = (float)((ulong)*(undefined8 *)*param_6 >> 0x20);
            fVar82 = (float)*(undefined8 *)*param_7;
            auVar33._0_4_ = auVar70._0_4_ * fVar56 - fVar82;
            fVar83 = (float)((ulong)*(undefined8 *)*param_7 >> 0x20);
            auVar33._4_4_ = fVar27 * fVar57 - fVar83;
            fVar84 = (float)*(undefined8 *)(*param_7 + 8);
            auVar33._8_4_ = auVar70._8_4_ * fVar60 - fVar84;
            fVar85 = (float)((ulong)*(undefined8 *)(*param_7 + 8) >> 0x20);
            auVar33._12_4_ = auVar70._12_4_ * fVar61 - fVar85;
            auVar51._0_4_ = fVar82 + auVar32._0_4_ * fVar56;
            auVar51._4_4_ = fVar83 + fVar37 * fVar57;
            auVar51._8_4_ = fVar84 + auVar32._8_4_ * fVar60;
            auVar51._12_4_ = fVar85 + auVar32._12_4_ * fVar61;
            auVar15._12_4_ = uVar86;
            auVar15._0_12_ = *(undefined1 (*) [12])*param_6;
            auVar52 = NEON_fmin(auVar51,auVar15,4);
            auVar58._0_4_ = fVar82 + auVar67._0_4_ * fVar56;
            auVar58._4_4_ = fVar83 + fVar39 * fVar57;
            auVar58._8_4_ = fVar84 + auVar67._8_4_ * fVar60;
            auVar58._12_4_ = fVar85 + auVar67._12_4_ * fVar61;
            auVar52 = NEON_fmax(auVar33,auVar52,4);
            uStack_118 = auVar67._8_8_;
            local_120 = CONCAT44(fVar39,auVar67._0_4_);
            uStack_128 = auVar72._8_8_;
            local_130 = CONCAT44(fVar49,auVar72._0_4_);
            auVar73._0_4_ = fVar82 + auVar64._0_4_ * fVar56;
            auVar73._4_4_ = fVar83 + fVar48 * fVar57;
            auVar73._8_4_ = fVar84 + auVar64._8_4_ * fVar60;
            auVar73._12_4_ = fVar85 + auVar64._12_4_ * fVar61;
            auVar75._0_4_ = fVar82 + auVar62._0_4_ * fVar56;
            auVar75._4_4_ = fVar83 + fVar50 * fVar57;
            auVar75._8_4_ = fVar84 + auVar62._8_4_ * fVar60;
            auVar75._12_4_ = fVar85 + auVar62._12_4_ * fVar61;
            auVar68._0_4_ = auVar74._0_4_ * fVar56 - fVar82;
            auVar68._4_4_ = fVar77 * fVar57 - fVar83;
            auVar68._8_4_ = auVar74._8_4_ * fVar60 - fVar84;
            auVar68._12_4_ = auVar74._12_4_ * fVar61 - fVar85;
            auVar41._0_4_ = auVar31._0_4_ * fVar56 - fVar82;
            auVar41._4_4_ = fVar78 * fVar57 - fVar83;
            auVar41._8_4_ = auVar31._8_4_ * fVar60 - fVar84;
            auVar41._12_4_ = auVar31._12_4_ * fVar61 - fVar85;
            fVar27 = auVar52._0_4_ - fVar79;
            fVar37 = auVar52._4_4_ - fVar80;
            fVar39 = auVar52._8_4_ - fVar81;
            auVar71._0_4_ = auVar72._0_4_ * fVar56 - fVar82;
            auVar71._4_4_ = fVar49 * fVar57 - fVar83;
            auVar71._8_4_ = auVar72._8_4_ * fVar60 - fVar84;
            auVar71._12_4_ = auVar72._12_4_ * fVar61 - fVar85;
            auVar16._12_4_ = uVar86;
            auVar16._0_12_ = *(undefined1 (*) [12])*param_6;
            auVar52 = NEON_fmin(auVar58,auVar16,4);
            auVar17._12_4_ = uVar86;
            auVar17._0_12_ = *(undefined1 (*) [12])*param_6;
            auVar72 = NEON_fmin(auVar73,auVar17,4);
            auVar18._12_4_ = uVar86;
            auVar18._0_12_ = *(undefined1 (*) [12])*param_6;
            auVar76 = NEON_fmin(auVar75,auVar18,4);
            auVar70 = NEON_fmax(auVar71,auVar52,4);
            auVar72 = NEON_fmax(auVar68,auVar72,4);
            auVar52 = NEON_fmax(auVar41,auVar76,4);
            fVar49 = auVar70._0_4_ - fVar79;
            fVar82 = auVar70._4_4_ - fVar80;
            fVar56 = auVar70._8_4_ - fVar81;
            fVar57 = auVar72._0_4_ - fVar79;
            fVar60 = auVar72._4_4_ - fVar80;
            fVar61 = auVar72._8_4_ - fVar81;
            fVar79 = auVar52._0_4_ - fVar79;
            fVar80 = auVar52._4_4_ - fVar80;
            fVar81 = auVar52._8_4_ - fVar81;
            fVar49 = fVar49 * fVar49;
            fVar82 = fVar82 * fVar82;
            fVar56 = fVar56 * fVar56;
            fVar27 = fVar27 * fVar27;
            fVar37 = fVar37 * fVar37;
            fVar39 = fVar39 * fVar39;
            fVar57 = fVar57 * fVar57;
            fVar60 = fVar60 * fVar60;
            fVar61 = fVar61 * fVar61;
            fVar79 = fVar79 * fVar79;
            fVar80 = fVar80 * fVar80;
            fVar81 = fVar81 * fVar81;
            uStack_f8 = auVar64._8_8_;
            local_100 = CONCAT44(fVar48,auVar64._0_4_);
            uStack_108 = auVar74._8_8_;
            local_110 = CONCAT44(fVar77,auVar74._0_4_);
            uStack_d8 = auVar62._8_8_;
            local_e0 = CONCAT44(fVar50,auVar62._0_4_);
            uStack_e8 = auVar31._8_8_;
            local_f0 = CONCAT44(fVar78,auVar31._0_4_);
            fStack_188 = fVar27 + fVar37 + fVar39;
            local_190 = CONCAT44(fVar27 + fVar37 + fVar39,fStack_188);
            fStack_178 = fVar49 + fVar82 + fVar56;
            local_180 = CONCAT44(fVar49 + fVar82 + fVar56,fStack_178);
            fStack_168 = fVar57 + fVar60 + fVar61;
            local_170 = CONCAT44(fVar57 + fVar60 + fVar61,fStack_168);
            fStack_158 = fVar79 + fVar80 + fVar81;
            local_160 = CONCAT44(fVar79 + fVar80 + fVar81,fStack_158);
            uStack_184 = 0x3f000000;
            uStack_174 = 0x3f000001;
            uStack_164 = 0x3f000002;
            uStack_154 = 0x3f000003;
          }
          else {
            local_b90 = &local_190;
            local_b88 = &local_150;
            local_b80 = 0;
            auVar20._12_4_ = fVar82;
            auVar20._8_4_ = fVar81;
            auVar20._4_4_ = fVar80;
            auVar20._0_4_ = fVar79;
            while( true ) {
              auVar52 = auVar20 ^ (auVar20 ^ auVar52) & auVar70;
              auVar31 = auVar31 ^ (auVar31 ^ auVar20) & auVar70;
              auVar44._8_8_ = auVar31._8_8_;
              local_b88[1] = auVar44._8_8_;
              *local_b88 = auVar31._0_8_;
              local_b88[3] = auVar52._8_8_;
              local_b88[2] = auVar52._0_8_;
              uVar23 = (uint)local_b80;
              auVar44._0_4_ = auVar31._0_4_;
              if (uVar23 == 1) {
                auVar44._4_4_ = fVar49;
                fVar79 = fVar39;
              }
              else if (uVar23 == 3) {
                auVar44._4_4_ = fVar78;
                fVar79 = fVar50;
              }
              else if (uVar23 == 2) {
                auVar44._4_4_ = fVar77;
                fVar79 = fVar48;
              }
              else {
                auVar44._4_4_ = fVar27;
                fVar79 = fVar37;
              }
              local_b88[1] = auVar44._8_8_;
              *local_b88 = auVar44._0_8_;
              auVar31 = *(undefined1 (*) [16])(param_2 + 0x80);
              auVar45._0_8_ = CONCAT44(auVar44._4_4_ * auVar31._4_4_,auVar44._0_4_ * auVar31._0_4_);
              auVar45._8_4_ = auVar44._8_4_ * auVar31._8_4_;
              auVar45._12_4_ = auVar44._12_4_ * auVar31._12_4_;
              local_b88[3] = auVar52._8_8_;
              local_b88[2] = CONCAT44(fVar79,auVar52._0_4_);
              auVar35._0_8_ = CONCAT44(fVar79 * auVar31._4_4_,auVar52._0_4_ * auVar31._0_4_);
              auVar35._8_4_ = auVar52._8_4_ * auVar31._8_4_;
              auVar35._12_4_ = auVar52._12_4_ * auVar31._12_4_;
              uStack_1a8 = auVar45._8_8_;
              uStack_198 = auVar35._8_8_;
              local_1b0 = auVar45._0_8_;
              local_1a0 = auVar35._0_8_;
              FUN_0333e220(local_b70[1],&local_1b0,&local_1d0);
              auVar36._0_4_ = local_1d0 - *(float *)*param_7;
              auVar36._4_4_ = fStack_1cc - *(float *)(*param_7 + 4);
              auVar36._8_4_ = fStack_1c8 - *(float *)(*param_7 + 8);
              auVar36._12_4_ = fStack_1c4 - *(float *)(*param_7 + 0xc);
              auVar46._0_4_ = *(float *)*param_7 + local_1c0;
              auVar46._4_4_ = *(float *)(*param_7 + 4) + fStack_1bc;
              auVar46._8_4_ = *(float *)(*param_7 + 8) + fStack_1b8;
              auVar46._12_4_ = *(float *)(*param_7 + 0xc) + fStack_1b4;
              auVar31 = *param_6;
              auVar52 = NEON_fmin(auVar46,auVar31,4);
              auVar52 = NEON_fmax(auVar36,auVar52,4);
              fVar79 = auVar52._0_4_ - auVar31._0_4_;
              fVar80 = auVar52._4_4_ - auVar31._4_4_;
              fVar81 = auVar52._8_4_ - auVar31._8_4_;
              fVar79 = fVar79 * fVar79;
              fVar80 = fVar80 * fVar80;
              fVar81 = fVar81 * fVar81;
              uVar30 = CONCAT44(fVar79 + fVar80 + fVar81,fVar79 + fVar80 + fVar81);
              local_b90[1] = uVar30;
              *local_b90 = uVar30;
              *(uint *)((long)local_b90 + 0xc) = uVar23 | 0x3f000000;
              if (local_b80 == 3) break;
              auVar31 = *(undefined1 (*) [16])(local_b58 + lVar24 * 6 + 3);
              auVar70 = *(undefined1 (*) [16])(&uStack_c0 + local_b80 * 2);
              local_b80 = local_b80 + 1;
              local_b90 = local_b90 + 2;
              auVar52 = *(undefined1 (*) [16])(afStack_b20 + lVar24 * 0xc + -4);
              local_b88 = local_b88 + 4;
            }
          }
          auVar66._8_4_ = fStack_188;
          auVar66._0_8_ = local_190;
          auVar66._12_4_ = uStack_184;
          uVar23 = (int)fVar29 << 1;
          uVar2 = (int)fVar38 << 1;
          auVar21._8_4_ = fStack_168;
          auVar21._0_8_ = local_170;
          auVar21._12_4_ = uStack_164;
          uVar4 = (uint)((float)local_190 < (float)local_170);
          auVar54._8_4_ = fStack_178;
          auVar54._0_8_ = local_180;
          auVar54._12_4_ = uStack_174;
          auVar22._8_4_ = fStack_158;
          auVar22._0_8_ = local_160;
          auVar22._12_4_ = uStack_154;
          uVar5 = (uint)((float)local_180 < (float)local_160);
          auVar59._0_8_ =
               CONCAT44((int)(uVar4 * -0x80000000) >> 0x1f,(int)(uVar4 * -0x80000000) >> 0x1f);
          auVar59._8_8_ = auVar59._0_8_;
          auVar65._8_8_ = auVar59._0_8_;
          auVar65._0_8_ = auVar59._0_8_;
          auVar72 = auVar21 ^ (auVar21 ^ auVar66) & auVar59;
          auVar66 = auVar66 ^ (auVar66 ^ auVar21) & auVar65;
          auVar42._0_8_ =
               CONCAT44((int)(uVar5 * -0x80000000) >> 0x1f,(int)(uVar5 * -0x80000000) >> 0x1f);
          auVar42._8_8_ = auVar42._0_8_;
          auVar53._8_8_ = auVar42._0_8_;
          auVar53._0_8_ = auVar42._0_8_;
          auVar52 = auVar22 ^ (auVar22 ^ auVar54) & auVar42;
          auVar54 = auVar54 ^ (auVar54 ^ auVar22) & auVar53;
          uVar4 = (uint)(auVar72._0_4_ < auVar52._0_4_);
          uVar5 = (uint)(auVar66._0_4_ < auVar54._0_4_);
          auVar34._0_8_ =
               CONCAT44((int)(uVar4 * -0x80000000) >> 0x1f,(int)(uVar4 * -0x80000000) >> 0x1f);
          auVar34._8_8_ = auVar34._0_8_;
          auVar63._8_8_ = auVar34._0_8_;
          auVar63._0_8_ = auVar34._0_8_;
          auVar31 = auVar52 ^ (auVar52 ^ auVar72) & auVar34;
          auVar72 = auVar72 ^ (auVar72 ^ auVar52) & auVar63;
          fStack_158 = auVar31._8_4_;
          uStack_154 = auVar31._12_4_;
          local_160 = auVar31._0_8_;
          auVar69._0_8_ =
               CONCAT44((int)(uVar5 * -0x80000000) >> 0x1f,(int)(uVar5 * -0x80000000) >> 0x1f);
          auVar69._8_8_ = auVar69._0_8_;
          auVar70 = auVar54 ^ (auVar54 ^ auVar66) & auVar69;
          uVar4 = (uint)(auVar70._0_4_ < auVar72._0_4_);
          auVar66 = auVar66 ^ (auVar66 ^ auVar54) & auVar69;
          fVar29 = (float)local_b58[1];
          fStack_188 = auVar66._8_4_;
          uStack_184 = auVar66._12_4_;
          local_190 = auVar66._0_8_;
          fVar28 = (float)((int)fVar28 + -1);
          auVar43._0_8_ =
               CONCAT44((int)(uVar4 * -0x80000000) >> 0x1f,(int)(uVar4 * -0x80000000) >> 0x1f);
          auVar43._8_8_ = auVar43._0_8_;
          auVar55._8_8_ = auVar43._0_8_;
          auVar55._0_8_ = auVar43._0_8_;
          auVar52 = auVar72 ^ (auVar72 ^ auVar70) & auVar43;
          auVar70 = auVar70 ^ (auVar70 ^ auVar72) & auVar55;
          fStack_168 = auVar52._8_4_;
          uStack_164 = auVar52._12_4_;
          local_170 = auVar52._0_8_;
          fStack_178 = auVar70._8_4_;
          uStack_174 = auVar70._12_4_;
          local_180 = auVar70._0_8_;
          if (auVar66._0_4_ <= fVar29) {
            uVar40 = auVar66._12_2_;
            lVar24 = (long)local_240;
            local_240 = local_240 + 1;
            afStack_b20[lVar24 * 0xc + 2] = (float)(uVar40 >> 1 & 1 | uVar2);
            afStack_b20[lVar24 * 0xc + 3] = auVar66._0_4_;
            auVar72 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar40 * 4);
            auVar76 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar40 * 4);
            afStack_b20[lVar24 * 0xc] = fVar28;
            afStack_b20[lVar24 * 0xc + 1] = (float)(uVar40 + 1 >> 1 & 1 | uVar23);
            *(long *)(afStack_b20 + lVar24 * 0xc + -6) = auVar72._8_8_;
            local_b58[lVar24 * 6 + 3] = auVar72._0_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -2) = auVar76._8_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -4) = auVar76._0_8_;
          }
          if (auVar70._0_4_ <= fVar29) {
            uVar40 = auVar70._12_2_;
            lVar24 = (long)local_240;
            local_240 = local_240 + 1;
            afStack_b20[lVar24 * 0xc + 2] = (float)(uVar40 >> 1 & 1 | uVar2);
            afStack_b20[lVar24 * 0xc + 3] = auVar70._0_4_;
            auVar70 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar40 * 4);
            auVar72 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar40 * 4);
            afStack_b20[lVar24 * 0xc] = fVar28;
            afStack_b20[lVar24 * 0xc + 1] = (float)(uVar40 + 1 >> 1 & 1 | uVar23);
            *(long *)(afStack_b20 + lVar24 * 0xc + -6) = auVar70._8_8_;
            local_b58[lVar24 * 6 + 3] = auVar70._0_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -2) = auVar72._8_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -4) = auVar72._0_8_;
          }
          if (auVar52._0_4_ <= fVar29) {
            uVar40 = auVar52._12_2_;
            lVar24 = (long)local_240;
            local_240 = local_240 + 1;
            afStack_b20[lVar24 * 0xc + 2] = (float)(uVar40 >> 1 & 1 | uVar2);
            afStack_b20[lVar24 * 0xc + 3] = auVar52._0_4_;
            auVar52 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar40 * 4);
            auVar70 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar40 * 4);
            afStack_b20[lVar24 * 0xc] = fVar28;
            afStack_b20[lVar24 * 0xc + 1] = (float)(uVar40 + 1 >> 1 & 1 | uVar23);
            *(long *)(afStack_b20 + lVar24 * 0xc + -6) = auVar52._8_8_;
            local_b58[lVar24 * 6 + 3] = auVar52._0_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -2) = auVar70._8_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -4) = auVar70._0_8_;
          }
          if (auVar31._0_4_ <= fVar29) {
            uVar40 = auVar31._12_2_;
            lVar24 = (long)local_240;
            local_240 = local_240 + 1;
            afStack_b20[lVar24 * 0xc + 2] = (float)(uVar40 >> 1 & 1 | uVar2);
            afStack_b20[lVar24 * 0xc + 3] = auVar31._0_4_;
            auVar31 = *(undefined1 (*) [16])(&local_150 + (ulong)uVar40 * 4);
            auVar52 = *(undefined1 (*) [16])(&local_140 + (ulong)uVar40 * 4);
            afStack_b20[lVar24 * 0xc] = fVar28;
            afStack_b20[lVar24 * 0xc + 1] = (float)(uVar40 + 1 >> 1 & 1 | uVar23);
            *(long *)(afStack_b20 + lVar24 * 0xc + -6) = auVar31._8_8_;
            local_b58[lVar24 * 6 + 3] = auVar31._0_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -2) = auVar52._8_8_;
            *(long *)(afStack_b20 + lVar24 * 0xc + -4) = auVar52._0_8_;
          }
        }
        else {
          local_240 = iVar3;
        }
        goto joined_r0x02fa5dec;
      }
      local_150._0_4_ = (float)local_b58[lVar24 * 6 + 3];
      local_150._4_4_ = (float)((ulong)local_b58[lVar24 * 6 + 3] >> 0x20);
      uStack_148._0_4_ = (float)*(undefined8 *)(afStack_b20 + lVar24 * 0xc + -6);
      uStack_148._4_4_ = (float)((ulong)*(undefined8 *)(afStack_b20 + lVar24 * 0xc + -6) >> 0x20);
      local_140._0_4_ = (float)*(undefined8 *)(afStack_b20 + lVar24 * 0xc + -4);
      local_140._4_4_ = (float)((ulong)*(undefined8 *)(afStack_b20 + lVar24 * 0xc + -4) >> 0x20);
      uStack_138._0_4_ = (float)*(undefined8 *)(afStack_b20 + lVar24 * 0xc + -2);
      uStack_138._4_4_ = (float)((ulong)*(undefined8 *)(afStack_b20 + lVar24 * 0xc + -2) >> 0x20);
    }
    auVar31 = *(undefined1 (*) [16])(param_2 + 0x80);
    local_150._0_4_ = (float)local_150 * auVar31._0_4_;
    local_150._4_4_ = local_150._4_4_ * auVar31._4_4_;
    auVar70._0_8_ = CONCAT44(local_150._4_4_,(float)local_150);
    auVar70._8_4_ = (float)uStack_148 * auVar31._8_4_;
    auVar70._12_4_ = uStack_148._4_4_ * auVar31._12_4_;
    auVar52._0_8_ = CONCAT44(local_140._4_4_ * auVar31._4_4_,(float)local_140 * auVar31._0_4_);
    auVar52._8_4_ = (float)uStack_138 * auVar31._8_4_;
    auVar52._12_4_ = uStack_138._4_4_ * auVar31._12_4_;
    uStack_138 = auVar52._8_8_;
    local_140 = auVar52._0_8_;
    uStack_148 = auVar70._8_8_;
    local_150 = auVar70._0_8_;
    if ((param_1 & 1) == 0) {
      fVar28 = *(float *)*param_7;
      fVar29 = *(float *)(*param_7 + 4);
      fVar38 = *(float *)(*param_7 + 8);
      fVar27 = *(float *)(*param_7 + 0xc);
      auVar72._0_4_ = (float)local_150 - fVar28;
      auVar72._4_4_ = local_150._4_4_ - fVar29;
      auVar72._8_4_ = auVar70._8_4_ - fVar38;
      auVar72._12_4_ = auVar70._12_4_ - fVar27;
    }
    else {
      FUN_0333e220(local_b70[1],&local_150,&local_d0);
      auVar52 = *param_7;
      auVar72._0_4_ = (float)local_d0 - auVar52._0_4_;
      auVar72._4_4_ = local_d0._4_4_ - auVar52._4_4_;
      auVar72._8_4_ = (float)uStack_c8 - auVar52._8_4_;
      auVar72._12_4_ = uStack_c8._4_4_ - auVar52._12_4_;
      fVar28 = (float)uStack_c0;
      fVar29 = uStack_c0._4_4_;
      fVar38 = (float)uStack_b8;
      fVar27 = uStack_b8._4_4_;
    }
    auVar76._0_4_ = auVar52._0_4_ + fVar28;
    auVar76._4_4_ = auVar52._4_4_ + fVar29;
    auVar76._8_4_ = auVar52._8_4_ + fVar38;
    auVar76._12_4_ = auVar52._12_4_ + fVar27;
    auVar31 = *param_6;
    auVar52 = NEON_fmin(auVar76,auVar31,4);
    auVar52 = NEON_fmax(auVar72,auVar52,4);
    fVar28 = auVar52._0_4_ - auVar31._0_4_;
    fVar38 = auVar52._4_4_ - auVar31._4_4_;
    fVar27 = auVar52._8_4_ - auVar31._8_4_;
    fVar28 = fVar28 * fVar28;
    fVar38 = fVar38 * fVar38;
    fVar27 = fVar27 * fVar27;
    fVar29 = fVar28 + fVar38 + fVar27;
    uVar30 = CONCAT44(fVar28 + fVar38 + fVar27,fVar29);
    if (fVar29 < (float)local_b58[1]) {
      local_b58[0] = uVar30;
      local_b5c = 1;
      local_b58[2] = 0;
      if (fVar29 <= 0.0) goto LAB_02fa662c;
      local_b58[1] = uVar30;
    }
    local_240 = local_240 + -1;
    auVar31._8_8_ = local_b58[2];
    auVar31._0_8_ = local_b58[1];
  } while( true );
}


