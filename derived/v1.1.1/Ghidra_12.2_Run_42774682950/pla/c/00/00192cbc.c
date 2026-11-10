/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00192cbc; name: FUN_00192cbc
 */


void FUN_00192cbc(uint param_1,long *param_2,long *param_3,long *param_4,long param_5,
                 undefined1 (*param_6) [16],long *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
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
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  undefined4 uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  undefined1 (*pauVar42) [16];
  undefined8 *puVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  ulong uVar50;
  long *plVar51;
  uint uVar52;
  ulong uVar53;
  long lVar54;
  long lVar55;
  float fVar56;
  undefined8 uVar58;
  float fVar86;
  undefined1 auVar64 [16];
  float fVar84;
  undefined1 auVar65 [16];
  float fVar57;
  float fVar85;
  float fVar87;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar59;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar60;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar61;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar62;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar63;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar88;
  undefined8 uVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar99 [16];
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
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar118;
  float fVar119;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  float fVar123;
  undefined8 uVar124;
  undefined1 auVar125 [16];
  undefined8 uVar126;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint local_140;
  byte *local_138;
  undefined8 local_130;
  ulong uStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  int local_110;
  byte *local_108;
  undefined8 local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  uint local_e0;
  byte *local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
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
  
  puVar27 = PTR_DAT_04372370;
  if ((int)param_2[1] == 0 || (int)param_3[1] == 0) {
    return;
  }
  lVar26 = param_4[1];
  if (param_6 == (undefined1 (*) [16])0x0) {
    uVar50 = 0;
    auVar100 = *(undefined1 (*) [16])(param_2 + 2);
    auVar101 = *(undefined1 (*) [16])(param_2 + 4);
    local_a8 = (byte *)(*param_2 + (long)param_2);
    local_b0 = 0;
    fStack_c8 = auVar100._8_4_;
    fStack_c4 = auVar100._12_4_;
    local_d0 = auVar100._0_4_;
    fStack_cc = auVar100._4_4_;
    fStack_b8 = auVar101._8_4_;
    fStack_b4 = auVar101._12_4_;
    fStack_c0 = auVar101._0_4_;
    local_bc = auVar101._4_4_;
  }
  else {
    auVar100 = *param_6;
    auVar101 = param_6[1];
    local_b0 = *(uint *)param_6[2];
    uVar50 = (ulong)local_b0;
    local_a8 = *(byte **)(param_6[2] + 8);
    fStack_c8 = auVar100._8_4_;
    fStack_c4 = auVar100._12_4_;
    local_d0 = auVar100._0_4_;
    fStack_cc = auVar100._4_4_;
    fStack_b8 = auVar101._8_4_;
    fStack_b4 = auVar101._12_4_;
    fStack_c0 = auVar101._0_4_;
    local_bc = auVar101._4_4_;
  }
  if (param_7 == (long *)0x0) {
    uVar53 = 0;
    lStack_f8 = param_3[3];
    local_100 = param_3[2];
    lStack_e8 = param_3[5];
    lStack_f0 = param_3[4];
    local_d8 = (byte *)(*param_3 + (long)param_3);
  }
  else {
    lStack_f8 = param_7[1];
    local_100 = *param_7;
    lStack_e8 = param_7[3];
    lStack_f0 = param_7[2];
    uVar53 = (ulong)*(uint *)(param_7 + 4);
    local_d8 = (byte *)param_7[5];
  }
  local_e0 = (uint)uVar53;
  uVar95 = SUB168(*(undefined1 (*) [16])(PTR_DAT_04372370 + 0x50),0);
  if ((param_1 & 1) == 0) {
    uVar124 = NEON_fmax(uVar95,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    FUN_0333e220(param_5 + 0x1b0,&local_100,&local_160);
    auVar100 = *(undefined1 (*) [16])(puVar27 + 0x150);
    auVar101 = NEON_ext(auVar100,auVar100,8,1);
    auVar100 = NEON_ext(auVar101,auVar100,8,1);
    fVar110 = (local_160 + local_150) * auVar100._0_4_;
    fVar115 = (fStack_15c + fStack_14c) * auVar100._4_4_;
    fVar119 = (fStack_158 + fStack_148) * auVar100._8_4_;
    fVar89 = (fStack_154 + fStack_144) * auVar100._12_4_;
    uStack_1f8 = auVar100._8_8_;
    local_200 = auVar100._0_8_;
    fVar56 = (local_150 - local_160) * auVar100._0_4_;
    fVar84 = (fStack_14c - fStack_15c) * auVar100._4_4_;
    fVar118 = (fStack_148 - fStack_158) * auVar100._8_4_;
    fVar88 = (fStack_144 - fStack_154) * auVar100._12_4_;
    auVar100._4_4_ = fStack_cc;
    auVar100._0_4_ = local_d0;
    auVar100._8_4_ = fStack_c8;
    auVar100._12_4_ = fStack_c4;
    auVar101._4_4_ = local_bc;
    auVar101._0_4_ = fStack_c0;
    auVar101._8_4_ = fStack_b8;
    auVar101._12_4_ = fStack_b4;
    auVar97._0_4_ = local_d0 - fVar56;
    auVar97._4_4_ = fStack_cc - fVar84;
    auVar97._8_4_ = fStack_c8 - fVar118;
    auVar97._12_4_ = fStack_c4 - fVar88;
    auVar96._0_4_ = fStack_c0 + fVar56;
    auVar96._4_4_ = local_bc + fVar84;
    auVar96._8_4_ = fStack_b8 + fVar118;
    auVar96._12_4_ = fStack_b4 + fVar88;
    auVar64._4_4_ = fVar115;
    auVar64._0_4_ = fVar110;
    auVar64._8_4_ = fVar119;
    auVar64._12_4_ = fVar89;
    auVar64 = NEON_fmax(auVar97,auVar64,4);
    auVar64 = NEON_fmin(auVar96,auVar64,4);
    fVar110 = fVar110 - auVar64._0_4_;
    fVar115 = fVar115 - auVar64._4_4_;
    fVar119 = fVar119 - auVar64._8_4_;
    fVar89 = fVar89 - auVar64._12_4_;
    auVar125._0_4_ = fVar110 * fVar110;
    auVar125._4_4_ = fVar115 * fVar115;
    auVar125._8_4_ = fVar119 * fVar119;
    auVar125._12_4_ = fVar89 * fVar89;
    auVar64 = NEON_ext(auVar125,auVar125,8,1);
    if ((float)uVar124 * (float)uVar124 < auVar125._0_4_ + auVar125._4_4_ + auVar64._0_4_) {
      return;
    }
    uVar50 = (ulong)local_b0;
    uVar53 = (ulong)local_e0;
  }
  else {
    auVar64 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
    auVar96 = NEON_ext(auVar64,auVar64,8,1);
    auVar64 = NEON_ext(auVar96,auVar64,8,1);
    uStack_1f8 = auVar64._8_8_;
    local_200 = auVar64._0_8_;
  }
  uVar52 = (uint)uVar53;
  auVar64 = *(undefined1 (*) [16])(puVar27 + 0x1e0);
  auVar96 = NEON_ext(auVar64,auVar64,8,1);
  uVar124 = *(undefined8 *)(puVar27 + 0x50);
  plVar51 = *(long **)PTR_PTR_04372408;
  auVar125 = NEON_ext(auVar96,auVar64,8,1);
  auVar64 = *(undefined1 (*) [16])(puVar27 + 0x150);
  lVar4 = param_5 + 0x1b0;
  auVar96 = NEON_ext(auVar64,auVar64,8,1);
  auVar64 = NEON_ext(auVar96,auVar64,8,1);
  local_210 = auVar64._0_4_;
  fStack_20c = auVar64._4_4_;
  fStack_208 = auVar64._8_4_;
  fStack_204 = auVar64._12_4_;
  fVar56 = auVar125._0_4_;
  fVar110 = auVar125._4_4_;
  fVar84 = auVar125._8_4_;
  uVar49 = (uint)uVar50;
  if ((param_1 & 1) == 0) goto LAB_001937f8;
LAB_00192e8c:
  uVar49 = (uint)uVar50;
  uVar52 = (uint)uVar53;
  if (local_a8 != local_d8) {
    bVar7 = local_a8[3];
    if ((bVar7 & 1) != 0) goto LAB_00193804;
    goto LAB_00192ea4;
  }
  while ((local_a8[3] & 1) != 0) {
    uVar52 = local_b0 + 1;
    iVar3 = local_b0 + (local_a8[3] & 0xfe);
    fVar115 = (fStack_c0 - local_d0) * fVar56;
    fVar119 = (local_bc - fStack_cc) * fVar110;
    fVar118 = (fStack_b8 - fStack_c8) * fVar84;
    local_138 = (byte *)((long)param_2 + (long)(int)uVar52 * 4 + *param_2);
    local_108 = (byte *)((long)param_2 + (long)iVar3 * 4 + *param_2);
    bVar19 = local_138[2] >> 4;
    bVar20 = *local_138 >> 4;
    bVar21 = local_138[1] >> 4;
    bVar7 = local_138[1] & 0xf;
    bVar22 = *local_108 >> 4;
    fStack_15c = (float)(byte)(bVar21 * bVar21) * fVar119 + fStack_cc;
    fStack_158 = (float)(byte)(bVar19 * bVar19) * fVar118 + fStack_c8;
    fStack_154 = 0.0;
    local_160 = (float)(byte)(bVar20 * bVar20) * fVar115 + local_d0;
    bVar23 = local_108[1] >> 4;
    bVar19 = *local_138 & 0xf;
    fStack_144 = 0.0;
    bVar24 = local_108[2] >> 4;
    bVar20 = local_108[2] & 0xf;
    bVar21 = local_138[2] & 0xf;
    local_150 = fStack_c0 - (float)(byte)(bVar19 * bVar19) * fVar115;
    bVar19 = local_108[1] & 0xf;
    fStack_14c = local_bc - (float)(byte)(bVar7 * bVar7) * fVar119;
    fStack_148 = fStack_b8 - (float)(byte)(bVar21 * bVar21) * fVar118;
    uStack_114 = 0;
    bVar7 = *local_108 & 0xf;
    uStack_128 = (ulong)(uint)((float)(byte)(bVar24 * bVar24) * fVar118 + fStack_c8);
    uVar37 = uStack_128;
    fVar118 = fStack_b8 - (float)(byte)(bVar20 * bVar20) * fVar118;
    uVar126 = CONCAT44(fStack_14c,local_150);
    uVar39 = (ulong)(uint)fStack_148;
    fVar88 = fStack_c0 - (float)(byte)(bVar7 * bVar7) * fVar115;
    uVar46 = CONCAT44(fStack_15c,local_160);
    uVar53 = (ulong)(uint)fStack_158;
    local_130 = CONCAT44((float)(byte)(bVar23 * bVar23) * fVar119 + fStack_cc,
                         local_d0 + (float)(byte)(bVar22 * bVar22) * fVar115);
    uVar58 = local_130;
    fVar115 = local_bc - (float)(byte)(bVar19 * bVar19) * fVar119;
    lVar55 = *param_4;
    uVar48 = *(uint *)(param_4 + 1);
    uVar50 = (ulong)uVar48;
    uVar47 = *(uint *)((long)param_4 + 0xc);
    uVar49 = uVar48 + 1;
    lVar31 = lVar55;
    local_140 = uVar52;
    local_120 = fVar88;
    fStack_11c = fVar115;
    fStack_118 = fVar118;
    local_110 = iVar3;
    if ((int)(uVar47 & 0x3fffffff) <= (int)uVar48) {
      if (0x3ffffffe < (int)uVar48) {
        FUN_032bd0a8(uVar49);
        uVar47 = *(uint *)((long)param_4 + 0xc);
      }
      uVar33 = (uVar47 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar33) {
        uVar33 = 0x3fffffff;
      }
      uVar35 = uVar49;
      if ((int)uVar49 <= (int)uVar33) {
        uVar35 = uVar33;
      }
      FUN_032bd100(uVar35,0x60,uVar47,&local_a0);
      uVar47 = *(uint *)((long)param_4 + 0xc);
      lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
      if (0 < (int)uVar48) {
        uVar36 = uVar50 & 3;
        if (uVar50 - 1 < 3) {
          lVar40 = 0;
        }
        else {
          lVar40 = 0;
          puVar38 = (undefined8 *)(lVar31 + 0xc0);
          puVar43 = (undefined8 *)(lVar55 + 0xc0);
          do {
            uVar59 = puVar43[-0xd];
            lVar40 = lVar40 + 4;
            puVar38[-0xf] = puVar43[-0xf];
            puVar38[-0xd] = uVar59;
            uVar59 = puVar43[-0x11];
            puVar38[-0x13] = puVar43[-0x13];
            puVar38[-0x11] = uVar59;
            uVar59 = puVar43[-0x15];
            puVar38[-0x17] = puVar43[-0x17];
            puVar38[-0x15] = uVar59;
            uVar59 = puVar43[-0x18];
            puVar38[-0x16] = puVar43[-0x16];
            puVar38[-0x18] = uVar59;
            uVar59 = puVar43[-0x14];
            puVar38[-0x12] = puVar43[-0x12];
            puVar38[-0x14] = uVar59;
            uVar59 = puVar43[-0x10];
            puVar38[-0xe] = puVar43[-0xe];
            puVar38[-0x10] = uVar59;
            uVar59 = puVar43[-1];
            puVar38[-3] = puVar43[-3];
            puVar38[-1] = uVar59;
            uVar59 = puVar43[-5];
            puVar38[-7] = puVar43[-7];
            puVar38[-5] = uVar59;
            uVar59 = puVar43[-9];
            puVar38[-0xb] = puVar43[-0xb];
            puVar38[-9] = uVar59;
            uVar59 = puVar43[-0xc];
            puVar38[-10] = puVar43[-10];
            puVar38[-0xc] = uVar59;
            uVar59 = puVar43[-8];
            puVar38[-6] = puVar43[-6];
            puVar38[-8] = uVar59;
            uVar59 = puVar43[-4];
            puVar38[-2] = puVar43[-2];
            puVar38[-4] = uVar59;
            uVar59 = puVar43[0xb];
            puVar38[9] = puVar43[9];
            puVar38[0xb] = uVar59;
            uVar59 = puVar43[7];
            puVar38[5] = puVar43[5];
            puVar38[7] = uVar59;
            uVar59 = puVar43[3];
            puVar38[1] = puVar43[1];
            puVar38[3] = uVar59;
            uVar59 = *puVar43;
            puVar38[2] = puVar43[2];
            *puVar38 = uVar59;
            uVar59 = puVar43[4];
            puVar38[6] = puVar43[6];
            puVar38[4] = uVar59;
            uVar59 = puVar43[8];
            puVar38[10] = puVar43[10];
            puVar38[8] = uVar59;
            uVar59 = puVar43[0x17];
            puVar38[0x15] = puVar43[0x15];
            puVar38[0x17] = uVar59;
            uVar59 = puVar43[0x13];
            puVar38[0x11] = puVar43[0x11];
            puVar38[0x13] = uVar59;
            uVar59 = puVar43[0xf];
            puVar38[0xd] = puVar43[0xd];
            puVar38[0xf] = uVar59;
            uVar59 = puVar43[0xc];
            puVar38[0xe] = puVar43[0xe];
            puVar38[0xc] = uVar59;
            uVar59 = puVar43[0x10];
            puVar38[0x12] = puVar43[0x12];
            puVar38[0x10] = uVar59;
            uVar59 = puVar43[0x14];
            puVar38[0x16] = puVar43[0x16];
            puVar38[0x14] = uVar59;
            puVar38 = puVar38 + 0x30;
            puVar43 = puVar43 + 0x30;
          } while (uVar50 - uVar36 != lVar40);
        }
        if ((uVar48 & 3) != 0) {
          puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
          puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
          do {
            uVar59 = puVar38[0xb];
            uVar36 = uVar36 - 1;
            puVar43[9] = puVar38[9];
            puVar43[0xb] = uVar59;
            uVar59 = puVar38[7];
            puVar43[5] = puVar38[5];
            puVar43[7] = uVar59;
            uVar59 = puVar38[3];
            puVar43[1] = puVar38[1];
            puVar43[3] = uVar59;
            uVar59 = *puVar38;
            puVar43[2] = puVar38[2];
            *puVar43 = uVar59;
            uVar59 = puVar38[4];
            puVar43[6] = puVar38[6];
            puVar43[4] = uVar59;
            uVar59 = puVar38[8];
            puVar43[10] = puVar38[10];
            puVar43[8] = uVar59;
            puVar38 = puVar38 + 0xc;
            puVar43 = puVar43 + 0xc;
          } while (uVar36 != 0);
        }
      }
      if (-1 < (int)uVar47) {
        (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar47 & 0x3fffffff) * 0x60);
      }
      if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
        uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
      }
      else {
        uVar34 = 0x3fffffff;
      }
      uVar48 = *(uint *)(param_4 + 1);
      *(undefined4 *)((long)param_4 + 0xc) = uVar34;
      *param_4 = lVar31;
    }
    *(uint *)(param_4 + 1) = uVar49;
    puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar48 * 0x60);
    *(int *)(puVar38 + 4) = iVar3;
    *(int *)(puVar38 + 10) = iVar3;
    puVar38[1] = uVar37;
    *puVar38 = uVar58;
    puVar38[3] = (ulong)(uint)fVar118;
    puVar38[2] = CONCAT44(fVar115,fVar88);
    puVar38[7] = uVar37;
    puVar38[6] = uVar58;
    puVar38[9] = (ulong)(uint)fVar118;
    puVar38[8] = CONCAT44(fVar115,fVar88);
    uVar59 = NEON_fmax(uVar95,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    FUN_0333e220(lVar4,&local_130,&local_a0);
    fVar119 = (local_a0 + fStack_90) * (float)local_200;
    fVar89 = (fStack_9c + fStack_8c) * local_200._4_4_;
    fVar90 = (fStack_98 + fStack_88) * (float)uStack_1f8;
    fVar91 = (fStack_94 + fStack_84) * uStack_1f8._4_4_;
    fVar92 = (fStack_90 - local_a0) * (float)local_200;
    fVar93 = (fStack_8c - fStack_9c) * local_200._4_4_;
    fVar94 = (fStack_88 - fStack_98) * (float)uStack_1f8;
    fVar122 = (fStack_84 - fStack_94) * uStack_1f8._4_4_;
    auVar65._4_4_ = fStack_15c;
    auVar65._0_4_ = local_160;
    auVar65._8_4_ = fStack_158;
    auVar65._12_4_ = fStack_154;
    auVar98._4_4_ = fStack_14c;
    auVar98._0_4_ = local_150;
    auVar98._8_4_ = fStack_148;
    auVar98._12_4_ = fStack_144;
    auVar120._0_4_ = local_160 - fVar92;
    auVar120._4_4_ = fStack_15c - fVar93;
    auVar120._8_4_ = fStack_158 - fVar94;
    auVar120._12_4_ = fStack_154 - fVar122;
    auVar116._0_4_ = local_150 + fVar92;
    auVar116._4_4_ = fStack_14c + fVar93;
    auVar116._8_4_ = fStack_148 + fVar94;
    auVar116._12_4_ = fStack_144 + fVar122;
    auVar16._4_4_ = fVar89;
    auVar16._0_4_ = fVar119;
    auVar16._8_4_ = fVar90;
    auVar16._12_4_ = fVar91;
    auVar100 = NEON_fmax(auVar120,auVar16,4);
    auVar100 = NEON_fmin(auVar116,auVar100,4);
    fVar119 = fVar119 - auVar100._0_4_;
    fVar89 = fVar89 - auVar100._4_4_;
    fVar90 = fVar90 - auVar100._8_4_;
    fVar91 = fVar91 - auVar100._12_4_;
    fVar119 = fVar119 * fVar119;
    fVar89 = fVar89 * fVar89;
    fVar90 = fVar90 * fVar90;
    fVar91 = fVar91 * fVar91;
    auVar17._4_4_ = fVar89;
    auVar17._0_4_ = fVar119;
    auVar17._8_4_ = fVar90;
    auVar17._12_4_ = fVar91;
    auVar18._4_4_ = fVar89;
    auVar18._0_4_ = fVar119;
    auVar18._8_4_ = fVar90;
    auVar18._12_4_ = fVar91;
    auVar100 = NEON_ext(auVar17,auVar18,8,1);
    if (fVar119 + fVar89 + auVar100._0_4_ <= (float)uVar59 * (float)uVar59) {
      uVar48 = *(uint *)(param_4 + 1);
      uVar50 = (ulong)uVar48;
      uVar47 = *(uint *)((long)param_4 + 0xc);
      lVar31 = *param_4;
      uVar49 = uVar48 + 1;
      if ((int)(uVar47 & 0x3fffffff) <= (int)uVar48) {
        if (0x3ffffffe < (int)uVar48) {
          FUN_032bd0a8(uVar49);
          uVar47 = *(uint *)((long)param_4 + 0xc);
        }
        uVar33 = (uVar47 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar33) {
          uVar33 = 0x3fffffff;
        }
        uVar35 = uVar49;
        if ((int)uVar49 <= (int)uVar33) {
          uVar35 = uVar33;
        }
        FUN_032bd100(uVar35,0x60,uVar47,&local_a0);
        uVar47 = *(uint *)((long)param_4 + 0xc);
        lVar55 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
        if (0 < (int)uVar48) {
          uVar36 = uVar50 & 3;
          if (uVar50 - 1 < 3) {
            lVar40 = 0;
          }
          else {
            lVar40 = 0;
            puVar38 = (undefined8 *)(lVar55 + 0xc0);
            puVar43 = (undefined8 *)(lVar31 + 0xc0);
            do {
              uVar59 = puVar43[-0xd];
              lVar40 = lVar40 + 4;
              puVar38[-0xf] = puVar43[-0xf];
              puVar38[-0xd] = uVar59;
              uVar59 = puVar43[-0x11];
              puVar38[-0x13] = puVar43[-0x13];
              puVar38[-0x11] = uVar59;
              uVar59 = puVar43[-0x15];
              puVar38[-0x17] = puVar43[-0x17];
              puVar38[-0x15] = uVar59;
              uVar59 = puVar43[-0x18];
              puVar38[-0x16] = puVar43[-0x16];
              puVar38[-0x18] = uVar59;
              uVar59 = puVar43[-0x14];
              puVar38[-0x12] = puVar43[-0x12];
              puVar38[-0x14] = uVar59;
              uVar59 = puVar43[-0x10];
              puVar38[-0xe] = puVar43[-0xe];
              puVar38[-0x10] = uVar59;
              uVar59 = puVar43[-1];
              puVar38[-3] = puVar43[-3];
              puVar38[-1] = uVar59;
              uVar59 = puVar43[-5];
              puVar38[-7] = puVar43[-7];
              puVar38[-5] = uVar59;
              uVar59 = puVar43[-9];
              puVar38[-0xb] = puVar43[-0xb];
              puVar38[-9] = uVar59;
              uVar59 = puVar43[-0xc];
              puVar38[-10] = puVar43[-10];
              puVar38[-0xc] = uVar59;
              uVar59 = puVar43[-8];
              puVar38[-6] = puVar43[-6];
              puVar38[-8] = uVar59;
              uVar59 = puVar43[-4];
              puVar38[-2] = puVar43[-2];
              puVar38[-4] = uVar59;
              uVar59 = puVar43[0xb];
              puVar38[9] = puVar43[9];
              puVar38[0xb] = uVar59;
              uVar59 = puVar43[7];
              puVar38[5] = puVar43[5];
              puVar38[7] = uVar59;
              uVar59 = puVar43[3];
              puVar38[1] = puVar43[1];
              puVar38[3] = uVar59;
              uVar59 = *puVar43;
              puVar38[2] = puVar43[2];
              *puVar38 = uVar59;
              uVar59 = puVar43[4];
              puVar38[6] = puVar43[6];
              puVar38[4] = uVar59;
              uVar59 = puVar43[8];
              puVar38[10] = puVar43[10];
              puVar38[8] = uVar59;
              uVar59 = puVar43[0x17];
              puVar38[0x15] = puVar43[0x15];
              puVar38[0x17] = uVar59;
              uVar59 = puVar43[0x13];
              puVar38[0x11] = puVar43[0x11];
              puVar38[0x13] = uVar59;
              uVar59 = puVar43[0xf];
              puVar38[0xd] = puVar43[0xd];
              puVar38[0xf] = uVar59;
              uVar59 = puVar43[0xc];
              puVar38[0xe] = puVar43[0xe];
              puVar38[0xc] = uVar59;
              uVar59 = puVar43[0x10];
              puVar38[0x12] = puVar43[0x12];
              puVar38[0x10] = uVar59;
              uVar59 = puVar43[0x14];
              puVar38[0x16] = puVar43[0x16];
              puVar38[0x14] = uVar59;
              puVar38 = puVar38 + 0x30;
              puVar43 = puVar43 + 0x30;
            } while (uVar50 - uVar36 != lVar40);
          }
          if ((uVar48 & 3) != 0) {
            puVar38 = (undefined8 *)(lVar31 + lVar40 * 0x60);
            puVar43 = (undefined8 *)(lVar55 + lVar40 * 0x60);
            do {
              uVar59 = puVar38[0xb];
              uVar36 = uVar36 - 1;
              puVar43[9] = puVar38[9];
              puVar43[0xb] = uVar59;
              uVar59 = puVar38[7];
              puVar43[5] = puVar38[5];
              puVar43[7] = uVar59;
              uVar59 = puVar38[3];
              puVar43[1] = puVar38[1];
              puVar43[3] = uVar59;
              uVar59 = *puVar38;
              puVar43[2] = puVar38[2];
              *puVar43 = uVar59;
              uVar59 = puVar38[4];
              puVar43[6] = puVar38[6];
              puVar43[4] = uVar59;
              uVar59 = puVar38[8];
              puVar43[10] = puVar38[10];
              puVar43[8] = uVar59;
              puVar38 = puVar38 + 0xc;
              puVar43 = puVar43 + 0xc;
            } while (uVar36 != 0);
          }
        }
        if (-1 < (int)uVar47) {
          (**(code **)(*plVar51 + 0x18))(plVar51,lVar31,((ulong)uVar47 & 0x3fffffff) * 0x60);
        }
        if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
          uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
        }
        else {
          uVar34 = 0x3fffffff;
        }
        uVar48 = *(uint *)(param_4 + 1);
        *(undefined4 *)((long)param_4 + 0xc) = uVar34;
        *param_4 = lVar55;
        lVar31 = lVar55;
      }
      puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar48 * 0x60);
      *(uint *)(param_4 + 1) = uVar49;
      *(uint *)(puVar38 + 4) = uVar52;
      *(int *)(puVar38 + 10) = iVar3;
      puVar38[1] = uVar53;
      *puVar38 = uVar46;
      puVar38[3] = uVar39;
      puVar38[2] = uVar126;
      puVar38[7] = uVar37;
      puVar38[6] = uVar58;
      puVar38[9] = (ulong)(uint)fVar118;
      puVar38[8] = CONCAT44(fVar115,fVar88);
      auVar65._4_4_ = fStack_15c;
      auVar65._0_4_ = local_160;
      auVar65._8_4_ = fStack_158;
      auVar65._12_4_ = fStack_154;
      auVar98._4_4_ = fStack_14c;
      auVar98._0_4_ = local_150;
      auVar98._8_4_ = fStack_148;
      auVar98._12_4_ = fStack_144;
    }
    local_b0 = local_140;
    local_e0 = local_140;
    lStack_f8 = auVar65._8_8_;
    fStack_c8 = auVar65._8_4_;
    fStack_c4 = auVar65._12_4_;
    local_100 = auVar65._0_8_;
    local_d0 = auVar65._0_4_;
    fStack_cc = auVar65._4_4_;
    lStack_e8 = auVar98._8_8_;
    fStack_b8 = auVar98._8_4_;
    fStack_b4 = auVar98._12_4_;
    lStack_f0 = auVar98._0_8_;
    fStack_c0 = auVar98._0_4_;
    local_bc = auVar98._4_4_;
    local_d8 = local_138;
    local_a8 = local_138;
  }
LAB_00194f30:
  iVar3 = (int)param_4[1];
  if (iVar3 <= (int)lVar26) {
    return;
  }
  do {
    pauVar42 = (undefined1 (*) [16])(*param_4 + ((long)iVar3 + -1) * 0x60);
    *(int *)(param_4 + 1) = (int)((long)iVar3 + -1);
    local_b0 = *(uint *)pauVar42[2];
    uVar50 = (ulong)(int)local_b0;
    auVar100 = *pauVar42;
    auVar101 = pauVar42[1];
    lStack_f8 = *(long *)(pauVar42[3] + 8);
    local_100 = *(long *)pauVar42[3];
    lStack_e8 = *(long *)(pauVar42[4] + 8);
    lStack_f0 = *(long *)pauVar42[4];
    uVar52 = *(uint *)pauVar42[5];
    uVar53 = (ulong)(int)uVar52;
    local_a8 = (byte *)((long)param_2 + uVar50 * 4 + *param_2);
    fStack_c8 = auVar100._8_4_;
    fStack_c4 = auVar100._12_4_;
    local_d0 = auVar100._0_4_;
    fStack_cc = auVar100._4_4_;
    fStack_b8 = auVar101._8_4_;
    fStack_b4 = auVar101._12_4_;
    fStack_c0 = auVar101._0_4_;
    local_bc = auVar101._4_4_;
    local_d8 = (byte *)((long)param_3 + uVar53 * 4 + *param_3);
    local_e0 = uVar52;
    uVar49 = local_b0;
    if ((param_1 & 1) != 0) goto LAB_00192e8c;
LAB_001937f8:
    bVar7 = local_a8[3];
    if ((bVar7 & 1) == 0) {
LAB_00192ea4:
      if ((local_d8[3] & 1) != 0) break;
      FUN_00195d4c(param_5,&local_d0,&local_100);
      iVar3 = (int)param_4[1];
    }
    else {
LAB_00193804:
      lVar30 = lStack_e8;
      lVar40 = lStack_f0;
      lVar55 = lStack_f8;
      lVar31 = local_100;
      iVar3 = local_b0 + 1;
      iVar5 = local_b0 + (bVar7 & 0xfe);
      pbVar1 = (byte *)((long)param_2 + (long)iVar5 * 4 + *param_2);
      pbVar2 = (byte *)((long)param_2 + (long)iVar3 * 4 + *param_2);
      fVar115 = (fStack_c0 - local_d0) * fVar56;
      fVar118 = (local_bc - fStack_cc) * fVar110;
      fVar119 = (fStack_b8 - fStack_c8) * fVar84;
      bVar19 = *pbVar2 >> 4;
      bVar7 = *pbVar2 & 0xf;
      bVar20 = *pbVar1 >> 4;
      fVar123 = fStack_c0 - (float)(byte)(bVar7 * bVar7) * fVar115;
      fVar122 = (float)(byte)(bVar19 * bVar19) * fVar115 + local_d0;
      fVar88 = local_d0 + (float)(byte)(bVar20 * bVar20) * fVar115;
      bVar19 = pbVar2[1] >> 4;
      bVar7 = pbVar2[1] & 0xf;
      fVar89 = (float)(byte)(bVar19 * bVar19) * fVar118 + fStack_cc;
      fVar90 = local_bc - (float)(byte)(bVar7 * bVar7) * fVar118;
      bVar7 = pbVar1[1] >> 4;
      uVar126 = CONCAT44(fVar90,fVar123);
      bVar19 = pbVar2[2] >> 4;
      fVar91 = fStack_cc + (float)(byte)(bVar7 * bVar7) * fVar118;
      bVar7 = pbVar2[2] & 0xf;
      fVar92 = (float)(byte)(bVar19 * bVar19) * fVar119 + fStack_c8;
      bVar21 = pbVar1[2] >> 4;
      bVar19 = pbVar1[2] & 0xf;
      fVar93 = fStack_b8 - (float)(byte)(bVar7 * bVar7) * fVar119;
      uVar50 = (ulong)(uint)fVar93;
      bVar7 = *pbVar1 & 0xf;
      bVar20 = pbVar1[1] & 0xf;
      fVar94 = fStack_c8 + (float)(byte)(bVar21 * bVar21) * fVar119;
      fVar115 = fStack_c0 - (float)(byte)(bVar7 * bVar7) * fVar115;
      fVar118 = local_bc - (float)(byte)(bVar20 * bVar20) * fVar118;
      uVar46 = CONCAT44(fVar118,fVar115);
      fVar119 = fStack_b8 - (float)(byte)(bVar19 * bVar19) * fVar119;
      if ((local_d8[3] & 1) == 0) {
        uVar58 = NEON_fmax(uVar124,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_100,&local_160);
        fVar57 = (local_150 - local_160) * local_210;
        fVar85 = (fStack_14c - fStack_15c) * fStack_20c;
        fVar86 = (fStack_148 - fStack_158) * fStack_208;
        fVar87 = (fStack_144 - fStack_154) * fStack_204;
        fVar111 = (local_160 + local_150) * local_210;
        fVar112 = (fStack_15c + fStack_14c) * fStack_20c;
        fVar113 = (fStack_158 + fStack_148) * fStack_208;
        fVar114 = (fStack_154 + fStack_144) * fStack_204;
        auVar99._0_4_ = fVar122 - fVar57;
        auVar99._4_4_ = fVar89 - fVar85;
        auVar99._8_4_ = fVar92 - fVar86;
        auVar99._12_4_ = 0.0 - fVar87;
        auVar66._0_4_ = fVar123 + fVar57;
        auVar66._4_4_ = fVar90 + fVar85;
        auVar66._8_4_ = fVar93 + fVar86;
        auVar66._12_4_ = fVar87 + 0.0;
        auVar8._4_4_ = fVar112;
        auVar8._0_4_ = fVar111;
        auVar8._8_4_ = fVar113;
        auVar8._12_4_ = fVar114;
        auVar100 = NEON_fmax(auVar99,auVar8,4);
        auVar100 = NEON_fmin(auVar66,auVar100,4);
        fVar111 = fVar111 - auVar100._0_4_;
        fVar112 = fVar112 - auVar100._4_4_;
        fVar113 = fVar113 - auVar100._8_4_;
        fVar114 = fVar114 - auVar100._12_4_;
        auVar67._0_4_ = fVar111 * fVar111;
        auVar67._4_4_ = fVar112 * fVar112;
        auVar67._8_4_ = fVar113 * fVar113;
        auVar67._12_4_ = fVar114 * fVar114;
        auVar101 = NEON_ext(auVar67,auVar67,8,1);
        uVar59 = NEON_fmax(uVar124,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_100,&local_160);
        fVar93 = local_210 * (local_160 + local_150);
        fVar57 = fStack_20c * (fStack_15c + fStack_14c);
        fVar85 = fStack_208 * (fStack_158 + fStack_148);
        fVar86 = fStack_204 * (fStack_154 + fStack_144);
        fVar90 = local_210 * (local_150 - local_160);
        fVar123 = fStack_20c * (fStack_14c - fStack_15c);
        fVar111 = fStack_208 * (fStack_148 - fStack_158);
        fVar112 = fStack_204 * (fStack_144 - fStack_154);
        auVar102._0_4_ = fVar88 - fVar90;
        auVar102._4_4_ = fVar91 - fVar123;
        auVar102._8_4_ = fVar94 - fVar111;
        auVar102._12_4_ = 0.0 - fVar112;
        auVar68._0_4_ = fVar115 + fVar90;
        auVar68._4_4_ = fVar118 + fVar123;
        auVar68._8_4_ = fVar119 + fVar111;
        auVar68._12_4_ = fVar112 + 0.0;
        auVar9._4_4_ = fVar57;
        auVar9._0_4_ = fVar93;
        auVar9._8_4_ = fVar85;
        auVar9._12_4_ = fVar86;
        auVar100 = NEON_fmax(auVar102,auVar9,4);
        auVar100 = NEON_fmin(auVar68,auVar100,4);
        fVar93 = fVar93 - auVar100._0_4_;
        fVar57 = fVar57 - auVar100._4_4_;
        fVar85 = fVar85 - auVar100._8_4_;
        fVar86 = fVar86 - auVar100._12_4_;
        auVar69._0_4_ = fVar93 * fVar93;
        auVar69._4_4_ = fVar57 * fVar57;
        auVar69._8_4_ = fVar85 * fVar85;
        auVar69._12_4_ = fVar86 * fVar86;
        auVar100 = NEON_ext(auVar69,auVar69,8,1);
        if (auVar69._0_4_ + auVar69._4_4_ + auVar100._0_4_ <= (float)uVar59 * (float)uVar59) {
          uVar48 = *(uint *)(param_4 + 1);
          uVar53 = (ulong)uVar48;
          uVar47 = *(uint *)((long)param_4 + 0xc);
          lVar54 = *param_4;
          uVar49 = uVar48 + 1;
          if ((int)uVar48 < (int)(uVar47 & 0x3fffffff)) {
            lVar32 = lVar54;
          }
          else {
            if (0x3ffffffe < (int)uVar48) {
              FUN_032bd0a8(uVar49);
              uVar47 = *(uint *)((long)param_4 + 0xc);
            }
            uVar33 = (uVar47 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar35 = uVar49;
            if ((int)uVar49 <= (int)uVar33) {
              uVar35 = uVar33;
            }
            FUN_032bd100(uVar35,0x60,uVar47,&local_160);
            uVar47 = *(uint *)((long)param_4 + 0xc);
            lVar32 = (**(code **)(*plVar51 + 0x10))
                               (plVar51,CONCAT44(fStack_15c,local_160),&local_160);
            if (0 < (int)uVar48) {
              uVar39 = uVar53 & 3;
              if (uVar53 - 1 < 3) {
                lVar41 = 0;
              }
              else {
                lVar41 = 0;
                puVar38 = (undefined8 *)(lVar32 + 0xc0);
                puVar43 = (undefined8 *)(lVar54 + 0xc0);
                do {
                  uVar59 = puVar43[-0xd];
                  lVar41 = lVar41 + 4;
                  puVar38[-0xf] = puVar43[-0xf];
                  puVar38[-0xd] = uVar59;
                  uVar59 = puVar43[-0x11];
                  puVar38[-0x13] = puVar43[-0x13];
                  puVar38[-0x11] = uVar59;
                  uVar59 = puVar43[-0x15];
                  puVar38[-0x17] = puVar43[-0x17];
                  puVar38[-0x15] = uVar59;
                  uVar59 = puVar43[-0x18];
                  puVar38[-0x16] = puVar43[-0x16];
                  puVar38[-0x18] = uVar59;
                  uVar59 = puVar43[-0x14];
                  puVar38[-0x12] = puVar43[-0x12];
                  puVar38[-0x14] = uVar59;
                  uVar59 = puVar43[-0x10];
                  puVar38[-0xe] = puVar43[-0xe];
                  puVar38[-0x10] = uVar59;
                  uVar59 = puVar43[-1];
                  puVar38[-3] = puVar43[-3];
                  puVar38[-1] = uVar59;
                  uVar59 = puVar43[-5];
                  puVar38[-7] = puVar43[-7];
                  puVar38[-5] = uVar59;
                  uVar59 = puVar43[-9];
                  puVar38[-0xb] = puVar43[-0xb];
                  puVar38[-9] = uVar59;
                  uVar59 = puVar43[-0xc];
                  puVar38[-10] = puVar43[-10];
                  puVar38[-0xc] = uVar59;
                  uVar59 = puVar43[-8];
                  puVar38[-6] = puVar43[-6];
                  puVar38[-8] = uVar59;
                  uVar59 = puVar43[-4];
                  puVar38[-2] = puVar43[-2];
                  puVar38[-4] = uVar59;
                  uVar59 = puVar43[0xb];
                  puVar38[9] = puVar43[9];
                  puVar38[0xb] = uVar59;
                  uVar59 = puVar43[7];
                  puVar38[5] = puVar43[5];
                  puVar38[7] = uVar59;
                  uVar59 = puVar43[3];
                  puVar38[1] = puVar43[1];
                  puVar38[3] = uVar59;
                  uVar59 = *puVar43;
                  puVar38[2] = puVar43[2];
                  *puVar38 = uVar59;
                  uVar59 = puVar43[4];
                  puVar38[6] = puVar43[6];
                  puVar38[4] = uVar59;
                  uVar59 = puVar43[8];
                  puVar38[10] = puVar43[10];
                  puVar38[8] = uVar59;
                  uVar59 = puVar43[0x17];
                  puVar38[0x15] = puVar43[0x15];
                  puVar38[0x17] = uVar59;
                  uVar59 = puVar43[0x13];
                  puVar38[0x11] = puVar43[0x11];
                  puVar38[0x13] = uVar59;
                  uVar59 = puVar43[0xf];
                  puVar38[0xd] = puVar43[0xd];
                  puVar38[0xf] = uVar59;
                  uVar59 = puVar43[0xc];
                  puVar38[0xe] = puVar43[0xe];
                  puVar38[0xc] = uVar59;
                  uVar59 = puVar43[0x10];
                  puVar38[0x12] = puVar43[0x12];
                  puVar38[0x10] = uVar59;
                  uVar59 = puVar43[0x14];
                  puVar38[0x16] = puVar43[0x16];
                  puVar38[0x14] = uVar59;
                  puVar38 = puVar38 + 0x30;
                  puVar43 = puVar43 + 0x30;
                } while (uVar53 - uVar39 != lVar41);
              }
              if ((uVar48 & 3) != 0) {
                puVar38 = (undefined8 *)(lVar54 + lVar41 * 0x60);
                puVar43 = (undefined8 *)(lVar32 + lVar41 * 0x60);
                do {
                  uVar59 = puVar38[0xb];
                  uVar39 = uVar39 - 1;
                  puVar43[9] = puVar38[9];
                  puVar43[0xb] = uVar59;
                  uVar59 = puVar38[7];
                  puVar43[5] = puVar38[5];
                  puVar43[7] = uVar59;
                  uVar59 = puVar38[3];
                  puVar43[1] = puVar38[1];
                  puVar43[3] = uVar59;
                  uVar59 = *puVar38;
                  puVar43[2] = puVar38[2];
                  *puVar43 = uVar59;
                  uVar59 = puVar38[4];
                  puVar43[6] = puVar38[6];
                  puVar43[4] = uVar59;
                  uVar59 = puVar38[8];
                  puVar43[10] = puVar38[10];
                  puVar43[8] = uVar59;
                  puVar38 = puVar38 + 0xc;
                  puVar43 = puVar43 + 0xc;
                } while (uVar39 != 0);
              }
            }
            if (-1 < (int)uVar47) {
              (**(code **)(*plVar51 + 0x18))(plVar51,lVar54,((ulong)uVar47 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_15c,local_160) < 0x17ffffffa0) {
              uVar34 = (undefined4)(CONCAT44(fStack_15c,local_160) / 0x60);
            }
            else {
              uVar34 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_4 + 0xc) = uVar34;
            *param_4 = lVar32;
            uVar48 = *(uint *)(param_4 + 1);
          }
          puVar38 = (undefined8 *)(lVar32 + (long)(int)uVar48 * 0x60);
          *(uint *)(param_4 + 1) = uVar49;
          *(int *)(puVar38 + 4) = iVar5;
          *(uint *)(puVar38 + 10) = uVar52;
          puVar38[1] = (ulong)(uint)fVar94;
          *puVar38 = CONCAT44(fVar91,fVar88);
          puVar38[3] = (ulong)(uint)fVar119;
          puVar38[2] = uVar46;
          puVar38[7] = lVar55;
          puVar38[6] = lVar31;
          puVar38[9] = lVar30;
          puVar38[8] = lVar40;
        }
        if ((float)uVar58 * (float)uVar58 < auVar67._0_4_ + auVar67._4_4_ + auVar101._0_4_)
        goto LAB_00194f30;
        uVar48 = *(uint *)(param_4 + 1);
        uVar53 = (ulong)uVar48;
        uVar47 = *(uint *)((long)param_4 + 0xc);
        lVar54 = *param_4;
        uVar49 = uVar48 + 1;
        if ((int)uVar48 < (int)(uVar47 & 0x3fffffff)) {
          lVar32 = lVar54;
        }
        else {
          if (0x3ffffffe < (int)uVar48) {
            FUN_032bd0a8(uVar49);
            uVar47 = *(uint *)((long)param_4 + 0xc);
          }
          uVar33 = (uVar47 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar33) {
            uVar33 = 0x3fffffff;
          }
          uVar35 = uVar49;
          if ((int)uVar49 <= (int)uVar33) {
            uVar35 = uVar33;
          }
          FUN_032bd100(uVar35,0x60,uVar47,&local_160);
          uVar47 = *(uint *)((long)param_4 + 0xc);
          lVar32 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_15c,local_160),&local_160)
          ;
          if (0 < (int)uVar48) {
            uVar39 = uVar53 & 3;
            if (uVar53 - 1 < 3) {
              lVar41 = 0;
            }
            else {
              lVar41 = 0;
              puVar38 = (undefined8 *)(lVar32 + 0xc0);
              puVar43 = (undefined8 *)(lVar54 + 0xc0);
              do {
                uVar46 = puVar43[-0xd];
                lVar41 = lVar41 + 4;
                puVar38[-0xf] = puVar43[-0xf];
                puVar38[-0xd] = uVar46;
                uVar46 = puVar43[-0x11];
                puVar38[-0x13] = puVar43[-0x13];
                puVar38[-0x11] = uVar46;
                uVar46 = puVar43[-0x15];
                puVar38[-0x17] = puVar43[-0x17];
                puVar38[-0x15] = uVar46;
                uVar46 = puVar43[-0x18];
                puVar38[-0x16] = puVar43[-0x16];
                puVar38[-0x18] = uVar46;
                uVar46 = puVar43[-0x14];
                puVar38[-0x12] = puVar43[-0x12];
                puVar38[-0x14] = uVar46;
                uVar46 = puVar43[-0x10];
                puVar38[-0xe] = puVar43[-0xe];
                puVar38[-0x10] = uVar46;
                uVar46 = puVar43[-1];
                puVar38[-3] = puVar43[-3];
                puVar38[-1] = uVar46;
                uVar46 = puVar43[-5];
                puVar38[-7] = puVar43[-7];
                puVar38[-5] = uVar46;
                uVar46 = puVar43[-9];
                puVar38[-0xb] = puVar43[-0xb];
                puVar38[-9] = uVar46;
                uVar46 = puVar43[-0xc];
                puVar38[-10] = puVar43[-10];
                puVar38[-0xc] = uVar46;
                uVar46 = puVar43[-8];
                puVar38[-6] = puVar43[-6];
                puVar38[-8] = uVar46;
                uVar46 = puVar43[-4];
                puVar38[-2] = puVar43[-2];
                puVar38[-4] = uVar46;
                uVar46 = puVar43[0xb];
                puVar38[9] = puVar43[9];
                puVar38[0xb] = uVar46;
                uVar46 = puVar43[7];
                puVar38[5] = puVar43[5];
                puVar38[7] = uVar46;
                uVar46 = puVar43[3];
                puVar38[1] = puVar43[1];
                puVar38[3] = uVar46;
                uVar46 = *puVar43;
                puVar38[2] = puVar43[2];
                *puVar38 = uVar46;
                uVar46 = puVar43[4];
                puVar38[6] = puVar43[6];
                puVar38[4] = uVar46;
                uVar46 = puVar43[8];
                puVar38[10] = puVar43[10];
                puVar38[8] = uVar46;
                uVar46 = puVar43[0x17];
                puVar38[0x15] = puVar43[0x15];
                puVar38[0x17] = uVar46;
                uVar46 = puVar43[0x13];
                puVar38[0x11] = puVar43[0x11];
                puVar38[0x13] = uVar46;
                uVar46 = puVar43[0xf];
                puVar38[0xd] = puVar43[0xd];
                puVar38[0xf] = uVar46;
                uVar46 = puVar43[0xc];
                puVar38[0xe] = puVar43[0xe];
                puVar38[0xc] = uVar46;
                uVar46 = puVar43[0x10];
                puVar38[0x12] = puVar43[0x12];
                puVar38[0x10] = uVar46;
                uVar46 = puVar43[0x14];
                puVar38[0x16] = puVar43[0x16];
                puVar38[0x14] = uVar46;
                puVar38 = puVar38 + 0x30;
                puVar43 = puVar43 + 0x30;
              } while (uVar53 - uVar39 != lVar41);
            }
            if ((uVar48 & 3) != 0) {
              puVar38 = (undefined8 *)(lVar54 + lVar41 * 0x60);
              puVar43 = (undefined8 *)(lVar32 + lVar41 * 0x60);
              do {
                uVar46 = puVar38[0xb];
                uVar39 = uVar39 - 1;
                puVar43[9] = puVar38[9];
                puVar43[0xb] = uVar46;
                uVar46 = puVar38[7];
                puVar43[5] = puVar38[5];
                puVar43[7] = uVar46;
                uVar46 = puVar38[3];
                puVar43[1] = puVar38[1];
                puVar43[3] = uVar46;
                uVar46 = *puVar38;
                puVar43[2] = puVar38[2];
                *puVar43 = uVar46;
                uVar46 = puVar38[4];
                puVar43[6] = puVar38[6];
                puVar43[4] = uVar46;
                uVar46 = puVar38[8];
                puVar43[10] = puVar38[10];
                puVar43[8] = uVar46;
                puVar38 = puVar38 + 0xc;
                puVar43 = puVar43 + 0xc;
              } while (uVar39 != 0);
            }
          }
          if (-1 < (int)uVar47) {
            (**(code **)(*plVar51 + 0x18))(plVar51,lVar54,((ulong)uVar47 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_15c,local_160) < 0x17ffffffa0) {
            uVar34 = (undefined4)(CONCAT44(fStack_15c,local_160) / 0x60);
          }
          else {
            uVar34 = 0x3fffffff;
          }
          uVar48 = *(uint *)(param_4 + 1);
          *(undefined4 *)((long)param_4 + 0xc) = uVar34;
          *param_4 = lVar32;
        }
        puVar38 = (undefined8 *)(lVar32 + (long)(int)uVar48 * 0x60);
        *(uint *)(param_4 + 1) = uVar49;
        puVar38[1] = (ulong)(uint)fVar92;
        *puVar38 = CONCAT44(fVar89,fVar122);
        puVar38[3] = uVar50;
        puVar38[2] = uVar126;
        *(int *)(puVar38 + 4) = iVar3;
        *(uint *)(puVar38 + 10) = uVar52;
        puVar38[7] = lVar55;
        puVar38[6] = lVar31;
        puVar38[9] = lVar30;
        puVar38[8] = lVar40;
        iVar3 = (int)param_4[1];
      }
      else {
        local_140 = local_e0 + 1;
        fStack_118 = (float)lStack_e8;
        local_120 = (float)lStack_f0;
        fStack_11c = (float)((ulong)lStack_f0 >> 0x20);
        fVar57 = fVar56 * (local_120 - (float)local_100);
        fVar111 = fVar110 * (fStack_11c - local_100._4_4_);
        fVar85 = fVar84 * (fStack_118 - (float)lStack_f8);
        local_110 = local_e0 + (local_d8[3] & 0xfe);
        local_138 = (byte *)((long)param_3 + (long)(int)local_140 * 4 + *param_3);
        local_108 = (byte *)((long)param_3 + (long)local_110 * 4 + *param_3);
        bVar20 = *local_138 >> 4;
        bVar7 = *local_138 & 0xf;
        bVar21 = local_138[1] >> 4;
        bVar19 = local_138[2] >> 4;
        fStack_158 = (float)(byte)(bVar19 * bVar19) * fVar85 + (float)lStack_f8;
        bVar19 = local_138[1] & 0xf;
        fStack_154 = 0.0;
        local_160 = (float)(byte)(bVar20 * bVar20) * fVar57 + (float)local_100;
        fStack_15c = (float)(byte)(bVar21 * bVar21) * fVar111 + local_100._4_4_;
        fStack_144 = 0.0;
        bVar20 = local_138[2] & 0xf;
        bVar22 = local_108[1] >> 4;
        local_150 = local_120 - (float)(byte)(bVar7 * bVar7) * fVar57;
        bVar23 = local_108[2] >> 4;
        bVar7 = local_108[1] & 0xf;
        bVar21 = local_108[2] & 0xf;
        fStack_14c = fStack_11c - (float)(byte)(bVar19 * bVar19) * fVar111;
        bVar24 = *local_108 >> 4;
        fStack_148 = fStack_118 - (float)(byte)(bVar20 * bVar20) * fVar85;
        uStack_114 = 0;
        bVar19 = *local_108 & 0xf;
        local_130 = CONCAT44((float)(byte)(bVar22 * bVar22) * fVar111 + local_100._4_4_,
                             (float)local_100 + (float)(byte)(bVar24 * bVar24) * fVar57);
        local_120 = local_120 - (float)(byte)(bVar19 * bVar19) * fVar57;
        uStack_128 = (ulong)(uint)((float)(byte)(bVar23 * bVar23) * fVar85 + (float)lStack_f8);
        fStack_11c = fStack_11c - (float)(byte)(bVar7 * bVar7) * fVar111;
        fStack_118 = fStack_118 - (float)(byte)(bVar21 * bVar21) * fVar85;
        uVar60 = NEON_fmax(uVar95,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_160,&local_a0);
        fVar57 = (fStack_90 - local_a0) * local_210;
        fVar85 = (fStack_8c - fStack_9c) * fStack_20c;
        fVar86 = (fStack_88 - fStack_98) * fStack_208;
        fVar87 = (fStack_84 - fStack_94) * fStack_204;
        fVar111 = (local_a0 + fStack_90) * local_210;
        fVar112 = (fStack_9c + fStack_8c) * fStack_20c;
        fVar113 = (fStack_98 + fStack_88) * fStack_208;
        fVar114 = (fStack_94 + fStack_84) * fStack_204;
        auVar105._0_4_ = fVar122 - fVar57;
        auVar105._4_4_ = fVar89 - fVar85;
        auVar105._8_4_ = fVar92 - fVar86;
        auVar105._12_4_ = 0.0 - fVar87;
        auVar74._0_4_ = fVar123 + fVar57;
        auVar74._4_4_ = fVar90 + fVar85;
        auVar74._8_4_ = fVar93 + fVar86;
        auVar74._12_4_ = fVar87 + 0.0;
        auVar10._4_4_ = fVar112;
        auVar10._0_4_ = fVar111;
        auVar10._8_4_ = fVar113;
        auVar10._12_4_ = fVar114;
        auVar100 = NEON_fmax(auVar105,auVar10,4);
        auVar100 = NEON_fmin(auVar74,auVar100,4);
        fVar111 = fVar111 - auVar100._0_4_;
        fVar112 = fVar112 - auVar100._4_4_;
        fVar113 = fVar113 - auVar100._8_4_;
        fVar114 = fVar114 - auVar100._12_4_;
        auVar75._0_4_ = fVar111 * fVar111;
        auVar75._4_4_ = fVar112 * fVar112;
        auVar75._8_4_ = fVar113 * fVar113;
        auVar75._12_4_ = fVar114 * fVar114;
        auVar101 = NEON_ext(auVar75,auVar75,8,1);
        uVar61 = NEON_fmax(uVar95,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_130,&local_a0);
        fVar57 = local_210 * (fStack_90 - local_a0);
        fVar85 = fStack_20c * (fStack_8c - fStack_9c);
        fVar86 = fStack_208 * (fStack_88 - fStack_98);
        fVar87 = fStack_204 * (fStack_84 - fStack_94);
        fVar111 = local_210 * (local_a0 + fStack_90);
        fVar112 = fStack_20c * (fStack_9c + fStack_8c);
        fVar113 = fStack_208 * (fStack_98 + fStack_88);
        fVar114 = fStack_204 * (fStack_94 + fStack_84);
        auVar106._0_4_ = fVar122 - fVar57;
        auVar106._4_4_ = fVar89 - fVar85;
        auVar106._8_4_ = fVar92 - fVar86;
        auVar106._12_4_ = 0.0 - fVar87;
        auVar76._0_4_ = fVar123 + fVar57;
        auVar76._4_4_ = fVar90 + fVar85;
        auVar76._8_4_ = fVar93 + fVar86;
        auVar76._12_4_ = fVar87 + 0.0;
        auVar11._4_4_ = fVar112;
        auVar11._0_4_ = fVar111;
        auVar11._8_4_ = fVar113;
        auVar11._12_4_ = fVar114;
        auVar100 = NEON_fmax(auVar106,auVar11,4);
        auVar100 = NEON_fmin(auVar76,auVar100,4);
        fVar111 = fVar111 - auVar100._0_4_;
        fVar112 = fVar112 - auVar100._4_4_;
        fVar113 = fVar113 - auVar100._8_4_;
        fVar114 = fVar114 - auVar100._12_4_;
        auVar77._0_4_ = fVar111 * fVar111;
        auVar77._4_4_ = fVar112 * fVar112;
        auVar77._8_4_ = fVar113 * fVar113;
        auVar77._12_4_ = fVar114 * fVar114;
        auVar64 = NEON_ext(auVar77,auVar77,8,1);
        uVar62 = NEON_fmax(uVar95,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_160,&local_a0);
        fVar90 = local_210 * (fStack_90 - local_a0);
        fVar123 = fStack_20c * (fStack_8c - fStack_9c);
        fVar111 = fStack_208 * (fStack_88 - fStack_98);
        fVar112 = fStack_204 * (fStack_84 - fStack_94);
        fVar93 = local_210 * (local_a0 + fStack_90);
        fVar57 = fStack_20c * (fStack_9c + fStack_8c);
        fVar85 = fStack_208 * (fStack_98 + fStack_88);
        fVar86 = fStack_204 * (fStack_94 + fStack_84);
        auVar107._0_4_ = fVar88 - fVar90;
        auVar107._4_4_ = fVar91 - fVar123;
        auVar107._8_4_ = fVar94 - fVar111;
        auVar107._12_4_ = 0.0 - fVar112;
        auVar78._0_4_ = fVar115 + fVar90;
        auVar78._4_4_ = fVar118 + fVar123;
        auVar78._8_4_ = fVar119 + fVar111;
        auVar78._12_4_ = fVar112 + 0.0;
        auVar12._4_4_ = fVar57;
        auVar12._0_4_ = fVar93;
        auVar12._8_4_ = fVar85;
        auVar12._12_4_ = fVar86;
        auVar100 = NEON_fmax(auVar107,auVar12,4);
        auVar100 = NEON_fmin(auVar78,auVar100,4);
        fVar93 = fVar93 - auVar100._0_4_;
        fVar57 = fVar57 - auVar100._4_4_;
        fVar85 = fVar85 - auVar100._8_4_;
        fVar86 = fVar86 - auVar100._12_4_;
        auVar79._0_4_ = fVar93 * fVar93;
        auVar79._4_4_ = fVar57 * fVar57;
        auVar79._8_4_ = fVar85 * fVar85;
        auVar79._12_4_ = fVar86 * fVar86;
        auVar96 = NEON_ext(auVar79,auVar79,8,1);
        uVar63 = NEON_fmax(uVar95,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_130,&local_a0);
        iVar29 = local_110;
        uVar53 = uStack_128;
        uVar28 = local_130;
        uVar52 = local_140;
        fVar93 = local_210 * (local_a0 + fStack_90);
        fVar57 = fStack_20c * (fStack_9c + fStack_8c);
        fVar85 = fStack_208 * (fStack_98 + fStack_88);
        fVar86 = fStack_204 * (fStack_94 + fStack_84);
        fVar90 = local_210 * (fStack_90 - local_a0);
        fVar123 = fStack_20c * (fStack_8c - fStack_9c);
        fVar111 = fStack_208 * (fStack_88 - fStack_98);
        fVar112 = fStack_204 * (fStack_84 - fStack_94);
        auVar117._8_4_ = fVar119;
        auVar117._0_8_ = uVar46;
        auVar117._12_4_ = 0;
        auVar108._0_4_ = fVar88 - fVar90;
        auVar108._4_4_ = fVar91 - fVar123;
        auVar108._8_4_ = fVar94 - fVar111;
        auVar108._12_4_ = 0.0 - fVar112;
        auVar80._0_4_ = fVar115 + fVar90;
        auVar80._4_4_ = fVar118 + fVar123;
        auVar80._8_4_ = fVar119 + fVar111;
        auVar80._12_4_ = fVar112 + 0.0;
        uVar45 = CONCAT44(fStack_11c,local_120);
        auVar121._8_4_ = fStack_118;
        auVar121._0_8_ = uVar45;
        auVar121._12_4_ = uStack_114;
        auVar13._4_4_ = fVar57;
        auVar13._0_4_ = fVar93;
        auVar13._8_4_ = fVar85;
        auVar13._12_4_ = fVar86;
        auVar100 = NEON_fmax(auVar108,auVar13,4);
        auVar100 = NEON_fmin(auVar80,auVar100,4);
        fVar93 = fVar93 - auVar100._0_4_;
        fVar57 = fVar57 - auVar100._4_4_;
        fVar85 = fVar85 - auVar100._8_4_;
        fVar86 = fVar86 - auVar100._12_4_;
        auVar81._0_4_ = fVar93 * fVar93;
        auVar81._4_4_ = fVar57 * fVar57;
        auVar81._8_4_ = fVar85 * fVar85;
        auVar81._12_4_ = fVar86 * fVar86;
        auVar100 = NEON_ext(auVar81,auVar81,8,1);
        uVar44 = CONCAT44(fStack_14c,local_150);
        uVar25 = CONCAT44(fStack_144,fStack_148);
        uVar58 = CONCAT44(fStack_15c,local_160);
        uVar59 = CONCAT44(fStack_154,fStack_158);
        if (auVar81._0_4_ + auVar81._4_4_ + auVar100._0_4_ <= (float)uVar63 * (float)uVar63) {
          uVar48 = *(uint *)(param_4 + 1);
          uVar39 = (ulong)uVar48;
          uVar47 = *(uint *)((long)param_4 + 0xc);
          lVar55 = *param_4;
          uVar49 = uVar48 + 1;
          lVar31 = lVar55;
          if ((int)(uVar47 & 0x3fffffff) <= (int)uVar48) {
            if (0x3ffffffe < (int)uVar48) {
              FUN_032bd0a8(uVar49);
              uVar47 = *(uint *)((long)param_4 + 0xc);
            }
            uVar33 = (uVar47 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar35 = uVar49;
            if ((int)uVar49 <= (int)uVar33) {
              uVar35 = uVar33;
            }
            FUN_032bd100(uVar35,0x60,uVar47,&local_a0);
            uVar47 = *(uint *)((long)param_4 + 0xc);
            lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar48) {
              uVar37 = uVar39 & 3;
              if (uVar39 - 1 < 3) {
                lVar40 = 0;
              }
              else {
                lVar40 = 0;
                puVar38 = (undefined8 *)(lVar31 + 0xc0);
                puVar43 = (undefined8 *)(lVar55 + 0xc0);
                do {
                  uVar63 = puVar43[-0xd];
                  lVar40 = lVar40 + 4;
                  puVar38[-0xf] = puVar43[-0xf];
                  puVar38[-0xd] = uVar63;
                  uVar63 = puVar43[-0x11];
                  puVar38[-0x13] = puVar43[-0x13];
                  puVar38[-0x11] = uVar63;
                  uVar63 = puVar43[-0x15];
                  puVar38[-0x17] = puVar43[-0x17];
                  puVar38[-0x15] = uVar63;
                  uVar63 = puVar43[-0x18];
                  puVar38[-0x16] = puVar43[-0x16];
                  puVar38[-0x18] = uVar63;
                  uVar63 = puVar43[-0x14];
                  puVar38[-0x12] = puVar43[-0x12];
                  puVar38[-0x14] = uVar63;
                  uVar63 = puVar43[-0x10];
                  puVar38[-0xe] = puVar43[-0xe];
                  puVar38[-0x10] = uVar63;
                  uVar63 = puVar43[-1];
                  puVar38[-3] = puVar43[-3];
                  puVar38[-1] = uVar63;
                  uVar63 = puVar43[-5];
                  puVar38[-7] = puVar43[-7];
                  puVar38[-5] = uVar63;
                  uVar63 = puVar43[-9];
                  puVar38[-0xb] = puVar43[-0xb];
                  puVar38[-9] = uVar63;
                  uVar63 = puVar43[-0xc];
                  puVar38[-10] = puVar43[-10];
                  puVar38[-0xc] = uVar63;
                  uVar63 = puVar43[-8];
                  puVar38[-6] = puVar43[-6];
                  puVar38[-8] = uVar63;
                  uVar63 = puVar43[-4];
                  puVar38[-2] = puVar43[-2];
                  puVar38[-4] = uVar63;
                  uVar63 = puVar43[0xb];
                  puVar38[9] = puVar43[9];
                  puVar38[0xb] = uVar63;
                  uVar63 = puVar43[7];
                  puVar38[5] = puVar43[5];
                  puVar38[7] = uVar63;
                  uVar63 = puVar43[3];
                  puVar38[1] = puVar43[1];
                  puVar38[3] = uVar63;
                  uVar63 = *puVar43;
                  puVar38[2] = puVar43[2];
                  *puVar38 = uVar63;
                  uVar63 = puVar43[4];
                  puVar38[6] = puVar43[6];
                  puVar38[4] = uVar63;
                  uVar63 = puVar43[8];
                  puVar38[10] = puVar43[10];
                  puVar38[8] = uVar63;
                  uVar63 = puVar43[0x17];
                  puVar38[0x15] = puVar43[0x15];
                  puVar38[0x17] = uVar63;
                  uVar63 = puVar43[0x13];
                  puVar38[0x11] = puVar43[0x11];
                  puVar38[0x13] = uVar63;
                  uVar63 = puVar43[0xf];
                  puVar38[0xd] = puVar43[0xd];
                  puVar38[0xf] = uVar63;
                  uVar63 = puVar43[0xc];
                  puVar38[0xe] = puVar43[0xe];
                  puVar38[0xc] = uVar63;
                  uVar63 = puVar43[0x10];
                  puVar38[0x12] = puVar43[0x12];
                  puVar38[0x10] = uVar63;
                  uVar63 = puVar43[0x14];
                  puVar38[0x16] = puVar43[0x16];
                  puVar38[0x14] = uVar63;
                  puVar38 = puVar38 + 0x30;
                  puVar43 = puVar43 + 0x30;
                } while (uVar39 - uVar37 != lVar40);
              }
              if ((uVar48 & 3) != 0) {
                puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
                puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
                do {
                  uVar63 = puVar38[0xb];
                  uVar37 = uVar37 - 1;
                  puVar43[9] = puVar38[9];
                  puVar43[0xb] = uVar63;
                  uVar63 = puVar38[7];
                  puVar43[5] = puVar38[5];
                  puVar43[7] = uVar63;
                  uVar63 = puVar38[3];
                  puVar43[1] = puVar38[1];
                  puVar43[3] = uVar63;
                  uVar63 = *puVar38;
                  puVar43[2] = puVar38[2];
                  *puVar43 = uVar63;
                  uVar63 = puVar38[4];
                  puVar43[6] = puVar38[6];
                  puVar43[4] = uVar63;
                  uVar63 = puVar38[8];
                  puVar43[10] = puVar38[10];
                  puVar43[8] = uVar63;
                  puVar38 = puVar38 + 0xc;
                  puVar43 = puVar43 + 0xc;
                } while (uVar37 != 0);
              }
            }
            if (-1 < (int)uVar47) {
              (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar47 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar34 = 0x3fffffff;
            }
            auVar117._12_4_ = 0;
            uVar48 = *(uint *)(param_4 + 1);
            auVar121._8_8_ = auVar121._8_8_;
            *(undefined4 *)((long)param_4 + 0xc) = uVar34;
            *param_4 = lVar31;
          }
          puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar48 * 0x60);
          *(uint *)(param_4 + 1) = uVar49;
          puVar38[1] = (ulong)(uint)fVar94;
          *puVar38 = CONCAT44(fVar91,fVar88);
          puVar38[3] = auVar117._8_8_;
          puVar38[2] = auVar117._0_8_;
          *(int *)(puVar38 + 4) = iVar5;
          *(int *)(puVar38 + 10) = iVar29;
          puVar38[7] = uVar53;
          puVar38[6] = uVar28;
          puVar38[9] = auVar121._8_8_;
          puVar38[8] = auVar121._0_8_;
        }
        auVar83._4_4_ = fVar89;
        auVar83._0_4_ = fVar122;
        auVar83._8_4_ = fVar92;
        auVar83._12_4_ = 0;
        if (auVar79._0_4_ + auVar79._4_4_ + auVar96._0_4_ <= (float)uVar62 * (float)uVar62) {
          uVar48 = *(uint *)(param_4 + 1);
          uVar39 = (ulong)uVar48;
          uVar47 = *(uint *)((long)param_4 + 0xc);
          lVar55 = *param_4;
          uVar49 = uVar48 + 1;
          lVar31 = lVar55;
          if ((int)(uVar47 & 0x3fffffff) <= (int)uVar48) {
            if (0x3ffffffe < (int)uVar48) {
              FUN_032bd0a8(uVar49);
              uVar47 = *(uint *)((long)param_4 + 0xc);
            }
            uVar33 = (uVar47 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar35 = uVar49;
            if ((int)uVar49 <= (int)uVar33) {
              uVar35 = uVar33;
            }
            FUN_032bd100(uVar35,0x60,uVar47,&local_a0);
            uVar47 = *(uint *)((long)param_4 + 0xc);
            lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar48) {
              uVar37 = uVar39 & 3;
              if (uVar39 - 1 < 3) {
                lVar40 = 0;
              }
              else {
                lVar40 = 0;
                puVar38 = (undefined8 *)(lVar31 + 0xc0);
                puVar43 = (undefined8 *)(lVar55 + 0xc0);
                do {
                  uVar45 = puVar43[-0xd];
                  lVar40 = lVar40 + 4;
                  puVar38[-0xf] = puVar43[-0xf];
                  puVar38[-0xd] = uVar45;
                  uVar45 = puVar43[-0x11];
                  puVar38[-0x13] = puVar43[-0x13];
                  puVar38[-0x11] = uVar45;
                  uVar45 = puVar43[-0x15];
                  puVar38[-0x17] = puVar43[-0x17];
                  puVar38[-0x15] = uVar45;
                  uVar45 = puVar43[-0x18];
                  puVar38[-0x16] = puVar43[-0x16];
                  puVar38[-0x18] = uVar45;
                  uVar45 = puVar43[-0x14];
                  puVar38[-0x12] = puVar43[-0x12];
                  puVar38[-0x14] = uVar45;
                  uVar45 = puVar43[-0x10];
                  puVar38[-0xe] = puVar43[-0xe];
                  puVar38[-0x10] = uVar45;
                  uVar45 = puVar43[-1];
                  puVar38[-3] = puVar43[-3];
                  puVar38[-1] = uVar45;
                  uVar45 = puVar43[-5];
                  puVar38[-7] = puVar43[-7];
                  puVar38[-5] = uVar45;
                  uVar45 = puVar43[-9];
                  puVar38[-0xb] = puVar43[-0xb];
                  puVar38[-9] = uVar45;
                  uVar45 = puVar43[-0xc];
                  puVar38[-10] = puVar43[-10];
                  puVar38[-0xc] = uVar45;
                  uVar45 = puVar43[-8];
                  puVar38[-6] = puVar43[-6];
                  puVar38[-8] = uVar45;
                  uVar45 = puVar43[-4];
                  puVar38[-2] = puVar43[-2];
                  puVar38[-4] = uVar45;
                  uVar45 = puVar43[0xb];
                  puVar38[9] = puVar43[9];
                  puVar38[0xb] = uVar45;
                  uVar45 = puVar43[7];
                  puVar38[5] = puVar43[5];
                  puVar38[7] = uVar45;
                  uVar45 = puVar43[3];
                  puVar38[1] = puVar43[1];
                  puVar38[3] = uVar45;
                  uVar45 = *puVar43;
                  puVar38[2] = puVar43[2];
                  *puVar38 = uVar45;
                  uVar45 = puVar43[4];
                  puVar38[6] = puVar43[6];
                  puVar38[4] = uVar45;
                  uVar45 = puVar43[8];
                  puVar38[10] = puVar43[10];
                  puVar38[8] = uVar45;
                  uVar45 = puVar43[0x17];
                  puVar38[0x15] = puVar43[0x15];
                  puVar38[0x17] = uVar45;
                  uVar45 = puVar43[0x13];
                  puVar38[0x11] = puVar43[0x11];
                  puVar38[0x13] = uVar45;
                  uVar45 = puVar43[0xf];
                  puVar38[0xd] = puVar43[0xd];
                  puVar38[0xf] = uVar45;
                  uVar45 = puVar43[0xc];
                  puVar38[0xe] = puVar43[0xe];
                  puVar38[0xc] = uVar45;
                  uVar45 = puVar43[0x10];
                  puVar38[0x12] = puVar43[0x12];
                  puVar38[0x10] = uVar45;
                  uVar45 = puVar43[0x14];
                  puVar38[0x16] = puVar43[0x16];
                  puVar38[0x14] = uVar45;
                  puVar38 = puVar38 + 0x30;
                  puVar43 = puVar43 + 0x30;
                } while (uVar39 - uVar37 != lVar40);
              }
              if ((uVar48 & 3) != 0) {
                puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
                puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
                do {
                  uVar45 = puVar38[0xb];
                  uVar37 = uVar37 - 1;
                  puVar43[9] = puVar38[9];
                  puVar43[0xb] = uVar45;
                  uVar45 = puVar38[7];
                  puVar43[5] = puVar38[5];
                  puVar43[7] = uVar45;
                  uVar45 = puVar38[3];
                  puVar43[1] = puVar38[1];
                  puVar43[3] = uVar45;
                  uVar45 = *puVar38;
                  puVar43[2] = puVar38[2];
                  *puVar43 = uVar45;
                  uVar45 = puVar38[4];
                  puVar43[6] = puVar38[6];
                  puVar43[4] = uVar45;
                  uVar45 = puVar38[8];
                  puVar43[10] = puVar38[10];
                  puVar43[8] = uVar45;
                  puVar38 = puVar38 + 0xc;
                  puVar43 = puVar43 + 0xc;
                } while (uVar37 != 0);
              }
            }
            if (-1 < (int)uVar47) {
              (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar47 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar34 = 0x3fffffff;
            }
            auVar83._12_4_ = 0;
            uVar48 = *(uint *)(param_4 + 1);
            auVar117._12_4_ = 0;
            *(undefined4 *)((long)param_4 + 0xc) = uVar34;
            *param_4 = lVar31;
          }
          puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar48 * 0x60);
          *(uint *)(param_4 + 1) = uVar49;
          puVar38[1] = (ulong)(uint)fVar94;
          *puVar38 = CONCAT44(fVar91,fVar88);
          puVar38[3] = auVar117._8_8_;
          puVar38[2] = auVar117._0_8_;
          puVar38[7] = uVar59;
          puVar38[6] = uVar58;
          *(int *)(puVar38 + 4) = iVar5;
          *(uint *)(puVar38 + 10) = uVar52;
          puVar38[9] = uVar25;
          puVar38[8] = uVar44;
        }
        if (auVar77._0_4_ + auVar77._4_4_ + auVar64._0_4_ <= (float)uVar61 * (float)uVar61) {
          uVar48 = *(uint *)(param_4 + 1);
          uVar39 = (ulong)uVar48;
          uVar47 = *(uint *)((long)param_4 + 0xc);
          lVar55 = *param_4;
          uVar49 = uVar48 + 1;
          lVar31 = lVar55;
          if ((int)(uVar47 & 0x3fffffff) <= (int)uVar48) {
            if (0x3ffffffe < (int)uVar48) {
              FUN_032bd0a8(uVar49);
              uVar47 = *(uint *)((long)param_4 + 0xc);
            }
            uVar33 = (uVar47 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar35 = uVar49;
            if ((int)uVar49 <= (int)uVar33) {
              uVar35 = uVar33;
            }
            FUN_032bd100(uVar35,0x60,uVar47,&local_a0);
            uVar47 = *(uint *)((long)param_4 + 0xc);
            lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar48) {
              uVar37 = uVar39 & 3;
              if (uVar39 - 1 < 3) {
                lVar40 = 0;
              }
              else {
                lVar40 = 0;
                puVar38 = (undefined8 *)(lVar31 + 0xc0);
                puVar43 = (undefined8 *)(lVar55 + 0xc0);
                do {
                  uVar46 = puVar43[-0xd];
                  lVar40 = lVar40 + 4;
                  puVar38[-0xf] = puVar43[-0xf];
                  puVar38[-0xd] = uVar46;
                  uVar46 = puVar43[-0x11];
                  puVar38[-0x13] = puVar43[-0x13];
                  puVar38[-0x11] = uVar46;
                  uVar46 = puVar43[-0x15];
                  puVar38[-0x17] = puVar43[-0x17];
                  puVar38[-0x15] = uVar46;
                  uVar46 = puVar43[-0x18];
                  puVar38[-0x16] = puVar43[-0x16];
                  puVar38[-0x18] = uVar46;
                  uVar46 = puVar43[-0x14];
                  puVar38[-0x12] = puVar43[-0x12];
                  puVar38[-0x14] = uVar46;
                  uVar46 = puVar43[-0x10];
                  puVar38[-0xe] = puVar43[-0xe];
                  puVar38[-0x10] = uVar46;
                  uVar46 = puVar43[-1];
                  puVar38[-3] = puVar43[-3];
                  puVar38[-1] = uVar46;
                  uVar46 = puVar43[-5];
                  puVar38[-7] = puVar43[-7];
                  puVar38[-5] = uVar46;
                  uVar46 = puVar43[-9];
                  puVar38[-0xb] = puVar43[-0xb];
                  puVar38[-9] = uVar46;
                  uVar46 = puVar43[-0xc];
                  puVar38[-10] = puVar43[-10];
                  puVar38[-0xc] = uVar46;
                  uVar46 = puVar43[-8];
                  puVar38[-6] = puVar43[-6];
                  puVar38[-8] = uVar46;
                  uVar46 = puVar43[-4];
                  puVar38[-2] = puVar43[-2];
                  puVar38[-4] = uVar46;
                  uVar46 = puVar43[0xb];
                  puVar38[9] = puVar43[9];
                  puVar38[0xb] = uVar46;
                  uVar46 = puVar43[7];
                  puVar38[5] = puVar43[5];
                  puVar38[7] = uVar46;
                  uVar46 = puVar43[3];
                  puVar38[1] = puVar43[1];
                  puVar38[3] = uVar46;
                  uVar46 = *puVar43;
                  puVar38[2] = puVar43[2];
                  *puVar38 = uVar46;
                  uVar46 = puVar43[4];
                  puVar38[6] = puVar43[6];
                  puVar38[4] = uVar46;
                  uVar46 = puVar43[8];
                  puVar38[10] = puVar43[10];
                  puVar38[8] = uVar46;
                  uVar46 = puVar43[0x17];
                  puVar38[0x15] = puVar43[0x15];
                  puVar38[0x17] = uVar46;
                  uVar46 = puVar43[0x13];
                  puVar38[0x11] = puVar43[0x11];
                  puVar38[0x13] = uVar46;
                  uVar46 = puVar43[0xf];
                  puVar38[0xd] = puVar43[0xd];
                  puVar38[0xf] = uVar46;
                  uVar46 = puVar43[0xc];
                  puVar38[0xe] = puVar43[0xe];
                  puVar38[0xc] = uVar46;
                  uVar46 = puVar43[0x10];
                  puVar38[0x12] = puVar43[0x12];
                  puVar38[0x10] = uVar46;
                  uVar46 = puVar43[0x14];
                  puVar38[0x16] = puVar43[0x16];
                  puVar38[0x14] = uVar46;
                  puVar38 = puVar38 + 0x30;
                  puVar43 = puVar43 + 0x30;
                } while (uVar39 - uVar37 != lVar40);
              }
              if ((uVar48 & 3) != 0) {
                puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
                puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
                do {
                  uVar46 = puVar38[0xb];
                  uVar37 = uVar37 - 1;
                  puVar43[9] = puVar38[9];
                  puVar43[0xb] = uVar46;
                  uVar46 = puVar38[7];
                  puVar43[5] = puVar38[5];
                  puVar43[7] = uVar46;
                  uVar46 = puVar38[3];
                  puVar43[1] = puVar38[1];
                  puVar43[3] = uVar46;
                  uVar46 = *puVar38;
                  puVar43[2] = puVar38[2];
                  *puVar43 = uVar46;
                  uVar46 = puVar38[4];
                  puVar43[6] = puVar38[6];
                  puVar43[4] = uVar46;
                  uVar46 = puVar38[8];
                  puVar43[10] = puVar38[10];
                  puVar43[8] = uVar46;
                  puVar38 = puVar38 + 0xc;
                  puVar43 = puVar43 + 0xc;
                } while (uVar37 != 0);
              }
            }
            if (-1 < (int)uVar47) {
              (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar47 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar34 = 0x3fffffff;
            }
            auVar83._12_4_ = 0;
            uVar48 = *(uint *)(param_4 + 1);
            *(undefined4 *)((long)param_4 + 0xc) = uVar34;
            *param_4 = lVar31;
          }
          puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar48 * 0x60);
          *(uint *)(param_4 + 1) = uVar49;
          puVar38[1] = auVar83._8_8_;
          *puVar38 = auVar83._0_8_;
          puVar38[3] = uVar50;
          puVar38[2] = uVar126;
          *(int *)(puVar38 + 4) = iVar3;
          *(int *)(puVar38 + 10) = iVar29;
          puVar38[7] = uVar53;
          puVar38[6] = uVar28;
          puVar38[9] = auVar121._8_8_;
          puVar38[8] = auVar121._0_8_;
        }
        if (auVar75._0_4_ + auVar75._4_4_ + auVar101._0_4_ <= (float)uVar60 * (float)uVar60) {
          uVar48 = *(uint *)(param_4 + 1);
          uVar53 = (ulong)uVar48;
          uVar47 = *(uint *)((long)param_4 + 0xc);
          lVar55 = *param_4;
          uVar49 = uVar48 + 1;
          lVar31 = lVar55;
          if ((int)(uVar47 & 0x3fffffff) <= (int)uVar48) {
            if (0x3ffffffe < (int)uVar48) {
              FUN_032bd0a8(uVar49);
              uVar47 = *(uint *)((long)param_4 + 0xc);
            }
            uVar33 = (uVar47 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar35 = uVar49;
            if ((int)uVar49 <= (int)uVar33) {
              uVar35 = uVar33;
            }
            FUN_032bd100(uVar35,0x60,uVar47,&local_a0);
            uVar47 = *(uint *)((long)param_4 + 0xc);
            lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar48) {
              uVar39 = uVar53 & 3;
              if (uVar53 - 1 < 3) {
                lVar40 = 0;
              }
              else {
                lVar40 = 0;
                puVar38 = (undefined8 *)(lVar31 + 0xc0);
                puVar43 = (undefined8 *)(lVar55 + 0xc0);
                do {
                  uVar46 = puVar43[-0xd];
                  lVar40 = lVar40 + 4;
                  puVar38[-0xf] = puVar43[-0xf];
                  puVar38[-0xd] = uVar46;
                  uVar46 = puVar43[-0x11];
                  puVar38[-0x13] = puVar43[-0x13];
                  puVar38[-0x11] = uVar46;
                  uVar46 = puVar43[-0x15];
                  puVar38[-0x17] = puVar43[-0x17];
                  puVar38[-0x15] = uVar46;
                  uVar46 = puVar43[-0x18];
                  puVar38[-0x16] = puVar43[-0x16];
                  puVar38[-0x18] = uVar46;
                  uVar46 = puVar43[-0x14];
                  puVar38[-0x12] = puVar43[-0x12];
                  puVar38[-0x14] = uVar46;
                  uVar46 = puVar43[-0x10];
                  puVar38[-0xe] = puVar43[-0xe];
                  puVar38[-0x10] = uVar46;
                  uVar46 = puVar43[-1];
                  puVar38[-3] = puVar43[-3];
                  puVar38[-1] = uVar46;
                  uVar46 = puVar43[-5];
                  puVar38[-7] = puVar43[-7];
                  puVar38[-5] = uVar46;
                  uVar46 = puVar43[-9];
                  puVar38[-0xb] = puVar43[-0xb];
                  puVar38[-9] = uVar46;
                  uVar46 = puVar43[-0xc];
                  puVar38[-10] = puVar43[-10];
                  puVar38[-0xc] = uVar46;
                  uVar46 = puVar43[-8];
                  puVar38[-6] = puVar43[-6];
                  puVar38[-8] = uVar46;
                  uVar46 = puVar43[-4];
                  puVar38[-2] = puVar43[-2];
                  puVar38[-4] = uVar46;
                  uVar46 = puVar43[0xb];
                  puVar38[9] = puVar43[9];
                  puVar38[0xb] = uVar46;
                  uVar46 = puVar43[7];
                  puVar38[5] = puVar43[5];
                  puVar38[7] = uVar46;
                  uVar46 = puVar43[3];
                  puVar38[1] = puVar43[1];
                  puVar38[3] = uVar46;
                  uVar46 = *puVar43;
                  puVar38[2] = puVar43[2];
                  *puVar38 = uVar46;
                  uVar46 = puVar43[4];
                  puVar38[6] = puVar43[6];
                  puVar38[4] = uVar46;
                  uVar46 = puVar43[8];
                  puVar38[10] = puVar43[10];
                  puVar38[8] = uVar46;
                  uVar46 = puVar43[0x17];
                  puVar38[0x15] = puVar43[0x15];
                  puVar38[0x17] = uVar46;
                  uVar46 = puVar43[0x13];
                  puVar38[0x11] = puVar43[0x11];
                  puVar38[0x13] = uVar46;
                  uVar46 = puVar43[0xf];
                  puVar38[0xd] = puVar43[0xd];
                  puVar38[0xf] = uVar46;
                  uVar46 = puVar43[0xc];
                  puVar38[0xe] = puVar43[0xe];
                  puVar38[0xc] = uVar46;
                  uVar46 = puVar43[0x10];
                  puVar38[0x12] = puVar43[0x12];
                  puVar38[0x10] = uVar46;
                  uVar46 = puVar43[0x14];
                  puVar38[0x16] = puVar43[0x16];
                  puVar38[0x14] = uVar46;
                  puVar38 = puVar38 + 0x30;
                  puVar43 = puVar43 + 0x30;
                } while (uVar53 - uVar39 != lVar40);
              }
              if ((uVar48 & 3) != 0) {
                puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
                puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
                do {
                  uVar46 = puVar38[0xb];
                  uVar39 = uVar39 - 1;
                  puVar43[9] = puVar38[9];
                  puVar43[0xb] = uVar46;
                  uVar46 = puVar38[7];
                  puVar43[5] = puVar38[5];
                  puVar43[7] = uVar46;
                  uVar46 = puVar38[3];
                  puVar43[1] = puVar38[1];
                  puVar43[3] = uVar46;
                  uVar46 = *puVar38;
                  puVar43[2] = puVar38[2];
                  *puVar43 = uVar46;
                  uVar46 = puVar38[4];
                  puVar43[6] = puVar38[6];
                  puVar43[4] = uVar46;
                  uVar46 = puVar38[8];
                  puVar43[10] = puVar38[10];
                  puVar43[8] = uVar46;
                  puVar38 = puVar38 + 0xc;
                  puVar43 = puVar43 + 0xc;
                } while (uVar39 != 0);
              }
            }
            if (-1 < (int)uVar47) {
              (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar47 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar34 = 0x3fffffff;
            }
            auVar83._12_4_ = 0;
            *(undefined4 *)((long)param_4 + 0xc) = uVar34;
            *param_4 = lVar31;
            uVar48 = *(uint *)(param_4 + 1);
          }
          puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar48 * 0x60);
          *(uint *)(param_4 + 1) = uVar49;
          puVar38[1] = auVar83._8_8_;
          *puVar38 = auVar83._0_8_;
          puVar38[3] = uVar50;
          puVar38[2] = uVar126;
          puVar38[7] = uVar59;
          puVar38[6] = uVar58;
          *(int *)(puVar38 + 4) = iVar3;
          *(uint *)(puVar38 + 10) = uVar52;
          puVar38[9] = uVar25;
          puVar38[8] = uVar44;
        }
        iVar3 = (int)param_4[1];
      }
    }
    if (iVar3 <= (int)lVar26) {
      return;
    }
  } while( true );
  fStack_118 = (float)lStack_e8;
  local_120 = (float)lStack_f0;
  fStack_11c = (float)((ulong)lStack_f0 >> 0x20);
  local_140 = local_e0 + 1;
  local_110 = local_e0 + (local_d8[3] & 0xfe);
  fVar115 = (local_120 - (float)local_100) * fVar56;
  fVar118 = (fStack_11c - local_100._4_4_) * fVar110;
  fVar119 = (fStack_118 - (float)lStack_f8) * fVar84;
  local_138 = (byte *)((long)param_3 + (long)(int)local_140 * 4 + *param_3);
  local_108 = (byte *)((long)param_3 + (long)local_110 * 4 + *param_3);
  bVar20 = *local_138 >> 4;
  bVar7 = *local_138 & 0xf;
  bVar21 = local_138[1] >> 4;
  bVar19 = local_138[2] >> 4;
  fStack_158 = (float)(byte)(bVar19 * bVar19) * fVar119 + (float)lStack_f8;
  bVar19 = local_138[1] & 0xf;
  fStack_154 = 0.0;
  local_160 = (float)(byte)(bVar20 * bVar20) * fVar115 + (float)local_100;
  fStack_15c = (float)(byte)(bVar21 * bVar21) * fVar118 + local_100._4_4_;
  fStack_144 = 0.0;
  bVar20 = local_138[2] & 0xf;
  bVar22 = local_108[1] >> 4;
  local_150 = local_120 - (float)(byte)(bVar7 * bVar7) * fVar115;
  bVar23 = local_108[2] >> 4;
  bVar7 = local_108[1] & 0xf;
  bVar21 = local_108[2] & 0xf;
  fStack_14c = fStack_11c - (float)(byte)(bVar19 * bVar19) * fVar118;
  bVar24 = *local_108 >> 4;
  fStack_148 = fStack_118 - (float)(byte)(bVar20 * bVar20) * fVar119;
  uStack_114 = 0;
  bVar19 = *local_108 & 0xf;
  local_130 = CONCAT44((float)(byte)(bVar22 * bVar22) * fVar118 + local_100._4_4_,
                       (float)local_100 + (float)(byte)(bVar24 * bVar24) * fVar115);
  local_120 = local_120 - (float)(byte)(bVar19 * bVar19) * fVar115;
  uStack_128 = (ulong)(uint)((float)(byte)(bVar23 * bVar23) * fVar119 + (float)lStack_f8);
  fStack_11c = fStack_11c - (float)(byte)(bVar7 * bVar7) * fVar118;
  fStack_118 = fStack_118 - (float)(byte)(bVar21 * bVar21) * fVar119;
  uVar58 = NEON_fmax(uVar124,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
  FUN_0333e220(lVar4,&local_160,&local_a0);
  fVar118 = (local_a0 + fStack_90) * local_210;
  fVar88 = (fStack_9c + fStack_8c) * fStack_20c;
  fVar90 = (fStack_98 + fStack_88) * fStack_208;
  fVar92 = (fStack_94 + fStack_84) * fStack_204;
  fVar115 = (fStack_90 - local_a0) * local_210;
  fVar119 = (fStack_8c - fStack_9c) * fStack_20c;
  fVar89 = (fStack_88 - fStack_98) * fStack_208;
  fVar91 = (fStack_84 - fStack_94) * fStack_204;
  auVar103._0_4_ = local_d0 - fVar115;
  auVar103._4_4_ = fStack_cc - fVar119;
  auVar103._8_4_ = fStack_c8 - fVar89;
  auVar103._12_4_ = fStack_c4 - fVar91;
  auVar70._0_4_ = fStack_c0 + fVar115;
  auVar70._4_4_ = local_bc + fVar119;
  auVar70._8_4_ = fStack_b8 + fVar89;
  auVar70._12_4_ = fStack_b4 + fVar91;
  auVar14._4_4_ = fVar88;
  auVar14._0_4_ = fVar118;
  auVar14._8_4_ = fVar90;
  auVar14._12_4_ = fVar92;
  auVar64 = NEON_fmax(auVar103,auVar14,4);
  auVar64 = NEON_fmin(auVar70,auVar64,4);
  fVar118 = fVar118 - auVar64._0_4_;
  fVar88 = fVar88 - auVar64._4_4_;
  fVar90 = fVar90 - auVar64._8_4_;
  fVar92 = fVar92 - auVar64._12_4_;
  auVar71._0_4_ = fVar118 * fVar118;
  auVar71._4_4_ = fVar88 * fVar88;
  auVar71._8_4_ = fVar90 * fVar90;
  auVar71._12_4_ = fVar92 * fVar92;
  auVar96 = NEON_ext(auVar71,auVar71,8,1);
  uVar59 = NEON_fmax(uVar124,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
  FUN_0333e220(lVar4,&local_130,&local_a0);
  iVar3 = local_110;
  uVar50 = uStack_128;
  uVar126 = local_130;
  uVar52 = local_140;
  fVar88 = fStack_154;
  fVar119 = fStack_158;
  fVar118 = fStack_15c;
  fVar115 = local_160;
  fVar90 = local_210 * (local_a0 + fStack_90);
  fVar92 = fStack_20c * (fStack_9c + fStack_8c);
  fVar94 = fStack_208 * (fStack_98 + fStack_88);
  fVar123 = fStack_204 * (fStack_94 + fStack_84);
  fVar89 = local_210 * (fStack_90 - local_a0);
  fVar91 = fStack_20c * (fStack_8c - fStack_9c);
  fVar93 = fStack_208 * (fStack_88 - fStack_98);
  fVar122 = fStack_204 * (fStack_84 - fStack_94);
  auVar104._0_4_ = local_d0 - fVar89;
  auVar104._4_4_ = fStack_cc - fVar91;
  auVar104._8_4_ = fStack_c8 - fVar93;
  auVar104._12_4_ = fStack_c4 - fVar122;
  auVar72._0_4_ = fStack_c0 + fVar89;
  auVar72._4_4_ = local_bc + fVar91;
  auVar72._8_4_ = fStack_b8 + fVar93;
  auVar72._12_4_ = fStack_b4 + fVar122;
  auVar15._4_4_ = fVar92;
  auVar15._0_4_ = fVar90;
  auVar15._8_4_ = fVar94;
  auVar15._12_4_ = fVar123;
  auVar64 = NEON_fmax(auVar104,auVar15,4);
  auVar64 = NEON_fmin(auVar72,auVar64,4);
  fVar90 = fVar90 - auVar64._0_4_;
  fVar92 = fVar92 - auVar64._4_4_;
  fVar94 = fVar94 - auVar64._8_4_;
  fVar123 = fVar123 - auVar64._12_4_;
  auVar73._0_4_ = fVar90 * fVar90;
  auVar73._4_4_ = fVar92 * fVar92;
  auVar73._8_4_ = fVar94 * fVar94;
  auVar73._12_4_ = fVar123 * fVar123;
  auVar64 = NEON_ext(auVar73,auVar73,8,1);
  uVar46 = CONCAT44(fStack_14c,local_150);
  auVar109._8_4_ = fStack_148;
  auVar109._0_8_ = uVar46;
  auVar109._12_4_ = fStack_144;
  if (auVar73._0_4_ + auVar73._4_4_ + auVar64._0_4_ <= (float)uVar59 * (float)uVar59) {
    uVar59 = CONCAT44(fStack_11c,local_120);
    auVar82._8_4_ = fStack_118;
    auVar82._0_8_ = uVar59;
    auVar82._12_4_ = uStack_114;
    uVar47 = *(uint *)(param_4 + 1);
    uVar53 = (ulong)uVar47;
    uVar33 = *(uint *)((long)param_4 + 0xc);
    lVar55 = *param_4;
    uVar48 = uVar47 + 1;
    lVar31 = lVar55;
    if ((int)(uVar33 & 0x3fffffff) <= (int)uVar47) {
      if (0x3ffffffe < (int)uVar47) {
        FUN_032bd0a8(uVar48);
        uVar33 = *(uint *)((long)param_4 + 0xc);
      }
      uVar35 = (uVar33 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar35) {
        uVar35 = 0x3fffffff;
      }
      uVar6 = uVar48;
      if ((int)uVar48 <= (int)uVar35) {
        uVar6 = uVar35;
      }
      FUN_032bd100(uVar6,0x60,uVar33,&local_a0);
      uVar33 = *(uint *)((long)param_4 + 0xc);
      lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
      if (0 < (int)uVar47) {
        uVar39 = uVar53 & 3;
        if (uVar53 - 1 < 3) {
          lVar40 = 0;
        }
        else {
          lVar40 = 0;
          puVar38 = (undefined8 *)(lVar31 + 0xc0);
          puVar43 = (undefined8 *)(lVar55 + 0xc0);
          do {
            uVar44 = puVar43[-0xd];
            lVar40 = lVar40 + 4;
            puVar38[-0xf] = puVar43[-0xf];
            puVar38[-0xd] = uVar44;
            uVar44 = puVar43[-0x11];
            puVar38[-0x13] = puVar43[-0x13];
            puVar38[-0x11] = uVar44;
            uVar44 = puVar43[-0x15];
            puVar38[-0x17] = puVar43[-0x17];
            puVar38[-0x15] = uVar44;
            uVar44 = puVar43[-0x18];
            puVar38[-0x16] = puVar43[-0x16];
            puVar38[-0x18] = uVar44;
            uVar44 = puVar43[-0x14];
            puVar38[-0x12] = puVar43[-0x12];
            puVar38[-0x14] = uVar44;
            uVar44 = puVar43[-0x10];
            puVar38[-0xe] = puVar43[-0xe];
            puVar38[-0x10] = uVar44;
            uVar44 = puVar43[-1];
            puVar38[-3] = puVar43[-3];
            puVar38[-1] = uVar44;
            uVar44 = puVar43[-5];
            puVar38[-7] = puVar43[-7];
            puVar38[-5] = uVar44;
            uVar44 = puVar43[-9];
            puVar38[-0xb] = puVar43[-0xb];
            puVar38[-9] = uVar44;
            uVar44 = puVar43[-0xc];
            puVar38[-10] = puVar43[-10];
            puVar38[-0xc] = uVar44;
            uVar44 = puVar43[-8];
            puVar38[-6] = puVar43[-6];
            puVar38[-8] = uVar44;
            uVar44 = puVar43[-4];
            puVar38[-2] = puVar43[-2];
            puVar38[-4] = uVar44;
            uVar44 = puVar43[0xb];
            puVar38[9] = puVar43[9];
            puVar38[0xb] = uVar44;
            uVar44 = puVar43[7];
            puVar38[5] = puVar43[5];
            puVar38[7] = uVar44;
            uVar44 = puVar43[3];
            puVar38[1] = puVar43[1];
            puVar38[3] = uVar44;
            uVar44 = *puVar43;
            puVar38[2] = puVar43[2];
            *puVar38 = uVar44;
            uVar44 = puVar43[4];
            puVar38[6] = puVar43[6];
            puVar38[4] = uVar44;
            uVar44 = puVar43[8];
            puVar38[10] = puVar43[10];
            puVar38[8] = uVar44;
            uVar44 = puVar43[0x17];
            puVar38[0x15] = puVar43[0x15];
            puVar38[0x17] = uVar44;
            uVar44 = puVar43[0x13];
            puVar38[0x11] = puVar43[0x11];
            puVar38[0x13] = uVar44;
            uVar44 = puVar43[0xf];
            puVar38[0xd] = puVar43[0xd];
            puVar38[0xf] = uVar44;
            uVar44 = puVar43[0xc];
            puVar38[0xe] = puVar43[0xe];
            puVar38[0xc] = uVar44;
            uVar44 = puVar43[0x10];
            puVar38[0x12] = puVar43[0x12];
            puVar38[0x10] = uVar44;
            uVar44 = puVar43[0x14];
            puVar38[0x16] = puVar43[0x16];
            puVar38[0x14] = uVar44;
            puVar38 = puVar38 + 0x30;
            puVar43 = puVar43 + 0x30;
          } while (uVar53 - uVar39 != lVar40);
        }
        if ((uVar47 & 3) != 0) {
          puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
          puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
          do {
            uVar44 = puVar38[0xb];
            uVar39 = uVar39 - 1;
            puVar43[9] = puVar38[9];
            puVar43[0xb] = uVar44;
            uVar44 = puVar38[7];
            puVar43[5] = puVar38[5];
            puVar43[7] = uVar44;
            uVar44 = puVar38[3];
            puVar43[1] = puVar38[1];
            puVar43[3] = uVar44;
            uVar44 = *puVar38;
            puVar43[2] = puVar38[2];
            *puVar43 = uVar44;
            uVar44 = puVar38[4];
            puVar43[6] = puVar38[6];
            puVar43[4] = uVar44;
            uVar44 = puVar38[8];
            puVar43[10] = puVar38[10];
            puVar43[8] = uVar44;
            puVar38 = puVar38 + 0xc;
            puVar43 = puVar43 + 0xc;
          } while (uVar39 != 0);
        }
      }
      if (-1 < (int)uVar33) {
        (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar33 & 0x3fffffff) * 0x60);
      }
      if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
        uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
      }
      else {
        uVar34 = 0x3fffffff;
      }
      auVar82._8_8_ = auVar82._8_8_;
      uVar47 = *(uint *)(param_4 + 1);
      auVar109._8_8_ = auVar109._8_8_;
      *(undefined4 *)((long)param_4 + 0xc) = uVar34;
      *param_4 = lVar31;
    }
    puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar47 * 0x60);
    *(uint *)(param_4 + 1) = uVar48;
    puVar38[1] = auVar100._8_8_;
    *puVar38 = auVar100._0_8_;
    puVar38[3] = auVar101._8_8_;
    puVar38[2] = auVar101._0_8_;
    *(uint *)(puVar38 + 4) = uVar49;
    *(int *)(puVar38 + 10) = iVar3;
    puVar38[7] = uVar50;
    puVar38[6] = uVar126;
    puVar38[9] = auVar82._8_8_;
    puVar38[8] = auVar82._0_8_;
  }
  if (auVar71._0_4_ + auVar71._4_4_ + auVar96._0_4_ <= (float)uVar58 * (float)uVar58) {
    uVar47 = *(uint *)(param_4 + 1);
    uVar50 = (ulong)uVar47;
    uVar33 = *(uint *)((long)param_4 + 0xc);
    lVar55 = *param_4;
    uVar48 = uVar47 + 1;
    lVar31 = lVar55;
    if ((int)(uVar33 & 0x3fffffff) <= (int)uVar47) {
      if (0x3ffffffe < (int)uVar47) {
        FUN_032bd0a8(uVar48);
        uVar33 = *(uint *)((long)param_4 + 0xc);
      }
      uVar35 = (uVar33 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar35) {
        uVar35 = 0x3fffffff;
      }
      uVar6 = uVar48;
      if ((int)uVar48 <= (int)uVar35) {
        uVar6 = uVar35;
      }
      FUN_032bd100(uVar6,0x60,uVar33,&local_a0);
      uVar33 = *(uint *)((long)param_4 + 0xc);
      lVar31 = (**(code **)(*plVar51 + 0x10))(plVar51,CONCAT44(fStack_9c,local_a0),&local_a0);
      if (0 < (int)uVar47) {
        uVar53 = uVar50 & 3;
        if (uVar50 - 1 < 3) {
          lVar40 = 0;
        }
        else {
          lVar40 = 0;
          puVar38 = (undefined8 *)(lVar31 + 0xc0);
          puVar43 = (undefined8 *)(lVar55 + 0xc0);
          do {
            uVar46 = puVar43[-0xd];
            lVar40 = lVar40 + 4;
            puVar38[-0xf] = puVar43[-0xf];
            puVar38[-0xd] = uVar46;
            uVar46 = puVar43[-0x11];
            puVar38[-0x13] = puVar43[-0x13];
            puVar38[-0x11] = uVar46;
            uVar46 = puVar43[-0x15];
            puVar38[-0x17] = puVar43[-0x17];
            puVar38[-0x15] = uVar46;
            uVar46 = puVar43[-0x18];
            puVar38[-0x16] = puVar43[-0x16];
            puVar38[-0x18] = uVar46;
            uVar46 = puVar43[-0x14];
            puVar38[-0x12] = puVar43[-0x12];
            puVar38[-0x14] = uVar46;
            uVar46 = puVar43[-0x10];
            puVar38[-0xe] = puVar43[-0xe];
            puVar38[-0x10] = uVar46;
            uVar46 = puVar43[-1];
            puVar38[-3] = puVar43[-3];
            puVar38[-1] = uVar46;
            uVar46 = puVar43[-5];
            puVar38[-7] = puVar43[-7];
            puVar38[-5] = uVar46;
            uVar46 = puVar43[-9];
            puVar38[-0xb] = puVar43[-0xb];
            puVar38[-9] = uVar46;
            uVar46 = puVar43[-0xc];
            puVar38[-10] = puVar43[-10];
            puVar38[-0xc] = uVar46;
            uVar46 = puVar43[-8];
            puVar38[-6] = puVar43[-6];
            puVar38[-8] = uVar46;
            uVar46 = puVar43[-4];
            puVar38[-2] = puVar43[-2];
            puVar38[-4] = uVar46;
            uVar46 = puVar43[0xb];
            puVar38[9] = puVar43[9];
            puVar38[0xb] = uVar46;
            uVar46 = puVar43[7];
            puVar38[5] = puVar43[5];
            puVar38[7] = uVar46;
            uVar46 = puVar43[3];
            puVar38[1] = puVar43[1];
            puVar38[3] = uVar46;
            uVar46 = *puVar43;
            puVar38[2] = puVar43[2];
            *puVar38 = uVar46;
            uVar46 = puVar43[4];
            puVar38[6] = puVar43[6];
            puVar38[4] = uVar46;
            uVar46 = puVar43[8];
            puVar38[10] = puVar43[10];
            puVar38[8] = uVar46;
            uVar46 = puVar43[0x17];
            puVar38[0x15] = puVar43[0x15];
            puVar38[0x17] = uVar46;
            uVar46 = puVar43[0x13];
            puVar38[0x11] = puVar43[0x11];
            puVar38[0x13] = uVar46;
            uVar46 = puVar43[0xf];
            puVar38[0xd] = puVar43[0xd];
            puVar38[0xf] = uVar46;
            uVar46 = puVar43[0xc];
            puVar38[0xe] = puVar43[0xe];
            puVar38[0xc] = uVar46;
            uVar46 = puVar43[0x10];
            puVar38[0x12] = puVar43[0x12];
            puVar38[0x10] = uVar46;
            uVar46 = puVar43[0x14];
            puVar38[0x16] = puVar43[0x16];
            puVar38[0x14] = uVar46;
            puVar38 = puVar38 + 0x30;
            puVar43 = puVar43 + 0x30;
          } while (uVar50 - uVar53 != lVar40);
        }
        if ((uVar47 & 3) != 0) {
          puVar38 = (undefined8 *)(lVar55 + lVar40 * 0x60);
          puVar43 = (undefined8 *)(lVar31 + lVar40 * 0x60);
          do {
            uVar46 = puVar38[0xb];
            uVar53 = uVar53 - 1;
            puVar43[9] = puVar38[9];
            puVar43[0xb] = uVar46;
            uVar46 = puVar38[7];
            puVar43[5] = puVar38[5];
            puVar43[7] = uVar46;
            uVar46 = puVar38[3];
            puVar43[1] = puVar38[1];
            puVar43[3] = uVar46;
            uVar46 = *puVar38;
            puVar43[2] = puVar38[2];
            *puVar43 = uVar46;
            uVar46 = puVar38[4];
            puVar43[6] = puVar38[6];
            puVar43[4] = uVar46;
            uVar46 = puVar38[8];
            puVar43[10] = puVar38[10];
            puVar43[8] = uVar46;
            puVar38 = puVar38 + 0xc;
            puVar43 = puVar43 + 0xc;
          } while (uVar53 != 0);
        }
      }
      if (-1 < (int)uVar33) {
        (**(code **)(*plVar51 + 0x18))(plVar51,lVar55,((ulong)uVar33 & 0x3fffffff) * 0x60);
      }
      if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
        uVar34 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
      }
      else {
        uVar34 = 0x3fffffff;
      }
      uVar47 = *(uint *)(param_4 + 1);
      *(undefined4 *)((long)param_4 + 0xc) = uVar34;
      *param_4 = lVar31;
    }
    puVar38 = (undefined8 *)(lVar31 + (long)(int)uVar47 * 0x60);
    *(uint *)(param_4 + 1) = uVar48;
    puVar38[1] = auVar100._8_8_;
    *puVar38 = auVar100._0_8_;
    puVar38[3] = auVar101._8_8_;
    puVar38[2] = auVar101._0_8_;
    *(uint *)(puVar38 + 4) = uVar49;
    *(uint *)(puVar38 + 10) = uVar52;
    puVar38[7] = CONCAT44(fVar88,fVar119);
    puVar38[6] = CONCAT44(fVar118,fVar115);
    puVar38[9] = auVar109._8_8_;
    puVar38[8] = auVar109._0_8_;
  }
  goto LAB_00194f30;
}


