/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e60188; name: FUN_02e60188
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02e60188(long *param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float *local_398;
  undefined **local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  ulong local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  int local_29c;
  byte local_298;
  undefined4 local_294;
  long local_290;
  undefined **local_250 [2];
  undefined1 local_240 [16];
  undefined1 auStack_230 [16];
  long local_218;
  ulong local_210;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined4 local_1f0 [2];
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  int local_fc;
  byte local_f8;
  undefined4 local_f4;
  long local_f0;
  undefined4 local_c0;
  undefined4 uStack_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_120 = *param_2;
  uStack_118 = param_2[1];
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0x7f7fffff;
  local_f0 = 0;
  uStack_108 = SUB168(*param_3,8);
  local_110 = SUB168(*param_3,0);
  lVar5 = *param_1;
  if (((DAT_04409f30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04409f30), iVar2 != 0)) {
    auVar7 = NEON_fmov(0x3f800000,4);
    uRam0000000004409f28 = auVar7._8_8_;
    _DAT_04409f20 = auVar7._0_8_;
    __cxa_guard_release(&DAT_04409f30);
  }
  local_380 = (undefined **)*param_2;
  uStack_378 = param_2[1];
  auVar7 = *param_3;
  local_250[0] = (undefined **)((ulong)local_250[0] & 0xffffffff00000000);
  auVar9 = NEON_frecpe(auVar7,4);
  local_a0 = CONCAT44(local_a0._4_4_,0x7f7fffff);
  auVar11 = NEON_frecps(auVar7,auVar9,4);
  auVar10._0_8_ =
       CONCAT44(auVar9._4_4_ * (float)((ulong)_DAT_04409f20 >> 0x20) * auVar11._4_4_,
                auVar9._0_4_ * (float)_DAT_04409f20 * auVar11._0_4_);
  auVar10._8_4_ = auVar9._8_4_ * (float)uRam0000000004409f28 * auVar11._8_4_;
  auVar10._12_4_ = auVar9._12_4_ * (float)((ulong)uRam0000000004409f28 >> 0x20) * auVar11._12_4_;
  uStack_368 = auVar7._8_8_;
  local_370 = auVar7._0_8_;
  uStack_358 = auVar10._8_8_;
  local_360 = auVar10._0_8_;
  FUN_02e63c6c(lVar5,*(undefined8 *)(lVar5 + 8),&local_380,local_250,&local_1e0,&local_a0);
  local_1f0[0] = local_c0;
  local_1e8 = uStack_b8;
  if (local_fc != 0) {
    if (local_f8 == 0) {
      local_f8 = FUN_02e63f74(&local_1e0);
      local_f8 = local_f8 & 1;
    }
    else {
      local_f8 = 1;
    }
    local_1f0[0] = local_c0;
    local_1e8 = uStack_b8;
  }
  if (local_f8 != 0) {
    local_fc = 0;
    if (local_f0 == 0) {
      local_398 = (float *)0x0;
    }
    else {
      local_398 = *(float **)(local_f0 + 0x38);
    }
    fVar12 = *local_398 * *(float *)*param_3 + *(float *)(*param_3 + 4) * local_398[1] +
             *(float *)(*param_3 + 8) * local_398[2];
    fVar12 = fVar12 + fVar12;
    fVar6 = *(float *)*param_3 - *local_398 * fVar12;
    fVar8 = *(float *)(*param_3 + 4) - local_398[1] * fVar12;
    fVar12 = *(float *)(*param_3 + 8) - local_398[2] * fVar12;
    local_200 = fVar6;
    local_1fc = fVar8;
    local_1f8 = fVar12;
    FUN_02e5fe9c(&local_200,local_398,local_1f0);
    auVar7 = NEON_fmov(0x3f800000,4);
    auVar9._0_8_ = (undefined **)CONCAT44(*(undefined4 *)((ulong)local_1f0 | 4),local_1f0[0]);
    auVar9._12_4_ = auVar7._12_4_;
    auVar9._8_4_ = local_1e8;
    lVar5 = FUN_02e610e8(param_5,param_7,local_398);
    if (lVar5 != 0) {
      local_250[0] = &PTR_LAB_042a5f70;
      local_218 = 0;
      local_210 = 0;
      FUN_02e62634(local_250,lVar5);
      if (param_6 < *(uint *)(param_1 + 2)) {
        uStack_98 = (ulong)(uint)fVar12;
        local_380 = auVar9._0_8_;
        uStack_378 = auVar9._8_8_;
        local_a0 = CONCAT44(fVar8,fVar6);
        FUN_02e60188(param_1,&local_380,&local_a0,param_4,param_5,param_6 + 1,local_250,param_8);
      }
      if (param_6 <= *(uint *)((long)param_1 + 0x14)) {
        uVar1 = FUN_02e61160(local_250);
        local_350 = (ulong)uVar1;
        uStack_348 = 0;
        local_380 = &PTR_LAB_042a5f70;
        local_340 = 0;
        uVar3 = FUN_02e6120c(param_5,&local_380);
        if (((uVar3 & 1) == 0) &&
           (uVar3 = FUN_02e6126c(param_1,param_2,param_3,local_398,param_4,param_5,param_6,param_7,
                                 param_8), (uVar3 & 1) != 0)) {
          FUN_02e613f4(param_5,uVar1);
        }
      }
      if (param_6 <= *(uint *)((long)param_1 + 0x14)) {
        uStack_2a8 = auStack_230._8_8_;
        local_2b0 = auStack_230._0_8_;
        uStack_2b8 = local_240._8_8_;
        local_2c0 = local_240._0_8_;
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_29c = 0;
        local_298 = 0;
        local_294 = 0x7f7fffff;
        local_290 = 0;
        local_2e0 = 0;
        uStack_2d8 = 0;
        local_2f0 = 0;
        uStack_2e8 = 0;
        local_300 = 0;
        uStack_2f8 = 0;
        local_310 = 0;
        uStack_308 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_330 = 0;
        uStack_328 = 0;
        local_340 = 0;
        uStack_338 = 0;
        local_350 = 0;
        uStack_348 = 0;
        local_360 = 0;
        uStack_358 = 0;
        local_370 = 0;
        uStack_368 = 0;
        local_380 = (undefined **)0x0;
        uStack_378 = 0;
        lVar5 = *param_1;
        if (((DAT_04409f30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04409f30), iVar2 != 0)) {
          _DAT_04409f20 = auVar7._0_8_;
          uRam0000000004409f28 = auVar7._8_8_;
          __cxa_guard_release(&DAT_04409f30);
        }
        auVar7 = NEON_frecpe(auStack_230,4);
        uStack_98 = local_240._8_8_;
        local_a0 = local_240._0_8_;
        local_a8 = 0x7f7fffff;
        uStack_a4 = 0;
        auVar9 = NEON_frecps(auStack_230,auVar7,4);
        auVar11._0_8_ =
             CONCAT44(auVar7._4_4_ * (float)((ulong)_DAT_04409f20 >> 0x20) * auVar9._4_4_,
                      auVar7._0_4_ * (float)_DAT_04409f20 * auVar9._0_4_);
        auVar11._8_4_ = auVar7._8_4_ * (float)uRam0000000004409f28 * auVar9._8_4_;
        auVar11._12_4_ =
             auVar7._12_4_ * (float)((ulong)uRam0000000004409f28 >> 0x20) * auVar9._12_4_;
        uStack_88 = auStack_230._8_8_;
        local_90 = auStack_230._0_8_;
        uStack_78 = auVar11._8_8_;
        uStack_80 = auVar11._0_8_;
        FUN_02e63c6c(lVar5,*(undefined8 *)(lVar5 + 8),&local_a0,&uStack_a4,&local_380,&local_a8);
        if (local_29c != 0) {
          if (local_298 == 0) {
            local_298 = FUN_02e63f74(&local_380);
            local_298 = local_298 & 1;
          }
          else {
            local_298 = 1;
          }
        }
        local_29c = 0;
        if (local_298 != 0) {
          if (local_290 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(local_290 + 0x38);
          }
          FUN_02e6126c(param_1,local_240,auStack_230,uVar4,param_4,param_5,param_6 + 1,local_250,
                       param_8);
        }
      }
      local_250[0] = &PTR_LAB_042a5f70;
      if (local_218 != 0) {
        local_210 = local_210 & 0xffffffff00000000;
        (*DAT_0442d158)(0xb);
      }
    }
  }
  return;
}


