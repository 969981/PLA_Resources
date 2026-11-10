/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0018f958; name: FUN_0018f958
 */


void FUN_0018f958(uint param_1,long *param_2,long *param_3,long *param_4,long param_5,
                 undefined8 *param_6,long *param_7)

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
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  byte *pbVar45;
  float fVar46;
  undefined8 uVar48;
  float fVar75;
  undefined1 auVar54 [16];
  float fVar73;
  undefined1 auVar55 [16];
  float fVar78;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar79;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar49;
  undefined1 auVar62 [16];
  float fVar47;
  float fVar74;
  float fVar76;
  float fVar80;
  undefined1 auVar63 [16];
  undefined8 uVar50;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar51;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar52;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar53;
  float fVar77;
  float fVar81;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar82;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar108;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar112;
  float fVar115;
  float fVar116;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined8 uVar122;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
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
  undefined8 local_100;
  ulong uStack_f8;
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
  undefined4 uStack_b4;
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
  
  puVar15 = PTR_DAT_04372370;
  if ((int)param_2[1] == 0 || (int)param_3[1] == 0) {
    return;
  }
  lVar14 = param_4[1];
  if (param_6 == (undefined8 *)0x0) {
    uVar44 = 0;
    pbVar45 = (byte *)(*param_2 + (long)param_2);
    fStack_148 = (float)param_2[3];
    fStack_144 = (float)((ulong)param_2[3] >> 0x20);
    local_150 = (float)param_2[2];
    fStack_14c = (float)((ulong)param_2[2] >> 0x20);
    fStack_138 = (float)param_2[5];
    fStack_134 = (float)((ulong)param_2[5] >> 0x20);
    local_140 = (float)param_2[4];
    fStack_13c = (float)((ulong)param_2[4] >> 0x20);
  }
  else {
    uVar44 = (ulong)*(uint *)(param_6 + 4);
    pbVar45 = (byte *)param_6[5];
    fStack_148 = (float)param_6[1];
    fStack_144 = (float)((ulong)param_6[1] >> 0x20);
    local_150 = (float)*param_6;
    fStack_14c = (float)((ulong)*param_6 >> 0x20);
    fStack_138 = (float)param_6[3];
    fStack_134 = (float)((ulong)param_6[3] >> 0x20);
    local_140 = (float)param_6[2];
    fStack_13c = (float)((ulong)param_6[2] >> 0x20);
  }
  if (param_7 == (long *)0x0) {
    uVar43 = 0;
    lStack_c8 = param_3[3];
    local_d0 = param_3[2];
    lVar16 = param_3[5];
    lVar30 = param_3[4];
    local_a8 = (byte *)(*param_3 + (long)param_3);
  }
  else {
    lStack_c8 = param_7[1];
    local_d0 = *param_7;
    lVar16 = param_7[3];
    lVar30 = param_7[2];
    uVar43 = (ulong)*(uint *)(param_7 + 4);
    local_a8 = (byte *)param_7[5];
  }
  iVar32 = (int)uVar44;
  local_b0 = (uint)uVar43;
  fStack_b8 = (float)lVar16;
  uStack_b4 = (undefined4)((ulong)lVar16 >> 0x20);
  fStack_c0 = (float)lVar30;
  local_bc = (float)((ulong)lVar30 >> 0x20);
  uVar83 = SUB168(*(undefined1 (*) [16])(PTR_DAT_04372370 + 0x50),0);
  if ((param_1 & 1) == 0) {
    uVar122 = NEON_fmax(uVar83,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    FUN_0333e220(param_5 + 0x1b0,&local_d0,&local_130);
    auVar54 = *(undefined1 (*) [16])(puVar15 + 0x150);
    auVar84 = NEON_ext(auVar54,auVar54,8,1);
    auVar54 = NEON_ext(auVar84,auVar54,8,1);
    local_1b0 = auVar54._0_4_;
    fVar46 = (local_120 - local_130) * local_1b0;
    fStack_1ac = auVar54._4_4_;
    fVar73 = (fStack_11c - fStack_12c) * fStack_1ac;
    fStack_1a8 = auVar54._8_4_;
    fVar75 = (fStack_118 - fStack_128) * fStack_1a8;
    fStack_1a4 = auVar54._12_4_;
    fVar47 = (fStack_114 - fStack_124) * fStack_1a4;
    auVar109._0_4_ = (local_130 + local_120) * local_1b0;
    auVar109._4_4_ = (fStack_12c + fStack_11c) * fStack_1ac;
    auVar109._8_4_ = (fStack_128 + fStack_118) * fStack_1a8;
    auVar109._12_4_ = (fStack_124 + fStack_114) * fStack_1a4;
    auVar96._0_4_ = local_150 - fVar46;
    auVar96._4_4_ = fStack_14c - fVar73;
    auVar96._8_4_ = fStack_148 - fVar75;
    auVar96._12_4_ = fStack_144 - fVar47;
    auVar54._0_4_ = local_140 + fVar46;
    auVar54._4_4_ = fStack_13c + fVar73;
    auVar54._8_4_ = fStack_138 + fVar75;
    auVar54._12_4_ = fStack_134 + fVar47;
    auVar84 = NEON_fmax(auVar96,auVar109,4);
    auVar54 = NEON_fmin(auVar54,auVar84,4);
    fVar46 = auVar109._0_4_ - auVar54._0_4_;
    fVar73 = auVar109._4_4_ - auVar54._4_4_;
    fVar75 = auVar109._8_4_ - auVar54._8_4_;
    fVar47 = auVar109._12_4_ - auVar54._12_4_;
    auVar84._0_4_ = fVar46 * fVar46;
    auVar84._4_4_ = fVar73 * fVar73;
    auVar84._8_4_ = fVar75 * fVar75;
    auVar84._12_4_ = fVar47 * fVar47;
    auVar54 = NEON_ext(auVar84,auVar84,8,1);
    if ((float)uVar122 * (float)uVar122 < auVar84._0_4_ + auVar84._4_4_ + auVar54._0_4_) {
      return;
    }
    lVar16 = CONCAT44(uStack_b4,fStack_b8);
    lVar30 = CONCAT44(local_bc,fStack_c0);
    uVar43 = (ulong)local_b0;
  }
  else {
    auVar54 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
    auVar84 = NEON_ext(auVar54,auVar54,8,1);
    auVar54 = NEON_ext(auVar84,auVar54,8,1);
    fStack_1a8 = auVar54._8_4_;
    fStack_1a4 = auVar54._12_4_;
    local_1b0 = auVar54._0_4_;
    fStack_1ac = auVar54._4_4_;
  }
  lVar18 = CONCAT44(fStack_144,fStack_148);
  lVar17 = CONCAT44(fStack_14c,local_150);
  lVar33 = CONCAT44(fStack_134,fStack_138);
  lVar25 = CONCAT44(fStack_13c,local_140);
  lVar1 = param_5 + 0x1b0;
  auVar54 = *(undefined1 (*) [16])(puVar15 + 0x1e0);
  uVar122 = *(undefined8 *)(puVar15 + 0x50);
  auVar109 = NEON_ext(auVar54,auVar54,8,1);
  auVar84 = *(undefined1 (*) [16])(puVar15 + 0x150);
  plVar24 = *(long **)PTR_PTR_04372408;
  auVar96 = NEON_ext(auVar84,auVar84,8,1);
  auVar109 = NEON_ext(auVar109,auVar54,8,1);
  auVar54 = NEON_ext(auVar96,auVar84,8,1);
  fVar46 = auVar109._0_4_;
  fVar73 = auVar109._4_4_;
  fVar75 = auVar109._8_4_;
  uVar41 = (uint)uVar43;
  if ((param_1 & 1) == 0) goto LAB_0018fb4c;
LAB_0018fb40:
  iVar32 = (int)uVar44;
  uVar41 = (uint)uVar43;
  if (local_a8 != pbVar45) goto LAB_0018fb4c;
  while ((char)pbVar45[3] < '\0') {
    lVar16 = (long)(int)uVar44 + 1;
    fVar116 = (float)lVar25;
    fVar108 = (float)lVar17;
    fVar119 = (float)((ulong)lVar25 >> 0x20);
    fVar82 = (float)((ulong)lVar17 >> 0x20);
    fVar74 = (float)lVar33;
    fVar112 = (float)lVar18;
    uVar42 = (uint)lVar16;
    fVar47 = (fVar116 - fVar108) * fVar46;
    fVar76 = (fVar119 - fVar82) * fVar73;
    fVar80 = (fVar74 - fVar112) * fVar75;
    lVar30 = (long)(int)uVar44 + (ulong)((uint)pbVar45[4] | (pbVar45[3] & 0x7f) << 8) * 2;
    uVar20 = (undefined4)lVar30;
    local_108 = (byte *)((long)param_2 + lVar16 * 5 + *param_2);
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
    fStack_128 = fVar112 + (float)(byte)(bVar10 * bVar10) * fVar80;
    fVar79 = fVar82 + (float)(byte)(bVar9 * bVar9) * fVar76;
    fVar82 = fVar82 + (float)(byte)(bVar8 * bVar8) * fVar76;
    fVar115 = fVar108 + (float)(byte)(bVar11 * bVar11) * fVar47;
    fVar112 = fVar112 + (float)(byte)(bVar5 * bVar5) * fVar80;
    local_120 = fVar116 - (float)(byte)(bVar12 * bVar12) * fVar47;
    fStack_11c = fVar119 - (float)(byte)(bVar4 * bVar4) * fVar76;
    bVar12 = *local_d8 >> 4;
    bVar4 = *local_d8 & 0xf;
    fVar108 = fVar108 + (float)(byte)(bVar12 * bVar12) * fVar47;
    fVar116 = fVar116 - (float)(byte)(bVar4 * bVar4) * fVar47;
    fStack_118 = fVar74 - (float)(byte)(bVar13 * bVar13) * fVar80;
    bVar4 = local_d8[1] & 0xf;
    uStack_e4 = 0;
    uStack_f8 = (ulong)(uint)fVar112;
    local_100 = CONCAT44(fVar82,fVar108);
    fVar119 = fVar119 - (float)(byte)(bVar4 * bVar4) * fVar76;
    fVar74 = fVar74 - (float)(byte)(bVar6 * bVar6) * fVar80;
    uVar36 = CONCAT44(fStack_11c,local_120);
    uVar43 = (ulong)(uint)fStack_128;
    lVar16 = *param_4;
    uVar39 = *(uint *)(param_4 + 1);
    uVar44 = (ulong)uVar39;
    uVar40 = *(uint *)((long)param_4 + 0xc);
    uVar41 = uVar39 + 1;
    uVar27 = (ulong)(uint)fStack_118;
    lVar30 = lVar16;
    local_130 = fVar115;
    fStack_12c = fVar79;
    local_110 = uVar42;
    local_f0 = fVar116;
    fStack_ec = fVar119;
    fStack_e8 = fVar74;
    local_e0 = uVar20;
    if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
      if (0x3ffffffe < (int)uVar39) {
        FUN_032bd0a8(uVar41);
        uVar40 = *(uint *)((long)param_4 + 0xc);
      }
      uVar21 = (uVar40 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
      uVar3 = uVar41;
      if ((int)uVar41 <= (int)uVar21) {
        uVar3 = uVar21;
      }
      FUN_032bd100(uVar3,0x60,uVar40,&local_a0);
      uVar40 = *(uint *)((long)param_4 + 0xc);
      lVar30 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
      if (0 < (int)uVar39) {
        uVar26 = uVar44 & 3;
        if (uVar44 - 1 < 3) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          puVar28 = (undefined8 *)(lVar30 + 0xc0);
          puVar34 = (undefined8 *)(lVar16 + 0xc0);
          do {
            uVar48 = puVar34[-0xd];
            lVar17 = lVar17 + 4;
            puVar28[-0xf] = puVar34[-0xf];
            puVar28[-0xd] = uVar48;
            uVar48 = puVar34[-0x11];
            puVar28[-0x13] = puVar34[-0x13];
            puVar28[-0x11] = uVar48;
            uVar48 = puVar34[-0x15];
            puVar28[-0x17] = puVar34[-0x17];
            puVar28[-0x15] = uVar48;
            uVar48 = puVar34[-0x18];
            puVar28[-0x16] = puVar34[-0x16];
            puVar28[-0x18] = uVar48;
            uVar48 = puVar34[-0x14];
            puVar28[-0x12] = puVar34[-0x12];
            puVar28[-0x14] = uVar48;
            uVar48 = puVar34[-0x10];
            puVar28[-0xe] = puVar34[-0xe];
            puVar28[-0x10] = uVar48;
            uVar48 = puVar34[-1];
            puVar28[-3] = puVar34[-3];
            puVar28[-1] = uVar48;
            uVar48 = puVar34[-5];
            puVar28[-7] = puVar34[-7];
            puVar28[-5] = uVar48;
            uVar48 = puVar34[-9];
            puVar28[-0xb] = puVar34[-0xb];
            puVar28[-9] = uVar48;
            uVar48 = puVar34[-0xc];
            puVar28[-10] = puVar34[-10];
            puVar28[-0xc] = uVar48;
            uVar48 = puVar34[-8];
            puVar28[-6] = puVar34[-6];
            puVar28[-8] = uVar48;
            uVar48 = puVar34[-4];
            puVar28[-2] = puVar34[-2];
            puVar28[-4] = uVar48;
            uVar48 = puVar34[0xb];
            puVar28[9] = puVar34[9];
            puVar28[0xb] = uVar48;
            uVar48 = puVar34[7];
            puVar28[5] = puVar34[5];
            puVar28[7] = uVar48;
            uVar48 = puVar34[3];
            puVar28[1] = puVar34[1];
            puVar28[3] = uVar48;
            uVar48 = *puVar34;
            puVar28[2] = puVar34[2];
            *puVar28 = uVar48;
            uVar48 = puVar34[4];
            puVar28[6] = puVar34[6];
            puVar28[4] = uVar48;
            uVar48 = puVar34[8];
            puVar28[10] = puVar34[10];
            puVar28[8] = uVar48;
            uVar48 = puVar34[0x17];
            puVar28[0x15] = puVar34[0x15];
            puVar28[0x17] = uVar48;
            uVar48 = puVar34[0x13];
            puVar28[0x11] = puVar34[0x11];
            puVar28[0x13] = uVar48;
            uVar48 = puVar34[0xf];
            puVar28[0xd] = puVar34[0xd];
            puVar28[0xf] = uVar48;
            uVar48 = puVar34[0xc];
            puVar28[0xe] = puVar34[0xe];
            puVar28[0xc] = uVar48;
            uVar48 = puVar34[0x10];
            puVar28[0x12] = puVar34[0x12];
            puVar28[0x10] = uVar48;
            uVar48 = puVar34[0x14];
            puVar28[0x16] = puVar34[0x16];
            puVar28[0x14] = uVar48;
            puVar28 = puVar28 + 0x30;
            puVar34 = puVar34 + 0x30;
          } while (uVar44 - uVar26 != lVar17);
        }
        if ((uVar39 & 3) != 0) {
          puVar28 = (undefined8 *)(lVar16 + lVar17 * 0x60);
          puVar34 = (undefined8 *)(lVar30 + lVar17 * 0x60);
          do {
            uVar48 = puVar28[0xb];
            uVar26 = uVar26 - 1;
            puVar34[9] = puVar28[9];
            puVar34[0xb] = uVar48;
            uVar48 = puVar28[7];
            puVar34[5] = puVar28[5];
            puVar34[7] = uVar48;
            uVar48 = puVar28[3];
            puVar34[1] = puVar28[1];
            puVar34[3] = uVar48;
            uVar48 = *puVar28;
            puVar34[2] = puVar28[2];
            *puVar34 = uVar48;
            uVar48 = puVar28[4];
            puVar34[6] = puVar28[6];
            puVar34[4] = uVar48;
            uVar48 = puVar28[8];
            puVar34[10] = puVar28[10];
            puVar34[8] = uVar48;
            puVar28 = puVar28 + 0xc;
            puVar34 = puVar34 + 0xc;
          } while (uVar26 != 0);
        }
      }
      if (-1 < (int)uVar40) {
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,((ulong)uVar40 & 0x3fffffff) * 0x60);
      }
      if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
        uVar19 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
      }
      else {
        uVar19 = 0x3fffffff;
      }
      uVar39 = *(uint *)(param_4 + 1);
      *(undefined4 *)((long)param_4 + 0xc) = uVar19;
      *param_4 = lVar30;
    }
    *(uint *)(param_4 + 1) = uVar41;
    puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar39 * 0x60);
    *(undefined4 *)(puVar28 + 4) = uVar20;
    *(undefined4 *)(puVar28 + 10) = uVar20;
    puVar28[1] = (ulong)(uint)fVar112;
    *puVar28 = CONCAT44(fVar82,fVar108);
    puVar28[3] = (ulong)(uint)fVar74;
    puVar28[2] = CONCAT44(fVar119,fVar116);
    puVar28[7] = (ulong)(uint)fVar112;
    puVar28[6] = CONCAT44(fVar82,fVar108);
    puVar28[9] = (ulong)(uint)fVar74;
    puVar28[8] = CONCAT44(fVar119,fVar116);
    uVar48 = NEON_fmax(uVar83,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    FUN_0333e220(lVar1,&local_100,&local_a0);
    lVar18 = CONCAT44(fStack_124,fStack_128);
    lVar17 = CONCAT44(fStack_12c,local_130);
    lVar33 = CONCAT44(fStack_114,fStack_118);
    lVar25 = CONCAT44(fStack_11c,local_120);
    fVar47 = (fStack_90 - local_a0) * local_1b0;
    fVar76 = (fStack_8c - fStack_9c) * fStack_1ac;
    fVar80 = (fStack_88 - fStack_98) * fStack_1a8;
    fVar117 = (fStack_84 - fStack_94) * fStack_1a4;
    auVar97._0_4_ = (local_a0 + fStack_90) * local_1b0;
    auVar97._4_4_ = (fStack_9c + fStack_8c) * fStack_1ac;
    auVar97._8_4_ = (fStack_98 + fStack_88) * fStack_1a8;
    auVar97._12_4_ = (fStack_94 + fStack_84) * fStack_1a4;
    auVar85._0_4_ = local_130 - fVar47;
    auVar85._4_4_ = fStack_12c - fVar76;
    auVar85._8_4_ = fStack_128 - fVar80;
    auVar85._12_4_ = fStack_124 - fVar117;
    auVar93._0_4_ = local_120 + fVar47;
    auVar93._4_4_ = fStack_11c + fVar76;
    auVar93._8_4_ = fStack_118 + fVar80;
    auVar93._12_4_ = fStack_114 + fVar117;
    auVar84 = NEON_fmax(auVar85,auVar97,4);
    auVar84 = NEON_fmin(auVar93,auVar84,4);
    fVar47 = auVar97._0_4_ - auVar84._0_4_;
    fVar76 = auVar97._4_4_ - auVar84._4_4_;
    fVar80 = auVar97._8_4_ - auVar84._8_4_;
    fVar117 = auVar97._12_4_ - auVar84._12_4_;
    auVar55._0_4_ = fVar47 * fVar47;
    auVar55._4_4_ = fVar76 * fVar76;
    auVar55._8_4_ = fVar80 * fVar80;
    auVar55._12_4_ = fVar117 * fVar117;
    auVar84 = NEON_ext(auVar55,auVar55,8,1);
    if (auVar55._0_4_ + auVar55._4_4_ + auVar84._0_4_ <= (float)uVar48 * (float)uVar48) {
      uVar39 = *(uint *)(param_4 + 1);
      uVar44 = (ulong)uVar39;
      uVar40 = *(uint *)((long)param_4 + 0xc);
      lVar16 = *param_4;
      uVar41 = uVar39 + 1;
      lVar30 = lVar16;
      if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
        if (0x3ffffffe < (int)uVar39) {
          FUN_032bd0a8(uVar41);
          uVar40 = *(uint *)((long)param_4 + 0xc);
        }
        uVar21 = (uVar40 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar21) {
          uVar21 = 0x3fffffff;
        }
        uVar3 = uVar41;
        if ((int)uVar41 <= (int)uVar21) {
          uVar3 = uVar21;
        }
        FUN_032bd100(uVar3,0x60,uVar40,&local_a0);
        uVar40 = *(uint *)((long)param_4 + 0xc);
        lVar30 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
        if (0 < (int)uVar39) {
          uVar26 = uVar44 & 3;
          if (uVar44 - 1 < 3) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            puVar28 = (undefined8 *)(lVar30 + 0xc0);
            puVar34 = (undefined8 *)(lVar16 + 0xc0);
            do {
              uVar48 = puVar34[-0xd];
              lVar17 = lVar17 + 4;
              puVar28[-0xf] = puVar34[-0xf];
              puVar28[-0xd] = uVar48;
              uVar48 = puVar34[-0x11];
              puVar28[-0x13] = puVar34[-0x13];
              puVar28[-0x11] = uVar48;
              uVar48 = puVar34[-0x15];
              puVar28[-0x17] = puVar34[-0x17];
              puVar28[-0x15] = uVar48;
              uVar48 = puVar34[-0x18];
              puVar28[-0x16] = puVar34[-0x16];
              puVar28[-0x18] = uVar48;
              uVar48 = puVar34[-0x14];
              puVar28[-0x12] = puVar34[-0x12];
              puVar28[-0x14] = uVar48;
              uVar48 = puVar34[-0x10];
              puVar28[-0xe] = puVar34[-0xe];
              puVar28[-0x10] = uVar48;
              uVar48 = puVar34[-1];
              puVar28[-3] = puVar34[-3];
              puVar28[-1] = uVar48;
              uVar48 = puVar34[-5];
              puVar28[-7] = puVar34[-7];
              puVar28[-5] = uVar48;
              uVar48 = puVar34[-9];
              puVar28[-0xb] = puVar34[-0xb];
              puVar28[-9] = uVar48;
              uVar48 = puVar34[-0xc];
              puVar28[-10] = puVar34[-10];
              puVar28[-0xc] = uVar48;
              uVar48 = puVar34[-8];
              puVar28[-6] = puVar34[-6];
              puVar28[-8] = uVar48;
              uVar48 = puVar34[-4];
              puVar28[-2] = puVar34[-2];
              puVar28[-4] = uVar48;
              uVar48 = puVar34[0xb];
              puVar28[9] = puVar34[9];
              puVar28[0xb] = uVar48;
              uVar48 = puVar34[7];
              puVar28[5] = puVar34[5];
              puVar28[7] = uVar48;
              uVar48 = puVar34[3];
              puVar28[1] = puVar34[1];
              puVar28[3] = uVar48;
              uVar48 = *puVar34;
              puVar28[2] = puVar34[2];
              *puVar28 = uVar48;
              uVar48 = puVar34[4];
              puVar28[6] = puVar34[6];
              puVar28[4] = uVar48;
              uVar48 = puVar34[8];
              puVar28[10] = puVar34[10];
              puVar28[8] = uVar48;
              uVar48 = puVar34[0x17];
              puVar28[0x15] = puVar34[0x15];
              puVar28[0x17] = uVar48;
              uVar48 = puVar34[0x13];
              puVar28[0x11] = puVar34[0x11];
              puVar28[0x13] = uVar48;
              uVar48 = puVar34[0xf];
              puVar28[0xd] = puVar34[0xd];
              puVar28[0xf] = uVar48;
              uVar48 = puVar34[0xc];
              puVar28[0xe] = puVar34[0xe];
              puVar28[0xc] = uVar48;
              uVar48 = puVar34[0x10];
              puVar28[0x12] = puVar34[0x12];
              puVar28[0x10] = uVar48;
              uVar48 = puVar34[0x14];
              puVar28[0x16] = puVar34[0x16];
              puVar28[0x14] = uVar48;
              puVar28 = puVar28 + 0x30;
              puVar34 = puVar34 + 0x30;
            } while (uVar44 - uVar26 != lVar17);
          }
          if ((uVar39 & 3) != 0) {
            puVar28 = (undefined8 *)(lVar16 + lVar17 * 0x60);
            puVar34 = (undefined8 *)(lVar30 + lVar17 * 0x60);
            do {
              uVar48 = puVar28[0xb];
              uVar26 = uVar26 - 1;
              puVar34[9] = puVar28[9];
              puVar34[0xb] = uVar48;
              uVar48 = puVar28[7];
              puVar34[5] = puVar28[5];
              puVar34[7] = uVar48;
              uVar48 = puVar28[3];
              puVar34[1] = puVar28[1];
              puVar34[3] = uVar48;
              uVar48 = *puVar28;
              puVar34[2] = puVar28[2];
              *puVar34 = uVar48;
              uVar48 = puVar28[4];
              puVar34[6] = puVar28[6];
              puVar34[4] = uVar48;
              uVar48 = puVar28[8];
              puVar34[10] = puVar28[10];
              puVar34[8] = uVar48;
              puVar28 = puVar28 + 0xc;
              puVar34 = puVar34 + 0xc;
            } while (uVar26 != 0);
          }
        }
        if (-1 < (int)uVar40) {
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,((ulong)uVar40 & 0x3fffffff) * 0x60);
        }
        if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
          uVar19 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
        }
        else {
          uVar19 = 0x3fffffff;
        }
        *(undefined4 *)((long)param_4 + 0xc) = uVar19;
        uVar39 = *(uint *)(param_4 + 1);
        *param_4 = lVar30;
      }
      puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar39 * 0x60);
      *(uint *)(param_4 + 1) = uVar41;
      *(uint *)(puVar28 + 4) = uVar42;
      puVar28[1] = uVar43;
      *puVar28 = CONCAT44(fVar79,fVar115);
      puVar28[3] = uVar27;
      puVar28[2] = uVar36;
      *(undefined4 *)(puVar28 + 10) = uVar20;
      puVar28[7] = (ulong)(uint)fVar112;
      puVar28[6] = CONCAT44(fVar82,fVar108);
      puVar28[9] = (ulong)(uint)fVar74;
      puVar28[8] = CONCAT44(fVar119,fVar116);
      lVar18 = CONCAT44(fStack_124,fStack_128);
      lVar17 = CONCAT44(fStack_12c,local_130);
      lVar33 = CONCAT44(fStack_114,fStack_118);
      lVar25 = CONCAT44(fStack_11c,local_120);
    }
    uVar44 = (ulong)local_110;
    local_b0 = local_110;
    local_a8 = local_108;
    fStack_b8 = (float)lVar33;
    uStack_b4 = (undefined4)((ulong)lVar33 >> 0x20);
    fStack_c0 = (float)lVar25;
    local_bc = (float)((ulong)lVar25 >> 0x20);
    pbVar45 = local_108;
    local_d0 = lVar17;
    lStack_c8 = lVar18;
  }
LAB_001920d0:
  iVar32 = (int)param_4[1];
  if (iVar32 <= (int)lVar14) {
    return;
  }
  do {
    *(int *)(param_4 + 1) = (int)((long)iVar32 + -1);
    plVar29 = (long *)(*param_4 + ((long)iVar32 + -1) * 0x60);
    local_b0 = *(uint *)(plVar29 + 10);
    uVar43 = (ulong)(int)local_b0;
    iVar32 = (int)plVar29[4];
    uVar44 = (ulong)iVar32;
    lVar18 = plVar29[1];
    lVar17 = *plVar29;
    lVar33 = plVar29[3];
    lVar25 = plVar29[2];
    lStack_c8 = plVar29[7];
    local_d0 = plVar29[6];
    lVar16 = plVar29[9];
    lVar30 = plVar29[8];
    fStack_b8 = (float)lVar16;
    uStack_b4 = (undefined4)((ulong)lVar16 >> 0x20);
    fStack_c0 = (float)lVar30;
    local_bc = (float)((ulong)lVar30 >> 0x20);
    local_a8 = (byte *)((long)param_3 + uVar43 * 5 + *param_3);
    pbVar45 = (byte *)((long)param_2 + uVar44 * 5 + *param_2);
    uVar41 = local_b0;
    if ((param_1 & 1) != 0) goto LAB_0018fb40;
LAB_0018fb4c:
    lVar31 = lStack_c8;
    lVar38 = local_d0;
    bVar4 = pbVar45[3];
    fVar119 = (float)lVar17;
    fVar82 = (float)((ulong)lVar17 >> 0x20);
    fVar47 = (float)lVar18;
    fVar74 = (float)lVar25;
    fVar76 = (float)((ulong)lVar25 >> 0x20);
    fVar80 = (float)lVar33;
    local_210 = auVar54._0_4_;
    fStack_20c = auVar54._4_4_;
    fStack_208 = auVar54._8_4_;
    fStack_204 = auVar54._12_4_;
    if ((char)bVar4 < '\0') {
      lVar18 = (long)iVar32 + 1;
      fVar116 = (fVar74 - fVar119) * fVar46;
      fVar79 = (fVar76 - fVar82) * fVar73;
      fVar108 = (fVar80 - fVar47) * fVar75;
      lVar17 = (long)iVar32 + (ulong)((uint)pbVar45[4] | (bVar4 & 0x7f) << 8) * 2;
      pbVar45 = (byte *)((long)param_2 + lVar18 * 5 + *param_2);
      bVar4 = *pbVar45 & 0xf;
      bVar6 = *pbVar45 >> 4;
      fVar117 = fVar119 + (float)(byte)(bVar6 * bVar6) * fVar116;
      pbVar2 = (byte *)((long)param_2 + lVar17 * 5 + *param_2);
      bVar12 = *pbVar2 >> 4;
      bVar6 = *pbVar2 & 0xf;
      fVar118 = fVar74 - (float)(byte)(bVar4 * bVar4) * fVar116;
      bVar13 = pbVar45[1] >> 4;
      bVar4 = pbVar45[1] & 0xf;
      fVar119 = fVar119 + (float)(byte)(bVar12 * bVar12) * fVar116;
      fVar120 = fVar82 + (float)(byte)(bVar13 * bVar13) * fVar79;
      bVar13 = pbVar2[1] >> 4;
      bVar5 = pbVar2[2] >> 4;
      bVar12 = pbVar2[2] & 0xf;
      fVar121 = fVar76 - (float)(byte)(bVar4 * bVar4) * fVar79;
      bVar8 = pbVar45[2] >> 4;
      fVar82 = fVar82 + (float)(byte)(bVar13 * bVar13) * fVar79;
      bVar4 = pbVar45[2] & 0xf;
      fVar112 = fVar47 + (float)(byte)(bVar8 * bVar8) * fVar108;
      fVar115 = fVar80 - (float)(byte)(bVar4 * bVar4) * fVar108;
      fVar47 = fVar47 + (float)(byte)(bVar5 * bVar5) * fVar108;
      fVar74 = fVar74 - (float)(byte)(bVar6 * bVar6) * fVar116;
      bVar4 = pbVar2[1] & 0xf;
      fVar76 = fVar76 - (float)(byte)(bVar4 * bVar4) * fVar79;
      uVar36 = CONCAT44(fVar76,fVar74);
      fVar80 = fVar80 - (float)(byte)(bVar12 * bVar12) * fVar108;
      uVar20 = (undefined4)lVar17;
      uVar19 = (undefined4)lVar18;
      if ((char)local_a8[3] < '\0') {
        lVar16 = (long)(int)local_b0 + 1;
        local_110 = (uint)lVar16;
        fVar116 = fVar46 * (fStack_c0 - (float)local_d0);
        fVar79 = fVar73 * (local_bc - local_d0._4_4_);
        fVar108 = fVar75 * (fStack_b8 - (float)lStack_c8);
        lVar30 = (long)(int)local_b0 + (ulong)((uint)local_a8[4] | (local_a8[3] & 0x7f) << 8) * 2;
        local_e0 = (undefined4)lVar30;
        local_108 = (byte *)((long)param_3 + lVar16 * 5 + *param_3);
        local_d8 = (byte *)((long)param_3 + lVar30 * 5 + *param_3);
        bVar12 = *local_108 >> 4;
        bVar4 = *local_108 & 0xf;
        bVar13 = local_108[1] >> 4;
        bVar6 = local_108[2] >> 4;
        fStack_128 = (float)(byte)(bVar6 * bVar6) * fVar108 + (float)lStack_c8;
        bVar6 = local_108[1] & 0xf;
        fStack_124 = 0.0;
        local_130 = (float)(byte)(bVar12 * bVar12) * fVar116 + (float)local_d0;
        fStack_12c = (float)(byte)(bVar13 * bVar13) * fVar79 + local_d0._4_4_;
        fStack_114 = 0.0;
        bVar12 = local_108[2] & 0xf;
        bVar5 = local_d8[1] >> 4;
        local_120 = fStack_c0 - (float)(byte)(bVar4 * bVar4) * fVar116;
        bVar8 = local_d8[2] >> 4;
        bVar4 = local_d8[1] & 0xf;
        bVar13 = local_d8[2] & 0xf;
        fStack_11c = local_bc - (float)(byte)(bVar6 * bVar6) * fVar79;
        bVar9 = *local_d8 >> 4;
        fStack_118 = fStack_b8 - (float)(byte)(bVar12 * bVar12) * fVar108;
        uStack_e4 = 0;
        bVar6 = *local_d8 & 0xf;
        local_100 = CONCAT44((float)(byte)(bVar5 * bVar5) * fVar79 + local_d0._4_4_,
                             (float)local_d0 + (float)(byte)(bVar9 * bVar9) * fVar116);
        local_f0 = fStack_c0 - (float)(byte)(bVar6 * bVar6) * fVar116;
        uStack_f8 = (ulong)(uint)((float)(byte)(bVar8 * bVar8) * fVar108 + (float)lStack_c8);
        fStack_ec = local_bc - (float)(byte)(bVar4 * bVar4) * fVar79;
        fStack_e8 = fStack_b8 - (float)(byte)(bVar13 * bVar13) * fVar108;
        uVar50 = NEON_fmax(uVar83,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_130,&local_a0);
        fVar116 = (fStack_90 - local_a0) * local_1b0;
        fVar79 = (fStack_8c - fStack_9c) * fStack_1ac;
        fVar108 = (fStack_88 - fStack_98) * fStack_1a8;
        fVar78 = (fStack_84 - fStack_94) * fStack_1a4;
        auVar102._0_4_ = (local_a0 + fStack_90) * local_1b0;
        auVar102._4_4_ = (fStack_9c + fStack_8c) * fStack_1ac;
        auVar102._8_4_ = (fStack_98 + fStack_88) * fStack_1a8;
        auVar102._12_4_ = (fStack_94 + fStack_84) * fStack_1a4;
        auVar90._0_4_ = fVar117 - fVar116;
        auVar90._4_4_ = fVar120 - fVar79;
        auVar90._8_4_ = fVar112 - fVar108;
        auVar90._12_4_ = 0.0 - fVar78;
        auVar64._0_4_ = fVar118 + fVar116;
        auVar64._4_4_ = fVar121 + fVar79;
        auVar64._8_4_ = fVar115 + fVar108;
        auVar64._12_4_ = fVar78 + 0.0;
        auVar84 = NEON_fmax(auVar90,auVar102,4);
        auVar84 = NEON_fmin(auVar64,auVar84,4);
        fVar116 = auVar102._0_4_ - auVar84._0_4_;
        fVar79 = auVar102._4_4_ - auVar84._4_4_;
        fVar108 = auVar102._8_4_ - auVar84._8_4_;
        fVar78 = auVar102._12_4_ - auVar84._12_4_;
        auVar65._0_4_ = fVar116 * fVar116;
        auVar65._4_4_ = fVar79 * fVar79;
        auVar65._8_4_ = fVar108 * fVar108;
        auVar65._12_4_ = fVar78 * fVar78;
        auVar96 = NEON_ext(auVar65,auVar65,8,1);
        uVar51 = NEON_fmax(uVar83,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_100,&local_a0);
        fVar116 = local_1b0 * (fStack_90 - local_a0);
        fVar79 = fStack_1ac * (fStack_8c - fStack_9c);
        fVar108 = fStack_1a8 * (fStack_88 - fStack_98);
        fVar78 = fStack_1a4 * (fStack_84 - fStack_94);
        auVar103._0_4_ = local_1b0 * (local_a0 + fStack_90);
        auVar103._4_4_ = fStack_1ac * (fStack_9c + fStack_8c);
        auVar103._8_4_ = fStack_1a8 * (fStack_98 + fStack_88);
        auVar103._12_4_ = fStack_1a4 * (fStack_94 + fStack_84);
        auVar91._0_4_ = fVar117 - fVar116;
        auVar91._4_4_ = fVar120 - fVar79;
        auVar91._8_4_ = fVar112 - fVar108;
        auVar91._12_4_ = 0.0 - fVar78;
        auVar66._0_4_ = fVar118 + fVar116;
        auVar66._4_4_ = fVar121 + fVar79;
        auVar66._8_4_ = fVar115 + fVar108;
        auVar66._12_4_ = fVar78 + 0.0;
        auVar84 = NEON_fmax(auVar91,auVar103,4);
        auVar84 = NEON_fmin(auVar66,auVar84,4);
        fVar116 = auVar103._0_4_ - auVar84._0_4_;
        fVar79 = auVar103._4_4_ - auVar84._4_4_;
        fVar108 = auVar103._8_4_ - auVar84._8_4_;
        fVar78 = auVar103._12_4_ - auVar84._12_4_;
        auVar67._0_4_ = fVar116 * fVar116;
        auVar67._4_4_ = fVar79 * fVar79;
        auVar67._8_4_ = fVar108 * fVar108;
        auVar67._12_4_ = fVar78 * fVar78;
        auVar109 = NEON_ext(auVar67,auVar67,8,1);
        uVar52 = NEON_fmax(uVar83,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_130,&local_a0);
        fVar116 = local_1b0 * (fStack_90 - local_a0);
        fVar79 = fStack_1ac * (fStack_8c - fStack_9c);
        fVar108 = fStack_1a8 * (fStack_88 - fStack_98);
        fVar78 = fStack_1a4 * (fStack_84 - fStack_94);
        auVar104._0_4_ = local_1b0 * (local_a0 + fStack_90);
        auVar104._4_4_ = fStack_1ac * (fStack_9c + fStack_8c);
        auVar104._8_4_ = fStack_1a8 * (fStack_98 + fStack_88);
        auVar104._12_4_ = fStack_1a4 * (fStack_94 + fStack_84);
        auVar92._0_4_ = fVar119 - fVar116;
        auVar92._4_4_ = fVar82 - fVar79;
        auVar92._8_4_ = fVar47 - fVar108;
        auVar92._12_4_ = 0.0 - fVar78;
        auVar68._0_4_ = fVar74 + fVar116;
        auVar68._4_4_ = fVar76 + fVar79;
        auVar68._8_4_ = fVar80 + fVar108;
        auVar68._12_4_ = fVar78 + 0.0;
        auVar84 = NEON_fmax(auVar92,auVar104,4);
        auVar84 = NEON_fmin(auVar68,auVar84,4);
        fVar116 = auVar104._0_4_ - auVar84._0_4_;
        fVar79 = auVar104._4_4_ - auVar84._4_4_;
        fVar108 = auVar104._8_4_ - auVar84._8_4_;
        fVar78 = auVar104._12_4_ - auVar84._12_4_;
        auVar69._0_4_ = fVar116 * fVar116;
        auVar69._4_4_ = fVar79 * fVar79;
        auVar69._8_4_ = fVar108 * fVar108;
        auVar69._12_4_ = fVar78 * fVar78;
        auVar93 = NEON_ext(auVar69,auVar69,8,1);
        uVar53 = NEON_fmax(uVar83,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_100,&local_a0);
        uVar22 = local_e0;
        uVar44 = uStack_f8;
        lVar30 = local_100;
        uVar41 = local_110;
        fVar79 = fStack_11c;
        fVar116 = local_120;
        auVar111._8_4_ = fVar80;
        auVar111._0_8_ = uVar36;
        auVar111._12_4_ = 0;
        auVar105._0_4_ = local_1b0 * (local_a0 + fStack_90);
        auVar105._4_4_ = fStack_1ac * (fStack_9c + fStack_8c);
        auVar105._8_4_ = fStack_1a8 * (fStack_98 + fStack_88);
        auVar105._12_4_ = fStack_1a4 * (fStack_94 + fStack_84);
        fVar108 = local_1b0 * (fStack_90 - local_a0);
        fVar78 = fStack_1ac * (fStack_8c - fStack_9c);
        fVar77 = fStack_1a8 * (fStack_88 - fStack_98);
        fVar81 = fStack_1a4 * (fStack_84 - fStack_94);
        auVar107._4_4_ = fVar82;
        auVar107._0_4_ = fVar119;
        auVar107._8_4_ = fVar47;
        auVar107._12_4_ = 0;
        uVar37 = CONCAT44(fStack_ec,local_f0);
        auVar114._8_4_ = fStack_e8;
        auVar114._0_8_ = uVar37;
        auVar114._12_4_ = uStack_e4;
        auVar94._0_4_ = fVar119 - fVar108;
        auVar94._4_4_ = fVar82 - fVar78;
        auVar94._8_4_ = fVar47 - fVar77;
        auVar94._12_4_ = 0.0 - fVar81;
        auVar70._0_4_ = fVar74 + fVar108;
        auVar70._4_4_ = fVar76 + fVar78;
        auVar70._8_4_ = fVar80 + fVar77;
        auVar70._12_4_ = fVar81 + 0.0;
        auVar84 = NEON_fmax(auVar94,auVar105,4);
        auVar84 = NEON_fmin(auVar70,auVar84,4);
        fVar74 = auVar105._0_4_ - auVar84._0_4_;
        fVar76 = auVar105._4_4_ - auVar84._4_4_;
        fVar108 = auVar105._8_4_ - auVar84._8_4_;
        fVar78 = auVar105._12_4_ - auVar84._12_4_;
        auVar71._0_4_ = fVar74 * fVar74;
        auVar71._4_4_ = fVar76 * fVar76;
        auVar71._8_4_ = fVar108 * fVar108;
        auVar71._12_4_ = fVar78 * fVar78;
        auVar84 = NEON_ext(auVar71,auVar71,8,1);
        uVar35 = CONCAT44(fStack_114,fStack_118);
        uVar48 = CONCAT44(fStack_12c,local_130);
        uVar49 = CONCAT44(fStack_124,fStack_128);
        if (auVar71._0_4_ + auVar71._4_4_ + auVar84._0_4_ <= (float)uVar53 * (float)uVar53) {
          uVar40 = *(uint *)(param_4 + 1);
          uVar43 = (ulong)uVar40;
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar17 = *param_4;
          uVar39 = uVar40 + 1;
          lVar16 = lVar17;
          if ((int)(uVar42 & 0x3fffffff) <= (int)uVar40) {
            if (0x3ffffffe < (int)uVar40) {
              FUN_032bd0a8(uVar39);
              uVar42 = *(uint *)((long)param_4 + 0xc);
            }
            uVar21 = (uVar42 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar3 = uVar39;
            if ((int)uVar39 <= (int)uVar21) {
              uVar3 = uVar21;
            }
            FUN_032bd100(uVar3,0x60,uVar42,&local_a0);
            uVar42 = *(uint *)((long)param_4 + 0xc);
            lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar40) {
              uVar27 = uVar43 & 3;
              if (uVar43 - 1 < 3) {
                lVar18 = 0;
              }
              else {
                lVar18 = 0;
                puVar28 = (undefined8 *)(lVar16 + 0xc0);
                puVar34 = (undefined8 *)(lVar17 + 0xc0);
                do {
                  uVar53 = puVar34[-0xd];
                  lVar18 = lVar18 + 4;
                  puVar28[-0xf] = puVar34[-0xf];
                  puVar28[-0xd] = uVar53;
                  uVar53 = puVar34[-0x11];
                  puVar28[-0x13] = puVar34[-0x13];
                  puVar28[-0x11] = uVar53;
                  uVar53 = puVar34[-0x15];
                  puVar28[-0x17] = puVar34[-0x17];
                  puVar28[-0x15] = uVar53;
                  uVar53 = puVar34[-0x18];
                  puVar28[-0x16] = puVar34[-0x16];
                  puVar28[-0x18] = uVar53;
                  uVar53 = puVar34[-0x14];
                  puVar28[-0x12] = puVar34[-0x12];
                  puVar28[-0x14] = uVar53;
                  uVar53 = puVar34[-0x10];
                  puVar28[-0xe] = puVar34[-0xe];
                  puVar28[-0x10] = uVar53;
                  uVar53 = puVar34[-1];
                  puVar28[-3] = puVar34[-3];
                  puVar28[-1] = uVar53;
                  uVar53 = puVar34[-5];
                  puVar28[-7] = puVar34[-7];
                  puVar28[-5] = uVar53;
                  uVar53 = puVar34[-9];
                  puVar28[-0xb] = puVar34[-0xb];
                  puVar28[-9] = uVar53;
                  uVar53 = puVar34[-0xc];
                  puVar28[-10] = puVar34[-10];
                  puVar28[-0xc] = uVar53;
                  uVar53 = puVar34[-8];
                  puVar28[-6] = puVar34[-6];
                  puVar28[-8] = uVar53;
                  uVar53 = puVar34[-4];
                  puVar28[-2] = puVar34[-2];
                  puVar28[-4] = uVar53;
                  uVar53 = puVar34[0xb];
                  puVar28[9] = puVar34[9];
                  puVar28[0xb] = uVar53;
                  uVar53 = puVar34[7];
                  puVar28[5] = puVar34[5];
                  puVar28[7] = uVar53;
                  uVar53 = puVar34[3];
                  puVar28[1] = puVar34[1];
                  puVar28[3] = uVar53;
                  uVar53 = *puVar34;
                  puVar28[2] = puVar34[2];
                  *puVar28 = uVar53;
                  uVar53 = puVar34[4];
                  puVar28[6] = puVar34[6];
                  puVar28[4] = uVar53;
                  uVar53 = puVar34[8];
                  puVar28[10] = puVar34[10];
                  puVar28[8] = uVar53;
                  uVar53 = puVar34[0x17];
                  puVar28[0x15] = puVar34[0x15];
                  puVar28[0x17] = uVar53;
                  uVar53 = puVar34[0x13];
                  puVar28[0x11] = puVar34[0x11];
                  puVar28[0x13] = uVar53;
                  uVar53 = puVar34[0xf];
                  puVar28[0xd] = puVar34[0xd];
                  puVar28[0xf] = uVar53;
                  uVar53 = puVar34[0xc];
                  puVar28[0xe] = puVar34[0xe];
                  puVar28[0xc] = uVar53;
                  uVar53 = puVar34[0x10];
                  puVar28[0x12] = puVar34[0x12];
                  puVar28[0x10] = uVar53;
                  uVar53 = puVar34[0x14];
                  puVar28[0x16] = puVar34[0x16];
                  puVar28[0x14] = uVar53;
                  puVar28 = puVar28 + 0x30;
                  puVar34 = puVar34 + 0x30;
                } while (uVar43 - uVar27 != lVar18);
              }
              if ((uVar40 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar17 + lVar18 * 0x60);
                puVar34 = (undefined8 *)(lVar16 + lVar18 * 0x60);
                do {
                  uVar53 = puVar28[0xb];
                  uVar27 = uVar27 - 1;
                  puVar34[9] = puVar28[9];
                  puVar34[0xb] = uVar53;
                  uVar53 = puVar28[7];
                  puVar34[5] = puVar28[5];
                  puVar34[7] = uVar53;
                  uVar53 = puVar28[3];
                  puVar34[1] = puVar28[1];
                  puVar34[3] = uVar53;
                  uVar53 = *puVar28;
                  puVar34[2] = puVar28[2];
                  *puVar34 = uVar53;
                  uVar53 = puVar28[4];
                  puVar34[6] = puVar28[6];
                  puVar34[4] = uVar53;
                  uVar53 = puVar28[8];
                  puVar34[10] = puVar28[10];
                  puVar34[8] = uVar53;
                  puVar28 = puVar28 + 0xc;
                  puVar34 = puVar34 + 0xc;
                } while (uVar27 != 0);
              }
            }
            if (-1 < (int)uVar42) {
              (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,((ulong)uVar42 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar23 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar23 = 0x3fffffff;
            }
            auVar114._8_8_ = auVar114._8_8_;
            *param_4 = lVar16;
            *(undefined4 *)((long)param_4 + 0xc) = uVar23;
            auVar107._12_4_ = 0;
            auVar111._12_4_ = 0;
            uVar40 = *(uint *)(param_4 + 1);
          }
          puVar28 = (undefined8 *)(lVar16 + (long)(int)uVar40 * 0x60);
          *(uint *)(param_4 + 1) = uVar39;
          *(undefined4 *)(puVar28 + 4) = uVar20;
          puVar28[1] = auVar107._8_8_;
          *puVar28 = auVar107._0_8_;
          puVar28[3] = auVar111._8_8_;
          puVar28[2] = auVar111._0_8_;
          *(undefined4 *)(puVar28 + 10) = uVar22;
          puVar28[7] = uVar44;
          puVar28[6] = lVar30;
          puVar28[9] = auVar114._8_8_;
          puVar28[8] = auVar114._0_8_;
        }
        auVar95._4_4_ = fVar121;
        auVar95._0_4_ = fVar118;
        auVar95._8_4_ = fVar115;
        auVar95._12_4_ = 0;
        auVar72._4_4_ = fVar120;
        auVar72._0_4_ = fVar117;
        auVar72._8_4_ = fVar112;
        auVar72._12_4_ = 0;
        if (auVar69._0_4_ + auVar69._4_4_ + auVar93._0_4_ <= (float)uVar52 * (float)uVar52) {
          uVar40 = *(uint *)(param_4 + 1);
          uVar43 = (ulong)uVar40;
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar17 = *param_4;
          uVar39 = uVar40 + 1;
          lVar16 = lVar17;
          if ((int)(uVar42 & 0x3fffffff) <= (int)uVar40) {
            if (0x3ffffffe < (int)uVar40) {
              FUN_032bd0a8(uVar39);
              uVar42 = *(uint *)((long)param_4 + 0xc);
            }
            uVar21 = (uVar42 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar3 = uVar39;
            if ((int)uVar39 <= (int)uVar21) {
              uVar3 = uVar21;
            }
            FUN_032bd100(uVar3,0x60,uVar42,&local_a0);
            uVar42 = *(uint *)((long)param_4 + 0xc);
            lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar40) {
              uVar27 = uVar43 & 3;
              if (uVar43 - 1 < 3) {
                lVar18 = 0;
              }
              else {
                lVar18 = 0;
                puVar28 = (undefined8 *)(lVar16 + 0xc0);
                puVar34 = (undefined8 *)(lVar17 + 0xc0);
                do {
                  uVar37 = puVar34[-0xd];
                  lVar18 = lVar18 + 4;
                  puVar28[-0xf] = puVar34[-0xf];
                  puVar28[-0xd] = uVar37;
                  uVar37 = puVar34[-0x11];
                  puVar28[-0x13] = puVar34[-0x13];
                  puVar28[-0x11] = uVar37;
                  uVar37 = puVar34[-0x15];
                  puVar28[-0x17] = puVar34[-0x17];
                  puVar28[-0x15] = uVar37;
                  uVar37 = puVar34[-0x18];
                  puVar28[-0x16] = puVar34[-0x16];
                  puVar28[-0x18] = uVar37;
                  uVar37 = puVar34[-0x14];
                  puVar28[-0x12] = puVar34[-0x12];
                  puVar28[-0x14] = uVar37;
                  uVar37 = puVar34[-0x10];
                  puVar28[-0xe] = puVar34[-0xe];
                  puVar28[-0x10] = uVar37;
                  uVar37 = puVar34[-1];
                  puVar28[-3] = puVar34[-3];
                  puVar28[-1] = uVar37;
                  uVar37 = puVar34[-5];
                  puVar28[-7] = puVar34[-7];
                  puVar28[-5] = uVar37;
                  uVar37 = puVar34[-9];
                  puVar28[-0xb] = puVar34[-0xb];
                  puVar28[-9] = uVar37;
                  uVar37 = puVar34[-0xc];
                  puVar28[-10] = puVar34[-10];
                  puVar28[-0xc] = uVar37;
                  uVar37 = puVar34[-8];
                  puVar28[-6] = puVar34[-6];
                  puVar28[-8] = uVar37;
                  uVar37 = puVar34[-4];
                  puVar28[-2] = puVar34[-2];
                  puVar28[-4] = uVar37;
                  uVar37 = puVar34[0xb];
                  puVar28[9] = puVar34[9];
                  puVar28[0xb] = uVar37;
                  uVar37 = puVar34[7];
                  puVar28[5] = puVar34[5];
                  puVar28[7] = uVar37;
                  uVar37 = puVar34[3];
                  puVar28[1] = puVar34[1];
                  puVar28[3] = uVar37;
                  uVar37 = *puVar34;
                  puVar28[2] = puVar34[2];
                  *puVar28 = uVar37;
                  uVar37 = puVar34[4];
                  puVar28[6] = puVar34[6];
                  puVar28[4] = uVar37;
                  uVar37 = puVar34[8];
                  puVar28[10] = puVar34[10];
                  puVar28[8] = uVar37;
                  uVar37 = puVar34[0x17];
                  puVar28[0x15] = puVar34[0x15];
                  puVar28[0x17] = uVar37;
                  uVar37 = puVar34[0x13];
                  puVar28[0x11] = puVar34[0x11];
                  puVar28[0x13] = uVar37;
                  uVar37 = puVar34[0xf];
                  puVar28[0xd] = puVar34[0xd];
                  puVar28[0xf] = uVar37;
                  uVar37 = puVar34[0xc];
                  puVar28[0xe] = puVar34[0xe];
                  puVar28[0xc] = uVar37;
                  uVar37 = puVar34[0x10];
                  puVar28[0x12] = puVar34[0x12];
                  puVar28[0x10] = uVar37;
                  uVar37 = puVar34[0x14];
                  puVar28[0x16] = puVar34[0x16];
                  puVar28[0x14] = uVar37;
                  puVar28 = puVar28 + 0x30;
                  puVar34 = puVar34 + 0x30;
                } while (uVar43 - uVar27 != lVar18);
              }
              if ((uVar40 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar17 + lVar18 * 0x60);
                puVar34 = (undefined8 *)(lVar16 + lVar18 * 0x60);
                do {
                  uVar37 = puVar28[0xb];
                  uVar27 = uVar27 - 1;
                  puVar34[9] = puVar28[9];
                  puVar34[0xb] = uVar37;
                  uVar37 = puVar28[7];
                  puVar34[5] = puVar28[5];
                  puVar34[7] = uVar37;
                  uVar37 = puVar28[3];
                  puVar34[1] = puVar28[1];
                  puVar34[3] = uVar37;
                  uVar37 = *puVar28;
                  puVar34[2] = puVar28[2];
                  *puVar34 = uVar37;
                  uVar37 = puVar28[4];
                  puVar34[6] = puVar28[6];
                  puVar34[4] = uVar37;
                  uVar37 = puVar28[8];
                  puVar34[10] = puVar28[10];
                  puVar34[8] = uVar37;
                  puVar28 = puVar28 + 0xc;
                  puVar34 = puVar34 + 0xc;
                } while (uVar27 != 0);
              }
            }
            if (-1 < (int)uVar42) {
              (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,((ulong)uVar42 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar23 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar23 = 0x3fffffff;
            }
            auVar95._12_4_ = 0;
            auVar72._12_4_ = 0;
            auVar107._12_4_ = 0;
            auVar111._12_4_ = 0;
            uVar40 = *(uint *)(param_4 + 1);
            *param_4 = lVar16;
            *(undefined4 *)((long)param_4 + 0xc) = uVar23;
          }
          puVar28 = (undefined8 *)(lVar16 + (long)(int)uVar40 * 0x60);
          *(uint *)(param_4 + 1) = uVar39;
          *(undefined4 *)(puVar28 + 4) = uVar20;
          puVar28[1] = auVar107._8_8_;
          *puVar28 = auVar107._0_8_;
          puVar28[3] = auVar111._8_8_;
          puVar28[2] = auVar111._0_8_;
          *(uint *)(puVar28 + 10) = uVar41;
          puVar28[7] = uVar49;
          puVar28[6] = uVar48;
          puVar28[9] = uVar35;
          puVar28[8] = CONCAT44(fVar79,fVar116);
        }
        if (auVar67._0_4_ + auVar67._4_4_ + auVar109._0_4_ <= (float)uVar51 * (float)uVar51) {
          uVar40 = *(uint *)(param_4 + 1);
          uVar43 = (ulong)uVar40;
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar17 = *param_4;
          uVar39 = uVar40 + 1;
          lVar16 = lVar17;
          if ((int)(uVar42 & 0x3fffffff) <= (int)uVar40) {
            if (0x3ffffffe < (int)uVar40) {
              FUN_032bd0a8(uVar39);
              uVar42 = *(uint *)((long)param_4 + 0xc);
            }
            uVar21 = (uVar42 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar3 = uVar39;
            if ((int)uVar39 <= (int)uVar21) {
              uVar3 = uVar21;
            }
            FUN_032bd100(uVar3,0x60,uVar42,&local_a0);
            uVar42 = *(uint *)((long)param_4 + 0xc);
            lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar40) {
              uVar27 = uVar43 & 3;
              if (uVar43 - 1 < 3) {
                lVar18 = 0;
              }
              else {
                lVar18 = 0;
                puVar28 = (undefined8 *)(lVar16 + 0xc0);
                puVar34 = (undefined8 *)(lVar17 + 0xc0);
                do {
                  uVar36 = puVar34[-0xd];
                  lVar18 = lVar18 + 4;
                  puVar28[-0xf] = puVar34[-0xf];
                  puVar28[-0xd] = uVar36;
                  uVar36 = puVar34[-0x11];
                  puVar28[-0x13] = puVar34[-0x13];
                  puVar28[-0x11] = uVar36;
                  uVar36 = puVar34[-0x15];
                  puVar28[-0x17] = puVar34[-0x17];
                  puVar28[-0x15] = uVar36;
                  uVar36 = puVar34[-0x18];
                  puVar28[-0x16] = puVar34[-0x16];
                  puVar28[-0x18] = uVar36;
                  uVar36 = puVar34[-0x14];
                  puVar28[-0x12] = puVar34[-0x12];
                  puVar28[-0x14] = uVar36;
                  uVar36 = puVar34[-0x10];
                  puVar28[-0xe] = puVar34[-0xe];
                  puVar28[-0x10] = uVar36;
                  uVar36 = puVar34[-1];
                  puVar28[-3] = puVar34[-3];
                  puVar28[-1] = uVar36;
                  uVar36 = puVar34[-5];
                  puVar28[-7] = puVar34[-7];
                  puVar28[-5] = uVar36;
                  uVar36 = puVar34[-9];
                  puVar28[-0xb] = puVar34[-0xb];
                  puVar28[-9] = uVar36;
                  uVar36 = puVar34[-0xc];
                  puVar28[-10] = puVar34[-10];
                  puVar28[-0xc] = uVar36;
                  uVar36 = puVar34[-8];
                  puVar28[-6] = puVar34[-6];
                  puVar28[-8] = uVar36;
                  uVar36 = puVar34[-4];
                  puVar28[-2] = puVar34[-2];
                  puVar28[-4] = uVar36;
                  uVar36 = puVar34[0xb];
                  puVar28[9] = puVar34[9];
                  puVar28[0xb] = uVar36;
                  uVar36 = puVar34[7];
                  puVar28[5] = puVar34[5];
                  puVar28[7] = uVar36;
                  uVar36 = puVar34[3];
                  puVar28[1] = puVar34[1];
                  puVar28[3] = uVar36;
                  uVar36 = *puVar34;
                  puVar28[2] = puVar34[2];
                  *puVar28 = uVar36;
                  uVar36 = puVar34[4];
                  puVar28[6] = puVar34[6];
                  puVar28[4] = uVar36;
                  uVar36 = puVar34[8];
                  puVar28[10] = puVar34[10];
                  puVar28[8] = uVar36;
                  uVar36 = puVar34[0x17];
                  puVar28[0x15] = puVar34[0x15];
                  puVar28[0x17] = uVar36;
                  uVar36 = puVar34[0x13];
                  puVar28[0x11] = puVar34[0x11];
                  puVar28[0x13] = uVar36;
                  uVar36 = puVar34[0xf];
                  puVar28[0xd] = puVar34[0xd];
                  puVar28[0xf] = uVar36;
                  uVar36 = puVar34[0xc];
                  puVar28[0xe] = puVar34[0xe];
                  puVar28[0xc] = uVar36;
                  uVar36 = puVar34[0x10];
                  puVar28[0x12] = puVar34[0x12];
                  puVar28[0x10] = uVar36;
                  uVar36 = puVar34[0x14];
                  puVar28[0x16] = puVar34[0x16];
                  puVar28[0x14] = uVar36;
                  puVar28 = puVar28 + 0x30;
                  puVar34 = puVar34 + 0x30;
                } while (uVar43 - uVar27 != lVar18);
              }
              if ((uVar40 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar17 + lVar18 * 0x60);
                puVar34 = (undefined8 *)(lVar16 + lVar18 * 0x60);
                do {
                  uVar36 = puVar28[0xb];
                  uVar27 = uVar27 - 1;
                  puVar34[9] = puVar28[9];
                  puVar34[0xb] = uVar36;
                  uVar36 = puVar28[7];
                  puVar34[5] = puVar28[5];
                  puVar34[7] = uVar36;
                  uVar36 = puVar28[3];
                  puVar34[1] = puVar28[1];
                  puVar34[3] = uVar36;
                  uVar36 = *puVar28;
                  puVar34[2] = puVar28[2];
                  *puVar34 = uVar36;
                  uVar36 = puVar28[4];
                  puVar34[6] = puVar28[6];
                  puVar34[4] = uVar36;
                  uVar36 = puVar28[8];
                  puVar34[10] = puVar28[10];
                  puVar34[8] = uVar36;
                  puVar28 = puVar28 + 0xc;
                  puVar34 = puVar34 + 0xc;
                } while (uVar27 != 0);
              }
            }
            if (-1 < (int)uVar42) {
              (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,((ulong)uVar42 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar20 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar20 = 0x3fffffff;
            }
            auVar95._12_4_ = 0;
            auVar72._12_4_ = 0;
            uVar40 = *(uint *)(param_4 + 1);
            *(undefined4 *)((long)param_4 + 0xc) = uVar20;
            *param_4 = lVar16;
          }
          puVar28 = (undefined8 *)(lVar16 + (long)(int)uVar40 * 0x60);
          *(uint *)(param_4 + 1) = uVar39;
          *(undefined4 *)(puVar28 + 4) = uVar19;
          puVar28[1] = auVar72._8_8_;
          *puVar28 = auVar72._0_8_;
          puVar28[3] = auVar95._8_8_;
          puVar28[2] = auVar95._0_8_;
          *(undefined4 *)(puVar28 + 10) = uVar22;
          puVar28[7] = uVar44;
          puVar28[6] = lVar30;
          puVar28[9] = auVar114._8_8_;
          puVar28[8] = auVar114._0_8_;
        }
        if ((float)uVar50 * (float)uVar50 < auVar65._0_4_ + auVar65._4_4_ + auVar96._0_4_)
        goto LAB_001920d0;
        uVar40 = *(uint *)(param_4 + 1);
        uVar44 = (ulong)uVar40;
        uVar42 = *(uint *)((long)param_4 + 0xc);
        lVar16 = *param_4;
        uVar39 = uVar40 + 1;
        lVar30 = lVar16;
        if ((int)(uVar42 & 0x3fffffff) <= (int)uVar40) {
          if (0x3ffffffe < (int)uVar40) {
            FUN_032bd0a8(uVar39);
            uVar42 = *(uint *)((long)param_4 + 0xc);
          }
          uVar21 = (uVar42 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar21) {
            uVar21 = 0x3fffffff;
          }
          uVar3 = uVar39;
          if ((int)uVar39 <= (int)uVar21) {
            uVar3 = uVar21;
          }
          FUN_032bd100(uVar3,0x60,uVar42,&local_a0);
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar30 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
          if (0 < (int)uVar40) {
            uVar43 = uVar44 & 3;
            if (uVar44 - 1 < 3) {
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              puVar28 = (undefined8 *)(lVar30 + 0xc0);
              puVar34 = (undefined8 *)(lVar16 + 0xc0);
              do {
                uVar36 = puVar34[-0xd];
                lVar17 = lVar17 + 4;
                puVar28[-0xf] = puVar34[-0xf];
                puVar28[-0xd] = uVar36;
                uVar36 = puVar34[-0x11];
                puVar28[-0x13] = puVar34[-0x13];
                puVar28[-0x11] = uVar36;
                uVar36 = puVar34[-0x15];
                puVar28[-0x17] = puVar34[-0x17];
                puVar28[-0x15] = uVar36;
                uVar36 = puVar34[-0x18];
                puVar28[-0x16] = puVar34[-0x16];
                puVar28[-0x18] = uVar36;
                uVar36 = puVar34[-0x14];
                puVar28[-0x12] = puVar34[-0x12];
                puVar28[-0x14] = uVar36;
                uVar36 = puVar34[-0x10];
                puVar28[-0xe] = puVar34[-0xe];
                puVar28[-0x10] = uVar36;
                uVar36 = puVar34[-1];
                puVar28[-3] = puVar34[-3];
                puVar28[-1] = uVar36;
                uVar36 = puVar34[-5];
                puVar28[-7] = puVar34[-7];
                puVar28[-5] = uVar36;
                uVar36 = puVar34[-9];
                puVar28[-0xb] = puVar34[-0xb];
                puVar28[-9] = uVar36;
                uVar36 = puVar34[-0xc];
                puVar28[-10] = puVar34[-10];
                puVar28[-0xc] = uVar36;
                uVar36 = puVar34[-8];
                puVar28[-6] = puVar34[-6];
                puVar28[-8] = uVar36;
                uVar36 = puVar34[-4];
                puVar28[-2] = puVar34[-2];
                puVar28[-4] = uVar36;
                uVar36 = puVar34[0xb];
                puVar28[9] = puVar34[9];
                puVar28[0xb] = uVar36;
                uVar36 = puVar34[7];
                puVar28[5] = puVar34[5];
                puVar28[7] = uVar36;
                uVar36 = puVar34[3];
                puVar28[1] = puVar34[1];
                puVar28[3] = uVar36;
                uVar36 = *puVar34;
                puVar28[2] = puVar34[2];
                *puVar28 = uVar36;
                uVar36 = puVar34[4];
                puVar28[6] = puVar34[6];
                puVar28[4] = uVar36;
                uVar36 = puVar34[8];
                puVar28[10] = puVar34[10];
                puVar28[8] = uVar36;
                uVar36 = puVar34[0x17];
                puVar28[0x15] = puVar34[0x15];
                puVar28[0x17] = uVar36;
                uVar36 = puVar34[0x13];
                puVar28[0x11] = puVar34[0x11];
                puVar28[0x13] = uVar36;
                uVar36 = puVar34[0xf];
                puVar28[0xd] = puVar34[0xd];
                puVar28[0xf] = uVar36;
                uVar36 = puVar34[0xc];
                puVar28[0xe] = puVar34[0xe];
                puVar28[0xc] = uVar36;
                uVar36 = puVar34[0x10];
                puVar28[0x12] = puVar34[0x12];
                puVar28[0x10] = uVar36;
                uVar36 = puVar34[0x14];
                puVar28[0x16] = puVar34[0x16];
                puVar28[0x14] = uVar36;
                puVar28 = puVar28 + 0x30;
                puVar34 = puVar34 + 0x30;
              } while (uVar44 - uVar43 != lVar17);
            }
            if ((uVar40 & 3) != 0) {
              puVar28 = (undefined8 *)(lVar16 + lVar17 * 0x60);
              puVar34 = (undefined8 *)(lVar30 + lVar17 * 0x60);
              do {
                uVar36 = puVar28[0xb];
                uVar43 = uVar43 - 1;
                puVar34[9] = puVar28[9];
                puVar34[0xb] = uVar36;
                uVar36 = puVar28[7];
                puVar34[5] = puVar28[5];
                puVar34[7] = uVar36;
                uVar36 = puVar28[3];
                puVar34[1] = puVar28[1];
                puVar34[3] = uVar36;
                uVar36 = *puVar28;
                puVar34[2] = puVar28[2];
                *puVar34 = uVar36;
                uVar36 = puVar28[4];
                puVar34[6] = puVar28[6];
                puVar34[4] = uVar36;
                uVar36 = puVar28[8];
                puVar34[10] = puVar28[10];
                puVar34[8] = uVar36;
                puVar28 = puVar28 + 0xc;
                puVar34 = puVar34 + 0xc;
              } while (uVar43 != 0);
            }
          }
          if (-1 < (int)uVar42) {
            (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,((ulong)uVar42 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
            uVar20 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
          }
          else {
            uVar20 = 0x3fffffff;
          }
          auVar95._12_4_ = 0;
          auVar72._12_4_ = 0;
          *(undefined4 *)((long)param_4 + 0xc) = uVar20;
          *param_4 = lVar30;
          uVar40 = *(uint *)(param_4 + 1);
        }
        puVar28 = (undefined8 *)(lVar30 + (long)(int)uVar40 * 0x60);
        *(uint *)(param_4 + 1) = uVar39;
        *(undefined4 *)(puVar28 + 4) = uVar19;
        puVar28[1] = auVar72._8_8_;
        *puVar28 = auVar72._0_8_;
        puVar28[3] = auVar95._8_8_;
        puVar28[2] = auVar95._0_8_;
        *(uint *)(puVar28 + 10) = uVar41;
        puVar28[7] = uVar49;
        puVar28[6] = uVar48;
        puVar28[9] = uVar35;
        puVar28[8] = CONCAT44(fVar79,fVar116);
        iVar32 = (int)param_4[1];
      }
      else {
        uVar48 = NEON_fmax(uVar122,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_d0,&local_130);
        fVar116 = (local_120 - local_130) * local_210;
        fVar79 = (fStack_11c - fStack_12c) * fStack_20c;
        fVar108 = (fStack_118 - fStack_128) * fStack_208;
        fVar78 = (fStack_114 - fStack_124) * fStack_204;
        auVar98._0_4_ = (local_130 + local_120) * local_210;
        auVar98._4_4_ = (fStack_12c + fStack_11c) * fStack_20c;
        auVar98._8_4_ = (fStack_128 + fStack_118) * fStack_208;
        auVar98._12_4_ = (fStack_124 + fStack_114) * fStack_204;
        auVar86._0_4_ = fVar117 - fVar116;
        auVar86._4_4_ = fVar120 - fVar79;
        auVar86._8_4_ = fVar112 - fVar108;
        auVar86._12_4_ = 0.0 - fVar78;
        auVar56._0_4_ = fVar118 + fVar116;
        auVar56._4_4_ = fVar121 + fVar79;
        auVar56._8_4_ = fVar115 + fVar108;
        auVar56._12_4_ = fVar78 + 0.0;
        auVar84 = NEON_fmax(auVar86,auVar98,4);
        auVar84 = NEON_fmin(auVar56,auVar84,4);
        fVar116 = auVar98._0_4_ - auVar84._0_4_;
        fVar79 = auVar98._4_4_ - auVar84._4_4_;
        fVar108 = auVar98._8_4_ - auVar84._8_4_;
        fVar78 = auVar98._12_4_ - auVar84._12_4_;
        auVar57._0_4_ = fVar116 * fVar116;
        auVar57._4_4_ = fVar79 * fVar79;
        auVar57._8_4_ = fVar108 * fVar108;
        auVar57._12_4_ = fVar78 * fVar78;
        auVar96 = NEON_ext(auVar57,auVar57,8,1);
        uVar49 = NEON_fmax(uVar122,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar1,&local_d0,&local_130);
        auVar99._0_4_ = local_210 * (local_130 + local_120);
        auVar99._4_4_ = fStack_20c * (fStack_12c + fStack_11c);
        auVar99._8_4_ = fStack_208 * (fStack_128 + fStack_118);
        auVar99._12_4_ = fStack_204 * (fStack_124 + fStack_114);
        local_210 = local_210 * (local_120 - local_130);
        fStack_20c = fStack_20c * (fStack_11c - fStack_12c);
        fStack_208 = fStack_208 * (fStack_118 - fStack_128);
        fStack_204 = fStack_204 * (fStack_114 - fStack_124);
        auVar87._0_4_ = fVar119 - local_210;
        auVar87._4_4_ = fVar82 - fStack_20c;
        auVar87._8_4_ = fVar47 - fStack_208;
        auVar87._12_4_ = 0.0 - fStack_204;
        auVar58._0_4_ = fVar74 + local_210;
        auVar58._4_4_ = fVar76 + fStack_20c;
        auVar58._8_4_ = fVar80 + fStack_208;
        auVar58._12_4_ = fStack_204 + 0.0;
        auVar84 = NEON_fmax(auVar87,auVar99,4);
        auVar84 = NEON_fmin(auVar58,auVar84,4);
        fVar74 = auVar99._0_4_ - auVar84._0_4_;
        fVar76 = auVar99._4_4_ - auVar84._4_4_;
        fVar116 = auVar99._8_4_ - auVar84._8_4_;
        fVar79 = auVar99._12_4_ - auVar84._12_4_;
        auVar59._0_4_ = fVar74 * fVar74;
        auVar59._4_4_ = fVar76 * fVar76;
        auVar59._8_4_ = fVar116 * fVar116;
        auVar59._12_4_ = fVar79 * fVar79;
        auVar84 = NEON_ext(auVar59,auVar59,8,1);
        if (auVar59._0_4_ + auVar59._4_4_ + auVar84._0_4_ <= (float)uVar49 * (float)uVar49) {
          uVar40 = *(uint *)(param_4 + 1);
          uVar44 = (ulong)uVar40;
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar17 = *param_4;
          uVar39 = uVar40 + 1;
          if ((int)uVar40 < (int)(uVar42 & 0x3fffffff)) {
            lVar18 = lVar17;
          }
          else {
            if (0x3ffffffe < (int)uVar40) {
              FUN_032bd0a8(uVar39);
              uVar42 = *(uint *)((long)param_4 + 0xc);
            }
            uVar21 = (uVar42 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar3 = uVar39;
            if ((int)uVar39 <= (int)uVar21) {
              uVar3 = uVar21;
            }
            FUN_032bd100(uVar3,0x60,uVar42,&local_130);
            uVar42 = *(uint *)((long)param_4 + 0xc);
            lVar18 = (**(code **)(*plVar24 + 0x10))
                               (plVar24,CONCAT44(fStack_12c,local_130),&local_130);
            if (0 < (int)uVar40) {
              uVar43 = uVar44 & 3;
              if (uVar44 - 1 < 3) {
                lVar25 = 0;
              }
              else {
                lVar25 = 0;
                puVar28 = (undefined8 *)(lVar18 + 0xc0);
                puVar34 = (undefined8 *)(lVar17 + 0xc0);
                do {
                  uVar49 = puVar34[-0xd];
                  lVar25 = lVar25 + 4;
                  puVar28[-0xf] = puVar34[-0xf];
                  puVar28[-0xd] = uVar49;
                  uVar49 = puVar34[-0x11];
                  puVar28[-0x13] = puVar34[-0x13];
                  puVar28[-0x11] = uVar49;
                  uVar49 = puVar34[-0x15];
                  puVar28[-0x17] = puVar34[-0x17];
                  puVar28[-0x15] = uVar49;
                  uVar49 = puVar34[-0x18];
                  puVar28[-0x16] = puVar34[-0x16];
                  puVar28[-0x18] = uVar49;
                  uVar49 = puVar34[-0x14];
                  puVar28[-0x12] = puVar34[-0x12];
                  puVar28[-0x14] = uVar49;
                  uVar49 = puVar34[-0x10];
                  puVar28[-0xe] = puVar34[-0xe];
                  puVar28[-0x10] = uVar49;
                  uVar49 = puVar34[-1];
                  puVar28[-3] = puVar34[-3];
                  puVar28[-1] = uVar49;
                  uVar49 = puVar34[-5];
                  puVar28[-7] = puVar34[-7];
                  puVar28[-5] = uVar49;
                  uVar49 = puVar34[-9];
                  puVar28[-0xb] = puVar34[-0xb];
                  puVar28[-9] = uVar49;
                  uVar49 = puVar34[-0xc];
                  puVar28[-10] = puVar34[-10];
                  puVar28[-0xc] = uVar49;
                  uVar49 = puVar34[-8];
                  puVar28[-6] = puVar34[-6];
                  puVar28[-8] = uVar49;
                  uVar49 = puVar34[-4];
                  puVar28[-2] = puVar34[-2];
                  puVar28[-4] = uVar49;
                  uVar49 = puVar34[0xb];
                  puVar28[9] = puVar34[9];
                  puVar28[0xb] = uVar49;
                  uVar49 = puVar34[7];
                  puVar28[5] = puVar34[5];
                  puVar28[7] = uVar49;
                  uVar49 = puVar34[3];
                  puVar28[1] = puVar34[1];
                  puVar28[3] = uVar49;
                  uVar49 = *puVar34;
                  puVar28[2] = puVar34[2];
                  *puVar28 = uVar49;
                  uVar49 = puVar34[4];
                  puVar28[6] = puVar34[6];
                  puVar28[4] = uVar49;
                  uVar49 = puVar34[8];
                  puVar28[10] = puVar34[10];
                  puVar28[8] = uVar49;
                  uVar49 = puVar34[0x17];
                  puVar28[0x15] = puVar34[0x15];
                  puVar28[0x17] = uVar49;
                  uVar49 = puVar34[0x13];
                  puVar28[0x11] = puVar34[0x11];
                  puVar28[0x13] = uVar49;
                  uVar49 = puVar34[0xf];
                  puVar28[0xd] = puVar34[0xd];
                  puVar28[0xf] = uVar49;
                  uVar49 = puVar34[0xc];
                  puVar28[0xe] = puVar34[0xe];
                  puVar28[0xc] = uVar49;
                  uVar49 = puVar34[0x10];
                  puVar28[0x12] = puVar34[0x12];
                  puVar28[0x10] = uVar49;
                  uVar49 = puVar34[0x14];
                  puVar28[0x16] = puVar34[0x16];
                  puVar28[0x14] = uVar49;
                  puVar28 = puVar28 + 0x30;
                  puVar34 = puVar34 + 0x30;
                } while (uVar44 - uVar43 != lVar25);
              }
              if ((uVar40 & 3) != 0) {
                puVar28 = (undefined8 *)(lVar17 + lVar25 * 0x60);
                puVar34 = (undefined8 *)(lVar18 + lVar25 * 0x60);
                do {
                  uVar49 = puVar28[0xb];
                  uVar43 = uVar43 - 1;
                  puVar34[9] = puVar28[9];
                  puVar34[0xb] = uVar49;
                  uVar49 = puVar28[7];
                  puVar34[5] = puVar28[5];
                  puVar34[7] = uVar49;
                  uVar49 = puVar28[3];
                  puVar34[1] = puVar28[1];
                  puVar34[3] = uVar49;
                  uVar49 = *puVar28;
                  puVar34[2] = puVar28[2];
                  *puVar34 = uVar49;
                  uVar49 = puVar28[4];
                  puVar34[6] = puVar28[6];
                  puVar34[4] = uVar49;
                  uVar49 = puVar28[8];
                  puVar34[10] = puVar28[10];
                  puVar34[8] = uVar49;
                  puVar28 = puVar28 + 0xc;
                  puVar34 = puVar34 + 0xc;
                } while (uVar43 != 0);
              }
            }
            if (-1 < (int)uVar42) {
              (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,((ulong)uVar42 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_12c,local_130) < 0x17ffffffa0) {
              uVar22 = (undefined4)(CONCAT44(fStack_12c,local_130) / 0x60);
            }
            else {
              uVar22 = 0x3fffffff;
            }
            *param_4 = lVar18;
            *(undefined4 *)((long)param_4 + 0xc) = uVar22;
            uVar40 = *(uint *)(param_4 + 1);
          }
          puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar40 * 0x60);
          *(uint *)(param_4 + 1) = uVar39;
          *(undefined4 *)(puVar28 + 4) = uVar20;
          puVar28[1] = (ulong)(uint)fVar47;
          *puVar28 = CONCAT44(fVar82,fVar119);
          puVar28[3] = (ulong)(uint)fVar80;
          puVar28[2] = uVar36;
          *(uint *)(puVar28 + 10) = uVar41;
          puVar28[7] = lVar31;
          puVar28[6] = lVar38;
          puVar28[9] = lVar16;
          puVar28[8] = lVar30;
        }
        if ((float)uVar48 * (float)uVar48 < auVar57._0_4_ + auVar57._4_4_ + auVar96._0_4_)
        goto LAB_001920d0;
        uVar40 = *(uint *)(param_4 + 1);
        uVar44 = (ulong)uVar40;
        uVar42 = *(uint *)((long)param_4 + 0xc);
        lVar17 = *param_4;
        uVar39 = uVar40 + 1;
        if ((int)uVar40 < (int)(uVar42 & 0x3fffffff)) {
          lVar18 = lVar17;
        }
        else {
          if (0x3ffffffe < (int)uVar40) {
            FUN_032bd0a8(uVar39);
            uVar42 = *(uint *)((long)param_4 + 0xc);
          }
          uVar21 = (uVar42 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar21) {
            uVar21 = 0x3fffffff;
          }
          uVar3 = uVar39;
          if ((int)uVar39 <= (int)uVar21) {
            uVar3 = uVar21;
          }
          FUN_032bd100(uVar3,0x60,uVar42,&local_130);
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar18 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_12c,local_130),&local_130)
          ;
          if (0 < (int)uVar40) {
            uVar43 = uVar44 & 3;
            if (uVar44 - 1 < 3) {
              lVar25 = 0;
            }
            else {
              lVar25 = 0;
              puVar28 = (undefined8 *)(lVar18 + 0xc0);
              puVar34 = (undefined8 *)(lVar17 + 0xc0);
              do {
                uVar36 = puVar34[-0xd];
                lVar25 = lVar25 + 4;
                puVar28[-0xf] = puVar34[-0xf];
                puVar28[-0xd] = uVar36;
                uVar36 = puVar34[-0x11];
                puVar28[-0x13] = puVar34[-0x13];
                puVar28[-0x11] = uVar36;
                uVar36 = puVar34[-0x15];
                puVar28[-0x17] = puVar34[-0x17];
                puVar28[-0x15] = uVar36;
                uVar36 = puVar34[-0x18];
                puVar28[-0x16] = puVar34[-0x16];
                puVar28[-0x18] = uVar36;
                uVar36 = puVar34[-0x14];
                puVar28[-0x12] = puVar34[-0x12];
                puVar28[-0x14] = uVar36;
                uVar36 = puVar34[-0x10];
                puVar28[-0xe] = puVar34[-0xe];
                puVar28[-0x10] = uVar36;
                uVar36 = puVar34[-1];
                puVar28[-3] = puVar34[-3];
                puVar28[-1] = uVar36;
                uVar36 = puVar34[-5];
                puVar28[-7] = puVar34[-7];
                puVar28[-5] = uVar36;
                uVar36 = puVar34[-9];
                puVar28[-0xb] = puVar34[-0xb];
                puVar28[-9] = uVar36;
                uVar36 = puVar34[-0xc];
                puVar28[-10] = puVar34[-10];
                puVar28[-0xc] = uVar36;
                uVar36 = puVar34[-8];
                puVar28[-6] = puVar34[-6];
                puVar28[-8] = uVar36;
                uVar36 = puVar34[-4];
                puVar28[-2] = puVar34[-2];
                puVar28[-4] = uVar36;
                uVar36 = puVar34[0xb];
                puVar28[9] = puVar34[9];
                puVar28[0xb] = uVar36;
                uVar36 = puVar34[7];
                puVar28[5] = puVar34[5];
                puVar28[7] = uVar36;
                uVar36 = puVar34[3];
                puVar28[1] = puVar34[1];
                puVar28[3] = uVar36;
                uVar36 = *puVar34;
                puVar28[2] = puVar34[2];
                *puVar28 = uVar36;
                uVar36 = puVar34[4];
                puVar28[6] = puVar34[6];
                puVar28[4] = uVar36;
                uVar36 = puVar34[8];
                puVar28[10] = puVar34[10];
                puVar28[8] = uVar36;
                uVar36 = puVar34[0x17];
                puVar28[0x15] = puVar34[0x15];
                puVar28[0x17] = uVar36;
                uVar36 = puVar34[0x13];
                puVar28[0x11] = puVar34[0x11];
                puVar28[0x13] = uVar36;
                uVar36 = puVar34[0xf];
                puVar28[0xd] = puVar34[0xd];
                puVar28[0xf] = uVar36;
                uVar36 = puVar34[0xc];
                puVar28[0xe] = puVar34[0xe];
                puVar28[0xc] = uVar36;
                uVar36 = puVar34[0x10];
                puVar28[0x12] = puVar34[0x12];
                puVar28[0x10] = uVar36;
                uVar36 = puVar34[0x14];
                puVar28[0x16] = puVar34[0x16];
                puVar28[0x14] = uVar36;
                puVar28 = puVar28 + 0x30;
                puVar34 = puVar34 + 0x30;
              } while (uVar44 - uVar43 != lVar25);
            }
            if ((uVar40 & 3) != 0) {
              puVar28 = (undefined8 *)(lVar17 + lVar25 * 0x60);
              puVar34 = (undefined8 *)(lVar18 + lVar25 * 0x60);
              do {
                uVar36 = puVar28[0xb];
                uVar43 = uVar43 - 1;
                puVar34[9] = puVar28[9];
                puVar34[0xb] = uVar36;
                uVar36 = puVar28[7];
                puVar34[5] = puVar28[5];
                puVar34[7] = uVar36;
                uVar36 = puVar28[3];
                puVar34[1] = puVar28[1];
                puVar34[3] = uVar36;
                uVar36 = *puVar28;
                puVar34[2] = puVar28[2];
                *puVar34 = uVar36;
                uVar36 = puVar28[4];
                puVar34[6] = puVar28[6];
                puVar34[4] = uVar36;
                uVar36 = puVar28[8];
                puVar34[10] = puVar28[10];
                puVar34[8] = uVar36;
                puVar28 = puVar28 + 0xc;
                puVar34 = puVar34 + 0xc;
              } while (uVar43 != 0);
            }
          }
          if (-1 < (int)uVar42) {
            (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,((ulong)uVar42 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_12c,local_130) < 0x17ffffffa0) {
            uVar20 = (undefined4)(CONCAT44(fStack_12c,local_130) / 0x60);
          }
          else {
            uVar20 = 0x3fffffff;
          }
          uVar40 = *(uint *)(param_4 + 1);
          *(undefined4 *)((long)param_4 + 0xc) = uVar20;
          *param_4 = lVar18;
        }
        puVar28 = (undefined8 *)(lVar18 + (long)(int)uVar40 * 0x60);
        *(uint *)(param_4 + 1) = uVar39;
        *(undefined4 *)(puVar28 + 4) = uVar19;
        puVar28[1] = (ulong)(uint)fVar112;
        *puVar28 = CONCAT44(fVar120,fVar117);
        puVar28[3] = (ulong)(uint)fVar115;
        puVar28[2] = CONCAT44(fVar121,fVar118);
        *(uint *)(puVar28 + 10) = uVar41;
        puVar28[7] = lVar31;
        puVar28[6] = lVar38;
        puVar28[9] = lVar16;
        puVar28[8] = lVar30;
        iVar32 = (int)param_4[1];
      }
    }
    else if ((char)local_a8[3] < '\0') {
      lVar16 = (long)(int)local_b0 + 1;
      local_110 = (uint)lVar16;
      fVar112 = (fStack_c0 - (float)local_d0) * fVar46;
      fVar115 = (local_bc - local_d0._4_4_) * fVar73;
      fVar116 = (fStack_b8 - (float)lStack_c8) * fVar75;
      lVar30 = (long)(int)local_b0 + (ulong)((uint)local_a8[4] | (local_a8[3] & 0x7f) << 8) * 2;
      local_e0 = (undefined4)lVar30;
      local_108 = (byte *)((long)param_3 + lVar16 * 5 + *param_3);
      local_d8 = (byte *)((long)param_3 + lVar30 * 5 + *param_3);
      bVar12 = *local_108 >> 4;
      bVar4 = *local_108 & 0xf;
      bVar13 = local_108[1] >> 4;
      bVar6 = local_108[2] >> 4;
      fStack_128 = (float)(byte)(bVar6 * bVar6) * fVar116 + (float)lStack_c8;
      bVar6 = local_108[1] & 0xf;
      fStack_124 = 0.0;
      local_130 = (float)(byte)(bVar12 * bVar12) * fVar112 + (float)local_d0;
      fStack_12c = (float)(byte)(bVar13 * bVar13) * fVar115 + local_d0._4_4_;
      fStack_114 = 0.0;
      bVar12 = local_108[2] & 0xf;
      bVar5 = local_d8[1] >> 4;
      local_120 = fStack_c0 - (float)(byte)(bVar4 * bVar4) * fVar112;
      bVar8 = local_d8[2] >> 4;
      bVar4 = local_d8[1] & 0xf;
      bVar13 = local_d8[2] & 0xf;
      fStack_11c = local_bc - (float)(byte)(bVar6 * bVar6) * fVar115;
      bVar9 = *local_d8 >> 4;
      fStack_118 = fStack_b8 - (float)(byte)(bVar12 * bVar12) * fVar116;
      uStack_e4 = 0;
      bVar6 = *local_d8 & 0xf;
      local_100 = CONCAT44((float)(byte)(bVar5 * bVar5) * fVar115 + local_d0._4_4_,
                           (float)local_d0 + (float)(byte)(bVar9 * bVar9) * fVar112);
      local_f0 = fStack_c0 - (float)(byte)(bVar6 * bVar6) * fVar112;
      uStack_f8 = (ulong)(uint)((float)(byte)(bVar8 * bVar8) * fVar116 + (float)lStack_c8);
      fStack_ec = local_bc - (float)(byte)(bVar4 * bVar4) * fVar115;
      fStack_e8 = fStack_b8 - (float)(byte)(bVar13 * bVar13) * fVar116;
      uVar48 = NEON_fmax(uVar122,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
      fStack_144 = (float)((ulong)lVar18 >> 0x20);
      fStack_134 = (float)((ulong)lVar33 >> 0x20);
      FUN_0333e220(lVar1,&local_130,&local_a0);
      auVar100._0_4_ = (local_a0 + fStack_90) * local_210;
      auVar100._4_4_ = (fStack_9c + fStack_8c) * fStack_20c;
      auVar100._8_4_ = (fStack_98 + fStack_88) * fStack_208;
      auVar100._12_4_ = (fStack_94 + fStack_84) * fStack_204;
      fVar112 = (fStack_90 - local_a0) * local_210;
      fVar115 = (fStack_8c - fStack_9c) * fStack_20c;
      fVar116 = (fStack_88 - fStack_98) * fStack_208;
      fVar79 = (fStack_84 - fStack_94) * fStack_204;
      auVar88._0_4_ = fVar119 - fVar112;
      auVar88._4_4_ = fVar82 - fVar115;
      auVar88._8_4_ = fVar47 - fVar116;
      auVar88._12_4_ = fStack_144 - fVar79;
      auVar60._0_4_ = fVar74 + fVar112;
      auVar60._4_4_ = fVar76 + fVar115;
      auVar60._8_4_ = fVar80 + fVar116;
      auVar60._12_4_ = fStack_134 + fVar79;
      auVar84 = NEON_fmax(auVar88,auVar100,4);
      auVar84 = NEON_fmin(auVar60,auVar84,4);
      fVar112 = auVar100._0_4_ - auVar84._0_4_;
      fVar115 = auVar100._4_4_ - auVar84._4_4_;
      fVar116 = auVar100._8_4_ - auVar84._8_4_;
      fVar79 = auVar100._12_4_ - auVar84._12_4_;
      auVar61._0_4_ = fVar112 * fVar112;
      auVar61._4_4_ = fVar115 * fVar115;
      auVar61._8_4_ = fVar116 * fVar116;
      auVar61._12_4_ = fVar79 * fVar79;
      auVar96 = NEON_ext(auVar61,auVar61,8,1);
      uVar49 = NEON_fmax(uVar122,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
      FUN_0333e220(lVar1,&local_100,&local_a0);
      uVar20 = local_e0;
      fVar117 = fStack_ec;
      fVar108 = local_f0;
      uVar44 = uStack_f8;
      lVar30 = local_100;
      uVar41 = local_110;
      fVar79 = fStack_114;
      fVar116 = fStack_118;
      fVar115 = fStack_11c;
      fVar112 = local_120;
      auVar101._0_4_ = local_210 * (local_a0 + fStack_90);
      auVar101._4_4_ = fStack_20c * (fStack_9c + fStack_8c);
      auVar101._8_4_ = fStack_208 * (fStack_98 + fStack_88);
      auVar101._12_4_ = fStack_204 * (fStack_94 + fStack_84);
      local_210 = local_210 * (fStack_90 - local_a0);
      fStack_20c = fStack_20c * (fStack_8c - fStack_9c);
      fStack_208 = fStack_208 * (fStack_88 - fStack_98);
      fStack_204 = fStack_204 * (fStack_84 - fStack_94);
      auVar89._0_4_ = fVar119 - local_210;
      auVar89._4_4_ = fVar82 - fStack_20c;
      auVar89._8_4_ = fVar47 - fStack_208;
      auVar89._12_4_ = fStack_144 - fStack_204;
      auVar62._0_4_ = fVar74 + local_210;
      auVar62._4_4_ = fVar76 + fStack_20c;
      auVar62._8_4_ = fVar80 + fStack_208;
      auVar62._12_4_ = fStack_134 + fStack_204;
      auVar84 = NEON_fmax(auVar89,auVar101,4);
      auVar84 = NEON_fmin(auVar62,auVar84,4);
      fVar47 = auVar101._0_4_ - auVar84._0_4_;
      fVar74 = auVar101._4_4_ - auVar84._4_4_;
      fVar76 = auVar101._8_4_ - auVar84._8_4_;
      fVar80 = auVar101._12_4_ - auVar84._12_4_;
      uVar36 = CONCAT44(fStack_12c,local_130);
      auVar110._8_4_ = fStack_128;
      auVar110._0_8_ = uVar36;
      auVar110._12_4_ = fStack_124;
      auVar106._4_4_ = fStack_11c;
      auVar106._0_4_ = local_120;
      auVar106._8_4_ = fStack_118;
      auVar106._12_4_ = fStack_114;
      auVar63._0_4_ = fVar47 * fVar47;
      auVar63._4_4_ = fVar74 * fVar74;
      auVar63._8_4_ = fVar76 * fVar76;
      auVar63._12_4_ = fVar80 * fVar80;
      auVar84 = NEON_ext(auVar63,auVar63,8,1);
      if (auVar63._0_4_ + auVar63._4_4_ + auVar84._0_4_ <= (float)uVar49 * (float)uVar49) {
        auVar113._4_4_ = fStack_ec;
        auVar113._0_4_ = local_f0;
        auVar113._8_4_ = fStack_e8;
        auVar113._12_4_ = uStack_e4;
        uVar40 = *(uint *)(param_4 + 1);
        uVar43 = (ulong)uVar40;
        uVar42 = *(uint *)((long)param_4 + 0xc);
        lVar38 = *param_4;
        uVar39 = uVar40 + 1;
        lVar16 = lVar38;
        if ((int)(uVar42 & 0x3fffffff) <= (int)uVar40) {
          uVar49 = auVar113._8_8_;
          if (0x3ffffffe < (int)uVar40) {
            FUN_032bd0a8(uVar39);
            uVar42 = *(uint *)((long)param_4 + 0xc);
          }
          uVar21 = (uVar42 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar21) {
            uVar21 = 0x3fffffff;
          }
          uVar3 = uVar39;
          if ((int)uVar39 <= (int)uVar21) {
            uVar3 = uVar21;
          }
          FUN_032bd100(uVar3,0x60,uVar42,&local_a0);
          uVar42 = *(uint *)((long)param_4 + 0xc);
          lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
          if (0 < (int)uVar40) {
            uVar27 = uVar43 & 3;
            if (uVar43 - 1 < 3) {
              lVar31 = 0;
            }
            else {
              lVar31 = 0;
              puVar28 = (undefined8 *)(lVar16 + 0xc0);
              puVar34 = (undefined8 *)(lVar38 + 0xc0);
              do {
                uVar35 = puVar34[-0xd];
                lVar31 = lVar31 + 4;
                puVar28[-0xf] = puVar34[-0xf];
                puVar28[-0xd] = uVar35;
                uVar35 = puVar34[-0x11];
                puVar28[-0x13] = puVar34[-0x13];
                puVar28[-0x11] = uVar35;
                uVar35 = puVar34[-0x15];
                puVar28[-0x17] = puVar34[-0x17];
                puVar28[-0x15] = uVar35;
                uVar35 = puVar34[-0x18];
                puVar28[-0x16] = puVar34[-0x16];
                puVar28[-0x18] = uVar35;
                uVar35 = puVar34[-0x14];
                puVar28[-0x12] = puVar34[-0x12];
                puVar28[-0x14] = uVar35;
                uVar35 = puVar34[-0x10];
                puVar28[-0xe] = puVar34[-0xe];
                puVar28[-0x10] = uVar35;
                uVar35 = puVar34[-1];
                puVar28[-3] = puVar34[-3];
                puVar28[-1] = uVar35;
                uVar35 = puVar34[-5];
                puVar28[-7] = puVar34[-7];
                puVar28[-5] = uVar35;
                uVar35 = puVar34[-9];
                puVar28[-0xb] = puVar34[-0xb];
                puVar28[-9] = uVar35;
                uVar35 = puVar34[-0xc];
                puVar28[-10] = puVar34[-10];
                puVar28[-0xc] = uVar35;
                uVar35 = puVar34[-8];
                puVar28[-6] = puVar34[-6];
                puVar28[-8] = uVar35;
                uVar35 = puVar34[-4];
                puVar28[-2] = puVar34[-2];
                puVar28[-4] = uVar35;
                uVar35 = puVar34[0xb];
                puVar28[9] = puVar34[9];
                puVar28[0xb] = uVar35;
                uVar35 = puVar34[7];
                puVar28[5] = puVar34[5];
                puVar28[7] = uVar35;
                uVar35 = puVar34[3];
                puVar28[1] = puVar34[1];
                puVar28[3] = uVar35;
                uVar35 = *puVar34;
                puVar28[2] = puVar34[2];
                *puVar28 = uVar35;
                uVar35 = puVar34[4];
                puVar28[6] = puVar34[6];
                puVar28[4] = uVar35;
                uVar35 = puVar34[8];
                puVar28[10] = puVar34[10];
                puVar28[8] = uVar35;
                uVar35 = puVar34[0x17];
                puVar28[0x15] = puVar34[0x15];
                puVar28[0x17] = uVar35;
                uVar35 = puVar34[0x13];
                puVar28[0x11] = puVar34[0x11];
                puVar28[0x13] = uVar35;
                uVar35 = puVar34[0xf];
                puVar28[0xd] = puVar34[0xd];
                puVar28[0xf] = uVar35;
                uVar35 = puVar34[0xc];
                puVar28[0xe] = puVar34[0xe];
                puVar28[0xc] = uVar35;
                uVar35 = puVar34[0x10];
                puVar28[0x12] = puVar34[0x12];
                puVar28[0x10] = uVar35;
                uVar35 = puVar34[0x14];
                puVar28[0x16] = puVar34[0x16];
                puVar28[0x14] = uVar35;
                puVar28 = puVar28 + 0x30;
                puVar34 = puVar34 + 0x30;
              } while (uVar43 - uVar27 != lVar31);
            }
            if ((uVar40 & 3) != 0) {
              puVar28 = (undefined8 *)(lVar38 + lVar31 * 0x60);
              puVar34 = (undefined8 *)(lVar16 + lVar31 * 0x60);
              do {
                uVar35 = puVar28[0xb];
                uVar27 = uVar27 - 1;
                puVar34[9] = puVar28[9];
                puVar34[0xb] = uVar35;
                uVar35 = puVar28[7];
                puVar34[5] = puVar28[5];
                puVar34[7] = uVar35;
                uVar35 = puVar28[3];
                puVar34[1] = puVar28[1];
                puVar34[3] = uVar35;
                uVar35 = *puVar28;
                puVar34[2] = puVar28[2];
                *puVar34 = uVar35;
                uVar35 = puVar28[4];
                puVar34[6] = puVar28[6];
                puVar34[4] = uVar35;
                uVar35 = puVar28[8];
                puVar34[10] = puVar28[10];
                puVar34[8] = uVar35;
                puVar28 = puVar28 + 0xc;
                puVar34 = puVar34 + 0xc;
              } while (uVar27 != 0);
            }
          }
          if (-1 < (int)uVar42) {
            (**(code **)(*plVar24 + 0x18))(plVar24,lVar38,((ulong)uVar42 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
            uVar19 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
          }
          else {
            uVar19 = 0x3fffffff;
          }
          auVar106._4_4_ = fVar115;
          auVar106._0_4_ = fVar112;
          auVar106._8_4_ = fVar116;
          auVar106._12_4_ = fVar79;
          uVar40 = *(uint *)(param_4 + 1);
          auVar110._8_8_ = auVar110._8_8_;
          auVar113._4_4_ = fVar117;
          auVar113._0_4_ = fVar108;
          auVar113._8_8_ = uVar49;
          *(undefined4 *)((long)param_4 + 0xc) = uVar19;
          *param_4 = lVar16;
        }
        plVar29 = (long *)(lVar16 + (long)(int)uVar40 * 0x60);
        *(uint *)(param_4 + 1) = uVar39;
        *(int *)(plVar29 + 4) = iVar32;
        plVar29[1] = lVar18;
        *plVar29 = lVar17;
        plVar29[3] = lVar33;
        plVar29[2] = lVar25;
        *(undefined4 *)(plVar29 + 10) = uVar20;
        plVar29[7] = uVar44;
        plVar29[6] = lVar30;
        plVar29[9] = auVar113._8_8_;
        plVar29[8] = auVar113._0_8_;
      }
      if ((float)uVar48 * (float)uVar48 < auVar61._0_4_ + auVar61._4_4_ + auVar96._0_4_)
      goto LAB_001920d0;
      uVar40 = *(uint *)(param_4 + 1);
      uVar44 = (ulong)uVar40;
      uVar42 = *(uint *)((long)param_4 + 0xc);
      lVar16 = *param_4;
      uVar39 = uVar40 + 1;
      lVar30 = lVar16;
      if ((int)(uVar42 & 0x3fffffff) <= (int)uVar40) {
        if (0x3ffffffe < (int)uVar40) {
          FUN_032bd0a8(uVar39);
          uVar42 = *(uint *)((long)param_4 + 0xc);
        }
        uVar21 = (uVar42 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar21) {
          uVar21 = 0x3fffffff;
        }
        uVar3 = uVar39;
        if ((int)uVar39 <= (int)uVar21) {
          uVar3 = uVar21;
        }
        FUN_032bd100(uVar3,0x60,uVar42,&local_a0);
        uVar42 = *(uint *)((long)param_4 + 0xc);
        lVar30 = (**(code **)(*plVar24 + 0x10))(plVar24,CONCAT44(fStack_9c,local_a0),&local_a0);
        if (0 < (int)uVar40) {
          uVar43 = uVar44 & 3;
          if (uVar44 - 1 < 3) {
            lVar38 = 0;
          }
          else {
            lVar38 = 0;
            puVar28 = (undefined8 *)(lVar30 + 0xc0);
            puVar34 = (undefined8 *)(lVar16 + 0xc0);
            do {
              uVar36 = puVar34[-0xd];
              lVar38 = lVar38 + 4;
              puVar28[-0xf] = puVar34[-0xf];
              puVar28[-0xd] = uVar36;
              uVar36 = puVar34[-0x11];
              puVar28[-0x13] = puVar34[-0x13];
              puVar28[-0x11] = uVar36;
              uVar36 = puVar34[-0x15];
              puVar28[-0x17] = puVar34[-0x17];
              puVar28[-0x15] = uVar36;
              uVar36 = puVar34[-0x18];
              puVar28[-0x16] = puVar34[-0x16];
              puVar28[-0x18] = uVar36;
              uVar36 = puVar34[-0x14];
              puVar28[-0x12] = puVar34[-0x12];
              puVar28[-0x14] = uVar36;
              uVar36 = puVar34[-0x10];
              puVar28[-0xe] = puVar34[-0xe];
              puVar28[-0x10] = uVar36;
              uVar36 = puVar34[-1];
              puVar28[-3] = puVar34[-3];
              puVar28[-1] = uVar36;
              uVar36 = puVar34[-5];
              puVar28[-7] = puVar34[-7];
              puVar28[-5] = uVar36;
              uVar36 = puVar34[-9];
              puVar28[-0xb] = puVar34[-0xb];
              puVar28[-9] = uVar36;
              uVar36 = puVar34[-0xc];
              puVar28[-10] = puVar34[-10];
              puVar28[-0xc] = uVar36;
              uVar36 = puVar34[-8];
              puVar28[-6] = puVar34[-6];
              puVar28[-8] = uVar36;
              uVar36 = puVar34[-4];
              puVar28[-2] = puVar34[-2];
              puVar28[-4] = uVar36;
              uVar36 = puVar34[0xb];
              puVar28[9] = puVar34[9];
              puVar28[0xb] = uVar36;
              uVar36 = puVar34[7];
              puVar28[5] = puVar34[5];
              puVar28[7] = uVar36;
              uVar36 = puVar34[3];
              puVar28[1] = puVar34[1];
              puVar28[3] = uVar36;
              uVar36 = *puVar34;
              puVar28[2] = puVar34[2];
              *puVar28 = uVar36;
              uVar36 = puVar34[4];
              puVar28[6] = puVar34[6];
              puVar28[4] = uVar36;
              uVar36 = puVar34[8];
              puVar28[10] = puVar34[10];
              puVar28[8] = uVar36;
              uVar36 = puVar34[0x17];
              puVar28[0x15] = puVar34[0x15];
              puVar28[0x17] = uVar36;
              uVar36 = puVar34[0x13];
              puVar28[0x11] = puVar34[0x11];
              puVar28[0x13] = uVar36;
              uVar36 = puVar34[0xf];
              puVar28[0xd] = puVar34[0xd];
              puVar28[0xf] = uVar36;
              uVar36 = puVar34[0xc];
              puVar28[0xe] = puVar34[0xe];
              puVar28[0xc] = uVar36;
              uVar36 = puVar34[0x10];
              puVar28[0x12] = puVar34[0x12];
              puVar28[0x10] = uVar36;
              uVar36 = puVar34[0x14];
              puVar28[0x16] = puVar34[0x16];
              puVar28[0x14] = uVar36;
              puVar28 = puVar28 + 0x30;
              puVar34 = puVar34 + 0x30;
            } while (uVar44 - uVar43 != lVar38);
          }
          if ((uVar40 & 3) != 0) {
            puVar28 = (undefined8 *)(lVar16 + lVar38 * 0x60);
            puVar34 = (undefined8 *)(lVar30 + lVar38 * 0x60);
            do {
              uVar36 = puVar28[0xb];
              uVar43 = uVar43 - 1;
              puVar34[9] = puVar28[9];
              puVar34[0xb] = uVar36;
              uVar36 = puVar28[7];
              puVar34[5] = puVar28[5];
              puVar34[7] = uVar36;
              uVar36 = puVar28[3];
              puVar34[1] = puVar28[1];
              puVar34[3] = uVar36;
              uVar36 = *puVar28;
              puVar34[2] = puVar28[2];
              *puVar34 = uVar36;
              uVar36 = puVar28[4];
              puVar34[6] = puVar28[6];
              puVar34[4] = uVar36;
              uVar36 = puVar28[8];
              puVar34[10] = puVar28[10];
              puVar34[8] = uVar36;
              puVar28 = puVar28 + 0xc;
              puVar34 = puVar34 + 0xc;
            } while (uVar43 != 0);
          }
        }
        if (-1 < (int)uVar42) {
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,((ulong)uVar42 & 0x3fffffff) * 0x60);
        }
        if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
          uVar20 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
        }
        else {
          uVar20 = 0x3fffffff;
        }
        *(undefined4 *)((long)param_4 + 0xc) = uVar20;
        *param_4 = lVar30;
        uVar40 = *(uint *)(param_4 + 1);
      }
      plVar29 = (long *)(lVar30 + (long)(int)uVar40 * 0x60);
      *(uint *)(param_4 + 1) = uVar39;
      *(int *)(plVar29 + 4) = iVar32;
      plVar29[1] = lVar18;
      *plVar29 = lVar17;
      plVar29[3] = lVar33;
      plVar29[2] = lVar25;
      *(uint *)(plVar29 + 10) = uVar41;
      plVar29[7] = auVar110._8_8_;
      plVar29[6] = auVar110._0_8_;
      plVar29[9] = auVar106._8_8_;
      plVar29[8] = auVar106._0_8_;
      iVar32 = (int)param_4[1];
    }
    else {
      lVar17 = (long)(param_2 + 8) + (ulong)CONCAT11(bVar4,pbVar45[4]) * 0x60 + param_2[8];
      lVar18 = (long)(param_3 + 8) + (ulong)CONCAT11(local_a8[3],local_a8[4]) * 0x60 + param_3[8];
      lVar25 = *(long *)(param_5 + 0x50);
      lVar33 = *(long *)(lVar25 + 0x40);
      lVar30 = lVar33 + lVar25 + 0x40;
      lVar16 = 0;
      if (lVar33 != 0) {
        lVar16 = lVar30;
      }
      iVar32 = (int)(lVar17 - lVar16 >> 5) * -0x55555555;
      if (*(int *)(param_5 + 0x94) != iVar32 || *(int *)(param_5 + 0x98) != iVar32) {
        lVar30 = lVar30 + (long)iVar32 * 0x60;
        *(long *)(param_5 + 0x60) = lVar30;
        *(int *)(param_5 + 0x94) = iVar32;
        *(int *)(param_5 + 0x98) = iVar32;
        lVar33 = *(long *)(lVar25 + 0x70);
        lVar16 = 0;
        if (lVar33 != 0) {
          lVar16 = lVar33 + lVar25 + 0x70;
        }
        *(ulong *)(param_5 + 0x70) = lVar16 + (ulong)*(uint *)(lVar30 + 0x48) * 4;
        lVar33 = *(long *)(lVar25 + 0x80);
        lVar16 = 0;
        if (lVar33 != 0) {
          lVar16 = lVar33 + lVar25 + 0x80;
        }
        *(ulong *)(param_5 + 0x78) = lVar16 + (ulong)*(byte *)(lVar30 + 0x5b) * 0x80000;
        lVar33 = *(long *)(lVar25 + 0x60);
        lVar16 = 0;
        if (lVar33 != 0) {
          lVar16 = lVar33 + lVar25 + 0x60;
        }
        lVar16 = lVar16 + (ulong)*(uint *)(lVar30 + 0x4c) * 2;
        *(long *)(param_5 + 0x80) = lVar16;
        lVar38 = *(long *)(lVar25 + 0x90);
        lVar33 = 0;
        if (lVar38 != 0) {
          lVar33 = lVar38 + lVar25 + 0x90;
        }
        *(ulong *)(param_5 + 0x88) = lVar33 + (ulong)*(uint *)(lVar30 + 0x54) * 4;
        *(uint *)(param_5 + 0x90) = (uint)*(byte *)(lVar30 + 0x58);
        lVar38 = *(long *)(lVar25 + 0x50);
        lVar33 = 0;
        if (lVar38 != 0) {
          lVar33 = lVar38 + lVar25 + 0x50;
        }
        *(ulong *)(param_5 + 0x68) = lVar33 + (ulong)*(uint *)(lVar30 + 0x50) * 4;
        uVar36 = *(undefined8 *)(lVar30 + 0x30);
        *(undefined8 *)(param_5 + 0x38) = *(undefined8 *)(lVar30 + 0x38);
        *(undefined8 *)(param_5 + 0x30) = uVar36;
        auVar7 = *(undefined1 (*) [12])(lVar30 + 0x3c);
        *(ulong *)(param_5 + 0x48) = (ulong)auVar7._8_4_;
        *(long *)(param_5 + 0x40) = auVar7._0_8_;
        *(ulong *)(param_5 + 0x80) = lVar16 + (ulong)*(byte *)(lVar30 + 0x58) * -2;
      }
      lVar25 = *(long *)(param_5 + 0xe0);
      lVar33 = *(long *)(lVar25 + 0x40);
      lVar30 = lVar33 + lVar25 + 0x40;
      lVar16 = 0;
      if (lVar33 != 0) {
        lVar16 = lVar30;
      }
      iVar32 = (int)(lVar18 - lVar16 >> 5) * -0x55555555;
      if (*(int *)(param_5 + 0x124) != iVar32 || *(int *)(param_5 + 0x128) != iVar32) {
        lVar30 = lVar30 + (long)iVar32 * 0x60;
        *(long *)(param_5 + 0xf0) = lVar30;
        *(int *)(param_5 + 0x128) = iVar32;
        *(int *)(param_5 + 0x124) = iVar32;
        lVar33 = *(long *)(lVar25 + 0x70);
        lVar16 = 0;
        if (lVar33 != 0) {
          lVar16 = lVar33 + lVar25 + 0x70;
        }
        *(ulong *)(param_5 + 0x100) = lVar16 + (ulong)*(uint *)(lVar30 + 0x48) * 4;
        lVar33 = *(long *)(lVar25 + 0x80);
        lVar16 = 0;
        if (lVar33 != 0) {
          lVar16 = lVar33 + lVar25 + 0x80;
        }
        *(ulong *)(param_5 + 0x108) = lVar16 + (ulong)*(byte *)(lVar30 + 0x5b) * 0x80000;
        lVar33 = *(long *)(lVar25 + 0x60);
        lVar16 = 0;
        if (lVar33 != 0) {
          lVar16 = lVar33 + lVar25 + 0x60;
        }
        lVar16 = lVar16 + (ulong)*(uint *)(lVar30 + 0x4c) * 2;
        *(long *)(param_5 + 0x110) = lVar16;
        lVar38 = *(long *)(lVar25 + 0x90);
        lVar33 = 0;
        if (lVar38 != 0) {
          lVar33 = lVar38 + lVar25 + 0x90;
        }
        *(ulong *)(param_5 + 0x118) = lVar33 + (ulong)*(uint *)(lVar30 + 0x54) * 4;
        *(uint *)(param_5 + 0x120) = (uint)*(byte *)(lVar30 + 0x58);
        lVar38 = *(long *)(lVar25 + 0x50);
        lVar33 = 0;
        if (lVar38 != 0) {
          lVar33 = lVar38 + lVar25 + 0x50;
        }
        *(ulong *)(param_5 + 0xf8) = lVar33 + (ulong)*(uint *)(lVar30 + 0x50) * 4;
        uVar36 = *(undefined8 *)(lVar30 + 0x30);
        *(undefined8 *)(param_5 + 200) = *(undefined8 *)(lVar30 + 0x38);
        *(undefined8 *)(param_5 + 0xc0) = uVar36;
        auVar7 = *(undefined1 (*) [12])(lVar30 + 0x3c);
        *(ulong *)(param_5 + 0xd8) = (ulong)auVar7._8_4_;
        *(long *)(param_5 + 0xd0) = auVar7._0_8_;
        *(ulong *)(param_5 + 0x110) = lVar16 + (ulong)*(byte *)(lVar30 + 0x58) * -2;
      }
      FUN_00192cbc(param_1 & 1,lVar17,lVar18,param_4,param_5,0,0);
      iVar32 = (int)param_4[1];
    }
    if (iVar32 <= (int)lVar14) {
      return;
    }
  } while( true );
}


