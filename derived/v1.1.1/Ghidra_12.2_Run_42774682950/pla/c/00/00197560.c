/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00197560; name: FUN_00197560
 */


void FUN_00197560(uint param_1,long *param_2,long *param_3,long *param_4,long param_5,long *param_6,
                 long *param_7)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [12];
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  byte *pbVar42;
  float fVar43;
  undefined8 uVar48;
  float fVar77;
  undefined1 auVar53 [16];
  float fVar73;
  float fVar78;
  float fVar81;
  undefined1 auVar54 [16];
  float fVar44;
  float fVar45;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar74;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar46;
  undefined8 uVar49;
  float fVar75;
  float fVar79;
  float fVar82;
  undefined1 auVar61 [16];
  float fVar47;
  float fVar76;
  float fVar80;
  float fVar83;
  undefined1 auVar62 [16];
  undefined8 uVar50;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar51;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar52;
  float fVar84;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar86;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar111;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined8 uVar126;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_154;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  uint local_110;
  byte *local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  byte *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  uint local_b0;
  byte *local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  puVar17 = PTR_DAT_04372370;
  if ((int)param_2[1] == 0 || (int)param_3[1] == 0) {
    return;
  }
  lVar16 = param_4[1];
  if (param_6 == (long *)0x0) {
    uVar41 = 0;
    pbVar42 = (byte *)(*param_2 + (long)param_2);
    lVar20 = param_2[5];
    lVar19 = param_2[4];
    lVar18 = param_2[3];
    lVar30 = param_2[2];
  }
  else {
    uVar41 = (ulong)*(uint *)(param_6 + 4);
    pbVar42 = (byte *)param_6[5];
    lVar20 = param_6[3];
    lVar19 = param_6[2];
    lVar18 = param_6[1];
    lVar30 = *param_6;
  }
  if (param_7 == (long *)0x0) {
    uVar40 = 0;
    lStack_c8 = param_3[3];
    local_d0 = param_3[2];
    lVar32 = param_3[5];
    lVar27 = param_3[4];
    local_a8 = (byte *)(*param_3 + (long)param_3);
  }
  else {
    lStack_c8 = param_7[1];
    local_d0 = *param_7;
    lVar32 = param_7[3];
    lVar27 = param_7[2];
    uVar40 = (ulong)*(uint *)(param_7 + 4);
    local_a8 = (byte *)param_7[5];
  }
  iVar31 = (int)uVar41;
  local_b0 = (uint)uVar40;
  fStack_b8 = (float)lVar32;
  fStack_b4 = (float)((ulong)lVar32 >> 0x20);
  fStack_c0 = (float)lVar27;
  local_bc = (float)((ulong)lVar27 >> 0x20);
  uVar14 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
  if ((param_1 & 1) == 0) {
    lVar27 = *(long *)(param_5 + 0x150);
    uVar126 = NEON_fmax(uVar14,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    fVar43 = *(float *)(lVar27 + 0x40);
    fVar73 = *(float *)(lVar27 + 0x44);
    fVar77 = *(float *)(lVar27 + 0x48);
    fVar123 = *(float *)(lVar27 + 0x4c);
    FUN_0333e220(param_5 + 0x1b0,&local_d0,&local_130);
    auVar53 = *(undefined1 (*) [16])(puVar17 + 0x150);
    auVar87 = NEON_ext(auVar53,auVar53,8,1);
    auVar53 = NEON_ext(auVar87,auVar53,8,1);
    fVar44 = (local_120 - local_130) * auVar53._0_4_;
    fVar47 = (fStack_11c - fStack_12c) * auVar53._4_4_;
    fVar76 = (fStack_118 - fStack_128) * auVar53._8_4_;
    fVar45 = (fStack_114 - fStack_124) * auVar53._12_4_;
    auVar112._0_4_ = (local_130 + local_120) * auVar53._0_4_;
    auVar112._4_4_ = (fStack_12c + fStack_11c) * auVar53._4_4_;
    auVar112._8_4_ = (fStack_128 + fStack_118) * auVar53._8_4_;
    auVar112._12_4_ = (fStack_124 + fStack_114) * auVar53._12_4_;
    uStack_1c8 = auVar53._8_8_;
    local_1d0 = auVar53._0_8_;
    auVar100._0_4_ = (float)lVar30 * fVar43 - fVar44;
    auVar100._4_4_ = (float)((ulong)lVar30 >> 0x20) * fVar73 - fVar47;
    auVar100._8_4_ = (float)lVar18 * fVar77 - fVar76;
    auVar100._12_4_ = (float)((ulong)lVar18 >> 0x20) * fVar123 - fVar45;
    auVar53._0_4_ = (float)lVar19 * fVar43 + fVar44;
    auVar53._4_4_ = (float)((ulong)lVar19 >> 0x20) * fVar73 + fVar47;
    auVar53._8_4_ = (float)lVar20 * fVar77 + fVar76;
    auVar53._12_4_ = (float)((ulong)lVar20 >> 0x20) * fVar123 + fVar45;
    auVar87 = NEON_fmax(auVar100,auVar112,4);
    auVar53 = NEON_fmin(auVar53,auVar87,4);
    fVar43 = auVar112._0_4_ - auVar53._0_4_;
    fVar73 = auVar112._4_4_ - auVar53._4_4_;
    fVar77 = auVar112._8_4_ - auVar53._8_4_;
    fVar123 = auVar112._12_4_ - auVar53._12_4_;
    auVar87._0_4_ = fVar43 * fVar43;
    auVar87._4_4_ = fVar73 * fVar73;
    auVar87._8_4_ = fVar77 * fVar77;
    auVar87._12_4_ = fVar123 * fVar123;
    auVar53 = NEON_ext(auVar87,auVar87,8,1);
    if ((float)uVar126 * (float)uVar126 < auVar87._0_4_ + auVar87._4_4_ + auVar53._0_4_) {
      return;
    }
    lVar32 = CONCAT44(fStack_b4,fStack_b8);
    lVar27 = CONCAT44(local_bc,fStack_c0);
    uVar40 = (ulong)local_b0;
  }
  else {
    auVar53 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
    auVar87 = NEON_ext(auVar53,auVar53,8,1);
    auVar53 = NEON_ext(auVar87,auVar53,8,1);
    uStack_1c8 = auVar53._8_8_;
    local_1d0 = auVar53._0_8_;
  }
  lVar1 = param_5 + 0x1b0;
  auVar53 = *(undefined1 (*) [16])(puVar17 + 0x1e0);
  uVar126 = *(undefined8 *)(puVar17 + 0x50);
  auVar112 = NEON_ext(auVar53,auVar53,8,1);
  auVar87 = *(undefined1 (*) [16])(puVar17 + 0x150);
  plVar26 = *(long **)PTR_PTR_04372408;
  auVar100 = NEON_ext(auVar87,auVar87,8,1);
  auVar112 = NEON_ext(auVar112,auVar53,8,1);
  auVar53 = NEON_ext(auVar100,auVar87,8,1);
  fVar43 = auVar112._0_4_;
  fVar73 = auVar112._4_4_;
  fVar77 = auVar112._8_4_;
  uVar38 = (uint)uVar40;
  if ((param_1 & 1) == 0) goto LAB_0019776c;
LAB_00197760:
  iVar31 = (int)uVar41;
  uVar38 = (uint)uVar40;
  if (local_a8 != pbVar42) goto LAB_0019776c;
  while ((char)pbVar42[3] < '\0') {
    lVar27 = (long)(int)uVar41 + 1;
    fVar85 = (float)lVar19;
    fVar119 = (float)lVar30;
    fVar80 = (float)((ulong)lVar19 >> 0x20);
    fVar45 = (float)((ulong)lVar30 >> 0x20);
    fVar44 = (float)lVar20;
    fVar74 = (float)lVar18;
    uVar39 = (uint)lVar27;
    fVar123 = (fVar85 - fVar119) * fVar43;
    fVar47 = (fVar80 - fVar45) * fVar73;
    fVar76 = (fVar44 - fVar74) * fVar77;
    lVar30 = (long)(int)uVar41 + (ulong)((uint)pbVar42[4] | (pbVar42[3] & 0x7f) << 8) * 2;
    uVar22 = (undefined4)lVar30;
    local_108 = (byte *)((long)param_2 + lVar27 * 5 + *param_2);
    local_d8 = (byte *)((long)param_2 + lVar30 * 5 + *param_2);
    bVar8 = local_d8[1] >> 4;
    bVar9 = local_108[1] >> 4;
    bVar4 = local_108[1] & 0xf;
    bVar10 = local_108[2] >> 4;
    bVar6 = local_d8[2] & 0xf;
    bVar5 = local_d8[2] >> 4;
    bVar11 = *local_108 >> 4;
    bVar12 = *local_108 & 0xf;
    bVar13 = local_108[2] & 0xf;
    fStack_124 = 0.0;
    fStack_114 = 0.0;
    fVar125 = fVar74 + (float)(byte)(bVar10 * bVar10) * fVar76;
    fVar86 = fVar45 + (float)(byte)(bVar9 * bVar9) * fVar47;
    fVar45 = fVar45 + (float)(byte)(bVar8 * bVar8) * fVar47;
    fVar83 = fVar119 + (float)(byte)(bVar11 * bVar11) * fVar123;
    fVar74 = fVar74 + (float)(byte)(bVar5 * bVar5) * fVar76;
    fVar124 = fVar85 - (float)(byte)(bVar12 * bVar12) * fVar123;
    bVar12 = *local_d8 >> 4;
    fVar111 = fVar80 - (float)(byte)(bVar4 * bVar4) * fVar47;
    bVar4 = *local_d8 & 0xf;
    fVar119 = fVar119 + (float)(byte)(bVar12 * bVar12) * fVar123;
    fVar85 = fVar85 - (float)(byte)(bVar4 * bVar4) * fVar123;
    fVar123 = fVar44 - (float)(byte)(bVar13 * bVar13) * fVar76;
    bVar4 = local_d8[1] & 0xf;
    uStack_f4 = 0;
    uStack_e4 = 0;
    fVar80 = fVar80 - (float)(byte)(bVar4 * bVar4) * fVar47;
    fVar44 = fVar44 - (float)(byte)(bVar6 * bVar6) * fVar76;
    lVar18 = *param_4;
    uVar36 = *(uint *)(param_4 + 1);
    uVar41 = (ulong)uVar36;
    uVar37 = *(uint *)((long)param_4 + 0xc);
    uVar38 = uVar36 + 1;
    lVar30 = lVar18;
    local_130 = fVar83;
    fStack_12c = fVar86;
    fStack_128 = fVar125;
    local_120 = fVar124;
    fStack_11c = fVar111;
    fStack_118 = fVar123;
    local_110 = uVar39;
    local_100 = fVar119;
    fStack_fc = fVar45;
    fStack_f8 = fVar74;
    local_f0 = fVar85;
    fStack_ec = fVar80;
    fStack_e8 = fVar44;
    local_e0 = uVar22;
    if ((int)(uVar37 & 0x3fffffff) <= (int)uVar36) {
      if (0x3ffffffe < (int)uVar36) {
        FUN_032bd0a8(uVar38);
        uVar37 = *(uint *)((long)param_4 + 0xc);
      }
      uVar23 = (uVar37 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar23) {
        uVar23 = 0x3fffffff;
      }
      uVar3 = uVar38;
      if ((int)uVar38 <= (int)uVar23) {
        uVar3 = uVar23;
      }
      FUN_032bd100(uVar3,0x60,uVar37,&local_a0);
      uVar37 = *(uint *)((long)param_4 + 0xc);
      lVar30 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
      if (0 < (int)uVar36) {
        uVar40 = uVar41 & 3;
        if (uVar41 - 1 < 3) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          puVar28 = (undefined8 *)(lVar30 + 0xc0);
          puVar33 = (undefined8 *)(lVar18 + 0xc0);
          do {
            uVar48 = puVar33[-0xd];
            lVar19 = lVar19 + 4;
            puVar28[-0xf] = puVar33[-0xf];
            puVar28[-0xd] = uVar48;
            uVar48 = puVar33[-0x11];
            puVar28[-0x13] = puVar33[-0x13];
            puVar28[-0x11] = uVar48;
            uVar48 = puVar33[-0x15];
            puVar28[-0x17] = puVar33[-0x17];
            puVar28[-0x15] = uVar48;
            uVar48 = puVar33[-0x18];
            puVar28[-0x16] = puVar33[-0x16];
            puVar28[-0x18] = uVar48;
            uVar48 = puVar33[-0x14];
            puVar28[-0x12] = puVar33[-0x12];
            puVar28[-0x14] = uVar48;
            uVar48 = puVar33[-0x10];
            puVar28[-0xe] = puVar33[-0xe];
            puVar28[-0x10] = uVar48;
            uVar48 = puVar33[-1];
            puVar28[-3] = puVar33[-3];
            puVar28[-1] = uVar48;
            uVar48 = puVar33[-5];
            puVar28[-7] = puVar33[-7];
            puVar28[-5] = uVar48;
            uVar48 = puVar33[-9];
            puVar28[-0xb] = puVar33[-0xb];
            puVar28[-9] = uVar48;
            uVar48 = puVar33[-0xc];
            puVar28[-10] = puVar33[-10];
            puVar28[-0xc] = uVar48;
            uVar48 = puVar33[-8];
            puVar28[-6] = puVar33[-6];
            puVar28[-8] = uVar48;
            uVar48 = puVar33[-4];
            puVar28[-2] = puVar33[-2];
            puVar28[-4] = uVar48;
            uVar48 = puVar33[0xb];
            puVar28[9] = puVar33[9];
            puVar28[0xb] = uVar48;
            uVar48 = puVar33[7];
            puVar28[5] = puVar33[5];
            puVar28[7] = uVar48;
            uVar48 = puVar33[3];
            puVar28[1] = puVar33[1];
            puVar28[3] = uVar48;
            uVar48 = *puVar33;
            puVar28[2] = puVar33[2];
            *puVar28 = uVar48;
            uVar48 = puVar33[4];
            puVar28[6] = puVar33[6];
            puVar28[4] = uVar48;
            uVar48 = puVar33[8];
            puVar28[10] = puVar33[10];
            puVar28[8] = uVar48;
            uVar48 = puVar33[0x17];
            puVar28[0x15] = puVar33[0x15];
            puVar28[0x17] = uVar48;
            uVar48 = puVar33[0x13];
            puVar28[0x11] = puVar33[0x11];
            puVar28[0x13] = uVar48;
            uVar48 = puVar33[0xf];
            puVar28[0xd] = puVar33[0xd];
            puVar28[0xf] = uVar48;
            uVar48 = puVar33[0xc];
            puVar28[0xe] = puVar33[0xe];
            puVar28[0xc] = uVar48;
            uVar48 = puVar33[0x10];
            puVar28[0x12] = puVar33[0x12];
            puVar28[0x10] = uVar48;
            uVar48 = puVar33[0x14];
            puVar28[0x16] = puVar33[0x16];
            puVar28[0x14] = uVar48;
            puVar28 = puVar28 + 0x30;
            puVar33 = puVar33 + 0x30;
          } while (uVar41 - uVar40 != lVar19);
        }
        if ((uVar36 & 3) != 0) {
          puVar28 = (undefined8 *)(lVar18 + lVar19 * 0x60);
          puVar33 = (undefined8 *)(lVar30 + lVar19 * 0x60);
          do {
            uVar48 = puVar28[0xb];
            uVar40 = uVar40 - 1;
            puVar33[9] = puVar28[9];
            puVar33[0xb] = uVar48;
            uVar48 = puVar28[7];
            puVar33[5] = puVar28[5];
            puVar33[7] = uVar48;
            uVar48 = puVar28[3];
            puVar33[1] = puVar28[1];
            puVar33[3] = uVar48;
            uVar48 = *puVar28;
            puVar33[2] = puVar28[2];
            *puVar33 = uVar48;
            uVar48 = puVar28[4];
            puVar33[6] = puVar28[6];
            puVar33[4] = uVar48;
            uVar48 = puVar28[8];
            puVar33[10] = puVar28[10];
            puVar33[8] = uVar48;
            puVar28 = puVar28 + 0xc;
            puVar33 = puVar33 + 0xc;
          } while (uVar40 != 0);
        }
      }
      if (-1 < (int)uVar37) {
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,((ulong)uVar37 & 0x3fffffff) * 0x60);
      }
      if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
        uVar21 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
      }
      else {
        uVar21 = 0x3fffffff;
      }
      uVar36 = *(uint *)(param_4 + 1);
      *(undefined4 *)((long)param_4 + 0xc) = uVar21;
      *param_4 = lVar30;
    }
    *(uint *)(param_4 + 1) = uVar38;
    puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar36 * 0x60);
    *(undefined4 *)(puVar28 + 4) = uVar22;
    *(undefined4 *)(puVar28 + 10) = uVar22;
    puVar28[1] = (ulong)(uint)fVar74;
    *puVar28 = CONCAT44(fVar45,fVar119);
    puVar28[3] = (ulong)(uint)fVar44;
    puVar28[2] = CONCAT44(fVar80,fVar85);
    puVar28[7] = (ulong)(uint)fVar74;
    puVar28[6] = CONCAT44(fVar45,fVar119);
    puVar28[9] = (ulong)(uint)fVar44;
    puVar28[8] = CONCAT44(fVar80,fVar85);
    auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
    uVar48 = NEON_fmax(uVar14,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    fVar75 = local_130 * auVar87._0_4_;
    fVar79 = fStack_12c * auVar87._4_4_;
    fVar82 = fStack_128 * auVar87._8_4_;
    fVar84 = fStack_124 * auVar87._12_4_;
    fVar47 = local_120 * auVar87._0_4_;
    fVar120 = fStack_11c * auVar87._4_4_;
    fVar122 = fStack_118 * auVar87._8_4_;
    fVar81 = fStack_114 * auVar87._12_4_;
    FUN_0333e220(lVar1,&local_100,&local_a0);
    fVar76 = (fStack_90 - local_a0) * (float)local_1d0;
    fVar121 = (fStack_8c - fStack_9c) * local_1d0._4_4_;
    fVar78 = (fStack_88 - fStack_98) * (float)uStack_1c8;
    fVar46 = (fStack_84 - fStack_94) * uStack_1c8._4_4_;
    auVar101._0_4_ = (local_a0 + fStack_90) * (float)local_1d0;
    auVar101._4_4_ = (fStack_9c + fStack_8c) * local_1d0._4_4_;
    auVar101._8_4_ = (fStack_98 + fStack_88) * (float)uStack_1c8;
    auVar101._12_4_ = (fStack_94 + fStack_84) * uStack_1c8._4_4_;
    auVar88._0_4_ = fVar75 - fVar76;
    auVar88._4_4_ = fVar79 - fVar121;
    auVar88._8_4_ = fVar82 - fVar78;
    auVar88._12_4_ = fVar84 - fVar46;
    auVar96._0_4_ = fVar47 + fVar76;
    auVar96._4_4_ = fVar120 + fVar121;
    auVar96._8_4_ = fVar122 + fVar78;
    auVar96._12_4_ = fVar81 + fVar46;
    auVar87 = NEON_fmax(auVar88,auVar101,4);
    auVar87 = NEON_fmin(auVar96,auVar87,4);
    fVar47 = auVar101._0_4_ - auVar87._0_4_;
    fVar76 = auVar101._4_4_ - auVar87._4_4_;
    fVar120 = auVar101._8_4_ - auVar87._8_4_;
    fVar121 = auVar101._12_4_ - auVar87._12_4_;
    auVar54._0_4_ = fVar47 * fVar47;
    auVar54._4_4_ = fVar76 * fVar76;
    auVar54._8_4_ = fVar120 * fVar120;
    auVar54._12_4_ = fVar121 * fVar121;
    auVar87 = NEON_ext(auVar54,auVar54,8,1);
    if (auVar54._0_4_ + auVar54._4_4_ + auVar87._0_4_ <= (float)uVar48 * (float)uVar48) {
      uVar36 = *(uint *)(param_4 + 1);
      uVar41 = (ulong)uVar36;
      uVar37 = *(uint *)((long)param_4 + 0xc);
      lVar18 = *param_4;
      uVar38 = uVar36 + 1;
      lVar30 = lVar18;
      if ((int)(uVar37 & 0x3fffffff) <= (int)uVar36) {
        if (0x3ffffffe < (int)uVar36) {
          FUN_032bd0a8(uVar38);
          uVar37 = *(uint *)((long)param_4 + 0xc);
        }
        uVar23 = (uVar37 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar23) {
          uVar23 = 0x3fffffff;
        }
        uVar3 = uVar38;
        if ((int)uVar38 <= (int)uVar23) {
          uVar3 = uVar23;
        }
        FUN_032bd100(uVar3,0x60,uVar37,&local_a0);
        uVar37 = *(uint *)((long)param_4 + 0xc);
        lVar30 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
        if (0 < (int)uVar36) {
          uVar40 = uVar41 & 3;
          if (uVar41 - 1 < 3) {
            lVar19 = 0;
          }
          else {
            lVar19 = 0;
            puVar28 = (undefined8 *)(lVar30 + 0xc0);
            puVar33 = (undefined8 *)(lVar18 + 0xc0);
            do {
              uVar48 = puVar33[-0xd];
              lVar19 = lVar19 + 4;
              puVar28[-0xf] = puVar33[-0xf];
              puVar28[-0xd] = uVar48;
              uVar48 = puVar33[-0x11];
              puVar28[-0x13] = puVar33[-0x13];
              puVar28[-0x11] = uVar48;
              uVar48 = puVar33[-0x15];
              puVar28[-0x17] = puVar33[-0x17];
              puVar28[-0x15] = uVar48;
              uVar48 = puVar33[-0x18];
              puVar28[-0x16] = puVar33[-0x16];
              puVar28[-0x18] = uVar48;
              uVar48 = puVar33[-0x14];
              puVar28[-0x12] = puVar33[-0x12];
              puVar28[-0x14] = uVar48;
              uVar48 = puVar33[-0x10];
              puVar28[-0xe] = puVar33[-0xe];
              puVar28[-0x10] = uVar48;
              uVar48 = puVar33[-1];
              puVar28[-3] = puVar33[-3];
              puVar28[-1] = uVar48;
              uVar48 = puVar33[-5];
              puVar28[-7] = puVar33[-7];
              puVar28[-5] = uVar48;
              uVar48 = puVar33[-9];
              puVar28[-0xb] = puVar33[-0xb];
              puVar28[-9] = uVar48;
              uVar48 = puVar33[-0xc];
              puVar28[-10] = puVar33[-10];
              puVar28[-0xc] = uVar48;
              uVar48 = puVar33[-8];
              puVar28[-6] = puVar33[-6];
              puVar28[-8] = uVar48;
              uVar48 = puVar33[-4];
              puVar28[-2] = puVar33[-2];
              puVar28[-4] = uVar48;
              uVar48 = puVar33[0xb];
              puVar28[9] = puVar33[9];
              puVar28[0xb] = uVar48;
              uVar48 = puVar33[7];
              puVar28[5] = puVar33[5];
              puVar28[7] = uVar48;
              uVar48 = puVar33[3];
              puVar28[1] = puVar33[1];
              puVar28[3] = uVar48;
              uVar48 = *puVar33;
              puVar28[2] = puVar33[2];
              *puVar28 = uVar48;
              uVar48 = puVar33[4];
              puVar28[6] = puVar33[6];
              puVar28[4] = uVar48;
              uVar48 = puVar33[8];
              puVar28[10] = puVar33[10];
              puVar28[8] = uVar48;
              uVar48 = puVar33[0x17];
              puVar28[0x15] = puVar33[0x15];
              puVar28[0x17] = uVar48;
              uVar48 = puVar33[0x13];
              puVar28[0x11] = puVar33[0x11];
              puVar28[0x13] = uVar48;
              uVar48 = puVar33[0xf];
              puVar28[0xd] = puVar33[0xd];
              puVar28[0xf] = uVar48;
              uVar48 = puVar33[0xc];
              puVar28[0xe] = puVar33[0xe];
              puVar28[0xc] = uVar48;
              uVar48 = puVar33[0x10];
              puVar28[0x12] = puVar33[0x12];
              puVar28[0x10] = uVar48;
              uVar48 = puVar33[0x14];
              puVar28[0x16] = puVar33[0x16];
              puVar28[0x14] = uVar48;
              puVar28 = puVar28 + 0x30;
              puVar33 = puVar33 + 0x30;
            } while (uVar41 - uVar40 != lVar19);
          }
          if ((uVar36 & 3) != 0) {
            puVar28 = (undefined8 *)(lVar18 + lVar19 * 0x60);
            puVar33 = (undefined8 *)(lVar30 + lVar19 * 0x60);
            do {
              uVar48 = puVar28[0xb];
              uVar40 = uVar40 - 1;
              puVar33[9] = puVar28[9];
              puVar33[0xb] = uVar48;
              uVar48 = puVar28[7];
              puVar33[5] = puVar28[5];
              puVar33[7] = uVar48;
              uVar48 = puVar28[3];
              puVar33[1] = puVar28[1];
              puVar33[3] = uVar48;
              uVar48 = *puVar28;
              puVar33[2] = puVar28[2];
              *puVar33 = uVar48;
              uVar48 = puVar28[4];
              puVar33[6] = puVar28[6];
              puVar33[4] = uVar48;
              uVar48 = puVar28[8];
              puVar33[10] = puVar28[10];
              puVar33[8] = uVar48;
              puVar28 = puVar28 + 0xc;
              puVar33 = puVar33 + 0xc;
            } while (uVar40 != 0);
          }
        }
        if (-1 < (int)uVar37) {
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,((ulong)uVar37 & 0x3fffffff) * 0x60);
        }
        if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
          uVar21 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
        }
        else {
          uVar21 = 0x3fffffff;
        }
        *(undefined4 *)((long)param_4 + 0xc) = uVar21;
        uVar36 = *(uint *)(param_4 + 1);
        *param_4 = lVar30;
      }
      puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar36 * 0x60);
      *(uint *)(param_4 + 1) = uVar38;
      *(uint *)(puVar28 + 4) = uVar39;
      puVar28[1] = (ulong)(uint)fVar125;
      *puVar28 = CONCAT44(fVar86,fVar83);
      puVar28[3] = (ulong)(uint)fVar123;
      puVar28[2] = CONCAT44(fVar111,fVar124);
      *(undefined4 *)(puVar28 + 10) = uVar22;
      puVar28[7] = (ulong)(uint)fVar74;
      puVar28[6] = CONCAT44(fVar45,fVar119);
      puVar28[9] = (ulong)(uint)fVar44;
      puVar28[8] = CONCAT44(fVar80,fVar85);
    }
    lVar18 = CONCAT44(fStack_124,fStack_128);
    lVar30 = CONCAT44(fStack_12c,local_130);
    lVar20 = CONCAT44(fStack_114,fStack_118);
    lVar19 = CONCAT44(fStack_11c,local_120);
    uVar41 = (ulong)local_110;
    local_b0 = local_110;
    local_a8 = local_108;
    fStack_b8 = fStack_118;
    fStack_b4 = fStack_114;
    fStack_c0 = local_120;
    local_bc = fStack_11c;
    pbVar42 = local_108;
    local_d0 = lVar30;
    lStack_c8 = lVar18;
  }
LAB_00199dd0:
  iVar31 = (int)param_4[1];
  if (iVar31 <= (int)lVar16) {
    return;
  }
  do {
    *(int *)(param_4 + 1) = (int)((long)iVar31 + -1);
    plVar29 = (long *)(*param_4 + ((long)iVar31 + -1) * 0x60);
    local_b0 = *(uint *)(plVar29 + 10);
    uVar40 = (ulong)(int)local_b0;
    iVar31 = (int)plVar29[4];
    uVar41 = (ulong)iVar31;
    lVar18 = plVar29[1];
    lVar30 = *plVar29;
    lVar20 = plVar29[3];
    lVar19 = plVar29[2];
    lStack_c8 = plVar29[7];
    local_d0 = plVar29[6];
    lVar32 = plVar29[9];
    lVar27 = plVar29[8];
    fStack_b8 = (float)lVar32;
    fStack_b4 = (float)((ulong)lVar32 >> 0x20);
    fStack_c0 = (float)lVar27;
    local_bc = (float)((ulong)lVar27 >> 0x20);
    local_a8 = (byte *)((long)param_3 + uVar40 * 5 + *param_3);
    pbVar42 = (byte *)((long)param_2 + uVar41 * 5 + *param_2);
    uVar38 = local_b0;
    if ((param_1 & 1) != 0) goto LAB_00197760;
LAB_0019776c:
    lVar35 = local_d0;
    bVar4 = pbVar42[3];
    fVar47 = (float)lVar19;
    fVar76 = (float)((ulong)lVar19 >> 0x20);
    fVar85 = (float)((ulong)lVar20 >> 0x20);
    fVar83 = (float)lVar30;
    fVar80 = (float)((ulong)lVar30 >> 0x20);
    fVar86 = (float)((ulong)lVar18 >> 0x20);
    fVar44 = (float)lVar18;
    fVar45 = (float)lVar20;
    fVar123 = (float)lStack_c8;
    local_220 = auVar53._0_4_;
    fStack_21c = auVar53._4_4_;
    fStack_218 = auVar53._8_4_;
    fStack_214 = auVar53._12_4_;
    fVar74 = (float)local_d0;
    if ((char)bVar4 < '\0') {
      lVar18 = (long)iVar31 + 1;
      fVar124 = (fVar47 - fVar83) * fVar43;
      fVar125 = (fVar76 - fVar80) * fVar73;
      fVar111 = (fVar45 - fVar44) * fVar77;
      lVar30 = (long)iVar31 + (ulong)((uint)pbVar42[4] | (bVar4 & 0x7f) << 8) * 2;
      pbVar42 = (byte *)((long)param_2 + lVar18 * 5 + *param_2);
      bVar4 = *pbVar42 & 0xf;
      bVar6 = *pbVar42 >> 4;
      fVar119 = fVar83 + (float)(byte)(bVar6 * bVar6) * fVar124;
      pbVar2 = (byte *)((long)param_2 + lVar30 * 5 + *param_2);
      bVar12 = *pbVar2 >> 4;
      bVar6 = *pbVar2 & 0xf;
      fVar120 = fVar47 - (float)(byte)(bVar4 * bVar4) * fVar124;
      bVar13 = pbVar42[1] >> 4;
      bVar4 = pbVar42[1] & 0xf;
      fVar83 = fVar83 + (float)(byte)(bVar12 * bVar12) * fVar124;
      fVar121 = fVar80 + (float)(byte)(bVar13 * bVar13) * fVar125;
      bVar13 = pbVar2[1] >> 4;
      bVar5 = pbVar2[2] >> 4;
      bVar12 = pbVar2[2] & 0xf;
      fVar122 = fVar76 - (float)(byte)(bVar4 * bVar4) * fVar125;
      bVar8 = pbVar42[2] >> 4;
      fVar80 = fVar80 + (float)(byte)(bVar13 * bVar13) * fVar125;
      bVar4 = pbVar42[2] & 0xf;
      fVar85 = fVar44 + (float)(byte)(bVar8 * bVar8) * fVar111;
      fVar86 = fVar45 - (float)(byte)(bVar4 * bVar4) * fVar111;
      bVar4 = pbVar2[1] & 0xf;
      fVar44 = fVar44 + (float)(byte)(bVar5 * bVar5) * fVar111;
      fVar47 = fVar47 - (float)(byte)(bVar6 * bVar6) * fVar124;
      fVar76 = fVar76 - (float)(byte)(bVar4 * bVar4) * fVar125;
      fVar45 = fVar45 - (float)(byte)(bVar12 * bVar12) * fVar111;
      uVar22 = (undefined4)lVar30;
      uVar21 = (undefined4)lVar18;
      if ((char)local_a8[3] < '\0') {
        lVar18 = (long)(int)local_b0 + 1;
        local_110 = (uint)lVar18;
        fVar123 = fVar43 * (fStack_c0 - fVar74);
        fVar124 = fVar73 * (local_bc - local_d0._4_4_);
        fVar125 = fVar77 * (fStack_b8 - (float)lStack_c8);
        lVar30 = (long)(int)local_b0 + (ulong)((uint)local_a8[4] | (local_a8[3] & 0x7f) << 8) * 2;
        local_e0 = (undefined4)lVar30;
        local_108 = (byte *)((long)param_3 + lVar18 * 5 + *param_3);
        local_d8 = (byte *)((long)param_3 + lVar30 * 5 + *param_3);
        bVar12 = *local_108 >> 4;
        bVar4 = *local_108 & 0xf;
        bVar13 = local_108[1] >> 4;
        bVar5 = local_108[2] >> 4;
        bVar6 = local_108[2] & 0xf;
        local_130 = (float)(byte)(bVar12 * bVar12) * fVar123 + fVar74;
        fStack_124 = 0.0;
        fStack_12c = (float)(byte)(bVar13 * bVar13) * fVar124 + local_d0._4_4_;
        fStack_114 = 0.0;
        fStack_128 = (float)(byte)(bVar5 * bVar5) * fVar125 + (float)lStack_c8;
        bVar12 = local_108[1] & 0xf;
        bVar8 = local_d8[1] >> 4;
        bVar9 = local_d8[2] >> 4;
        bVar13 = local_d8[1] & 0xf;
        bVar5 = local_d8[2] & 0xf;
        local_120 = fStack_c0 - (float)(byte)(bVar4 * bVar4) * fVar123;
        fStack_118 = fStack_b8 - (float)(byte)(bVar6 * bVar6) * fVar125;
        bVar6 = *local_d8 >> 4;
        fStack_11c = local_bc - (float)(byte)(bVar12 * bVar12) * fVar124;
        bVar4 = *local_d8 & 0xf;
        uStack_e4 = 0;
        local_100 = fVar74 + (float)(byte)(bVar6 * bVar6) * fVar123;
        fStack_fc = (float)(byte)(bVar8 * bVar8) * fVar124 + local_d0._4_4_;
        uStack_f4 = 0;
        fStack_f8 = (float)(byte)(bVar9 * bVar9) * fVar125 + (float)lStack_c8;
        local_f0 = fStack_c0 - (float)(byte)(bVar4 * bVar4) * fVar123;
        fStack_ec = local_bc - (float)(byte)(bVar13 * bVar13) * fVar124;
        fStack_e8 = fStack_b8 - (float)(byte)(bVar5 * bVar5) * fVar125;
        uVar50 = NEON_fmax(uVar14,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar1,&local_130,&local_a0);
        fVar123 = (fStack_90 - local_a0) * (float)local_1d0;
        fVar74 = (fStack_8c - fStack_9c) * local_1d0._4_4_;
        fVar124 = (fStack_88 - fStack_98) * (float)uStack_1c8;
        fVar125 = (fStack_84 - fStack_94) * uStack_1c8._4_4_;
        auVar106._0_4_ = (local_a0 + fStack_90) * (float)local_1d0;
        auVar106._4_4_ = (fStack_9c + fStack_8c) * local_1d0._4_4_;
        auVar106._8_4_ = (fStack_98 + fStack_88) * (float)uStack_1c8;
        auVar106._12_4_ = (fStack_94 + fStack_84) * uStack_1c8._4_4_;
        auVar93._0_4_ = fVar119 * auVar87._0_4_ - fVar123;
        auVar93._4_4_ = fVar121 * auVar87._4_4_ - fVar74;
        auVar93._8_4_ = fVar85 * auVar87._8_4_ - fVar124;
        auVar93._12_4_ = auVar87._12_4_ * 0.0 - fVar125;
        auVar63._0_4_ = fVar120 * auVar87._0_4_ + fVar123;
        auVar63._4_4_ = fVar122 * auVar87._4_4_ + fVar74;
        auVar63._8_4_ = fVar86 * auVar87._8_4_ + fVar124;
        auVar63._12_4_ = auVar87._12_4_ * 0.0 + fVar125;
        auVar87 = NEON_fmax(auVar93,auVar106,4);
        auVar87 = NEON_fmin(auVar63,auVar87,4);
        fVar123 = auVar106._0_4_ - auVar87._0_4_;
        fVar74 = auVar106._4_4_ - auVar87._4_4_;
        fVar124 = auVar106._8_4_ - auVar87._8_4_;
        fVar125 = auVar106._12_4_ - auVar87._12_4_;
        auVar64._0_4_ = fVar123 * fVar123;
        auVar64._4_4_ = fVar74 * fVar74;
        auVar64._8_4_ = fVar124 * fVar124;
        auVar64._12_4_ = fVar125 * fVar125;
        auVar100 = NEON_ext(auVar64,auVar64,8,1);
        uVar34 = NEON_fmax(uVar14,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar1,&local_100,&local_a0);
        fVar123 = (float)local_1d0 * (fStack_90 - local_a0);
        fVar74 = local_1d0._4_4_ * (fStack_8c - fStack_9c);
        fVar124 = (float)uStack_1c8 * (fStack_88 - fStack_98);
        fVar125 = uStack_1c8._4_4_ * (fStack_84 - fStack_94);
        auVar107._0_4_ = (float)local_1d0 * (local_a0 + fStack_90);
        auVar107._4_4_ = local_1d0._4_4_ * (fStack_9c + fStack_8c);
        auVar107._8_4_ = (float)uStack_1c8 * (fStack_98 + fStack_88);
        auVar107._12_4_ = uStack_1c8._4_4_ * (fStack_94 + fStack_84);
        auVar94._0_4_ = fVar119 * auVar87._0_4_ - fVar123;
        auVar94._4_4_ = fVar121 * auVar87._4_4_ - fVar74;
        auVar94._8_4_ = fVar85 * auVar87._8_4_ - fVar124;
        auVar94._12_4_ = auVar87._12_4_ * 0.0 - fVar125;
        auVar65._0_4_ = fVar120 * auVar87._0_4_ + fVar123;
        auVar65._4_4_ = fVar122 * auVar87._4_4_ + fVar74;
        auVar65._8_4_ = fVar86 * auVar87._8_4_ + fVar124;
        auVar65._12_4_ = auVar87._12_4_ * 0.0 + fVar125;
        auVar87 = NEON_fmax(auVar94,auVar107,4);
        auVar87 = NEON_fmin(auVar65,auVar87,4);
        fVar123 = auVar107._0_4_ - auVar87._0_4_;
        fVar74 = auVar107._4_4_ - auVar87._4_4_;
        fVar124 = auVar107._8_4_ - auVar87._8_4_;
        fVar125 = auVar107._12_4_ - auVar87._12_4_;
        auVar66._0_4_ = fVar123 * fVar123;
        auVar66._4_4_ = fVar74 * fVar74;
        auVar66._8_4_ = fVar124 * fVar124;
        auVar66._12_4_ = fVar125 * fVar125;
        auVar112 = NEON_ext(auVar66,auVar66,8,1);
        uVar51 = NEON_fmax(uVar14,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar1,&local_130,&local_a0);
        fVar123 = (float)local_1d0 * (fStack_90 - local_a0);
        fVar74 = local_1d0._4_4_ * (fStack_8c - fStack_9c);
        fVar124 = (float)uStack_1c8 * (fStack_88 - fStack_98);
        fVar125 = uStack_1c8._4_4_ * (fStack_84 - fStack_94);
        auVar108._0_4_ = (float)local_1d0 * (local_a0 + fStack_90);
        auVar108._4_4_ = local_1d0._4_4_ * (fStack_9c + fStack_8c);
        auVar108._8_4_ = (float)uStack_1c8 * (fStack_98 + fStack_88);
        auVar108._12_4_ = uStack_1c8._4_4_ * (fStack_94 + fStack_84);
        auVar95._0_4_ = fVar83 * auVar87._0_4_ - fVar123;
        auVar95._4_4_ = fVar80 * auVar87._4_4_ - fVar74;
        auVar95._8_4_ = fVar44 * auVar87._8_4_ - fVar124;
        auVar95._12_4_ = auVar87._12_4_ * 0.0 - fVar125;
        auVar67._0_4_ = fVar47 * auVar87._0_4_ + fVar123;
        auVar67._4_4_ = fVar76 * auVar87._4_4_ + fVar74;
        auVar67._8_4_ = fVar45 * auVar87._8_4_ + fVar124;
        auVar67._12_4_ = auVar87._12_4_ * 0.0 + fVar125;
        auVar87 = NEON_fmax(auVar95,auVar108,4);
        auVar87 = NEON_fmin(auVar67,auVar87,4);
        fVar123 = auVar108._0_4_ - auVar87._0_4_;
        fVar74 = auVar108._4_4_ - auVar87._4_4_;
        fVar124 = auVar108._8_4_ - auVar87._8_4_;
        fVar125 = auVar108._12_4_ - auVar87._12_4_;
        auVar68._0_4_ = fVar123 * fVar123;
        auVar68._4_4_ = fVar74 * fVar74;
        auVar68._8_4_ = fVar124 * fVar124;
        auVar68._12_4_ = fVar125 * fVar125;
        auVar96 = NEON_ext(auVar68,auVar68,8,1);
        uVar52 = NEON_fmax(uVar14,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar1,&local_100,&local_a0);
        uVar24 = local_e0;
        uVar38 = local_110;
        fVar46 = fStack_114;
        fVar81 = fStack_118;
        fVar78 = fStack_11c;
        fVar111 = local_120;
        fVar125 = fStack_124;
        fVar124 = fStack_128;
        fVar74 = fStack_12c;
        fVar123 = local_130;
        fVar75 = (float)local_1d0 * (fStack_90 - local_a0);
        fVar79 = local_1d0._4_4_ * (fStack_8c - fStack_9c);
        fVar82 = (float)uStack_1c8 * (fStack_88 - fStack_98);
        fVar84 = uStack_1c8._4_4_ * (fStack_84 - fStack_94);
        auVar109._0_4_ = (float)local_1d0 * (local_a0 + fStack_90);
        auVar109._4_4_ = local_1d0._4_4_ * (fStack_9c + fStack_8c);
        auVar109._8_4_ = (float)uStack_1c8 * (fStack_98 + fStack_88);
        auVar109._12_4_ = uStack_1c8._4_4_ * (fStack_94 + fStack_84);
        auVar97._0_4_ = fVar83 * auVar87._0_4_ - fVar75;
        auVar97._4_4_ = fVar80 * auVar87._4_4_ - fVar79;
        auVar97._8_4_ = fVar44 * auVar87._8_4_ - fVar82;
        auVar97._12_4_ = auVar87._12_4_ * 0.0 - fVar84;
        auVar69._0_4_ = fVar47 * auVar87._0_4_ + fVar75;
        auVar69._4_4_ = fVar76 * auVar87._4_4_ + fVar79;
        auVar69._8_4_ = fVar45 * auVar87._8_4_ + fVar82;
        auVar69._12_4_ = auVar87._12_4_ * 0.0 + fVar84;
        auVar87 = NEON_fmax(auVar97,auVar109,4);
        uVar48 = CONCAT44(fStack_fc,local_100);
        auVar118._8_4_ = fStack_f8;
        auVar118._0_8_ = uVar48;
        auVar118._12_4_ = uStack_f4;
        uVar49 = CONCAT44(fStack_ec,local_f0);
        auVar115._8_4_ = fStack_e8;
        auVar115._0_8_ = uVar49;
        auVar115._12_4_ = uStack_e4;
        auVar87 = NEON_fmin(auVar69,auVar87,4);
        fVar75 = auVar109._0_4_ - auVar87._0_4_;
        fVar79 = auVar109._4_4_ - auVar87._4_4_;
        fVar82 = auVar109._8_4_ - auVar87._8_4_;
        fVar84 = auVar109._12_4_ - auVar87._12_4_;
        auVar70._0_4_ = fVar75 * fVar75;
        auVar70._4_4_ = fVar79 * fVar79;
        auVar70._8_4_ = fVar82 * fVar82;
        auVar70._12_4_ = fVar84 * fVar84;
        auVar87 = NEON_ext(auVar70,auVar70,8,1);
        if (auVar70._0_4_ + auVar70._4_4_ + auVar87._0_4_ <= (float)uVar52 * (float)uVar52) {
          uVar37 = *(uint *)(param_4 + 1);
          uVar41 = (ulong)uVar37;
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar30 = *param_4;
          uVar36 = uVar37 + 1;
          if ((int)uVar37 < (int)(uVar39 & 0x3fffffff)) {
            lVar18 = lVar30;
          }
          else {
            if (0x3ffffffe < (int)uVar37) {
              FUN_032bd0a8(uVar36);
              uVar39 = *(uint *)((long)param_4 + 0xc);
            }
            uVar23 = (uVar39 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar3 = uVar36;
            if ((int)uVar36 <= (int)uVar23) {
              uVar3 = uVar23;
            }
            FUN_032bd100(uVar3,0x60,uVar39,&local_a0);
            uVar39 = *(uint *)((long)param_4 + 0xc);
            lVar18 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar37) {
              uVar40 = uVar41 & 3;
              if (uVar41 - 1 < 3) {
                lVar19 = 0;
              }
              else {
                lVar19 = 0;
                puVar28 = (undefined8 *)(lVar18 + 0xc0);
                puVar33 = (undefined8 *)(lVar30 + 0xc0);
                do {
                  uVar52 = puVar33[-0xd];
                  lVar19 = lVar19 + 4;
                  puVar28[-0xf] = puVar33[-0xf];
                  puVar28[-0xd] = uVar52;
                  uVar52 = puVar33[-0x11];
                  puVar28[-0x13] = puVar33[-0x13];
                  puVar28[-0x11] = uVar52;
                  uVar52 = puVar33[-0x15];
                  puVar28[-0x17] = puVar33[-0x17];
                  puVar28[-0x15] = uVar52;
                  uVar52 = puVar33[-0x18];
                  puVar28[-0x16] = puVar33[-0x16];
                  puVar28[-0x18] = uVar52;
                  uVar52 = puVar33[-0x14];
                  puVar28[-0x12] = puVar33[-0x12];
                  puVar28[-0x14] = uVar52;
                  uVar52 = puVar33[-0x10];
                  puVar28[-0xe] = puVar33[-0xe];
                  puVar28[-0x10] = uVar52;
                  uVar52 = puVar33[-1];
                  puVar28[-3] = puVar33[-3];
                  puVar28[-1] = uVar52;
                  uVar52 = puVar33[-5];
                  puVar28[-7] = puVar33[-7];
                  puVar28[-5] = uVar52;
                  uVar52 = puVar33[-9];
                  puVar28[-0xb] = puVar33[-0xb];
                  puVar28[-9] = uVar52;
                  uVar52 = puVar33[-0xc];
                  puVar28[-10] = puVar33[-10];
                  puVar28[-0xc] = uVar52;
                  uVar52 = puVar33[-8];
                  puVar28[-6] = puVar33[-6];
                  puVar28[-8] = uVar52;
                  uVar52 = puVar33[-4];
                  puVar28[-2] = puVar33[-2];
                  puVar28[-4] = uVar52;
                  uVar52 = puVar33[0xb];
                  puVar28[9] = puVar33[9];
                  puVar28[0xb] = uVar52;
                  uVar52 = puVar33[7];
                  puVar28[5] = puVar33[5];
                  puVar28[7] = uVar52;
                  uVar52 = puVar33[3];
                  puVar28[1] = puVar33[1];
                  puVar28[3] = uVar52;
                  uVar52 = *puVar33;
                  puVar28[2] = puVar33[2];
                  *puVar28 = uVar52;
                  uVar52 = puVar33[4];
                  puVar28[6] = puVar33[6];
                  puVar28[4] = uVar52;
                  uVar52 = puVar33[8];
                  puVar28[10] = puVar33[10];
                  puVar28[8] = uVar52;
                  uVar52 = puVar33[0x17];
                  puVar28[0x15] = puVar33[0x15];
                  puVar28[0x17] = uVar52;
                  uVar52 = puVar33[0x13];
                  puVar28[0x11] = puVar33[0x11];
                  puVar28[0x13] = uVar52;
                  uVar52 = puVar33[0xf];
                  puVar28[0xd] = puVar33[0xd];
                  puVar28[0xf] = uVar52;
                  uVar52 = puVar33[0xc];
                  puVar28[0xe] = puVar33[0xe];
                  puVar28[0xc] = uVar52;
                  uVar52 = puVar33[0x10];
                  puVar28[0x12] = puVar33[0x12];
                  puVar28[0x10] = uVar52;
                  uVar52 = puVar33[0x14];
                  puVar28[0x16] = puVar33[0x16];
                  puVar28[0x14] = uVar52;
                  puVar28 = puVar28 + 0x30;
                  puVar33 = puVar33 + 0x30;
                } while (uVar41 - uVar40 != lVar19);
              }
              if ((uVar37 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar30 + lVar19 * 0x60);
                puVar33 = (undefined8 *)(lVar18 + lVar19 * 0x60);
                do {
                  uVar52 = puVar28[0xb];
                  uVar40 = uVar40 - 1;
                  puVar33[9] = puVar28[9];
                  puVar33[0xb] = uVar52;
                  uVar52 = puVar28[7];
                  puVar33[5] = puVar28[5];
                  puVar33[7] = uVar52;
                  uVar52 = puVar28[3];
                  puVar33[1] = puVar28[1];
                  puVar33[3] = uVar52;
                  uVar52 = *puVar28;
                  puVar33[2] = puVar28[2];
                  *puVar33 = uVar52;
                  uVar52 = puVar28[4];
                  puVar33[6] = puVar28[6];
                  puVar33[4] = uVar52;
                  uVar52 = puVar28[8];
                  puVar33[10] = puVar28[10];
                  puVar33[8] = uVar52;
                  puVar28 = puVar28 + 0xc;
                  puVar33 = puVar33 + 0xc;
                } while (uVar40 != 0);
              }
            }
            if (-1 < (int)uVar39) {
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,((ulong)uVar39 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar25 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar25 = 0x3fffffff;
            }
            auVar118._8_8_ = auVar118._8_8_;
            auVar115._8_8_ = auVar115._8_8_;
            *param_4 = lVar18;
            *(undefined4 *)((long)param_4 + 0xc) = uVar25;
            uVar37 = *(uint *)(param_4 + 1);
          }
          puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar37 * 0x60);
          *(uint *)(param_4 + 1) = uVar36;
          *(undefined4 *)(puVar28 + 4) = uVar22;
          puVar28[1] = (ulong)(uint)fVar44;
          *puVar28 = CONCAT44(fVar80,fVar83);
          puVar28[3] = (ulong)(uint)fVar45;
          puVar28[2] = CONCAT44(fVar76,fVar47);
          *(undefined4 *)(puVar28 + 10) = uVar24;
          puVar28[7] = auVar118._8_8_;
          puVar28[6] = auVar118._0_8_;
          puVar28[9] = auVar115._8_8_;
          puVar28[8] = auVar115._0_8_;
        }
        auVar99._4_4_ = fVar122;
        auVar99._0_4_ = fVar120;
        auVar99._8_4_ = fVar86;
        auVar99._12_4_ = 0;
        auVar72._4_4_ = fVar121;
        auVar72._0_4_ = fVar119;
        auVar72._8_4_ = fVar85;
        auVar72._12_4_ = 0;
        if (auVar68._0_4_ + auVar68._4_4_ + auVar96._0_4_ <= (float)uVar51 * (float)uVar51) {
          uVar37 = *(uint *)(param_4 + 1);
          uVar41 = (ulong)uVar37;
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar30 = *param_4;
          uVar36 = uVar37 + 1;
          if ((int)uVar37 < (int)(uVar39 & 0x3fffffff)) {
            lVar18 = lVar30;
          }
          else {
            if (0x3ffffffe < (int)uVar37) {
              FUN_032bd0a8(uVar36);
              uVar39 = *(uint *)((long)param_4 + 0xc);
            }
            uVar23 = (uVar39 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar3 = uVar36;
            if ((int)uVar36 <= (int)uVar23) {
              uVar3 = uVar23;
            }
            FUN_032bd100(uVar3,0x60,uVar39,&local_a0);
            uVar39 = *(uint *)((long)param_4 + 0xc);
            lVar18 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar37) {
              uVar40 = uVar41 & 3;
              if (uVar41 - 1 < 3) {
                lVar19 = 0;
              }
              else {
                lVar19 = 0;
                puVar28 = (undefined8 *)(lVar18 + 0xc0);
                puVar33 = (undefined8 *)(lVar30 + 0xc0);
                do {
                  uVar48 = puVar33[-0xd];
                  lVar19 = lVar19 + 4;
                  puVar28[-0xf] = puVar33[-0xf];
                  puVar28[-0xd] = uVar48;
                  uVar48 = puVar33[-0x11];
                  puVar28[-0x13] = puVar33[-0x13];
                  puVar28[-0x11] = uVar48;
                  uVar48 = puVar33[-0x15];
                  puVar28[-0x17] = puVar33[-0x17];
                  puVar28[-0x15] = uVar48;
                  uVar48 = puVar33[-0x18];
                  puVar28[-0x16] = puVar33[-0x16];
                  puVar28[-0x18] = uVar48;
                  uVar48 = puVar33[-0x14];
                  puVar28[-0x12] = puVar33[-0x12];
                  puVar28[-0x14] = uVar48;
                  uVar48 = puVar33[-0x10];
                  puVar28[-0xe] = puVar33[-0xe];
                  puVar28[-0x10] = uVar48;
                  uVar48 = puVar33[-1];
                  puVar28[-3] = puVar33[-3];
                  puVar28[-1] = uVar48;
                  uVar48 = puVar33[-5];
                  puVar28[-7] = puVar33[-7];
                  puVar28[-5] = uVar48;
                  uVar48 = puVar33[-9];
                  puVar28[-0xb] = puVar33[-0xb];
                  puVar28[-9] = uVar48;
                  uVar48 = puVar33[-0xc];
                  puVar28[-10] = puVar33[-10];
                  puVar28[-0xc] = uVar48;
                  uVar48 = puVar33[-8];
                  puVar28[-6] = puVar33[-6];
                  puVar28[-8] = uVar48;
                  uVar48 = puVar33[-4];
                  puVar28[-2] = puVar33[-2];
                  puVar28[-4] = uVar48;
                  uVar48 = puVar33[0xb];
                  puVar28[9] = puVar33[9];
                  puVar28[0xb] = uVar48;
                  uVar48 = puVar33[7];
                  puVar28[5] = puVar33[5];
                  puVar28[7] = uVar48;
                  uVar48 = puVar33[3];
                  puVar28[1] = puVar33[1];
                  puVar28[3] = uVar48;
                  uVar48 = *puVar33;
                  puVar28[2] = puVar33[2];
                  *puVar28 = uVar48;
                  uVar48 = puVar33[4];
                  puVar28[6] = puVar33[6];
                  puVar28[4] = uVar48;
                  uVar48 = puVar33[8];
                  puVar28[10] = puVar33[10];
                  puVar28[8] = uVar48;
                  uVar48 = puVar33[0x17];
                  puVar28[0x15] = puVar33[0x15];
                  puVar28[0x17] = uVar48;
                  uVar48 = puVar33[0x13];
                  puVar28[0x11] = puVar33[0x11];
                  puVar28[0x13] = uVar48;
                  uVar48 = puVar33[0xf];
                  puVar28[0xd] = puVar33[0xd];
                  puVar28[0xf] = uVar48;
                  uVar48 = puVar33[0xc];
                  puVar28[0xe] = puVar33[0xe];
                  puVar28[0xc] = uVar48;
                  uVar48 = puVar33[0x10];
                  puVar28[0x12] = puVar33[0x12];
                  puVar28[0x10] = uVar48;
                  uVar48 = puVar33[0x14];
                  puVar28[0x16] = puVar33[0x16];
                  puVar28[0x14] = uVar48;
                  puVar28 = puVar28 + 0x30;
                  puVar33 = puVar33 + 0x30;
                } while (uVar41 - uVar40 != lVar19);
              }
              if ((uVar37 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar30 + lVar19 * 0x60);
                puVar33 = (undefined8 *)(lVar18 + lVar19 * 0x60);
                do {
                  uVar48 = puVar28[0xb];
                  uVar40 = uVar40 - 1;
                  puVar33[9] = puVar28[9];
                  puVar33[0xb] = uVar48;
                  uVar48 = puVar28[7];
                  puVar33[5] = puVar28[5];
                  puVar33[7] = uVar48;
                  uVar48 = puVar28[3];
                  puVar33[1] = puVar28[1];
                  puVar33[3] = uVar48;
                  uVar48 = *puVar28;
                  puVar33[2] = puVar28[2];
                  *puVar33 = uVar48;
                  uVar48 = puVar28[4];
                  puVar33[6] = puVar28[6];
                  puVar33[4] = uVar48;
                  uVar48 = puVar28[8];
                  puVar33[10] = puVar28[10];
                  puVar33[8] = uVar48;
                  puVar28 = puVar28 + 0xc;
                  puVar33 = puVar33 + 0xc;
                } while (uVar40 != 0);
              }
            }
            if (-1 < (int)uVar39) {
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,((ulong)uVar39 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar25 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar25 = 0x3fffffff;
            }
            auVar99._12_4_ = 0;
            auVar72._12_4_ = 0;
            uVar37 = *(uint *)(param_4 + 1);
            *param_4 = lVar18;
            *(undefined4 *)((long)param_4 + 0xc) = uVar25;
          }
          puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar37 * 0x60);
          *(uint *)(param_4 + 1) = uVar36;
          puVar28[1] = (ulong)(uint)fVar44;
          *puVar28 = CONCAT44(fVar80,fVar83);
          *(undefined4 *)(puVar28 + 4) = uVar22;
          *(uint *)(puVar28 + 10) = uVar38;
          puVar28[3] = (ulong)(uint)fVar45;
          puVar28[2] = CONCAT44(fVar76,fVar47);
          puVar28[7] = CONCAT44(fVar125,fVar124);
          puVar28[6] = CONCAT44(fVar74,fVar123);
          puVar28[9] = CONCAT44(fVar46,fVar81);
          puVar28[8] = CONCAT44(fVar78,fVar111);
        }
        if (auVar66._0_4_ + auVar66._4_4_ + auVar112._0_4_ <= (float)uVar34 * (float)uVar34) {
          uVar37 = *(uint *)(param_4 + 1);
          uVar41 = (ulong)uVar37;
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar18 = *param_4;
          uVar36 = uVar37 + 1;
          lVar30 = lVar18;
          if ((int)(uVar39 & 0x3fffffff) <= (int)uVar37) {
            if (0x3ffffffe < (int)uVar37) {
              FUN_032bd0a8(uVar36);
              uVar39 = *(uint *)((long)param_4 + 0xc);
            }
            uVar23 = (uVar39 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar3 = uVar36;
            if ((int)uVar36 <= (int)uVar23) {
              uVar3 = uVar23;
            }
            FUN_032bd100(uVar3,0x60,uVar39,&local_a0);
            uVar39 = *(uint *)((long)param_4 + 0xc);
            lVar30 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar37) {
              uVar40 = uVar41 & 3;
              if (uVar41 - 1 < 3) {
                lVar19 = 0;
              }
              else {
                lVar19 = 0;
                puVar28 = (undefined8 *)(lVar30 + 0xc0);
                puVar33 = (undefined8 *)(lVar18 + 0xc0);
                do {
                  uVar48 = puVar33[-0xd];
                  lVar19 = lVar19 + 4;
                  puVar28[-0xf] = puVar33[-0xf];
                  puVar28[-0xd] = uVar48;
                  uVar48 = puVar33[-0x11];
                  puVar28[-0x13] = puVar33[-0x13];
                  puVar28[-0x11] = uVar48;
                  uVar48 = puVar33[-0x15];
                  puVar28[-0x17] = puVar33[-0x17];
                  puVar28[-0x15] = uVar48;
                  uVar48 = puVar33[-0x18];
                  puVar28[-0x16] = puVar33[-0x16];
                  puVar28[-0x18] = uVar48;
                  uVar48 = puVar33[-0x14];
                  puVar28[-0x12] = puVar33[-0x12];
                  puVar28[-0x14] = uVar48;
                  uVar48 = puVar33[-0x10];
                  puVar28[-0xe] = puVar33[-0xe];
                  puVar28[-0x10] = uVar48;
                  uVar48 = puVar33[-1];
                  puVar28[-3] = puVar33[-3];
                  puVar28[-1] = uVar48;
                  uVar48 = puVar33[-5];
                  puVar28[-7] = puVar33[-7];
                  puVar28[-5] = uVar48;
                  uVar48 = puVar33[-9];
                  puVar28[-0xb] = puVar33[-0xb];
                  puVar28[-9] = uVar48;
                  uVar48 = puVar33[-0xc];
                  puVar28[-10] = puVar33[-10];
                  puVar28[-0xc] = uVar48;
                  uVar48 = puVar33[-8];
                  puVar28[-6] = puVar33[-6];
                  puVar28[-8] = uVar48;
                  uVar48 = puVar33[-4];
                  puVar28[-2] = puVar33[-2];
                  puVar28[-4] = uVar48;
                  uVar48 = puVar33[0xb];
                  puVar28[9] = puVar33[9];
                  puVar28[0xb] = uVar48;
                  uVar48 = puVar33[7];
                  puVar28[5] = puVar33[5];
                  puVar28[7] = uVar48;
                  uVar48 = puVar33[3];
                  puVar28[1] = puVar33[1];
                  puVar28[3] = uVar48;
                  uVar48 = *puVar33;
                  puVar28[2] = puVar33[2];
                  *puVar28 = uVar48;
                  uVar48 = puVar33[4];
                  puVar28[6] = puVar33[6];
                  puVar28[4] = uVar48;
                  uVar48 = puVar33[8];
                  puVar28[10] = puVar33[10];
                  puVar28[8] = uVar48;
                  uVar48 = puVar33[0x17];
                  puVar28[0x15] = puVar33[0x15];
                  puVar28[0x17] = uVar48;
                  uVar48 = puVar33[0x13];
                  puVar28[0x11] = puVar33[0x11];
                  puVar28[0x13] = uVar48;
                  uVar48 = puVar33[0xf];
                  puVar28[0xd] = puVar33[0xd];
                  puVar28[0xf] = uVar48;
                  uVar48 = puVar33[0xc];
                  puVar28[0xe] = puVar33[0xe];
                  puVar28[0xc] = uVar48;
                  uVar48 = puVar33[0x10];
                  puVar28[0x12] = puVar33[0x12];
                  puVar28[0x10] = uVar48;
                  uVar48 = puVar33[0x14];
                  puVar28[0x16] = puVar33[0x16];
                  puVar28[0x14] = uVar48;
                  puVar28 = puVar28 + 0x30;
                  puVar33 = puVar33 + 0x30;
                } while (uVar41 - uVar40 != lVar19);
              }
              if ((uVar37 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar18 + lVar19 * 0x60);
                puVar33 = (undefined8 *)(lVar30 + lVar19 * 0x60);
                do {
                  uVar48 = puVar28[0xb];
                  uVar40 = uVar40 - 1;
                  puVar33[9] = puVar28[9];
                  puVar33[0xb] = uVar48;
                  uVar48 = puVar28[7];
                  puVar33[5] = puVar28[5];
                  puVar33[7] = uVar48;
                  uVar48 = puVar28[3];
                  puVar33[1] = puVar28[1];
                  puVar33[3] = uVar48;
                  uVar48 = *puVar28;
                  puVar33[2] = puVar28[2];
                  *puVar33 = uVar48;
                  uVar48 = puVar28[4];
                  puVar33[6] = puVar28[6];
                  puVar33[4] = uVar48;
                  uVar48 = puVar28[8];
                  puVar33[10] = puVar28[10];
                  puVar33[8] = uVar48;
                  puVar28 = puVar28 + 0xc;
                  puVar33 = puVar33 + 0xc;
                } while (uVar40 != 0);
              }
            }
            if (-1 < (int)uVar39) {
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,((ulong)uVar39 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar22 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar22 = 0x3fffffff;
            }
            auVar99._12_4_ = 0;
            auVar72._12_4_ = 0;
            uVar37 = *(uint *)(param_4 + 1);
            *(undefined4 *)((long)param_4 + 0xc) = uVar22;
            *param_4 = lVar30;
          }
          puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar37 * 0x60);
          *(uint *)(param_4 + 1) = uVar36;
          *(undefined4 *)(puVar28 + 4) = uVar21;
          puVar28[1] = auVar72._8_8_;
          *puVar28 = auVar72._0_8_;
          puVar28[3] = auVar99._8_8_;
          puVar28[2] = auVar99._0_8_;
          *(undefined4 *)(puVar28 + 10) = uVar24;
          puVar28[7] = auVar118._8_8_;
          puVar28[6] = auVar118._0_8_;
          puVar28[9] = auVar115._8_8_;
          puVar28[8] = auVar115._0_8_;
        }
        if ((float)uVar50 * (float)uVar50 < auVar64._0_4_ + auVar64._4_4_ + auVar100._0_4_)
        goto LAB_00199dd0;
        uVar37 = *(uint *)(param_4 + 1);
        uVar41 = (ulong)uVar37;
        uVar39 = *(uint *)((long)param_4 + 0xc);
        lVar18 = *param_4;
        uVar36 = uVar37 + 1;
        lVar30 = lVar18;
        if ((int)(uVar39 & 0x3fffffff) <= (int)uVar37) {
          if (0x3ffffffe < (int)uVar37) {
            FUN_032bd0a8(uVar36);
            uVar39 = *(uint *)((long)param_4 + 0xc);
          }
          uVar23 = (uVar39 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar23) {
            uVar23 = 0x3fffffff;
          }
          uVar3 = uVar36;
          if ((int)uVar36 <= (int)uVar23) {
            uVar3 = uVar23;
          }
          FUN_032bd100(uVar3,0x60,uVar39,&local_a0);
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar30 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
          if (0 < (int)uVar37) {
            uVar40 = uVar41 & 3;
            if (uVar41 - 1 < 3) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              puVar28 = (undefined8 *)(lVar30 + 0xc0);
              puVar33 = (undefined8 *)(lVar18 + 0xc0);
              do {
                uVar48 = puVar33[-0xd];
                lVar19 = lVar19 + 4;
                puVar28[-0xf] = puVar33[-0xf];
                puVar28[-0xd] = uVar48;
                uVar48 = puVar33[-0x11];
                puVar28[-0x13] = puVar33[-0x13];
                puVar28[-0x11] = uVar48;
                uVar48 = puVar33[-0x15];
                puVar28[-0x17] = puVar33[-0x17];
                puVar28[-0x15] = uVar48;
                uVar48 = puVar33[-0x18];
                puVar28[-0x16] = puVar33[-0x16];
                puVar28[-0x18] = uVar48;
                uVar48 = puVar33[-0x14];
                puVar28[-0x12] = puVar33[-0x12];
                puVar28[-0x14] = uVar48;
                uVar48 = puVar33[-0x10];
                puVar28[-0xe] = puVar33[-0xe];
                puVar28[-0x10] = uVar48;
                uVar48 = puVar33[-1];
                puVar28[-3] = puVar33[-3];
                puVar28[-1] = uVar48;
                uVar48 = puVar33[-5];
                puVar28[-7] = puVar33[-7];
                puVar28[-5] = uVar48;
                uVar48 = puVar33[-9];
                puVar28[-0xb] = puVar33[-0xb];
                puVar28[-9] = uVar48;
                uVar48 = puVar33[-0xc];
                puVar28[-10] = puVar33[-10];
                puVar28[-0xc] = uVar48;
                uVar48 = puVar33[-8];
                puVar28[-6] = puVar33[-6];
                puVar28[-8] = uVar48;
                uVar48 = puVar33[-4];
                puVar28[-2] = puVar33[-2];
                puVar28[-4] = uVar48;
                uVar48 = puVar33[0xb];
                puVar28[9] = puVar33[9];
                puVar28[0xb] = uVar48;
                uVar48 = puVar33[7];
                puVar28[5] = puVar33[5];
                puVar28[7] = uVar48;
                uVar48 = puVar33[3];
                puVar28[1] = puVar33[1];
                puVar28[3] = uVar48;
                uVar48 = *puVar33;
                puVar28[2] = puVar33[2];
                *puVar28 = uVar48;
                uVar48 = puVar33[4];
                puVar28[6] = puVar33[6];
                puVar28[4] = uVar48;
                uVar48 = puVar33[8];
                puVar28[10] = puVar33[10];
                puVar28[8] = uVar48;
                uVar48 = puVar33[0x17];
                puVar28[0x15] = puVar33[0x15];
                puVar28[0x17] = uVar48;
                uVar48 = puVar33[0x13];
                puVar28[0x11] = puVar33[0x11];
                puVar28[0x13] = uVar48;
                uVar48 = puVar33[0xf];
                puVar28[0xd] = puVar33[0xd];
                puVar28[0xf] = uVar48;
                uVar48 = puVar33[0xc];
                puVar28[0xe] = puVar33[0xe];
                puVar28[0xc] = uVar48;
                uVar48 = puVar33[0x10];
                puVar28[0x12] = puVar33[0x12];
                puVar28[0x10] = uVar48;
                uVar48 = puVar33[0x14];
                puVar28[0x16] = puVar33[0x16];
                puVar28[0x14] = uVar48;
                puVar28 = puVar28 + 0x30;
                puVar33 = puVar33 + 0x30;
              } while (uVar41 - uVar40 != lVar19);
            }
            if ((uVar37 & 3) != 0) {
              puVar28 = (undefined8 *)(lVar18 + lVar19 * 0x60);
              puVar33 = (undefined8 *)(lVar30 + lVar19 * 0x60);
              do {
                uVar48 = puVar28[0xb];
                uVar40 = uVar40 - 1;
                puVar33[9] = puVar28[9];
                puVar33[0xb] = uVar48;
                uVar48 = puVar28[7];
                puVar33[5] = puVar28[5];
                puVar33[7] = uVar48;
                uVar48 = puVar28[3];
                puVar33[1] = puVar28[1];
                puVar33[3] = uVar48;
                uVar48 = *puVar28;
                puVar33[2] = puVar28[2];
                *puVar33 = uVar48;
                uVar48 = puVar28[4];
                puVar33[6] = puVar28[6];
                puVar33[4] = uVar48;
                uVar48 = puVar28[8];
                puVar33[10] = puVar28[10];
                puVar33[8] = uVar48;
                puVar28 = puVar28 + 0xc;
                puVar33 = puVar33 + 0xc;
              } while (uVar40 != 0);
            }
          }
          if (-1 < (int)uVar39) {
            (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,((ulong)uVar39 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
            uVar22 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
          }
          else {
            uVar22 = 0x3fffffff;
          }
          auVar99._12_4_ = 0;
          auVar72._12_4_ = 0;
          *(undefined4 *)((long)param_4 + 0xc) = uVar22;
          *param_4 = lVar30;
          uVar37 = *(uint *)(param_4 + 1);
        }
        puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar37 * 0x60);
        *(uint *)(param_4 + 1) = uVar36;
        *(undefined4 *)(puVar28 + 4) = uVar21;
        puVar28[1] = auVar72._8_8_;
        *puVar28 = auVar72._0_8_;
        puVar28[3] = auVar99._8_8_;
        puVar28[2] = auVar99._0_8_;
        *(uint *)(puVar28 + 10) = uVar38;
        puVar28[7] = CONCAT44(fVar125,fVar124);
        puVar28[6] = CONCAT44(fVar74,fVar123);
        uVar48 = CONCAT44(fVar78,fVar111);
        auVar15._8_4_ = fVar81;
        auVar15._0_8_ = uVar48;
        auVar15._12_4_ = fVar46;
        puVar28[9] = auVar15._8_8_;
        puVar28[8] = uVar48;
        iVar31 = (int)param_4[1];
      }
      else {
        auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uStack_168 = (undefined4)lVar32;
        uStack_164 = (undefined4)((ulong)lVar32 >> 0x20);
        uStack_154 = (undefined4)((ulong)lStack_c8 >> 0x20);
        uVar48 = NEON_fmax(uVar126,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_d0,&local_130);
        fVar74 = (local_120 - local_130) * local_220;
        fVar124 = (fStack_11c - fStack_12c) * fStack_21c;
        fVar125 = (fStack_118 - fStack_128) * fStack_218;
        fVar111 = (fStack_114 - fStack_124) * fStack_214;
        auVar102._0_4_ = (local_130 + local_120) * local_220;
        auVar102._4_4_ = (fStack_12c + fStack_11c) * fStack_21c;
        auVar102._8_4_ = (fStack_128 + fStack_118) * fStack_218;
        auVar102._12_4_ = (fStack_124 + fStack_114) * fStack_214;
        auVar89._0_4_ = fVar119 * auVar87._0_4_ - fVar74;
        auVar89._4_4_ = fVar121 * auVar87._4_4_ - fVar124;
        auVar89._8_4_ = fVar85 * auVar87._8_4_ - fVar125;
        auVar89._12_4_ = auVar87._12_4_ * 0.0 - fVar111;
        auVar55._0_4_ = fVar120 * auVar87._0_4_ + fVar74;
        auVar55._4_4_ = fVar122 * auVar87._4_4_ + fVar124;
        auVar55._8_4_ = fVar86 * auVar87._8_4_ + fVar125;
        auVar55._12_4_ = auVar87._12_4_ * 0.0 + fVar111;
        auVar87 = NEON_fmax(auVar89,auVar102,4);
        auVar87 = NEON_fmin(auVar55,auVar87,4);
        fVar74 = auVar102._0_4_ - auVar87._0_4_;
        fVar124 = auVar102._4_4_ - auVar87._4_4_;
        fVar125 = auVar102._8_4_ - auVar87._8_4_;
        fVar111 = auVar102._12_4_ - auVar87._12_4_;
        auVar56._0_4_ = fVar74 * fVar74;
        auVar56._4_4_ = fVar124 * fVar124;
        auVar56._8_4_ = fVar125 * fVar125;
        auVar56._12_4_ = fVar111 * fVar111;
        auVar100 = NEON_ext(auVar56,auVar56,8,1);
        auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar49 = NEON_fmax(uVar126,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_d0,&local_130);
        auVar103._0_4_ = local_220 * (local_130 + local_120);
        auVar103._4_4_ = fStack_21c * (fStack_12c + fStack_11c);
        auVar103._8_4_ = fStack_218 * (fStack_128 + fStack_118);
        auVar103._12_4_ = fStack_214 * (fStack_124 + fStack_114);
        local_220 = local_220 * (local_120 - local_130);
        fStack_21c = fStack_21c * (fStack_11c - fStack_12c);
        fStack_218 = fStack_218 * (fStack_118 - fStack_128);
        fStack_214 = fStack_214 * (fStack_114 - fStack_124);
        auVar90._0_4_ = fVar83 * auVar87._0_4_ - local_220;
        auVar90._4_4_ = fVar80 * auVar87._4_4_ - fStack_21c;
        auVar90._8_4_ = fVar44 * auVar87._8_4_ - fStack_218;
        auVar90._12_4_ = auVar87._12_4_ * 0.0 - fStack_214;
        auVar57._0_4_ = fVar47 * auVar87._0_4_ + local_220;
        auVar57._4_4_ = fVar76 * auVar87._4_4_ + fStack_21c;
        auVar57._8_4_ = fVar45 * auVar87._8_4_ + fStack_218;
        auVar57._12_4_ = auVar87._12_4_ * 0.0 + fStack_214;
        auVar117._8_4_ = uStack_168;
        auVar117._0_8_ = lVar27;
        auVar117._12_4_ = uStack_164;
        auVar114._8_4_ = fVar123;
        auVar114._0_8_ = lVar35;
        auVar114._12_4_ = uStack_154;
        auVar87 = NEON_fmax(auVar90,auVar103,4);
        auVar87 = NEON_fmin(auVar57,auVar87,4);
        fVar74 = auVar103._0_4_ - auVar87._0_4_;
        fVar124 = auVar103._4_4_ - auVar87._4_4_;
        fVar125 = auVar103._8_4_ - auVar87._8_4_;
        fVar111 = auVar103._12_4_ - auVar87._12_4_;
        auVar58._0_4_ = fVar74 * fVar74;
        auVar58._4_4_ = fVar124 * fVar124;
        auVar58._8_4_ = fVar125 * fVar125;
        auVar58._12_4_ = fVar111 * fVar111;
        auVar87 = NEON_ext(auVar58,auVar58,8,1);
        if (auVar58._0_4_ + auVar58._4_4_ + auVar87._0_4_ <= (float)uVar49 * (float)uVar49) {
          uVar37 = *(uint *)(param_4 + 1);
          uVar41 = (ulong)uVar37;
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar30 = *param_4;
          uVar36 = uVar37 + 1;
          if ((int)uVar37 < (int)(uVar39 & 0x3fffffff)) {
            lVar18 = lVar30;
          }
          else {
            if (0x3ffffffe < (int)uVar37) {
              FUN_032bd0a8(uVar36);
              uVar39 = *(uint *)((long)param_4 + 0xc);
            }
            uVar23 = (uVar39 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar3 = uVar36;
            if ((int)uVar36 <= (int)uVar23) {
              uVar3 = uVar23;
            }
            FUN_032bd100(uVar3,0x60,uVar39,&local_130);
            uVar39 = *(uint *)((long)param_4 + 0xc);
            lVar18 = (**(code **)(*plVar26 + 0x10))
                               (plVar26,CONCAT44(fStack_12c,local_130),&local_130);
            if (0 < (int)uVar37) {
              uVar40 = uVar41 & 3;
              if (uVar41 - 1 < 3) {
                lVar19 = 0;
              }
              else {
                lVar19 = 0;
                puVar28 = (undefined8 *)(lVar18 + 0xc0);
                puVar33 = (undefined8 *)(lVar30 + 0xc0);
                do {
                  uVar49 = puVar33[-0xd];
                  lVar19 = lVar19 + 4;
                  puVar28[-0xf] = puVar33[-0xf];
                  puVar28[-0xd] = uVar49;
                  uVar49 = puVar33[-0x11];
                  puVar28[-0x13] = puVar33[-0x13];
                  puVar28[-0x11] = uVar49;
                  uVar49 = puVar33[-0x15];
                  puVar28[-0x17] = puVar33[-0x17];
                  puVar28[-0x15] = uVar49;
                  uVar49 = puVar33[-0x18];
                  puVar28[-0x16] = puVar33[-0x16];
                  puVar28[-0x18] = uVar49;
                  uVar49 = puVar33[-0x14];
                  puVar28[-0x12] = puVar33[-0x12];
                  puVar28[-0x14] = uVar49;
                  uVar49 = puVar33[-0x10];
                  puVar28[-0xe] = puVar33[-0xe];
                  puVar28[-0x10] = uVar49;
                  uVar49 = puVar33[-1];
                  puVar28[-3] = puVar33[-3];
                  puVar28[-1] = uVar49;
                  uVar49 = puVar33[-5];
                  puVar28[-7] = puVar33[-7];
                  puVar28[-5] = uVar49;
                  uVar49 = puVar33[-9];
                  puVar28[-0xb] = puVar33[-0xb];
                  puVar28[-9] = uVar49;
                  uVar49 = puVar33[-0xc];
                  puVar28[-10] = puVar33[-10];
                  puVar28[-0xc] = uVar49;
                  uVar49 = puVar33[-8];
                  puVar28[-6] = puVar33[-6];
                  puVar28[-8] = uVar49;
                  uVar49 = puVar33[-4];
                  puVar28[-2] = puVar33[-2];
                  puVar28[-4] = uVar49;
                  uVar49 = puVar33[0xb];
                  puVar28[9] = puVar33[9];
                  puVar28[0xb] = uVar49;
                  uVar49 = puVar33[7];
                  puVar28[5] = puVar33[5];
                  puVar28[7] = uVar49;
                  uVar49 = puVar33[3];
                  puVar28[1] = puVar33[1];
                  puVar28[3] = uVar49;
                  uVar49 = *puVar33;
                  puVar28[2] = puVar33[2];
                  *puVar28 = uVar49;
                  uVar49 = puVar33[4];
                  puVar28[6] = puVar33[6];
                  puVar28[4] = uVar49;
                  uVar49 = puVar33[8];
                  puVar28[10] = puVar33[10];
                  puVar28[8] = uVar49;
                  uVar49 = puVar33[0x17];
                  puVar28[0x15] = puVar33[0x15];
                  puVar28[0x17] = uVar49;
                  uVar49 = puVar33[0x13];
                  puVar28[0x11] = puVar33[0x11];
                  puVar28[0x13] = uVar49;
                  uVar49 = puVar33[0xf];
                  puVar28[0xd] = puVar33[0xd];
                  puVar28[0xf] = uVar49;
                  uVar49 = puVar33[0xc];
                  puVar28[0xe] = puVar33[0xe];
                  puVar28[0xc] = uVar49;
                  uVar49 = puVar33[0x10];
                  puVar28[0x12] = puVar33[0x12];
                  puVar28[0x10] = uVar49;
                  uVar49 = puVar33[0x14];
                  puVar28[0x16] = puVar33[0x16];
                  puVar28[0x14] = uVar49;
                  puVar28 = puVar28 + 0x30;
                  puVar33 = puVar33 + 0x30;
                } while (uVar41 - uVar40 != lVar19);
              }
              if ((uVar37 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar30 + lVar19 * 0x60);
                puVar33 = (undefined8 *)(lVar18 + lVar19 * 0x60);
                do {
                  uVar49 = puVar28[0xb];
                  uVar40 = uVar40 - 1;
                  puVar33[9] = puVar28[9];
                  puVar33[0xb] = uVar49;
                  uVar49 = puVar28[7];
                  puVar33[5] = puVar28[5];
                  puVar33[7] = uVar49;
                  uVar49 = puVar28[3];
                  puVar33[1] = puVar28[1];
                  puVar33[3] = uVar49;
                  uVar49 = *puVar28;
                  puVar33[2] = puVar28[2];
                  *puVar33 = uVar49;
                  uVar49 = puVar28[4];
                  puVar33[6] = puVar28[6];
                  puVar33[4] = uVar49;
                  uVar49 = puVar28[8];
                  puVar33[10] = puVar28[10];
                  puVar33[8] = uVar49;
                  puVar28 = puVar28 + 0xc;
                  puVar33 = puVar33 + 0xc;
                } while (uVar40 != 0);
              }
            }
            if (-1 < (int)uVar39) {
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,((ulong)uVar39 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_12c,local_130) < 0x17ffffffa0) {
              uVar24 = (undefined4)(CONCAT44(fStack_12c,local_130) / 0x60);
            }
            else {
              uVar24 = 0x3fffffff;
            }
            *param_4 = lVar18;
            *(undefined4 *)((long)param_4 + 0xc) = uVar24;
            uVar37 = *(uint *)(param_4 + 1);
          }
          puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar37 * 0x60);
          *(uint *)(param_4 + 1) = uVar36;
          *(undefined4 *)(puVar28 + 4) = uVar22;
          *(uint *)(puVar28 + 10) = uVar38;
          puVar28[1] = (ulong)(uint)fVar44;
          *puVar28 = CONCAT44(fVar80,fVar83);
          puVar28[3] = (ulong)(uint)fVar45;
          puVar28[2] = CONCAT44(fVar76,fVar47);
          puVar28[7] = auVar114._8_8_;
          puVar28[6] = auVar114._0_8_;
          puVar28[9] = auVar117._8_8_;
          puVar28[8] = auVar117._0_8_;
        }
        if ((float)uVar48 * (float)uVar48 < auVar56._0_4_ + auVar56._4_4_ + auVar100._0_4_)
        goto LAB_00199dd0;
        uVar37 = *(uint *)(param_4 + 1);
        uVar41 = (ulong)uVar37;
        uVar39 = *(uint *)((long)param_4 + 0xc);
        lVar30 = *param_4;
        uVar36 = uVar37 + 1;
        if ((int)uVar37 < (int)(uVar39 & 0x3fffffff)) {
          lVar18 = lVar30;
        }
        else {
          if (0x3ffffffe < (int)uVar37) {
            FUN_032bd0a8(uVar36);
            uVar39 = *(uint *)((long)param_4 + 0xc);
          }
          uVar23 = (uVar39 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar23) {
            uVar23 = 0x3fffffff;
          }
          uVar3 = uVar36;
          if ((int)uVar36 <= (int)uVar23) {
            uVar3 = uVar23;
          }
          FUN_032bd100(uVar3,0x60,uVar39,&local_130);
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar18 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_12c,local_130),&local_130)
          ;
          if (0 < (int)uVar37) {
            uVar40 = uVar41 & 3;
            if (uVar41 - 1 < 3) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              puVar28 = (undefined8 *)(lVar18 + 0xc0);
              puVar33 = (undefined8 *)(lVar30 + 0xc0);
              do {
                uVar48 = puVar33[-0xd];
                lVar19 = lVar19 + 4;
                puVar28[-0xf] = puVar33[-0xf];
                puVar28[-0xd] = uVar48;
                uVar48 = puVar33[-0x11];
                puVar28[-0x13] = puVar33[-0x13];
                puVar28[-0x11] = uVar48;
                uVar48 = puVar33[-0x15];
                puVar28[-0x17] = puVar33[-0x17];
                puVar28[-0x15] = uVar48;
                uVar48 = puVar33[-0x18];
                puVar28[-0x16] = puVar33[-0x16];
                puVar28[-0x18] = uVar48;
                uVar48 = puVar33[-0x14];
                puVar28[-0x12] = puVar33[-0x12];
                puVar28[-0x14] = uVar48;
                uVar48 = puVar33[-0x10];
                puVar28[-0xe] = puVar33[-0xe];
                puVar28[-0x10] = uVar48;
                uVar48 = puVar33[-1];
                puVar28[-3] = puVar33[-3];
                puVar28[-1] = uVar48;
                uVar48 = puVar33[-5];
                puVar28[-7] = puVar33[-7];
                puVar28[-5] = uVar48;
                uVar48 = puVar33[-9];
                puVar28[-0xb] = puVar33[-0xb];
                puVar28[-9] = uVar48;
                uVar48 = puVar33[-0xc];
                puVar28[-10] = puVar33[-10];
                puVar28[-0xc] = uVar48;
                uVar48 = puVar33[-8];
                puVar28[-6] = puVar33[-6];
                puVar28[-8] = uVar48;
                uVar48 = puVar33[-4];
                puVar28[-2] = puVar33[-2];
                puVar28[-4] = uVar48;
                uVar48 = puVar33[0xb];
                puVar28[9] = puVar33[9];
                puVar28[0xb] = uVar48;
                uVar48 = puVar33[7];
                puVar28[5] = puVar33[5];
                puVar28[7] = uVar48;
                uVar48 = puVar33[3];
                puVar28[1] = puVar33[1];
                puVar28[3] = uVar48;
                uVar48 = *puVar33;
                puVar28[2] = puVar33[2];
                *puVar28 = uVar48;
                uVar48 = puVar33[4];
                puVar28[6] = puVar33[6];
                puVar28[4] = uVar48;
                uVar48 = puVar33[8];
                puVar28[10] = puVar33[10];
                puVar28[8] = uVar48;
                uVar48 = puVar33[0x17];
                puVar28[0x15] = puVar33[0x15];
                puVar28[0x17] = uVar48;
                uVar48 = puVar33[0x13];
                puVar28[0x11] = puVar33[0x11];
                puVar28[0x13] = uVar48;
                uVar48 = puVar33[0xf];
                puVar28[0xd] = puVar33[0xd];
                puVar28[0xf] = uVar48;
                uVar48 = puVar33[0xc];
                puVar28[0xe] = puVar33[0xe];
                puVar28[0xc] = uVar48;
                uVar48 = puVar33[0x10];
                puVar28[0x12] = puVar33[0x12];
                puVar28[0x10] = uVar48;
                uVar48 = puVar33[0x14];
                puVar28[0x16] = puVar33[0x16];
                puVar28[0x14] = uVar48;
                puVar28 = puVar28 + 0x30;
                puVar33 = puVar33 + 0x30;
              } while (uVar41 - uVar40 != lVar19);
            }
            if ((uVar37 & 3) != 0) {
              puVar28 = (undefined8 *)(lVar30 + lVar19 * 0x60);
              puVar33 = (undefined8 *)(lVar18 + lVar19 * 0x60);
              do {
                uVar48 = puVar28[0xb];
                uVar40 = uVar40 - 1;
                puVar33[9] = puVar28[9];
                puVar33[0xb] = uVar48;
                uVar48 = puVar28[7];
                puVar33[5] = puVar28[5];
                puVar33[7] = uVar48;
                uVar48 = puVar28[3];
                puVar33[1] = puVar28[1];
                puVar33[3] = uVar48;
                uVar48 = *puVar28;
                puVar33[2] = puVar28[2];
                *puVar33 = uVar48;
                uVar48 = puVar28[4];
                puVar33[6] = puVar28[6];
                puVar33[4] = uVar48;
                uVar48 = puVar28[8];
                puVar33[10] = puVar28[10];
                puVar33[8] = uVar48;
                puVar28 = puVar28 + 0xc;
                puVar33 = puVar33 + 0xc;
              } while (uVar40 != 0);
            }
          }
          if (-1 < (int)uVar39) {
            (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,((ulong)uVar39 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_12c,local_130) < 0x17ffffffa0) {
            uVar22 = (undefined4)(CONCAT44(fStack_12c,local_130) / 0x60);
          }
          else {
            uVar22 = 0x3fffffff;
          }
          uVar37 = *(uint *)(param_4 + 1);
          *(undefined4 *)((long)param_4 + 0xc) = uVar22;
          *param_4 = lVar18;
        }
        puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar37 * 0x60);
        *(uint *)(param_4 + 1) = uVar36;
        *(undefined4 *)(puVar28 + 4) = uVar21;
        puVar28[1] = (ulong)(uint)fVar85;
        *puVar28 = CONCAT44(fVar121,fVar119);
        puVar28[3] = (ulong)(uint)fVar86;
        puVar28[2] = CONCAT44(fVar122,fVar120);
        *(uint *)(puVar28 + 10) = uVar38;
        puVar28[7] = auVar114._8_8_;
        puVar28[6] = auVar114._0_8_;
        puVar28[9] = auVar117._8_8_;
        puVar28[8] = auVar117._0_8_;
        iVar31 = (int)param_4[1];
      }
    }
    else if ((char)local_a8[3] < '\0') {
      lVar20 = (long)(int)local_b0 + 1;
      local_110 = (uint)lVar20;
      fVar123 = (fStack_c0 - fVar74) * fVar43;
      fVar124 = (local_bc - local_d0._4_4_) * fVar73;
      fVar125 = (fStack_b8 - (float)lStack_c8) * fVar77;
      lVar18 = (long)(int)local_b0 + (ulong)((uint)local_a8[4] | (local_a8[3] & 0x7f) << 8) * 2;
      local_e0 = (undefined4)lVar18;
      local_108 = (byte *)((long)param_3 + lVar20 * 5 + *param_3);
      local_d8 = (byte *)((long)param_3 + lVar18 * 5 + *param_3);
      bVar12 = *local_108 >> 4;
      bVar4 = *local_108 & 0xf;
      bVar13 = local_108[1] >> 4;
      bVar5 = local_108[2] >> 4;
      bVar6 = local_108[2] & 0xf;
      local_130 = (float)(byte)(bVar12 * bVar12) * fVar123 + fVar74;
      fStack_124 = 0.0;
      fStack_12c = (float)(byte)(bVar13 * bVar13) * fVar124 + local_d0._4_4_;
      fStack_114 = 0.0;
      fStack_128 = (float)(byte)(bVar5 * bVar5) * fVar125 + (float)lStack_c8;
      bVar12 = local_108[1] & 0xf;
      bVar8 = local_d8[1] >> 4;
      bVar9 = local_d8[2] >> 4;
      bVar13 = local_d8[1] & 0xf;
      bVar5 = local_d8[2] & 0xf;
      local_120 = fStack_c0 - (float)(byte)(bVar4 * bVar4) * fVar123;
      fStack_118 = fStack_b8 - (float)(byte)(bVar6 * bVar6) * fVar125;
      bVar6 = *local_d8 >> 4;
      fStack_11c = local_bc - (float)(byte)(bVar12 * bVar12) * fVar124;
      bVar4 = *local_d8 & 0xf;
      uStack_e4 = 0;
      local_100 = fVar74 + (float)(byte)(bVar6 * bVar6) * fVar123;
      fStack_fc = (float)(byte)(bVar8 * bVar8) * fVar124 + local_d0._4_4_;
      uStack_f4 = 0;
      fStack_f8 = (float)(byte)(bVar9 * bVar9) * fVar125 + (float)lStack_c8;
      local_f0 = fStack_c0 - (float)(byte)(bVar4 * bVar4) * fVar123;
      fStack_ec = local_bc - (float)(byte)(bVar13 * bVar13) * fVar124;
      fStack_e8 = fStack_b8 - (float)(byte)(bVar5 * bVar5) * fVar125;
      auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
      uVar48 = NEON_fmax(uVar126,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
      FUN_0333e220(lVar1,&local_130,&local_a0);
      fVar123 = (fStack_90 - local_a0) * local_220;
      fVar74 = (fStack_8c - fStack_9c) * fStack_21c;
      fVar124 = (fStack_88 - fStack_98) * fStack_218;
      fVar125 = (fStack_84 - fStack_94) * fStack_214;
      auVar104._0_4_ = (local_a0 + fStack_90) * local_220;
      auVar104._4_4_ = (fStack_9c + fStack_8c) * fStack_21c;
      auVar104._8_4_ = (fStack_98 + fStack_88) * fStack_218;
      auVar104._12_4_ = (fStack_94 + fStack_84) * fStack_214;
      auVar91._0_4_ = fVar83 * auVar87._0_4_ - fVar123;
      auVar91._4_4_ = fVar80 * auVar87._4_4_ - fVar74;
      auVar91._8_4_ = fVar44 * auVar87._8_4_ - fVar124;
      auVar91._12_4_ = fVar86 * auVar87._12_4_ - fVar125;
      auVar59._0_4_ = fVar47 * auVar87._0_4_ + fVar123;
      auVar59._4_4_ = fVar76 * auVar87._4_4_ + fVar74;
      auVar59._8_4_ = fVar45 * auVar87._8_4_ + fVar124;
      auVar59._12_4_ = fVar85 * auVar87._12_4_ + fVar125;
      auVar87 = NEON_fmax(auVar91,auVar104,4);
      auVar87 = NEON_fmin(auVar59,auVar87,4);
      fVar123 = auVar104._0_4_ - auVar87._0_4_;
      fVar74 = auVar104._4_4_ - auVar87._4_4_;
      fVar124 = auVar104._8_4_ - auVar87._8_4_;
      fVar125 = auVar104._12_4_ - auVar87._12_4_;
      auVar60._0_4_ = fVar123 * fVar123;
      auVar60._4_4_ = fVar74 * fVar74;
      auVar60._8_4_ = fVar124 * fVar124;
      auVar60._12_4_ = fVar125 * fVar125;
      auVar100 = NEON_ext(auVar60,auVar60,8,1);
      auVar87 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
      uVar49 = NEON_fmax(uVar126,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
      FUN_0333e220(lVar1,&local_100,&local_a0);
      uVar21 = local_e0;
      uVar22 = uStack_e4;
      fVar81 = fStack_e8;
      fVar78 = fStack_ec;
      fVar122 = local_f0;
      uVar38 = local_110;
      fVar121 = fStack_114;
      fVar120 = fStack_118;
      fVar119 = fStack_11c;
      fVar111 = local_120;
      fVar125 = fStack_124;
      fVar124 = fStack_128;
      fVar74 = fStack_12c;
      fVar123 = local_130;
      fVar46 = local_220 * (fStack_90 - local_a0);
      fVar75 = fStack_21c * (fStack_8c - fStack_9c);
      fVar79 = fStack_218 * (fStack_88 - fStack_98);
      fVar82 = fStack_214 * (fStack_84 - fStack_94);
      auVar105._0_4_ = local_220 * (local_a0 + fStack_90);
      auVar105._4_4_ = fStack_21c * (fStack_9c + fStack_8c);
      auVar105._8_4_ = fStack_218 * (fStack_98 + fStack_88);
      auVar105._12_4_ = fStack_214 * (fStack_94 + fStack_84);
      auVar92._0_4_ = fVar83 * auVar87._0_4_ - fVar46;
      auVar92._4_4_ = fVar80 * auVar87._4_4_ - fVar75;
      auVar92._8_4_ = fVar44 * auVar87._8_4_ - fVar79;
      auVar92._12_4_ = fVar86 * auVar87._12_4_ - fVar82;
      auVar61._0_4_ = fVar47 * auVar87._0_4_ + fVar46;
      auVar61._4_4_ = fVar76 * auVar87._4_4_ + fVar75;
      auVar61._8_4_ = fVar45 * auVar87._8_4_ + fVar79;
      auVar61._12_4_ = fVar85 * auVar87._12_4_ + fVar82;
      auVar87 = NEON_fmax(auVar92,auVar105,4);
      auVar87 = NEON_fmin(auVar61,auVar87,4);
      fVar47 = auVar105._0_4_ - auVar87._0_4_;
      fVar76 = auVar105._4_4_ - auVar87._4_4_;
      fVar80 = auVar105._8_4_ - auVar87._8_4_;
      fVar83 = auVar105._12_4_ - auVar87._12_4_;
      auVar113._4_4_ = fStack_12c;
      auVar113._0_4_ = local_130;
      auVar113._8_4_ = fStack_128;
      auVar113._12_4_ = fStack_124;
      auVar110._4_4_ = fStack_11c;
      auVar110._0_4_ = local_120;
      auVar110._8_4_ = fStack_118;
      auVar110._12_4_ = fStack_114;
      auVar62._0_4_ = fVar47 * fVar47;
      auVar62._4_4_ = fVar76 * fVar76;
      auVar62._8_4_ = fVar80 * fVar80;
      auVar62._12_4_ = fVar83 * fVar83;
      auVar87 = NEON_ext(auVar62,auVar62,8,1);
      auVar98._8_4_ = fVar45;
      auVar98._0_8_ = lVar19;
      auVar98._12_4_ = fVar85;
      auVar71._8_4_ = fVar44;
      auVar71._0_8_ = lVar30;
      auVar71._12_4_ = fVar86;
      if (auVar62._0_4_ + auVar62._4_4_ + auVar87._0_4_ <= (float)uVar49 * (float)uVar49) {
        uVar50 = CONCAT44(uStack_f4,fStack_f8);
        uVar49 = CONCAT44(fStack_fc,local_100);
        uVar37 = *(uint *)(param_4 + 1);
        uVar41 = (ulong)uVar37;
        uVar39 = *(uint *)((long)param_4 + 0xc);
        lVar20 = *param_4;
        uVar36 = uVar37 + 1;
        lVar18 = lVar20;
        if ((int)(uVar39 & 0x3fffffff) <= (int)uVar37) {
          if (0x3ffffffe < (int)uVar37) {
            FUN_032bd0a8(uVar36);
            uVar39 = *(uint *)((long)param_4 + 0xc);
          }
          uVar23 = (uVar39 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar23) {
            uVar23 = 0x3fffffff;
          }
          uVar3 = uVar36;
          if ((int)uVar36 <= (int)uVar23) {
            uVar3 = uVar23;
          }
          FUN_032bd100(uVar3,0x60,uVar39,&local_a0);
          uVar39 = *(uint *)((long)param_4 + 0xc);
          lVar18 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
          if (0 < (int)uVar37) {
            uVar40 = uVar41 & 3;
            if (uVar41 - 1 < 3) {
              lVar27 = 0;
            }
            else {
              lVar27 = 0;
              puVar28 = (undefined8 *)(lVar18 + 0xc0);
              puVar33 = (undefined8 *)(lVar20 + 0xc0);
              do {
                uVar34 = puVar33[-0xd];
                lVar27 = lVar27 + 4;
                puVar28[-0xf] = puVar33[-0xf];
                puVar28[-0xd] = uVar34;
                uVar34 = puVar33[-0x11];
                puVar28[-0x13] = puVar33[-0x13];
                puVar28[-0x11] = uVar34;
                uVar34 = puVar33[-0x15];
                puVar28[-0x17] = puVar33[-0x17];
                puVar28[-0x15] = uVar34;
                uVar34 = puVar33[-0x18];
                puVar28[-0x16] = puVar33[-0x16];
                puVar28[-0x18] = uVar34;
                uVar34 = puVar33[-0x14];
                puVar28[-0x12] = puVar33[-0x12];
                puVar28[-0x14] = uVar34;
                uVar34 = puVar33[-0x10];
                puVar28[-0xe] = puVar33[-0xe];
                puVar28[-0x10] = uVar34;
                uVar34 = puVar33[-1];
                puVar28[-3] = puVar33[-3];
                puVar28[-1] = uVar34;
                uVar34 = puVar33[-5];
                puVar28[-7] = puVar33[-7];
                puVar28[-5] = uVar34;
                uVar34 = puVar33[-9];
                puVar28[-0xb] = puVar33[-0xb];
                puVar28[-9] = uVar34;
                uVar34 = puVar33[-0xc];
                puVar28[-10] = puVar33[-10];
                puVar28[-0xc] = uVar34;
                uVar34 = puVar33[-8];
                puVar28[-6] = puVar33[-6];
                puVar28[-8] = uVar34;
                uVar34 = puVar33[-4];
                puVar28[-2] = puVar33[-2];
                puVar28[-4] = uVar34;
                uVar34 = puVar33[0xb];
                puVar28[9] = puVar33[9];
                puVar28[0xb] = uVar34;
                uVar34 = puVar33[7];
                puVar28[5] = puVar33[5];
                puVar28[7] = uVar34;
                uVar34 = puVar33[3];
                puVar28[1] = puVar33[1];
                puVar28[3] = uVar34;
                uVar34 = *puVar33;
                puVar28[2] = puVar33[2];
                *puVar28 = uVar34;
                uVar34 = puVar33[4];
                puVar28[6] = puVar33[6];
                puVar28[4] = uVar34;
                uVar34 = puVar33[8];
                puVar28[10] = puVar33[10];
                puVar28[8] = uVar34;
                uVar34 = puVar33[0x17];
                puVar28[0x15] = puVar33[0x15];
                puVar28[0x17] = uVar34;
                uVar34 = puVar33[0x13];
                puVar28[0x11] = puVar33[0x11];
                puVar28[0x13] = uVar34;
                uVar34 = puVar33[0xf];
                puVar28[0xd] = puVar33[0xd];
                puVar28[0xf] = uVar34;
                uVar34 = puVar33[0xc];
                puVar28[0xe] = puVar33[0xe];
                puVar28[0xc] = uVar34;
                uVar34 = puVar33[0x10];
                puVar28[0x12] = puVar33[0x12];
                puVar28[0x10] = uVar34;
                uVar34 = puVar33[0x14];
                puVar28[0x16] = puVar33[0x16];
                puVar28[0x14] = uVar34;
                puVar28 = puVar28 + 0x30;
                puVar33 = puVar33 + 0x30;
              } while (uVar41 - uVar40 != lVar27);
            }
            if ((uVar37 & 3) != 0) {
              puVar28 = (undefined8 *)(lVar20 + lVar27 * 0x60);
              puVar33 = (undefined8 *)(lVar18 + lVar27 * 0x60);
              do {
                uVar34 = puVar28[0xb];
                uVar40 = uVar40 - 1;
                puVar33[9] = puVar28[9];
                puVar33[0xb] = uVar34;
                uVar34 = puVar28[7];
                puVar33[5] = puVar28[5];
                puVar33[7] = uVar34;
                uVar34 = puVar28[3];
                puVar33[1] = puVar28[1];
                puVar33[3] = uVar34;
                uVar34 = *puVar28;
                puVar33[2] = puVar28[2];
                *puVar33 = uVar34;
                uVar34 = puVar28[4];
                puVar33[6] = puVar28[6];
                puVar33[4] = uVar34;
                uVar34 = puVar28[8];
                puVar33[10] = puVar28[10];
                puVar33[8] = uVar34;
                puVar28 = puVar28 + 0xc;
                puVar33 = puVar33 + 0xc;
              } while (uVar40 != 0);
            }
          }
          if (-1 < (int)uVar39) {
            (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,((ulong)uVar39 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
            uVar24 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
          }
          else {
            uVar24 = 0x3fffffff;
          }
          auVar110._4_4_ = fVar119;
          auVar110._0_4_ = fVar111;
          auVar110._8_4_ = fVar120;
          auVar110._12_4_ = fVar121;
          uVar37 = *(uint *)(param_4 + 1);
          auVar113._4_4_ = fVar74;
          auVar113._0_4_ = fVar123;
          auVar113._8_4_ = fVar124;
          auVar113._12_4_ = fVar125;
          *(undefined4 *)((long)param_4 + 0xc) = uVar24;
          *param_4 = lVar18;
        }
        auVar116._8_4_ = fVar81;
        auVar116._0_8_ = CONCAT44(fVar78,fVar122);
        auVar116._12_4_ = uVar22;
        puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar37 * 0x60);
        *(uint *)(param_4 + 1) = uVar36;
        *(int *)(puVar28 + 4) = iVar31;
        puVar28[1] = auVar71._8_8_;
        *puVar28 = auVar71._0_8_;
        puVar28[3] = auVar98._8_8_;
        puVar28[2] = auVar98._0_8_;
        *(undefined4 *)(puVar28 + 10) = uVar21;
        puVar28[7] = uVar50;
        puVar28[6] = uVar49;
        puVar28[9] = auVar116._8_8_;
        puVar28[8] = CONCAT44(fVar78,fVar122);
      }
      if ((float)uVar48 * (float)uVar48 < auVar60._0_4_ + auVar60._4_4_ + auVar100._0_4_)
      goto LAB_00199dd0;
      uVar37 = *(uint *)(param_4 + 1);
      uVar41 = (ulong)uVar37;
      uVar39 = *(uint *)((long)param_4 + 0xc);
      lVar20 = *param_4;
      uVar36 = uVar37 + 1;
      lVar18 = lVar20;
      if ((int)(uVar39 & 0x3fffffff) <= (int)uVar37) {
        if (0x3ffffffe < (int)uVar37) {
          FUN_032bd0a8(uVar36);
          uVar39 = *(uint *)((long)param_4 + 0xc);
        }
        uVar23 = (uVar39 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar23) {
          uVar23 = 0x3fffffff;
        }
        uVar3 = uVar36;
        if ((int)uVar36 <= (int)uVar23) {
          uVar3 = uVar23;
        }
        FUN_032bd100(uVar3,0x60,uVar39,&local_a0);
        uVar39 = *(uint *)((long)param_4 + 0xc);
        lVar18 = (**(code **)(*plVar26 + 0x10))(plVar26,CONCAT44(fStack_9c,local_a0),&local_a0);
        if (0 < (int)uVar37) {
          uVar40 = uVar41 & 3;
          if (uVar41 - 1 < 3) {
            lVar27 = 0;
          }
          else {
            lVar27 = 0;
            puVar28 = (undefined8 *)(lVar18 + 0xc0);
            puVar33 = (undefined8 *)(lVar20 + 0xc0);
            do {
              uVar48 = puVar33[-0xd];
              lVar27 = lVar27 + 4;
              puVar28[-0xf] = puVar33[-0xf];
              puVar28[-0xd] = uVar48;
              uVar48 = puVar33[-0x11];
              puVar28[-0x13] = puVar33[-0x13];
              puVar28[-0x11] = uVar48;
              uVar48 = puVar33[-0x15];
              puVar28[-0x17] = puVar33[-0x17];
              puVar28[-0x15] = uVar48;
              uVar48 = puVar33[-0x18];
              puVar28[-0x16] = puVar33[-0x16];
              puVar28[-0x18] = uVar48;
              uVar48 = puVar33[-0x14];
              puVar28[-0x12] = puVar33[-0x12];
              puVar28[-0x14] = uVar48;
              uVar48 = puVar33[-0x10];
              puVar28[-0xe] = puVar33[-0xe];
              puVar28[-0x10] = uVar48;
              uVar48 = puVar33[-1];
              puVar28[-3] = puVar33[-3];
              puVar28[-1] = uVar48;
              uVar48 = puVar33[-5];
              puVar28[-7] = puVar33[-7];
              puVar28[-5] = uVar48;
              uVar48 = puVar33[-9];
              puVar28[-0xb] = puVar33[-0xb];
              puVar28[-9] = uVar48;
              uVar48 = puVar33[-0xc];
              puVar28[-10] = puVar33[-10];
              puVar28[-0xc] = uVar48;
              uVar48 = puVar33[-8];
              puVar28[-6] = puVar33[-6];
              puVar28[-8] = uVar48;
              uVar48 = puVar33[-4];
              puVar28[-2] = puVar33[-2];
              puVar28[-4] = uVar48;
              uVar48 = puVar33[0xb];
              puVar28[9] = puVar33[9];
              puVar28[0xb] = uVar48;
              uVar48 = puVar33[7];
              puVar28[5] = puVar33[5];
              puVar28[7] = uVar48;
              uVar48 = puVar33[3];
              puVar28[1] = puVar33[1];
              puVar28[3] = uVar48;
              uVar48 = *puVar33;
              puVar28[2] = puVar33[2];
              *puVar28 = uVar48;
              uVar48 = puVar33[4];
              puVar28[6] = puVar33[6];
              puVar28[4] = uVar48;
              uVar48 = puVar33[8];
              puVar28[10] = puVar33[10];
              puVar28[8] = uVar48;
              uVar48 = puVar33[0x17];
              puVar28[0x15] = puVar33[0x15];
              puVar28[0x17] = uVar48;
              uVar48 = puVar33[0x13];
              puVar28[0x11] = puVar33[0x11];
              puVar28[0x13] = uVar48;
              uVar48 = puVar33[0xf];
              puVar28[0xd] = puVar33[0xd];
              puVar28[0xf] = uVar48;
              uVar48 = puVar33[0xc];
              puVar28[0xe] = puVar33[0xe];
              puVar28[0xc] = uVar48;
              uVar48 = puVar33[0x10];
              puVar28[0x12] = puVar33[0x12];
              puVar28[0x10] = uVar48;
              uVar48 = puVar33[0x14];
              puVar28[0x16] = puVar33[0x16];
              puVar28[0x14] = uVar48;
              puVar28 = puVar28 + 0x30;
              puVar33 = puVar33 + 0x30;
            } while (uVar41 - uVar40 != lVar27);
          }
          if ((uVar37 & 3) != 0) {
            puVar28 = (undefined8 *)(lVar20 + lVar27 * 0x60);
            puVar33 = (undefined8 *)(lVar18 + lVar27 * 0x60);
            do {
              uVar48 = puVar28[0xb];
              uVar40 = uVar40 - 1;
              puVar33[9] = puVar28[9];
              puVar33[0xb] = uVar48;
              uVar48 = puVar28[7];
              puVar33[5] = puVar28[5];
              puVar33[7] = uVar48;
              uVar48 = puVar28[3];
              puVar33[1] = puVar28[1];
              puVar33[3] = uVar48;
              uVar48 = *puVar28;
              puVar33[2] = puVar28[2];
              *puVar33 = uVar48;
              uVar48 = puVar28[4];
              puVar33[6] = puVar28[6];
              puVar33[4] = uVar48;
              uVar48 = puVar28[8];
              puVar33[10] = puVar28[10];
              puVar33[8] = uVar48;
              puVar28 = puVar28 + 0xc;
              puVar33 = puVar33 + 0xc;
            } while (uVar40 != 0);
          }
        }
        if (-1 < (int)uVar39) {
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,((ulong)uVar39 & 0x3fffffff) * 0x60);
        }
        if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
          uVar22 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
        }
        else {
          uVar22 = 0x3fffffff;
        }
        *(undefined4 *)((long)param_4 + 0xc) = uVar22;
        *param_4 = lVar18;
        uVar37 = *(uint *)(param_4 + 1);
      }
      puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar37 * 0x60);
      *(uint *)(param_4 + 1) = uVar36;
      *(int *)(puVar28 + 4) = iVar31;
      puVar28[1] = auVar71._8_8_;
      *puVar28 = auVar71._0_8_;
      puVar28[3] = auVar98._8_8_;
      puVar28[2] = auVar98._0_8_;
      *(uint *)(puVar28 + 10) = uVar38;
      puVar28[7] = auVar113._8_8_;
      puVar28[6] = auVar113._0_8_;
      puVar28[9] = auVar110._8_8_;
      puVar28[8] = auVar110._0_8_;
      iVar31 = (int)param_4[1];
    }
    else {
      lVar19 = (long)(param_2 + 8) + (ulong)CONCAT11(bVar4,pbVar42[4]) * 0x60 + param_2[8];
      lVar20 = (long)(param_3 + 8) + (ulong)CONCAT11(local_a8[3],local_a8[4]) * 0x60 + param_3[8];
      lVar27 = *(long *)(param_5 + 0x50);
      lVar32 = *(long *)(lVar27 + 0x40);
      lVar30 = lVar32 + lVar27 + 0x40;
      lVar18 = 0;
      if (lVar32 != 0) {
        lVar18 = lVar30;
      }
      iVar31 = (int)(lVar19 - lVar18 >> 5) * -0x55555555;
      if (*(int *)(param_5 + 0x94) != iVar31 || *(int *)(param_5 + 0x98) != iVar31) {
        lVar30 = lVar30 + (long)iVar31 * 0x60;
        *(long *)(param_5 + 0x60) = lVar30;
        *(int *)(param_5 + 0x94) = iVar31;
        *(int *)(param_5 + 0x98) = iVar31;
        lVar32 = *(long *)(lVar27 + 0x70);
        lVar18 = 0;
        if (lVar32 != 0) {
          lVar18 = lVar32 + lVar27 + 0x70;
        }
        *(ulong *)(param_5 + 0x70) = lVar18 + (ulong)*(uint *)(lVar30 + 0x48) * 4;
        lVar32 = *(long *)(lVar27 + 0x80);
        lVar18 = 0;
        if (lVar32 != 0) {
          lVar18 = lVar32 + lVar27 + 0x80;
        }
        *(ulong *)(param_5 + 0x78) = lVar18 + (ulong)*(byte *)(lVar30 + 0x5b) * 0x80000;
        lVar32 = *(long *)(lVar27 + 0x60);
        lVar18 = 0;
        if (lVar32 != 0) {
          lVar18 = lVar32 + lVar27 + 0x60;
        }
        lVar18 = lVar18 + (ulong)*(uint *)(lVar30 + 0x4c) * 2;
        *(long *)(param_5 + 0x80) = lVar18;
        lVar35 = *(long *)(lVar27 + 0x90);
        lVar32 = 0;
        if (lVar35 != 0) {
          lVar32 = lVar35 + lVar27 + 0x90;
        }
        *(ulong *)(param_5 + 0x88) = lVar32 + (ulong)*(uint *)(lVar30 + 0x54) * 4;
        *(uint *)(param_5 + 0x90) = (uint)*(byte *)(lVar30 + 0x58);
        lVar35 = *(long *)(lVar27 + 0x50);
        lVar32 = 0;
        if (lVar35 != 0) {
          lVar32 = lVar35 + lVar27 + 0x50;
        }
        *(ulong *)(param_5 + 0x68) = lVar32 + (ulong)*(uint *)(lVar30 + 0x50) * 4;
        uVar48 = *(undefined8 *)(lVar30 + 0x30);
        *(undefined8 *)(param_5 + 0x38) = *(undefined8 *)(lVar30 + 0x38);
        *(undefined8 *)(param_5 + 0x30) = uVar48;
        auVar7 = *(undefined1 (*) [12])(lVar30 + 0x3c);
        *(ulong *)(param_5 + 0x48) = (ulong)auVar7._8_4_;
        *(long *)(param_5 + 0x40) = auVar7._0_8_;
        *(ulong *)(param_5 + 0x80) = lVar18 + (ulong)*(byte *)(lVar30 + 0x58) * -2;
      }
      lVar27 = *(long *)(param_5 + 0xe0);
      lVar32 = *(long *)(lVar27 + 0x40);
      lVar30 = lVar32 + lVar27 + 0x40;
      lVar18 = 0;
      if (lVar32 != 0) {
        lVar18 = lVar30;
      }
      iVar31 = (int)(lVar20 - lVar18 >> 5) * -0x55555555;
      if (*(int *)(param_5 + 0x124) != iVar31 || *(int *)(param_5 + 0x128) != iVar31) {
        lVar30 = lVar30 + (long)iVar31 * 0x60;
        *(long *)(param_5 + 0xf0) = lVar30;
        *(int *)(param_5 + 0x128) = iVar31;
        *(int *)(param_5 + 0x124) = iVar31;
        lVar32 = *(long *)(lVar27 + 0x70);
        lVar18 = 0;
        if (lVar32 != 0) {
          lVar18 = lVar32 + lVar27 + 0x70;
        }
        *(ulong *)(param_5 + 0x100) = lVar18 + (ulong)*(uint *)(lVar30 + 0x48) * 4;
        lVar32 = *(long *)(lVar27 + 0x80);
        lVar18 = 0;
        if (lVar32 != 0) {
          lVar18 = lVar32 + lVar27 + 0x80;
        }
        *(ulong *)(param_5 + 0x108) = lVar18 + (ulong)*(byte *)(lVar30 + 0x5b) * 0x80000;
        lVar32 = *(long *)(lVar27 + 0x60);
        lVar18 = 0;
        if (lVar32 != 0) {
          lVar18 = lVar32 + lVar27 + 0x60;
        }
        lVar18 = lVar18 + (ulong)*(uint *)(lVar30 + 0x4c) * 2;
        *(long *)(param_5 + 0x110) = lVar18;
        lVar35 = *(long *)(lVar27 + 0x90);
        lVar32 = 0;
        if (lVar35 != 0) {
          lVar32 = lVar35 + lVar27 + 0x90;
        }
        *(ulong *)(param_5 + 0x118) = lVar32 + (ulong)*(uint *)(lVar30 + 0x54) * 4;
        *(uint *)(param_5 + 0x120) = (uint)*(byte *)(lVar30 + 0x58);
        lVar35 = *(long *)(lVar27 + 0x50);
        lVar32 = 0;
        if (lVar35 != 0) {
          lVar32 = lVar35 + lVar27 + 0x50;
        }
        *(ulong *)(param_5 + 0xf8) = lVar32 + (ulong)*(uint *)(lVar30 + 0x50) * 4;
        uVar48 = *(undefined8 *)(lVar30 + 0x30);
        *(undefined8 *)(param_5 + 200) = *(undefined8 *)(lVar30 + 0x38);
        *(undefined8 *)(param_5 + 0xc0) = uVar48;
        auVar7 = *(undefined1 (*) [12])(lVar30 + 0x3c);
        *(ulong *)(param_5 + 0xd8) = (ulong)auVar7._8_4_;
        *(long *)(param_5 + 0xd0) = auVar7._0_8_;
        *(ulong *)(param_5 + 0x110) = lVar18 + (ulong)*(byte *)(lVar30 + 0x58) * -2;
      }
      FUN_0019a9cc(param_1 & 1,lVar19,lVar20,param_4,param_5,0,0);
      iVar31 = (int)param_4[1];
    }
    if (iVar31 <= (int)lVar16) {
      return;
    }
  } while( true );
}


