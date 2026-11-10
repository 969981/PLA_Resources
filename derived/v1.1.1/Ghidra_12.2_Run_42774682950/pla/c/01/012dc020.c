/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012dc020; name: FUN_012dc020
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012dc020(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
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
  long *plVar19;
  size_t sVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  string *psVar29;
  long lVar30;
  string *psVar31;
  ulong uVar32;
  byte *pbVar33;
  undefined8 uVar34;
  string *psVar35;
  long *plVar36;
  char *pcVar37;
  void *pvVar38;
  long lVar39;
  byte *pbVar40;
  byte local_338;
  char acStack_337 [7];
  char local_330;
  char acStack_32f [7];
  ulong local_328;
  byte local_320;
  undefined7 uStack_31f;
  undefined1 local_318;
  undefined7 uStack_317;
  void *local_310;
  undefined7 local_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  byte local_2f8;
  undefined7 uStack_2f7;
  undefined1 local_2f0;
  undefined7 uStack_2ef;
  void *local_2e8;
  undefined7 local_2e0;
  undefined1 uStack_2d9;
  undefined7 uStack_2d8;
  undefined7 local_2d0;
  undefined1 uStack_2c9;
  undefined7 uStack_2c8;
  string local_2c0;
  undefined2 local_2bf;
  undefined1 local_2bd;
  undefined8 local_2bc;
  undefined4 local_2b4;
  long local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  undefined4 local_28f;
  undefined7 local_28b;
  undefined4 uStack_284;
  long local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined4 local_268;
  string local_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  void *local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  undefined7 local_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  void *local_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  byte local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [8];
  undefined4 local_1c7;
  undefined1 local_1c3;
  undefined2 local_1c2;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char local_19f [8];
  undefined4 local_197;
  undefined1 local_193;
  undefined2 local_192;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *local_128;
  undefined1 *local_120;
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
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar1 = DAT_043f1798;
  local_338 = 0x1e;
  acStack_337 = (char  [7])s_ProcResidentHud_038b7c69._0_7_;
  local_330 = s_ProcResidentHud_038b7c69[7];
  acStack_32f = (char  [7])s_ProcResidentHud_038b7c69._8_7_;
  local_328 = 0;
  lVar5 = tpidr_el0;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  plVar19 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x1b8,8);
  plVar19[4] = 0;
  plVar36 = plVar19 + 1;
  *plVar36 = 0;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[10] = 0;
  plVar19[6] = (long)FUN_012ddf60;
  plVar19[7] = (long)FUN_012de010;
  *plVar19 = (long)&PTR_FUN_042032d8;
  plVar19[0xc] = (long)&DAT_038ca815;
  plVar19[0xd] = (long)&DAT_0392da3c;
  plVar19[0xf] = (long)"ShowRideGuide";
  plVar19[0x10] = (long)FUN_01469774;
  plVar19[0x11] = 0;
  plVar19[0x12] = (long)"ActionRideGuide";
  plVar19[0x15] = (long)"HideRideGuide";
  plVar19[0x16] = (long)FUN_014698d0;
  plVar19[0x17] = 0;
  plVar19[0x18] = (long)"ShowAreaName";
  plVar19[0x19] = (long)FUN_0146995c;
  plVar19[0x1a] = 0;
  plVar19[0x13] = (long)&LAB_0146982c;
  plVar19[0x14] = 0;
  plVar19[0x1b] = (long)"HideAreaName";
  plVar19[0x1c] = (long)FUN_01467098;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  *(undefined1 *)(plVar19 + 0xe) = 0;
  plVar19[0x36] = 0;
  *(undefined1 *)(plVar19 + 0x35) = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = (long)"IsClosedAreaName";
  plVar19[0x1f] = (long)FUN_01469a28;
  plVar19[0x20] = 0;
  plVar19[0x21] = (long)"ShowLocationName";
  plVar19[0x22] = (long)FUN_01469a70;
  plVar19[0x23] = 0;
  plVar19[0x24] = (long)"HideLocationName";
  plVar19[0x25] = (long)&LAB_01467108;
  plVar19[0x26] = 0;
  plVar19[0x27] = (long)"IsClosedLocationName";
  plVar19[0x28] = (long)&LAB_01469b0c;
  plVar19[0x2b] = (long)FUN_01469ba0;
  plVar19[0x2c] = 0;
  plVar19[0x2f] = (long)FUN_012de1a0;
  plVar19[0x30] = (long)&LAB_012de484;
  plVar19[0x31] = (long)&LAB_012de770;
  plVar19[0x32] = (long)&LAB_012de780;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[0x29] = 0;
  plVar19[0x2a] = (long)"ResetLocationNameTimer";
  plVar19[0x2d] = 0;
  plVar19[0x2e] = 0;
  plVar19[0x33] = 0;
  plVar19[0x34] = 0;
  local_2c0 = (string)0x6;
  local_2bf = 0x656e;
  local_2bd = 0x77;
  local_2bc = 0;
  local_2b4 = 0;
  local_2a0 = &LAB_012de7cc;
  local_298 = 0xffffffff;
  local_290 = 8;
  local_2b0 = 0;
  local_2a8 = &LAB_012de784;
  local_28f = 0x63675f5f;
  local_28b = 0;
  uStack_284 = 0;
  local_270 = &LAB_012de85c;
  local_268 = 0xffffffff;
  local_280 = 0;
  puStack_278 = &LAB_012de814;
  pcVar37 = (char *)plVar19[0xf];
  sVar20 = strlen(pcVar37);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar20) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar20 < 0x17) {
    local_80 = SUB41((int)sVar20 << 1,0);
    pvVar38 = (void *)((ulong)&local_80 | 1);
    if (sVar20 != 0) goto LAB_012dc2e8;
  }
  else {
    uVar32 = sVar20 + 0x10 & 0xfffffffffffffff0;
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    pvVar38 = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar32,8);
    local_80 = (string)((byte)uVar32 | 1);
    uStack_7f = (undefined7)(uVar32 >> 8);
    local_78 = (undefined1)sVar20;
    uStack_77 = (undefined7)(sVar20 >> 8);
    local_70 = pvVar38;
LAB_012dc2e8:
    memcpy(pvVar38,pcVar37,sVar20);
  }
  local_250 = local_70;
  uStack_257 = uStack_77;
  uStack_258 = local_78;
  local_25f = uStack_7f;
  local_260 = local_80;
  *(undefined1 *)((long)pvVar38 + sVar20) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_2d0 = 0;
  uStack_2c9 = 0;
  uStack_2c8 = 0;
  local_238 = 0xffffffff;
  local_248 = &LAB_012de8a4;
  puStack_240 = &LAB_012de8ec;
  pcVar37 = (char *)plVar19[0x12];
  sVar20 = strlen(pcVar37);
  plVar1 = DAT_043f1798;
  local_2f8 = 0;
  uStack_2f7 = 0;
  local_2f0 = 0;
  uStack_2ef = 0;
  local_2e8 = (void *)0x0;
  if (0xffffffffffffffef < sVar20) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar20 < 0x17) {
    local_2f8 = (byte)((int)sVar20 << 1);
    pvVar38 = (void *)((ulong)&local_2f8 | 1);
    if (sVar20 != 0) goto LAB_012dc388;
  }
  else {
    uVar32 = sVar20 + 0x10 & 0xfffffffffffffff0;
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    pvVar38 = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar32,8);
    local_2f8 = (byte)uVar32 | 1;
    uStack_2f7 = (undefined7)(uVar32 >> 8);
    local_2f0 = (undefined1)sVar20;
    uStack_2ef = (undefined7)(sVar20 >> 8);
    local_2e8 = pvVar38;
LAB_012dc388:
    memcpy(pvVar38,pcVar37,sVar20);
  }
  local_220 = local_2e8;
  uStack_227 = uStack_2ef;
  uStack_228 = local_2f0;
  local_22f = uStack_2f7;
  local_230 = local_2f8;
  *(undefined1 *)((long)pvVar38 + sVar20) = 0;
  local_2f0 = 0;
  uStack_2ef = 0;
  local_2e8 = (void *)0x0;
  local_2f8 = 0;
  uStack_2f7 = 0;
  local_2e0 = 0;
  uStack_2d9 = 0;
  uStack_2d8 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_012de934;
  puStack_210 = &LAB_012de97c;
  pcVar37 = (char *)plVar19[0x15];
  sVar20 = strlen(pcVar37);
  plVar1 = DAT_043f1798;
  local_320 = 0;
  uStack_31f = 0;
  local_318 = 0;
  uStack_317 = 0;
  local_310 = (void *)0x0;
  if (0xffffffffffffffef < sVar20) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pbVar40 = &local_338;
  if (sVar20 < 0x17) {
    local_320 = (byte)((int)sVar20 << 1);
    pvVar38 = (void *)((ulong)&local_320 | 1);
    if (sVar20 != 0) goto LAB_012dc430;
  }
  else {
    uVar32 = sVar20 + 0x10 & 0xfffffffffffffff0;
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    pvVar38 = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar32,8);
    local_320 = (byte)uVar32 | 1;
    uStack_31f = (undefined7)(uVar32 >> 8);
    local_318 = (undefined1)sVar20;
    uStack_317 = (undefined7)(sVar20 >> 8);
    local_310 = pvVar38;
LAB_012dc430:
    memcpy(pvVar38,pcVar37,sVar20);
  }
  local_1f0 = local_310;
  uStack_1f7 = uStack_317;
  uStack_1f8 = local_318;
  *(undefined1 *)((long)pvVar38 + sVar20) = 0;
  local_200 = local_320;
  local_1ff = uStack_31f;
  local_318 = 0;
  uStack_317 = 0;
  local_310 = (void *)0x0;
  uVar32 = (ulong)pbVar40 | 1;
  local_1e8 = &LAB_012de9c4;
  puStack_1e0 = &LAB_012dea0c;
  psVar35 = &local_2c0;
  local_1d8 = 0xffffffff;
  local_320 = 0;
  uStack_31f = 0;
  local_308 = 0;
  uStack_301 = 0;
  uStack_300 = 0;
  local_1d0 = 0x18;
  local_1c7 = 0x656d614e;
  local_1cf[0] = s_ShowAreaName_0399ae3d[0];
  local_1cf[1] = s_ShowAreaName_0399ae3d[1];
  local_1cf[2] = s_ShowAreaName_0399ae3d[2];
  local_1cf[3] = s_ShowAreaName_0399ae3d[3];
  local_1cf[4] = s_ShowAreaName_0399ae3d[4];
  local_1cf[5] = s_ShowAreaName_0399ae3d[5];
  local_1cf[6] = s_ShowAreaName_0399ae3d[6];
  local_1cf[7] = s_ShowAreaName_0399ae3d[7];
  local_1a0 = 0x18;
  local_1c3 = 0;
  local_1c2 = 0;
  local_1b0 = &LAB_012dea9c;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_012dea54;
  local_197 = 0x656d614e;
  local_19f[0] = s_HideAreaName_038d4e39[0];
  local_19f[1] = s_HideAreaName_038d4e39[1];
  local_19f[2] = s_HideAreaName_038d4e39[2];
  local_19f[3] = s_HideAreaName_038d4e39[3];
  local_19f[4] = s_HideAreaName_038d4e39[4];
  local_19f[5] = s_HideAreaName_038d4e39[5];
  local_19f[6] = s_HideAreaName_038d4e39[6];
  local_19f[7] = s_HideAreaName_038d4e39[7];
  local_193 = 0;
  local_192 = 0;
  local_178 = 0xffffffff;
  local_180 = &LAB_012deb2c;
  local_190 = 0;
  puStack_188 = &LAB_012deae4;
  local_170 = 0x20;
  local_16f[0] = s_IsClosedAreaName_039b52fe[0];
  local_16f[1] = s_IsClosedAreaName_039b52fe[1];
  local_16f[2] = s_IsClosedAreaName_039b52fe[2];
  local_16f[3] = s_IsClosedAreaName_039b52fe[3];
  local_16f[4] = s_IsClosedAreaName_039b52fe[4];
  local_16f[5] = s_IsClosedAreaName_039b52fe[5];
  local_16f[6] = s_IsClosedAreaName_039b52fe[6];
  local_140 = 0x20;
  local_158 = &LAB_012deb74;
  local_148 = 0xffffffff;
  cStack_168 = s_IsClosedAreaName_039b52fe[7];
  acStack_167[0] = s_IsClosedAreaName_039b52fe[8];
  acStack_167[1] = s_IsClosedAreaName_039b52fe[9];
  acStack_167[2] = s_IsClosedAreaName_039b52fe[10];
  acStack_167[3] = s_IsClosedAreaName_039b52fe[0xb];
  acStack_167[4] = s_IsClosedAreaName_039b52fe[0xc];
  acStack_167[5] = s_IsClosedAreaName_039b52fe[0xd];
  acStack_167[6] = s_IsClosedAreaName_039b52fe[0xe];
  local_160 = 0x65;
  local_150 = &LAB_012debbc;
  local_13f[0] = s_ShowLocationName_03a7383c[0];
  local_13f[1] = s_ShowLocationName_03a7383c[1];
  local_13f[2] = s_ShowLocationName_03a7383c[2];
  local_13f[3] = s_ShowLocationName_03a7383c[3];
  local_13f[4] = s_ShowLocationName_03a7383c[4];
  local_13f[5] = s_ShowLocationName_03a7383c[5];
  local_13f[6] = s_ShowLocationName_03a7383c[6];
  cStack_138 = s_ShowLocationName_03a7383c[7];
  acStack_137[0] = s_ShowLocationName_03a7383c[8];
  acStack_137[1] = s_ShowLocationName_03a7383c[9];
  acStack_137[2] = s_ShowLocationName_03a7383c[10];
  acStack_137[3] = s_ShowLocationName_03a7383c[0xb];
  acStack_137[4] = s_ShowLocationName_03a7383c[0xc];
  acStack_137[5] = s_ShowLocationName_03a7383c[0xd];
  acStack_137[6] = s_ShowLocationName_03a7383c[0xe];
  local_128 = &LAB_012dec04;
  local_120 = &LAB_012dec4c;
  local_110 = 0x20;
  local_130 = 0x65;
  local_118 = 0xffffffff;
  local_10f[0] = s_HideLocationName_03a73950[0];
  local_10f[1] = s_HideLocationName_03a73950[1];
  local_10f[2] = s_HideLocationName_03a73950[2];
  local_10f[3] = s_HideLocationName_03a73950[3];
  local_10f[4] = s_HideLocationName_03a73950[4];
  local_10f[5] = s_HideLocationName_03a73950[5];
  local_10f[6] = s_HideLocationName_03a73950[6];
  cStack_108 = s_HideLocationName_03a73950[7];
  acStack_107[0] = s_HideLocationName_03a73950[8];
  acStack_107[1] = s_HideLocationName_03a73950[9];
  acStack_107[2] = s_HideLocationName_03a73950[10];
  acStack_107[3] = s_HideLocationName_03a73950[0xb];
  acStack_107[4] = s_HideLocationName_03a73950[0xc];
  acStack_107[5] = s_HideLocationName_03a73950[0xd];
  acStack_107[6] = s_HideLocationName_03a73950[0xe];
  local_100 = 0x65;
  plVar1 = plVar19 + 3;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_012dec94;
  local_e0 = 0x28;
  local_f0 = &LAB_012decdc;
  local_df[0] = s_IsClosedLocationName_03a7398c[0];
  local_df[1] = s_IsClosedLocationName_03a7398c[1];
  local_df[2] = s_IsClosedLocationName_03a7398c[2];
  local_df[3] = s_IsClosedLocationName_03a7398c[3];
  local_df[4] = s_IsClosedLocationName_03a7398c[4];
  local_df[5] = s_IsClosedLocationName_03a7398c[5];
  local_df[6] = s_IsClosedLocationName_03a7398c[6];
  cStack_d8 = s_IsClosedLocationName_03a7398c[7];
  acStack_d7[0] = s_IsClosedLocationName_03a7398c[8];
  acStack_d7[1] = s_IsClosedLocationName_03a7398c[9];
  acStack_d7[2] = s_IsClosedLocationName_03a7398c[10];
  acStack_d7[3] = s_IsClosedLocationName_03a7398c[0xb];
  acStack_d7[4] = s_IsClosedLocationName_03a7398c[0xc];
  acStack_d7[5] = s_IsClosedLocationName_03a7398c[0xd];
  acStack_d7[6] = s_IsClosedLocationName_03a7398c[0xe];
  local_c8 = &LAB_012ded24;
  local_b8 = 0xffffffff;
  local_d0 = 0x656d614e6e;
  local_c0 = &LAB_012ded6c;
  local_b0 = 0x2c;
  local_af[0] = s_ResetLocationNameTimer_03a73ad0[0];
  local_af[1] = s_ResetLocationNameTimer_03a73ad0[1];
  local_af[2] = s_ResetLocationNameTimer_03a73ad0[2];
  local_af[3] = s_ResetLocationNameTimer_03a73ad0[3];
  local_af[4] = s_ResetLocationNameTimer_03a73ad0[4];
  local_af[5] = s_ResetLocationNameTimer_03a73ad0[5];
  local_af[6] = s_ResetLocationNameTimer_03a73ad0[6];
  cStack_a8 = s_ResetLocationNameTimer_03a73ad0[7];
  acStack_a7[0] = s_ResetLocationNameTimer_03a73ad0[8];
  acStack_a7[1] = s_ResetLocationNameTimer_03a73ad0[9];
  acStack_a7[2] = s_ResetLocationNameTimer_03a73ad0[10];
  acStack_a7[3] = s_ResetLocationNameTimer_03a73ad0[0xb];
  acStack_a7[4] = s_ResetLocationNameTimer_03a73ad0[0xc];
  acStack_a7[5] = s_ResetLocationNameTimer_03a73ad0[0xd];
  acStack_a7[6] = s_ResetLocationNameTimer_03a73ad0[0xe];
  local_98 = &LAB_012dedb4;
  local_88 = 0xffffffff;
  local_a0 = 0x72656d6954656d;
  local_90 = &LAB_012dedfc;
  do {
    uVar23 = *(ulong *)(psVar35 + 8);
    psVar3 = *(string **)(psVar35 + 0x10);
    if (((byte)*psVar35 & 1) == 0) {
      psVar3 = psVar35 + 1;
      uVar23 = (ulong)((byte)*psVar35 >> 1);
    }
    pbVar21 = (byte *)FUN_008e8ed4(&local_80,psVar3,uVar23);
    pbVar33 = (byte *)plVar19[2];
    if (pbVar33 != (byte *)0x0) {
      uVar23 = (long)pbVar33 - ((ulong)pbVar33 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        pbVar40 = (byte *)((ulong)(pbVar33 + -1) & (ulong)pbVar21);
      }
      else {
        pbVar40 = pbVar21;
        if (pbVar33 <= pbVar21) {
          uVar28 = 0;
          if (pbVar33 != (byte *)0x0) {
            uVar28 = (ulong)pbVar21 / (ulong)pbVar33;
          }
          pbVar40 = pbVar21 + -(uVar28 * (long)pbVar33);
        }
      }
      plVar26 = *(long **)(*plVar36 + (long)pbVar40 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        psVar3 = psVar35 + 1;
        sVar20 = (ulong)((byte)*psVar35 >> 1);
        if (((byte)*psVar35 & 1) != 0) {
          psVar3 = *(string **)(psVar35 + 0x10);
          sVar20 = *(size_t *)(psVar35 + 8);
        }
        if (uVar23 < 2) {
          if (sVar20 == 0) {
            do {
              if ((byte *)plVar26[1] != pbVar21 &&
                  (byte *)((ulong)plVar26[1] & (ulong)(pbVar33 + -1)) != pbVar40) break;
              uVar23 = (ulong)(*(byte *)(plVar26 + 2) >> 1);
              if ((*(byte *)(plVar26 + 2) & 1) != 0) {
                uVar23 = plVar26[3];
              }
              if (uVar23 == 0) goto LAB_012dc898;
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              if ((byte *)plVar26[1] != pbVar21 &&
                  (byte *)((ulong)plVar26[1] & (ulong)(pbVar33 + -1)) != pbVar40) break;
              bVar4 = *(byte *)(plVar26 + 2);
              uVar23 = (ulong)(bVar4 >> 1);
              sVar2 = uVar23;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar26[3];
              }
              if (sVar2 == sVar20) {
                if ((bVar4 & 1) == 0) {
                  psVar29 = (string *)((long)plVar26 + 0x11);
                  psVar31 = psVar3;
                  while (*psVar29 == *psVar31) {
                    uVar23 = uVar23 - 1;
                    psVar29 = psVar29 + 1;
                    psVar31 = psVar31 + 1;
                    if (uVar23 == 0) goto LAB_012dc898;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar26[4],psVar3,sVar20);
                  if (iVar7 == 0) goto LAB_012dc898;
                }
              }
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
        }
        else if (sVar20 == 0) {
          do {
            pbVar24 = (byte *)plVar26[1];
            if (pbVar24 != pbVar21) {
              if (pbVar33 <= pbVar24) {
                uVar23 = 0;
                if (pbVar33 != (byte *)0x0) {
                  uVar23 = (ulong)pbVar24 / (ulong)pbVar33;
                }
                pbVar24 = pbVar24 + -(uVar23 * (long)pbVar33);
              }
              if (pbVar24 != pbVar40) break;
            }
            uVar23 = (ulong)(*(byte *)(plVar26 + 2) >> 1);
            if ((*(byte *)(plVar26 + 2) & 1) != 0) {
              uVar23 = plVar26[3];
            }
            if (uVar23 == 0) goto LAB_012dc898;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            pbVar24 = (byte *)plVar26[1];
            if (pbVar24 != pbVar21) {
              if (pbVar33 <= pbVar24) {
                uVar23 = 0;
                if (pbVar33 != (byte *)0x0) {
                  uVar23 = (ulong)pbVar24 / (ulong)pbVar33;
                }
                pbVar24 = pbVar24 + -(uVar23 * (long)pbVar33);
              }
              if (pbVar24 != pbVar40) break;
            }
            bVar4 = *(byte *)(plVar26 + 2);
            uVar23 = (ulong)(bVar4 >> 1);
            sVar2 = uVar23;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar26[3];
            }
            if (sVar2 == sVar20) {
              if ((bVar4 & 1) == 0) {
                psVar29 = (string *)((long)plVar26 + 0x11);
                psVar31 = psVar3;
                while (*psVar29 == *psVar31) {
                  uVar23 = uVar23 - 1;
                  psVar29 = psVar29 + 1;
                  psVar31 = psVar31 + 1;
                  if (uVar23 == 0) goto LAB_012dc898;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar26[4],psVar3,sVar20);
                if (iVar7 == 0) goto LAB_012dc898;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    plVar26 = DAT_043f1798;
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar25 = plVar26;
    }
    plVar26 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
    std::string::string((string *)(plVar26 + 2),psVar35);
    lVar27 = *(long *)(psVar35 + 0x18);
    lVar30 = *(long *)(psVar35 + 0x28);
    plVar26[6] = *(long *)(psVar35 + 0x20);
    plVar26[7] = lVar30;
    plVar26[5] = lVar27;
    *plVar26 = 0;
    plVar26[1] = (long)pbVar21;
    if ((pbVar33 == (byte *)0x0) ||
       (*(float *)(plVar19 + 5) * (float)pbVar33 < (float)(plVar19[4] + 1))) {
      uVar23 = (ulong)(pbVar33 < (byte *)0x3 || ((ulong)pbVar33 & (ulong)(pbVar33 + -1)) != 0) |
               (long)pbVar33 << 1;
      uVar28 = (ulong)((float)(plVar19[4] + 1) / *(float *)(plVar19 + 5));
      if (uVar28 <= uVar23) {
        uVar28 = uVar23;
      }
      FUN_008e9ae4(plVar36,uVar28);
      pbVar33 = (byte *)plVar19[2];
      if (((ulong)pbVar33 & (ulong)(pbVar33 + -1)) == 0) {
        pbVar40 = (byte *)((ulong)(pbVar33 + -1) & (ulong)pbVar21);
      }
      else if (pbVar21 < pbVar33) {
        pbVar40 = pbVar21;
      }
      else {
        uVar23 = 0;
        if (pbVar33 != (byte *)0x0) {
          uVar23 = (ulong)pbVar21 / (ulong)pbVar33;
        }
        pbVar40 = pbVar21 + -(uVar23 * (long)pbVar33);
      }
    }
    lVar27 = *plVar36;
    plVar25 = *(long **)(lVar27 + (long)pbVar40 * 8);
    if (plVar25 == (long *)0x0) {
      *plVar26 = *plVar1;
      *plVar1 = (long)plVar26;
      *(long **)(lVar27 + (long)pbVar40 * 8) = plVar1;
      if (*plVar26 != 0) {
        pbVar21 = *(byte **)(*plVar26 + 8);
        if (((ulong)pbVar33 & (ulong)(pbVar33 + -1)) == 0) {
          pbVar21 = (byte *)((ulong)pbVar21 & (ulong)(pbVar33 + -1));
        }
        else if (pbVar33 <= pbVar21) {
          uVar23 = 0;
          if (pbVar33 != (byte *)0x0) {
            uVar23 = (ulong)pbVar21 / (ulong)pbVar33;
          }
          pbVar21 = pbVar21 + -(uVar23 * (long)pbVar33);
        }
        plVar25 = (long *)(*plVar36 + (long)pbVar21 * 8);
        goto LAB_012dc888;
      }
    }
    else {
      *plVar26 = *plVar25;
LAB_012dc888:
      *plVar25 = (long)plVar26;
    }
    plVar19[4] = plVar19[4] + 1;
LAB_012dc898:
    psVar35 = psVar35 + 0x30;
  } while (psVar35 != &local_80);
  lVar30 = FUN_008cca50();
  lVar27 = 0;
  do {
    lVar22 = FUN_008e8c90(plVar36,lVar30 + lVar27);
    if (lVar22 != 0) {
      FUN_008f2aec(&local_80,plVar36,lVar22);
      plVar1 = DAT_043f1798;
      lVar22 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar22 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar22 + 0x10) & 1) != 0)) &&
           (lVar39 = *(long *)(lVar22 + 0x20), lVar39 != 0)) {
          plVar26 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar26 = plVar1;
          }
          uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar23 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar39,0,8);
              goto LAB_012dcca8;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar39,0,8);
        }
LAB_012dcca8:
        plVar1 = DAT_043f1798;
        plVar26 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar26 = plVar1;
        }
        uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar23 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar22,0,8);
            goto LAB_012dcc60;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar22,0,8);
      }
    }
LAB_012dcc60:
    lVar27 = lVar27 + 0x18;
  } while (lVar27 != 0x300);
  pcVar37 = (char *)plVar19[0xc];
  sVar20 = strlen(pcVar37);
  iVar7 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0xd];
  sVar20 = strlen(pcVar37);
  iVar8 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0xf];
  sVar20 = strlen(pcVar37);
  iVar9 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x12];
  sVar20 = strlen(pcVar37);
  iVar10 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x15];
  sVar20 = strlen(pcVar37);
  iVar11 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x18];
  sVar20 = strlen(pcVar37);
  iVar12 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x1b];
  sVar20 = strlen(pcVar37);
  iVar13 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x1e];
  sVar20 = strlen(pcVar37);
  iVar14 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x21];
  sVar20 = strlen(pcVar37);
  iVar15 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x24];
  sVar20 = strlen(pcVar37);
  iVar16 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x27];
  sVar20 = strlen(pcVar37);
  iVar17 = FUN_008f2c60(sVar20,pcVar37);
  pcVar37 = (char *)plVar19[0x2a];
  sVar20 = strlen(pcVar37);
  iVar18 = FUN_008f2c60(sVar20,pcVar37);
  lVar30 = local_a0;
  *(bool *)(plVar19 + 0xb) =
       ((((((((((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) ||
            iVar12 != 0) || iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) ||
       iVar17 != 0) || iVar18 != 0;
  plVar1 = DAT_043f1798;
  lVar27 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_d0;
        goto joined_r0x012dcf14;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_d0;
  }
joined_r0x012dcf14:
  lVar30 = local_100;
  local_d0 = lVar27;
  if (((local_e0 & 1) != 0) && (lVar27 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_100;
        goto joined_r0x012dd908;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_100;
  }
joined_r0x012dd908:
  lVar27 = local_130;
  local_100 = lVar30;
  if (((local_110 & 1) != 0) && (lVar30 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_130;
        goto joined_r0x012dd07c;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_130;
  }
joined_r0x012dd07c:
  lVar30 = local_160;
  local_130 = lVar27;
  if (((local_140 & 1) != 0) && (lVar27 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_160;
        goto joined_r0x012dd948;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_160;
  }
joined_r0x012dd948:
  lVar27 = local_190;
  local_160 = lVar30;
  if (((local_170 & 1) != 0) && (lVar30 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_190;
        goto joined_r0x012dd1e4;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_190;
  }
joined_r0x012dd1e4:
  lVar30 = local_1c0;
  local_190 = lVar27;
  if (((local_1a0 & 1) != 0) && (lVar27 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_1c0;
        goto joined_r0x012dd988;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_1c0;
  }
joined_r0x012dd988:
  pvVar38 = local_1f0;
  local_1c0 = lVar30;
  if (((local_1d0 & 1) != 0) && (lVar30 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar38 = local_1f0;
        goto joined_r0x012dd34c;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar38 = local_1f0;
  }
joined_r0x012dd34c:
  pvVar6 = local_220;
  local_1f0 = pvVar38;
  if (((local_200 & 1) != 0) && (pvVar38 != (void *)0x0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,pvVar38,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_220;
        goto joined_r0x012dd9c8;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,pvVar38,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_220;
  }
joined_r0x012dd9c8:
  pvVar38 = local_250;
  local_220 = pvVar6;
  if (((local_230 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar38 = local_250;
        goto joined_r0x012dd4b4;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar38 = local_250;
  }
joined_r0x012dd4b4:
  lVar27 = local_280;
  local_250 = pvVar38;
  if ((((byte)local_260 & 1) != 0) && (pvVar38 != (void *)0x0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,pvVar38,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_280;
        goto joined_r0x012dda08;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,pvVar38,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_280;
  }
joined_r0x012dda08:
  lVar30 = local_2b0;
  local_280 = lVar27;
  if (((local_290 & 1) != 0) && (lVar27 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_2b0;
        goto joined_r0x012dd61c;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_2b0;
  }
joined_r0x012dd61c:
  DAT_043f1798 = plVar1;
  local_2b0 = lVar30;
  if ((((byte)local_2c0 & 1) != 0) && (lVar30 != 0)) {
    plVar36 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar36 = plVar1;
    }
    uVar23 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar36,lVar30,0,8);
        goto LAB_012dd6cc;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,lVar30,0,8);
  }
LAB_012dd6cc:
  uVar34 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar34);
  (**(code **)*plVar19)(plVar19,uVar34);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  if ((local_338 & 1) != 0) {
    uVar32 = local_328;
  }
  FUN_001522a0(uVar34,uVar32);
  uVar32 = local_328;
  plVar1 = DAT_043f1798;
  if (((local_338 & 1) != 0) && (local_328 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar23 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,uVar32,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,uVar32,0,8);
  }
  return;
}


