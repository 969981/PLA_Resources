/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03381e74; name: FUN_03381e74
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_03381e74(int *param_1,long *param_2,undefined8 *param_3,undefined1 *param_4)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined8 uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  uint *puVar32;
  int iVar33;
  undefined **local_638;
  undefined **local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  undefined *local_5d0;
  undefined1 *local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  char *local_540;
  ulong local_538;
  undefined *local_530;
  undefined8 uStack_528;
  ulong local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined1 *local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 local_460;
  undefined1 *local_458;
  undefined8 local_450;
  undefined1 auStack_448 [24];
  undefined4 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined2 local_410;
  undefined1 local_40e;
  undefined8 local_408;
  uint local_3fc;
  char *local_3f8;
  uint local_3ec;
  undefined8 local_3e8;
  undefined4 *local_3e0;
  uint local_3d8;
  uint local_3d4;
  undefined4 local_3d0 [32];
  undefined1 *local_350;
  uint local_348;
  uint local_344;
  undefined1 auStack_340 [128];
  undefined1 *local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [8];
  undefined **local_2a8;
  undefined **local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  ulong local_238;
  ulong local_230;
  undefined *local_228;
  int *local_220;
  long local_218;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulong local_190;
  ulong local_188;
  undefined8 local_180;
  short *local_178;
  undefined8 local_170;
  undefined8 local_168;
  int *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  int *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  
  *param_3 = 0;
  *param_4 = 0;
  uVar8 = FUN_03384ab0(param_2);
  if (uVar8 >> 0x1f != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  iVar7 = (int)uVar8;
  local_74 = iVar7;
  uVar9 = FUN_03384ab0(param_2);
  if (uVar9 >> 0x1f != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  uVar10 = FUN_03384ab0(param_2);
  pbVar30 = (byte *)(param_2 + 3);
  local_78 = (uint)uVar10;
  if (uVar10 >> 0x20 != 0) {
    *pbVar30 = *pbVar30 | 2;
LAB_03384270:
    *param_1 = -0x7ffbfe00;
LAB_0338427c:
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') {
        return;
      }
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_2a8,"Error in input stream.",PTR_DAT_04372528);
      *(char **)(lVar14 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar14 + 0x40) = 0x589;
      FUN_033269dc(&local_2a8);
      return;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    lVar14 = FUN_03326338(&local_2a8,"Error in input stream.",PTR_DAT_04372528);
    *(char **)(lVar14 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar14 + 0x40) = 0x589;
    FUN_03326adc(&local_2a8);
    return;
  }
  if (*pbVar30 != 0) goto LAB_03384270;
  if (*param_1 < 0) goto LAB_0338427c;
  if ((iVar7 < 1) || (param_1[0x1a] <= iVar7)) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033839d8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_2a8,"Invalid type ID (out of bounds).",PTR_DAT_04372528);
      *(char **)(lVar14 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar14 + 0x40) = 0x58d;
      uVar18 = 0x71b95bd8;
LAB_03383960:
      *(undefined4 *)(lVar14 + 0x1c) = uVar18;
LAB_033839d0:
      FUN_033269dc(&local_2a8);
      goto LAB_033839d8;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    lVar14 = FUN_03326338(&local_2a8,"Invalid type ID (out of bounds).",PTR_DAT_04372528);
    *(char **)(lVar14 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar14 + 0x40) = 0x58d;
    uVar18 = 0x71b95bd8;
LAB_03384048:
    *(undefined4 *)(lVar14 + 0x1c) = uVar18;
LAB_033840a0:
    FUN_03326adc(&local_2a8);
LAB_033839d8:
    *param_1 = -0x7ffbfe00;
    return;
  }
  if (param_1[6] <= iVar7) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033839d8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_2a8,"Invalid type ID (out of bounds).",PTR_DAT_04372528);
      *(char **)(lVar14 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar14 + 0x40) = 0x58e;
      uVar18 = 0x71b95bd9;
      goto LAB_03383960;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    lVar14 = FUN_03326338(&local_2a8,"Invalid type ID (out of bounds).",PTR_DAT_04372528);
    *(char **)(lVar14 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar14 + 0x40) = 0x58e;
    uVar18 = 0x71b95bd9;
    goto LAB_03384048;
  }
  if (*(long *)(*(long *)(param_1 + 4) +
               (-(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3)) != 0) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033839d8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_2a8,"TypeId {} already read",&DAT_0411b3b8,&local_74);
      uVar23 = 0x58f;
      goto LAB_033839cc;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    lVar14 = FUN_03326338(&local_2a8,"TypeId {} already read",&DAT_0411b3b8,&local_74);
    uVar23 = 0x58f;
LAB_0338409c:
    *(char **)(lVar14 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar14 + 0x40) = uVar23;
    goto LAB_033840a0;
  }
  puVar31 = *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)iVar7 * 8);
  if (((int)uVar9 < 0) || (param_1[0x1a] <= (int)uVar9)) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033839d8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      local_638 = (undefined **)FUN_032e239c(puVar31);
      lVar14 = FUN_03326338(&local_2a8,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                            &DAT_0411bac8,&local_638);
      uVar23 = 0x593;
      goto LAB_033839cc;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    local_3e8 = FUN_032e239c(puVar31);
    lVar14 = FUN_03326338(&local_2a8,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                          &DAT_0411bac8,&local_3e8);
    uVar23 = 0x593;
    goto LAB_0338409c;
  }
  uVar8 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((uVar10 & 1) == 0) {
    uVar24 = 0;
    uVar17 = 0;
    if ((local_78 >> 1 & 1) != 0) goto LAB_03382ba8;
LAB_03381f5c:
    uVar6 = (uint)uVar10;
    uVar17 = uVar6;
  }
  else {
    uVar24 = 1;
    uVar17 = 1;
    uVar10 = (ulong)(local_78 ^ 1);
    local_70 = CONCAT44((int)uVar8,1);
    uVar6 = local_78 >> 1;
    local_78 = local_78 ^ 1;
    if ((uVar6 & 1) == 0) goto LAB_03381f5c;
LAB_03382ba8:
    uVar24 = uVar17 | 2;
    uVar6 = (uint)uVar10 ^ 2;
    local_70 = CONCAT44(local_70._4_4_,uVar17) | 2;
    local_78 = uVar6;
    uVar17 = (uint)uVar10;
  }
  uVar16 = uVar6;
  if ((uVar17 >> 2 & 1) != 0) {
    local_78 = uVar6 ^ 4;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x10;
    uVar24 = uVar24 | 0x10;
    uVar16 = local_78;
  }
  uVar17 = uVar16;
  if ((uVar6 >> 3 & 1) != 0) {
    local_78 = uVar16 ^ 8;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x100000;
    uVar24 = uVar24 | 0x100000;
    uVar17 = local_78;
  }
  uVar6 = uVar17;
  if ((uVar16 >> 4 & 1) != 0) {
    local_78 = uVar17 ^ 0x10;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x200000;
    uVar24 = uVar24 | 0x200000;
    uVar6 = local_78;
  }
  uVar16 = uVar6;
  if ((uVar17 >> 5 & 1) != 0) {
    local_78 = uVar6 ^ 0x20;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x800000;
    uVar24 = uVar24 | 0x800000;
    uVar16 = local_78;
  }
  uVar17 = uVar16;
  if ((uVar6 >> 6 & 1) != 0) {
    local_78 = uVar16 ^ 0x40;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x4000;
    uVar24 = uVar24 | 0x4000;
    uVar17 = local_78;
  }
  uVar6 = uVar17;
  if ((uVar16 >> 7 & 1) != 0) {
    local_78 = uVar17 ^ 0x80;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x2000000;
    uVar24 = uVar24 | 0x2000000;
    uVar6 = local_78;
  }
  if ((uVar17 >> 8 & 1) != 0) {
    local_78 = uVar6 ^ 0x100;
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,uVar24) | 0x10000000;
    uVar24 = uVar24 | 0x10000000;
    uVar6 = local_78;
  }
  if (uVar6 != 0) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033839d8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      local_638 = (undefined **)FUN_032e239c(puVar31);
      lVar14 = FUN_03326338(&local_2a8,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",
                            &DAT_0436efc8,&local_78,&local_638);
      uVar23 = 0x5a5;
LAB_033839cc:
      *(char **)(lVar14 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar14 + 0x40) = uVar23;
      goto LAB_033839d0;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    local_3e8 = FUN_032e239c(puVar31);
    lVar14 = FUN_03326338(&local_2a8,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",
                          &DAT_0436efc8,&local_78,&local_3e8);
    uVar23 = 0x5a5;
    goto LAB_0338409c;
  }
  if ((~param_1[0x8e] & uVar24) != 0) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_033839d8;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_2a8,&DAT_044508b0,1);
      local_638 = (undefined **)FUN_032e239c(puVar31);
      lVar14 = FUN_03326338(&local_2a8,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",
                            &DAT_0436efc8,&local_70,&local_638);
      uVar23 = 0x5a8;
      goto LAB_033839cc;
    }
    FUN_03326a7c(&local_2a8,&DAT_044508b0,1);
    local_3e8 = FUN_032e239c(puVar31);
    lVar14 = FUN_03326338(&local_2a8,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",
                          &DAT_0436efc8,&local_70,&local_3e8);
    uVar23 = 0x5a8;
    goto LAB_0338409c;
  }
  local_2a8 = &PTR_FUN_0434ac00;
  lVar14 = tpidr_el0;
  lVar19 = *(long *)(lVar14 + 0x38d490);
  local_78 = uVar24;
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar19;
  }
  local_270 = *(undefined8 *)(*(long *)(lVar19 + 8) + 0x50);
  local_280 = 0xffffffff;
  local_2a0 = &PTR_FUN_0434af50;
  local_108 = auStack_f8;
  local_288 = 0x4000;
  local_260 = 0x8000000000000000;
  local_250 = 0x8000000000000000;
  local_120 = 0x8000000000000000;
  local_110 = 0x8000000000000000;
  local_c8 = auStack_b8;
  local_d0 = 0x8000000000000000;
  local_90 = 0x8000000000000000;
  local_c0 = 0x8000000300000000;
  local_80 = 1;
  local_238 = 0x4000000;
  local_3e0 = local_3d0;
  local_350 = auStack_340;
  local_3d4 = 0x80000020;
  local_344 = 0x80000020;
  local_2c0 = local_2b0;
  local_298 = 0;
  local_290 = 0;
  local_268 = 0;
  local_278 = 0;
  local_258 = 0;
  local_248 = 0;
  local_240 = 0;
  local_128 = 0;
  local_118 = 0;
  local_100 = 0x8000000200000000;
  local_d8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_7e = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = (short *)0x0;
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
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = (int *)0x0;
  local_228 = (undefined *)0x0;
  local_230 = 0;
  local_3d8 = 0;
  local_348 = 0;
  local_2b8 = -0x7ffffffe00000000;
  local_3e8 = uVar9 & 0xffffffff;
  local_3ec = 0;
  local_160 = param_1;
  local_130 = param_1;
  if ((uVar24 & 1) == 0) {
    uVar8 = 0;
    if ((uVar24 >> 1 & 1) == 0) goto joined_r0x033836d8;
LAB_03382e00:
    if ((int)uVar8 == 0) {
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 != '\0') goto LAB_03383e30;
        goto LAB_033838f0;
      }
      if (DAT_04350668 != '\0') {
LAB_03383e30:
        FUN_03326a7c(&local_638,&DAT_044508b0,1);
        lVar14 = FUN_03326338(&local_638,
                              "Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                              &DAT_0411b3b8,&local_74);
        *(char **)(lVar14 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar14 + 0x40) = 0x5f5;
        uVar18 = 0x1aff8e1a;
LAB_03383e78:
        *(undefined4 *)(lVar14 + 0x1c) = uVar18;
        goto LAB_033849c0;
      }
      FUN_03326994(&local_638,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_638,
                            "Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                            &DAT_0411b3b8,&local_74);
      *(char **)(lVar14 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar14 + 0x40) = 0x5f5;
      uVar18 = 0x1aff8e1a;
LAB_03383658:
      *(undefined4 *)(lVar14 + 0x1c) = uVar18;
LAB_033838e8:
      FUN_033269dc(&local_638);
LAB_033838f0:
      *param_1 = -0x7ffbfe00;
      goto LAB_03382a70;
    }
    uVar8 = FUN_03384ab0(param_2);
    if (uVar8 >> 0x1f == 0) {
      if (*(byte *)(param_2 + 3) != 0) goto LAB_033846a4;
      if (-1 < *param_1) {
        iVar7 = (int)uVar8;
        if (-1 < iVar7) {
          local_238 = local_238 | 2;
          if (iVar7 < param_1[0x1a]) {
            local_228 = (undefined *)0x0;
            local_3e8 = CONCAT44(iVar7,(int)local_3e8);
          }
          else {
            local_228 = &DAT_0435a690;
          }
          goto joined_r0x033836d8;
        }
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_033838f0;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_638,&DAT_044508b0,1);
          local_70 = FUN_032e239c(puVar31);
          lVar14 = FUN_03326338(&local_638,"Invalid sub-type ID (out of bounds) for type \'{}\'.",
                                &DAT_0411bac8,&local_70);
          uVar23 = 0x5f9;
          goto LAB_033838e4;
        }
        FUN_03326a7c(&local_638,&DAT_044508b0,1);
        local_3f8 = (char *)FUN_032e239c(puVar31);
        lVar14 = FUN_03326338(&local_638,"Invalid sub-type ID (out of bounds) for type \'{}\'.",
                              &DAT_0411bac8,&local_3f8);
        uVar23 = 0x5f9;
        goto LAB_033849bc;
      }
    }
    else {
      *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_033846a4:
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_03382a70;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_638,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
      uVar23 = 0x5f8;
      goto LAB_0338489c;
    }
    FUN_03326a7c(&local_638,&DAT_044508b0,1);
    lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
    uVar23 = 0x5f8;
  }
  else {
    uVar8 = FUN_03384ab0(param_2);
    local_3ec = (uint)uVar8;
    if (uVar8 >> 0x20 == 0) {
      if (*(byte *)(param_2 + 3) != 0) goto LAB_03384334;
      if (*param_1 < 0) goto LAB_03384340;
      local_230 = uVar8 & 0xffffffff;
      local_238 = local_238 | 1;
      piVar22 = (int *)&DAT_04450920;
      switch(local_3ec & 0x1f) {
      case 0:
        break;
      case 1:
        piVar22 = (int *)&DAT_04450930;
        break;
      case 2:
      case 4:
      case 5:
        puVar13 = (ulong *)(**(code **)(*DAT_0444ab10 + 0x60))(DAT_0444ab10,uVar8 & 0xffffffff);
        if (puVar13 != (ulong *)0x0) {
          do {
            uVar9 = *puVar13;
            if (((uint)uVar9 >> 2 & 1) != 0) {
              piVar22 = (int *)puVar13[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
              goto switchD_033821ac_caseD_0;
            }
            puVar13 = (ulong *)puVar13[1];
          } while (puVar13 != (ulong *)0x0);
          piVar22 = (int *)0x0;
          break;
        }
        if (DAT_04450900 != '\0') {
          if (DAT_04350668 != '\0') goto LAB_03383dd0;
          FUN_03326994(&local_638,&DAT_044508b0,1);
          local_70 = FUN_032e239c(puVar31);
          lVar14 = FUN_03326338(&local_638,
                                "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                                ,&DAT_0436efc8,&local_3ec,&local_70);
          *(char **)(lVar14 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar14 + 0x40) = 0x5d8;
          uVar18 = 0x775182a1;
          goto LAB_03383658;
        }
        if (DAT_04350668 == '\0') goto LAB_033838f0;
LAB_03383dd0:
        FUN_03326a7c(&local_638,&DAT_044508b0,1);
        local_3f8 = (char *)FUN_032e239c(puVar31);
        lVar14 = FUN_03326338(&local_638,
                              "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                              ,&DAT_0436efc8,&local_3ec,&local_3f8);
        *(char **)(lVar14 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar14 + 0x40) = 0x5d8;
        uVar18 = 0x775182a1;
        goto LAB_03383e78;
      case 3:
        piVar22 = param_1 + 0x6c;
        break;
      case 6:
        piVar22 = param_1 + 0x60;
        break;
      case 7:
        piVar22 = (int *)&DAT_0444a9b8;
        break;
      case 8:
        piVar22 = param_1 + 0x66;
        break;
      default:
        cVar15 = DAT_04350668;
        if (DAT_04450900 != '\0') {
LAB_03383888:
          if (cVar15 == '\0') {
            FUN_03326994();
            local_408 = CONCAT44(local_408._4_4_,local_3ec) & 0xffffffff0000001f;
            local_70 = FUN_032e239c(puVar31);
            lVar14 = FUN_03326338(&local_638,"Unknown format kind 0x{:x8} for type \'{}\'.",
                                  &DAT_0436efc8,&local_408,&local_70);
            uVar23 = 0x5ee;
            goto LAB_033838e4;
          }
          FUN_03326a7c(&local_638,&DAT_044508b0,1);
          local_3fc = local_3ec & 0x1f;
          local_3f8 = (char *)FUN_032e239c(puVar31);
          lVar14 = FUN_03326338(&local_638,"Unknown format kind 0x{:x8} for type \'{}\'.",
                                &DAT_0436efc8,&local_3fc,&local_3f8);
          uVar23 = 0x5ee;
          goto LAB_033849bc;
        }
        if (DAT_04350668 != '\0') {
          cVar15 = '\x01';
          goto LAB_03383888;
        }
        goto LAB_033838f0;
      }
switchD_033821ac_caseD_0:
      local_238 = local_238 | 4;
      local_220 = piVar22;
      if ((local_78 >> 1 & 1) != 0) goto LAB_03382e00;
joined_r0x033836d8:
      if ((local_78 >> 4 & 1) != 0) {
        local_70 = FUN_03384ab0(param_2);
        if ((char)param_2[3] == '\0') {
          if (-1 < *param_1) {
            if (local_70 - 0x100000000 < 0xfffffffe00000000) {
              if (DAT_04450900 == '\0') {
                if (DAT_04350668 == '\0') goto LAB_033838f0;
              }
              else if (DAT_04350668 == '\0') {
                FUN_03326994(&local_638,&DAT_044508b0,1);
                lVar14 = FUN_03326338(&local_638,"Invalid version number {} for type #{}.",
                                      &DAT_0436efe0,&local_70,&local_74);
                *(char **)(lVar14 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                *(undefined8 *)(lVar14 + 0x40) = 0x613;
                uVar18 = 0xfc913ab0;
                goto LAB_03383658;
              }
              FUN_03326a7c(&local_638,&DAT_044508b0,1);
              lVar14 = FUN_03326338(&local_638,"Invalid version number {} for type #{}.",
                                    &DAT_0436efe0,&local_70,&local_74);
              *(char **)(lVar14 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              *(undefined8 *)(lVar14 + 0x40) = 0x613;
              uVar18 = 0xfc913ab0;
              goto LAB_03383e78;
            }
            if (-1 < (int)local_70) {
              local_210 = (long)(int)local_70;
              local_238 = local_238 | 0x10;
              if ((local_78 >> 0x14 & 1) != 0) goto LAB_033821d8;
              goto LAB_03382230;
            }
            if (DAT_04450900 == '\0') {
              if (DAT_04350668 == '\0') goto LAB_033838f0;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(&local_638,&DAT_044508b0,1);
              lVar14 = FUN_03326338(&local_638,"Invalid negative version for type #{}.",
                                    &DAT_0411b3b8,&local_74);
              uVar23 = 0x615;
LAB_033838e4:
              *(char **)(lVar14 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              *(undefined8 *)(lVar14 + 0x40) = uVar23;
              goto LAB_033838e8;
            }
            FUN_03326a7c(&local_638,&DAT_044508b0,1);
            lVar14 = FUN_03326338(&local_638,"Invalid negative version for type #{}.",&DAT_0411b3b8,
                                  &local_74);
            uVar23 = 0x615;
LAB_033849bc:
            *(char **)(lVar14 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x40) = uVar23;
LAB_033849c0:
            FUN_03326adc(&local_638);
            goto LAB_033838f0;
          }
        }
        else {
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_03382a70;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_638,&DAT_044508b0,1);
          lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
          uVar23 = 0x610;
          goto LAB_0338489c;
        }
        FUN_03326a7c(&local_638,&DAT_044508b0,1);
        lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
        uVar23 = 0x610;
        goto LAB_033848e8;
      }
      if ((local_78 >> 0x14 & 1) == 0) {
LAB_03382230:
        if ((local_78 >> 0x15 & 1) == 0) {
LAB_03382234:
          if ((local_78 >> 0x17 & 1) == 0) {
LAB_033825cc:
            if ((local_78._1_1_ >> 6 & 1) == 0) {
LAB_033825d4:
              if ((local_78._3_1_ >> 1 & 1) == 0) {
LAB_033825dc:
                uVar24 = local_348;
                puVar5 = local_350;
                puVar3 = PTR_PTR_0434a080;
                uVar6 = (uint)*puVar31;
                if ((uVar6 >> 3 & 1) != 0) {
                  uVar17 = (uVar6 & 7) - (uVar6 >> 1 & 1);
                  uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
                  if (puVar31[(ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                      != 0) {
                    local_238 = local_238 | 8;
                    uVar6 = (uint)*puVar31;
                    local_218 = puVar31[(ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                               0x18) + 2];
                  }
                }
                if ((uVar6 >> 0xf & 1) != 0) {
                  uVar6 = (uVar6 & 0x7fff) - (uVar6 >> 1 & 0x1555);
                  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                  lVar14 = puVar31[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                   2];
                  if ((lVar14 != 0) && (*(short *)(lVar14 + 8) != 0)) {
                    local_238 = local_238 | 0x8000;
                    uVar8 = (ulong)*(ushort *)(lVar14 + 8);
                    local_1b8 = lVar14;
                    if (uVar8 != 0) {
                      if (**(char **)(lVar14 + 0x18) == 't') {
                        uVar18 = *(undefined4 *)(*(long *)(lVar14 + 0x10) + 0x30);
                        uVar6 = local_348 + 1;
                        if ((int)(local_344 & 0x3fffffff) <= (int)local_348) {
                          if (0x3ffffffe < (int)local_348) {
                            FUN_032bd0a8(uVar6);
                          }
                          uVar17 = (local_344 & 0x3fffffff) << 1;
                          if (0x3ffffffe < uVar17) {
                            uVar17 = 0x3fffffff;
                          }
                          uVar16 = uVar6;
                          if ((int)uVar6 <= (int)uVar17) {
                            uVar16 = uVar17;
                          }
                          local_350 = (undefined1 *)
                                      FUN_032bd1d4(puVar3,uVar16,4,puVar5,uVar24,&local_344);
                        }
                        *(undefined4 *)(local_350 + (long)(int)local_348 * 4) = uVar18;
                        *(undefined8 *)(lVar14 + 0x10) = 0;
                        local_348 = uVar6;
                      }
                      uVar6 = local_348;
                      puVar5 = local_350;
                      if (uVar8 != 1) {
                        if (**(char **)(lVar14 + 0x28) == 't') {
                          uVar18 = *(undefined4 *)(*(long *)(lVar14 + 0x20) + 0x30);
                          uVar24 = local_348 + 1;
                          if ((int)(local_344 & 0x3fffffff) <= (int)local_348) {
                            if (0x3ffffffe < (int)local_348) {
                              FUN_032bd0a8(uVar24);
                            }
                            uVar17 = (local_344 & 0x3fffffff) << 1;
                            if (0x3ffffffe < uVar17) {
                              uVar17 = 0x3fffffff;
                            }
                            uVar16 = uVar24;
                            if ((int)uVar24 <= (int)uVar17) {
                              uVar16 = uVar17;
                            }
                            local_350 = (undefined1 *)
                                        FUN_032bd1d4(puVar3,uVar16,4,puVar5,uVar6,&local_344);
                          }
                          *(undefined4 *)(local_350 + (long)(int)local_348 * 4) = uVar18;
                          *(undefined8 *)(lVar14 + 0x20) = 0;
                          local_348 = uVar24;
                        }
                        if (uVar8 != 2) {
                          plVar25 = (long *)(lVar14 + 0x30);
                          lVar14 = uVar8 * 0x10 + -0x20;
                          do {
                            uVar6 = local_348;
                            puVar5 = local_350;
                            if (*(char *)plVar25[1] == 't') {
                              uVar18 = *(undefined4 *)(*plVar25 + 0x30);
                              uVar24 = local_348 + 1;
                              if ((int)(local_344 & 0x3fffffff) <= (int)local_348) {
                                if (0x3ffffffe < (int)local_348) {
                                  FUN_032bd0a8(uVar24);
                                }
                                uVar17 = (local_344 & 0x3fffffff) << 1;
                                if (0x3ffffffe < uVar17) {
                                  uVar17 = 0x3fffffff;
                                }
                                if ((int)uVar17 < (int)uVar24) {
                                  uVar17 = uVar6 + 1;
                                }
                                local_350 = (undefined1 *)
                                            FUN_032bd1d4(puVar3,uVar17,4,puVar5,uVar6,&local_344);
                              }
                              *(undefined4 *)(local_350 + (long)(int)local_348 * 4) = uVar18;
                              *plVar25 = 0;
                              local_348 = uVar24;
                            }
                            plVar25 = plVar25 + 2;
                            lVar14 = lVar14 + -0x10;
                          } while (lVar14 != 0);
                        }
                      }
                    }
                  }
                }
                if ((local_78._3_1_ >> 4 & 1) != 0) {
                  local_238 = local_238 | 0x10000000;
                  local_150 = 0;
                }
                iVar7 = FUN_032d9ef8(&local_2a8,param_1 + 0x2c,param_3);
                if (-1 < iVar7) {
                  puVar32 = (uint *)*param_3;
                  uVar6 = (uint)*(undefined8 *)puVar32;
                  if ((((uVar6 >> 0x17 & 1) != 0) &&
                      (uVar6 = (uVar6 & 0x7fffff) - (uVar6 >> 1 & 0x155555),
                      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
                      puVar31 = *(undefined8 **)
                                 (puVar32 +
                                 (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 2
                                 + 4), puVar31 != (undefined8 *)0x0)) &&
                     ((long)*(short *)((long)puVar31 + 4) != 0)) {
                    lVar14 = (long)*(short *)((long)puVar31 + 4) * 8;
                    while( true ) {
                      lVar14 = lVar14 + -8;
                      puVar31 = puVar31 + 1;
                      uVar6 = *(uint *)*puVar31;
                      uVar6 = (uVar6 & 0x3ffff) - (uVar6 >> 1 & 0x15555);
                      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                      *(uint **)((uint *)*puVar31 +
                                (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 2
                                + 4) = puVar32;
                      if (lVar14 == 0) break;
                      puVar32 = (uint *)*param_3;
                    }
                    puVar32 = (uint *)*param_3;
                  }
                  plVar25 = (long *)(param_1 + 0x28);
                  *(uint **)(*(long *)(param_1 + 4) + (long)local_74 * 8) = puVar32;
                  lVar14 = *(long *)(param_1 + 4);
                  iVar7 = param_1[0x2a];
                  if (iVar7 != 0) {
                    iVar33 = param_1[6];
                    do {
                      lVar19 = *plVar25 + (long)iVar7 * 0x10;
                      iVar7 = *(int *)(lVar19 + -8);
                      if ((iVar33 <= iVar7) ||
                         (lVar20 = *(long *)(lVar14 + (long)iVar7 * 8), lVar20 == 0)) break;
                      **(long **)(lVar19 + -0x10) = lVar20;
                      iVar7 = param_1[0x2a] + -1;
                      param_1[0x2a] = iVar7;
                    } while (iVar7 != 0);
                    lVar14 = *(long *)(param_1 + 4);
                  }
                  lVar19 = lVar14 + (long)param_1[6] * 8;
                  lVar29 = *(long *)(param_1 + 0x18);
                  lVar20 = lVar29 + (long)param_1[0x1a] * 8;
                  if (0 < (int)local_3e8) {
                    FUN_0337b9c8(plVar25,puVar32 + 2,local_3e8 & 0xffffffff,lVar14,lVar19,lVar29,
                                 lVar20);
                  }
                  if (0 < local_3e8._4_4_) {
                    if (((uint)*(undefined8 *)puVar32 >> 1 & 1) == 0) {
                      lVar26 = 0;
                    }
                    else {
                      lVar26 = (long)puVar32 +
                               ((ulong)(((uint)*(undefined8 *)puVar32 & 1) * 0x1010101 >> 0x15) &
                               0x18) + 0x10;
                    }
                    FUN_0337b9c8(plVar25,lVar26,local_3e8._4_4_,lVar14,lVar19,lVar29,lVar20);
                  }
                  if (local_3d8 != 0) {
                    uVar6 = (uint)*(undefined8 *)puVar32;
                    if ((uVar6 >> 0x17 & 1) == 0) {
                      psVar11 = (short *)0x0;
                    }
                    else {
                      uVar6 = (uVar6 & 0x7fffff) - (uVar6 >> 1 & 0x155555);
                      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                      psVar11 = *(short **)
                                 (puVar32 +
                                 (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 2
                                 + 4);
                    }
                    if (((0 < *psVar11) &&
                        (FUN_0337b9c8(plVar25,*(long *)(psVar11 + 4) + 8,*local_3e0,lVar14,lVar19,
                                      lVar29,lVar20), 1 < *psVar11)) &&
                       ((FUN_0337b9c8(plVar25,*(long *)(psVar11 + 8) + 8,local_3e0[1],lVar14,lVar19,
                                      lVar29,lVar20), 2 < *psVar11 &&
                        (FUN_0337b9c8(plVar25,*(long *)(psVar11 + 0xc) + 8,local_3e0[2],lVar14,
                                      lVar19,lVar29,lVar20), 3 < *psVar11)))) {
                      lVar26 = 0;
                      do {
                        FUN_0337b9c8(plVar25,*(long *)(psVar11 + lVar26 * 4 + 0x10) + 8,
                                     local_3e0[lVar26 + 3],lVar14,lVar19,lVar29,lVar20);
                        lVar27 = lVar26 + 4;
                        lVar26 = lVar26 + 1;
                      } while (lVar27 < *psVar11);
                    }
                  }
                  if (local_348 != 0) {
                    uVar6 = (uint)*(undefined8 *)puVar32;
                    if ((uVar6 >> 0xf & 1) == 0) {
                      lVar26 = 0;
                    }
                    else {
                      uVar6 = (uVar6 & 0x7fff) - (uVar6 >> 1 & 0x1555);
                      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                      lVar26 = *(long *)(puVar32 +
                                        (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                               0x18) * 2 + 4);
                    }
                    if (0 < (int)local_348) {
                      lVar27 = 0;
                      lVar21 = lVar26 + 0x10;
                      do {
                        lVar28 = lVar26 + 0x10 + (ulong)*(ushort *)(lVar26 + 8) * 0x10;
                        if (lVar21 == lVar28) {
LAB_03382b54:
                          lVar28 = lVar21;
                        }
                        else {
                          do {
                            if (**(char **)(lVar21 + 8) == 't') goto LAB_03382b54;
                            lVar21 = lVar21 + 0x10;
                          } while (lVar28 != lVar21);
                        }
                        FUN_0337b9c8(plVar25,lVar28,*(undefined4 *)(local_350 + lVar27 * 4),lVar14,
                                     lVar19,lVar29,lVar20);
                        lVar27 = lVar27 + 1;
                        lVar21 = lVar28 + 0x10;
                      } while (lVar27 < (int)local_348);
                    }
                  }
                  if (0 < (int)local_2b8) {
                    uVar6 = (*puVar32 & 0x3fff) - (*puVar32 >> 1 & 0x1555);
                    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                    lVar27 = 0;
                    lVar26 = *(long *)(puVar32 +
                                      (ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18
                                             ) * 2 + 4) + 8;
                    do {
                      FUN_0337b9c8(plVar25,lVar26,*(undefined4 *)(local_2c0 + lVar27 * 4),lVar14,
                                   lVar19,lVar29,lVar20);
                      lVar27 = lVar27 + 1;
                      lVar26 = lVar26 + 0x10;
                    } while (lVar27 < (int)local_2b8);
                  }
                  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    (**(code **)(param_1 + 0xa0))(*param_3);
                  }
                  goto LAB_03382a70;
                }
                if (DAT_04450900 == '\0') {
                  if (DAT_04350668 == '\0') goto LAB_033838f0;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_638,&DAT_044508b0,1);
                  lVar14 = FUN_03326338(&local_638,"Failed to allocate type from builder",
                                        PTR_DAT_04372528);
                  uVar23 = 0x6be;
                  goto LAB_033838e4;
                }
                FUN_03326a7c(&local_638,&DAT_044508b0,1);
                lVar14 = FUN_03326338(&local_638,"Failed to allocate type from builder",
                                      PTR_DAT_04372528);
                uVar23 = 0x6be;
                goto LAB_033849bc;
              }
              uVar8 = FUN_03384ab0(param_2);
              if (uVar8 >> 0x1f == 0) {
                if (*(byte *)(param_2 + 3) != 0) goto LAB_033833ec;
                if (-1 < *param_1) {
                  if (param_1[0x26] <= (int)uVar8) {
                    if (DAT_04450900 == '\0') {
                      if (DAT_04350668 == '\0') goto LAB_033838f0;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_638,&DAT_044508b0,1);
                      local_70 = FUN_032e239c(puVar31);
                      lVar14 = FUN_03326338(&local_638,
                                            "Invalid attribute string ID (out of bounds) for type \'{}\'."
                                            ,&DAT_0411bac8,&local_70);
                      uVar23 = 0x690;
                      goto LAB_033838e4;
                    }
                    FUN_03326a7c(&local_638,&DAT_044508b0,1);
                    local_3f8 = (char *)FUN_032e239c(puVar31);
                    lVar14 = FUN_03326338(&local_638,
                                          "Invalid attribute string ID (out of bounds) for type \'{}\'."
                                          ,&DAT_0411bac8,&local_3f8);
                    uVar23 = 0x690;
                    goto LAB_033849bc;
                  }
                  local_168 = *(undefined8 *)
                               (*(long *)(param_1 + 0x24) +
                               (-(uVar8 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar8 & 0xffffffff) << 3));
                  local_238 = local_238 | 0x2000000;
                  goto LAB_033825dc;
                }
              }
              else {
                *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_033833ec:
                *param_1 = -0x7ffbfe00;
              }
              if (DAT_04450900 == '\0') {
                if (DAT_04350668 == '\0') goto LAB_03382a70;
              }
              else if (DAT_04350668 == '\0') {
                FUN_03326994(&local_638,&DAT_044508b0,1);
                lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
                uVar23 = 0x68f;
                goto LAB_0338489c;
              }
              FUN_03326a7c(&local_638,&DAT_044508b0,1);
              lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
              uVar23 = 0x68f;
              goto LAB_033848e8;
            }
            uVar8 = FUN_03384ab0(param_2);
            if (uVar8 >> 0x1f == 0) {
              if (*(byte *)(param_2 + 3) != 0) goto LAB_0338336c;
              if (-1 < *param_1) {
                lVar14 = param_2[1] - *param_2;
                if (lVar14 < 0) {
                  lVar14 = lVar14 + 1;
                }
                if (lVar14 >> 1 < (long)(int)uVar8) {
                  if (DAT_04450900 == '\0') {
                    if (DAT_04350668 == '\0') goto LAB_033838f0;
                  }
                  else if (DAT_04350668 == '\0') {
                    FUN_03326994(&local_638,&DAT_044508b0,1);
                    lVar14 = FUN_03326338(&local_638,"Too many fields",PTR_DAT_04372528);
                    uVar23 = 0x67e;
                    goto LAB_033838e4;
                  }
                  FUN_03326a7c(&local_638,&DAT_044508b0,1);
                  lVar14 = FUN_03326338(&local_638,"Too many fields",PTR_DAT_04372528);
                  uVar23 = 0x67e;
                  goto LAB_033849bc;
                }
                if (0 < (int)uVar8) {
                  do {
                    uVar9 = FUN_03384ab0(param_2);
                    if (uVar9 >> 0x1f != 0) {
                      *pbVar30 = *pbVar30 | 2;
                    }
                    uVar10 = FUN_03384ab0(param_2);
                    if (uVar10 >> 0x1f != 0) {
                      *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_03384a0c:
                      *param_1 = -0x7ffbfe00;
LAB_03384a1c:
                      if (DAT_04450900 == '\0') {
                        if (DAT_04350668 == '\0') goto LAB_03382a70;
                      }
                      else if (DAT_04350668 == '\0') {
                        FUN_03326994(&local_638,&DAT_044508b0,1);
                        lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
                        uVar23 = 0x684;
                        goto LAB_0338489c;
                      }
                      FUN_03326a7c(&local_638,&DAT_044508b0,1);
                      lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
                      uVar23 = 0x684;
                      goto LAB_033848e8;
                    }
                    if (*(byte *)(param_2 + 3) != 0) goto LAB_03384a0c;
                    if (*param_1 < 0) goto LAB_03384a1c;
                    if (((int)uVar9 < 1) || (param_1[0x1a] <= (int)uVar9)) {
                      if (DAT_04450900 == '\0') {
                        if (DAT_04350668 == '\0') goto LAB_033838f0;
                      }
                      else if (DAT_04350668 == '\0') {
                        FUN_03326994(&local_638,&DAT_044508b0,1);
                        local_70 = FUN_032e239c(puVar31);
                        lVar14 = FUN_03326338(&local_638,
                                              "Invalid interface type ID (out of bounds) for type \'{}\'."
                                              ,&DAT_0411bac8,&local_70);
                        uVar23 = 0x685;
                        goto LAB_033838e4;
                      }
                      FUN_03326a7c(&local_638,&DAT_044508b0,1);
                      local_3f8 = (char *)FUN_032e239c(puVar31);
                      lVar14 = FUN_03326338(&local_638,
                                            "Invalid interface type ID (out of bounds) for type \'{}\'."
                                            ,&DAT_0411bac8,&local_3f8);
                      uVar23 = 0x685;
                      goto LAB_033849bc;
                    }
                    FUN_032d9048(&local_2a8,0,uVar10);
                    FUN_03384bac(&local_3e8,uVar9 & 0xffffffff);
                    uVar6 = (int)uVar8 - 1;
                    uVar8 = (ulong)uVar6;
                  } while (uVar6 != 0);
                }
                goto LAB_033825d4;
              }
            }
            else {
              *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338336c:
              *param_1 = -0x7ffbfe00;
            }
            if (DAT_04450900 == '\0') {
              if (DAT_04350668 == '\0') goto LAB_03382a70;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(&local_638,&DAT_044508b0,1);
              lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
              uVar23 = 0x67d;
              goto LAB_0338489c;
            }
            FUN_03326a7c(&local_638,&DAT_044508b0,1);
            lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
            uVar23 = 0x67d;
            goto LAB_033848e8;
          }
          uVar8 = FUN_03384ab0(param_2);
          if (uVar8 >> 0x20 == 0) {
            if (*(byte *)(param_2 + 3) != 0) goto LAB_033844f0;
            if (-1 < *param_1) {
              lVar20 = param_2[1] - *param_2;
              uVar6 = (uint)uVar8 & 0xffff;
              uVar9 = (ulong)uVar6;
              lVar19 = lVar20 + 3;
              if (-1 < lVar20) {
                lVar19 = lVar20;
              }
              if (lVar19 >> 2 < (long)uVar9) {
                if (DAT_04450900 == '\0') {
                  if (DAT_04350668 == '\0') goto LAB_033838f0;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_638,&DAT_044508b0,1);
                  lVar14 = FUN_03326338(&local_638,"Too many fields",PTR_DAT_04372528);
                  uVar23 = 0x638;
                  goto LAB_033838e4;
                }
                FUN_03326a7c(&local_638,&DAT_044508b0,1);
                lVar14 = FUN_03326338(&local_638,"Too many fields",PTR_DAT_04372528);
                uVar23 = 0x638;
                goto LAB_033849bc;
              }
              plVar25 = (long *)(param_1 + 0x2c);
              uVar24 = (uint)uVar8 >> 0x10;
              iVar7 = uVar24 + uVar6;
              uVar6 = iVar7 * 8;
              psVar11 = (short *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar6 + 8,0);
              puVar13 = (ulong *)(psVar11 + 4);
              *psVar11 = (short)uVar8;
              psVar11[1] = (short)(uVar8 >> 0x10);
              psVar11[2] = (short)iVar7;
              memset(puVar13,0,(ulong)uVar6);
              local_238 = local_238 | 0x800000;
              local_178 = psVar11;
              if ((uVar8 & 0xffff) != 0) {
                do {
                  uVar8 = FUN_03384ab0(param_2);
                  if (0xffff < uVar8) {
                    *pbVar30 = *pbVar30 | 2;
                  }
                  uVar6 = (uint)uVar8 & 0xffff;
                  if (param_1[0x22] <= (int)uVar6) {
                    if (DAT_04450900 == '\0') {
                      if (DAT_04350668 == '\0') goto LAB_033838f0;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_638,&DAT_044508b0,1);
                      lVar14 = FUN_03326338(&local_638,
                                            "Invalid field name string ID (out of bounds).",
                                            PTR_DAT_04372528);
                      uVar23 = 0x643;
                      goto LAB_033838e4;
                    }
                    FUN_03326a7c(&local_638,&DAT_044508b0,1);
                    lVar14 = FUN_03326338(&local_638,"Invalid field name string ID (out of bounds)."
                                          ,PTR_DAT_04372528);
                    uVar23 = 0x643;
                    goto LAB_033849bc;
                  }
                  local_3f8 = *(char **)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 8);
                  uVar8 = FUN_03384ab0(param_2);
                  uVar6 = (uint)uVar8;
                  if (uVar8 < 0x10000) {
                    if ((uVar6 >> 7 & 1) != 0) goto LAB_033840d4;
LAB_03382374:
                    iVar7 = 0;
                  }
                  else {
                    *pbVar30 = *pbVar30 | 2;
                    if ((uVar6 >> 7 & 1) == 0) goto LAB_03382374;
LAB_033840d4:
                    uVar8 = (ulong)(uVar6 & 0xffffff7f);
                    *param_4 = 1;
                    iVar7 = FUN_03384ab0(param_2);
                  }
                  uVar10 = FUN_03384ab0(param_2);
                  if (0xffff < uVar10) {
                    *pbVar30 = *pbVar30 | 2;
                  }
                  uVar12 = FUN_03384ab0(param_2);
                  if (uVar12 >> 0x1f != 0) {
                    *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_033841c0:
                    *param_1 = -0x7ffbfe00;
LAB_033841d0:
                    if (DAT_04450900 == '\0') {
                      if (DAT_04350668 == '\0') goto LAB_03382a70;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_638,&DAT_044508b0,1);
                      lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
                      uVar23 = 0x655;
                      goto LAB_0338489c;
                    }
                    FUN_03326a7c(&local_638,&DAT_044508b0,1);
                    lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
                    uVar23 = 0x655;
                    goto LAB_033848e8;
                  }
                  if (*(byte *)(param_2 + 3) != 0) goto LAB_033841c0;
                  if (*param_1 < 0) goto LAB_033841d0;
                  iVar33 = (int)uVar12;
                  if ((iVar33 < 1) || (param_1[0x1a] <= iVar33)) {
                    if (DAT_04450900 == '\0') {
                      if (DAT_04350668 == '\0') goto LAB_033838f0;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_638,&DAT_044508b0,1);
                      local_70 = FUN_032e239c(puVar31);
                      lVar14 = FUN_03326338(&local_638,
                                            "Invalid field type ID (out of bounds) for type \'{}\'."
                                            ,&DAT_0411bac8,&local_70);
                      uVar23 = 0x656;
                      goto LAB_033838e4;
                    }
                    FUN_03326a7c(&local_638,&DAT_044508b0,1);
                    local_408 = FUN_032e239c(puVar31);
                    lVar14 = FUN_03326338(&local_638,
                                          "Invalid field type ID (out of bounds) for type \'{}\'.",
                                          &DAT_0411bac8,&local_408);
                    uVar23 = 0x656;
                    goto LAB_033849bc;
                  }
                  if (((uint)uVar8 & 0x30) != 0x20) {
                    if (DAT_04450900 == '\0') {
                      if (DAT_04350668 == '\0') goto LAB_033838f0;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_638,&DAT_044508b0,1);
                      local_70 = FUN_032e239c(puVar31);
                      lVar14 = FUN_03326338(&local_638,"Invalid flags on {}::{}",PTR_DAT_04389358,
                                            &local_70,&local_3f8);
                      uVar23 = 0x658;
                      goto LAB_033838e4;
                    }
                    FUN_03326a7c(&local_638,&DAT_044508b0,1);
                    local_408 = FUN_032e239c(puVar31);
                    lVar14 = FUN_03326338(&local_638,"Invalid flags on {}::{}",PTR_DAT_04389358,
                                          &local_408,&local_3f8);
                    uVar23 = 0x658;
                    goto LAB_033849bc;
                  }
                  local_638 = &PTR_FUN_0434ac00;
                  lVar19 = *(long *)(lVar14 + 0x38d490);
                  if (lVar19 == 0) {
                    lVar19 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar19;
                  }
                  uStack_600 = *(undefined8 *)(*(long *)(lVar19 + 8) + 0x50);
                  local_630 = &PTR_FUN_0434af50;
                  local_628 = 0;
                  uStack_620 = 0;
                  local_608 = 0;
                  local_5f8 = 0;
                  uStack_5f0 = 0x8000000000000000;
                  local_618 = 0x4000;
                  local_610 = 0xffffffff;
                  local_5d8 = 0;
                  local_5e8 = 0;
                  uStack_5e0 = 0x8000000000000000;
                  uVar17 = (uint)uVar8 << 0x10;
                  uVar6 = uVar17 | 0x200000;
                  if ((uVar8 & 0x30) != 0) {
                    uVar6 = uVar17;
                  }
                  local_5d0 = (undefined *)0x0;
                  local_538 = (ulong)(uVar6 | (uint)uVar10 & 0xffff);
                  local_4b0 = 0;
                  local_4c0 = 0;
                  uStack_4b8 = 0;
                  local_4ac = 0x80000000;
                  local_48c = 0x80000002;
                  local_450 = 0x8000000300000000;
                  local_410 = 1;
                  local_4a8 = 0;
                  uStack_4a0 = 0x8000000000000000;
                  local_490 = 0;
                  local_460 = 0x8000000000000000;
                  local_468 = 0;
                  local_430 = 0;
                  local_428 = 0;
                  local_420 = 0x8000000000000000;
                  local_418 = 0;
                  local_40e = 0;
                  local_4d0 = 0;
                  uStack_4c8 = 0;
                  local_4e0 = 0;
                  uStack_4d8 = 0;
                  local_4f0 = 0;
                  uStack_4e8 = 0;
                  local_500 = 0;
                  uStack_4f8 = 0;
                  local_510 = 0;
                  uStack_508 = 0;
                  local_520 = 0;
                  uStack_518 = 0;
                  uStack_528 = 0;
                  local_550 = 0;
                  uStack_548 = 0;
                  local_560 = 0;
                  uStack_558 = 0;
                  local_570 = 0;
                  uStack_568 = 0;
                  local_580 = 0;
                  uStack_578 = 0;
                  local_590 = 0;
                  uStack_588 = 0;
                  local_5a0 = 0;
                  uStack_598 = 0;
                  local_5b0 = 0;
                  uStack_5a8 = 0;
                  local_5c0 = 0;
                  uStack_5b8 = 0;
                  local_540 = local_3f8;
                  local_5c8 = (undefined1 *)0x70000;
                  local_530 = &DAT_0435a690;
                  if (iVar7 != 0) {
                    local_520 = (ulong)(uint)(iVar7 << 0x1c);
                    local_5c8 = &LAB_00170000;
                  }
                  local_498 = auStack_488;
                  local_458 = auStack_448;
                  FUN_032d9ef8(&local_638,plVar25,&local_70);
                  uVar17 = local_3d8;
                  puVar4 = local_3e0;
                  *puVar13 = local_70;
                  uVar6 = local_3d8 + 1;
                  if ((int)(local_3d4 & 0x3fffffff) <= (int)local_3d8) {
                    if (0x3ffffffe < (int)local_3d8) {
                      FUN_032bd0a8(uVar6);
                    }
                    uVar16 = (local_3d4 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar16) {
                      uVar16 = 0x3fffffff;
                    }
                    uVar2 = uVar6;
                    if ((int)uVar6 <= (int)uVar16) {
                      uVar2 = uVar16;
                    }
                    local_3e0 = (undefined4 *)
                                FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,puVar4,uVar17,&local_3d4);
                  }
                  local_3e0[(int)local_3d8] = iVar33;
                  local_3d8 = uVar6;
                  FUN_032d8c08(&local_638);
                  uVar9 = uVar9 - 1;
                  puVar13 = puVar13 + 1;
                } while (uVar9 != 0);
              }
              if (uVar24 != 0) {
                uVar6 = 0;
                do {
                  local_638 = &PTR_FUN_0434ac00;
                  lVar19 = *(long *)(lVar14 + 0x38d490);
                  if (lVar19 == 0) {
                    lVar19 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar19;
                  }
                  uStack_600 = *(undefined8 *)(*(long *)(lVar19 + 8) + 0x50);
                  local_630 = &PTR_FUN_0434af50;
                  local_628 = 0;
                  uStack_620 = 0;
                  local_618 = 0x4000;
                  local_610 = 0xffffffff;
                  local_5d8 = 0;
                  local_5f8 = 0;
                  uStack_5f0 = 0x8000000000000000;
                  local_5e8 = 0;
                  uStack_5e0 = 0x8000000000000000;
                  local_608 = 0;
                  local_4b0 = 0;
                  local_4c0 = 0;
                  uStack_4b8 = 0;
                  local_4ac = 0x80000000;
                  local_48c = 0x80000002;
                  local_450 = 0x8000000300000000;
                  local_410 = 1;
                  local_490 = 0;
                  local_460 = 0x8000000000000000;
                  local_468 = 0;
                  local_430 = 0;
                  local_428 = 0;
                  local_420 = 0x8000000000000000;
                  local_418 = 0;
                  local_40e = 0;
                  local_4a8 = 0;
                  uStack_4a0 = 0x8000000000000000;
                  local_4d0 = 0;
                  uStack_4c8 = 0;
                  local_4e0 = 0;
                  uStack_4d8 = 0;
                  local_4f0 = 0;
                  uStack_4e8 = 0;
                  local_500 = 0;
                  uStack_4f8 = 0;
                  local_510 = 0;
                  uStack_508 = 0;
                  local_520 = 0;
                  uStack_518 = 0;
                  uStack_528 = 0;
                  local_550 = 0;
                  uStack_548 = 0;
                  local_560 = 0;
                  uStack_558 = 0;
                  local_570 = 0;
                  uStack_568 = 0;
                  local_580 = 0;
                  uStack_578 = 0;
                  local_590 = 0;
                  uStack_588 = 0;
                  local_5a0 = 0;
                  uStack_598 = 0;
                  local_5b0 = 0;
                  uStack_5a8 = 0;
                  local_5c0 = 0;
                  uStack_5b8 = 0;
                  local_5d0 = &DAT_0435a690;
                  local_530 = &DAT_0435a690;
                  local_538 = 0x110000;
                  local_540 = "$PLACEHOLDER$";
                  local_5c8 = (undefined1 *)0x70000;
                  sVar1 = *psVar11;
                  local_498 = auStack_488;
                  local_458 = auStack_448;
                  FUN_032d9ef8(&local_638,plVar25,&local_70);
                  *(ulong *)(psVar11 + (long)(int)(uVar6 + (int)sVar1) * 4 + 4) = local_70;
                  FUN_032d8c08(&local_638);
                  uVar6 = uVar6 + 1;
                } while (uVar24 != uVar6);
              }
              goto LAB_033825cc;
            }
          }
          else {
            *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_033844f0:
            *param_1 = -0x7ffbfe00;
          }
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_03382a70;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(&local_638,&DAT_044508b0,1);
            lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
            uVar23 = 0x633;
            goto LAB_0338489c;
          }
          FUN_03326a7c(&local_638,&DAT_044508b0,1);
          lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
          uVar23 = 0x633;
          goto LAB_033848e8;
        }
        uVar8 = FUN_03384ab0(param_2);
        if (uVar8 < 0x10000) {
          if (*(byte *)(param_2 + 3) != 0) goto LAB_03384840;
          if (-1 < *param_1) {
            local_188 = uVar8 & 0xffff;
            local_238 = local_238 | 0x200000;
            goto LAB_03382234;
          }
        }
        else {
          *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_03384840:
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_03382a70;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_638,&DAT_044508b0,1);
          lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
          uVar23 = 0x62b;
          goto LAB_0338489c;
        }
        FUN_03326a7c(&local_638,&DAT_044508b0,1);
        lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
        uVar23 = 0x62b;
        goto LAB_033848e8;
      }
LAB_033821d8:
      uVar8 = FUN_03384ab0(param_2);
      if (uVar8 >> 0x20 != 0) {
        *pbVar30 = *pbVar30 | 2;
      }
      uVar9 = FUN_03384ab0(param_2);
      if (uVar9 >> 0x20 == 0) {
        if (*(byte *)(param_2 + 3) != 0) goto LAB_033843ec;
        if (-1 < *param_1) {
          local_190 = uVar8 & 0xffff | (uVar9 & 0xfff) << 0x10 | (uVar9 >> 0xc & 0xf) << 0x1c;
          local_238 = local_238 | 0x100000;
          goto LAB_03382230;
        }
      }
      else {
        *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_033843ec:
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') goto LAB_03382a70;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(&local_638,&DAT_044508b0,1);
        lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
        uVar23 = 0x61e;
        goto LAB_0338489c;
      }
      FUN_03326a7c(&local_638,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
      uVar23 = 0x61e;
    }
    else {
      *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_03384334:
      *param_1 = -0x7ffbfe00;
LAB_03384340:
      if (DAT_04450900 != '\0') {
        if (DAT_04350668 != '\0') goto LAB_03384398;
        FUN_03326994(&local_638,&DAT_044508b0,1);
        lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
        uVar23 = 0x5bd;
LAB_0338489c:
        *(char **)(lVar14 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar14 + 0x40) = uVar23;
        FUN_033269dc(&local_638);
        goto LAB_03382a70;
      }
      if (DAT_04350668 == '\0') goto LAB_03382a70;
LAB_03384398:
      FUN_03326a7c(&local_638,&DAT_044508b0,1);
      lVar14 = FUN_03326338(&local_638,"Error in input stream.",PTR_DAT_04372528);
      uVar23 = 0x5bd;
    }
  }
LAB_033848e8:
  *(char **)(lVar14 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar14 + 0x40) = uVar23;
  FUN_03326adc(&local_638);
LAB_03382a70:
  lVar14 = local_2b8;
  puVar3 = PTR_PTR_0434a080;
  uVar6 = local_2b8._4_4_;
  local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_2c0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_2c0,uVar6 << 2);
  }
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = CONCAT44(0x80000000,(int)local_2b8);
  local_348 = 0;
  if ((-1 < (int)local_344) && (local_350 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_350,local_344 << 2);
  }
  local_350 = (undefined1 *)0x0;
  local_344 = 0x80000000;
  local_3d8 = 0;
  if ((-1 < (int)local_3d4) && (local_3e0 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_3e0,local_3d4 << 2);
  }
  FUN_032d8c08(&local_2a8);
  return;
}


