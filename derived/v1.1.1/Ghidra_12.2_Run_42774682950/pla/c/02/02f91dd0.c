/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f91dd0; name: FUN_02f91dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f91dd0(long param_1,undefined8 *param_2,long *param_3,long *param_4,undefined2 *param_5,
                 long *param_6,undefined1 (*param_7) [16],ulong param_8,long *param_9,long *param_10
                 )

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar22;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined4 local_520;
  undefined8 local_518;
  undefined4 local_510;
  undefined4 local_508;
  undefined1 local_504;
  undefined2 local_500;
  undefined4 local_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc;
  undefined2 local_4d8;
  undefined4 local_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  undefined1 local_490 [16];
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  float local_460;
  float fStack_45c;
  undefined8 uStack_458;
  float local_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined2 local_440;
  undefined2 uStack_43e;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  undefined8 local_430;
  float fStack_428;
  float fStack_424;
  undefined8 local_420;
  undefined2 uStack_418;
  undefined2 uStack_416;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  undefined8 local_408;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [32];
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  float local_364;
  undefined8 local_360;
  undefined4 local_358;
  float local_354;
  undefined2 local_350;
  undefined4 local_338;
  undefined1 local_334;
  undefined1 auStack_330 [272];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined **local_1d8;
  undefined1 local_1d0 [8];
  undefined *local_1c8;
  float local_1c0;
  float fStack_1bc;
  undefined8 uStack_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined *local_1a0;
  long *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 auStack_180 [32];
  undefined *local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long *local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  long *local_108;
  undefined2 *local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  if ((param_8 & 1) != 0) {
    auVar9 = *param_7;
    auVar16 = param_7[1];
    auVar30 = NEON_ext(auVar16,auVar16,8,1);
    auVar23 = param_7[2];
    auVar25 = NEON_ext(auVar9,auVar9,8,1);
    auVar31 = NEON_ext(auVar23,auVar23,8,1);
    fVar13 = *(float *)(param_2 + 8);
    fVar14 = *(float *)((long)param_2 + 0x44);
    fVar19 = *(float *)(param_2 + 9);
    local_f8 = param_2[1];
    local_100 = (undefined2 *)*param_2;
    local_e0 = param_2[4];
    uStack_ee = (undefined2)((ulong)param_2[2] >> 0x10);
    uStack_c8 = SUB168(*(undefined1 (*) [16])(param_2 + 6),8);
    local_d0 = SUB168(*(undefined1 (*) [16])(param_2 + 6),0);
    auVar9._0_8_ = CONCAT44(-(auVar30._0_4_ * fVar19 +
                             auVar16._0_4_ * fVar13 + auVar16._4_4_ * fVar14),
                            -(auVar25._0_4_ * fVar19 + auVar9._0_4_ * fVar13 + auVar9._4_4_ * fVar14
                             ));
    auVar9._8_4_ = -(auVar31._0_4_ * fVar19 + auVar23._0_4_ * fVar13 + auVar23._4_4_ * fVar14);
    auVar9._12_4_ = -(auVar31._4_4_ * fVar19 + auVar23._4_4_ * fVar13 + auVar31._4_4_ * fVar14);
    uStack_a8 = SUB168(*(undefined1 (*) [16])(param_2 + 10),8);
    local_b0 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
    local_68 = param_2[0x13];
    local_78 = param_2[0x11];
    local_88 = param_2[0xf];
    local_98 = param_2[0xd];
    local_a0 = param_2[0xc];
    local_80 = param_2[0x10];
    local_f0 = *param_5;
    uStack_e4 = *(undefined4 *)(param_5 + 6);
    uStack_ec = (undefined4)*(undefined8 *)(param_5 + 2);
    local_e8 = (undefined4)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
    uStack_b8 = auVar9._8_8_;
    local_90 = *param_6;
    local_110 = (undefined *)param_2[2];
    local_108 = (long *)param_2[3];
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    local_d8 = param_4;
    local_c0 = auVar9._0_8_;
    FUN_032cc384(&local_120,param_6[4]);
    local_160 = PTR_DAT_043887d8 + 0x10;
    uStack_138 = uStack_118;
    local_140 = local_120;
    local_130 = param_9;
    local_158 = (undefined1)param_9[1];
    local_150 = NEON_fmin(param_9[2],0x5f7ffff05f7ffff0,4);
    local_148 = (char)param_9[3] != '\0';
    local_154 = *(undefined4 *)((long)param_9 + 0xc);
    FUN_032ca3b4(&local_1a0,param_7);
    if (param_10 == (long *)0x0) {
      uVar4 = param_2[5];
      local_1d8 = (undefined **)0x0;
    }
    else {
      local_1a8 = SUB84(param_10,0);
      fStack_1a4 = (float)((ulong)param_10 >> 0x20);
      local_1c8 = PTR_DAT_04372500 + 0x10;
      local_1c0 = (float)CONCAT31(local_1c0._1_3_,(char)param_10[1]);
      uStack_1b8 = NEON_fmin(param_10[2],0x5f7ffff05f7ffff0,4);
      local_1b0 = (float)CONCAT31(local_1b0._1_3_,(char)param_10[3] != '\0');
      fStack_1bc = *(float *)((long)param_10 + 0xc);
      uVar4 = param_2[5];
      local_1d8 = &local_1c8;
    }
    local_1e0 = &local_160;
    FUN_02f91dd0(param_1,&local_100,param_6,uVar4,&local_110,param_3,&local_1a0,0);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    return;
  }
  local_190 = auStack_180;
  local_100 = &local_f0;
  local_198 = (long *)0x0;
  local_188 = 0x70;
  local_108 = (long *)0x0;
  local_1a0 = PTR_DAT_043724e8 + 0x10;
  local_f8 = CONCAT44(local_f8._4_4_,0x70);
  plVar8 = (long *)param_2[5];
  local_110 = local_1a0;
  if ((char)param_3[6] != '\0') {
    FUN_02fe4f6c(&local_1a0,(long *)param_2[5]);
    plVar8 = local_198;
  }
  if ((char)param_6[6] != '\0') {
    FUN_02fe4f6c(&local_110,param_4);
    param_4 = local_108;
  }
  local_338 = 0;
  local_334 = 0x41;
  fVar13 = *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  fVar19 = *(float *)((long)param_2 + 0x44) * *(float *)((long)param_2 + 0x44);
  fVar21 = *(float *)(param_2 + 9) * *(float *)(param_2 + 9);
  fVar14 = fVar13 + fVar19 + fVar21;
  fVar21 = fVar13 + fVar19 + fVar21;
  uVar4 = CONCAT44(fVar21,fVar14);
  uVar22 = NEON_frsqrte(uVar4,4);
  fVar19 = (float)uVar22;
  fVar26 = (float)((ulong)uVar22 >> 0x20);
  uVar22 = NEON_frsqrts(uVar4,CONCAT44(fVar26 * fVar26,fVar19 * fVar19),4);
  fVar19 = fVar19 * (float)uVar22;
  fVar26 = fVar26 * (float)((ulong)uVar22 >> 0x20);
  uVar4 = NEON_frsqrts(uVar4,CONCAT44(fVar26 * fVar26,fVar19 * fVar19),4);
  fVar13 = *(float *)(param_4 + 4) + *(float *)(plVar8 + 4);
  fVar19 = fVar14 * (float)uVar4 * fVar19;
  fVar26 = fVar21 * (float)((ulong)uVar4 >> 0x20) * fVar26;
  iVar15 = -(uint)(fVar14 <= 0.0);
  iVar20 = -(uint)(fVar21 <= 0.0);
  fVar14 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar19,0) & ~(byte)iVar15)));
  uVar4 = NEON_fmax(CONCAT44(*(undefined4 *)(param_2 + 0xd),*(undefined4 *)(param_2 + 0xd)),
                    CONCAT44((float)(CONCAT17((byte)((uint)fVar26 >> 0x18) &
                                              ~(byte)((uint)iVar20 >> 0x18),
                                              CONCAT16((byte)((uint)fVar26 >> 0x10) &
                                                       ~(byte)((uint)iVar20 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar26 >> 8) &
                                                                ~(byte)((uint)iVar20 >> 8),
                                                                CONCAT14(SUB41(fVar26,0) &
                                                                         ~(byte)iVar20,fVar14)))) >>
                                    0x20) + *(float *)((long)param_2 + 0x9c),
                             fVar14 + *(float *)((long)param_2 + 0x9c)),4);
  local_1e0 = (undefined **)CONCAT44(fVar13 + (float)((ulong)uVar4 >> 0x20),fVar13 + (float)uVar4);
  local_1d8 = (undefined **)0x3fb3333300000004;
  local_220 = *(undefined8 *)*param_7;
  uStack_218 = *(undefined8 *)(*param_7 + 8);
  local_210 = *(undefined8 *)param_7[1];
  uStack_208 = *(undefined8 *)(param_7[1] + 8);
  local_200 = *(undefined8 *)param_7[2];
  uStack_1f8 = *(undefined8 *)(param_7[2] + 8);
  uStack_1e8 = SUB168(param_7[3],8);
  local_1f0 = SUB168(param_7[3],0);
  FUN_0017f0d0(auStack_330,plVar8,param_4,&local_220,0,&local_338,local_1d0);
  fVar13 = local_1d0._0_4_ - fVar13;
  if ((param_10 != (long *)0x0) && (fVar13 <= *(float *)(param_2 + 0xd))) {
    uStack_458 = 0xffffffffffffffff;
    local_450 = 2.3509886e-38;
    uVar3 = (ulong)local_420 >> 0x28;
    local_408 = 5;
    fVar14 = local_1d0._0_4_ - *(float *)(param_4 + 4);
    pfVar6 = (float *)param_3[4];
    fVar19 = local_1b0 - local_1c0 * fVar14;
    fVar21 = fStack_1ac - fStack_1bc * (local_1d0._4_4_ - *(float *)(param_4 + 4));
    fVar14 = local_1a8 - (float)uStack_1b8 * fVar14;
    auVar9 = *(undefined1 (*) [16])(pfVar6 + 4);
    auVar16 = *(undefined1 (*) [16])(pfVar6 + 8);
    auVar23 = *(undefined1 (*) [16])(pfVar6 + 0xc);
    uStack_478 = (long *)CONCAT44(auVar23._12_4_ +
                                  auVar16._12_4_ * fVar14 +
                                  pfVar6[3] * fVar19 + auVar9._12_4_ * fVar21,
                                  auVar23._8_4_ +
                                  auVar16._8_4_ * fVar14 +
                                  pfVar6[2] * fVar19 + auVar9._8_4_ * fVar21);
    local_480 = (long *)CONCAT44(auVar23._4_4_ +
                                 auVar16._4_4_ * fVar14 + pfVar6[1] * fVar19 + auVar9._4_4_ * fVar21
                                 ,auVar23._0_4_ +
                                  auVar16._0_4_ * fVar14 + *pfVar6 * fVar19 + auVar9._0_4_ * fVar21)
    ;
    auVar23._0_8_ =
         CONCAT44(auVar16._4_4_ * (float)uStack_1b8 +
                  auVar9._4_4_ * fStack_1bc + pfVar6[1] * local_1c0,
                  auVar16._0_4_ * (float)uStack_1b8 +
                  auVar9._0_4_ * fStack_1bc + *pfVar6 * local_1c0);
    auVar23._8_4_ =
         auVar16._8_4_ * (float)uStack_1b8 + auVar9._8_4_ * fStack_1bc + pfVar6[2] * local_1c0;
    auVar23._12_4_ =
         auVar16._12_4_ * (float)uStack_1b8 + auVar9._12_4_ * fStack_1bc + pfVar6[3] * local_1c0;
    uStack_468 = auVar23._8_8_;
    lVar7 = *param_3;
    if (lVar7 != 0) {
      uStack_458 = *(undefined8 *)(lVar7 + 0xb0);
      local_450 = *(float *)(lVar7 + 0x50);
    }
    fStack_448 = *(float *)(param_3 + 3);
    local_440 = *(undefined2 *)(param_2 + 2);
    fStack_434 = *(float *)((long)param_2 + 0x1c);
    fStack_43c = (float)*(undefined8 *)((long)param_2 + 0x14);
    fStack_438 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20);
    fStack_444 = (float)CONCAT31((int3)((uint)fStack_444 >> 8),0xf);
    lVar7 = *param_6;
    if (lVar7 == 0) {
      fStack_428 = 2.3509886e-38;
      local_430 = 0xffffffffffffffff;
    }
    else {
      local_430 = *(undefined8 *)(lVar7 + 0xb0);
      fStack_428 = *(float *)(lVar7 + 0x50);
    }
    uStack_418 = *param_5;
    fStack_40c = *(float *)(param_5 + 6);
    fStack_414 = (float)*(undefined8 *)(param_5 + 2);
    fStack_410 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
    local_420._0_5_ = CONCAT14(*(undefined1 *)(param_2 + 4),(int)param_6[3]);
    local_420 = CONCAT35((int3)uVar3,(undefined5)local_420);
    local_470 = auVar23._0_8_;
    local_460 = fVar13;
    (**(code **)(*param_10 + 0x28))(param_10,&local_480);
  }
  if (fVar13 <= 0.0) {
    auVar9 = *(undefined1 (*) [16])(param_2 + 0x10);
    auVar16 = NEON_ext(auVar9,auVar9,8,1);
    uVar4 = NEON_ext(auVar9._0_8_,auVar16._0_8_,4,1);
    auVar31._0_4_ = local_1b0 - *(float *)(param_2 + 0x12);
    auVar31._4_4_ = fStack_1ac - *(float *)((long)param_2 + 0x94);
    auVar31._8_4_ = local_1a8 - *(float *)(param_2 + 0x13);
    auVar31._12_4_ = fStack_1a4 - *(float *)((long)param_2 + 0x9c);
    auVar23 = NEON_ext(auVar31,auVar31,4,1);
    auVar16 = param_7[2];
    auVar25._0_4_ = auVar9._0_4_ * auVar23._0_4_ - auVar31._0_4_ * (float)uVar4;
    auVar25._4_4_ = auVar9._4_4_ * auVar23._4_4_ - auVar31._4_4_ * (float)((ulong)uVar4 >> 0x20);
    auVar25._8_4_ = auVar9._8_4_ * auVar31._0_4_ - auVar31._8_4_ * auVar9._0_4_;
    auVar25._12_4_ = auVar9._12_4_ * auVar31._4_4_ - auVar31._12_4_ * auVar9._4_4_;
    auVar31 = NEON_ext(auVar25,auVar25,4,1);
    auVar9 = *param_7;
    auVar23 = param_7[1];
    auVar34 = NEON_ext(auVar23,auVar23,8,1);
    auVar30 = NEON_ext(auVar9,auVar9,8,1);
    auVar35 = NEON_ext(auVar16,auVar16,8,1);
    fVar13 = *(float *)(param_2 + 8);
    fVar14 = *(float *)((long)param_2 + 0x44);
    fVar19 = *(float *)(param_2 + 9);
    auVar30._0_4_ =
         local_1c0 *
         (auVar31._0_4_ + auVar30._0_4_ * fVar19 + auVar9._0_4_ * fVar13 + auVar9._4_4_ * fVar14);
    auVar30._4_4_ =
         fStack_1bc *
         (auVar31._4_4_ + auVar34._0_4_ * fVar19 + auVar23._0_4_ * fVar13 + auVar23._4_4_ * fVar14);
    auVar30._8_4_ =
         (float)uStack_1b8 *
         (auVar25._0_4_ + auVar35._0_4_ * fVar19 + auVar16._0_4_ * fVar13 + auVar16._4_4_ * fVar14);
    auVar30._12_4_ =
         uStack_1b8._4_4_ *
         (auVar25._4_4_ + auVar35._4_4_ * fVar19 + auVar16._4_4_ * fVar13 + auVar35._4_4_ * fVar14);
    auVar9 = NEON_ext(auVar30,auVar30,8,1);
    if (0.0 <= auVar30._0_4_ + auVar30._4_4_ + auVar9._0_4_) goto LAB_02f924f4;
    uStack_458 = 0xffffffffffffffff;
    local_450 = 2.3509886e-38;
    uVar3 = (ulong)local_420 >> 0x28;
    local_408 = 2;
    fVar13 = *(float *)(plVar8 + 4);
    pfVar6 = (float *)param_3[4];
    local_1b0 = local_1b0 - local_1c0 * fVar13;
    fStack_1ac = fStack_1ac - fStack_1bc * fVar13;
    local_1a8 = local_1a8 - (float)uStack_1b8 * fVar13;
    auVar9 = *(undefined1 (*) [16])(pfVar6 + 4);
    auVar16 = *(undefined1 (*) [16])(pfVar6 + 8);
    auVar23 = *(undefined1 (*) [16])(pfVar6 + 0xc);
    uStack_478 = (long *)CONCAT44(auVar23._12_4_ +
                                  auVar16._12_4_ * local_1a8 +
                                  pfVar6[3] * local_1b0 + auVar9._12_4_ * fStack_1ac,
                                  auVar23._8_4_ +
                                  auVar16._8_4_ * local_1a8 +
                                  pfVar6[2] * local_1b0 + auVar9._8_4_ * fStack_1ac);
    local_480 = (long *)CONCAT44(auVar23._4_4_ +
                                 auVar16._4_4_ * local_1a8 +
                                 pfVar6[1] * local_1b0 + auVar9._4_4_ * fStack_1ac,
                                 auVar23._0_4_ +
                                 auVar16._0_4_ * local_1a8 +
                                 *pfVar6 * local_1b0 + auVar9._0_4_ * fStack_1ac);
    local_460 = 0.0;
    auVar34._0_8_ =
         CONCAT44(auVar16._4_4_ * (float)uStack_1b8 +
                  auVar9._4_4_ * fStack_1bc + pfVar6[1] * local_1c0,
                  auVar16._0_4_ * (float)uStack_1b8 +
                  auVar9._0_4_ * fStack_1bc + *pfVar6 * local_1c0);
    auVar34._8_4_ =
         auVar16._8_4_ * (float)uStack_1b8 + auVar9._8_4_ * fStack_1bc + pfVar6[2] * local_1c0;
    auVar34._12_4_ =
         auVar16._12_4_ * (float)uStack_1b8 + auVar9._12_4_ * fStack_1bc + pfVar6[3] * local_1c0;
    uStack_468 = auVar34._8_8_;
    lVar7 = *param_3;
    if (lVar7 != 0) {
      uStack_458 = *(undefined8 *)(lVar7 + 0xb0);
      local_450 = *(float *)(lVar7 + 0x50);
    }
    fStack_448 = *(float *)(param_3 + 3);
    local_440 = *(undefined2 *)(param_2 + 2);
    fStack_434 = *(float *)((long)param_2 + 0x1c);
    fStack_43c = (float)*(undefined8 *)((long)param_2 + 0x14);
    fStack_438 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20);
    fStack_444 = (float)CONCAT31((int3)((uint)fStack_444 >> 8),0xf);
    lVar7 = *param_6;
    if (lVar7 == 0) {
      fStack_428 = 2.3509886e-38;
      local_430 = 0xffffffffffffffff;
    }
    else {
      local_430 = *(undefined8 *)(lVar7 + 0xb0);
      fStack_428 = *(float *)(lVar7 + 0x50);
    }
    pfVar6 = (float *)&local_480;
    uStack_418 = *param_5;
    fStack_40c = *(float *)(param_5 + 6);
    fStack_414 = (float)*(undefined8 *)(param_5 + 2);
    fStack_410 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
    local_420._0_5_ = CONCAT14(*(undefined1 *)(param_2 + 4),(int)param_6[3]);
    local_420 = CONCAT35((int3)uVar3,(undefined5)local_420);
    local_470 = auVar34._0_8_;
  }
  else {
    local_350 = 0;
    local_470 = CONCAT44(local_470._4_4_,*(undefined4 *)((long)param_2 + 0x8c));
    uStack_398 = SUB168(*(undefined1 (*) [16])(param_2 + 8),8);
    local_3a0 = SUB168(*(undefined1 (*) [16])(param_2 + 8),0);
    local_480 = plVar8;
    uStack_478 = param_4;
    FUN_032cc384(auStack_390,param_7,param_2 + 0x10);
    local_370 = (undefined4)param_9[2];
    local_36c = 0x3f800000;
    uVar4 = FUN_02fdfc0c(param_2[5],param_4);
    uVar4 = NEON_fmin(uVar4,CONCAT44(*(undefined4 *)(param_2 + 0xf),*(undefined4 *)(param_2 + 0xf)),
                      4);
    local_358 = *(undefined4 *)(param_2 + 0xc);
    local_368 = 0;
    local_360 = 0;
    uVar4 = NEON_fmax(uVar4,CONCAT44(local_358,local_358),4);
    local_364 = -(float)uVar4;
    local_354 = 1.0 / (float)*(int *)((long)param_2 + 0x6c);
    local_350 = CONCAT11(local_350._1_1_,1);
    FUN_032cb060(local_490,param_7);
    auVar16 = NEON_ext(local_490,local_490,8,1);
    auVar9 = *(undefined1 (*) [16])(param_2 + 0x12);
    auVar23 = NEON_ext(auVar9,auVar9,8,1);
    uVar4 = NEON_ext(auVar9._0_8_,auVar23._0_8_,4,1);
    local_430 = local_490._0_8_;
    uVar22 = NEON_ext(local_430,auVar16._0_8_,4,1);
    fVar13 = local_490._0_4_;
    fVar19 = auVar9._0_4_;
    fVar14 = local_490._4_4_;
    fStack_43c = auVar9._4_4_;
    fStack_428 = local_490._8_4_;
    fStack_438 = auVar9._8_4_;
    fStack_424 = local_490._12_4_;
    fStack_434 = auVar9._12_4_;
    fVar26 = auVar16._4_4_ * auVar16._4_4_;
    auVar35._0_4_ = fVar13 * (float)uVar4 - fVar19 * (float)uVar22;
    auVar35._4_4_ =
         fVar14 * (float)((ulong)uVar4 >> 0x20) - fStack_43c * (float)((ulong)uVar22 >> 0x20);
    auVar35._8_4_ = fStack_428 * fVar19 - fStack_438 * fVar13;
    auVar35._12_4_ = fStack_424 * fStack_43c - fStack_434 * fVar14;
    fVar27 = fVar13 * fVar19 + fVar14 * fStack_43c + fStack_428 * fStack_438;
    fVar32 = fVar13 * fVar19 + fVar14 * fStack_43c + fStack_428 * fStack_438;
    fVar21 = fVar26 + -0.5;
    fVar26 = fVar26 + -0.5;
    auVar16 = NEON_ext(auVar35,auVar35,4,1);
    fVar13 = fVar19 * fVar21 + fVar13 * fVar27 + auVar16._0_4_ * fStack_424;
    fVar14 = fStack_43c * fVar26 + fVar14 * fVar32 + auVar16._4_4_ * fStack_424;
    fVar19 = fStack_438 * fVar21 + fStack_428 * fVar27 + auVar35._0_4_ * fStack_424;
    fVar21 = fStack_434 * fVar26 + fStack_424 * fVar32 + auVar35._4_4_ * fStack_424;
    local_440 = auVar9._0_2_;
    uStack_43e = auVar9._2_2_;
    local_460 = *(float *)param_7[3] + fVar13 + fVar13;
    fStack_45c = *(float *)(param_7[3] + 4) + fVar14 + fVar14;
    fStack_448 = *(float *)(param_7[3] + 8) + fVar19 + fVar19;
    fStack_444 = *(float *)(param_7[3] + 0xc) + fVar21 + fVar21;
    uStack_458 = CONCAT44(fStack_444,fStack_448);
    local_450 = *(float *)(param_2 + 8) + local_460;
    fStack_44c = *(float *)((long)param_2 + 0x44) + fStack_45c;
    fStack_448 = *(float *)(param_2 + 9) + fStack_448;
    fStack_444 = *(float *)((long)param_2 + 0x4c) + fStack_444;
    local_540 = (float)param_2[0x10];
    fStack_53c = (float)((ulong)param_2[0x10] >> 0x20);
    fStack_538 = (float)param_2[0x11];
    fStack_534 = (float)((ulong)param_2[0x11] >> 0x20);
    fVar13 = local_540 * local_540 + fStack_53c * fStack_53c + fStack_538 * fStack_538;
    fVar14 = local_540 * local_540 + fStack_53c * fStack_53c + fStack_538 * fStack_538;
    uVar4 = CONCAT44(fVar14,fVar13);
    uVar22 = NEON_frsqrte(uVar4,4);
    fVar19 = (float)uVar22;
    fVar21 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_frsqrts(uVar4,CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
    fVar19 = fVar19 * (float)uVar22;
    fVar21 = fVar21 * (float)((ulong)uVar22 >> 0x20);
    uVar4 = NEON_frsqrts(uVar4,CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
    iVar15 = -(uint)(fVar13 <= 0.0);
    iVar20 = -(uint)(fVar14 <= 0.0);
    fVar19 = (float)uVar4 * fVar19;
    fVar21 = (float)((ulong)uVar4 >> 0x20) * fVar21;
    fVar19 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                      CONCAT11((byte)((uint)fVar19 >> 8) &
                                               ~(byte)((uint)iVar15 >> 8),
                                               SUB41(fVar19,0) & ~(byte)iVar15)));
    fVar21 = (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                              CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                       CONCAT15((byte)((uint)fVar21 >> 8) &
                                                ~(byte)((uint)iVar20 >> 8),
                                                CONCAT14(SUB41(fVar21,0) & ~(byte)iVar20,fVar19))))
                    >> 0x20);
    local_68 = CONCAT44(fVar14 * fVar21,fVar13 * fVar19);
    _fStack_538 = CONCAT44(fStack_534 * fVar21,fStack_538 * fVar19);
    _local_540 = CONCAT44(fStack_53c * fVar21,local_540 * fVar19);
    auVar16 = local_490;
    if (0.0 < fVar13 * fVar19) {
      FUN_032caa90(&local_4c0,&local_540,&local_68);
      auVar12._8_8_ = _UNK_038890f8;
      auVar12._0_8_ = _DAT_038890f0;
      auVar17._8_8_ = _UNK_03888e28;
      auVar17._0_8_ = _DAT_03888e20;
      auVar23 = a64_TBL(ZEXT816(0),local_490,auVar12);
      auVar24._8_8_ = _UNK_03888d78;
      auVar24._0_8_ = _DAT_03888d70;
      auVar28._8_8_ = _UNK_03889108;
      auVar28._0_8_ = _DAT_03889100;
      auVar9 = a64_TBL(ZEXT816(0),local_490,auVar17);
      auVar2._4_4_ = uStack_4bc;
      auVar2._0_4_ = local_4c0;
      auVar2._8_4_ = fStack_4b8;
      auVar2._12_4_ = uStack_4b4;
      auVar30 = a64_TBL(ZEXT816(0),auVar2,auVar24);
      auVar25 = a64_TBL(ZEXT816(0),auVar2,auVar28);
      auVar29._0_4_ = auVar9._0_4_ * auVar25._0_4_ - auVar23._0_4_ * auVar30._0_4_;
      auVar29._4_4_ = auVar9._4_4_ * auVar25._4_4_ - auVar23._4_4_ * auVar30._4_4_;
      auVar29._8_4_ = auVar9._8_4_ * auVar25._8_4_ - auVar23._8_4_ * auVar30._8_4_;
      auVar29._12_4_ = auVar9._12_4_ * auVar25._12_4_ - auVar23._12_4_ * auVar30._12_4_;
      auVar33._8_8_ = _UNK_038895d8;
      auVar33._0_8_ = _DAT_038895d0;
      auVar31 = a64_TBL(ZEXT816(0),auVar29,auVar33);
      auVar16._0_4_ =
           -(auVar31._0_4_ - (auVar9._0_4_ * auVar30._0_4_ + auVar23._0_4_ * auVar25._0_4_));
      auVar16._4_4_ =
           -(auVar31._4_4_ - (auVar9._4_4_ * auVar30._4_4_ + auVar23._4_4_ * auVar25._4_4_));
      auVar16._8_4_ =
           -(auVar31._8_4_ - (auVar9._8_4_ * auVar30._8_4_ + auVar23._8_4_ * auVar25._8_4_));
      local_490._8_4_ = fStack_428;
      local_490._0_8_ = local_430;
      local_490._12_4_ = fStack_424;
      auVar16._12_4_ =
           auVar31._12_4_ - (auVar9._12_4_ * auVar30._12_4_ + auVar23._12_4_ * auVar25._12_4_);
    }
    fVar14 = local_490._0_4_ + auVar16._0_4_;
    fVar19 = local_490._4_4_ + auVar16._4_4_;
    fVar21 = local_490._8_4_ + auVar16._8_4_;
    fStack_414 = auVar16._12_4_;
    fVar26 = local_490._12_4_ + fStack_414;
    auVar18._0_4_ = fVar14 * fVar14;
    auVar18._4_4_ = fVar19 * fVar19;
    auVar18._8_4_ = fVar21 * fVar21;
    auVar18._12_4_ = fVar26 * fVar26;
    auVar9 = NEON_ext(auVar18,auVar18,8,1);
    fVar13 = auVar9._0_4_ + auVar9._4_4_;
    uVar4 = CONCAT44(auVar18._0_4_ + auVar18._4_4_ + fVar13,auVar18._0_4_ + auVar18._4_4_ + fVar13);
    uVar22 = NEON_frsqrte(uVar4,4);
    fVar13 = (float)uVar22;
    fVar27 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_frsqrts(uVar4,CONCAT44(fVar27 * fVar27,fVar13 * fVar13),4);
    fVar13 = fVar13 * (float)uVar22;
    fVar27 = fVar27 * (float)((ulong)uVar22 >> 0x20);
    uVar4 = NEON_frsqrts(uVar4,CONCAT44(fVar27 * fVar27,fVar13 * fVar13),4);
    fVar13 = (float)uVar4 * fVar13;
    fVar27 = (float)((ulong)uVar4 >> 0x20) * fVar27;
    auVar10._0_4_ = fVar14 * fVar13;
    auVar10._4_4_ = fVar19 * fVar27;
    auVar10._8_4_ = fVar21 * fVar13;
    auVar10._12_4_ = fVar26 * fVar27;
    uStack_418 = auVar16._8_2_;
    uStack_416 = auVar16._10_2_;
    local_420 = auVar16._0_8_;
    local_408 = auVar10._8_8_;
    fStack_410 = auVar10._0_4_;
    fStack_40c = auVar10._4_4_;
    FUN_02f9837c(auStack_330,&local_480,&local_338,&local_4c0);
    if ((char)local_4c0 == '\0') goto LAB_02f924f4;
    local_518 = 0xffffffffffffffff;
    local_510 = 0xffffff;
    local_4c8 = 2;
    uStack_4c4 = 0;
    local_520 = uStack_4bc;
    lVar7 = *param_3;
    if (lVar7 != 0) {
      local_518 = *(undefined8 *)(lVar7 + 0xb0);
      local_510 = *(undefined4 *)(lVar7 + 0x50);
    }
    local_508 = (undefined4)param_3[3];
    local_500 = *(undefined2 *)(param_2 + 2);
    uStack_4f4 = *(undefined4 *)((long)param_2 + 0x1c);
    local_4fc = (undefined4)*(undefined8 *)((long)param_2 + 0x14);
    uStack_4f8 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20);
    local_504 = 0xf;
    lVar7 = *param_6;
    if (lVar7 == 0) {
      local_4e8 = 0xffffff;
      local_4f0 = 0xffffffffffffffff;
    }
    else {
      local_4f0 = *(undefined8 *)(lVar7 + 0xb0);
      local_4e8 = *(undefined4 *)(lVar7 + 0x50);
    }
    pfVar6 = &local_540;
    local_4e0 = (undefined4)param_6[3];
    local_4d8 = *param_5;
    uStack_4cc = *(undefined4 *)(param_5 + 6);
    local_4b0 = local_4b0 + fStack_4a0 * fStack_4b8;
    fStack_4ac = fStack_4ac + fStack_49c * fStack_4b8;
    fStack_4a8 = fStack_4a8 + fStack_498 * fStack_4b8;
    local_4d4 = (undefined4)*(undefined8 *)(param_5 + 2);
    uStack_4d0 = (undefined4)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
    local_4dc = *(undefined1 *)(param_2 + 4);
    pfVar5 = (float *)param_6[4];
    auVar9 = *(undefined1 (*) [16])(pfVar5 + 4);
    auVar16 = *(undefined1 (*) [16])(pfVar5 + 8);
    auVar23 = *(undefined1 (*) [16])(pfVar5 + 0xc);
    _fStack_538 = CONCAT44(auVar23._12_4_ +
                           auVar16._12_4_ * fStack_4a8 +
                           pfVar5[3] * local_4b0 + auVar9._12_4_ * fStack_4ac,
                           auVar23._8_4_ +
                           auVar16._8_4_ * fStack_4a8 +
                           pfVar5[2] * local_4b0 + auVar9._8_4_ * fStack_4ac);
    _local_540 = CONCAT44(auVar23._4_4_ +
                          auVar16._4_4_ * fStack_4a8 +
                          pfVar5[1] * local_4b0 + auVar9._4_4_ * fStack_4ac,
                          auVar23._0_4_ +
                          auVar16._0_4_ * fStack_4a8 +
                          *pfVar5 * local_4b0 + auVar9._0_4_ * fStack_4ac);
    auVar11._0_8_ =
         CONCAT44(auVar16._4_4_ * fStack_498 + auVar9._4_4_ * fStack_49c + pfVar5[1] * fStack_4a0,
                  auVar16._0_4_ * fStack_498 + auVar9._0_4_ * fStack_49c + *pfVar5 * fStack_4a0);
    auVar11._8_4_ = auVar16._8_4_ * fStack_498 + auVar9._8_4_ * fStack_49c + pfVar5[2] * fStack_4a0;
    auVar11._12_4_ =
         auVar16._12_4_ * fStack_498 + auVar9._12_4_ * fStack_49c + pfVar5[3] * fStack_4a0;
    uStack_528 = auVar11._8_8_;
    local_530 = auVar11._0_8_;
  }
  (**(code **)(*param_9 + 0x28))(param_9,pfVar6);
LAB_02f924f4:
  puVar1 = PTR_DAT_043724f0 + 0x10;
  local_110 = puVar1;
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 8))();
  }
  if (local_198 != (long *)0x0) {
    local_1a0 = puVar1;
    (**(code **)(*local_198 + 8))();
  }
  return;
}


