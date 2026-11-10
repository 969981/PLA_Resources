/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b0e30; name: FUN_001b0e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0e30(undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  long lVar8;
  float fVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long local_3c0;
  int local_3b8;
  int local_3b4;
  undefined8 local_3b0 [4];
  undefined8 local_390;
  undefined1 *local_380;
  undefined4 local_378;
  uint local_374;
  undefined1 auStack_370 [64];
  undefined1 *local_330;
  undefined8 local_328;
  undefined1 auStack_320 [32];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined1 auStack_2c0 [64];
  undefined1 *local_280;
  undefined8 local_278;
  undefined1 auStack_270 [32];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined1 *local_220;
  undefined4 local_218;
  uint local_214;
  undefined1 auStack_210 [64];
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [32];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined1 *local_170;
  undefined4 local_168;
  uint local_164;
  undefined1 auStack_160 [64];
  undefined1 *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined1 *local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined1 auStack_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [32];
  
  puVar10 = PTR_DAT_04372370;
  lVar12 = param_2[1];
  pauVar1 = (undefined1 (*) [16])(PTR_DAT_04372370 + 0x240);
  uVar16 = *(undefined8 *)(PTR_DAT_04372370 + 0x248);
  uVar19 = *(undefined8 *)*pauVar1;
  auVar21 = *pauVar1;
  auVar28 = *pauVar1;
  lVar8 = tpidr_el0;
  lVar14 = *(long *)(lVar8 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar14;
  }
  uVar19 = CONCAT44(-(float)((ulong)uVar19 >> 0x20),-(float)uVar19);
  uVar16 = CONCAT44(-(float)((ulong)uVar16 >> 0x20),-(float)uVar16);
  lVar12 = FUN_032cf7a8(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x58),(long)(int)lVar12 << 4,0x10);
  uVar13 = (ulong)*(uint *)(param_2 + 1);
  if ((int)*(uint *)(param_2 + 1) < 1) {
    auVar29._8_8_ = uVar16;
    auVar29._0_8_ = uVar19;
    auVar28 = auVar21;
  }
  else {
    iVar4 = *(int *)((long)param_2 + 0xc);
    auVar29._8_8_ = uVar16;
    auVar29._0_8_ = uVar19;
    iVar3 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    lVar15 = 0;
    lVar14 = 0;
    do {
      puVar2 = (undefined8 *)(*param_2 + lVar15);
      lVar15 = lVar15 + (-(ulong)((uint)(iVar3 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar3 >> 2) << 2);
      uVar7 = *(undefined4 *)(puVar2 + 1);
      uVar19 = CONCAT44(uVar7,uVar7);
      auVar21._0_8_ = *puVar2;
      auVar21._8_8_ = uVar19;
      puVar2 = (undefined8 *)(lVar12 + lVar14 * 0x10);
      puVar2[1] = uVar19;
      *puVar2 = auVar21._0_8_;
      auVar28 = NEON_fmin(auVar28,auVar21,4);
      uVar13 = (ulong)(int)param_2[1];
      auVar29 = NEON_fmax(auVar29,auVar21,4);
      lVar14 = lVar14 + 1;
    } while (lVar14 < (long)uVar13);
  }
  auVar21 = *(undefined1 (*) [16])(puVar10 + 0x150);
  auVar22 = NEON_ext(auVar21,auVar21,8,1);
  auVar21 = NEON_ext(auVar22,auVar21,8,1);
  fVar23 = (auVar28._0_4_ + auVar29._0_4_) * auVar21._0_4_;
  fVar25 = (auVar28._4_4_ + auVar29._4_4_) * auVar21._4_4_;
  fVar27 = (auVar28._8_4_ + auVar29._8_4_) * auVar21._8_4_;
  uVar19 = CONCAT44(auVar29._4_4_ - auVar28._4_4_,auVar29._0_4_ - auVar28._0_4_);
  fVar18 = auVar29._8_4_ - auVar28._8_4_;
  uVar19 = NEON_fmaxp(uVar19,uVar19,4);
  uVar19 = NEON_fmax(CONCAT44(fVar18,fVar18),uVar19,4);
  uVar19 = NEON_fmax(uVar19,0x3727c5ac3727c5ac,4);
  if (0 < (int)uVar13) {
    uVar16 = NEON_frecpe(uVar19,4);
    uVar20 = NEON_frecps(uVar19,uVar16,4);
    fVar18 = (float)uVar16 * (float)uVar20;
    fVar17 = (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
    uVar16 = NEON_frecps(uVar19,CONCAT44(fVar17,fVar18),4);
    fVar18 = fVar18 * (float)uVar16;
    fVar17 = fVar17 * (float)((ulong)uVar16 >> 0x20);
    lVar14 = 0;
    do {
      lVar15 = lVar14 * 0x10;
      lVar14 = lVar14 + 1;
      pfVar5 = (float *)(lVar12 + lVar15);
      fVar26 = *pfVar5;
      fVar9 = pfVar5[1];
      pfVar6 = (float *)(lVar12 + lVar15);
      pfVar6[2] = fVar18 * (pfVar5[2] - fVar27);
      pfVar6[3] = fVar17 * (pfVar5[3] - (auVar28._12_4_ + auVar29._12_4_) * auVar21._12_4_);
      *pfVar6 = fVar18 * (fVar26 - fVar23);
      pfVar6[1] = fVar17 * (fVar9 - fVar25);
      uVar13 = (ulong)(int)param_2[1];
    } while (lVar14 < (long)uVar13);
  }
  local_380 = auStack_370;
  local_2c8 = 0;
  local_330 = auStack_320;
  local_328 = -0x7ffffffe00000000;
  local_390 = *(undefined8 *)(puVar10 + 0x40);
  local_2d0 = auStack_2c0;
  local_280 = auStack_270;
  local_220 = auStack_210;
  local_3b8 = (int)uVar13;
  local_3b4 = 0;
  local_378 = 0;
  local_374 = 0x80000004;
  local_2c4 = 0x80000004;
  local_3b0[1] = _UNK_0388a228;
  local_3b0[0] = ram0x0388a220;
  local_278 = -0x7ffffffe00000000;
  local_1d0 = auStack_1c0;
  uStack_2f8 = _UNK_0388a228;
  local_300 = ram0x0388a220;
  local_218 = 0;
  local_214 = 0x80000004;
  local_170 = auStack_160;
  local_1c8 = -0x7ffffffe00000000;
  local_120 = auStack_110;
  uStack_248 = _UNK_0388a228;
  local_250 = ram0x0388a220;
  local_168 = 0;
  local_164 = 0x80000004;
  local_c0 = auStack_b0;
  local_118 = -0x7ffffffe00000000;
  uStack_198 = _UNK_0388a228;
  local_1a0 = ram0x0388a220;
  local_b8 = 0;
  local_b4 = 0x80000004;
  local_70 = auStack_60;
  local_68 = -0x7ffffffe00000000;
  uStack_e8 = _UNK_0388a228;
  local_f0 = ram0x0388a220;
  local_3c0 = lVar12;
  local_2e0 = local_390;
  local_230 = local_390;
  local_180 = local_390;
  local_d0 = local_390;
  if (local_3b8 < 1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0xbf800000;
    uVar20 = param_1[1];
    uVar16 = *param_1;
  }
  else {
    FUN_001b1364(&local_3c0,lVar12,uVar13,0);
    uVar16 = local_3b0[(long)local_3b4 * 0x16];
    fVar18 = (float)((ulong)local_3b0[(long)local_3b4 * 0x16 + 1] >> 0x20);
    uVar20 = CONCAT44(fVar18,fVar18);
    uVar24 = NEON_frsqrte(uVar20,4);
    fVar17 = (float)uVar24;
    fVar26 = (float)((ulong)uVar24 >> 0x20);
    uVar24 = NEON_frsqrts(uVar20,CONCAT44(fVar26 * fVar26,fVar17 * fVar17),4);
    fVar17 = fVar17 * (float)uVar24;
    fVar26 = fVar26 * (float)((ulong)uVar24 >> 0x20);
    uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar26 * fVar26,fVar17 * fVar17),4);
    fVar17 = (float)uVar20 * fVar17 * fVar18 + 1e-05;
    uVar20 = CONCAT44((uint)fVar17 ^ ((uint)fVar17 ^ 0x3727c5ac) & -(uint)(fVar18 <= 0.0),
                      (int)local_3b0[(long)local_3b4 * 0x16 + 1]);
    param_1[1] = uVar20;
    *param_1 = uVar16;
  }
  fVar18 = (float)((ulong)uVar19 >> 0x20);
  param_1[1] = CONCAT44(fVar18 * (float)((ulong)uVar20 >> 0x20) + *(float *)(puVar10 + 0x50),
                        (float)uVar19 * (float)uVar20 + fVar27);
  *param_1 = CONCAT44(fVar18 * (float)((ulong)uVar16 >> 0x20) + fVar25,
                      (float)uVar19 * (float)uVar16 + fVar23);
  lVar14 = *(long *)(lVar8 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar14;
  }
  FUN_032cf810(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x58),lVar12);
  lVar8 = local_68;
  uVar19 = *(undefined8 *)PTR_PTR_04372408;
  uVar11 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_70 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_70,0x10,uVar11 & 0x3fffffff);
  }
  local_70 = (undefined1 *)0x0;
  local_68 = CONCAT44(0x80000000,(undefined4)local_68);
  local_b8 = 0;
  if ((-1 < (int)local_b4) && (local_c0 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_c0,0x10,local_b4 & 0x3fffffff);
  }
  lVar8 = local_118;
  uVar11 = local_118._4_4_;
  local_c0 = (undefined1 *)0x0;
  local_b4 = 0x80000000;
  local_118 = (ulong)local_118._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_120 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_120,0x10,uVar11 & 0x3fffffff);
  }
  local_120 = (undefined1 *)0x0;
  local_118 = CONCAT44(0x80000000,(undefined4)local_118);
  local_168 = 0;
  if ((-1 < (int)local_164) && (local_170 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_170,0x10,local_164 & 0x3fffffff);
  }
  lVar8 = local_1c8;
  uVar11 = local_1c8._4_4_;
  local_170 = (undefined1 *)0x0;
  local_164 = 0x80000000;
  local_1c8 = (ulong)local_1c8._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_1d0 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_1d0,0x10,uVar11 & 0x3fffffff);
  }
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = CONCAT44(0x80000000,(undefined4)local_1c8);
  local_218 = 0;
  if ((-1 < (int)local_214) && (local_220 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_220,0x10,local_214 & 0x3fffffff);
  }
  lVar8 = local_278;
  uVar11 = local_278._4_4_;
  local_220 = (undefined1 *)0x0;
  local_214 = 0x80000000;
  local_278 = (ulong)local_278._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_280 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_280,0x10,uVar11 & 0x3fffffff);
  }
  local_280 = (undefined1 *)0x0;
  local_278 = CONCAT44(0x80000000,(undefined4)local_278);
  local_2c8 = 0;
  if ((-1 < (int)local_2c4) && (local_2d0 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_2d0,0x10,local_2c4 & 0x3fffffff);
  }
  lVar8 = local_328;
  uVar11 = local_328._4_4_;
  local_2d0 = (undefined1 *)0x0;
  local_2c4 = 0x80000000;
  local_328 = (ulong)local_328._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_330 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_330,0x10,uVar11 & 0x3fffffff);
  }
  local_328 = CONCAT44(0x80000000,(undefined4)local_328);
  local_330 = (undefined1 *)0x0;
  local_378 = 0;
  if ((-1 < (int)local_374) && (local_380 != (undefined1 *)0x0)) {
    FUN_032cf244(uVar19,local_380,0x10,local_374 & 0x3fffffff);
  }
  return;
}


