/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017b9cb0; name: FUN_017b9cb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017b9cb0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  size_t __n;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  string *psVar17;
  long lVar18;
  string *psVar19;
  char *pcVar20;
  undefined8 uVar21;
  long *plVar22;
  string *psVar23;
  long lVar24;
  char *pcVar25;
  byte local_2d8;
  undefined7 uStack_2d7;
  char cStack_2d0;
  undefined7 uStack_2cf;
  char local_2c8;
  undefined2 uStack_2c7;
  undefined5 uStack_2c5;
  string local_2c0;
  undefined4 local_2bf;
  undefined2 local_2bb;
  undefined1 local_2b9;
  undefined8 local_2b8;
  char *local_2b0;
  undefined1 *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  byte local_290;
  undefined4 local_28f;
  undefined2 local_28b;
  undefined1 local_289;
  undefined8 local_288;
  char *local_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined4 local_268;
  byte local_260;
  undefined4 local_25f;
  undefined2 local_25b;
  undefined1 local_259;
  undefined8 local_258;
  char *local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  undefined4 local_22f;
  undefined2 local_22b;
  undefined1 local_229;
  undefined8 local_228;
  char *local_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined2 local_1fb;
  undefined1 local_1f9;
  undefined8 local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined8 local_1c8;
  char *local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  char *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined8 local_168;
  char *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  undefined1 local_139;
  undefined8 local_138;
  char *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  uStack_2c5 = 0;
  local_2d8 = 0x22;
  uStack_2cf = s_BuddyStateContext_0399bdf3._8_7_;
  local_2c8 = s_BuddyStateContext_0399bdf3[0xf];
  uStack_2d7 = s_BuddyStateContext_0399bdf3._0_7_;
  cStack_2d0 = s_BuddyStateContext_0399bdf3[7];
  uStack_2c7 = 0x74;
  lVar5 = tpidr_el0;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x158,8);
  plVar8[4] = 0;
  plVar22 = plVar8 + 1;
  *plVar22 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[10] = 0;
  plVar8[6] = (long)FUN_017bbb60;
  plVar8[7] = (long)FUN_017bbc10;
  *plVar8 = (long)&PTR_FUN_04225450;
  plVar8[0xc] = (long)"__haxe_export_IsCharaControllerEnable";
  plVar8[0xd] = (long)&LAB_018ea898;
  pcVar25 = "__haxe_export_IsPlayerComponentEnable";
  plVar8[0x12] = (long)&LAB_018eaa38;
  plVar8[0x13] = 0;
  plVar8[0x14] = (long)"__haxe_export_IsPlayerComponentEnable";
  plVar8[0x15] = (long)&LAB_018eaaa0;
  plVar8[0x16] = 0;
  plVar8[0x17] = (long)"__haxe_export_GetPlayerComponent";
  plVar8[0x18] = (long)"__haxe_export_IsSelfPokemonComponentEnable";
  plVar8[0x19] = (long)&LAB_018eaacc;
  plVar8[0x1c] = (long)"__haxe_export_GetBuddyManager";
  plVar8[0x1d] = (long)"translation";
  plVar8[0x1e] = 0x60;
  plVar8[0x1f] = (long)&DAT_038ca815;
  plVar8[0x22] = 0;
  plVar8[0x23] = (long)FUN_017bbda0;
  plVar8[0x24] = (long)&LAB_017bc080;
  plVar8[0x25] = (long)&LAB_017bc360;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = (long)"__haxe_export_GetSelfPokemonComponent";
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0x28] = 0;
  plVar8[0x2a] = 0;
  plVar8[0x26] = (long)&LAB_017bc370;
  plVar8[0x27] = 0;
  *(undefined1 *)(plVar8 + 0x29) = 1;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = (long)"__haxe_export_GetNavigatorController";
  plVar8[0x10] = (long)"__haxe_export_GetCharaController";
  plVar8[0x11] = (long)"__haxe_export_GetPokemonController";
  plVar8[0x20] = (long)&DAT_0392da3c;
  plVar8[0x21] = 0;
  plVar1 = DAT_043f1798;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_2b0 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  uVar21 = s___haxe_export_IsCharaControllerE_038f5793._8_8_;
  *(undefined8 *)local_2b0 = s___haxe_export_IsCharaControllerE_038f5793._0_8_;
  *(undefined8 *)(local_2b0 + 8) = uVar21;
  uVar21 = CONCAT35(s___haxe_export_IsCharaControllerE_038f5793._29_3_,
                    s___haxe_export_IsCharaControllerE_038f5793._24_5_);
  *(undefined8 *)(local_2b0 + 0x10) = s___haxe_export_IsCharaControllerE_038f5793._16_8_;
  *(undefined8 *)(local_2b0 + 0x18) = uVar21;
  *(ulong *)(local_2b0 + 0x1d) =
       CONCAT53(s___haxe_export_IsCharaControllerE_038f5793._32_5_,
                s___haxe_export_IsCharaControllerE_038f5793._29_3_);
  local_2b0[0x25] = '\0';
  plVar1 = DAT_043f1798;
  local_2c0 = (string)0x31;
  local_2b9 = 0;
  local_2b8 = 0x25;
  local_2bb = 0;
  local_2bf = 0;
  local_298 = 0xffffffff;
  local_2a8 = &LAB_017bc374;
  puStack_2a0 = &LAB_017bc3bc;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_280 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  local_280[0x20] = 'l';
  uVar21 = s___haxe_export_GetNavigatorContro_03933f13._8_8_;
  local_280[0x21] = 'l';
  local_280[0x22] = 'e';
  local_280[0x23] = 'r';
  *(undefined8 *)local_280 = s___haxe_export_GetNavigatorContro_03933f13._0_8_;
  *(undefined8 *)(local_280 + 8) = uVar21;
  uVar6 = s___haxe_export_GetNavigatorContro_03933f13._24_8_;
  uVar21 = s___haxe_export_GetNavigatorContro_03933f13._16_8_;
  local_280[0x24] = '\0';
  *(undefined8 *)(local_280 + 0x10) = uVar21;
  *(undefined8 *)(local_280 + 0x18) = uVar6;
  plVar1 = DAT_043f1798;
  local_290 = 0x31;
  local_288 = 0x24;
  local_289 = 0;
  local_28b = 0;
  local_28f = 0;
  local_278 = &LAB_017bc404;
  puStack_270 = &LAB_017bc44c;
  local_268 = 0xffffffff;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_250 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  local_250[0x20] = '\0';
  uVar21 = s___haxe_export_GetCharaController_038eb35f._8_8_;
  *(undefined8 *)local_250 = s___haxe_export_GetCharaController_038eb35f._0_8_;
  uVar6 = s___haxe_export_GetCharaController_038eb35f._24_8_;
  *(undefined8 *)(local_250 + 0x10) = s___haxe_export_GetCharaController_038eb35f._16_8_;
  *(undefined8 *)(local_250 + 0x18) = uVar6;
  *(undefined8 *)(local_250 + 8) = uVar21;
  plVar1 = DAT_043f1798;
  local_258 = 0x20;
  local_260 = 0x31;
  local_259 = 0;
  local_25b = 0;
  local_25f = 0;
  local_238 = 0xffffffff;
  local_248 = &LAB_017bc494;
  puStack_240 = &LAB_017bc4dc;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_220 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  local_220[0x20] = 'e';
  uVar21 = s___haxe_export_GetPokemonControll_0399314c._8_8_;
  local_220[0x21] = 'r';
  *(undefined8 *)local_220 = s___haxe_export_GetPokemonControll_0399314c._0_8_;
  *(undefined8 *)(local_220 + 8) = uVar21;
  uVar6 = s___haxe_export_GetPokemonControll_0399314c._24_8_;
  uVar21 = s___haxe_export_GetPokemonControll_0399314c._16_8_;
  local_220[0x22] = '\0';
  *(undefined8 *)(local_220 + 0x10) = uVar21;
  *(undefined8 *)(local_220 + 0x18) = uVar6;
  plVar1 = DAT_043f1798;
  local_230 = 0x31;
  local_22b = 0;
  local_22f = 0;
  local_229 = 0;
  local_228 = 0x22;
  local_218 = &LAB_017bc524;
  puStack_210 = &LAB_017bc56c;
  local_208 = 0xffffffff;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_1f0 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  uVar21 = s___haxe_export_IsPlayerComponentE_0396c319._8_8_;
  *(undefined8 *)local_1f0 = s___haxe_export_IsPlayerComponentE_0396c319._0_8_;
  *(undefined8 *)(local_1f0 + 8) = uVar21;
  uVar21 = CONCAT35(s___haxe_export_IsPlayerComponentE_0396c319._29_3_,
                    s___haxe_export_IsPlayerComponentE_0396c319._24_5_);
  *(undefined8 *)(local_1f0 + 0x10) = s___haxe_export_IsPlayerComponentE_0396c319._16_8_;
  *(undefined8 *)(local_1f0 + 0x18) = uVar21;
  *(ulong *)(local_1f0 + 0x1d) =
       CONCAT53(s___haxe_export_IsPlayerComponentE_0396c319._32_5_,
                s___haxe_export_IsPlayerComponentE_0396c319._29_3_);
  local_1f0[0x25] = '\0';
  plVar1 = DAT_043f1798;
  local_200 = 0x31;
  local_1fb = 0;
  local_1ff = 0;
  local_1f9 = 0;
  local_1f8 = 0x25;
  local_1e8 = &LAB_017bc5b4;
  puStack_1e0 = &LAB_017bc5fc;
  local_1d8 = 0xffffffff;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_1c0 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  local_1c0[0x20] = '\0';
  uVar21 = s___haxe_export_GetPlayerComponent_038f57b9._8_8_;
  *(undefined8 *)local_1c0 = s___haxe_export_GetPlayerComponent_038f57b9._0_8_;
  uVar6 = s___haxe_export_GetPlayerComponent_038f57b9._24_8_;
  *(undefined8 *)(local_1c0 + 0x10) = s___haxe_export_GetPlayerComponent_038f57b9._16_8_;
  *(undefined8 *)(local_1c0 + 0x18) = uVar6;
  *(undefined8 *)(local_1c0 + 8) = uVar21;
  plVar1 = DAT_043f1798;
  local_1d0 = 0x31;
  local_1cb = 0;
  local_1cf = 0;
  local_1c8 = 0x20;
  local_1c9 = 0;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_017bc644;
  puStack_1b0 = &LAB_017bc68c;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_190 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  local_190[0x28] = 'l';
  uVar21 = s___haxe_export_IsSelfPokemonCompo_03914777._8_8_;
  local_190[0x29] = 'e';
  *(undefined8 *)local_190 = s___haxe_export_IsSelfPokemonCompo_03914777._0_8_;
  *(undefined8 *)(local_190 + 8) = uVar21;
  uVar21 = s___haxe_export_IsSelfPokemonCompo_03914777._24_8_;
  *(undefined8 *)(local_190 + 0x10) = s___haxe_export_IsSelfPokemonCompo_03914777._16_8_;
  uVar6 = s___haxe_export_IsSelfPokemonCompo_03914777._32_8_;
  *(undefined8 *)(local_190 + 0x18) = uVar21;
  *(undefined8 *)(local_190 + 0x20) = uVar6;
  local_190[0x2a] = '\0';
  plVar1 = DAT_043f1798;
  local_1a0 = 0x31;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_198 = 0x2a;
  local_188 = &LAB_017bc6d4;
  puStack_180 = &LAB_017bc71c;
  local_178 = 0xffffffff;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
  uVar21 = s___haxe_export_GetSelfPokemonComp_03988da3._8_8_;
  *(undefined8 *)local_160 = s___haxe_export_GetSelfPokemonComp_03988da3._0_8_;
  *(undefined8 *)(local_160 + 8) = uVar21;
  uVar21 = CONCAT35(s___haxe_export_GetSelfPokemonComp_03988da3._29_3_,
                    s___haxe_export_GetSelfPokemonComp_03988da3._24_5_);
  *(undefined8 *)(local_160 + 0x10) = s___haxe_export_GetSelfPokemonComp_03988da3._16_8_;
  *(undefined8 *)(local_160 + 0x18) = uVar21;
  *(ulong *)(local_160 + 0x1d) =
       CONCAT53(s___haxe_export_GetSelfPokemonComp_03988da3._32_5_,
                s___haxe_export_GetSelfPokemonComp_03988da3._29_3_);
  local_160[0x25] = '\0';
  plVar1 = DAT_043f1798;
  local_170 = 0x31;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_168 = 0x25;
  local_148 = 0xffffffff;
  local_158 = &LAB_017bc764;
  puStack_150 = &LAB_017bc7ac;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar14 + 0x10))(plVar14,0x20,8);
  local_130[0x1d] = '\0';
  uVar6 = s___haxe_export_GetBuddyManager_038d5d99._8_8_;
  *(undefined8 *)local_130 = s___haxe_export_GetBuddyManager_038d5d99._0_8_;
  *(ulong *)(local_130 + 0x15) =
       CONCAT53(s___haxe_export_GetBuddyManager_038d5d99._24_5_,
                s___haxe_export_GetBuddyManager_038d5d99._21_3_);
  uVar21 = CONCAT35(s___haxe_export_GetBuddyManager_038d5d99._21_3_,
                    s___haxe_export_GetBuddyManager_038d5d99._16_5_);
  *(undefined8 *)(local_130 + 8) = uVar6;
  *(undefined8 *)(local_130 + 0x10) = uVar21;
  psVar23 = &local_2c0;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x1d;
  local_118 = 0xffffffff;
  local_128 = &LAB_017bc7f4;
  puStack_120 = &LAB_017bc83c;
  local_110 = 0x16;
  local_10f = s_translation_038b95b1._0_7_;
  uStack_108 = 0x74;
  uStack_107 = 0x6e6f69;
  local_100 = 0;
  local_f0 = &LAB_017bc8a0;
  local_f8 = &LAB_017bc884;
  local_e0 = 6;
  local_e8 = 0xffffffff;
  local_dd = 0x77;
  local_df = 0x656e;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_017bc904;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_c8 = &LAB_017bc8bc;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  plVar1 = plVar8 + 3;
  local_a0 = 0;
  local_88 = 0xffffffff;
  local_98 = &LAB_017bc94c;
  local_90 = &LAB_017bc994;
  do {
    uVar11 = *(ulong *)(psVar23 + 8);
    psVar3 = *(string **)(psVar23 + 0x10);
    if (((byte)*psVar23 & 1) == 0) {
      psVar3 = psVar23 + 1;
      uVar11 = (ulong)((byte)*psVar23 >> 1);
    }
    pcVar9 = (char *)FUN_008e8ed4(local_80,psVar3,uVar11);
    pcVar20 = (char *)plVar8[2];
    if (pcVar20 != (char *)0x0) {
      uVar11 = (long)pcVar20 - ((ulong)pcVar20 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        pcVar25 = (char *)((ulong)(pcVar20 + -1) & (ulong)pcVar9);
      }
      else {
        pcVar25 = pcVar9;
        if (pcVar20 <= pcVar9) {
          uVar16 = 0;
          if (pcVar20 != (char *)0x0) {
            uVar16 = (ulong)pcVar9 / (ulong)pcVar20;
          }
          pcVar25 = pcVar9 + -(uVar16 * (long)pcVar20);
        }
      }
      plVar14 = *(long **)(*plVar22 + (long)pcVar25 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        psVar3 = psVar23 + 1;
        __n = (ulong)((byte)*psVar23 >> 1);
        if (((byte)*psVar23 & 1) != 0) {
          psVar3 = *(string **)(psVar23 + 0x10);
          __n = *(size_t *)(psVar23 + 8);
        }
        if (uVar11 < 2) {
          if (__n == 0) {
            do {
              if ((char *)plVar14[1] != pcVar9 &&
                  (char *)((ulong)plVar14[1] & (ulong)(pcVar20 + -1)) != pcVar25) break;
              uVar11 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
              if ((*(byte *)(plVar14 + 2) & 1) != 0) {
                uVar11 = plVar14[3];
              }
              if (uVar11 == 0) goto LAB_017ba770;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar14[1] != pcVar9 &&
                  (char *)((ulong)plVar14[1] & (ulong)(pcVar20 + -1)) != pcVar25) break;
              bVar4 = *(byte *)(plVar14 + 2);
              uVar11 = (ulong)(bVar4 >> 1);
              sVar2 = uVar11;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar14[3];
              }
              if (sVar2 == __n) {
                if ((bVar4 & 1) == 0) {
                  psVar17 = (string *)((long)plVar14 + 0x11);
                  psVar19 = psVar3;
                  while (*psVar17 == *psVar19) {
                    uVar11 = uVar11 - 1;
                    psVar17 = psVar17 + 1;
                    psVar19 = psVar19 + 1;
                    if (uVar11 == 0) goto LAB_017ba770;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar14[4],psVar3,__n);
                  if (iVar7 == 0) goto LAB_017ba770;
                }
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
        else if (__n == 0) {
          do {
            pcVar12 = (char *)plVar14[1];
            if (pcVar12 != pcVar9) {
              if (pcVar20 <= pcVar12) {
                uVar11 = 0;
                if (pcVar20 != (char *)0x0) {
                  uVar11 = (ulong)pcVar12 / (ulong)pcVar20;
                }
                pcVar12 = pcVar12 + -(uVar11 * (long)pcVar20);
              }
              if (pcVar12 != pcVar25) break;
            }
            uVar11 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
            if ((*(byte *)(plVar14 + 2) & 1) != 0) {
              uVar11 = plVar14[3];
            }
            if (uVar11 == 0) goto LAB_017ba770;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            pcVar12 = (char *)plVar14[1];
            if (pcVar12 != pcVar9) {
              if (pcVar20 <= pcVar12) {
                uVar11 = 0;
                if (pcVar20 != (char *)0x0) {
                  uVar11 = (ulong)pcVar12 / (ulong)pcVar20;
                }
                pcVar12 = pcVar12 + -(uVar11 * (long)pcVar20);
              }
              if (pcVar12 != pcVar25) break;
            }
            bVar4 = *(byte *)(plVar14 + 2);
            uVar11 = (ulong)(bVar4 >> 1);
            sVar2 = uVar11;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar14[3];
            }
            if (sVar2 == __n) {
              if ((bVar4 & 1) == 0) {
                psVar17 = (string *)((long)plVar14 + 0x11);
                psVar19 = psVar3;
                while (*psVar17 == *psVar19) {
                  uVar11 = uVar11 - 1;
                  psVar17 = psVar17 + 1;
                  psVar19 = psVar19 + 1;
                  if (uVar11 == 0) goto LAB_017ba770;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar14[4],psVar3,__n);
                if (iVar7 == 0) goto LAB_017ba770;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    plVar14 = DAT_043f1798;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar14;
    }
    plVar14 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    std::string::string((string *)(plVar14 + 2),psVar23);
    lVar15 = *(long *)(psVar23 + 0x18);
    lVar18 = *(long *)(psVar23 + 0x28);
    plVar14[6] = *(long *)(psVar23 + 0x20);
    plVar14[7] = lVar18;
    plVar14[5] = lVar15;
    *plVar14 = 0;
    plVar14[1] = (long)pcVar9;
    if ((pcVar20 == (char *)0x0) ||
       (*(float *)(plVar8 + 5) * (float)pcVar20 < (float)(plVar8[4] + 1))) {
      uVar11 = (ulong)(pcVar20 < (char *)0x3 || ((ulong)pcVar20 & (ulong)(pcVar20 + -1)) != 0) |
               (long)pcVar20 << 1;
      uVar16 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar16 <= uVar11) {
        uVar16 = uVar11;
      }
      FUN_008e9ae4(plVar22,uVar16);
      pcVar20 = (char *)plVar8[2];
      if (((ulong)pcVar20 & (ulong)(pcVar20 + -1)) == 0) {
        pcVar25 = (char *)((ulong)(pcVar20 + -1) & (ulong)pcVar9);
      }
      else if (pcVar9 < pcVar20) {
        pcVar25 = pcVar9;
      }
      else {
        uVar11 = 0;
        if (pcVar20 != (char *)0x0) {
          uVar11 = (ulong)pcVar9 / (ulong)pcVar20;
        }
        pcVar25 = pcVar9 + -(uVar11 * (long)pcVar20);
      }
    }
    lVar15 = *plVar22;
    plVar13 = *(long **)(lVar15 + (long)pcVar25 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar14 = *plVar1;
      *plVar1 = (long)plVar14;
      *(long **)(lVar15 + (long)pcVar25 * 8) = plVar1;
      if (*plVar14 != 0) {
        pcVar9 = *(char **)(*plVar14 + 8);
        if (((ulong)pcVar20 & (ulong)(pcVar20 + -1)) == 0) {
          pcVar9 = (char *)((ulong)pcVar9 & (ulong)(pcVar20 + -1));
        }
        else if (pcVar20 <= pcVar9) {
          uVar11 = 0;
          if (pcVar20 != (char *)0x0) {
            uVar11 = (ulong)pcVar9 / (ulong)pcVar20;
          }
          pcVar9 = pcVar9 + -(uVar11 * (long)pcVar20);
        }
        plVar13 = (long *)(*plVar22 + (long)pcVar9 * 8);
        goto LAB_017ba760;
      }
    }
    else {
      *plVar14 = *plVar13;
LAB_017ba760:
      *plVar13 = (long)plVar14;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_017ba770:
    psVar23 = psVar23 + 0x30;
  } while (psVar23 != (string *)local_80);
  lVar18 = FUN_008cca50();
  lVar15 = 0;
  do {
    lVar10 = FUN_008e8c90(plVar22,lVar18 + lVar15);
    if (lVar10 != 0) {
      FUN_008f2aec(local_80,plVar22,lVar10);
      lVar10 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar10 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) &&
           (lVar24 = *(long *)(lVar10 + 0x20), lVar24 != 0)) {
          plVar14 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar14 = plVar1;
          }
          uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar24,0,8);
              goto LAB_017ba9a8;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar24,0,8);
        }
LAB_017ba9a8:
        plVar1 = DAT_043f1798;
        plVar14 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar14 = plVar1;
        }
        uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar10,0,8);
            goto LAB_017ba960;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
      }
    }
LAB_017ba960:
    lVar10 = local_a0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x300);
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar15 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar10,0,8);
        plVar1 = DAT_043f1798;
        lVar15 = local_d0;
        goto joined_r0x017bab00;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
    plVar1 = DAT_043f1798;
    lVar15 = local_d0;
  }
joined_r0x017bab00:
  lVar18 = local_100;
  local_d0 = lVar15;
  if (((local_e0 & 1) != 0) && (lVar15 != 0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar15,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_100;
        goto joined_r0x017bb4f8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_100;
  }
joined_r0x017bb4f8:
  pcVar25 = local_130;
  local_100 = lVar18;
  if (((local_110 & 1) != 0) && (lVar18 != 0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pcVar25 = local_130;
        goto joined_r0x017bac68;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pcVar25 = local_130;
  }
joined_r0x017bac68:
  pcVar9 = local_160;
  local_130 = pcVar25;
  if (((local_140 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_160;
        goto joined_r0x017bb538;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_160;
  }
joined_r0x017bb538:
  pcVar25 = local_190;
  local_160 = pcVar9;
  if (((local_170 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar25 = local_190;
        goto joined_r0x017badd0;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar25 = local_190;
  }
joined_r0x017badd0:
  pcVar9 = local_1c0;
  local_190 = pcVar25;
  if (((local_1a0 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_1c0;
        goto joined_r0x017bb578;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_1c0;
  }
joined_r0x017bb578:
  pcVar25 = local_1f0;
  local_1c0 = pcVar9;
  if (((local_1d0 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar25 = local_1f0;
        goto joined_r0x017baf38;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar25 = local_1f0;
  }
joined_r0x017baf38:
  pcVar9 = local_220;
  local_1f0 = pcVar25;
  if (((local_200 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_220;
        goto joined_r0x017bb5b8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_220;
  }
joined_r0x017bb5b8:
  pcVar25 = local_250;
  local_220 = pcVar9;
  if (((local_230 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar25 = local_250;
        goto joined_r0x017bb0a0;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar25 = local_250;
  }
joined_r0x017bb0a0:
  pcVar9 = local_280;
  local_250 = pcVar25;
  if (((local_260 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar9 = local_280;
        goto joined_r0x017bb5f8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar9 = local_280;
  }
joined_r0x017bb5f8:
  pcVar25 = local_2b0;
  local_280 = pcVar9;
  if (((local_290 & 1) != 0) && (pcVar9 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar25 = local_2b0;
        goto joined_r0x017bb208;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar25 = local_2b0;
  }
joined_r0x017bb208:
  DAT_043f1798 = plVar1;
  local_2b0 = pcVar25;
  if ((((byte)local_2c0 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pcVar25,0,8);
        goto LAB_017bb2b8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pcVar25,0,8);
  }
LAB_017bb2b8:
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar21);
  (**(code **)*plVar8)(plVar8,uVar21);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar11 = (ulong)&local_2d8 | 1;
  if ((local_2d8 & 1) != 0) {
    uVar11 = CONCAT53(uStack_2c5,CONCAT21(uStack_2c7,local_2c8));
  }
  FUN_001522a0(uVar21,uVar11);
  plVar1 = DAT_043f1798;
  if (((local_2d8 & 1) != 0) &&
     (lVar15 = CONCAT53(uStack_2c5,CONCAT21(uStack_2c7,local_2c8)), lVar15 != 0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar15,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,0,8);
  }
  return;
}


