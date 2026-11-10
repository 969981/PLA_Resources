/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027e05c0; name: FUN_027e05c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_027e05c0(long param_1)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  size_t sVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long *plVar24;
  char *pcVar25;
  long lVar26;
  byte local_2a8;
  undefined7 uStack_2a7;
  char local_2a0;
  undefined7 uStack_29f;
  char local_298;
  undefined2 uStack_297;
  undefined5 uStack_295;
  byte local_290;
  undefined2 local_28f;
  undefined1 local_28d;
  undefined8 local_28c;
  undefined4 local_284;
  long local_280;
  undefined1 *puStack_278;
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
  byte local_230;
  char local_22f [7];
  char cStack_228;
  char acStack_227 [7];
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  char local_1ff [6];
  char acStack_1f9 [2];
  char acStack_1f7 [6];
  undefined1 local_1f1;
  long local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
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
  char local_19f [7];
  char cStack_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined7 local_16f;
  undefined4 uStack_168;
  undefined4 local_164;
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
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
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
  long local_80 [2];
  char local_70;
  
  plVar2 = DAT_043f1798;
  local_2a8 = 0x22;
  uStack_295 = 0;
  uStack_29f = s_UIResidentManager_0390da5e._8_7_;
  local_298 = s_UIResidentManager_0390da5e[0xf];
  uStack_2a7 = s_UIResidentManager_0390da5e._0_7_;
  local_2a0 = s_UIResidentManager_0390da5e[7];
  uStack_297 = 0x72;
  lVar1 = tpidr_el0;
  plVar21 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar21 = plVar2;
  }
  plVar16 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x178,8);
  plVar16[4] = 0;
  plVar24 = plVar16 + 1;
  *plVar24 = 0;
  *(undefined4 *)(plVar16 + 5) = 0x3f800000;
  plVar16[10] = 0;
  plVar16[6] = (long)FUN_027ea470;
  plVar16[7] = (long)FUN_027ea520;
  *plVar16 = (long)&PTR_FUN_0426cb18;
  plVar16[0xc] = (long)&DAT_038ca815;
  plVar16[0xd] = (long)&DAT_0392da3c;
  plVar16[0x11] = (long)"__haxe_export_StartMenuEvent";
  plVar16[0x12] = (long)FUN_0286acfc;
  plVar16[0x15] = (long)FUN_0286b054;
  plVar16[0x16] = 0;
  plVar16[0x17] = (long)"GetBoxParam";
  plVar16[0x18] = (long)FUN_0286bb0c;
  plVar16[0x1b] = (long)FUN_0286bb1c;
  plVar16[0x1c] = 0;
  plVar16[0x1d] = (long)"UpdateAllReportPokeAndGetResult";
  plVar16[0x1e] = (long)&LAB_0286bc90;
  plVar16[0x1f] = 0;
  plVar16[0x20] = (long)"GetPokedexParamForEvent";
  plVar16[0x21] = (long)&LAB_0286bd6c;
  plVar16[0x22] = 0;
  plVar16[0x23] = (long)"__haxe_export_GetInstance";
  plVar16[0x24] = (long)FUN_0286977c;
  plVar16[0x27] = (long)FUN_027ea6f4;
  plVar16[0x28] = (long)&LAB_027ea9d4;
  plVar16[0x29] = (long)&LAB_027e2730;
  plVar16[0x2a] = (long)&LAB_027e2740;
  plVar16[2] = 0;
  plVar16[3] = 0;
  *(undefined1 *)(plVar16 + 0xb) = 0;
  *(undefined1 *)(plVar16 + 0xe) = 0;
  plVar16[0x2e] = 0;
  *(undefined1 *)(plVar16 + 0x2d) = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[0xf] = (long)"GetIPtrResidentHud";
  plVar16[0x10] = (long)"GetIPtrOneShot";
  plVar16[0x13] = 0;
  plVar16[0x14] = (long)"IsMenuEventExecuting";
  plVar16[0x19] = 0;
  plVar16[0x1a] = (long)"__haxe_export_BoxParamReset";
  plVar16[0x25] = 0;
  plVar16[0x26] = 0;
  plVar16[0x2b] = 0;
  plVar16[0x2c] = 0;
  plVar2 = DAT_043f1798;
  local_290 = 6;
  local_28f = 0x656e;
  local_28d = 0x77;
  local_270 = &LAB_027eacf8;
  local_28c = 0;
  local_284 = 0;
  local_268 = 0xffffffff;
  local_260 = 8;
  local_25b = 0;
  uStack_254 = 0;
  local_240 = &LAB_027ead88;
  local_238 = 0xffffffff;
  local_208 = 0xffffffff;
  local_280 = 0;
  puStack_278 = &LAB_027eacb0;
  local_25f = 0x63675f5f;
  local_250 = 0;
  puStack_248 = &LAB_027ead40;
  local_230 = 0x24;
  local_22f[0] = s_GetIPtrResidentHud_039517fb[0];
  local_22f[1] = s_GetIPtrResidentHud_039517fb[1];
  local_22f[2] = s_GetIPtrResidentHud_039517fb[2];
  local_22f[3] = s_GetIPtrResidentHud_039517fb[3];
  local_22f[4] = s_GetIPtrResidentHud_039517fb[4];
  local_22f[5] = s_GetIPtrResidentHud_039517fb[5];
  local_22f[6] = s_GetIPtrResidentHud_039517fb[6];
  cStack_228 = s_GetIPtrResidentHud_039517fb[7];
  acStack_227[0] = s_GetIPtrResidentHud_039517fb[8];
  acStack_227[1] = s_GetIPtrResidentHud_039517fb[9];
  acStack_227[2] = s_GetIPtrResidentHud_039517fb[10];
  acStack_227[3] = s_GetIPtrResidentHud_039517fb[0xb];
  acStack_227[4] = s_GetIPtrResidentHud_039517fb[0xc];
  acStack_227[5] = s_GetIPtrResidentHud_039517fb[0xd];
  acStack_227[6] = s_GetIPtrResidentHud_039517fb[0xe];
  local_220 = 0x647548;
  puStack_218 = &LAB_027eadd0;
  local_210 = &LAB_027eae18;
  local_200 = 0x1c;
  local_1ff[0] = s_GetIPtrOneShot_0389e715[0];
  local_1ff[1] = s_GetIPtrOneShot_0389e715[1];
  local_1ff[2] = s_GetIPtrOneShot_0389e715[2];
  local_1ff[3] = s_GetIPtrOneShot_0389e715[3];
  local_1ff[4] = s_GetIPtrOneShot_0389e715[4];
  local_1ff[5] = s_GetIPtrOneShot_0389e715[5];
  acStack_1f9[0] = s_GetIPtrOneShot_0389e715[6];
  acStack_1f9[1] = s_GetIPtrOneShot_0389e715[7];
  acStack_1f7[0] = s_GetIPtrOneShot_0389e715[8];
  acStack_1f7[1] = s_GetIPtrOneShot_0389e715[9];
  acStack_1f7[2] = s_GetIPtrOneShot_0389e715[10];
  acStack_1f7[3] = s_GetIPtrOneShot_0389e715[0xb];
  acStack_1f7[4] = s_GetIPtrOneShot_0389e715[0xc];
  acStack_1f7[5] = s_GetIPtrOneShot_0389e715[0xd];
  local_1f1 = 0;
  local_1e0 = &LAB_027eaea8;
  local_1d8 = 0xffffffff;
  local_1f0 = 0;
  puStack_1e8 = &LAB_027eae60;
  plVar21 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar21 = plVar2;
  }
  local_1c0 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  local_1c0[0x18] = 'v';
  local_1c0[0x19] = 'e';
  local_1c0[0x1a] = 'n';
  local_1c0[0x1b] = 't';
  local_1c0[0x1c] = '\0';
  uVar23 = s___haxe_export_StartMenuEvent_03977ed3._8_8_;
  *(undefined8 *)local_1c0 = s___haxe_export_StartMenuEvent_03977ed3._0_8_;
  uVar4 = s___haxe_export_StartMenuEvent_03977ed3._16_8_;
  *(undefined8 *)(local_1c0 + 8) = uVar23;
  *(undefined8 *)(local_1c0 + 0x10) = uVar4;
  plVar2 = DAT_043f1798;
  local_1d0 = 0x21;
  local_1cb = 0;
  local_1cf = 0;
  local_1c8 = 0x1c;
  local_1a0 = 0x28;
  local_1c9 = 0;
  local_1b8 = &LAB_027eaef0;
  puStack_1b0 = &LAB_027eaf38;
  local_1a8 = 0xffffffff;
  local_19f[0] = s_IsMenuEventExecuting_0389e724[0];
  local_19f[1] = s_IsMenuEventExecuting_0389e724[1];
  local_19f[2] = s_IsMenuEventExecuting_0389e724[2];
  local_19f[3] = s_IsMenuEventExecuting_0389e724[3];
  local_19f[4] = s_IsMenuEventExecuting_0389e724[4];
  local_19f[5] = s_IsMenuEventExecuting_0389e724[5];
  local_19f[6] = s_IsMenuEventExecuting_0389e724[6];
  local_178 = 0xffffffff;
  local_188 = &LAB_027eaf80;
  puStack_180 = &LAB_027eafc8;
  cStack_198 = s_IsMenuEventExecuting_0389e724[7];
  acStack_197[0] = s_IsMenuEventExecuting_0389e724[8];
  acStack_197[1] = s_IsMenuEventExecuting_0389e724[9];
  acStack_197[2] = s_IsMenuEventExecuting_0389e724[10];
  acStack_197[3] = s_IsMenuEventExecuting_0389e724[0xb];
  acStack_197[4] = s_IsMenuEventExecuting_0389e724[0xc];
  acStack_197[5] = s_IsMenuEventExecuting_0389e724[0xd];
  acStack_197[6] = s_IsMenuEventExecuting_0389e724[0xe];
  local_190 = 0x676e697475;
  local_170 = 0x16;
  local_16f = s_GetBoxParam_039823d2._0_7_;
  uStack_168 = 0x6d617261;
  local_164 = 0;
  local_150 = &LAB_027eb058;
  local_160 = 0;
  puStack_158 = &LAB_027eb010;
  local_148 = 0xffffffff;
  plVar21 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar21 = plVar2;
  }
  local_130 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  local_130[0x17] = 'e';
  local_130[0x18] = 's';
  local_130[0x19] = 'e';
  local_130[0x1a] = 't';
  local_130[0x1b] = '\0';
  uVar23 = s___haxe_export_BoxParamReset_039a649c._8_8_;
  *(undefined8 *)local_130 = s___haxe_export_BoxParamReset_039a649c._0_8_;
  uVar4 = s___haxe_export_BoxParamReset_039a649c._16_8_;
  *(undefined8 *)(local_130 + 8) = uVar23;
  *(undefined8 *)(local_130 + 0x10) = uVar4;
  plVar2 = DAT_043f1798;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x1b;
  local_118 = 0xffffffff;
  local_128 = &LAB_027eb0a0;
  puStack_120 = &LAB_027eb0e8;
  plVar21 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar21 = plVar2;
  }
  local_100 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  local_100[0x1f] = '\0';
  uVar4 = s_UpdateAllReportPokeAndGetResult_0395180e._8_8_;
  *(undefined8 *)local_100 = s_UpdateAllReportPokeAndGetResult_0395180e._0_8_;
  *(ulong *)(local_100 + 0x17) =
       CONCAT71(s_UpdateAllReportPokeAndGetResult_0395180e._24_7_,
                s_UpdateAllReportPokeAndGetResult_0395180e[0x17]);
  uVar23 = CONCAT17(s_UpdateAllReportPokeAndGetResult_0395180e[0x17],
                    s_UpdateAllReportPokeAndGetResult_0395180e._16_7_);
  *(undefined8 *)(local_100 + 8) = uVar4;
  *(undefined8 *)(local_100 + 0x10) = uVar23;
  plVar2 = DAT_043f1798;
  local_110 = 0x21;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_108 = 0x1f;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_027eb130;
  puStack_f0 = &LAB_027eb178;
  plVar21 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar21 = plVar2;
  }
  local_d0 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  local_d0[0x17] = '\0';
  uVar23 = CONCAT17(s_GetPokedexParamForEvent_0395b215[0xf],s_GetPokedexParamForEvent_0395b215._8_7_
                   );
  *(undefined8 *)local_d0 = s_GetPokedexParamForEvent_0395b215._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar23;
  *(ulong *)(local_d0 + 0xf) =
       CONCAT71(s_GetPokedexParamForEvent_0395b215._16_7_,s_GetPokedexParamForEvent_0395b215[0xf]);
  plVar2 = DAT_043f1798;
  local_e0 = 0x21;
  local_d9 = 0;
  local_db = 0;
  local_df = 0;
  local_d8 = 0x17;
  local_c8 = &LAB_027eb1c0;
  puStack_c0 = &LAB_027eb208;
  local_b8 = 0xffffffff;
  plVar21 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar21 = plVar2;
  }
  local_a0 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  local_a0[0x18] = 'e';
  local_a0[0x19] = '\0';
  uVar23 = s___haxe_export_GetInstance_0394d4e9._8_8_;
  *(undefined8 *)local_a0 = s___haxe_export_GetInstance_0394d4e9._0_8_;
  uVar4 = s___haxe_export_GetInstance_0394d4e9._16_8_;
  *(undefined8 *)(local_a0 + 8) = uVar23;
  *(undefined8 *)(local_a0 + 0x10) = uVar4;
  local_b0 = 0x21;
  local_a9 = 0;
  local_ab = 0;
  local_af = 0;
  local_a8 = 0x19;
  local_98 = &LAB_027eb250;
  local_90 = &LAB_027eb298;
  local_88 = 0xffffffff;
  FUN_027e297c(plVar24,&local_290,0xb);
  lVar17 = FUN_008cca50();
  lVar22 = 0;
  do {
    lVar18 = FUN_008e8c90(plVar24,lVar17 + lVar22);
    if (lVar18 != 0) {
      FUN_008f2aec(local_80,plVar24,lVar18);
      lVar18 = local_80[0];
      plVar2 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar18 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar18 + 0x10) & 1) != 0)) &&
           (lVar26 = *(long *)(lVar18 + 0x20), lVar26 != 0)) {
          plVar21 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar21 = plVar2;
          }
          uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar19 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar26,0,8);
              goto LAB_027e0ce8;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar26,0,8);
        }
LAB_027e0ce8:
        plVar2 = DAT_043f1798;
        plVar21 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar21 = plVar2;
        }
        uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar19 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar18,0,8);
            goto LAB_027e0ca0;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar18,0,8);
      }
    }
LAB_027e0ca0:
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0x300);
  pcVar25 = (char *)plVar16[0xc];
  sVar20 = strlen(pcVar25);
  iVar5 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0xd];
  sVar20 = strlen(pcVar25);
  iVar6 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0xf];
  sVar20 = strlen(pcVar25);
  iVar7 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x10];
  sVar20 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x11];
  sVar20 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x14];
  sVar20 = strlen(pcVar25);
  iVar10 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x17];
  sVar20 = strlen(pcVar25);
  iVar11 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x1a];
  sVar20 = strlen(pcVar25);
  iVar12 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x1d];
  sVar20 = strlen(pcVar25);
  iVar13 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x20];
  sVar20 = strlen(pcVar25);
  iVar14 = FUN_008f2c60(sVar20,pcVar25);
  pcVar25 = (char *)plVar16[0x23];
  sVar20 = strlen(pcVar25);
  iVar15 = FUN_008f2c60(sVar20,pcVar25);
  pcVar3 = local_a0;
  *(bool *)(plVar16 + 0xb) =
       (((((((((iVar6 != 0 || iVar5 != 0) || iVar7 != 0) || iVar8 != 0) || iVar9 != 0) ||
           iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0) ||
       iVar15 != 0;
  plVar2 = DAT_043f1798;
  pcVar25 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        pcVar25 = local_d0;
        goto joined_r0x027e0f34;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    pcVar25 = local_d0;
  }
joined_r0x027e0f34:
  pcVar3 = local_100;
  local_d0 = pcVar25;
  if (((local_e0 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pcVar25,0,8);
        plVar2 = DAT_043f1798;
        pcVar3 = local_100;
        goto joined_r0x027e1838;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pcVar25,0,8);
    plVar2 = DAT_043f1798;
    pcVar3 = local_100;
  }
joined_r0x027e1838:
  pcVar25 = local_130;
  local_100 = pcVar3;
  if (((local_110 & 1) != 0) && (pcVar3 != (char *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pcVar3,0,8);
        plVar2 = DAT_043f1798;
        pcVar25 = local_130;
        goto joined_r0x027e1094;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pcVar3,0,8);
    plVar2 = DAT_043f1798;
    pcVar25 = local_130;
  }
joined_r0x027e1094:
  lVar22 = local_160;
  local_130 = pcVar25;
  if (((local_140 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pcVar25,0,8);
        plVar2 = DAT_043f1798;
        lVar22 = local_160;
        goto joined_r0x027e1878;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pcVar25,0,8);
    plVar2 = DAT_043f1798;
    lVar22 = local_160;
  }
joined_r0x027e1878:
  lVar17 = local_190;
  local_160 = lVar22;
  if (((local_170 & 1) != 0) && (lVar22 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar22,0,8);
        plVar2 = DAT_043f1798;
        lVar17 = local_190;
        goto joined_r0x027e11f4;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,0,8);
    plVar2 = DAT_043f1798;
    lVar17 = local_190;
  }
joined_r0x027e11f4:
  pcVar25 = local_1c0;
  local_190 = lVar17;
  if (((local_1a0 & 1) != 0) && (lVar17 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar17,0,8);
        plVar2 = DAT_043f1798;
        pcVar25 = local_1c0;
        goto joined_r0x027e18b8;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar17,0,8);
    plVar2 = DAT_043f1798;
    pcVar25 = local_1c0;
  }
joined_r0x027e18b8:
  lVar22 = local_1f0;
  local_1c0 = pcVar25;
  if (((local_1d0 & 1) != 0) && (pcVar25 != (char *)0x0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,pcVar25,0,8);
        plVar2 = DAT_043f1798;
        lVar22 = local_1f0;
        goto joined_r0x027e1354;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pcVar25,0,8);
    plVar2 = DAT_043f1798;
    lVar22 = local_1f0;
  }
joined_r0x027e1354:
  lVar17 = local_220;
  local_1f0 = lVar22;
  if (((local_200 & 1) != 0) && (lVar22 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar22,0,8);
        plVar2 = DAT_043f1798;
        lVar17 = local_220;
        goto joined_r0x027e18f8;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,0,8);
    plVar2 = DAT_043f1798;
    lVar17 = local_220;
  }
joined_r0x027e18f8:
  lVar22 = local_250;
  local_220 = lVar17;
  if (((local_230 & 1) != 0) && (lVar17 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar17,0,8);
        plVar2 = DAT_043f1798;
        lVar22 = local_250;
        goto joined_r0x027e14b4;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar17,0,8);
    plVar2 = DAT_043f1798;
    lVar22 = local_250;
  }
joined_r0x027e14b4:
  lVar17 = local_280;
  local_250 = lVar22;
  if (((local_260 & 1) != 0) && (lVar22 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar22,0,8);
        plVar2 = DAT_043f1798;
        lVar17 = local_280;
        goto joined_r0x027e1938;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,0,8);
    plVar2 = DAT_043f1798;
    lVar17 = local_280;
  }
joined_r0x027e1938:
  DAT_043f1798 = plVar2;
  local_280 = lVar17;
  if (((local_290 & 1) != 0) && (lVar17 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar17,0,8);
        goto LAB_027e1610;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar17,0,8);
  }
LAB_027e1610:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar16)(plVar16,uVar23);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  uVar19 = (ulong)&local_2a8 | 1;
  if ((local_2a8 & 1) != 0) {
    uVar19 = CONCAT53(uStack_295,CONCAT21(uStack_297,local_298));
  }
  FUN_001522a0(uVar23,uVar19);
  plVar2 = DAT_043f1798;
  if (((local_2a8 & 1) != 0) &&
     (lVar22 = CONCAT53(uStack_295,CONCAT21(uStack_297,local_298)), lVar22 != 0)) {
    plVar21 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar21 = plVar2;
    }
    uVar19 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar22,0,8);
        return;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,0,8);
  }
  return;
}


