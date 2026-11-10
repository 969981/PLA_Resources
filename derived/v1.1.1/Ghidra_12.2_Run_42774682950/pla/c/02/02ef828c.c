/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef828c; name: FUN_02ef828c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02ef828c(undefined4 param_1,ulong param_2,float *param_3,long *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float __x;
  float __x_00;
  float afStack_380 [46];
  float local_2c8;
  float local_2c4;
  float local_2c0;
  undefined4 local_2bc;
  float local_2b8;
  float fStack_2b4;
  undefined4 local_2b0;
  float local_2ac;
  float fStack_2a8;
  undefined4 local_2a4;
  float local_2a0;
  float fStack_29c;
  undefined4 local_298;
  float local_294;
  float fStack_290;
  undefined4 local_28c;
  float local_288;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined4 local_264;
  float local_260;
  undefined4 local_25c;
  float local_258;
  undefined8 local_254;
  undefined4 local_24c;
  float local_248;
  undefined4 local_244;
  float local_240;
  float fStack_23c;
  undefined4 local_238;
  float local_234;
  float fStack_230;
  undefined4 local_22c;
  float local_228;
  float fStack_224;
  undefined4 local_220;
  float local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  float local_200;
  undefined4 local_1fc;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  float local_1ec;
  float fStack_1e8;
  undefined4 local_1e4;
  float local_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  float local_1d4;
  float fStack_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  float local_18c;
  undefined8 local_188;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  undefined4 local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  
  if ((param_2 & 0xff9c0000) != 0) {
    uVar1 = (uint)param_2;
    lVar9 = -((ulong)((uVar1 & 0xff) * 0xc + 0xf) & 0x1ff0);
    puVar2 = (undefined4 *)((long)register0x00000008 + lVar9 + -0x30);
    fVar12 = *param_3;
    *(float *)((long)register0x00000008 + lVar9 + -0x2c) = fVar12;
    *(undefined8 *)((long)register0x00000008 + lVar9 + -0x28) = 0x3f80000000000000;
    uVar10 = (param_2 & 0xffffffff) >> 0xc;
    *puVar2 = 0x3f800000;
    *(float *)((long)register0x00000008 + lVar9 + -0x20) = -fVar12;
    *(undefined4 *)((long)register0x00000008 + lVar9 + -0x1c) = 0;
    if ((uVar1 >> 0xe & 1) == 0) {
      uVar5 = 2;
    }
    else {
      *(undefined8 *)((long)register0x00000008 + lVar9 + -0x18) = 0x3f800000;
      uVar5 = 3;
      *(undefined4 *)((long)register0x00000008 + lVar9 + -0x10) = 0;
    }
    if ((uVar10 & 0x210) != 0) {
      if (((uint)uVar10 & 0x210) == 0x210) {
        fVar13 = param_3[2];
        puVar7 = puVar2 + uVar5 * 3;
        puVar7[2] = 0;
        *puVar7 = 0x3f800000;
        puVar7[1] = fVar13;
        puVar7 = puVar2 + (ulong)((int)uVar5 + 1) * 3;
        puVar7[1] = -fVar13;
        puVar7[2] = 0;
        *puVar7 = 0x3f800000;
        fVar13 = param_3[1];
        uVar5 = (ulong)((int)uVar5 + 2);
      }
      else {
        fVar13 = param_3[1] + (param_3[2] - param_3[1]) * 0.5;
      }
      puVar8 = puVar2 + uVar5 * 3;
      puVar7 = puVar2 + (ulong)((int)uVar5 + 1) * 3;
      uVar5 = (ulong)((int)uVar5 + 2);
      puVar8[1] = fVar13;
      puVar8[2] = 0;
      *puVar8 = 0x3f800000;
      puVar7[1] = -fVar13;
      puVar7[2] = 0;
      *puVar7 = 0x3f800000;
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      lVar9 = uVar5 * 3;
      *(undefined4 *)((long)(puVar2 + lVar9) + 8) = 0x3fc90fdb;
      uVar5 = (ulong)((int)uVar5 + 1);
      *(undefined8 *)(puVar2 + lVar9) = 0x3f800000;
    }
    if ((uVar1 >> 0x18 & 1) != 0) {
      puVar7 = puVar2 + uVar5 * 3;
      uVar5 = (ulong)((int)uVar5 + 1);
      puVar7[1] = fVar12;
      puVar7[2] = param_1;
      *puVar7 = 0x3f800000;
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      lVar9 = uVar5 * 3;
      uVar5 = (ulong)((int)uVar5 + 1);
      *(undefined4 *)((long)(puVar2 + lVar9) + 8) = param_1;
      *(undefined8 *)(puVar2 + lVar9) = 0x3f800000;
    }
    if ((uVar1 >> 0x1a & 1) == 0) {
      fVar12 = param_3[2];
    }
    else {
      puVar7 = puVar2 + uVar5 * 3;
      uVar5 = (ulong)((int)uVar5 + 1);
      puVar7[1] = -fVar12;
      puVar7[2] = param_1;
      *puVar7 = 0x3f800000;
      fVar12 = param_3[2];
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      puVar7 = puVar2 + uVar5 * 3;
      uVar5 = (ulong)((int)uVar5 + 1);
      puVar7[1] = fVar12;
      puVar7[2] = param_1;
      *puVar7 = 0x3f800000;
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      *(undefined4 *)((long)(puVar2 + uVar5 * 3) + 8) = param_1;
      *(undefined8 *)(puVar2 + uVar5 * 3) = 0x3f800000;
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      puVar7 = puVar2 + uVar5 * 3;
      puVar7[1] = -fVar12;
      puVar7[2] = param_1;
      *puVar7 = 0x3f800000;
    }
    lVar9 = *param_4;
    *param_4 = 0;
    FUN_02ef88cc(&PTR_PTR_042a9240,puVar2,uVar1 & 0xff,param_4);
    if ((lVar9 != 0) && (*param_4 != 0)) {
      FUN_02f1245c(lVar9,&PTR_PTR_042a9240);
      (**(code **)(PTR_PTR_042a9240 + 0x18))(&PTR_PTR_042a9240,lVar9);
    }
    return;
  }
  lVar9 = *param_4;
  uVar11 = (uint)(param_2 & 0xff);
  uVar1 = uVar11 + 2;
  if (3 < uVar11) {
    uVar1 = uVar11;
  }
  uVar10 = (ulong)uVar1;
  if (lVar9 == 0) {
    lVar9 = FUN_02f59e30(0,uVar1 << 4);
    *param_4 = lVar9;
    if (lVar9 == 0) {
      return;
    }
  }
  fVar15 = *param_3;
  fVar12 = cosf(fVar15);
  __x = param_3[1];
  fVar17 = param_3[2];
  __x_00 = __x + (fVar17 - __x) * 0.5;
  fVar13 = cosf(__x_00);
  fVar14 = cosf(fVar17);
  fVar15 = sinf(fVar15);
  local_2c8 = sinf(fVar17);
  fVar18 = -fVar15;
  fVar16 = -local_2c8;
  local_2bc = 0;
  local_298 = 0;
  local_28c = 0;
  local_2b0 = 0;
  local_2a4 = 0;
  local_284 = 0;
  local_27c = 0;
  local_274 = 0;
  local_26c = 0;
  local_264 = 0;
  local_2c0 = fVar18;
  local_2b8 = fVar12;
  fStack_2b4 = fVar15;
  local_2ac = fVar12;
  fStack_2a8 = local_2c8;
  local_2a0 = fVar14;
  fStack_29c = fVar16;
  local_294 = fVar14;
  fStack_290 = fVar18;
  local_288 = fVar12;
  local_2c4 = cosf(__x);
  fVar17 = sinf(__x_00);
  local_110 = sinf(__x);
  local_200 = -fVar17;
  local_260 = fVar18;
  local_25c = 0;
  local_258 = fVar12;
  local_254 = 0;
  local_24c = 0x3f800000;
  local_248 = fVar15;
  local_244 = 0;
  local_240 = fVar12;
  fStack_23c = local_2c8;
  local_238 = 0;
  local_234 = fVar14;
  fStack_230 = fVar16;
  local_22c = 0;
  local_228 = fVar14;
  fStack_224 = fVar18;
  local_220 = 0;
  local_21c = fVar12;
  local_218 = 0;
  local_1fc = 0;
  local_1f8 = fVar13;
  fStack_1f4 = fVar18;
  local_1f0 = 0;
  local_1ec = fVar12;
  fStack_1e8 = fVar15;
  local_1e4 = 0;
  local_1e0 = fVar12;
  fStack_1dc = fVar17;
  local_1d8 = 0;
  local_1d4 = fVar13;
  fStack_1d0 = local_200;
  local_1cc = 0;
  local_1c8 = fVar13;
  local_1a4 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1ac = 0;
  local_1b4 = 0;
  local_1bc = 0;
  local_1c4 = 0;
  local_1a0 = local_200;
  local_164 = local_200;
  local_19c = 0;
  local_198 = fVar13;
  local_194 = fVar18;
  local_190 = 0;
  local_18c = fVar12;
  local_188 = 0;
  local_180 = 0x3f800000;
  local_17c = fVar15;
  local_178 = 0;
  local_174 = fVar12;
  local_170 = fVar17;
  local_16c = 0;
  local_168 = fVar13;
  local_160 = 0;
  local_15c = fVar13;
  local_158 = 0;
  local_140 = fVar16;
  local_13c = 0;
  local_138 = fVar14;
  local_134 = -local_110;
  local_130 = 0;
  local_12c = local_2c4;
  local_128 = fVar18;
  local_124 = 0;
  local_120 = fVar12;
  local_11c = fVar15;
  local_118 = 0;
  local_114 = fVar12;
  local_10c = 0;
  local_108 = local_2c4;
  local_104 = local_2c8;
  local_100 = 0;
  local_fc = fVar14;
  local_f8 = fVar16;
  local_f4 = 0;
  local_f0 = fVar14;
  local_150 = 0;
  uStack_148 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_e0 = fVar16;
  local_dc = 0;
  local_d8 = fVar14;
  local_d4 = -local_110;
  local_d0 = 0;
  local_cc = local_2c4;
  local_c8 = fVar18;
  local_c4 = 0;
  local_c0 = fVar12;
  local_bc = 0;
  local_b4 = 0x3f800000;
  pfVar3 = (float *)(lVar9 + 8);
  local_a4 = local_110;
  local_b0 = fVar15;
  local_ac = 0;
  local_a8 = fVar12;
  local_a0 = 0;
  local_9c = local_2c4;
  local_98 = local_2c8;
  local_94 = 0;
  local_90 = fVar14;
  local_8c = fVar16;
  local_88 = 0;
  local_84 = fVar14;
  pfVar6 = afStack_380 + (param_2 & 0xff) * 0x18;
  do {
    uVar10 = uVar10 - 1;
    pfVar4 = pfVar6 + 3;
    fVar12 = 1.0 / (pfVar6[5] * *pfVar6 - *pfVar4 * pfVar6[2]);
    pfVar3[-2] = fVar12 * pfVar6[5];
    pfVar3[-1] = -(*pfVar4 * fVar12);
    *pfVar3 = -(fVar12 * pfVar6[2]);
    pfVar3[1] = *pfVar6 * fVar12;
    pfVar3 = pfVar3 + 4;
    pfVar6 = pfVar4;
  } while (uVar10 != 0);
  return;
}


