/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0019a9cc; name: FUN_0019a9cc
 */


void FUN_0019a9cc(uint param_1,long *param_2,long *param_3,long *param_4,long param_5,long *param_6,
                 long *param_7)

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
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long lVar25;
  undefined *puVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  long *plVar36;
  long lVar37;
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  long *plVar43;
  uint uVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar79;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar76;
  float fVar81;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 uVar50;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar51;
  float fVar77;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar52;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar53;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar54;
  float fVar78;
  float fVar80;
  float fVar82;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar83;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
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
  undefined1 auVar122 [16];
  float fVar123;
  float fVar124;
  undefined8 uVar125;
  float fVar126;
  float fVar128;
  float fVar129;
  undefined1 auVar127 [16];
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1a4;
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
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  int local_110;
  byte *local_108;
  long local_100;
  long lStack_f8;
  float fStack_f0;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  uint local_e0;
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
  
  puVar26 = PTR_DAT_04372370;
  if ((int)param_2[1] == 0 || (int)param_3[1] == 0) {
    return;
  }
  lVar25 = param_4[1];
  if (param_6 == (long *)0x0) {
    uVar42 = 0;
    lStack_c8 = param_2[3];
    fVar119 = (float)lStack_c8;
    fVar84 = (float)((ulong)lStack_c8 >> 0x20);
    local_d0 = param_2[2];
    fVar115 = (float)local_d0;
    fVar118 = (float)((ulong)local_d0 >> 0x20);
    auVar94 = *(undefined1 (*) [16])(param_2 + 4);
    local_a8 = (byte *)(*param_2 + (long)param_2);
    local_b0 = 0;
    fStack_b8 = auVar94._8_4_;
    fStack_b4 = auVar94._12_4_;
    fStack_c0 = auVar94._0_4_;
    local_bc = auVar94._4_4_;
  }
  else {
    lStack_c8 = param_6[1];
    fVar119 = (float)lStack_c8;
    fVar84 = (float)((ulong)lStack_c8 >> 0x20);
    local_d0 = *param_6;
    fVar115 = (float)local_d0;
    fVar118 = (float)((ulong)local_d0 >> 0x20);
    auVar94 = *(undefined1 (*) [16])(param_6 + 2);
    local_b0 = *(uint *)(param_6 + 4);
    uVar42 = (ulong)local_b0;
    local_a8 = (byte *)param_6[5];
    fStack_b8 = auVar94._8_4_;
    fStack_b4 = auVar94._12_4_;
    fStack_c0 = auVar94._0_4_;
    local_bc = auVar94._4_4_;
  }
  if (param_7 == (long *)0x0) {
    uVar45 = 0;
    lStack_f8 = param_3[3];
    local_100 = param_3[2];
    lVar46 = param_3[5];
    lVar47 = param_3[4];
    local_d8 = (byte *)(*param_3 + (long)param_3);
  }
  else {
    lStack_f8 = param_7[1];
    local_100 = *param_7;
    lVar46 = param_7[3];
    lVar47 = param_7[2];
    uVar45 = (ulong)*(uint *)(param_7 + 4);
    local_d8 = (byte *)param_7[5];
  }
  local_e0 = (uint)uVar45;
  fStack_e8 = (float)lVar46;
  fStack_e4 = (float)((ulong)lVar46 >> 0x20);
  fStack_f0 = (float)lVar47;
  local_ec = (float)((ulong)lVar47 >> 0x20);
  uVar22 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
  if ((param_1 & 1) == 0) {
    lVar47 = *(long *)(param_5 + 0x150);
    uVar125 = NEON_fmax(uVar22,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    fVar126 = *(float *)(lVar47 + 0x40);
    fVar128 = *(float *)(lVar47 + 0x44);
    fVar129 = *(float *)(lVar47 + 0x48);
    fVar83 = *(float *)(lVar47 + 0x4c);
    FUN_0333e220(param_5 + 0x1b0,&local_100,&local_160);
    auVar55 = *(undefined1 (*) [16])(puVar26 + 0x150);
    auVar90 = NEON_ext(auVar55,auVar55,8,1);
    auVar55 = NEON_ext(auVar90,auVar55,8,1);
    fVar86 = (local_150 - local_160) * auVar55._0_4_;
    fVar48 = (fStack_14c - fStack_15c) * auVar55._4_4_;
    fVar77 = (fStack_148 - fStack_158) * auVar55._8_4_;
    fVar87 = (fStack_144 - fStack_154) * auVar55._12_4_;
    fVar89 = (local_160 + local_150) * auVar55._0_4_;
    fVar104 = (fStack_15c + fStack_14c) * auVar55._4_4_;
    fVar85 = (fStack_158 + fStack_148) * auVar55._8_4_;
    fVar88 = (fStack_154 + fStack_144) * auVar55._12_4_;
    uStack_218 = auVar55._8_8_;
    local_220 = auVar55._0_8_;
    auVar91._0_4_ = fVar115 * fVar126 - fVar86;
    auVar91._4_4_ = fVar118 * fVar128 - fVar48;
    auVar91._8_4_ = fVar119 * fVar129 - fVar77;
    auVar91._12_4_ = fVar84 * fVar83 - fVar87;
    auVar90._0_4_ = auVar94._0_4_ * fVar126 + fVar86;
    auVar90._4_4_ = auVar94._4_4_ * fVar128 + fVar48;
    auVar90._8_4_ = auVar94._8_4_ * fVar129 + fVar77;
    auVar90._12_4_ = auVar94._12_4_ * fVar83 + fVar87;
    auVar55._4_4_ = fVar104;
    auVar55._0_4_ = fVar89;
    auVar55._8_4_ = fVar85;
    auVar55._12_4_ = fVar88;
    auVar94 = NEON_fmax(auVar91,auVar55,4);
    auVar94 = NEON_fmin(auVar90,auVar94,4);
    fVar89 = fVar89 - auVar94._0_4_;
    fVar104 = fVar104 - auVar94._4_4_;
    fVar85 = fVar85 - auVar94._8_4_;
    fVar88 = fVar88 - auVar94._12_4_;
    auVar127._0_4_ = fVar89 * fVar89;
    auVar127._4_4_ = fVar104 * fVar104;
    auVar127._8_4_ = fVar85 * fVar85;
    auVar127._12_4_ = fVar88 * fVar88;
    auVar94 = NEON_ext(auVar127,auVar127,8,1);
    if ((float)uVar125 * (float)uVar125 < auVar127._0_4_ + auVar127._4_4_ + auVar94._0_4_) {
      return;
    }
    fVar119 = (float)lStack_c8;
    fVar84 = (float)((ulong)lStack_c8 >> 0x20);
    fVar115 = (float)local_d0;
    fVar118 = (float)((ulong)local_d0 >> 0x20);
    auVar94._4_4_ = local_bc;
    auVar94._0_4_ = fStack_c0;
    auVar94._8_4_ = fStack_b8;
    auVar94._12_4_ = fStack_b4;
    uVar42 = (ulong)local_b0;
    uVar45 = (ulong)local_e0;
    lVar46 = CONCAT44(fStack_e4,fStack_e8);
    lVar47 = CONCAT44(local_ec,fStack_f0);
  }
  else {
    auVar55 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
    auVar90 = NEON_ext(auVar55,auVar55,8,1);
    auVar55 = NEON_ext(auVar90,auVar55,8,1);
    uStack_218 = auVar55._8_8_;
    local_220 = auVar55._0_8_;
  }
  uVar44 = (uint)uVar45;
  auVar55 = *(undefined1 (*) [16])(puVar26 + 0x1e0);
  auVar90 = NEON_ext(auVar55,auVar55,8,1);
  uVar125 = *(undefined8 *)(puVar26 + 0x50);
  plVar43 = *(long **)PTR_PTR_04372408;
  auVar127 = NEON_ext(auVar90,auVar55,8,1);
  auVar55 = *(undefined1 (*) [16])(puVar26 + 0x150);
  lVar4 = param_5 + 0x1b0;
  auVar90 = NEON_ext(auVar55,auVar55,8,1);
  auVar55 = NEON_ext(auVar90,auVar55,8,1);
  local_230 = auVar55._0_4_;
  fStack_22c = auVar55._4_4_;
  fStack_228 = auVar55._8_4_;
  fStack_224 = auVar55._12_4_;
  fVar126 = auVar127._0_4_;
  fVar128 = auVar127._4_4_;
  fVar129 = auVar127._8_4_;
  uVar41 = (uint)uVar42;
  if ((param_1 & 1) == 0) goto LAB_0019b538;
LAB_0019abb4:
  uVar41 = (uint)uVar42;
  uVar44 = (uint)uVar45;
  if (local_a8 != local_d8) {
    bVar7 = local_a8[3];
    lVar37 = local_100;
    goto joined_r0x0019abc8;
  }
  while ((local_a8[3] & 1) != 0) {
    uVar44 = local_b0 + 1;
    iVar3 = local_b0 + (local_a8[3] & 0xfe);
    fVar115 = (fStack_c0 - (float)local_d0) * fVar126;
    fVar119 = (local_bc - local_d0._4_4_) * fVar128;
    fVar118 = (fStack_b8 - (float)lStack_c8) * fVar129;
    local_138 = (byte *)((long)param_2 + (long)(int)uVar44 * 4 + *param_2);
    local_108 = (byte *)((long)param_2 + (long)iVar3 * 4 + *param_2);
    bVar17 = local_138[2] >> 4;
    bVar18 = *local_138 >> 4;
    bVar19 = local_138[1] >> 4;
    bVar7 = local_138[1] & 0xf;
    bVar20 = *local_108 >> 4;
    fVar48 = (float)(byte)(bVar19 * bVar19) * fVar119 + local_d0._4_4_;
    fVar104 = (float)(byte)(bVar17 * bVar17) * fVar118 + (float)lStack_c8;
    fStack_154 = 0.0;
    fVar89 = (float)(byte)(bVar18 * bVar18) * fVar115 + (float)local_d0;
    bVar21 = local_108[1] >> 4;
    bVar17 = *local_138 & 0xf;
    fVar86 = (float)local_d0 + (float)(byte)(bVar20 * bVar20) * fVar115;
    fStack_144 = 0.0;
    bVar20 = local_108[2] >> 4;
    bVar18 = local_108[2] & 0xf;
    bVar19 = local_138[2] & 0xf;
    fVar84 = (float)(byte)(bVar21 * bVar21) * fVar119 + local_d0._4_4_;
    fVar87 = fStack_c0 - (float)(byte)(bVar17 * bVar17) * fVar115;
    bVar17 = local_108[1] & 0xf;
    fVar77 = local_bc - (float)(byte)(bVar7 * bVar7) * fVar119;
    fVar85 = fStack_b8 - (float)(byte)(bVar19 * bVar19) * fVar118;
    fStack_128 = (float)(byte)(bVar20 * bVar20) * fVar118 + (float)lStack_c8;
    uStack_114 = 0;
    bVar7 = *local_108 & 0xf;
    uStack_124 = 0;
    fVar118 = fStack_b8 - (float)(byte)(bVar18 * bVar18) * fVar118;
    fVar83 = fStack_c0 - (float)(byte)(bVar7 * bVar7) * fVar115;
    fVar115 = local_bc - (float)(byte)(bVar17 * bVar17) * fVar119;
    uVar45 = (ulong)(uint)fStack_128;
    lVar46 = *param_4;
    uVar39 = *(uint *)(param_4 + 1);
    uVar42 = (ulong)uVar39;
    uVar40 = *(uint *)((long)param_4 + 0xc);
    uVar41 = uVar39 + 1;
    lVar47 = lVar46;
    local_160 = fVar89;
    fStack_15c = fVar48;
    fStack_158 = fVar104;
    local_150 = fVar87;
    fStack_14c = fVar77;
    fStack_148 = fVar85;
    local_140 = uVar44;
    local_130 = fVar86;
    fStack_12c = fVar84;
    local_120 = fVar83;
    fStack_11c = fVar115;
    fStack_118 = fVar118;
    local_110 = iVar3;
    if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
      if (0x3ffffffe < (int)uVar39) {
        FUN_032bd0a8(uVar41);
        uVar40 = *(uint *)((long)param_4 + 0xc);
      }
      uVar29 = (uVar40 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar29) {
        uVar29 = 0x3fffffff;
      }
      uVar31 = uVar41;
      if ((int)uVar41 <= (int)uVar29) {
        uVar31 = uVar29;
      }
      FUN_032bd100(uVar31,0x60,uVar40,&local_a0);
      uVar40 = *(uint *)((long)param_4 + 0xc);
      lVar47 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
      if (0 < (int)uVar39) {
        uVar33 = uVar42 & 3;
        if (uVar42 - 1 < 3) {
          lVar37 = 0;
        }
        else {
          lVar37 = 0;
          puVar34 = (undefined8 *)(lVar47 + 0xc0);
          puVar38 = (undefined8 *)(lVar46 + 0xc0);
          do {
            uVar49 = puVar38[-0xd];
            lVar37 = lVar37 + 4;
            puVar34[-0xf] = puVar38[-0xf];
            puVar34[-0xd] = uVar49;
            uVar49 = puVar38[-0x11];
            puVar34[-0x13] = puVar38[-0x13];
            puVar34[-0x11] = uVar49;
            uVar49 = puVar38[-0x15];
            puVar34[-0x17] = puVar38[-0x17];
            puVar34[-0x15] = uVar49;
            uVar49 = puVar38[-0x18];
            puVar34[-0x16] = puVar38[-0x16];
            puVar34[-0x18] = uVar49;
            uVar49 = puVar38[-0x14];
            puVar34[-0x12] = puVar38[-0x12];
            puVar34[-0x14] = uVar49;
            uVar49 = puVar38[-0x10];
            puVar34[-0xe] = puVar38[-0xe];
            puVar34[-0x10] = uVar49;
            uVar49 = puVar38[-1];
            puVar34[-3] = puVar38[-3];
            puVar34[-1] = uVar49;
            uVar49 = puVar38[-5];
            puVar34[-7] = puVar38[-7];
            puVar34[-5] = uVar49;
            uVar49 = puVar38[-9];
            puVar34[-0xb] = puVar38[-0xb];
            puVar34[-9] = uVar49;
            uVar49 = puVar38[-0xc];
            puVar34[-10] = puVar38[-10];
            puVar34[-0xc] = uVar49;
            uVar49 = puVar38[-8];
            puVar34[-6] = puVar38[-6];
            puVar34[-8] = uVar49;
            uVar49 = puVar38[-4];
            puVar34[-2] = puVar38[-2];
            puVar34[-4] = uVar49;
            uVar49 = puVar38[0xb];
            puVar34[9] = puVar38[9];
            puVar34[0xb] = uVar49;
            uVar49 = puVar38[7];
            puVar34[5] = puVar38[5];
            puVar34[7] = uVar49;
            uVar49 = puVar38[3];
            puVar34[1] = puVar38[1];
            puVar34[3] = uVar49;
            uVar49 = *puVar38;
            puVar34[2] = puVar38[2];
            *puVar34 = uVar49;
            uVar49 = puVar38[4];
            puVar34[6] = puVar38[6];
            puVar34[4] = uVar49;
            uVar49 = puVar38[8];
            puVar34[10] = puVar38[10];
            puVar34[8] = uVar49;
            uVar49 = puVar38[0x17];
            puVar34[0x15] = puVar38[0x15];
            puVar34[0x17] = uVar49;
            uVar49 = puVar38[0x13];
            puVar34[0x11] = puVar38[0x11];
            puVar34[0x13] = uVar49;
            uVar49 = puVar38[0xf];
            puVar34[0xd] = puVar38[0xd];
            puVar34[0xf] = uVar49;
            uVar49 = puVar38[0xc];
            puVar34[0xe] = puVar38[0xe];
            puVar34[0xc] = uVar49;
            uVar49 = puVar38[0x10];
            puVar34[0x12] = puVar38[0x12];
            puVar34[0x10] = uVar49;
            uVar49 = puVar38[0x14];
            puVar34[0x16] = puVar38[0x16];
            puVar34[0x14] = uVar49;
            puVar34 = puVar34 + 0x30;
            puVar38 = puVar38 + 0x30;
          } while (uVar42 - uVar33 != lVar37);
        }
        if ((uVar39 & 3) != 0) {
          puVar34 = (undefined8 *)(lVar46 + lVar37 * 0x60);
          puVar38 = (undefined8 *)(lVar47 + lVar37 * 0x60);
          do {
            uVar49 = puVar34[0xb];
            uVar33 = uVar33 - 1;
            puVar38[9] = puVar34[9];
            puVar38[0xb] = uVar49;
            uVar49 = puVar34[7];
            puVar38[5] = puVar34[5];
            puVar38[7] = uVar49;
            uVar49 = puVar34[3];
            puVar38[1] = puVar34[1];
            puVar38[3] = uVar49;
            uVar49 = *puVar34;
            puVar38[2] = puVar34[2];
            *puVar38 = uVar49;
            uVar49 = puVar34[4];
            puVar38[6] = puVar34[6];
            puVar38[4] = uVar49;
            uVar49 = puVar34[8];
            puVar38[10] = puVar34[10];
            puVar38[8] = uVar49;
            puVar34 = puVar34 + 0xc;
            puVar38 = puVar38 + 0xc;
          } while (uVar33 != 0);
        }
      }
      if (-1 < (int)uVar40) {
        (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar40 & 0x3fffffff) * 0x60);
      }
      if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
        uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
      }
      else {
        uVar30 = 0x3fffffff;
      }
      uVar39 = *(uint *)(param_4 + 1);
      *(undefined4 *)((long)param_4 + 0xc) = uVar30;
      *param_4 = lVar47;
    }
    *(uint *)(param_4 + 1) = uVar41;
    puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar39 * 0x60);
    *(int *)(puVar34 + 4) = iVar3;
    *(int *)(puVar34 + 10) = iVar3;
    puVar34[1] = uVar45;
    *puVar34 = CONCAT44(fVar84,fVar86);
    puVar34[3] = (ulong)(uint)fVar118;
    puVar34[2] = CONCAT44(fVar115,fVar83);
    puVar34[7] = uVar45;
    puVar34[6] = CONCAT44(fVar84,fVar86);
    puVar34[9] = (ulong)(uint)fVar118;
    puVar34[8] = CONCAT44(fVar115,fVar83);
    auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
    uVar49 = NEON_fmax(uVar22,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
    fVar108 = local_160 * auVar94._0_4_;
    fVar80 = fStack_15c * auVar94._4_4_;
    fVar111 = fStack_158 * auVar94._8_4_;
    fVar82 = fStack_154 * auVar94._12_4_;
    fVar119 = local_150 * auVar94._0_4_;
    fVar124 = fStack_14c * auVar94._4_4_;
    fVar79 = fStack_148 * auVar94._8_4_;
    fVar112 = fStack_144 * auVar94._12_4_;
    FUN_0333e220(lVar4,&local_130,&local_a0);
    fVar88 = (fStack_90 - local_a0) * (float)local_220;
    fVar76 = (fStack_8c - fStack_9c) * local_220._4_4_;
    fVar109 = (fStack_88 - fStack_98) * (float)uStack_218;
    fVar106 = (fStack_84 - fStack_94) * uStack_218._4_4_;
    fVar123 = (local_a0 + fStack_90) * (float)local_220;
    fVar107 = (fStack_9c + fStack_8c) * local_220._4_4_;
    fVar81 = (fStack_98 + fStack_88) * (float)uStack_218;
    fVar78 = (fStack_94 + fStack_84) * uStack_218._4_4_;
    auVar92._0_4_ = fVar108 - fVar88;
    auVar92._4_4_ = fVar80 - fVar76;
    auVar92._8_4_ = fVar111 - fVar109;
    auVar92._12_4_ = fVar82 - fVar106;
    auVar56._0_4_ = fVar119 + fVar88;
    auVar56._4_4_ = fVar124 + fVar76;
    auVar56._8_4_ = fVar79 + fVar109;
    auVar56._12_4_ = fVar112 + fVar106;
    auVar16._4_4_ = fVar107;
    auVar16._0_4_ = fVar123;
    auVar16._8_4_ = fVar81;
    auVar16._12_4_ = fVar78;
    auVar94 = NEON_fmax(auVar92,auVar16,4);
    auVar94 = NEON_fmin(auVar56,auVar94,4);
    fVar123 = fVar123 - auVar94._0_4_;
    fVar107 = fVar107 - auVar94._4_4_;
    fVar81 = fVar81 - auVar94._8_4_;
    fVar78 = fVar78 - auVar94._12_4_;
    auVar57._0_4_ = fVar123 * fVar123;
    auVar57._4_4_ = fVar107 * fVar107;
    auVar57._8_4_ = fVar81 * fVar81;
    auVar57._12_4_ = fVar78 * fVar78;
    auVar94 = NEON_ext(auVar57,auVar57,8,1);
    if (auVar57._0_4_ + auVar57._4_4_ + auVar94._0_4_ <= (float)uVar49 * (float)uVar49) {
      uVar39 = *(uint *)(param_4 + 1);
      uVar42 = (ulong)uVar39;
      uVar40 = *(uint *)((long)param_4 + 0xc);
      lVar47 = *param_4;
      uVar41 = uVar39 + 1;
      if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
        if (0x3ffffffe < (int)uVar39) {
          FUN_032bd0a8(uVar41);
          uVar40 = *(uint *)((long)param_4 + 0xc);
        }
        uVar29 = (uVar40 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar29) {
          uVar29 = 0x3fffffff;
        }
        uVar31 = uVar41;
        if ((int)uVar41 <= (int)uVar29) {
          uVar31 = uVar29;
        }
        FUN_032bd100(uVar31,0x60,uVar40,&local_a0);
        uVar40 = *(uint *)((long)param_4 + 0xc);
        lVar46 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
        if (0 < (int)uVar39) {
          uVar33 = uVar42 & 3;
          if (uVar42 - 1 < 3) {
            lVar37 = 0;
          }
          else {
            lVar37 = 0;
            puVar34 = (undefined8 *)(lVar46 + 0xc0);
            puVar38 = (undefined8 *)(lVar47 + 0xc0);
            do {
              uVar49 = puVar38[-0xd];
              lVar37 = lVar37 + 4;
              puVar34[-0xf] = puVar38[-0xf];
              puVar34[-0xd] = uVar49;
              uVar49 = puVar38[-0x11];
              puVar34[-0x13] = puVar38[-0x13];
              puVar34[-0x11] = uVar49;
              uVar49 = puVar38[-0x15];
              puVar34[-0x17] = puVar38[-0x17];
              puVar34[-0x15] = uVar49;
              uVar49 = puVar38[-0x18];
              puVar34[-0x16] = puVar38[-0x16];
              puVar34[-0x18] = uVar49;
              uVar49 = puVar38[-0x14];
              puVar34[-0x12] = puVar38[-0x12];
              puVar34[-0x14] = uVar49;
              uVar49 = puVar38[-0x10];
              puVar34[-0xe] = puVar38[-0xe];
              puVar34[-0x10] = uVar49;
              uVar49 = puVar38[-1];
              puVar34[-3] = puVar38[-3];
              puVar34[-1] = uVar49;
              uVar49 = puVar38[-5];
              puVar34[-7] = puVar38[-7];
              puVar34[-5] = uVar49;
              uVar49 = puVar38[-9];
              puVar34[-0xb] = puVar38[-0xb];
              puVar34[-9] = uVar49;
              uVar49 = puVar38[-0xc];
              puVar34[-10] = puVar38[-10];
              puVar34[-0xc] = uVar49;
              uVar49 = puVar38[-8];
              puVar34[-6] = puVar38[-6];
              puVar34[-8] = uVar49;
              uVar49 = puVar38[-4];
              puVar34[-2] = puVar38[-2];
              puVar34[-4] = uVar49;
              uVar49 = puVar38[0xb];
              puVar34[9] = puVar38[9];
              puVar34[0xb] = uVar49;
              uVar49 = puVar38[7];
              puVar34[5] = puVar38[5];
              puVar34[7] = uVar49;
              uVar49 = puVar38[3];
              puVar34[1] = puVar38[1];
              puVar34[3] = uVar49;
              uVar49 = *puVar38;
              puVar34[2] = puVar38[2];
              *puVar34 = uVar49;
              uVar49 = puVar38[4];
              puVar34[6] = puVar38[6];
              puVar34[4] = uVar49;
              uVar49 = puVar38[8];
              puVar34[10] = puVar38[10];
              puVar34[8] = uVar49;
              uVar49 = puVar38[0x17];
              puVar34[0x15] = puVar38[0x15];
              puVar34[0x17] = uVar49;
              uVar49 = puVar38[0x13];
              puVar34[0x11] = puVar38[0x11];
              puVar34[0x13] = uVar49;
              uVar49 = puVar38[0xf];
              puVar34[0xd] = puVar38[0xd];
              puVar34[0xf] = uVar49;
              uVar49 = puVar38[0xc];
              puVar34[0xe] = puVar38[0xe];
              puVar34[0xc] = uVar49;
              uVar49 = puVar38[0x10];
              puVar34[0x12] = puVar38[0x12];
              puVar34[0x10] = uVar49;
              uVar49 = puVar38[0x14];
              puVar34[0x16] = puVar38[0x16];
              puVar34[0x14] = uVar49;
              puVar34 = puVar34 + 0x30;
              puVar38 = puVar38 + 0x30;
            } while (uVar42 - uVar33 != lVar37);
          }
          if ((uVar39 & 3) != 0) {
            puVar34 = (undefined8 *)(lVar47 + lVar37 * 0x60);
            puVar38 = (undefined8 *)(lVar46 + lVar37 * 0x60);
            do {
              uVar49 = puVar34[0xb];
              uVar33 = uVar33 - 1;
              puVar38[9] = puVar34[9];
              puVar38[0xb] = uVar49;
              uVar49 = puVar34[7];
              puVar38[5] = puVar34[5];
              puVar38[7] = uVar49;
              uVar49 = puVar34[3];
              puVar38[1] = puVar34[1];
              puVar38[3] = uVar49;
              uVar49 = *puVar34;
              puVar38[2] = puVar34[2];
              *puVar38 = uVar49;
              uVar49 = puVar34[4];
              puVar38[6] = puVar34[6];
              puVar38[4] = uVar49;
              uVar49 = puVar34[8];
              puVar38[10] = puVar34[10];
              puVar38[8] = uVar49;
              puVar34 = puVar34 + 0xc;
              puVar38 = puVar38 + 0xc;
            } while (uVar33 != 0);
          }
        }
        if (-1 < (int)uVar40) {
          (**(code **)(*plVar43 + 0x18))(plVar43,lVar47,((ulong)uVar40 & 0x3fffffff) * 0x60);
        }
        if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
          uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
        }
        else {
          uVar30 = 0x3fffffff;
        }
        uVar39 = *(uint *)(param_4 + 1);
        *(undefined4 *)((long)param_4 + 0xc) = uVar30;
        *param_4 = lVar46;
        lVar47 = lVar46;
      }
      puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar39 * 0x60);
      *(uint *)(param_4 + 1) = uVar41;
      *(uint *)(puVar34 + 4) = uVar44;
      *(int *)(puVar34 + 10) = iVar3;
      puVar34[1] = (ulong)(uint)fVar104;
      *puVar34 = CONCAT44(fVar48,fVar89);
      puVar34[3] = (ulong)(uint)fVar85;
      puVar34[2] = CONCAT44(fVar77,fVar87);
      puVar34[7] = uVar45;
      puVar34[6] = CONCAT44(fVar84,fVar86);
      puVar34[9] = (ulong)(uint)fVar118;
      puVar34[8] = CONCAT44(fVar115,fVar83);
    }
    local_100 = CONCAT44(fStack_15c,local_160);
    auVar24._8_4_ = fStack_158;
    auVar24._0_8_ = local_100;
    auVar24._12_4_ = fStack_154;
    lStack_f8 = auVar24._8_8_;
    fStack_b8 = fStack_148;
    fStack_b4 = fStack_144;
    fStack_c0 = local_150;
    local_bc = fStack_14c;
    local_b0 = local_140;
    fStack_e4 = fStack_144;
    local_e0 = local_140;
    local_d8 = local_138;
    fStack_f0 = fStack_c0;
    local_ec = local_bc;
    fStack_e8 = fStack_b8;
    local_d0 = local_100;
    lStack_c8 = lStack_f8;
    local_a8 = local_138;
  }
LAB_0019c9cc:
  iVar3 = (int)param_4[1];
  if (iVar3 <= (int)lVar25) {
    return;
  }
  do {
    *(int *)(param_4 + 1) = (int)((long)iVar3 + -1);
    plVar36 = (long *)(*param_4 + ((long)iVar3 + -1) * 0x60);
    local_b0 = *(uint *)(plVar36 + 4);
    uVar42 = (ulong)(int)local_b0;
    uVar44 = *(uint *)(plVar36 + 10);
    uVar45 = (ulong)(int)uVar44;
    lStack_c8 = plVar36[1];
    fVar119 = (float)lStack_c8;
    fVar84 = (float)((ulong)lStack_c8 >> 0x20);
    local_d0 = *plVar36;
    fVar115 = (float)local_d0;
    fVar118 = (float)((ulong)local_d0 >> 0x20);
    auVar94 = *(undefined1 (*) [16])(plVar36 + 2);
    lStack_f8 = plVar36[7];
    local_100 = plVar36[6];
    lVar46 = plVar36[9];
    lVar47 = plVar36[8];
    fStack_b8 = auVar94._8_4_;
    fStack_b4 = auVar94._12_4_;
    fStack_c0 = auVar94._0_4_;
    local_bc = auVar94._4_4_;
    local_a8 = (byte *)((long)param_2 + uVar42 * 4 + *param_2);
    fStack_e8 = (float)lVar46;
    fStack_e4 = (float)((ulong)lVar46 >> 0x20);
    fStack_f0 = (float)lVar47;
    local_ec = (float)((ulong)lVar47 >> 0x20);
    local_d8 = (byte *)((long)param_3 + uVar45 * 4 + *param_3);
    local_e0 = uVar44;
    uVar41 = local_b0;
    if ((param_1 & 1) != 0) goto LAB_0019abb4;
LAB_0019b538:
    bVar7 = local_a8[3];
    lVar37 = local_100;
joined_r0x0019abc8:
    fVar83 = (float)local_d0;
    fVar86 = (float)((ulong)local_d0 >> 0x20);
    fVar89 = (float)lStack_c8;
    fVar48 = (float)lVar37;
    fVar104 = (float)((ulong)lVar37 >> 0x20);
    fVar77 = (float)lStack_f8;
    local_100 = lVar37;
    if ((bVar7 & 1) == 0) {
      if ((local_d8[3] & 1) == 0) {
        FUN_00195d4c(param_5,&local_d0,&local_100);
        iVar3 = (int)param_4[1];
      }
      else {
        local_140 = local_e0 + 1;
        local_110 = local_e0 + (local_d8[3] & 0xfe);
        fVar85 = (fStack_f0 - fVar48) * fVar126;
        fVar87 = (local_ec - fVar104) * fVar128;
        fVar88 = (fStack_e8 - fVar77) * fVar129;
        local_138 = (byte *)((long)param_3 + (long)(int)local_140 * 4 + *param_3);
        local_108 = (byte *)((long)param_3 + (long)local_110 * 4 + *param_3);
        bVar17 = *local_138 >> 4;
        bVar7 = *local_138 & 0xf;
        local_160 = (float)(byte)(bVar17 * bVar17) * fVar85 + fVar48;
        fStack_154 = 0.0;
        local_150 = fStack_f0 - (float)(byte)(bVar7 * bVar7) * fVar85;
        bVar7 = local_138[2] & 0xf;
        fStack_144 = 0.0;
        bVar18 = local_138[1] >> 4;
        bVar17 = local_138[2] >> 4;
        fStack_15c = (float)(byte)(bVar18 * bVar18) * fVar87 + fVar104;
        fStack_158 = (float)(byte)(bVar17 * bVar17) * fVar88 + fVar77;
        bVar17 = local_138[1] & 0xf;
        bVar19 = local_108[1] >> 4;
        bVar18 = local_108[1] & 0xf;
        fStack_14c = local_ec - (float)(byte)(bVar17 * bVar17) * fVar87;
        fStack_148 = fStack_e8 - (float)(byte)(bVar7 * bVar7) * fVar88;
        bVar20 = *local_108 >> 4;
        bVar21 = local_108[2] >> 4;
        bVar7 = *local_108 & 0xf;
        bVar17 = local_108[2] & 0xf;
        uStack_124 = 0;
        local_130 = fVar48 + (float)(byte)(bVar20 * bVar20) * fVar85;
        fStack_12c = (float)(byte)(bVar19 * bVar19) * fVar87 + fVar104;
        uStack_114 = 0;
        fStack_128 = (float)(byte)(bVar21 * bVar21) * fVar88 + fVar77;
        local_120 = fStack_f0 - (float)(byte)(bVar7 * bVar7) * fVar85;
        fStack_11c = local_ec - (float)(byte)(bVar18 * bVar18) * fVar87;
        fStack_118 = fStack_e8 - (float)(byte)(bVar17 * bVar17) * fVar88;
        uVar42 = (ulong)lStack_c8 >> 0x20;
        auVar55 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar49 = NEON_fmax(uVar125,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        fVar48 = fStack_c0 * auVar55._0_4_;
        fVar85 = local_bc * auVar55._4_4_;
        fVar123 = fStack_b8 * auVar55._8_4_;
        fVar107 = fStack_b4 * auVar55._12_4_;
        FUN_0333e220(lVar4,&local_160,&local_a0);
        fVar104 = (fStack_90 - local_a0) * local_230;
        fVar87 = (fStack_8c - fStack_9c) * fStack_22c;
        fVar124 = (fStack_88 - fStack_98) * fStack_228;
        fVar79 = (fStack_84 - fStack_94) * fStack_224;
        fVar77 = (local_a0 + fStack_90) * local_230;
        fVar88 = (fStack_9c + fStack_8c) * fStack_22c;
        fVar76 = (fStack_98 + fStack_88) * fStack_228;
        fVar109 = (fStack_94 + fStack_84) * fStack_224;
        auVar96._0_4_ = fVar83 * auVar55._0_4_ - fVar104;
        auVar96._4_4_ = fVar86 * auVar55._4_4_ - fVar87;
        auVar96._8_4_ = fVar89 * auVar55._8_4_ - fVar124;
        auVar96._12_4_ = (float)uVar42 * auVar55._12_4_ - fVar79;
        auVar62._0_4_ = fVar48 + fVar104;
        auVar62._4_4_ = fVar85 + fVar87;
        auVar62._8_4_ = fVar123 + fVar124;
        auVar62._12_4_ = fVar107 + fVar79;
        auVar14._4_4_ = fVar88;
        auVar14._0_4_ = fVar77;
        auVar14._8_4_ = fVar76;
        auVar14._12_4_ = fVar109;
        auVar55 = NEON_fmax(auVar96,auVar14,4);
        auVar55 = NEON_fmin(auVar62,auVar55,4);
        fVar77 = fVar77 - auVar55._0_4_;
        fVar88 = fVar88 - auVar55._4_4_;
        fVar76 = fVar76 - auVar55._8_4_;
        fVar109 = fVar109 - auVar55._12_4_;
        auVar63._0_4_ = fVar77 * fVar77;
        auVar63._4_4_ = fVar88 * fVar88;
        auVar63._8_4_ = fVar76 * fVar76;
        auVar63._12_4_ = fVar109 * fVar109;
        auVar90 = NEON_ext(auVar63,auVar63,8,1);
        fVar110 = (float)lStack_c8;
        uVar45 = (ulong)lStack_c8 >> 0x20;
        fVar105 = (float)local_d0;
        uVar42 = (ulong)local_d0 >> 0x20;
        auVar55 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar50 = NEON_fmax(uVar125,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        fVar79 = fStack_c0 * auVar55._0_4_;
        fVar112 = local_bc * auVar55._4_4_;
        fVar108 = fStack_b8 * auVar55._8_4_;
        fVar82 = fStack_b4 * auVar55._12_4_;
        FUN_0333e220(lVar4,&local_130,&local_a0);
        iVar3 = local_110;
        uVar30 = uStack_114;
        fVar107 = fStack_118;
        fVar76 = fStack_11c;
        fVar124 = local_120;
        fVar123 = fStack_12c;
        fVar88 = local_130;
        uVar44 = local_140;
        fVar87 = fStack_144;
        fVar85 = fStack_148;
        fVar77 = fStack_14c;
        fVar104 = local_150;
        fVar48 = fStack_154;
        fVar89 = fStack_158;
        fVar86 = fStack_15c;
        fVar83 = local_160;
        fVar109 = local_230 * (fStack_90 - local_a0);
        fVar106 = fStack_22c * (fStack_8c - fStack_9c);
        fVar80 = fStack_228 * (fStack_88 - fStack_98);
        fVar114 = fStack_224 * (fStack_84 - fStack_94);
        fVar81 = local_230 * (local_a0 + fStack_90);
        fVar78 = fStack_22c * (fStack_9c + fStack_8c);
        fVar111 = fStack_228 * (fStack_98 + fStack_88);
        fVar113 = fStack_224 * (fStack_94 + fStack_84);
        auVar97._0_4_ = fVar105 * auVar55._0_4_ - fVar109;
        auVar97._4_4_ = (float)uVar42 * auVar55._4_4_ - fVar106;
        auVar97._8_4_ = fVar110 * auVar55._8_4_ - fVar80;
        auVar97._12_4_ = (float)uVar45 * auVar55._12_4_ - fVar114;
        auVar64._0_4_ = fVar79 + fVar109;
        auVar64._4_4_ = fVar112 + fVar106;
        auVar64._8_4_ = fVar108 + fVar80;
        auVar64._12_4_ = fVar82 + fVar114;
        auVar15._4_4_ = fVar78;
        auVar15._0_4_ = fVar81;
        auVar15._8_4_ = fVar111;
        auVar15._12_4_ = fVar113;
        auVar55 = NEON_fmax(auVar97,auVar15,4);
        auVar55 = NEON_fmin(auVar64,auVar55,4);
        fVar81 = fVar81 - auVar55._0_4_;
        fVar78 = fVar78 - auVar55._4_4_;
        fVar111 = fVar111 - auVar55._8_4_;
        fVar113 = fVar113 - auVar55._12_4_;
        auVar65._0_4_ = fVar81 * fVar81;
        auVar65._4_4_ = fVar78 * fVar78;
        auVar65._8_4_ = fVar111 * fVar111;
        auVar65._12_4_ = fVar113 * fVar113;
        auVar55 = NEON_ext(auVar65,auVar65,8,1);
        auVar120._4_4_ = fStack_15c;
        auVar120._0_4_ = local_160;
        auVar120._8_4_ = fStack_158;
        auVar120._12_4_ = fStack_154;
        auVar102._4_4_ = fStack_14c;
        auVar102._0_4_ = local_150;
        auVar102._8_4_ = fStack_148;
        auVar102._12_4_ = fStack_144;
        if (auVar65._0_4_ + auVar65._4_4_ + auVar55._0_4_ <= (float)uVar50 * (float)uVar50) {
          uVar50 = CONCAT44(uStack_124,fStack_128);
          uVar40 = *(uint *)(param_4 + 1);
          uVar42 = (ulong)uVar40;
          uVar29 = *(uint *)((long)param_4 + 0xc);
          lVar46 = *param_4;
          uVar39 = uVar40 + 1;
          lVar47 = lVar46;
          if ((int)(uVar29 & 0x3fffffff) <= (int)uVar40) {
            if (0x3ffffffe < (int)uVar40) {
              FUN_032bd0a8(uVar39);
              uVar29 = *(uint *)((long)param_4 + 0xc);
            }
            uVar31 = (uVar29 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar31) {
              uVar31 = 0x3fffffff;
            }
            uVar6 = uVar39;
            if ((int)uVar39 <= (int)uVar31) {
              uVar6 = uVar31;
            }
            FUN_032bd100(uVar6,0x60,uVar29,&local_a0);
            uVar29 = *(uint *)((long)param_4 + 0xc);
            lVar47 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar40) {
              uVar45 = uVar42 & 3;
              if (uVar42 - 1 < 3) {
                lVar37 = 0;
              }
              else {
                lVar37 = 0;
                puVar34 = (undefined8 *)(lVar47 + 0xc0);
                puVar38 = (undefined8 *)(lVar46 + 0xc0);
                do {
                  uVar51 = puVar38[-0xd];
                  lVar37 = lVar37 + 4;
                  puVar34[-0xf] = puVar38[-0xf];
                  puVar34[-0xd] = uVar51;
                  uVar51 = puVar38[-0x11];
                  puVar34[-0x13] = puVar38[-0x13];
                  puVar34[-0x11] = uVar51;
                  uVar51 = puVar38[-0x15];
                  puVar34[-0x17] = puVar38[-0x17];
                  puVar34[-0x15] = uVar51;
                  uVar51 = puVar38[-0x18];
                  puVar34[-0x16] = puVar38[-0x16];
                  puVar34[-0x18] = uVar51;
                  uVar51 = puVar38[-0x14];
                  puVar34[-0x12] = puVar38[-0x12];
                  puVar34[-0x14] = uVar51;
                  uVar51 = puVar38[-0x10];
                  puVar34[-0xe] = puVar38[-0xe];
                  puVar34[-0x10] = uVar51;
                  uVar51 = puVar38[-1];
                  puVar34[-3] = puVar38[-3];
                  puVar34[-1] = uVar51;
                  uVar51 = puVar38[-5];
                  puVar34[-7] = puVar38[-7];
                  puVar34[-5] = uVar51;
                  uVar51 = puVar38[-9];
                  puVar34[-0xb] = puVar38[-0xb];
                  puVar34[-9] = uVar51;
                  uVar51 = puVar38[-0xc];
                  puVar34[-10] = puVar38[-10];
                  puVar34[-0xc] = uVar51;
                  uVar51 = puVar38[-8];
                  puVar34[-6] = puVar38[-6];
                  puVar34[-8] = uVar51;
                  uVar51 = puVar38[-4];
                  puVar34[-2] = puVar38[-2];
                  puVar34[-4] = uVar51;
                  uVar51 = puVar38[0xb];
                  puVar34[9] = puVar38[9];
                  puVar34[0xb] = uVar51;
                  uVar51 = puVar38[7];
                  puVar34[5] = puVar38[5];
                  puVar34[7] = uVar51;
                  uVar51 = puVar38[3];
                  puVar34[1] = puVar38[1];
                  puVar34[3] = uVar51;
                  uVar51 = *puVar38;
                  puVar34[2] = puVar38[2];
                  *puVar34 = uVar51;
                  uVar51 = puVar38[4];
                  puVar34[6] = puVar38[6];
                  puVar34[4] = uVar51;
                  uVar51 = puVar38[8];
                  puVar34[10] = puVar38[10];
                  puVar34[8] = uVar51;
                  uVar51 = puVar38[0x17];
                  puVar34[0x15] = puVar38[0x15];
                  puVar34[0x17] = uVar51;
                  uVar51 = puVar38[0x13];
                  puVar34[0x11] = puVar38[0x11];
                  puVar34[0x13] = uVar51;
                  uVar51 = puVar38[0xf];
                  puVar34[0xd] = puVar38[0xd];
                  puVar34[0xf] = uVar51;
                  uVar51 = puVar38[0xc];
                  puVar34[0xe] = puVar38[0xe];
                  puVar34[0xc] = uVar51;
                  uVar51 = puVar38[0x10];
                  puVar34[0x12] = puVar38[0x12];
                  puVar34[0x10] = uVar51;
                  uVar51 = puVar38[0x14];
                  puVar34[0x16] = puVar38[0x16];
                  puVar34[0x14] = uVar51;
                  puVar34 = puVar34 + 0x30;
                  puVar38 = puVar38 + 0x30;
                } while (uVar42 - uVar45 != lVar37);
              }
              if ((uVar40 & 3) != 0) {
                puVar34 = (undefined8 *)(lVar46 + lVar37 * 0x60);
                puVar38 = (undefined8 *)(lVar47 + lVar37 * 0x60);
                do {
                  uVar51 = puVar34[0xb];
                  uVar45 = uVar45 - 1;
                  puVar38[9] = puVar34[9];
                  puVar38[0xb] = uVar51;
                  uVar51 = puVar34[7];
                  puVar38[5] = puVar34[5];
                  puVar38[7] = uVar51;
                  uVar51 = puVar34[3];
                  puVar38[1] = puVar34[1];
                  puVar38[3] = uVar51;
                  uVar51 = *puVar34;
                  puVar38[2] = puVar34[2];
                  *puVar38 = uVar51;
                  uVar51 = puVar34[4];
                  puVar38[6] = puVar34[6];
                  puVar38[4] = uVar51;
                  uVar51 = puVar34[8];
                  puVar38[10] = puVar34[10];
                  puVar38[8] = uVar51;
                  puVar34 = puVar34 + 0xc;
                  puVar38 = puVar38 + 0xc;
                } while (uVar45 != 0);
              }
            }
            if (-1 < (int)uVar29) {
              (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar29 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar32 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar32 = 0x3fffffff;
            }
            uVar40 = *(uint *)(param_4 + 1);
            auVar120._4_4_ = fVar86;
            auVar120._0_4_ = fVar83;
            auVar120._8_4_ = fVar89;
            auVar120._12_4_ = fVar48;
            auVar102._4_4_ = fVar77;
            auVar102._0_4_ = fVar104;
            auVar102._8_4_ = fVar85;
            auVar102._12_4_ = fVar87;
            *(undefined4 *)((long)param_4 + 0xc) = uVar32;
            *param_4 = lVar47;
          }
          auVar66._8_4_ = fVar107;
          auVar66._0_8_ = CONCAT44(fVar76,fVar124);
          auVar66._12_4_ = uVar30;
          puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar40 * 0x60);
          *(uint *)(param_4 + 1) = uVar39;
          *(uint *)(puVar34 + 4) = uVar41;
          puVar34[1] = CONCAT44(fVar84,fVar119);
          *puVar34 = CONCAT44(fVar118,fVar115);
          puVar34[3] = auVar94._8_8_;
          puVar34[2] = auVar94._0_8_;
          *(int *)(puVar34 + 10) = iVar3;
          puVar34[7] = uVar50;
          puVar34[6] = CONCAT44(fVar123,fVar88);
          puVar34[9] = auVar66._8_8_;
          puVar34[8] = CONCAT44(fVar76,fVar124);
        }
        if ((float)uVar49 * (float)uVar49 < auVar63._0_4_ + auVar63._4_4_ + auVar90._0_4_)
        goto LAB_0019c9cc;
        uVar40 = *(uint *)(param_4 + 1);
        uVar42 = (ulong)uVar40;
        uVar29 = *(uint *)((long)param_4 + 0xc);
        lVar46 = *param_4;
        uVar39 = uVar40 + 1;
        lVar47 = lVar46;
        if ((int)(uVar29 & 0x3fffffff) <= (int)uVar40) {
          if (0x3ffffffe < (int)uVar40) {
            FUN_032bd0a8(uVar39);
            uVar29 = *(uint *)((long)param_4 + 0xc);
          }
          uVar31 = (uVar29 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar31) {
            uVar31 = 0x3fffffff;
          }
          uVar6 = uVar39;
          if ((int)uVar39 <= (int)uVar31) {
            uVar6 = uVar31;
          }
          FUN_032bd100(uVar6,0x60,uVar29,&local_a0);
          uVar29 = *(uint *)((long)param_4 + 0xc);
          lVar47 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
          if (0 < (int)uVar40) {
            uVar45 = uVar42 & 3;
            if (uVar42 - 1 < 3) {
              lVar37 = 0;
            }
            else {
              lVar37 = 0;
              puVar34 = (undefined8 *)(lVar47 + 0xc0);
              puVar38 = (undefined8 *)(lVar46 + 0xc0);
              do {
                uVar49 = puVar38[-0xd];
                lVar37 = lVar37 + 4;
                puVar34[-0xf] = puVar38[-0xf];
                puVar34[-0xd] = uVar49;
                uVar49 = puVar38[-0x11];
                puVar34[-0x13] = puVar38[-0x13];
                puVar34[-0x11] = uVar49;
                uVar49 = puVar38[-0x15];
                puVar34[-0x17] = puVar38[-0x17];
                puVar34[-0x15] = uVar49;
                uVar49 = puVar38[-0x18];
                puVar34[-0x16] = puVar38[-0x16];
                puVar34[-0x18] = uVar49;
                uVar49 = puVar38[-0x14];
                puVar34[-0x12] = puVar38[-0x12];
                puVar34[-0x14] = uVar49;
                uVar49 = puVar38[-0x10];
                puVar34[-0xe] = puVar38[-0xe];
                puVar34[-0x10] = uVar49;
                uVar49 = puVar38[-1];
                puVar34[-3] = puVar38[-3];
                puVar34[-1] = uVar49;
                uVar49 = puVar38[-5];
                puVar34[-7] = puVar38[-7];
                puVar34[-5] = uVar49;
                uVar49 = puVar38[-9];
                puVar34[-0xb] = puVar38[-0xb];
                puVar34[-9] = uVar49;
                uVar49 = puVar38[-0xc];
                puVar34[-10] = puVar38[-10];
                puVar34[-0xc] = uVar49;
                uVar49 = puVar38[-8];
                puVar34[-6] = puVar38[-6];
                puVar34[-8] = uVar49;
                uVar49 = puVar38[-4];
                puVar34[-2] = puVar38[-2];
                puVar34[-4] = uVar49;
                uVar49 = puVar38[0xb];
                puVar34[9] = puVar38[9];
                puVar34[0xb] = uVar49;
                uVar49 = puVar38[7];
                puVar34[5] = puVar38[5];
                puVar34[7] = uVar49;
                uVar49 = puVar38[3];
                puVar34[1] = puVar38[1];
                puVar34[3] = uVar49;
                uVar49 = *puVar38;
                puVar34[2] = puVar38[2];
                *puVar34 = uVar49;
                uVar49 = puVar38[4];
                puVar34[6] = puVar38[6];
                puVar34[4] = uVar49;
                uVar49 = puVar38[8];
                puVar34[10] = puVar38[10];
                puVar34[8] = uVar49;
                uVar49 = puVar38[0x17];
                puVar34[0x15] = puVar38[0x15];
                puVar34[0x17] = uVar49;
                uVar49 = puVar38[0x13];
                puVar34[0x11] = puVar38[0x11];
                puVar34[0x13] = uVar49;
                uVar49 = puVar38[0xf];
                puVar34[0xd] = puVar38[0xd];
                puVar34[0xf] = uVar49;
                uVar49 = puVar38[0xc];
                puVar34[0xe] = puVar38[0xe];
                puVar34[0xc] = uVar49;
                uVar49 = puVar38[0x10];
                puVar34[0x12] = puVar38[0x12];
                puVar34[0x10] = uVar49;
                uVar49 = puVar38[0x14];
                puVar34[0x16] = puVar38[0x16];
                puVar34[0x14] = uVar49;
                puVar34 = puVar34 + 0x30;
                puVar38 = puVar38 + 0x30;
              } while (uVar42 - uVar45 != lVar37);
            }
            if ((uVar40 & 3) != 0) {
              puVar34 = (undefined8 *)(lVar46 + lVar37 * 0x60);
              puVar38 = (undefined8 *)(lVar47 + lVar37 * 0x60);
              do {
                uVar49 = puVar34[0xb];
                uVar45 = uVar45 - 1;
                puVar38[9] = puVar34[9];
                puVar38[0xb] = uVar49;
                uVar49 = puVar34[7];
                puVar38[5] = puVar34[5];
                puVar38[7] = uVar49;
                uVar49 = puVar34[3];
                puVar38[1] = puVar34[1];
                puVar38[3] = uVar49;
                uVar49 = *puVar34;
                puVar38[2] = puVar34[2];
                *puVar38 = uVar49;
                uVar49 = puVar34[4];
                puVar38[6] = puVar34[6];
                puVar38[4] = uVar49;
                uVar49 = puVar34[8];
                puVar38[10] = puVar34[10];
                puVar38[8] = uVar49;
                puVar34 = puVar34 + 0xc;
                puVar38 = puVar38 + 0xc;
              } while (uVar45 != 0);
            }
          }
          if (-1 < (int)uVar29) {
            (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar29 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
            uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
          }
          else {
            uVar30 = 0x3fffffff;
          }
          uVar40 = *(uint *)(param_4 + 1);
          *(undefined4 *)((long)param_4 + 0xc) = uVar30;
          *param_4 = lVar47;
        }
        puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar40 * 0x60);
        *(uint *)(param_4 + 1) = uVar39;
        *(uint *)(puVar34 + 4) = uVar41;
        puVar34[1] = CONCAT44(fVar84,fVar119);
        *puVar34 = CONCAT44(fVar118,fVar115);
        puVar34[3] = auVar94._8_8_;
        puVar34[2] = auVar94._0_8_;
        *(uint *)(puVar34 + 10) = uVar44;
        puVar34[7] = auVar120._8_8_;
        puVar34[6] = auVar120._0_8_;
        puVar34[9] = auVar102._8_8_;
        puVar34[8] = auVar102._0_8_;
        iVar3 = (int)param_4[1];
      }
    }
    else {
      iVar3 = local_b0 + 1;
      iVar5 = local_b0 + (bVar7 & 0xfe);
      pbVar1 = (byte *)((long)param_2 + (long)iVar5 * 4 + *param_2);
      pbVar2 = (byte *)((long)param_2 + (long)iVar3 * 4 + *param_2);
      fVar115 = (fStack_c0 - fVar83) * fVar126;
      fVar118 = (local_bc - fVar86) * fVar128;
      fVar119 = (fStack_b8 - fVar89) * fVar129;
      bVar17 = *pbVar2 >> 4;
      bVar7 = *pbVar2 & 0xf;
      bVar18 = *pbVar1 >> 4;
      fVar124 = fStack_c0 - (float)(byte)(bVar7 * bVar7) * fVar115;
      fVar123 = (float)(byte)(bVar17 * bVar17) * fVar115 + fVar83;
      fVar83 = fVar83 + (float)(byte)(bVar18 * bVar18) * fVar115;
      bVar17 = pbVar2[1] >> 4;
      bVar7 = pbVar2[1] & 0xf;
      fVar84 = (float)(byte)(bVar17 * bVar17) * fVar118 + fVar86;
      fVar85 = local_bc - (float)(byte)(bVar7 * bVar7) * fVar118;
      bVar7 = pbVar1[1] >> 4;
      bVar17 = pbVar2[2] >> 4;
      fVar86 = fVar86 + (float)(byte)(bVar7 * bVar7) * fVar118;
      bVar7 = pbVar2[2] & 0xf;
      fVar87 = (float)(byte)(bVar17 * bVar17) * fVar119 + fVar89;
      bVar18 = pbVar1[2] >> 4;
      bVar17 = pbVar1[2] & 0xf;
      fVar88 = fStack_b8 - (float)(byte)(bVar7 * bVar7) * fVar119;
      bVar7 = *pbVar1 & 0xf;
      fVar89 = fVar89 + (float)(byte)(bVar18 * bVar18) * fVar119;
      fVar115 = fStack_c0 - (float)(byte)(bVar7 * bVar7) * fVar115;
      bVar7 = pbVar1[1] & 0xf;
      fVar118 = local_bc - (float)(byte)(bVar7 * bVar7) * fVar118;
      fVar119 = fStack_b8 - (float)(byte)(bVar17 * bVar17) * fVar119;
      if ((local_d8[3] & 1) == 0) {
        uStack_1a4 = (undefined4)((ulong)lStack_f8 >> 0x20);
        auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar49 = NEON_fmax(uVar125,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        uStack_1b8 = (undefined4)lVar46;
        uStack_1b4 = (undefined4)((ulong)lVar46 >> 0x20);
        FUN_0333e220(lVar4,&local_100,&local_160);
        fVar48 = (local_150 - local_160) * local_230;
        fVar76 = (fStack_14c - fStack_15c) * fStack_22c;
        fVar79 = (fStack_148 - fStack_158) * fStack_228;
        fVar81 = (fStack_144 - fStack_154) * fStack_224;
        fVar104 = (local_160 + local_150) * local_230;
        fVar107 = (fStack_15c + fStack_14c) * fStack_22c;
        fVar109 = (fStack_158 + fStack_148) * fStack_228;
        fVar112 = (fStack_154 + fStack_144) * fStack_224;
        auVar93._0_4_ = fVar123 * auVar94._0_4_ - fVar48;
        auVar93._4_4_ = fVar84 * auVar94._4_4_ - fVar76;
        auVar93._8_4_ = fVar87 * auVar94._8_4_ - fVar79;
        auVar93._12_4_ = auVar94._12_4_ * 0.0 - fVar81;
        auVar58._0_4_ = fVar124 * auVar94._0_4_ + fVar48;
        auVar58._4_4_ = fVar85 * auVar94._4_4_ + fVar76;
        auVar58._8_4_ = fVar88 * auVar94._8_4_ + fVar79;
        auVar58._12_4_ = auVar94._12_4_ * 0.0 + fVar81;
        auVar8._4_4_ = fVar107;
        auVar8._0_4_ = fVar104;
        auVar8._8_4_ = fVar109;
        auVar8._12_4_ = fVar112;
        auVar94 = NEON_fmax(auVar93,auVar8,4);
        auVar94 = NEON_fmin(auVar58,auVar94,4);
        fVar104 = fVar104 - auVar94._0_4_;
        fVar107 = fVar107 - auVar94._4_4_;
        fVar109 = fVar109 - auVar94._8_4_;
        fVar112 = fVar112 - auVar94._12_4_;
        auVar59._0_4_ = fVar104 * fVar104;
        auVar59._4_4_ = fVar107 * fVar107;
        auVar59._8_4_ = fVar109 * fVar109;
        auVar59._12_4_ = fVar112 * fVar112;
        auVar55 = NEON_ext(auVar59,auVar59,8,1);
        auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        uVar50 = NEON_fmax(uVar125,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        FUN_0333e220(lVar4,&local_100,&local_160);
        fVar104 = local_230 * (local_160 + local_150);
        fVar107 = fStack_22c * (fStack_15c + fStack_14c);
        fVar109 = fStack_228 * (fStack_158 + fStack_148);
        fVar112 = fStack_224 * (fStack_154 + fStack_144);
        fVar48 = local_230 * (local_150 - local_160);
        fVar76 = fStack_22c * (fStack_14c - fStack_15c);
        fVar79 = fStack_228 * (fStack_148 - fStack_158);
        fVar81 = fStack_224 * (fStack_144 - fStack_154);
        auVar95._0_4_ = fVar83 * auVar94._0_4_ - fVar48;
        auVar95._4_4_ = fVar86 * auVar94._4_4_ - fVar76;
        auVar95._8_4_ = fVar89 * auVar94._8_4_ - fVar79;
        auVar95._12_4_ = auVar94._12_4_ * 0.0 - fVar81;
        auVar60._0_4_ = fVar115 * auVar94._0_4_ + fVar48;
        auVar60._4_4_ = fVar118 * auVar94._4_4_ + fVar76;
        auVar60._8_4_ = fVar119 * auVar94._8_4_ + fVar79;
        auVar60._12_4_ = auVar94._12_4_ * 0.0 + fVar81;
        auVar122._8_4_ = uStack_1b8;
        auVar122._0_8_ = lVar47;
        auVar122._12_4_ = uStack_1b4;
        auVar117._8_4_ = fVar77;
        auVar117._0_8_ = lVar37;
        auVar117._12_4_ = uStack_1a4;
        auVar9._4_4_ = fVar107;
        auVar9._0_4_ = fVar104;
        auVar9._8_4_ = fVar109;
        auVar9._12_4_ = fVar112;
        auVar94 = NEON_fmax(auVar95,auVar9,4);
        auVar94 = NEON_fmin(auVar60,auVar94,4);
        fVar104 = fVar104 - auVar94._0_4_;
        fVar107 = fVar107 - auVar94._4_4_;
        fVar109 = fVar109 - auVar94._8_4_;
        fVar112 = fVar112 - auVar94._12_4_;
        auVar61._0_4_ = fVar104 * fVar104;
        auVar61._4_4_ = fVar107 * fVar107;
        auVar61._8_4_ = fVar109 * fVar109;
        auVar61._12_4_ = fVar112 * fVar112;
        auVar94 = NEON_ext(auVar61,auVar61,8,1);
        if (auVar61._0_4_ + auVar61._4_4_ + auVar94._0_4_ <= (float)uVar50 * (float)uVar50) {
          uVar39 = *(uint *)(param_4 + 1);
          uVar42 = (ulong)uVar39;
          uVar40 = *(uint *)((long)param_4 + 0xc);
          lVar46 = *param_4;
          uVar41 = uVar39 + 1;
          if ((int)uVar39 < (int)(uVar40 & 0x3fffffff)) {
            lVar28 = lVar46;
          }
          else {
            if (0x3ffffffe < (int)uVar39) {
              FUN_032bd0a8(uVar41);
              uVar40 = *(uint *)((long)param_4 + 0xc);
            }
            uVar29 = (uVar40 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar29) {
              uVar29 = 0x3fffffff;
            }
            uVar31 = uVar41;
            if ((int)uVar41 <= (int)uVar29) {
              uVar31 = uVar29;
            }
            FUN_032bd100(uVar31,0x60,uVar40,&local_160);
            uVar40 = *(uint *)((long)param_4 + 0xc);
            lVar28 = (**(code **)(*plVar43 + 0x10))
                               (plVar43,CONCAT44(fStack_15c,local_160),&local_160);
            if (0 < (int)uVar39) {
              uVar45 = uVar42 & 3;
              if (uVar42 - 1 < 3) {
                lVar35 = 0;
              }
              else {
                lVar35 = 0;
                puVar34 = (undefined8 *)(lVar28 + 0xc0);
                puVar38 = (undefined8 *)(lVar46 + 0xc0);
                do {
                  uVar50 = puVar38[-0xd];
                  lVar35 = lVar35 + 4;
                  puVar34[-0xf] = puVar38[-0xf];
                  puVar34[-0xd] = uVar50;
                  uVar50 = puVar38[-0x11];
                  puVar34[-0x13] = puVar38[-0x13];
                  puVar34[-0x11] = uVar50;
                  uVar50 = puVar38[-0x15];
                  puVar34[-0x17] = puVar38[-0x17];
                  puVar34[-0x15] = uVar50;
                  uVar50 = puVar38[-0x18];
                  puVar34[-0x16] = puVar38[-0x16];
                  puVar34[-0x18] = uVar50;
                  uVar50 = puVar38[-0x14];
                  puVar34[-0x12] = puVar38[-0x12];
                  puVar34[-0x14] = uVar50;
                  uVar50 = puVar38[-0x10];
                  puVar34[-0xe] = puVar38[-0xe];
                  puVar34[-0x10] = uVar50;
                  uVar50 = puVar38[-1];
                  puVar34[-3] = puVar38[-3];
                  puVar34[-1] = uVar50;
                  uVar50 = puVar38[-5];
                  puVar34[-7] = puVar38[-7];
                  puVar34[-5] = uVar50;
                  uVar50 = puVar38[-9];
                  puVar34[-0xb] = puVar38[-0xb];
                  puVar34[-9] = uVar50;
                  uVar50 = puVar38[-0xc];
                  puVar34[-10] = puVar38[-10];
                  puVar34[-0xc] = uVar50;
                  uVar50 = puVar38[-8];
                  puVar34[-6] = puVar38[-6];
                  puVar34[-8] = uVar50;
                  uVar50 = puVar38[-4];
                  puVar34[-2] = puVar38[-2];
                  puVar34[-4] = uVar50;
                  uVar50 = puVar38[0xb];
                  puVar34[9] = puVar38[9];
                  puVar34[0xb] = uVar50;
                  uVar50 = puVar38[7];
                  puVar34[5] = puVar38[5];
                  puVar34[7] = uVar50;
                  uVar50 = puVar38[3];
                  puVar34[1] = puVar38[1];
                  puVar34[3] = uVar50;
                  uVar50 = *puVar38;
                  puVar34[2] = puVar38[2];
                  *puVar34 = uVar50;
                  uVar50 = puVar38[4];
                  puVar34[6] = puVar38[6];
                  puVar34[4] = uVar50;
                  uVar50 = puVar38[8];
                  puVar34[10] = puVar38[10];
                  puVar34[8] = uVar50;
                  uVar50 = puVar38[0x17];
                  puVar34[0x15] = puVar38[0x15];
                  puVar34[0x17] = uVar50;
                  uVar50 = puVar38[0x13];
                  puVar34[0x11] = puVar38[0x11];
                  puVar34[0x13] = uVar50;
                  uVar50 = puVar38[0xf];
                  puVar34[0xd] = puVar38[0xd];
                  puVar34[0xf] = uVar50;
                  uVar50 = puVar38[0xc];
                  puVar34[0xe] = puVar38[0xe];
                  puVar34[0xc] = uVar50;
                  uVar50 = puVar38[0x10];
                  puVar34[0x12] = puVar38[0x12];
                  puVar34[0x10] = uVar50;
                  uVar50 = puVar38[0x14];
                  puVar34[0x16] = puVar38[0x16];
                  puVar34[0x14] = uVar50;
                  puVar34 = puVar34 + 0x30;
                  puVar38 = puVar38 + 0x30;
                } while (uVar42 - uVar45 != lVar35);
              }
              if ((uVar39 & 3) != 0) {
                puVar34 = (undefined8 *)(lVar46 + lVar35 * 0x60);
                puVar38 = (undefined8 *)(lVar28 + lVar35 * 0x60);
                do {
                  uVar50 = puVar34[0xb];
                  uVar45 = uVar45 - 1;
                  puVar38[9] = puVar34[9];
                  puVar38[0xb] = uVar50;
                  uVar50 = puVar34[7];
                  puVar38[5] = puVar34[5];
                  puVar38[7] = uVar50;
                  uVar50 = puVar34[3];
                  puVar38[1] = puVar34[1];
                  puVar38[3] = uVar50;
                  uVar50 = *puVar34;
                  puVar38[2] = puVar34[2];
                  *puVar38 = uVar50;
                  uVar50 = puVar34[4];
                  puVar38[6] = puVar34[6];
                  puVar38[4] = uVar50;
                  uVar50 = puVar34[8];
                  puVar38[10] = puVar34[10];
                  puVar38[8] = uVar50;
                  puVar34 = puVar34 + 0xc;
                  puVar38 = puVar38 + 0xc;
                } while (uVar45 != 0);
              }
            }
            if (-1 < (int)uVar40) {
              (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar40 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_15c,local_160) < 0x17ffffffa0) {
              uVar30 = (undefined4)(CONCAT44(fStack_15c,local_160) / 0x60);
            }
            else {
              uVar30 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_4 + 0xc) = uVar30;
            *param_4 = lVar28;
            uVar39 = *(uint *)(param_4 + 1);
          }
          puVar34 = (undefined8 *)(lVar28 + (long)(int)uVar39 * 0x60);
          *(uint *)(param_4 + 1) = uVar41;
          *(int *)(puVar34 + 4) = iVar5;
          puVar34[1] = (ulong)(uint)fVar89;
          *puVar34 = CONCAT44(fVar86,fVar83);
          puVar34[3] = (ulong)(uint)fVar119;
          puVar34[2] = CONCAT44(fVar118,fVar115);
          *(uint *)(puVar34 + 10) = uVar44;
          puVar34[7] = auVar117._8_8_;
          puVar34[6] = auVar117._0_8_;
          puVar34[9] = auVar122._8_8_;
          puVar34[8] = auVar122._0_8_;
        }
        if ((float)uVar49 * (float)uVar49 < auVar59._0_4_ + auVar59._4_4_ + auVar55._0_4_)
        goto LAB_0019c9cc;
        uVar39 = *(uint *)(param_4 + 1);
        uVar42 = (ulong)uVar39;
        uVar40 = *(uint *)((long)param_4 + 0xc);
        lVar46 = *param_4;
        uVar41 = uVar39 + 1;
        if ((int)uVar39 < (int)(uVar40 & 0x3fffffff)) {
          lVar28 = lVar46;
        }
        else {
          if (0x3ffffffe < (int)uVar39) {
            FUN_032bd0a8(uVar41);
            uVar40 = *(uint *)((long)param_4 + 0xc);
          }
          uVar29 = (uVar40 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar29) {
            uVar29 = 0x3fffffff;
          }
          uVar31 = uVar41;
          if ((int)uVar41 <= (int)uVar29) {
            uVar31 = uVar29;
          }
          FUN_032bd100(uVar31,0x60,uVar40,&local_160);
          uVar40 = *(uint *)((long)param_4 + 0xc);
          lVar28 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_15c,local_160),&local_160)
          ;
          if (0 < (int)uVar39) {
            uVar45 = uVar42 & 3;
            if (uVar42 - 1 < 3) {
              lVar35 = 0;
            }
            else {
              lVar35 = 0;
              puVar34 = (undefined8 *)(lVar28 + 0xc0);
              puVar38 = (undefined8 *)(lVar46 + 0xc0);
              do {
                uVar49 = puVar38[-0xd];
                lVar35 = lVar35 + 4;
                puVar34[-0xf] = puVar38[-0xf];
                puVar34[-0xd] = uVar49;
                uVar49 = puVar38[-0x11];
                puVar34[-0x13] = puVar38[-0x13];
                puVar34[-0x11] = uVar49;
                uVar49 = puVar38[-0x15];
                puVar34[-0x17] = puVar38[-0x17];
                puVar34[-0x15] = uVar49;
                uVar49 = puVar38[-0x18];
                puVar34[-0x16] = puVar38[-0x16];
                puVar34[-0x18] = uVar49;
                uVar49 = puVar38[-0x14];
                puVar34[-0x12] = puVar38[-0x12];
                puVar34[-0x14] = uVar49;
                uVar49 = puVar38[-0x10];
                puVar34[-0xe] = puVar38[-0xe];
                puVar34[-0x10] = uVar49;
                uVar49 = puVar38[-1];
                puVar34[-3] = puVar38[-3];
                puVar34[-1] = uVar49;
                uVar49 = puVar38[-5];
                puVar34[-7] = puVar38[-7];
                puVar34[-5] = uVar49;
                uVar49 = puVar38[-9];
                puVar34[-0xb] = puVar38[-0xb];
                puVar34[-9] = uVar49;
                uVar49 = puVar38[-0xc];
                puVar34[-10] = puVar38[-10];
                puVar34[-0xc] = uVar49;
                uVar49 = puVar38[-8];
                puVar34[-6] = puVar38[-6];
                puVar34[-8] = uVar49;
                uVar49 = puVar38[-4];
                puVar34[-2] = puVar38[-2];
                puVar34[-4] = uVar49;
                uVar49 = puVar38[0xb];
                puVar34[9] = puVar38[9];
                puVar34[0xb] = uVar49;
                uVar49 = puVar38[7];
                puVar34[5] = puVar38[5];
                puVar34[7] = uVar49;
                uVar49 = puVar38[3];
                puVar34[1] = puVar38[1];
                puVar34[3] = uVar49;
                uVar49 = *puVar38;
                puVar34[2] = puVar38[2];
                *puVar34 = uVar49;
                uVar49 = puVar38[4];
                puVar34[6] = puVar38[6];
                puVar34[4] = uVar49;
                uVar49 = puVar38[8];
                puVar34[10] = puVar38[10];
                puVar34[8] = uVar49;
                uVar49 = puVar38[0x17];
                puVar34[0x15] = puVar38[0x15];
                puVar34[0x17] = uVar49;
                uVar49 = puVar38[0x13];
                puVar34[0x11] = puVar38[0x11];
                puVar34[0x13] = uVar49;
                uVar49 = puVar38[0xf];
                puVar34[0xd] = puVar38[0xd];
                puVar34[0xf] = uVar49;
                uVar49 = puVar38[0xc];
                puVar34[0xe] = puVar38[0xe];
                puVar34[0xc] = uVar49;
                uVar49 = puVar38[0x10];
                puVar34[0x12] = puVar38[0x12];
                puVar34[0x10] = uVar49;
                uVar49 = puVar38[0x14];
                puVar34[0x16] = puVar38[0x16];
                puVar34[0x14] = uVar49;
                puVar34 = puVar34 + 0x30;
                puVar38 = puVar38 + 0x30;
              } while (uVar42 - uVar45 != lVar35);
            }
            if ((uVar39 & 3) != 0) {
              puVar34 = (undefined8 *)(lVar46 + lVar35 * 0x60);
              puVar38 = (undefined8 *)(lVar28 + lVar35 * 0x60);
              do {
                uVar49 = puVar34[0xb];
                uVar45 = uVar45 - 1;
                puVar38[9] = puVar34[9];
                puVar38[0xb] = uVar49;
                uVar49 = puVar34[7];
                puVar38[5] = puVar34[5];
                puVar38[7] = uVar49;
                uVar49 = puVar34[3];
                puVar38[1] = puVar34[1];
                puVar38[3] = uVar49;
                uVar49 = *puVar34;
                puVar38[2] = puVar34[2];
                *puVar38 = uVar49;
                uVar49 = puVar34[4];
                puVar38[6] = puVar34[6];
                puVar38[4] = uVar49;
                uVar49 = puVar34[8];
                puVar38[10] = puVar34[10];
                puVar38[8] = uVar49;
                puVar34 = puVar34 + 0xc;
                puVar38 = puVar38 + 0xc;
              } while (uVar45 != 0);
            }
          }
          if (-1 < (int)uVar40) {
            (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar40 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_15c,local_160) < 0x17ffffffa0) {
            uVar30 = (undefined4)(CONCAT44(fStack_15c,local_160) / 0x60);
          }
          else {
            uVar30 = 0x3fffffff;
          }
          uVar39 = *(uint *)(param_4 + 1);
          *(undefined4 *)((long)param_4 + 0xc) = uVar30;
          *param_4 = lVar28;
        }
        puVar34 = (undefined8 *)(lVar28 + (long)(int)uVar39 * 0x60);
        *(uint *)(param_4 + 1) = uVar41;
        *(int *)(puVar34 + 4) = iVar3;
        puVar34[1] = (ulong)(uint)fVar87;
        *puVar34 = CONCAT44(fVar84,fVar123);
        puVar34[3] = (ulong)(uint)fVar88;
        puVar34[2] = CONCAT44(fVar85,fVar124);
        *(uint *)(puVar34 + 10) = uVar44;
        puVar34[7] = auVar117._8_8_;
        puVar34[6] = auVar117._0_8_;
        puVar34[9] = auVar122._8_8_;
        puVar34[8] = auVar122._0_8_;
        iVar3 = (int)param_4[1];
      }
      else {
        local_140 = local_e0 + 1;
        local_110 = local_e0 + (local_d8[3] & 0xfe);
        fVar76 = fVar126 * (fStack_f0 - fVar48);
        fVar107 = fVar128 * (local_ec - fVar104);
        fVar79 = fVar129 * (fStack_e8 - fVar77);
        local_138 = (byte *)((long)param_3 + (long)(int)local_140 * 4 + *param_3);
        local_108 = (byte *)((long)param_3 + (long)local_110 * 4 + *param_3);
        bVar18 = *local_138 >> 4;
        bVar7 = *local_138 & 0xf;
        bVar19 = local_138[1] >> 4;
        bVar20 = local_138[2] >> 4;
        bVar17 = local_138[2] & 0xf;
        local_160 = (float)(byte)(bVar18 * bVar18) * fVar76 + fVar48;
        bVar18 = local_138[1] & 0xf;
        fStack_154 = 0.0;
        fStack_15c = (float)(byte)(bVar19 * bVar19) * fVar107 + fVar104;
        fStack_144 = 0.0;
        fStack_158 = (float)(byte)(bVar20 * bVar20) * fVar79 + fVar77;
        bVar19 = local_108[1] >> 4;
        local_150 = fStack_f0 - (float)(byte)(bVar7 * bVar7) * fVar76;
        fStack_148 = fStack_e8 - (float)(byte)(bVar17 * bVar17) * fVar79;
        bVar20 = *local_108 >> 4;
        fStack_14c = local_ec - (float)(byte)(bVar18 * bVar18) * fVar107;
        bVar21 = local_108[2] >> 4;
        bVar7 = *local_108 & 0xf;
        bVar17 = local_108[1] & 0xf;
        bVar18 = local_108[2] & 0xf;
        uStack_124 = 0;
        local_130 = fVar48 + (float)(byte)(bVar20 * bVar20) * fVar76;
        fStack_12c = (float)(byte)(bVar19 * bVar19) * fVar107 + fVar104;
        uStack_114 = 0;
        fStack_128 = (float)(byte)(bVar21 * bVar21) * fVar79 + fVar77;
        local_120 = fStack_f0 - (float)(byte)(bVar7 * bVar7) * fVar76;
        fStack_11c = local_ec - (float)(byte)(bVar17 * bVar17) * fVar107;
        fStack_118 = fStack_e8 - (float)(byte)(bVar18 * bVar18) * fVar79;
        uVar51 = NEON_fmax(uVar22,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar4,&local_160,&local_a0);
        fVar48 = (fStack_90 - local_a0) * local_230;
        fVar77 = (fStack_8c - fStack_9c) * fStack_22c;
        fVar107 = (fStack_88 - fStack_98) * fStack_228;
        fVar109 = (fStack_84 - fStack_94) * fStack_224;
        fVar104 = (local_a0 + fStack_90) * local_230;
        fVar76 = (fStack_9c + fStack_8c) * fStack_22c;
        fVar79 = (fStack_98 + fStack_88) * fStack_228;
        fVar81 = (fStack_94 + fStack_84) * fStack_224;
        auVar98._0_4_ = fVar123 * auVar94._0_4_ - fVar48;
        auVar98._4_4_ = fVar84 * auVar94._4_4_ - fVar77;
        auVar98._8_4_ = fVar87 * auVar94._8_4_ - fVar107;
        auVar98._12_4_ = auVar94._12_4_ * 0.0 - fVar109;
        auVar67._0_4_ = fVar124 * auVar94._0_4_ + fVar48;
        auVar67._4_4_ = fVar85 * auVar94._4_4_ + fVar77;
        auVar67._8_4_ = fVar88 * auVar94._8_4_ + fVar107;
        auVar67._12_4_ = auVar94._12_4_ * 0.0 + fVar109;
        auVar10._4_4_ = fVar76;
        auVar10._0_4_ = fVar104;
        auVar10._8_4_ = fVar79;
        auVar10._12_4_ = fVar81;
        auVar94 = NEON_fmax(auVar98,auVar10,4);
        auVar94 = NEON_fmin(auVar67,auVar94,4);
        fVar104 = fVar104 - auVar94._0_4_;
        fVar76 = fVar76 - auVar94._4_4_;
        fVar79 = fVar79 - auVar94._8_4_;
        fVar81 = fVar81 - auVar94._12_4_;
        auVar68._0_4_ = fVar104 * fVar104;
        auVar68._4_4_ = fVar76 * fVar76;
        auVar68._8_4_ = fVar79 * fVar79;
        auVar68._12_4_ = fVar81 * fVar81;
        auVar55 = NEON_ext(auVar68,auVar68,8,1);
        uVar52 = NEON_fmax(uVar22,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar4,&local_130,&local_a0);
        fVar48 = local_230 * (fStack_90 - local_a0);
        fVar77 = fStack_22c * (fStack_8c - fStack_9c);
        fVar107 = fStack_228 * (fStack_88 - fStack_98);
        fVar109 = fStack_224 * (fStack_84 - fStack_94);
        fVar104 = local_230 * (local_a0 + fStack_90);
        fVar76 = fStack_22c * (fStack_9c + fStack_8c);
        fVar79 = fStack_228 * (fStack_98 + fStack_88);
        fVar81 = fStack_224 * (fStack_94 + fStack_84);
        auVar99._0_4_ = fVar123 * auVar94._0_4_ - fVar48;
        auVar99._4_4_ = fVar84 * auVar94._4_4_ - fVar77;
        auVar99._8_4_ = fVar87 * auVar94._8_4_ - fVar107;
        auVar99._12_4_ = auVar94._12_4_ * 0.0 - fVar109;
        auVar69._0_4_ = fVar124 * auVar94._0_4_ + fVar48;
        auVar69._4_4_ = fVar85 * auVar94._4_4_ + fVar77;
        auVar69._8_4_ = fVar88 * auVar94._8_4_ + fVar107;
        auVar69._12_4_ = auVar94._12_4_ * 0.0 + fVar109;
        auVar11._4_4_ = fVar76;
        auVar11._0_4_ = fVar104;
        auVar11._8_4_ = fVar79;
        auVar11._12_4_ = fVar81;
        auVar94 = NEON_fmax(auVar99,auVar11,4);
        auVar94 = NEON_fmin(auVar69,auVar94,4);
        fVar104 = fVar104 - auVar94._0_4_;
        fVar76 = fVar76 - auVar94._4_4_;
        fVar79 = fVar79 - auVar94._8_4_;
        fVar81 = fVar81 - auVar94._12_4_;
        auVar70._0_4_ = fVar104 * fVar104;
        auVar70._4_4_ = fVar76 * fVar76;
        auVar70._8_4_ = fVar79 * fVar79;
        auVar70._12_4_ = fVar81 * fVar81;
        auVar90 = NEON_ext(auVar70,auVar70,8,1);
        uVar53 = NEON_fmax(uVar22,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar4,&local_160,&local_a0);
        fVar48 = local_230 * (fStack_90 - local_a0);
        fVar77 = fStack_22c * (fStack_8c - fStack_9c);
        fVar107 = fStack_228 * (fStack_88 - fStack_98);
        fVar109 = fStack_224 * (fStack_84 - fStack_94);
        fVar104 = local_230 * (local_a0 + fStack_90);
        fVar76 = fStack_22c * (fStack_9c + fStack_8c);
        fVar79 = fStack_228 * (fStack_98 + fStack_88);
        fVar81 = fStack_224 * (fStack_94 + fStack_84);
        auVar100._0_4_ = fVar83 * auVar94._0_4_ - fVar48;
        auVar100._4_4_ = fVar86 * auVar94._4_4_ - fVar77;
        auVar100._8_4_ = fVar89 * auVar94._8_4_ - fVar107;
        auVar100._12_4_ = auVar94._12_4_ * 0.0 - fVar109;
        auVar71._0_4_ = fVar115 * auVar94._0_4_ + fVar48;
        auVar71._4_4_ = fVar118 * auVar94._4_4_ + fVar77;
        auVar71._8_4_ = fVar119 * auVar94._8_4_ + fVar107;
        auVar71._12_4_ = auVar94._12_4_ * 0.0 + fVar109;
        auVar12._4_4_ = fVar76;
        auVar12._0_4_ = fVar104;
        auVar12._8_4_ = fVar79;
        auVar12._12_4_ = fVar81;
        auVar94 = NEON_fmax(auVar100,auVar12,4);
        auVar94 = NEON_fmin(auVar71,auVar94,4);
        fVar104 = fVar104 - auVar94._0_4_;
        fVar76 = fVar76 - auVar94._4_4_;
        fVar79 = fVar79 - auVar94._8_4_;
        fVar81 = fVar81 - auVar94._12_4_;
        auVar72._0_4_ = fVar104 * fVar104;
        auVar72._4_4_ = fVar76 * fVar76;
        auVar72._8_4_ = fVar79 * fVar79;
        auVar72._12_4_ = fVar81 * fVar81;
        auVar127 = NEON_ext(auVar72,auVar72,8,1);
        uVar54 = NEON_fmax(uVar22,*(undefined8 *)(*(long *)(param_5 + 0x1f8) + 0x10),4);
        auVar94 = *(undefined1 (*) [16])(*(long *)(param_5 + 0x150) + 0x40);
        FUN_0333e220(lVar4,&local_130,&local_a0);
        iVar27 = local_110;
        uVar44 = local_140;
        fVar81 = fStack_144;
        fVar109 = fStack_148;
        fVar79 = fStack_14c;
        fVar107 = local_150;
        fVar76 = fStack_154;
        fVar77 = fStack_158;
        fVar104 = fStack_15c;
        fVar48 = local_160;
        fVar112 = local_230 * (fStack_90 - local_a0);
        fVar78 = fStack_22c * (fStack_8c - fStack_9c);
        fVar80 = fStack_228 * (fStack_88 - fStack_98);
        fVar82 = fStack_224 * (fStack_84 - fStack_94);
        fVar106 = local_230 * (local_a0 + fStack_90);
        fVar108 = fStack_22c * (fStack_9c + fStack_8c);
        fVar111 = fStack_228 * (fStack_98 + fStack_88);
        fVar114 = fStack_224 * (fStack_94 + fStack_84);
        auVar101._0_4_ = fVar83 * auVar94._0_4_ - fVar112;
        auVar101._4_4_ = fVar86 * auVar94._4_4_ - fVar78;
        auVar101._8_4_ = fVar89 * auVar94._8_4_ - fVar80;
        auVar101._12_4_ = auVar94._12_4_ * 0.0 - fVar82;
        auVar73._0_4_ = fVar115 * auVar94._0_4_ + fVar112;
        auVar73._4_4_ = fVar118 * auVar94._4_4_ + fVar78;
        auVar73._8_4_ = fVar119 * auVar94._8_4_ + fVar80;
        auVar73._12_4_ = auVar94._12_4_ * 0.0 + fVar82;
        auVar13._4_4_ = fVar108;
        auVar13._0_4_ = fVar106;
        auVar13._8_4_ = fVar111;
        auVar13._12_4_ = fVar114;
        auVar94 = NEON_fmax(auVar101,auVar13,4);
        uVar49 = CONCAT44(fStack_12c,local_130);
        auVar121._8_4_ = fStack_128;
        auVar121._0_8_ = uVar49;
        auVar121._12_4_ = uStack_124;
        uVar50 = CONCAT44(fStack_11c,local_120);
        auVar116._8_4_ = fStack_118;
        auVar116._0_8_ = uVar50;
        auVar116._12_4_ = uStack_114;
        auVar94 = NEON_fmin(auVar73,auVar94,4);
        fVar106 = fVar106 - auVar94._0_4_;
        fVar108 = fVar108 - auVar94._4_4_;
        fVar111 = fVar111 - auVar94._8_4_;
        fVar114 = fVar114 - auVar94._12_4_;
        auVar74._0_4_ = fVar106 * fVar106;
        auVar74._4_4_ = fVar108 * fVar108;
        auVar74._8_4_ = fVar111 * fVar111;
        auVar74._12_4_ = fVar114 * fVar114;
        auVar94 = NEON_ext(auVar74,auVar74,8,1);
        if (auVar74._0_4_ + auVar74._4_4_ + auVar94._0_4_ <= (float)uVar54 * (float)uVar54) {
          uVar39 = *(uint *)(param_4 + 1);
          uVar42 = (ulong)uVar39;
          uVar40 = *(uint *)((long)param_4 + 0xc);
          lVar47 = *param_4;
          uVar41 = uVar39 + 1;
          if ((int)uVar39 < (int)(uVar40 & 0x3fffffff)) {
            lVar46 = lVar47;
          }
          else {
            if (0x3ffffffe < (int)uVar39) {
              FUN_032bd0a8(uVar41);
              uVar40 = *(uint *)((long)param_4 + 0xc);
            }
            uVar29 = (uVar40 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar29) {
              uVar29 = 0x3fffffff;
            }
            uVar31 = uVar41;
            if ((int)uVar41 <= (int)uVar29) {
              uVar31 = uVar29;
            }
            FUN_032bd100(uVar31,0x60,uVar40,&local_a0);
            uVar40 = *(uint *)((long)param_4 + 0xc);
            lVar46 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar39) {
              uVar45 = uVar42 & 3;
              if (uVar42 - 1 < 3) {
                lVar37 = 0;
              }
              else {
                lVar37 = 0;
                puVar34 = (undefined8 *)(lVar46 + 0xc0);
                puVar38 = (undefined8 *)(lVar47 + 0xc0);
                do {
                  uVar54 = puVar38[-0xd];
                  lVar37 = lVar37 + 4;
                  puVar34[-0xf] = puVar38[-0xf];
                  puVar34[-0xd] = uVar54;
                  uVar54 = puVar38[-0x11];
                  puVar34[-0x13] = puVar38[-0x13];
                  puVar34[-0x11] = uVar54;
                  uVar54 = puVar38[-0x15];
                  puVar34[-0x17] = puVar38[-0x17];
                  puVar34[-0x15] = uVar54;
                  uVar54 = puVar38[-0x18];
                  puVar34[-0x16] = puVar38[-0x16];
                  puVar34[-0x18] = uVar54;
                  uVar54 = puVar38[-0x14];
                  puVar34[-0x12] = puVar38[-0x12];
                  puVar34[-0x14] = uVar54;
                  uVar54 = puVar38[-0x10];
                  puVar34[-0xe] = puVar38[-0xe];
                  puVar34[-0x10] = uVar54;
                  uVar54 = puVar38[-1];
                  puVar34[-3] = puVar38[-3];
                  puVar34[-1] = uVar54;
                  uVar54 = puVar38[-5];
                  puVar34[-7] = puVar38[-7];
                  puVar34[-5] = uVar54;
                  uVar54 = puVar38[-9];
                  puVar34[-0xb] = puVar38[-0xb];
                  puVar34[-9] = uVar54;
                  uVar54 = puVar38[-0xc];
                  puVar34[-10] = puVar38[-10];
                  puVar34[-0xc] = uVar54;
                  uVar54 = puVar38[-8];
                  puVar34[-6] = puVar38[-6];
                  puVar34[-8] = uVar54;
                  uVar54 = puVar38[-4];
                  puVar34[-2] = puVar38[-2];
                  puVar34[-4] = uVar54;
                  uVar54 = puVar38[0xb];
                  puVar34[9] = puVar38[9];
                  puVar34[0xb] = uVar54;
                  uVar54 = puVar38[7];
                  puVar34[5] = puVar38[5];
                  puVar34[7] = uVar54;
                  uVar54 = puVar38[3];
                  puVar34[1] = puVar38[1];
                  puVar34[3] = uVar54;
                  uVar54 = *puVar38;
                  puVar34[2] = puVar38[2];
                  *puVar34 = uVar54;
                  uVar54 = puVar38[4];
                  puVar34[6] = puVar38[6];
                  puVar34[4] = uVar54;
                  uVar54 = puVar38[8];
                  puVar34[10] = puVar38[10];
                  puVar34[8] = uVar54;
                  uVar54 = puVar38[0x17];
                  puVar34[0x15] = puVar38[0x15];
                  puVar34[0x17] = uVar54;
                  uVar54 = puVar38[0x13];
                  puVar34[0x11] = puVar38[0x11];
                  puVar34[0x13] = uVar54;
                  uVar54 = puVar38[0xf];
                  puVar34[0xd] = puVar38[0xd];
                  puVar34[0xf] = uVar54;
                  uVar54 = puVar38[0xc];
                  puVar34[0xe] = puVar38[0xe];
                  puVar34[0xc] = uVar54;
                  uVar54 = puVar38[0x10];
                  puVar34[0x12] = puVar38[0x12];
                  puVar34[0x10] = uVar54;
                  uVar54 = puVar38[0x14];
                  puVar34[0x16] = puVar38[0x16];
                  puVar34[0x14] = uVar54;
                  puVar34 = puVar34 + 0x30;
                  puVar38 = puVar38 + 0x30;
                } while (uVar42 - uVar45 != lVar37);
              }
              if ((uVar39 & 3) != 0) {
                puVar34 = (undefined8 *)(lVar47 + lVar37 * 0x60);
                puVar38 = (undefined8 *)(lVar46 + lVar37 * 0x60);
                do {
                  uVar54 = puVar34[0xb];
                  uVar45 = uVar45 - 1;
                  puVar38[9] = puVar34[9];
                  puVar38[0xb] = uVar54;
                  uVar54 = puVar34[7];
                  puVar38[5] = puVar34[5];
                  puVar38[7] = uVar54;
                  uVar54 = puVar34[3];
                  puVar38[1] = puVar34[1];
                  puVar38[3] = uVar54;
                  uVar54 = *puVar34;
                  puVar38[2] = puVar34[2];
                  *puVar38 = uVar54;
                  uVar54 = puVar34[4];
                  puVar38[6] = puVar34[6];
                  puVar38[4] = uVar54;
                  uVar54 = puVar34[8];
                  puVar38[10] = puVar34[10];
                  puVar38[8] = uVar54;
                  puVar34 = puVar34 + 0xc;
                  puVar38 = puVar38 + 0xc;
                } while (uVar45 != 0);
              }
            }
            if (-1 < (int)uVar40) {
              (**(code **)(*plVar43 + 0x18))(plVar43,lVar47,((ulong)uVar40 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar30 = 0x3fffffff;
            }
            auVar121._8_8_ = auVar121._8_8_;
            auVar116._8_8_ = auVar116._8_8_;
            *(undefined4 *)((long)param_4 + 0xc) = uVar30;
            *param_4 = lVar46;
            uVar39 = *(uint *)(param_4 + 1);
          }
          puVar34 = (undefined8 *)(lVar46 + (long)(int)uVar39 * 0x60);
          *(uint *)(param_4 + 1) = uVar41;
          *(int *)(puVar34 + 4) = iVar5;
          puVar34[1] = (ulong)(uint)fVar89;
          *puVar34 = CONCAT44(fVar86,fVar83);
          puVar34[3] = (ulong)(uint)fVar119;
          puVar34[2] = CONCAT44(fVar118,fVar115);
          *(int *)(puVar34 + 10) = iVar27;
          puVar34[7] = auVar121._8_8_;
          puVar34[6] = auVar121._0_8_;
          puVar34[9] = auVar116._8_8_;
          puVar34[8] = auVar116._0_8_;
        }
        auVar103._4_4_ = fVar85;
        auVar103._0_4_ = fVar124;
        auVar103._8_4_ = fVar88;
        auVar103._12_4_ = 0;
        auVar75._4_4_ = fVar84;
        auVar75._0_4_ = fVar123;
        auVar75._8_4_ = fVar87;
        auVar75._12_4_ = 0;
        if (auVar72._0_4_ + auVar72._4_4_ + auVar127._0_4_ <= (float)uVar53 * (float)uVar53) {
          uVar39 = *(uint *)(param_4 + 1);
          uVar42 = (ulong)uVar39;
          uVar40 = *(uint *)((long)param_4 + 0xc);
          lVar46 = *param_4;
          uVar41 = uVar39 + 1;
          lVar47 = lVar46;
          if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
            if (0x3ffffffe < (int)uVar39) {
              FUN_032bd0a8(uVar41);
              uVar40 = *(uint *)((long)param_4 + 0xc);
            }
            uVar29 = (uVar40 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar29) {
              uVar29 = 0x3fffffff;
            }
            uVar31 = uVar41;
            if ((int)uVar41 <= (int)uVar29) {
              uVar31 = uVar29;
            }
            FUN_032bd100(uVar31,0x60,uVar40,&local_a0);
            uVar40 = *(uint *)((long)param_4 + 0xc);
            lVar47 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar39) {
              uVar45 = uVar42 & 3;
              if (uVar42 - 1 < 3) {
                lVar37 = 0;
              }
              else {
                lVar37 = 0;
                puVar34 = (undefined8 *)(lVar47 + 0xc0);
                puVar38 = (undefined8 *)(lVar46 + 0xc0);
                do {
                  uVar49 = puVar38[-0xd];
                  lVar37 = lVar37 + 4;
                  puVar34[-0xf] = puVar38[-0xf];
                  puVar34[-0xd] = uVar49;
                  uVar49 = puVar38[-0x11];
                  puVar34[-0x13] = puVar38[-0x13];
                  puVar34[-0x11] = uVar49;
                  uVar49 = puVar38[-0x15];
                  puVar34[-0x17] = puVar38[-0x17];
                  puVar34[-0x15] = uVar49;
                  uVar49 = puVar38[-0x18];
                  puVar34[-0x16] = puVar38[-0x16];
                  puVar34[-0x18] = uVar49;
                  uVar49 = puVar38[-0x14];
                  puVar34[-0x12] = puVar38[-0x12];
                  puVar34[-0x14] = uVar49;
                  uVar49 = puVar38[-0x10];
                  puVar34[-0xe] = puVar38[-0xe];
                  puVar34[-0x10] = uVar49;
                  uVar49 = puVar38[-1];
                  puVar34[-3] = puVar38[-3];
                  puVar34[-1] = uVar49;
                  uVar49 = puVar38[-5];
                  puVar34[-7] = puVar38[-7];
                  puVar34[-5] = uVar49;
                  uVar49 = puVar38[-9];
                  puVar34[-0xb] = puVar38[-0xb];
                  puVar34[-9] = uVar49;
                  uVar49 = puVar38[-0xc];
                  puVar34[-10] = puVar38[-10];
                  puVar34[-0xc] = uVar49;
                  uVar49 = puVar38[-8];
                  puVar34[-6] = puVar38[-6];
                  puVar34[-8] = uVar49;
                  uVar49 = puVar38[-4];
                  puVar34[-2] = puVar38[-2];
                  puVar34[-4] = uVar49;
                  uVar49 = puVar38[0xb];
                  puVar34[9] = puVar38[9];
                  puVar34[0xb] = uVar49;
                  uVar49 = puVar38[7];
                  puVar34[5] = puVar38[5];
                  puVar34[7] = uVar49;
                  uVar49 = puVar38[3];
                  puVar34[1] = puVar38[1];
                  puVar34[3] = uVar49;
                  uVar49 = *puVar38;
                  puVar34[2] = puVar38[2];
                  *puVar34 = uVar49;
                  uVar49 = puVar38[4];
                  puVar34[6] = puVar38[6];
                  puVar34[4] = uVar49;
                  uVar49 = puVar38[8];
                  puVar34[10] = puVar38[10];
                  puVar34[8] = uVar49;
                  uVar49 = puVar38[0x17];
                  puVar34[0x15] = puVar38[0x15];
                  puVar34[0x17] = uVar49;
                  uVar49 = puVar38[0x13];
                  puVar34[0x11] = puVar38[0x11];
                  puVar34[0x13] = uVar49;
                  uVar49 = puVar38[0xf];
                  puVar34[0xd] = puVar38[0xd];
                  puVar34[0xf] = uVar49;
                  uVar49 = puVar38[0xc];
                  puVar34[0xe] = puVar38[0xe];
                  puVar34[0xc] = uVar49;
                  uVar49 = puVar38[0x10];
                  puVar34[0x12] = puVar38[0x12];
                  puVar34[0x10] = uVar49;
                  uVar49 = puVar38[0x14];
                  puVar34[0x16] = puVar38[0x16];
                  puVar34[0x14] = uVar49;
                  puVar34 = puVar34 + 0x30;
                  puVar38 = puVar38 + 0x30;
                } while (uVar42 - uVar45 != lVar37);
              }
              if ((uVar39 & 3) != 0) {
                puVar34 = (undefined8 *)(lVar46 + lVar37 * 0x60);
                puVar38 = (undefined8 *)(lVar47 + lVar37 * 0x60);
                do {
                  uVar49 = puVar34[0xb];
                  uVar45 = uVar45 - 1;
                  puVar38[9] = puVar34[9];
                  puVar38[0xb] = uVar49;
                  uVar49 = puVar34[7];
                  puVar38[5] = puVar34[5];
                  puVar38[7] = uVar49;
                  uVar49 = puVar34[3];
                  puVar38[1] = puVar34[1];
                  puVar38[3] = uVar49;
                  uVar49 = *puVar34;
                  puVar38[2] = puVar34[2];
                  *puVar38 = uVar49;
                  uVar49 = puVar34[4];
                  puVar38[6] = puVar34[6];
                  puVar38[4] = uVar49;
                  uVar49 = puVar34[8];
                  puVar38[10] = puVar34[10];
                  puVar38[8] = uVar49;
                  puVar34 = puVar34 + 0xc;
                  puVar38 = puVar38 + 0xc;
                } while (uVar45 != 0);
              }
            }
            if (-1 < (int)uVar40) {
              (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar40 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar30 = 0x3fffffff;
            }
            auVar103._12_4_ = 0;
            auVar75._12_4_ = 0;
            uVar39 = *(uint *)(param_4 + 1);
            *(undefined4 *)((long)param_4 + 0xc) = uVar30;
            *param_4 = lVar47;
          }
          puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar39 * 0x60);
          *(uint *)(param_4 + 1) = uVar41;
          puVar34[1] = (ulong)(uint)fVar89;
          *puVar34 = CONCAT44(fVar86,fVar83);
          *(int *)(puVar34 + 4) = iVar5;
          puVar34[3] = (ulong)(uint)fVar119;
          puVar34[2] = CONCAT44(fVar118,fVar115);
          *(uint *)(puVar34 + 10) = uVar44;
          puVar34[7] = CONCAT44(fVar76,fVar77);
          puVar34[6] = CONCAT44(fVar104,fVar48);
          puVar34[9] = CONCAT44(fVar81,fVar109);
          puVar34[8] = CONCAT44(fVar79,fVar107);
        }
        if (auVar70._0_4_ + auVar70._4_4_ + auVar90._0_4_ <= (float)uVar52 * (float)uVar52) {
          uVar39 = *(uint *)(param_4 + 1);
          uVar42 = (ulong)uVar39;
          uVar40 = *(uint *)((long)param_4 + 0xc);
          lVar46 = *param_4;
          uVar41 = uVar39 + 1;
          lVar47 = lVar46;
          if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
            if (0x3ffffffe < (int)uVar39) {
              FUN_032bd0a8(uVar41);
              uVar40 = *(uint *)((long)param_4 + 0xc);
            }
            uVar29 = (uVar40 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar29) {
              uVar29 = 0x3fffffff;
            }
            uVar31 = uVar41;
            if ((int)uVar41 <= (int)uVar29) {
              uVar31 = uVar29;
            }
            FUN_032bd100(uVar31,0x60,uVar40,&local_a0);
            uVar40 = *(uint *)((long)param_4 + 0xc);
            lVar47 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
            if (0 < (int)uVar39) {
              uVar45 = uVar42 & 3;
              if (uVar42 - 1 < 3) {
                lVar37 = 0;
              }
              else {
                lVar37 = 0;
                puVar34 = (undefined8 *)(lVar47 + 0xc0);
                puVar38 = (undefined8 *)(lVar46 + 0xc0);
                do {
                  uVar49 = puVar38[-0xd];
                  lVar37 = lVar37 + 4;
                  puVar34[-0xf] = puVar38[-0xf];
                  puVar34[-0xd] = uVar49;
                  uVar49 = puVar38[-0x11];
                  puVar34[-0x13] = puVar38[-0x13];
                  puVar34[-0x11] = uVar49;
                  uVar49 = puVar38[-0x15];
                  puVar34[-0x17] = puVar38[-0x17];
                  puVar34[-0x15] = uVar49;
                  uVar49 = puVar38[-0x18];
                  puVar34[-0x16] = puVar38[-0x16];
                  puVar34[-0x18] = uVar49;
                  uVar49 = puVar38[-0x14];
                  puVar34[-0x12] = puVar38[-0x12];
                  puVar34[-0x14] = uVar49;
                  uVar49 = puVar38[-0x10];
                  puVar34[-0xe] = puVar38[-0xe];
                  puVar34[-0x10] = uVar49;
                  uVar49 = puVar38[-1];
                  puVar34[-3] = puVar38[-3];
                  puVar34[-1] = uVar49;
                  uVar49 = puVar38[-5];
                  puVar34[-7] = puVar38[-7];
                  puVar34[-5] = uVar49;
                  uVar49 = puVar38[-9];
                  puVar34[-0xb] = puVar38[-0xb];
                  puVar34[-9] = uVar49;
                  uVar49 = puVar38[-0xc];
                  puVar34[-10] = puVar38[-10];
                  puVar34[-0xc] = uVar49;
                  uVar49 = puVar38[-8];
                  puVar34[-6] = puVar38[-6];
                  puVar34[-8] = uVar49;
                  uVar49 = puVar38[-4];
                  puVar34[-2] = puVar38[-2];
                  puVar34[-4] = uVar49;
                  uVar49 = puVar38[0xb];
                  puVar34[9] = puVar38[9];
                  puVar34[0xb] = uVar49;
                  uVar49 = puVar38[7];
                  puVar34[5] = puVar38[5];
                  puVar34[7] = uVar49;
                  uVar49 = puVar38[3];
                  puVar34[1] = puVar38[1];
                  puVar34[3] = uVar49;
                  uVar49 = *puVar38;
                  puVar34[2] = puVar38[2];
                  *puVar34 = uVar49;
                  uVar49 = puVar38[4];
                  puVar34[6] = puVar38[6];
                  puVar34[4] = uVar49;
                  uVar49 = puVar38[8];
                  puVar34[10] = puVar38[10];
                  puVar34[8] = uVar49;
                  uVar49 = puVar38[0x17];
                  puVar34[0x15] = puVar38[0x15];
                  puVar34[0x17] = uVar49;
                  uVar49 = puVar38[0x13];
                  puVar34[0x11] = puVar38[0x11];
                  puVar34[0x13] = uVar49;
                  uVar49 = puVar38[0xf];
                  puVar34[0xd] = puVar38[0xd];
                  puVar34[0xf] = uVar49;
                  uVar49 = puVar38[0xc];
                  puVar34[0xe] = puVar38[0xe];
                  puVar34[0xc] = uVar49;
                  uVar49 = puVar38[0x10];
                  puVar34[0x12] = puVar38[0x12];
                  puVar34[0x10] = uVar49;
                  uVar49 = puVar38[0x14];
                  puVar34[0x16] = puVar38[0x16];
                  puVar34[0x14] = uVar49;
                  puVar34 = puVar34 + 0x30;
                  puVar38 = puVar38 + 0x30;
                } while (uVar42 - uVar45 != lVar37);
              }
              if ((uVar39 & 3) != 0) {
                puVar34 = (undefined8 *)(lVar46 + lVar37 * 0x60);
                puVar38 = (undefined8 *)(lVar47 + lVar37 * 0x60);
                do {
                  uVar49 = puVar34[0xb];
                  uVar45 = uVar45 - 1;
                  puVar38[9] = puVar34[9];
                  puVar38[0xb] = uVar49;
                  uVar49 = puVar34[7];
                  puVar38[5] = puVar34[5];
                  puVar38[7] = uVar49;
                  uVar49 = puVar34[3];
                  puVar38[1] = puVar34[1];
                  puVar38[3] = uVar49;
                  uVar49 = *puVar34;
                  puVar38[2] = puVar34[2];
                  *puVar38 = uVar49;
                  uVar49 = puVar34[4];
                  puVar38[6] = puVar34[6];
                  puVar38[4] = uVar49;
                  uVar49 = puVar34[8];
                  puVar38[10] = puVar34[10];
                  puVar38[8] = uVar49;
                  puVar34 = puVar34 + 0xc;
                  puVar38 = puVar38 + 0xc;
                } while (uVar45 != 0);
              }
            }
            if (-1 < (int)uVar40) {
              (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar40 & 0x3fffffff) * 0x60);
            }
            if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
              uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
            }
            else {
              uVar30 = 0x3fffffff;
            }
            auVar103._12_4_ = 0;
            auVar75._12_4_ = 0;
            uVar39 = *(uint *)(param_4 + 1);
            *(undefined4 *)((long)param_4 + 0xc) = uVar30;
            *param_4 = lVar47;
          }
          puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar39 * 0x60);
          *(uint *)(param_4 + 1) = uVar41;
          *(int *)(puVar34 + 4) = iVar3;
          puVar34[1] = auVar75._8_8_;
          *puVar34 = auVar75._0_8_;
          puVar34[3] = auVar103._8_8_;
          puVar34[2] = auVar103._0_8_;
          *(int *)(puVar34 + 10) = iVar27;
          puVar34[7] = auVar121._8_8_;
          puVar34[6] = auVar121._0_8_;
          puVar34[9] = auVar116._8_8_;
          puVar34[8] = auVar116._0_8_;
        }
        if ((float)uVar51 * (float)uVar51 < auVar68._0_4_ + auVar68._4_4_ + auVar55._0_4_)
        goto LAB_0019c9cc;
        uVar39 = *(uint *)(param_4 + 1);
        uVar42 = (ulong)uVar39;
        uVar40 = *(uint *)((long)param_4 + 0xc);
        lVar46 = *param_4;
        uVar41 = uVar39 + 1;
        lVar47 = lVar46;
        if ((int)(uVar40 & 0x3fffffff) <= (int)uVar39) {
          if (0x3ffffffe < (int)uVar39) {
            FUN_032bd0a8(uVar41);
            uVar40 = *(uint *)((long)param_4 + 0xc);
          }
          uVar29 = (uVar40 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar29) {
            uVar29 = 0x3fffffff;
          }
          uVar31 = uVar41;
          if ((int)uVar41 <= (int)uVar29) {
            uVar31 = uVar29;
          }
          FUN_032bd100(uVar31,0x60,uVar40,&local_a0);
          uVar40 = *(uint *)((long)param_4 + 0xc);
          lVar47 = (**(code **)(*plVar43 + 0x10))(plVar43,CONCAT44(fStack_9c,local_a0),&local_a0);
          if (0 < (int)uVar39) {
            uVar45 = uVar42 & 3;
            if (uVar42 - 1 < 3) {
              lVar37 = 0;
            }
            else {
              lVar37 = 0;
              puVar34 = (undefined8 *)(lVar47 + 0xc0);
              puVar38 = (undefined8 *)(lVar46 + 0xc0);
              do {
                uVar49 = puVar38[-0xd];
                lVar37 = lVar37 + 4;
                puVar34[-0xf] = puVar38[-0xf];
                puVar34[-0xd] = uVar49;
                uVar49 = puVar38[-0x11];
                puVar34[-0x13] = puVar38[-0x13];
                puVar34[-0x11] = uVar49;
                uVar49 = puVar38[-0x15];
                puVar34[-0x17] = puVar38[-0x17];
                puVar34[-0x15] = uVar49;
                uVar49 = puVar38[-0x18];
                puVar34[-0x16] = puVar38[-0x16];
                puVar34[-0x18] = uVar49;
                uVar49 = puVar38[-0x14];
                puVar34[-0x12] = puVar38[-0x12];
                puVar34[-0x14] = uVar49;
                uVar49 = puVar38[-0x10];
                puVar34[-0xe] = puVar38[-0xe];
                puVar34[-0x10] = uVar49;
                uVar49 = puVar38[-1];
                puVar34[-3] = puVar38[-3];
                puVar34[-1] = uVar49;
                uVar49 = puVar38[-5];
                puVar34[-7] = puVar38[-7];
                puVar34[-5] = uVar49;
                uVar49 = puVar38[-9];
                puVar34[-0xb] = puVar38[-0xb];
                puVar34[-9] = uVar49;
                uVar49 = puVar38[-0xc];
                puVar34[-10] = puVar38[-10];
                puVar34[-0xc] = uVar49;
                uVar49 = puVar38[-8];
                puVar34[-6] = puVar38[-6];
                puVar34[-8] = uVar49;
                uVar49 = puVar38[-4];
                puVar34[-2] = puVar38[-2];
                puVar34[-4] = uVar49;
                uVar49 = puVar38[0xb];
                puVar34[9] = puVar38[9];
                puVar34[0xb] = uVar49;
                uVar49 = puVar38[7];
                puVar34[5] = puVar38[5];
                puVar34[7] = uVar49;
                uVar49 = puVar38[3];
                puVar34[1] = puVar38[1];
                puVar34[3] = uVar49;
                uVar49 = *puVar38;
                puVar34[2] = puVar38[2];
                *puVar34 = uVar49;
                uVar49 = puVar38[4];
                puVar34[6] = puVar38[6];
                puVar34[4] = uVar49;
                uVar49 = puVar38[8];
                puVar34[10] = puVar38[10];
                puVar34[8] = uVar49;
                uVar49 = puVar38[0x17];
                puVar34[0x15] = puVar38[0x15];
                puVar34[0x17] = uVar49;
                uVar49 = puVar38[0x13];
                puVar34[0x11] = puVar38[0x11];
                puVar34[0x13] = uVar49;
                uVar49 = puVar38[0xf];
                puVar34[0xd] = puVar38[0xd];
                puVar34[0xf] = uVar49;
                uVar49 = puVar38[0xc];
                puVar34[0xe] = puVar38[0xe];
                puVar34[0xc] = uVar49;
                uVar49 = puVar38[0x10];
                puVar34[0x12] = puVar38[0x12];
                puVar34[0x10] = uVar49;
                uVar49 = puVar38[0x14];
                puVar34[0x16] = puVar38[0x16];
                puVar34[0x14] = uVar49;
                puVar34 = puVar34 + 0x30;
                puVar38 = puVar38 + 0x30;
              } while (uVar42 - uVar45 != lVar37);
            }
            if ((uVar39 & 3) != 0) {
              puVar34 = (undefined8 *)(lVar46 + lVar37 * 0x60);
              puVar38 = (undefined8 *)(lVar47 + lVar37 * 0x60);
              do {
                uVar49 = puVar34[0xb];
                uVar45 = uVar45 - 1;
                puVar38[9] = puVar34[9];
                puVar38[0xb] = uVar49;
                uVar49 = puVar34[7];
                puVar38[5] = puVar34[5];
                puVar38[7] = uVar49;
                uVar49 = puVar34[3];
                puVar38[1] = puVar34[1];
                puVar38[3] = uVar49;
                uVar49 = *puVar34;
                puVar38[2] = puVar34[2];
                *puVar38 = uVar49;
                uVar49 = puVar34[4];
                puVar38[6] = puVar34[6];
                puVar38[4] = uVar49;
                uVar49 = puVar34[8];
                puVar38[10] = puVar34[10];
                puVar38[8] = uVar49;
                puVar34 = puVar34 + 0xc;
                puVar38 = puVar38 + 0xc;
              } while (uVar45 != 0);
            }
          }
          if (-1 < (int)uVar40) {
            (**(code **)(*plVar43 + 0x18))(plVar43,lVar46,((ulong)uVar40 & 0x3fffffff) * 0x60);
          }
          if (CONCAT44(fStack_9c,local_a0) < 0x17ffffffa0) {
            uVar30 = (undefined4)(CONCAT44(fStack_9c,local_a0) / 0x60);
          }
          else {
            uVar30 = 0x3fffffff;
          }
          auVar103._12_4_ = 0;
          auVar75._12_4_ = 0;
          *(undefined4 *)((long)param_4 + 0xc) = uVar30;
          *param_4 = lVar47;
          uVar39 = *(uint *)(param_4 + 1);
        }
        puVar34 = (undefined8 *)(lVar47 + (long)(int)uVar39 * 0x60);
        *(uint *)(param_4 + 1) = uVar41;
        *(int *)(puVar34 + 4) = iVar3;
        puVar34[1] = auVar75._8_8_;
        *puVar34 = auVar75._0_8_;
        puVar34[3] = auVar103._8_8_;
        puVar34[2] = auVar103._0_8_;
        *(uint *)(puVar34 + 10) = uVar44;
        puVar34[7] = CONCAT44(fVar76,fVar77);
        puVar34[6] = CONCAT44(fVar104,fVar48);
        uVar49 = CONCAT44(fVar79,fVar107);
        auVar23._8_4_ = fVar109;
        auVar23._0_8_ = uVar49;
        auVar23._12_4_ = fVar81;
        puVar34[9] = auVar23._8_8_;
        puVar34[8] = uVar49;
        iVar3 = (int)param_4[1];
      }
    }
    if (iVar3 <= (int)lVar25) {
      return;
    }
  } while( true );
}


