/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015d42e0; name: FUN_015d42e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_015d42e0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
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
  long *plVar19;
  size_t sVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  string *psVar28;
  long lVar29;
  string *psVar30;
  undefined8 uVar31;
  string *psVar32;
  long *plVar33;
  char *pcVar34;
  void *pvVar35;
  long lVar36;
  char *pcVar37;
  char *pcVar38;
  byte local_2e0;
  undefined7 uStack_2df;
  char cStack_2d8;
  undefined7 uStack_2d7;
  char local_2d0;
  undefined2 uStack_2cf;
  undefined5 uStack_2cd;
  byte local_2c8;
  undefined7 uStack_2c7;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  void *local_2b8;
  undefined7 local_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined7 local_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  string local_290;
  undefined2 local_28f;
  undefined1 local_28d;
  undefined8 local_28c;
  undefined4 local_284;
  long local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  undefined4 local_25f;
  undefined7 local_25b;
  undefined4 uStack_254;
  long local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined4 local_238;
  string local_230;
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
  char acStack_1cf [7];
  char local_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char acStack_19f [7];
  char local_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
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
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a8;
  char *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar1 = DAT_043f1798;
  uStack_2cd = 0;
  local_2e0 = 0x22;
  uStack_2d7 = s_EventProgressWork_038a5d90._8_7_;
  local_2d0 = s_EventProgressWork_038a5d90[0xf];
  uStack_2df = s_EventProgressWork_038a5d90._0_7_;
  cStack_2d8 = s_EventProgressWork_038a5d90[7];
  uStack_2cf = 0x6b;
  lVar5 = tpidr_el0;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  plVar19 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,400,8);
  plVar19[4] = 0;
  plVar33 = plVar19 + 1;
  *plVar33 = 0;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[10] = 0;
  plVar19[6] = (long)FUN_015d61b0;
  plVar19[7] = (long)FUN_015d6260;
  *plVar19 = (long)&PTR_FUN_0421e548;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  plVar19[0xc] = (long)&DAT_038ca815;
  plVar19[0xd] = (long)&DAT_0392da3c;
  pcVar38 = "GetTriggerWorkAsInt";
  plVar19[0xf] = (long)"SetTriggerWork";
  plVar19[0x10] = (long)"GetTriggerWorkAsHash";
  plVar19[0x11] = (long)&LAB_01660834;
  plVar19[0x12] = 0;
  plVar19[0x13] = (long)"GetTriggerWorkAsInt";
  plVar19[0x14] = (long)&LAB_01660878;
  plVar19[0x17] = (long)FUN_016608c4;
  plVar19[0x18] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1c] = (long)"SetEventScriptReturnValue";
  *(undefined1 *)(plVar19 + 0xe) = 0;
  plVar19[0x31] = 0;
  plVar19[0x2f] = 0;
  *(undefined1 *)(plVar19 + 0x30) = 0;
  plVar19[0x19] = (long)"__haxe_export_GetTriggerWorkAsString";
  plVar19[0x1a] = (long)FUN_01660910;
  plVar19[0x1d] = (long)&LAB_01660954;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = (long)"GetEventScriptReturnValue";
  plVar19[0x20] = (long)&LAB_0166095c;
  plVar19[0x23] = (long)&LAB_01660964;
  plVar19[0x24] = 0;
  plVar19[0x25] = (long)"__haxe_export_GetEventScriptReturnValueHash";
  plVar19[0x26] = (long)&LAB_01660970;
  plVar19[0x29] = 0;
  plVar19[0x2a] = (long)FUN_015d63f0;
  plVar19[0x2b] = (long)&LAB_015d66d0;
  plVar19[0x2c] = (long)&LAB_015d69b0;
  plVar19[0x2d] = (long)&LAB_015d69c0;
  plVar19[0x2e] = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[0x15] = 0;
  plVar19[0x16] = (long)"GetTriggerWorkAsFloat";
  plVar19[0x21] = 0;
  plVar19[0x22] = (long)"__haxe_export_SetEventScriptReturnValueHash";
  plVar19[0x27] = 0;
  plVar19[0x28] = 0;
  local_290 = (string)0x6;
  local_28f = 0x656e;
  local_28d = 0x77;
  local_28c = 0;
  local_284 = 0;
  local_270 = &LAB_015d6a0c;
  local_268 = 0xffffffff;
  local_260 = 8;
  local_280 = 0;
  local_278 = &LAB_015d69c4;
  local_25f = 0x63675f5f;
  local_25b = 0;
  uStack_254 = 0;
  local_240 = &LAB_015d6a9c;
  local_238 = 0xffffffff;
  local_250 = 0;
  puStack_248 = &LAB_015d6a54;
  pcVar34 = (char *)plVar19[0xf];
  sVar20 = strlen(pcVar34);
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
    pvVar35 = (void *)((ulong)&local_80 | 1);
    if (sVar20 != 0) goto LAB_015d4590;
  }
  else {
    uVar22 = sVar20 + 0x10 & 0xfffffffffffffff0;
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar22,8);
    local_80 = (string)((byte)uVar22 | 1);
    uStack_7f = (undefined7)(uVar22 >> 8);
    local_78 = (undefined1)sVar20;
    uStack_77 = (undefined7)(sVar20 >> 8);
    local_70 = pvVar35;
LAB_015d4590:
    memcpy(pvVar35,pcVar34,sVar20);
  }
  local_220 = local_70;
  uStack_227 = uStack_77;
  uStack_228 = local_78;
  local_22f = uStack_7f;
  local_230 = local_80;
  *(undefined1 *)((long)pvVar35 + sVar20) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_2a0 = 0;
  uStack_299 = 0;
  uStack_298 = 0;
  local_208 = 0xffffffff;
  local_218 = &LAB_015d6ae4;
  puStack_210 = &LAB_015d6b2c;
  pcVar34 = (char *)plVar19[0x10];
  sVar20 = strlen(pcVar34);
  plVar1 = DAT_043f1798;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar20) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar20 < 0x17) {
    local_2c8 = (byte)((int)sVar20 << 1);
    pvVar35 = (void *)((ulong)&local_2c8 | 1);
    if (sVar20 != 0) goto LAB_015d4630;
  }
  else {
    uVar22 = sVar20 + 0x10 & 0xfffffffffffffff0;
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    pvVar35 = (void *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar22,8);
    local_2c8 = (byte)uVar22 | 1;
    uStack_2c7 = (undefined7)(uVar22 >> 8);
    local_2c0 = (undefined1)sVar20;
    uStack_2bf = (undefined7)(sVar20 >> 8);
    local_2b8 = pvVar35;
LAB_015d4630:
    memcpy(pvVar35,pcVar34,sVar20);
  }
  local_1f0 = local_2b8;
  uStack_1f7 = uStack_2bf;
  uStack_1f8 = local_2c0;
  local_1ff = uStack_2c7;
  local_200 = local_2c8;
  *(undefined1 *)((long)pvVar35 + sVar20) = 0;
  plVar1 = DAT_043f1798;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_1d8 = 0xffffffff;
  local_1e8 = &LAB_015d6b74;
  puStack_1e0 = &LAB_015d6bbc;
  local_1d0 = 0x26;
  acStack_1c7[0] = s_GetTriggerWorkAsInt_0396c1a8[8];
  acStack_1c7[1] = s_GetTriggerWorkAsInt_0396c1a8[9];
  acStack_1c7[2] = s_GetTriggerWorkAsInt_0396c1a8[10];
  acStack_1c7[3] = s_GetTriggerWorkAsInt_0396c1a8[0xb];
  acStack_1c7[4] = s_GetTriggerWorkAsInt_0396c1a8[0xc];
  acStack_1c7[5] = s_GetTriggerWorkAsInt_0396c1a8[0xd];
  acStack_1c7[6] = s_GetTriggerWorkAsInt_0396c1a8[0xe];
  acStack_1cf[0] = s_GetTriggerWorkAsInt_0396c1a8[0];
  acStack_1cf[1] = s_GetTriggerWorkAsInt_0396c1a8[1];
  acStack_1cf[2] = s_GetTriggerWorkAsInt_0396c1a8[2];
  acStack_1cf[3] = s_GetTriggerWorkAsInt_0396c1a8[3];
  acStack_1cf[4] = s_GetTriggerWorkAsInt_0396c1a8[4];
  acStack_1cf[5] = s_GetTriggerWorkAsInt_0396c1a8[5];
  acStack_1cf[6] = s_GetTriggerWorkAsInt_0396c1a8[6];
  local_1c8 = s_GetTriggerWorkAsInt_0396c1a8[7];
  local_1c0 = 0x746e4973;
  puStack_1b8 = &LAB_015d6c04;
  local_1b0 = &LAB_015d6c4c;
  local_1a0 = 0x2a;
  local_1a8 = 0xffffffff;
  acStack_197[0] = s_GetTriggerWorkAsFloat_0391eeb3[8];
  acStack_197[1] = s_GetTriggerWorkAsFloat_0391eeb3[9];
  acStack_197[2] = s_GetTriggerWorkAsFloat_0391eeb3[10];
  acStack_197[3] = s_GetTriggerWorkAsFloat_0391eeb3[0xb];
  acStack_197[4] = s_GetTriggerWorkAsFloat_0391eeb3[0xc];
  acStack_197[5] = s_GetTriggerWorkAsFloat_0391eeb3[0xd];
  acStack_197[6] = s_GetTriggerWorkAsFloat_0391eeb3[0xe];
  acStack_19f[0] = s_GetTriggerWorkAsFloat_0391eeb3[0];
  acStack_19f[1] = s_GetTriggerWorkAsFloat_0391eeb3[1];
  acStack_19f[2] = s_GetTriggerWorkAsFloat_0391eeb3[2];
  acStack_19f[3] = s_GetTriggerWorkAsFloat_0391eeb3[3];
  acStack_19f[4] = s_GetTriggerWorkAsFloat_0391eeb3[4];
  acStack_19f[5] = s_GetTriggerWorkAsFloat_0391eeb3[5];
  acStack_19f[6] = s_GetTriggerWorkAsFloat_0391eeb3[6];
  local_198 = s_GetTriggerWorkAsFloat_0391eeb3[7];
  local_190 = 0x74616f6c4673;
  puStack_188 = &LAB_015d6c94;
  local_2b0 = 0;
  uStack_2a9 = 0;
  uStack_2a8 = 0;
  local_178 = 0xffffffff;
  local_180 = &LAB_015d6cdc;
  plVar25 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x30,8);
  local_160[0x20] = 'r';
  uVar31 = s___haxe_export_GetTriggerWorkAsSt_039acf85._8_8_;
  local_160[0x21] = 'i';
  local_160[0x22] = 'n';
  local_160[0x23] = 'g';
  *(undefined8 *)local_160 = s___haxe_export_GetTriggerWorkAsSt_039acf85._0_8_;
  *(undefined8 *)(local_160 + 8) = uVar31;
  uVar7 = s___haxe_export_GetTriggerWorkAsSt_039acf85._24_8_;
  uVar31 = s___haxe_export_GetTriggerWorkAsSt_039acf85._16_8_;
  local_160[0x24] = '\0';
  *(undefined8 *)(local_160 + 0x10) = uVar31;
  *(undefined8 *)(local_160 + 0x18) = uVar7;
  plVar1 = DAT_043f1798;
  local_170 = 0x31;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_168 = 0x24;
  local_148 = 0xffffffff;
  local_158 = &LAB_015d6d24;
  puStack_150 = &LAB_015d6d6c;
  plVar25 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x20,8);
  local_130[0x18] = 'e';
  local_130[0x19] = '\0';
  uVar31 = s_SetEventScriptReturnValue_0389bd80._8_8_;
  *(undefined8 *)local_130 = s_SetEventScriptReturnValue_0389bd80._0_8_;
  uVar7 = s_SetEventScriptReturnValue_0389bd80._16_8_;
  *(undefined8 *)(local_130 + 8) = uVar31;
  *(undefined8 *)(local_130 + 0x10) = uVar7;
  plVar1 = DAT_043f1798;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x19;
  local_118 = 0xffffffff;
  local_128 = &LAB_015d6db4;
  puStack_120 = &LAB_015d6dfc;
  plVar25 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x20,8);
  local_100[0x18] = 'e';
  local_100[0x19] = '\0';
  uVar31 = s_GetEventScriptReturnValue_03909ccd._8_8_;
  *(undefined8 *)local_100 = s_GetEventScriptReturnValue_03909ccd._0_8_;
  uVar7 = s_GetEventScriptReturnValue_03909ccd._16_8_;
  *(undefined8 *)(local_100 + 8) = uVar31;
  *(undefined8 *)(local_100 + 0x10) = uVar7;
  plVar1 = DAT_043f1798;
  local_110 = 0x21;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_f8 = &LAB_015d6e44;
  local_e8 = 0xffffffff;
  local_108 = 0x19;
  local_f0 = &LAB_015d6e8c;
  plVar25 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_d0 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x30,8);
  local_d0[0x27] = 'H';
  uVar31 = s___haxe_export_SetEventScriptRetu_0394ebd5._8_8_;
  local_d0[0x28] = 'a';
  local_d0[0x29] = 's';
  local_d0[0x2a] = 'h';
  *(undefined8 *)local_d0 = s___haxe_export_SetEventScriptRetu_0394ebd5._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar31;
  uVar31 = s___haxe_export_SetEventScriptRetu_0394ebd5._24_8_;
  *(undefined8 *)(local_d0 + 0x10) = s___haxe_export_SetEventScriptRetu_0394ebd5._16_8_;
  *(undefined8 *)(local_d0 + 0x18) = uVar31;
  *(undefined8 *)(local_d0 + 0x20) = s___haxe_export_SetEventScriptRetu_0394ebd5._32_8_;
  local_d0[0x2b] = '\0';
  plVar1 = DAT_043f1798;
  local_e0 = 0x31;
  local_d9 = 0;
  local_db = 0;
  local_df = 0;
  local_c8 = &LAB_015d6ed4;
  local_b8 = 0xffffffff;
  local_d8 = 0x2b;
  local_c0 = &LAB_015d6f1c;
  plVar25 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_a0 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x30,8);
  local_a0[0x27] = 'H';
  uVar31 = s___haxe_export_GetEventScriptRetu_0396c1bc._8_8_;
  local_a0[0x28] = 'a';
  local_a0[0x29] = 's';
  local_a0[0x2a] = 'h';
  *(undefined8 *)local_a0 = s___haxe_export_GetEventScriptRetu_0396c1bc._0_8_;
  *(undefined8 *)(local_a0 + 8) = uVar31;
  uVar31 = s___haxe_export_GetEventScriptRetu_0396c1bc._24_8_;
  psVar32 = &local_290;
  *(undefined8 *)(local_a0 + 0x10) = s___haxe_export_GetEventScriptRetu_0396c1bc._16_8_;
  *(undefined8 *)(local_a0 + 0x18) = uVar31;
  *(undefined8 *)(local_a0 + 0x20) = s___haxe_export_GetEventScriptRetu_0396c1bc._32_8_;
  local_a0[0x2b] = '\0';
  local_b0 = 0x31;
  local_a9 = 0;
  local_ab = 0;
  local_af = 0;
  local_a8 = 0x2b;
  plVar1 = plVar19 + 3;
  local_90 = &LAB_015d6fac;
  local_88 = 0xffffffff;
  local_98 = &LAB_015d6f64;
  do {
    uVar22 = *(ulong *)(psVar32 + 8);
    psVar3 = *(string **)(psVar32 + 0x10);
    if (((byte)*psVar32 & 1) == 0) {
      psVar3 = psVar32 + 1;
      uVar22 = (ulong)((byte)*psVar32 >> 1);
    }
    pcVar34 = (char *)FUN_008e8ed4(&local_80,psVar3,uVar22);
    pcVar37 = (char *)plVar19[2];
    if (pcVar37 != (char *)0x0) {
      uVar22 = (long)pcVar37 - ((ulong)pcVar37 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        pcVar38 = (char *)((ulong)(pcVar37 + -1) & (ulong)pcVar34);
      }
      else {
        pcVar38 = pcVar34;
        if (pcVar37 <= pcVar34) {
          uVar27 = 0;
          if (pcVar37 != (char *)0x0) {
            uVar27 = (ulong)pcVar34 / (ulong)pcVar37;
          }
          pcVar38 = pcVar34 + -(uVar27 * (long)pcVar37);
        }
      }
      plVar25 = *(long **)(*plVar33 + (long)pcVar38 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        psVar3 = psVar32 + 1;
        sVar20 = (ulong)((byte)*psVar32 >> 1);
        if (((byte)*psVar32 & 1) != 0) {
          psVar3 = *(string **)(psVar32 + 0x10);
          sVar20 = *(size_t *)(psVar32 + 8);
        }
        if (uVar22 < 2) {
          if (sVar20 == 0) {
            do {
              if ((char *)plVar25[1] != pcVar34 &&
                  (char *)((ulong)plVar25[1] & (ulong)(pcVar37 + -1)) != pcVar38) break;
              uVar22 = (ulong)(*(byte *)(plVar25 + 2) >> 1);
              if ((*(byte *)(plVar25 + 2) & 1) != 0) {
                uVar22 = plVar25[3];
              }
              if (uVar22 == 0) goto LAB_015d4cc0;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar25[1] != pcVar34 &&
                  (char *)((ulong)plVar25[1] & (ulong)(pcVar37 + -1)) != pcVar38) break;
              bVar4 = *(byte *)(plVar25 + 2);
              uVar22 = (ulong)(bVar4 >> 1);
              sVar2 = uVar22;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar25[3];
              }
              if (sVar2 == sVar20) {
                if ((bVar4 & 1) == 0) {
                  psVar28 = (string *)((long)plVar25 + 0x11);
                  psVar30 = psVar3;
                  while (*psVar28 == *psVar30) {
                    uVar22 = uVar22 - 1;
                    psVar28 = psVar28 + 1;
                    psVar30 = psVar30 + 1;
                    if (uVar22 == 0) goto LAB_015d4cc0;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar25[4],psVar3,sVar20);
                  if (iVar8 == 0) goto LAB_015d4cc0;
                }
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
        else if (sVar20 == 0) {
          do {
            pcVar23 = (char *)plVar25[1];
            if (pcVar23 != pcVar34) {
              if (pcVar37 <= pcVar23) {
                uVar22 = 0;
                if (pcVar37 != (char *)0x0) {
                  uVar22 = (ulong)pcVar23 / (ulong)pcVar37;
                }
                pcVar23 = pcVar23 + -(uVar22 * (long)pcVar37);
              }
              if (pcVar23 != pcVar38) break;
            }
            uVar22 = (ulong)(*(byte *)(plVar25 + 2) >> 1);
            if ((*(byte *)(plVar25 + 2) & 1) != 0) {
              uVar22 = plVar25[3];
            }
            if (uVar22 == 0) goto LAB_015d4cc0;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            pcVar23 = (char *)plVar25[1];
            if (pcVar23 != pcVar34) {
              if (pcVar37 <= pcVar23) {
                uVar22 = 0;
                if (pcVar37 != (char *)0x0) {
                  uVar22 = (ulong)pcVar23 / (ulong)pcVar37;
                }
                pcVar23 = pcVar23 + -(uVar22 * (long)pcVar37);
              }
              if (pcVar23 != pcVar38) break;
            }
            bVar4 = *(byte *)(plVar25 + 2);
            uVar22 = (ulong)(bVar4 >> 1);
            sVar2 = uVar22;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar25[3];
            }
            if (sVar2 == sVar20) {
              if ((bVar4 & 1) == 0) {
                psVar28 = (string *)((long)plVar25 + 0x11);
                psVar30 = psVar3;
                while (*psVar28 == *psVar30) {
                  uVar22 = uVar22 - 1;
                  psVar28 = psVar28 + 1;
                  psVar30 = psVar30 + 1;
                  if (uVar22 == 0) goto LAB_015d4cc0;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar25[4],psVar3,sVar20);
                if (iVar8 == 0) goto LAB_015d4cc0;
              }
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    plVar25 = DAT_043f1798;
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar25;
    }
    plVar25 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x40,8);
    std::string::string((string *)(plVar25 + 2),psVar32);
    lVar26 = *(long *)(psVar32 + 0x18);
    lVar29 = *(long *)(psVar32 + 0x28);
    plVar25[6] = *(long *)(psVar32 + 0x20);
    plVar25[7] = lVar29;
    plVar25[5] = lVar26;
    *plVar25 = 0;
    plVar25[1] = (long)pcVar34;
    if ((pcVar37 == (char *)0x0) ||
       (*(float *)(plVar19 + 5) * (float)pcVar37 < (float)(plVar19[4] + 1))) {
      uVar22 = (ulong)(pcVar37 < (char *)0x3 || ((ulong)pcVar37 & (ulong)(pcVar37 + -1)) != 0) |
               (long)pcVar37 << 1;
      uVar27 = (ulong)((float)(plVar19[4] + 1) / *(float *)(plVar19 + 5));
      if (uVar27 <= uVar22) {
        uVar27 = uVar22;
      }
      FUN_008e9ae4(plVar33,uVar27);
      pcVar37 = (char *)plVar19[2];
      if (((ulong)pcVar37 & (ulong)(pcVar37 + -1)) == 0) {
        pcVar38 = (char *)((ulong)(pcVar37 + -1) & (ulong)pcVar34);
      }
      else if (pcVar34 < pcVar37) {
        pcVar38 = pcVar34;
      }
      else {
        uVar22 = 0;
        if (pcVar37 != (char *)0x0) {
          uVar22 = (ulong)pcVar34 / (ulong)pcVar37;
        }
        pcVar38 = pcVar34 + -(uVar22 * (long)pcVar37);
      }
    }
    lVar26 = *plVar33;
    plVar24 = *(long **)(lVar26 + (long)pcVar38 * 8);
    if (plVar24 == (long *)0x0) {
      *plVar25 = *plVar1;
      *plVar1 = (long)plVar25;
      *(long **)(lVar26 + (long)pcVar38 * 8) = plVar1;
      if (*plVar25 != 0) {
        pcVar34 = *(char **)(*plVar25 + 8);
        if (((ulong)pcVar37 & (ulong)(pcVar37 + -1)) == 0) {
          pcVar34 = (char *)((ulong)pcVar34 & (ulong)(pcVar37 + -1));
        }
        else if (pcVar37 <= pcVar34) {
          uVar22 = 0;
          if (pcVar37 != (char *)0x0) {
            uVar22 = (ulong)pcVar34 / (ulong)pcVar37;
          }
          pcVar34 = pcVar34 + -(uVar22 * (long)pcVar37);
        }
        plVar24 = (long *)(*plVar33 + (long)pcVar34 * 8);
        goto LAB_015d4cb0;
      }
    }
    else {
      *plVar25 = *plVar24;
LAB_015d4cb0:
      *plVar24 = (long)plVar25;
    }
    plVar19[4] = plVar19[4] + 1;
LAB_015d4cc0:
    psVar32 = psVar32 + 0x30;
  } while (psVar32 != &local_80);
  lVar29 = FUN_008cca50();
  lVar26 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar33,lVar29 + lVar26);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar33,lVar21);
      plVar1 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar36 = *(long *)(lVar21 + 0x20), lVar36 != 0)) {
          plVar25 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar25 = plVar1;
          }
          uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
          if ((uVar22 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar25,lVar36,0,8);
              goto LAB_015d5030;
            }
          }
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar36,0,8);
        }
LAB_015d5030:
        plVar1 = DAT_043f1798;
        plVar25 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar25 = plVar1;
        }
        uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
        if ((uVar22 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar25,lVar21,0,8);
            goto LAB_015d4fe8;
          }
        }
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar21,0,8);
      }
    }
LAB_015d4fe8:
    lVar26 = lVar26 + 0x18;
  } while (lVar26 != 0x300);
  pcVar38 = (char *)plVar19[0xc];
  sVar20 = strlen(pcVar38);
  iVar8 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0xd];
  sVar20 = strlen(pcVar38);
  iVar9 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0xf];
  sVar20 = strlen(pcVar38);
  iVar10 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x10];
  sVar20 = strlen(pcVar38);
  iVar11 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x13];
  sVar20 = strlen(pcVar38);
  iVar12 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x16];
  sVar20 = strlen(pcVar38);
  iVar13 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x19];
  sVar20 = strlen(pcVar38);
  iVar14 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x1c];
  sVar20 = strlen(pcVar38);
  iVar15 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x1f];
  sVar20 = strlen(pcVar38);
  iVar16 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x22];
  sVar20 = strlen(pcVar38);
  iVar17 = FUN_008f2c60(sVar20,pcVar38);
  pcVar38 = (char *)plVar19[0x25];
  sVar20 = strlen(pcVar38);
  iVar18 = FUN_008f2c60(sVar20,pcVar38);
  pcVar34 = local_a0;
  *(bool *)(plVar19 + 0xb) =
       (((((((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
           iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) ||
       iVar18 != 0;
  plVar1 = DAT_043f1798;
  pcVar38 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pcVar34,0,8);
        plVar1 = DAT_043f1798;
        pcVar38 = local_d0;
        goto joined_r0x015d5294;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pcVar34,0,8);
    plVar1 = DAT_043f1798;
    pcVar38 = local_d0;
  }
joined_r0x015d5294:
  pcVar34 = local_100;
  local_d0 = pcVar38;
  if (((local_e0 & 1) != 0) && (pcVar38 != (char *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pcVar38,0,8);
        plVar1 = DAT_043f1798;
        pcVar34 = local_100;
        goto joined_r0x015d5bd8;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pcVar38,0,8);
    plVar1 = DAT_043f1798;
    pcVar34 = local_100;
  }
joined_r0x015d5bd8:
  pcVar38 = local_130;
  local_100 = pcVar34;
  if (((local_110 & 1) != 0) && (pcVar34 != (char *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pcVar34,0,8);
        plVar1 = DAT_043f1798;
        pcVar38 = local_130;
        goto joined_r0x015d53fc;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pcVar34,0,8);
    plVar1 = DAT_043f1798;
    pcVar38 = local_130;
  }
joined_r0x015d53fc:
  pcVar34 = local_160;
  local_130 = pcVar38;
  if (((local_140 & 1) != 0) && (pcVar38 != (char *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pcVar38,0,8);
        plVar1 = DAT_043f1798;
        pcVar34 = local_160;
        goto joined_r0x015d5c18;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pcVar38,0,8);
    plVar1 = DAT_043f1798;
    pcVar34 = local_160;
  }
joined_r0x015d5c18:
  lVar26 = local_190;
  local_160 = pcVar34;
  if (((local_170 & 1) != 0) && (pcVar34 != (char *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pcVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_190;
        goto joined_r0x015d5564;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pcVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_190;
  }
joined_r0x015d5564:
  lVar29 = local_1c0;
  local_190 = lVar26;
  if (((local_1a0 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar29 = local_1c0;
        goto joined_r0x015d5c58;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar29 = local_1c0;
  }
joined_r0x015d5c58:
  pvVar35 = local_1f0;
  local_1c0 = lVar29;
  if (((local_1d0 & 1) != 0) && (lVar29 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar29,0,8);
        plVar1 = DAT_043f1798;
        pvVar35 = local_1f0;
        goto joined_r0x015d56cc;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar29,0,8);
    plVar1 = DAT_043f1798;
    pvVar35 = local_1f0;
  }
joined_r0x015d56cc:
  pvVar6 = local_220;
  local_1f0 = pvVar35;
  if (((local_200 & 1) != 0) && (pvVar35 != (void *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pvVar35,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_220;
        goto joined_r0x015d5c98;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pvVar35,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_220;
  }
joined_r0x015d5c98:
  lVar26 = local_250;
  local_220 = pvVar6;
  if ((((byte)local_230 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_250;
        goto joined_r0x015d5834;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_250;
  }
joined_r0x015d5834:
  lVar29 = local_280;
  local_250 = lVar26;
  if (((local_260 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar29 = local_280;
        goto joined_r0x015d5cd8;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar29 = local_280;
  }
joined_r0x015d5cd8:
  DAT_043f1798 = plVar1;
  local_280 = lVar29;
  if ((((byte)local_290 & 1) != 0) && (lVar29 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar33 = plVar1;
    }
    uVar22 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar29,0,8);
        goto LAB_015d5998;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar29,0,8);
  }
LAB_015d5998:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar19)(plVar19,uVar31);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  uVar22 = (ulong)&local_2e0 | 1;
  if ((local_2e0 & 1) != 0) {
    uVar22 = CONCAT53(uStack_2cd,CONCAT21(uStack_2cf,local_2d0));
  }
  FUN_001522a0(uVar31,uVar22);
  plVar1 = DAT_043f1798;
  if (((local_2e0 & 1) != 0) &&
     (lVar26 = CONCAT53(uStack_2cd,CONCAT21(uStack_2cf,local_2d0)), lVar26 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar22 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar26,0,8);
  }
  return;
}


