/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e95120; name: FUN_00e95120
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e95120(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
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
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  size_t sVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  long lVar32;
  string *psVar33;
  long lVar34;
  string *psVar35;
  ulong uVar36;
  undefined8 uVar37;
  ulong uVar38;
  long *plVar39;
  char *pcVar40;
  string *psVar41;
  long lVar42;
  byte local_398;
  undefined7 uStack_397;
  char cStack_390;
  undefined2 local_38f;
  undefined5 uStack_38d;
  ulong local_388;
  string local_380;
  char local_37f [8];
  undefined4 local_377;
  undefined1 local_373;
  undefined2 local_372;
  long local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined4 local_358;
  byte local_350;
  undefined7 local_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  long local_340;
  undefined1 *local_338;
  undefined1 *puStack_330;
  undefined4 local_328;
  byte local_320;
  char local_31f [5];
  char acStack_31a [3];
  char acStack_317 [5];
  undefined2 local_312;
  long local_310;
  undefined1 *puStack_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  byte local_2f0;
  char local_2ef [7];
  char cStack_2e8;
  char acStack_2e7 [7];
  long local_2e0;
  undefined1 *local_2d8;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  char local_2bf [8];
  undefined4 local_2b7;
  undefined1 local_2b3;
  undefined2 local_2b2;
  long local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
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
  char local_22f [7];
  char cStack_228;
  char acStack_227 [7];
  long local_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  byte local_200;
  char local_1ff [7];
  char cStack_1f8;
  char acStack_1f7 [7];
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [7];
  char cStack_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char local_19f [7];
  char cStack_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *local_188;
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
  uStack_38d = 0;
  local_398 = 0x12;
  uStack_397 = s_AppConfig_039130b6._0_7_;
  cStack_390 = s_AppConfig_039130b6[7];
  local_388 = 0;
  local_38f = 0x67;
  lVar6 = tpidr_el0;
  plVar31 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar31 = plVar1;
  }
  plVar25 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x130,8);
  plVar25[4] = 0;
  plVar39 = plVar25 + 1;
  *plVar39 = 0;
  plVar25[10] = 0;
  plVar25[0x14] = (long)"IsValidIntValue";
  plVar25[0x15] = (long)"IsValidFloatValue";
  *(undefined4 *)(plVar25 + 5) = 0x3f800000;
  *(undefined1 *)(plVar25 + 0xb) = 0;
  plVar25[0x16] = (long)"IsValidVector3Value";
  plVar25[0x17] = (long)"IsValidEaseFuncValue";
  plVar25[0x25] = 0;
  *(undefined1 *)(plVar25 + 0x24) = 0;
  plVar25[0x18] = (long)"IsValidHashValue";
  plVar25[0x19] = (long)"IsValidStringValue";
  plVar25[6] = (long)FUN_00e973f0;
  plVar25[7] = (long)FUN_00e974a0;
  plVar25[0x1a] = (long)&DAT_038ca815;
  plVar25[0x1b] = (long)&DAT_0392da3c;
  *plVar25 = (long)&PTR_FUN_041ee9f8;
  plVar25[0x1e] = (long)FUN_00e97674;
  plVar25[0x1f] = (long)&LAB_00e97954;
  plVar25[2] = 0;
  plVar25[3] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  plVar25[0xc] = (long)"GetBoolValue";
  plVar25[0xd] = (long)"GetIntValue";
  plVar25[0xe] = (long)"GetFloatValue";
  plVar25[0xf] = (long)"GetVector3Value";
  uVar36 = 0xffffffff;
  plVar25[0x10] = (long)"GetHashValue";
  plVar25[0x11] = (long)"__haxe_export_GetStringValue";
  plVar25[0x12] = (long)"__haxe_export_GetEaseFuncValue";
  plVar25[0x13] = (long)"IsValidBoolValue";
  plVar25[0x1c] = 0;
  plVar25[0x1d] = 0;
  plVar25[0x20] = (long)&LAB_00e97c30;
  plVar25[0x21] = (long)&LAB_00e97c40;
  plVar25[0x22] = 0;
  plVar25[0x23] = 0;
  plVar1 = DAT_043f1798;
  local_37f[0] = s_GetBoolValue_038a3bc7[0];
  local_37f[1] = s_GetBoolValue_038a3bc7[1];
  local_37f[2] = s_GetBoolValue_038a3bc7[2];
  local_37f[3] = s_GetBoolValue_038a3bc7[3];
  local_37f[4] = s_GetBoolValue_038a3bc7[4];
  local_37f[5] = s_GetBoolValue_038a3bc7[5];
  local_37f[6] = s_GetBoolValue_038a3bc7[6];
  local_37f[7] = s_GetBoolValue_038a3bc7[7];
  local_380 = (string)0x18;
  local_377 = 0x65756c61;
  local_373 = 0;
  local_372 = 0;
  local_360 = &LAB_00e97c8c;
  local_358 = 0xffffffff;
  local_328 = 0xffffffff;
  local_312 = 0;
  local_2f8 = 0xffffffff;
  local_370 = 0;
  local_368 = &LAB_00e97c44;
  local_350 = 0x16;
  local_34f = s_GetIntValue_038fd922._0_7_;
  local_338 = &LAB_00e97cd4;
  puStack_330 = &LAB_00e97d1c;
  local_320 = 0x1a;
  local_31f[0] = s_GetFloatValue_039bdaf8[0];
  local_31f[1] = s_GetFloatValue_039bdaf8[1];
  local_31f[2] = s_GetFloatValue_039bdaf8[2];
  local_31f[3] = s_GetFloatValue_039bdaf8[3];
  local_31f[4] = s_GetFloatValue_039bdaf8[4];
  acStack_31a[0] = s_GetFloatValue_039bdaf8[5];
  acStack_31a[1] = s_GetFloatValue_039bdaf8[6];
  acStack_31a[2] = s_GetFloatValue_039bdaf8[7];
  acStack_317[0] = s_GetFloatValue_039bdaf8[8];
  acStack_317[1] = s_GetFloatValue_039bdaf8[9];
  acStack_317[2] = s_GetFloatValue_039bdaf8[10];
  acStack_317[3] = s_GetFloatValue_039bdaf8[0xb];
  acStack_317[4] = s_GetFloatValue_039bdaf8[0xc];
  local_300 = &LAB_00e97dac;
  local_310 = 0;
  puStack_308 = &LAB_00e97d64;
  local_2f0 = 0x1e;
  uStack_348 = 0x61;
  uStack_347 = 0x65756c;
  local_340 = 0;
  local_2ef[0] = s_GetVector3Value_0396ad22[0];
  local_2ef[1] = s_GetVector3Value_0396ad22[1];
  local_2ef[2] = s_GetVector3Value_0396ad22[2];
  local_2ef[3] = s_GetVector3Value_0396ad22[3];
  local_2ef[4] = s_GetVector3Value_0396ad22[4];
  local_2ef[5] = s_GetVector3Value_0396ad22[5];
  local_2ef[6] = s_GetVector3Value_0396ad22[6];
  local_2c8 = 0xffffffff;
  local_2c0 = 0x18;
  cStack_2e8 = s_GetVector3Value_0396ad22[7];
  acStack_2e7[0] = s_GetVector3Value_0396ad22[8];
  acStack_2e7[1] = s_GetVector3Value_0396ad22[9];
  acStack_2e7[2] = s_GetVector3Value_0396ad22[10];
  acStack_2e7[3] = s_GetVector3Value_0396ad22[0xb];
  acStack_2e7[4] = s_GetVector3Value_0396ad22[0xc];
  acStack_2e7[5] = s_GetVector3Value_0396ad22[0xd];
  acStack_2e7[6] = s_GetVector3Value_0396ad22[0xe];
  local_2e0 = 0;
  local_2d8 = &LAB_00e97df4;
  puStack_2d0 = &LAB_00e97e3c;
  local_2bf[0] = s_GetHashValue_0396ad32[0];
  local_2bf[1] = s_GetHashValue_0396ad32[1];
  local_2bf[2] = s_GetHashValue_0396ad32[2];
  local_2bf[3] = s_GetHashValue_0396ad32[3];
  local_2bf[4] = s_GetHashValue_0396ad32[4];
  local_2bf[5] = s_GetHashValue_0396ad32[5];
  local_2bf[6] = s_GetHashValue_0396ad32[6];
  local_2bf[7] = s_GetHashValue_0396ad32[7];
  local_2b7 = 0x65756c61;
  local_2b3 = 0;
  local_2b2 = 0;
  local_2a0 = &LAB_00e97ecc;
  local_298 = 0xffffffff;
  local_2b0 = 0;
  puStack_2a8 = &LAB_00e97e84;
  plVar31 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar31 = plVar1;
  }
  local_280 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
  local_280[0x18] = 'a';
  local_280[0x19] = 'l';
  local_280[0x1a] = 'u';
  local_280[0x1b] = 'e';
  local_280[0x1c] = '\0';
  uVar37 = s___haxe_export_GetStringValue_038c0f44._8_8_;
  *(undefined8 *)local_280 = s___haxe_export_GetStringValue_038c0f44._0_8_;
  uVar8 = s___haxe_export_GetStringValue_038c0f44._16_8_;
  *(undefined8 *)(local_280 + 8) = uVar37;
  *(undefined8 *)(local_280 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_290 = 0x21;
  local_28b = 0;
  local_28f = 0;
  local_289 = 0;
  local_288 = 0x1c;
  local_278 = &LAB_00e97f14;
  puStack_270 = &LAB_00e97f5c;
  local_268 = 0xffffffff;
  plVar31 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar31 = plVar1;
  }
  local_250 = (char *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
  local_250[0x1e] = '\0';
  uVar8 = s___haxe_export_GetEaseFuncValue_0394d1ba._8_8_;
  *(undefined8 *)local_250 = s___haxe_export_GetEaseFuncValue_0394d1ba._0_8_;
  *(ulong *)(local_250 + 0x16) =
       CONCAT62(s___haxe_export_GetEaseFuncValue_0394d1ba._24_6_,
                s___haxe_export_GetEaseFuncValue_0394d1ba._22_2_);
  uVar37 = CONCAT26(s___haxe_export_GetEaseFuncValue_0394d1ba._22_2_,
                    s___haxe_export_GetEaseFuncValue_0394d1ba._16_6_);
  psVar41 = &local_380;
  *(undefined8 *)(local_250 + 8) = uVar8;
  *(undefined8 *)(local_250 + 0x10) = uVar37;
  local_260 = 0x21;
  local_259 = 0;
  local_25b = 0;
  local_25f = 0;
  local_248 = &LAB_00e97fa4;
  puStack_240 = &LAB_00e97fec;
  local_258 = 0x1e;
  local_238 = 0xffffffff;
  local_230 = 0x20;
  local_22f[0] = s_IsValidBoolValue_039130c0[0];
  local_22f[1] = s_IsValidBoolValue_039130c0[1];
  local_22f[2] = s_IsValidBoolValue_039130c0[2];
  local_22f[3] = s_IsValidBoolValue_039130c0[3];
  local_22f[4] = s_IsValidBoolValue_039130c0[4];
  local_22f[5] = s_IsValidBoolValue_039130c0[5];
  local_22f[6] = s_IsValidBoolValue_039130c0[6];
  cStack_228 = s_IsValidBoolValue_039130c0[7];
  acStack_227[0] = s_IsValidBoolValue_039130c0[8];
  acStack_227[1] = s_IsValidBoolValue_039130c0[9];
  acStack_227[2] = s_IsValidBoolValue_039130c0[10];
  acStack_227[3] = s_IsValidBoolValue_039130c0[0xb];
  acStack_227[4] = s_IsValidBoolValue_039130c0[0xc];
  acStack_227[5] = s_IsValidBoolValue_039130c0[0xd];
  acStack_227[6] = s_IsValidBoolValue_039130c0[0xe];
  local_220 = 0x65;
  local_218 = &LAB_00e98034;
  puStack_210 = &LAB_00e9807c;
  local_200 = 0x1e;
  local_208 = 0xffffffff;
  local_1ff[0] = s_IsValidIntValue_039130d1[0];
  local_1ff[1] = s_IsValidIntValue_039130d1[1];
  local_1ff[2] = s_IsValidIntValue_039130d1[2];
  local_1ff[3] = s_IsValidIntValue_039130d1[3];
  local_1ff[4] = s_IsValidIntValue_039130d1[4];
  local_1ff[5] = s_IsValidIntValue_039130d1[5];
  local_1ff[6] = s_IsValidIntValue_039130d1[6];
  cStack_1f8 = s_IsValidIntValue_039130d1[7];
  acStack_1f7[0] = s_IsValidIntValue_039130d1[8];
  acStack_1f7[1] = s_IsValidIntValue_039130d1[9];
  acStack_1f7[2] = s_IsValidIntValue_039130d1[10];
  acStack_1f7[3] = s_IsValidIntValue_039130d1[0xb];
  acStack_1f7[4] = s_IsValidIntValue_039130d1[0xc];
  acStack_1f7[5] = s_IsValidIntValue_039130d1[0xd];
  acStack_1f7[6] = s_IsValidIntValue_039130d1[0xe];
  local_1f0 = 0;
  local_1e8 = &LAB_00e980c4;
  puStack_1e0 = &LAB_00e9810c;
  local_1d0 = 0x22;
  local_1d8 = 0xffffffff;
  local_1cf[0] = s_IsValidFloatValue_0394d1d9[0];
  local_1cf[1] = s_IsValidFloatValue_0394d1d9[1];
  local_1cf[2] = s_IsValidFloatValue_0394d1d9[2];
  local_1cf[3] = s_IsValidFloatValue_0394d1d9[3];
  local_1cf[4] = s_IsValidFloatValue_0394d1d9[4];
  local_1cf[5] = s_IsValidFloatValue_0394d1d9[5];
  local_1cf[6] = s_IsValidFloatValue_0394d1d9[6];
  local_1b8 = &LAB_00e98154;
  local_1b0 = &LAB_00e9819c;
  local_1a8 = 0xffffffff;
  cStack_1c8 = s_IsValidFloatValue_0394d1d9[7];
  acStack_1c7[0] = s_IsValidFloatValue_0394d1d9[8];
  acStack_1c7[1] = s_IsValidFloatValue_0394d1d9[9];
  acStack_1c7[2] = s_IsValidFloatValue_0394d1d9[10];
  acStack_1c7[3] = s_IsValidFloatValue_0394d1d9[0xb];
  acStack_1c7[4] = s_IsValidFloatValue_0394d1d9[0xc];
  acStack_1c7[5] = s_IsValidFloatValue_0394d1d9[0xd];
  acStack_1c7[6] = s_IsValidFloatValue_0394d1d9[0xe];
  local_1c0 = 0x6575;
  local_1a0 = 0x26;
  local_19f[0] = s_IsValidVector3Value_03939ebf[0];
  local_19f[1] = s_IsValidVector3Value_03939ebf[1];
  local_19f[2] = s_IsValidVector3Value_03939ebf[2];
  local_19f[3] = s_IsValidVector3Value_03939ebf[3];
  local_19f[4] = s_IsValidVector3Value_03939ebf[4];
  local_19f[5] = s_IsValidVector3Value_03939ebf[5];
  local_19f[6] = s_IsValidVector3Value_03939ebf[6];
  cStack_198 = s_IsValidVector3Value_03939ebf[7];
  acStack_197[0] = s_IsValidVector3Value_03939ebf[8];
  acStack_197[1] = s_IsValidVector3Value_03939ebf[9];
  acStack_197[2] = s_IsValidVector3Value_03939ebf[10];
  acStack_197[3] = s_IsValidVector3Value_03939ebf[0xb];
  acStack_197[4] = s_IsValidVector3Value_03939ebf[0xc];
  acStack_197[5] = s_IsValidVector3Value_03939ebf[0xd];
  acStack_197[6] = s_IsValidVector3Value_03939ebf[0xe];
  local_188 = &LAB_00e981e4;
  local_190 = 0x65756c61;
  local_180 = &LAB_00e9822c;
  local_170 = 0x28;
  local_178 = 0xffffffff;
  local_16f[0] = s_IsValidEaseFuncValue_038ae046[0];
  local_16f[1] = s_IsValidEaseFuncValue_038ae046[1];
  local_16f[2] = s_IsValidEaseFuncValue_038ae046[2];
  local_16f[3] = s_IsValidEaseFuncValue_038ae046[3];
  local_16f[4] = s_IsValidEaseFuncValue_038ae046[4];
  local_16f[5] = s_IsValidEaseFuncValue_038ae046[5];
  local_16f[6] = s_IsValidEaseFuncValue_038ae046[6];
  cStack_168 = s_IsValidEaseFuncValue_038ae046[7];
  acStack_167[0] = s_IsValidEaseFuncValue_038ae046[8];
  acStack_167[1] = s_IsValidEaseFuncValue_038ae046[9];
  acStack_167[2] = s_IsValidEaseFuncValue_038ae046[10];
  acStack_167[3] = s_IsValidEaseFuncValue_038ae046[0xb];
  acStack_167[4] = s_IsValidEaseFuncValue_038ae046[0xc];
  acStack_167[5] = s_IsValidEaseFuncValue_038ae046[0xd];
  acStack_167[6] = s_IsValidEaseFuncValue_038ae046[0xe];
  local_158 = &LAB_00e98274;
  local_160 = 0x65756c6156;
  local_150 = &LAB_00e982bc;
  local_148 = 0xffffffff;
  local_140 = 0x20;
  local_13f[0] = s_IsValidHashValue_03a737f0[0];
  local_13f[1] = s_IsValidHashValue_03a737f0[1];
  local_13f[2] = s_IsValidHashValue_03a737f0[2];
  local_13f[3] = s_IsValidHashValue_03a737f0[3];
  local_13f[4] = s_IsValidHashValue_03a737f0[4];
  local_13f[5] = s_IsValidHashValue_03a737f0[5];
  local_13f[6] = s_IsValidHashValue_03a737f0[6];
  cStack_138 = s_IsValidHashValue_03a737f0[7];
  acStack_137[0] = s_IsValidHashValue_03a737f0[8];
  acStack_137[1] = s_IsValidHashValue_03a737f0[9];
  acStack_137[2] = s_IsValidHashValue_03a737f0[10];
  acStack_137[3] = s_IsValidHashValue_03a737f0[0xb];
  acStack_137[4] = s_IsValidHashValue_03a737f0[0xc];
  acStack_137[5] = s_IsValidHashValue_03a737f0[0xd];
  acStack_137[6] = s_IsValidHashValue_03a737f0[0xe];
  local_130 = 0x65;
  local_128 = &LAB_00e98304;
  local_120 = &LAB_00e9834c;
  local_118 = 0xffffffff;
  local_110 = 0x24;
  local_10f[0] = s_IsValidStringValue_0394d1eb[0];
  local_10f[1] = s_IsValidStringValue_0394d1eb[1];
  local_10f[2] = s_IsValidStringValue_0394d1eb[2];
  local_10f[3] = s_IsValidStringValue_0394d1eb[3];
  local_10f[4] = s_IsValidStringValue_0394d1eb[4];
  local_10f[5] = s_IsValidStringValue_0394d1eb[5];
  local_10f[6] = s_IsValidStringValue_0394d1eb[6];
  local_100 = 0x65756c;
  cStack_108 = s_IsValidStringValue_0394d1eb[7];
  acStack_107[0] = s_IsValidStringValue_0394d1eb[8];
  acStack_107[1] = s_IsValidStringValue_0394d1eb[9];
  acStack_107[2] = s_IsValidStringValue_0394d1eb[10];
  acStack_107[3] = s_IsValidStringValue_0394d1eb[0xb];
  acStack_107[4] = s_IsValidStringValue_0394d1eb[0xc];
  acStack_107[5] = s_IsValidStringValue_0394d1eb[0xd];
  acStack_107[6] = s_IsValidStringValue_0394d1eb[0xe];
  local_f8 = &LAB_00e98394;
  local_e8 = 0xffffffff;
  local_f0 = &LAB_00e983dc;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_00e9846c;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_00e98424;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  plVar1 = plVar25 + 3;
  local_a0 = 0;
  local_88 = 0xffffffff;
  local_98 = &LAB_00e984b4;
  local_90 = &LAB_00e984fc;
  do {
    uVar26 = *(ulong *)(psVar41 + 8);
    psVar3 = *(string **)(psVar41 + 0x10);
    if (((byte)*psVar41 & 1) == 0) {
      psVar3 = psVar41 + 1;
      uVar26 = (ulong)((byte)*psVar41 >> 1);
    }
    uVar26 = FUN_008e8ed4(local_80,psVar3,uVar26);
    uVar38 = plVar25[2];
    if (uVar38 != 0) {
      uVar36 = uVar38 - (uVar38 >> 1 & 0x5555555555555555);
      uVar36 = (uVar36 & 0x3333333333333333) + (uVar36 >> 2 & 0x3333333333333333);
      uVar29 = (uVar36 + (uVar36 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar29 < 2) {
        uVar36 = uVar38 - 1 & uVar26;
      }
      else {
        uVar36 = uVar26;
        if (uVar38 <= uVar26) {
          uVar36 = 0;
          if (uVar38 != 0) {
            uVar36 = uVar26 / uVar38;
          }
          uVar36 = uVar26 - uVar36 * uVar38;
        }
      }
      plVar31 = *(long **)(*plVar39 + uVar36 * 8);
      if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
        psVar3 = psVar41 + 1;
        sVar28 = (ulong)((byte)*psVar41 >> 1);
        if (((byte)*psVar41 & 1) != 0) {
          psVar3 = *(string **)(psVar41 + 0x10);
          sVar28 = *(size_t *)(psVar41 + 8);
        }
        if (uVar29 < 2) {
          if (sVar28 == 0) {
            do {
              if (plVar31[1] != uVar26 && (plVar31[1] & uVar38 - 1) != uVar36) break;
              uVar29 = (ulong)(*(byte *)(plVar31 + 2) >> 1);
              if ((*(byte *)(plVar31 + 2) & 1) != 0) {
                uVar29 = plVar31[3];
              }
              if (uVar29 == 0) goto LAB_00e959cc;
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
          else {
            do {
              if (plVar31[1] != uVar26 && (plVar31[1] & uVar38 - 1) != uVar36) break;
              bVar4 = *(byte *)(plVar31 + 2);
              uVar29 = (ulong)(bVar4 >> 1);
              sVar2 = uVar29;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar31[3];
              }
              if (sVar2 == sVar28) {
                if ((bVar4 & 1) == 0) {
                  psVar33 = (string *)((long)plVar31 + 0x11);
                  psVar35 = psVar3;
                  while (*psVar33 == *psVar35) {
                    uVar29 = uVar29 - 1;
                    psVar33 = psVar33 + 1;
                    psVar35 = psVar35 + 1;
                    if (uVar29 == 0) goto LAB_00e959cc;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar31[4],psVar3,sVar28);
                  if (iVar9 == 0) goto LAB_00e959cc;
                }
              }
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
        }
        else if (sVar28 == 0) {
          do {
            uVar29 = plVar31[1];
            if (uVar29 != uVar26) {
              if (uVar38 <= uVar29) {
                uVar5 = 0;
                if (uVar38 != 0) {
                  uVar5 = uVar29 / uVar38;
                }
                uVar29 = uVar29 - uVar5 * uVar38;
              }
              if (uVar29 != uVar36) break;
            }
            uVar29 = (ulong)(*(byte *)(plVar31 + 2) >> 1);
            if ((*(byte *)(plVar31 + 2) & 1) != 0) {
              uVar29 = plVar31[3];
            }
            if (uVar29 == 0) goto LAB_00e959cc;
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
        else {
          do {
            uVar29 = plVar31[1];
            if (uVar29 != uVar26) {
              if (uVar38 <= uVar29) {
                uVar5 = 0;
                if (uVar38 != 0) {
                  uVar5 = uVar29 / uVar38;
                }
                uVar29 = uVar29 - uVar5 * uVar38;
              }
              if (uVar29 != uVar36) break;
            }
            bVar4 = *(byte *)(plVar31 + 2);
            uVar29 = (ulong)(bVar4 >> 1);
            sVar2 = uVar29;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar31[3];
            }
            if (sVar2 == sVar28) {
              if ((bVar4 & 1) == 0) {
                psVar33 = (string *)((long)plVar31 + 0x11);
                psVar35 = psVar3;
                while (*psVar33 == *psVar35) {
                  uVar29 = uVar29 - 1;
                  psVar33 = psVar33 + 1;
                  psVar35 = psVar35 + 1;
                  if (uVar29 == 0) goto LAB_00e959cc;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar31[4],psVar3,sVar28);
                if (iVar9 == 0) goto LAB_00e959cc;
              }
            }
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
      }
    }
    plVar31 = DAT_043f1798;
    plVar30 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar30 = plVar31;
    }
    plVar31 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x40,8);
    std::string::string((string *)(plVar31 + 2),psVar41);
    lVar32 = *(long *)(psVar41 + 0x18);
    lVar34 = *(long *)(psVar41 + 0x28);
    plVar31[6] = *(long *)(psVar41 + 0x20);
    plVar31[7] = lVar34;
    plVar31[5] = lVar32;
    *plVar31 = 0;
    plVar31[1] = uVar26;
    if ((uVar38 == 0) || (*(float *)(plVar25 + 5) * (float)uVar38 < (float)(plVar25[4] + 1))) {
      uVar36 = (ulong)(uVar38 < 3 || (uVar38 & uVar38 - 1) != 0) | uVar38 << 1;
      uVar38 = (ulong)((float)(plVar25[4] + 1) / *(float *)(plVar25 + 5));
      if (uVar38 <= uVar36) {
        uVar38 = uVar36;
      }
      FUN_008e9ae4(plVar39,uVar38);
      uVar38 = plVar25[2];
      if ((uVar38 & uVar38 - 1) == 0) {
        uVar36 = uVar38 - 1 & uVar26;
      }
      else if (uVar26 < uVar38) {
        uVar36 = uVar26;
      }
      else {
        uVar36 = 0;
        if (uVar38 != 0) {
          uVar36 = uVar26 / uVar38;
        }
        uVar36 = uVar26 - uVar36 * uVar38;
      }
    }
    lVar32 = *plVar39;
    plVar30 = *(long **)(lVar32 + uVar36 * 8);
    if (plVar30 == (long *)0x0) {
      *plVar31 = *plVar1;
      *plVar1 = (long)plVar31;
      *(long **)(lVar32 + uVar36 * 8) = plVar1;
      if (*plVar31 != 0) {
        uVar26 = *(ulong *)(*plVar31 + 8);
        if ((uVar38 & uVar38 - 1) == 0) {
          uVar26 = uVar26 & uVar38 - 1;
        }
        else if (uVar38 <= uVar26) {
          uVar29 = 0;
          if (uVar38 != 0) {
            uVar29 = uVar26 / uVar38;
          }
          uVar26 = uVar26 - uVar29 * uVar38;
        }
        plVar30 = (long *)(*plVar39 + uVar26 * 8);
        goto LAB_00e959bc;
      }
    }
    else {
      *plVar31 = *plVar30;
LAB_00e959bc:
      *plVar30 = (long)plVar31;
    }
    plVar25[4] = plVar25[4] + 1;
LAB_00e959cc:
    psVar41 = psVar41 + 0x30;
  } while (psVar41 != (string *)local_80);
  lVar34 = FUN_008cca50();
  lVar32 = 0;
  do {
    lVar27 = FUN_008e8c90(plVar39,lVar34 + lVar32);
    if (lVar27 != 0) {
      FUN_008f2aec(local_80,plVar39,lVar27);
      lVar27 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar27 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar27 + 0x10) & 1) != 0)) &&
           (lVar42 = *(long *)(lVar27 + 0x20), lVar42 != 0)) {
          plVar31 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar31 = plVar1;
          }
          uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
          if ((uVar36 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar31,lVar42,0,8);
              goto LAB_00e95c38;
            }
          }
          (**(code **)(*plVar31 + 0x18))(plVar31,lVar42,0,8);
        }
LAB_00e95c38:
        plVar1 = DAT_043f1798;
        plVar31 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar31 = plVar1;
        }
        uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
        if ((uVar36 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar31,lVar27,0,8);
            goto LAB_00e95bf0;
          }
        }
        (**(code **)(*plVar31 + 0x18))(plVar31,lVar27,0,8);
      }
    }
LAB_00e95bf0:
    lVar32 = lVar32 + 0x18;
  } while (lVar32 != 0x300);
  pcVar40 = (char *)plVar25[0xc];
  sVar28 = strlen(pcVar40);
  iVar9 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0xd];
  sVar28 = strlen(pcVar40);
  iVar10 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0xe];
  sVar28 = strlen(pcVar40);
  iVar11 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0xf];
  sVar28 = strlen(pcVar40);
  iVar12 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x10];
  sVar28 = strlen(pcVar40);
  iVar13 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x11];
  sVar28 = strlen(pcVar40);
  iVar14 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x12];
  sVar28 = strlen(pcVar40);
  iVar15 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x13];
  sVar28 = strlen(pcVar40);
  iVar16 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x14];
  sVar28 = strlen(pcVar40);
  iVar17 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x15];
  sVar28 = strlen(pcVar40);
  iVar18 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x16];
  sVar28 = strlen(pcVar40);
  iVar19 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x17];
  sVar28 = strlen(pcVar40);
  iVar20 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x18];
  sVar28 = strlen(pcVar40);
  iVar21 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x19];
  sVar28 = strlen(pcVar40);
  iVar22 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x1a];
  sVar28 = strlen(pcVar40);
  iVar23 = FUN_008f2c60(sVar28,pcVar40);
  pcVar40 = (char *)plVar25[0x1b];
  sVar28 = strlen(pcVar40);
  iVar24 = FUN_008f2c60(sVar28,pcVar40);
  lVar34 = local_a0;
  *(bool *)(plVar25 + 0xb) =
       ((((((((((((((iVar10 != 0 || iVar9 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
                iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) ||
           iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) ||
       iVar24 != 0;
  plVar1 = DAT_043f1798;
  lVar32 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_d0;
        goto joined_r0x00e95ef8;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_d0;
  }
joined_r0x00e95ef8:
  lVar34 = local_100;
  local_d0 = lVar32;
  if (((local_e0 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar34 = local_100;
        goto joined_r0x00e96bb0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar34 = local_100;
  }
joined_r0x00e96bb0:
  lVar32 = local_130;
  local_100 = lVar34;
  if (((local_110 & 1) != 0) && (lVar34 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_130;
        goto joined_r0x00e96060;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_130;
  }
joined_r0x00e96060:
  lVar34 = local_160;
  local_130 = lVar32;
  if (((local_140 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar34 = local_160;
        goto joined_r0x00e96bf0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar34 = local_160;
  }
joined_r0x00e96bf0:
  lVar32 = local_190;
  local_160 = lVar34;
  if (((local_170 & 1) != 0) && (lVar34 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_190;
        goto joined_r0x00e961c8;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_190;
  }
joined_r0x00e961c8:
  lVar34 = local_1c0;
  local_190 = lVar32;
  if (((local_1a0 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar34 = local_1c0;
        goto joined_r0x00e96c30;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar34 = local_1c0;
  }
joined_r0x00e96c30:
  lVar32 = local_1f0;
  local_1c0 = lVar34;
  if (((local_1d0 & 1) != 0) && (lVar34 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_1f0;
        goto joined_r0x00e96330;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_1f0;
  }
joined_r0x00e96330:
  lVar34 = local_220;
  local_1f0 = lVar32;
  if (((local_200 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar34 = local_220;
        goto joined_r0x00e96c70;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar34 = local_220;
  }
joined_r0x00e96c70:
  pcVar40 = local_250;
  local_220 = lVar34;
  if (((local_230 & 1) != 0) && (lVar34 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        pcVar40 = local_250;
        goto joined_r0x00e96498;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    pcVar40 = local_250;
  }
joined_r0x00e96498:
  pcVar7 = local_280;
  local_250 = pcVar40;
  if (((local_260 & 1) != 0) && (pcVar40 != (char *)0x0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,pcVar40,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_280;
        goto joined_r0x00e96cb0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pcVar40,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_280;
  }
joined_r0x00e96cb0:
  lVar32 = local_2b0;
  local_280 = pcVar7;
  if (((local_290 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_2b0;
        goto joined_r0x00e96600;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_2b0;
  }
joined_r0x00e96600:
  lVar34 = local_2e0;
  local_2b0 = lVar32;
  if (((local_2c0 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar34 = local_2e0;
        goto joined_r0x00e96cf0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar34 = local_2e0;
  }
joined_r0x00e96cf0:
  lVar32 = local_310;
  local_2e0 = lVar34;
  if (((local_2f0 & 1) != 0) && (lVar34 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_310;
        goto joined_r0x00e96768;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_310;
  }
joined_r0x00e96768:
  lVar34 = local_340;
  local_310 = lVar32;
  if (((local_320 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar34 = local_340;
        goto joined_r0x00e96d30;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar34 = local_340;
  }
joined_r0x00e96d30:
  lVar32 = local_370;
  local_340 = lVar34;
  if (((local_350 & 1) != 0) && (lVar34 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar32 = local_370;
        goto joined_r0x00e968d0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar32 = local_370;
  }
joined_r0x00e968d0:
  DAT_043f1798 = plVar1;
  local_370 = lVar32;
  if ((((byte)local_380 & 1) != 0) && (lVar32 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar31 = plVar1;
    }
    uVar36 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar32,0,8);
        goto LAB_00e96980;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar32,0,8);
  }
LAB_00e96980:
  uVar37 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar37);
  (**(code **)*plVar25)(plVar25,uVar37);
  (**(code **)(*plVar25 + 0x10))(plVar25);
  uVar36 = (ulong)&local_398 | 1;
  if ((local_398 & 1) != 0) {
    uVar36 = local_388;
  }
  FUN_001522a0(uVar37,uVar36);
  uVar36 = local_388;
  plVar1 = DAT_043f1798;
  if (((local_398 & 1) != 0) && (local_388 != 0)) {
    plVar31 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar31 = plVar1;
    }
    uVar26 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar31,uVar36,0,8);
        return;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,uVar36,0,8);
  }
  return;
}


