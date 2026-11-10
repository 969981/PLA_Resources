/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02402090; name: FUN_02402090
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02402090(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  size_t sVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  string *psVar29;
  long lVar30;
  string *psVar31;
  ulong uVar32;
  undefined8 uVar33;
  long *plVar34;
  char *pcVar35;
  string *psVar36;
  long lVar37;
  byte local_2d8;
  undefined7 uStack_2d7;
  undefined4 local_2d0;
  undefined4 local_2cc;
  ulong local_2c8;
  string local_2c0;
  char local_2bf [7];
  char cStack_2b8;
  char acStack_2b7 [7];
  long local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  char local_28f [7];
  char cStack_288;
  char acStack_287 [7];
  long local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  char local_25f [5];
  char acStack_25a [3];
  char acStack_257 [5];
  undefined2 local_252;
  long local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  char local_22f [6];
  char acStack_229 [2];
  char acStack_227 [6];
  undefined1 local_221;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  char acStack_1ff [6];
  char local_1f9 [2];
  char acStack_1f7 [6];
  undefined1 local_1f1;
  long local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char acStack_1cf [5];
  char local_1ca [3];
  char acStack_1c7 [5];
  undefined2 local_1c2;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined8 local_19f;
  undefined4 local_197;
  undefined3 uStack_193;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  undefined8 local_16f;
  undefined4 local_167;
  undefined3 uStack_163;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
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
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
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
  local_2d8 = 0x16;
  local_2c8 = 0;
  local_2cc = 0;
  uStack_2d7 = s_RideManager_03921ff8._0_7_;
  local_2d0 = CONCAT31(0x726567,s_RideManager_03921ff8[7]);
  uVar6 = tpidr_el0;
  plVar27 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  plVar20 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x180,8);
  plVar20[4] = 0;
  plVar34 = plVar20 + 1;
  *plVar34 = 0;
  *(undefined4 *)(plVar20 + 5) = 0x3f800000;
  plVar20[10] = 0;
  plVar20[6] = (long)FUN_02403d50;
  plVar20[7] = (long)FUN_02403e00;
  *plVar20 = (long)&PTR_FUN_0425bf38;
  plVar20[0x10] = (long)&LAB_026b928c;
  plVar20[0x11] = 0;
  plVar20[0x12] = (long)"OpenFieldRide";
  plVar20[0x13] = (long)&LAB_026b94c8;
  plVar20[0x14] = (long)"OpenBattleRide";
  plVar20[0x15] = (long)&LAB_026bbbb0;
  plVar20[0x18] = (long)"GetNyuuraTool";
  plVar20[0x19] = (long)"StopRide";
  plVar20[0x1a] = (long)FUN_026bf63c;
  plVar20[0x1b] = 0;
  plVar20[0x1c] = (long)"IsRiding";
  plVar20[0x1d] = (long)FUN_026bf324;
  plVar20[0x20] = 0x26c0738;
  plVar20[0x21] = (long)"StartOdoshishiRide";
  *(undefined1 *)(plVar20 + 0xb) = 0;
  plVar20[0x22] = (long)FUN_026c0748;
  plVar20[0x23] = 0;
  plVar20[0x24] = (long)&DAT_038ca815;
  plVar20[0x25] = (long)&DAT_0392da3c;
  plVar20[0xc] = (long)"IsFieldRideOpened";
  plVar20[0xd] = (long)FUN_026b8a84;
  plVar20[0x28] = (long)FUN_02403f90;
  plVar20[0x29] = (long)&LAB_02404270;
  plVar20[2] = 0;
  plVar20[3] = 0;
  plVar20[0x2f] = 0;
  *(undefined1 *)(plVar20 + 0x2e) = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[0xe] = 0;
  plVar20[0xf] = (long)"IsBattleRideOpened";
  plVar20[0x16] = 0;
  plVar20[0x17] = (long)"GetStaminaData";
  plVar20[0x1e] = 0;
  plVar20[0x1f] = (long)"__haxe_export_GetStaminaSetting";
  plVar20[0x26] = 0;
  plVar20[0x27] = 0;
  plVar20[0x2a] = (long)&LAB_02404550;
  plVar20[0x2b] = (long)&LAB_02404560;
  plVar20[0x2c] = 0;
  plVar20[0x2d] = 0;
  plVar1 = DAT_043f1798;
  local_2c0 = (string)0x22;
  local_2bf[0] = s_IsFieldRideOpened_0389e052[0];
  local_2bf[1] = s_IsFieldRideOpened_0389e052[1];
  local_2bf[2] = s_IsFieldRideOpened_0389e052[2];
  local_2bf[3] = s_IsFieldRideOpened_0389e052[3];
  local_2bf[4] = s_IsFieldRideOpened_0389e052[4];
  local_2bf[5] = s_IsFieldRideOpened_0389e052[5];
  local_2bf[6] = s_IsFieldRideOpened_0389e052[6];
  cStack_2b8 = s_IsFieldRideOpened_0389e052[7];
  acStack_2b7[0] = s_IsFieldRideOpened_0389e052[8];
  acStack_2b7[1] = s_IsFieldRideOpened_0389e052[9];
  acStack_2b7[2] = s_IsFieldRideOpened_0389e052[10];
  acStack_2b7[3] = s_IsFieldRideOpened_0389e052[0xb];
  acStack_2b7[4] = s_IsFieldRideOpened_0389e052[0xc];
  acStack_2b7[5] = s_IsFieldRideOpened_0389e052[0xd];
  acStack_2b7[6] = s_IsFieldRideOpened_0389e052[0xe];
  local_298 = 0xffffffff;
  local_290 = 0x24;
  local_268 = 0xffffffff;
  local_252 = 0;
  local_238 = 0xffffffff;
  local_2b0 = 0x6465;
  local_2a8 = &LAB_02404564;
  local_2a0 = &LAB_024045ac;
  local_28f[0] = s_IsBattleRideOpened_03901786[0];
  local_28f[1] = s_IsBattleRideOpened_03901786[1];
  local_28f[2] = s_IsBattleRideOpened_03901786[2];
  local_28f[3] = s_IsBattleRideOpened_03901786[3];
  local_28f[4] = s_IsBattleRideOpened_03901786[4];
  local_28f[5] = s_IsBattleRideOpened_03901786[5];
  local_28f[6] = s_IsBattleRideOpened_03901786[6];
  cStack_288 = s_IsBattleRideOpened_03901786[7];
  acStack_287[0] = s_IsBattleRideOpened_03901786[8];
  acStack_287[1] = s_IsBattleRideOpened_03901786[9];
  acStack_287[2] = s_IsBattleRideOpened_03901786[10];
  acStack_287[3] = s_IsBattleRideOpened_03901786[0xb];
  acStack_287[4] = s_IsBattleRideOpened_03901786[0xc];
  acStack_287[5] = s_IsBattleRideOpened_03901786[0xd];
  acStack_287[6] = s_IsBattleRideOpened_03901786[0xe];
  local_280 = 0x64656e;
  puStack_278 = &LAB_024045f4;
  local_25f[0] = s_OpenFieldRide_0389e064[0];
  local_25f[1] = s_OpenFieldRide_0389e064[1];
  local_25f[2] = s_OpenFieldRide_0389e064[2];
  local_25f[3] = s_OpenFieldRide_0389e064[3];
  local_25f[4] = s_OpenFieldRide_0389e064[4];
  local_240 = &LAB_024046cc;
  acStack_25a[0] = s_OpenFieldRide_0389e064[5];
  acStack_25a[1] = s_OpenFieldRide_0389e064[6];
  acStack_25a[2] = s_OpenFieldRide_0389e064[7];
  acStack_257[0] = s_OpenFieldRide_0389e064[8];
  acStack_257[1] = s_OpenFieldRide_0389e064[9];
  acStack_257[2] = s_OpenFieldRide_0389e064[10];
  acStack_257[3] = s_OpenFieldRide_0389e064[0xb];
  acStack_257[4] = s_OpenFieldRide_0389e064[0xc];
  local_270 = &LAB_0240463c;
  local_260 = 0x1a;
  local_250 = 0;
  puStack_248 = &LAB_02404684;
  local_230 = 0x1c;
  local_22f[0] = s_OpenBattleRide_038c430f[0];
  local_22f[1] = s_OpenBattleRide_038c430f[1];
  local_22f[2] = s_OpenBattleRide_038c430f[2];
  local_22f[3] = s_OpenBattleRide_038c430f[3];
  local_22f[4] = s_OpenBattleRide_038c430f[4];
  local_22f[5] = s_OpenBattleRide_038c430f[5];
  acStack_229[0] = s_OpenBattleRide_038c430f[6];
  acStack_229[1] = s_OpenBattleRide_038c430f[7];
  acStack_227[0] = s_OpenBattleRide_038c430f[8];
  acStack_227[1] = s_OpenBattleRide_038c430f[9];
  acStack_227[2] = s_OpenBattleRide_038c430f[10];
  acStack_227[3] = s_OpenBattleRide_038c430f[0xb];
  acStack_227[4] = s_OpenBattleRide_038c430f[0xc];
  acStack_227[5] = s_OpenBattleRide_038c430f[0xd];
  local_221 = 0;
  local_210 = &LAB_0240475c;
  local_208 = 0xffffffff;
  local_200 = 0x1c;
  local_220 = 0;
  puStack_218 = &LAB_02404714;
  acStack_1f7[0] = s_GetStaminaData_03901799[8];
  acStack_1f7[1] = s_GetStaminaData_03901799[9];
  acStack_1f7[2] = s_GetStaminaData_03901799[10];
  acStack_1f7[3] = s_GetStaminaData_03901799[0xb];
  acStack_1f7[4] = s_GetStaminaData_03901799[0xc];
  acStack_1f7[5] = s_GetStaminaData_03901799[0xd];
  acStack_1ff[0] = s_GetStaminaData_03901799[0];
  acStack_1ff[1] = s_GetStaminaData_03901799[1];
  acStack_1ff[2] = s_GetStaminaData_03901799[2];
  acStack_1ff[3] = s_GetStaminaData_03901799[3];
  acStack_1ff[4] = s_GetStaminaData_03901799[4];
  acStack_1ff[5] = s_GetStaminaData_03901799[5];
  local_1f9[0] = s_GetStaminaData_03901799[6];
  local_1f9[1] = s_GetStaminaData_03901799[7];
  local_1f1 = 0;
  local_1e0 = &LAB_024047ec;
  local_1d8 = 0xffffffff;
  local_1d0 = 0x1a;
  local_1f0 = 0;
  puStack_1e8 = &LAB_024047a4;
  acStack_1c7[0] = s_GetNyuuraTool_0399e45e[8];
  acStack_1c7[1] = s_GetNyuuraTool_0399e45e[9];
  acStack_1c7[2] = s_GetNyuuraTool_0399e45e[10];
  acStack_1c7[3] = s_GetNyuuraTool_0399e45e[0xb];
  acStack_1c7[4] = s_GetNyuuraTool_0399e45e[0xc];
  acStack_1cf[0] = s_GetNyuuraTool_0399e45e[0];
  acStack_1cf[1] = s_GetNyuuraTool_0399e45e[1];
  acStack_1cf[2] = s_GetNyuuraTool_0399e45e[2];
  acStack_1cf[3] = s_GetNyuuraTool_0399e45e[3];
  acStack_1cf[4] = s_GetNyuuraTool_0399e45e[4];
  local_1ca[0] = s_GetNyuuraTool_0399e45e[5];
  local_1ca[1] = s_GetNyuuraTool_0399e45e[6];
  local_1ca[2] = s_GetNyuuraTool_0399e45e[7];
  local_1b0 = &LAB_0240487c;
  local_1c2 = 0;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_02404834;
  local_1a0 = 0x10;
  local_19f = 0x65646952706f7453;
  local_170 = 0x10;
  local_197 = 0;
  uStack_193 = 0;
  local_180 = &LAB_0240490c;
  local_178 = 0xffffffff;
  local_190 = 0;
  puStack_188 = &LAB_024048c4;
  local_16f = 0x676e696469527349;
  local_167 = 0;
  uStack_163 = 0;
  local_150 = &LAB_0240499c;
  local_148 = 0xffffffff;
  local_160 = 0;
  puStack_158 = &LAB_02404954;
  plVar27 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x20,8);
  local_130[0x1f] = '\0';
  uVar7 = s___haxe_export_GetStaminaSetting_039017a8._8_8_;
  *(undefined8 *)local_130 = s___haxe_export_GetStaminaSetting_039017a8._0_8_;
  *(ulong *)(local_130 + 0x17) =
       CONCAT71(s___haxe_export_GetStaminaSetting_039017a8._24_7_,
                s___haxe_export_GetStaminaSetting_039017a8[0x17]);
  uVar33 = CONCAT17(s___haxe_export_GetStaminaSetting_039017a8[0x17],
                    s___haxe_export_GetStaminaSetting_039017a8._16_7_);
  *(undefined8 *)(local_130 + 8) = uVar7;
  *(undefined8 *)(local_130 + 0x10) = uVar33;
  psVar36 = &local_2c0;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x1f;
  local_118 = 0xffffffff;
  local_128 = &LAB_024049e4;
  puStack_120 = &LAB_02404a2c;
  local_110 = 0x24;
  local_10f[0] = s_StartOdoshishiRide_03951226[0];
  local_10f[1] = s_StartOdoshishiRide_03951226[1];
  local_10f[2] = s_StartOdoshishiRide_03951226[2];
  local_10f[3] = s_StartOdoshishiRide_03951226[3];
  local_10f[4] = s_StartOdoshishiRide_03951226[4];
  local_10f[5] = s_StartOdoshishiRide_03951226[5];
  local_10f[6] = s_StartOdoshishiRide_03951226[6];
  cStack_108 = s_StartOdoshishiRide_03951226[7];
  acStack_107[0] = s_StartOdoshishiRide_03951226[8];
  acStack_107[1] = s_StartOdoshishiRide_03951226[9];
  acStack_107[2] = s_StartOdoshishiRide_03951226[10];
  acStack_107[3] = s_StartOdoshishiRide_03951226[0xb];
  acStack_107[4] = s_StartOdoshishiRide_03951226[0xc];
  acStack_107[5] = s_StartOdoshishiRide_03951226[0xd];
  acStack_107[6] = s_StartOdoshishiRide_03951226[0xe];
  local_100 = 0x656469;
  local_f0 = &LAB_02404abc;
  local_f8 = &LAB_02404a74;
  local_e8 = 0xffffffff;
  plVar1 = plVar20 + 3;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_02404b4c;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_c8 = &LAB_02404b04;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_02404bdc;
  local_88 = 0xffffffff;
  local_98 = &LAB_02404b94;
  uVar24 = uVar6;
  do {
    uVar21 = *(ulong *)(psVar36 + 8);
    psVar3 = *(string **)(psVar36 + 0x10);
    if (((byte)*psVar36 & 1) == 0) {
      psVar3 = psVar36 + 1;
      uVar21 = (ulong)((byte)*psVar36 >> 1);
    }
    uVar21 = FUN_008e8ed4(local_80,psVar3,uVar21);
    uVar32 = plVar20[2];
    if (uVar32 != 0) {
      uVar24 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar25 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar24 = uVar32 - 1 & uVar21;
      }
      else {
        uVar24 = uVar21;
        if (uVar32 <= uVar21) {
          uVar24 = 0;
          if (uVar32 != 0) {
            uVar24 = uVar21 / uVar32;
          }
          uVar24 = uVar21 - uVar24 * uVar32;
        }
      }
      plVar27 = *(long **)(*plVar34 + uVar24 * 8);
      if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
        psVar3 = psVar36 + 1;
        sVar23 = (ulong)((byte)*psVar36 >> 1);
        if (((byte)*psVar36 & 1) != 0) {
          psVar3 = *(string **)(psVar36 + 0x10);
          sVar23 = *(size_t *)(psVar36 + 8);
        }
        if (uVar25 < 2) {
          if (sVar23 == 0) {
            do {
              if (plVar27[1] != uVar21 && (plVar27[1] & uVar32 - 1) != uVar24) break;
              uVar25 = (ulong)(*(byte *)(plVar27 + 2) >> 1);
              if ((*(byte *)(plVar27 + 2) & 1) != 0) {
                uVar25 = plVar27[3];
              }
              if (uVar25 == 0) goto LAB_0240283c;
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          else {
            do {
              if (plVar27[1] != uVar21 && (plVar27[1] & uVar32 - 1) != uVar24) break;
              bVar4 = *(byte *)(plVar27 + 2);
              uVar25 = (ulong)(bVar4 >> 1);
              sVar2 = uVar25;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar27[3];
              }
              if (sVar2 == sVar23) {
                if ((bVar4 & 1) == 0) {
                  psVar29 = (string *)((long)plVar27 + 0x11);
                  psVar31 = psVar3;
                  while (*psVar29 == *psVar31) {
                    uVar25 = uVar25 - 1;
                    psVar29 = psVar29 + 1;
                    psVar31 = psVar31 + 1;
                    if (uVar25 == 0) goto LAB_0240283c;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar27[4],psVar3,sVar23);
                  if (iVar8 == 0) goto LAB_0240283c;
                }
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
        }
        else if (sVar23 == 0) {
          do {
            uVar25 = plVar27[1];
            if (uVar25 != uVar21) {
              if (uVar32 <= uVar25) {
                uVar5 = 0;
                if (uVar32 != 0) {
                  uVar5 = uVar25 / uVar32;
                }
                uVar25 = uVar25 - uVar5 * uVar32;
              }
              if (uVar25 != uVar24) break;
            }
            uVar25 = (ulong)(*(byte *)(plVar27 + 2) >> 1);
            if ((*(byte *)(plVar27 + 2) & 1) != 0) {
              uVar25 = plVar27[3];
            }
            if (uVar25 == 0) goto LAB_0240283c;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar27[1];
            if (uVar25 != uVar21) {
              if (uVar32 <= uVar25) {
                uVar5 = 0;
                if (uVar32 != 0) {
                  uVar5 = uVar25 / uVar32;
                }
                uVar25 = uVar25 - uVar5 * uVar32;
              }
              if (uVar25 != uVar24) break;
            }
            bVar4 = *(byte *)(plVar27 + 2);
            uVar25 = (ulong)(bVar4 >> 1);
            sVar2 = uVar25;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar27[3];
            }
            if (sVar2 == sVar23) {
              if ((bVar4 & 1) == 0) {
                psVar29 = (string *)((long)plVar27 + 0x11);
                psVar31 = psVar3;
                while (*psVar29 == *psVar31) {
                  uVar25 = uVar25 - 1;
                  psVar29 = psVar29 + 1;
                  psVar31 = psVar31 + 1;
                  if (uVar25 == 0) goto LAB_0240283c;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar27[4],psVar3,sVar23);
                if (iVar8 == 0) goto LAB_0240283c;
              }
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
      }
    }
    plVar27 = DAT_043f1798;
    plVar26 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar26 = plVar27;
    }
    plVar27 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x40,8);
    std::string::string((string *)(plVar27 + 2),psVar36);
    lVar28 = *(long *)(psVar36 + 0x18);
    lVar30 = *(long *)(psVar36 + 0x28);
    plVar27[6] = *(long *)(psVar36 + 0x20);
    plVar27[7] = lVar30;
    plVar27[5] = lVar28;
    *plVar27 = 0;
    plVar27[1] = uVar21;
    if ((uVar32 == 0) || (*(float *)(plVar20 + 5) * (float)uVar32 < (float)(plVar20[4] + 1))) {
      uVar24 = (ulong)(uVar32 < 3 || (uVar32 & uVar32 - 1) != 0) | uVar32 << 1;
      uVar32 = (ulong)((float)(plVar20[4] + 1) / *(float *)(plVar20 + 5));
      if (uVar32 <= uVar24) {
        uVar32 = uVar24;
      }
      FUN_008e9ae4(plVar34,uVar32);
      uVar32 = plVar20[2];
      if ((uVar32 & uVar32 - 1) == 0) {
        uVar24 = uVar32 - 1 & uVar21;
      }
      else if (uVar21 < uVar32) {
        uVar24 = uVar21;
      }
      else {
        uVar24 = 0;
        if (uVar32 != 0) {
          uVar24 = uVar21 / uVar32;
        }
        uVar24 = uVar21 - uVar24 * uVar32;
      }
    }
    lVar28 = *plVar34;
    plVar26 = *(long **)(lVar28 + uVar24 * 8);
    if (plVar26 == (long *)0x0) {
      *plVar27 = *plVar1;
      *plVar1 = (long)plVar27;
      *(long **)(lVar28 + uVar24 * 8) = plVar1;
      if (*plVar27 != 0) {
        uVar21 = *(ulong *)(*plVar27 + 8);
        if ((uVar32 & uVar32 - 1) == 0) {
          uVar21 = uVar21 & uVar32 - 1;
        }
        else if (uVar32 <= uVar21) {
          uVar25 = 0;
          if (uVar32 != 0) {
            uVar25 = uVar21 / uVar32;
          }
          uVar21 = uVar21 - uVar25 * uVar32;
        }
        plVar26 = (long *)(*plVar34 + uVar21 * 8);
        goto LAB_0240282c;
      }
    }
    else {
      *plVar27 = *plVar26;
LAB_0240282c:
      *plVar26 = (long)plVar27;
    }
    plVar20[4] = plVar20[4] + 1;
LAB_0240283c:
    psVar36 = psVar36 + 0x30;
  } while (psVar36 != (string *)local_80);
  lVar30 = FUN_008cca50();
  lVar28 = 0;
  do {
    lVar22 = FUN_008e8c90(plVar34,lVar30 + lVar28);
    if (lVar22 != 0) {
      FUN_008f2aec(local_80,plVar34,lVar22);
      lVar22 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar22 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar22 + 0x10) & 1) != 0)) &&
           (lVar37 = *(long *)(lVar22 + 0x20), lVar37 != 0)) {
          plVar27 = *(long **)(uVar6 + 0x20);
          if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
            *(long **)(uVar6 + 0x20) = DAT_043f1798;
            plVar27 = plVar1;
          }
          uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
          if ((uVar24 & 1) != 0) {
            if (*(char *)(uVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(uVar6 + 0x38d488) = 1;
              *(undefined8 *)(uVar6 + 0x38d478) = 0;
              *(undefined8 *)(uVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(uVar6 + 0x38d480)) {
              FUN_02bcc824(plVar27,lVar37,0,8);
              goto LAB_02402a78;
            }
          }
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar37,0,8);
        }
LAB_02402a78:
        plVar1 = DAT_043f1798;
        plVar27 = *(long **)(uVar6 + 0x20);
        if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
          *(long **)(uVar6 + 0x20) = DAT_043f1798;
          plVar27 = plVar1;
        }
        uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
        if ((uVar24 & 1) != 0) {
          if (*(char *)(uVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(uVar6 + 0x38d488) = 1;
            *(undefined8 *)(uVar6 + 0x38d478) = 0;
            *(undefined8 *)(uVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(uVar6 + 0x38d480)) {
            FUN_02bcc824(plVar27,lVar22,0,8);
            goto LAB_02402a30;
          }
        }
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar22,0,8);
      }
    }
LAB_02402a30:
    lVar28 = lVar28 + 0x18;
  } while (lVar28 != 0x300);
  pcVar35 = (char *)plVar20[0xc];
  sVar23 = strlen(pcVar35);
  iVar8 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0xf];
  sVar23 = strlen(pcVar35);
  iVar9 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x12];
  sVar23 = strlen(pcVar35);
  iVar10 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x14];
  sVar23 = strlen(pcVar35);
  iVar11 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x17];
  sVar23 = strlen(pcVar35);
  iVar12 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x18];
  sVar23 = strlen(pcVar35);
  iVar13 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x19];
  sVar23 = strlen(pcVar35);
  iVar14 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x1c];
  sVar23 = strlen(pcVar35);
  iVar15 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x1f];
  sVar23 = strlen(pcVar35);
  iVar16 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x21];
  sVar23 = strlen(pcVar35);
  iVar17 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x24];
  sVar23 = strlen(pcVar35);
  iVar18 = FUN_008f2c60(sVar23,pcVar35);
  pcVar35 = (char *)plVar20[0x25];
  sVar23 = strlen(pcVar35);
  iVar19 = FUN_008f2c60(sVar23,pcVar35);
  lVar30 = local_a0;
  *(bool *)(plVar20 + 0xb) =
       ((((((((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
            iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) ||
       iVar18 != 0) || iVar19 != 0;
  plVar1 = DAT_043f1798;
  lVar28 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_d0;
        goto joined_r0x02402cf4;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_d0;
  }
joined_r0x02402cf4:
  lVar30 = local_100;
  local_d0 = lVar28;
  if (((local_e0 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_100;
        goto joined_r0x024036ec;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_100;
  }
joined_r0x024036ec:
  pcVar35 = local_130;
  local_100 = lVar30;
  if (((local_110 & 1) != 0) && (lVar30 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar30,0,8);
        plVar1 = DAT_043f1798;
        pcVar35 = local_130;
        goto joined_r0x02402e5c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar30,0,8);
    plVar1 = DAT_043f1798;
    pcVar35 = local_130;
  }
joined_r0x02402e5c:
  lVar28 = local_160;
  local_130 = pcVar35;
  if (((local_140 & 1) != 0) && (pcVar35 != (char *)0x0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar35,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_160;
        goto joined_r0x0240372c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar35,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_160;
  }
joined_r0x0240372c:
  lVar30 = local_190;
  local_160 = lVar28;
  if (((local_170 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_190;
        goto joined_r0x02402fc4;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_190;
  }
joined_r0x02402fc4:
  lVar28 = local_1c0;
  local_190 = lVar30;
  if (((local_1a0 & 1) != 0) && (lVar30 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_1c0;
        goto joined_r0x0240376c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_1c0;
  }
joined_r0x0240376c:
  lVar30 = local_1f0;
  local_1c0 = lVar28;
  if (((local_1d0 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_1f0;
        goto joined_r0x0240312c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_1f0;
  }
joined_r0x0240312c:
  lVar28 = local_220;
  local_1f0 = lVar30;
  if (((local_200 & 1) != 0) && (lVar30 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_220;
        goto joined_r0x024037ac;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_220;
  }
joined_r0x024037ac:
  lVar30 = local_250;
  local_220 = lVar28;
  if (((local_230 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_250;
        goto joined_r0x02403294;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_250;
  }
joined_r0x02403294:
  lVar28 = local_280;
  local_250 = lVar30;
  if (((local_260 & 1) != 0) && (lVar30 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_280;
        goto joined_r0x024037ec;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_280;
  }
joined_r0x024037ec:
  lVar30 = local_2b0;
  local_280 = lVar28;
  if (((local_290 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_2b0;
        goto joined_r0x024033fc;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_2b0;
  }
joined_r0x024033fc:
  DAT_043f1798 = plVar1;
  local_2b0 = lVar30;
  if ((((byte)local_2c0 & 1) != 0) && (lVar30 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar30,0,8);
        goto LAB_024034ac;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar30,0,8);
  }
LAB_024034ac:
  uVar33 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar33);
  (**(code **)*plVar20)(plVar20,uVar33);
  (**(code **)(*plVar20 + 0x10))(plVar20);
  uVar24 = (ulong)&local_2d8 | 1;
  if ((local_2d8 & 1) != 0) {
    uVar24 = local_2c8;
  }
  FUN_001522a0(uVar33,uVar24);
  uVar24 = local_2c8;
  plVar1 = DAT_043f1798;
  if (((local_2d8 & 1) != 0) && (local_2c8 != 0)) {
    plVar27 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar21 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,uVar24,0,8);
        return;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,uVar24,0,8);
  }
  return;
}


