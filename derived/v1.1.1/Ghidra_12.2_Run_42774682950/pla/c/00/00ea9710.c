/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea9710; name: FUN_00ea9710
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ea9710(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  size_t sVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  string *psVar24;
  long lVar25;
  string *psVar26;
  ulong uVar27;
  undefined8 uVar28;
  char *pcVar29;
  string *psVar30;
  long *plVar31;
  long lVar32;
  ulong unaff_x28;
  byte local_248;
  undefined7 uStack_247;
  undefined4 local_240;
  undefined4 local_23c;
  ulong local_238;
  string local_230;
  undefined2 local_22f;
  undefined1 local_22d;
  undefined8 local_22c;
  undefined4 local_224;
  long local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined7 local_1fb;
  undefined4 uStack_1f4;
  long local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [8];
  undefined2 local_1c7;
  undefined1 local_1c5;
  undefined4 local_1c4;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char local_19f [8];
  undefined1 local_197;
  undefined4 local_196;
  undefined2 local_192;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char acStack_16f [5];
  char local_16a [3];
  char acStack_167 [5];
  undefined2 local_162;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char acStack_13f [5];
  char local_13a [3];
  char acStack_137 [5];
  undefined2 local_132;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  char acStack_10f [6];
  char local_109 [2];
  char acStack_107 [6];
  undefined1 local_101;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined1 local_db;
  undefined8 local_da;
  undefined2 local_d2;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined7 local_af;
  undefined4 uStack_a8;
  undefined4 local_a4;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar15 = DAT_043f1798;
  psVar30 = &local_230;
  local_238 = 0;
  local_248 = 0x16;
  local_23c = 0;
  uStack_247 = s_FadeManager_03974306._0_7_;
  local_240 = CONCAT31(0x726567,s_FadeManager_03974306[7]);
  lVar5 = tpidr_el0;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar15;
  }
  plVar15 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x170,8);
  plVar15[2] = 0;
  plVar19 = plVar15 + 1;
  *plVar19 = 0;
  plVar31 = plVar15 + 3;
  *plVar31 = 0;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  plVar15[6] = (long)FUN_00eaaea0;
  plVar15[7] = (long)FUN_00eaaf50;
  *plVar15 = (long)&PTR_FUN_041eea20;
  plVar15[0xf] = (long)"RequestOut";
  plVar15[0x10] = (long)FUN_00d264cc;
  plVar15[4] = 0;
  plVar15[0x13] = (long)FUN_00d26570;
  plVar15[0x14] = 0;
  plVar15[0xc] = (long)&DAT_038ca815;
  plVar15[0xd] = (long)&DAT_0392da3c;
  plVar15[0x19] = (long)FUN_00d26204;
  plVar15[0x1a] = 0;
  plVar15[0x15] = (long)"RequestInDisp";
  plVar15[0x16] = (long)FUN_00d265c8;
  plVar15[0x1b] = (long)"RequestInColor";
  plVar15[0x1c] = (long)&LAB_00d2661c;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = (long)"IsEnd";
  plVar15[0x1f] = (long)FUN_00d26428;
  plVar15[0x20] = 0;
  plVar15[0x21] = (long)"IsEndStatus";
  plVar15[0x22] = (long)FUN_00d26384;
  plVar15[0x25] = 0;
  plVar15[0x26] = (long)FUN_00eab0e0;
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  *(undefined1 *)(plVar15 + 0xe) = 0;
  plVar15[0x2d] = 0;
  plVar15[0x2b] = 0;
  *(undefined1 *)(plVar15 + 0x2c) = 0;
  plVar15[0x27] = (long)&LAB_00eab3c0;
  plVar15[0x28] = (long)&LAB_00eab6a0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[0x11] = 0;
  plVar15[0x12] = (long)"RequestIn";
  plVar15[0x17] = 0;
  plVar15[0x18] = (long)"RequestInType";
  plVar15[0x23] = 0;
  plVar15[0x24] = 0;
  plVar15[0x29] = (long)&LAB_00eab6b0;
  plVar15[0x2a] = 0;
  local_230 = (string)0x6;
  local_210 = &LAB_00eab6fc;
  local_22f = 0x656e;
  local_1ff = 0x63675f5f;
  local_22d = 0x77;
  local_1cf[0] = s_RequestOut_039bdb06[0];
  local_1cf[1] = s_RequestOut_039bdb06[1];
  local_1cf[2] = s_RequestOut_039bdb06[2];
  local_1cf[3] = s_RequestOut_039bdb06[3];
  local_1cf[4] = s_RequestOut_039bdb06[4];
  local_1cf[5] = s_RequestOut_039bdb06[5];
  local_1cf[6] = s_RequestOut_039bdb06[6];
  local_1cf[7] = s_RequestOut_039bdb06[7];
  local_22c = 0;
  local_224 = 0;
  local_200 = 8;
  local_1fb = 0;
  uStack_1f4 = 0;
  local_1e0 = &LAB_00eab78c;
  local_1f0 = 0;
  puStack_1e8 = &LAB_00eab744;
  local_1d0 = 0x14;
  local_220 = 0;
  local_218 = &LAB_00eab6b4;
  local_208 = 0xffffffff;
  local_1d8 = 0xffffffff;
  local_1c7 = 0x7475;
  local_1c5 = 0;
  local_1c4 = 0;
  local_1b0 = &LAB_00eab81c;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_00eab7d4;
  local_1a0 = 0x12;
  local_197 = 0x6e;
  local_19f[0] = s_RequestIn_039b3f3d[0];
  local_19f[1] = s_RequestIn_039b3f3d[1];
  local_19f[2] = s_RequestIn_039b3f3d[2];
  local_19f[3] = s_RequestIn_039b3f3d[3];
  local_19f[4] = s_RequestIn_039b3f3d[4];
  local_19f[5] = s_RequestIn_039b3f3d[5];
  local_19f[6] = s_RequestIn_039b3f3d[6];
  local_19f[7] = s_RequestIn_039b3f3d[7];
  local_196 = 0;
  local_180 = &LAB_00eab8ac;
  local_192 = 0;
  local_178 = 0xffffffff;
  local_190 = 0;
  puStack_188 = &LAB_00eab864;
  local_170 = 0x1a;
  acStack_167[0] = s_RequestInDisp_038c0f61[8];
  acStack_167[1] = s_RequestInDisp_038c0f61[9];
  acStack_167[2] = s_RequestInDisp_038c0f61[10];
  acStack_167[3] = s_RequestInDisp_038c0f61[0xb];
  acStack_167[4] = s_RequestInDisp_038c0f61[0xc];
  acStack_16f[0] = s_RequestInDisp_038c0f61[0];
  acStack_16f[1] = s_RequestInDisp_038c0f61[1];
  acStack_16f[2] = s_RequestInDisp_038c0f61[2];
  acStack_16f[3] = s_RequestInDisp_038c0f61[3];
  acStack_16f[4] = s_RequestInDisp_038c0f61[4];
  local_16a[0] = s_RequestInDisp_038c0f61[5];
  local_16a[1] = s_RequestInDisp_038c0f61[6];
  local_16a[2] = s_RequestInDisp_038c0f61[7];
  local_162 = 0;
  local_150 = &LAB_00eab93c;
  local_148 = 0xffffffff;
  local_140 = 0x1a;
  local_160 = 0;
  puStack_158 = &LAB_00eab8f4;
  acStack_137[0] = s_RequestInType_03a73a24[8];
  acStack_137[1] = s_RequestInType_03a73a24[9];
  acStack_137[2] = s_RequestInType_03a73a24[10];
  acStack_137[3] = s_RequestInType_03a73a24[0xb];
  acStack_137[4] = s_RequestInType_03a73a24[0xc];
  acStack_13f[0] = s_RequestInType_03a73a24[0];
  acStack_13f[1] = s_RequestInType_03a73a24[1];
  acStack_13f[2] = s_RequestInType_03a73a24[2];
  acStack_13f[3] = s_RequestInType_03a73a24[3];
  acStack_13f[4] = s_RequestInType_03a73a24[4];
  local_13a[0] = s_RequestInType_03a73a24[5];
  local_13a[1] = s_RequestInType_03a73a24[6];
  local_13a[2] = s_RequestInType_03a73a24[7];
  local_120 = &LAB_00eab9cc;
  local_132 = 0;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_00eab984;
  local_110 = 0x1c;
  acStack_107[0] = s_RequestInColor_03a73570[8];
  acStack_107[1] = s_RequestInColor_03a73570[9];
  acStack_107[2] = s_RequestInColor_03a73570[10];
  acStack_107[3] = s_RequestInColor_03a73570[0xb];
  acStack_107[4] = s_RequestInColor_03a73570[0xc];
  acStack_107[5] = s_RequestInColor_03a73570[0xd];
  acStack_10f[0] = s_RequestInColor_03a73570[0];
  acStack_10f[1] = s_RequestInColor_03a73570[1];
  acStack_10f[2] = s_RequestInColor_03a73570[2];
  acStack_10f[3] = s_RequestInColor_03a73570[3];
  acStack_10f[4] = s_RequestInColor_03a73570[4];
  acStack_10f[5] = s_RequestInColor_03a73570[5];
  local_109[0] = s_RequestInColor_03a73570[6];
  local_109[1] = s_RequestInColor_03a73570[7];
  local_f0 = &LAB_00eaba5c;
  local_101 = 0;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00eaba14;
  local_e0 = 10;
  local_db = 100;
  local_df = 0x6e457349;
  local_d2 = 0;
  local_da = 0;
  local_c0 = &LAB_00eabaec;
  local_b8 = 0xffffffff;
  local_b0 = 0x16;
  local_d0 = 0;
  puStack_c8 = &LAB_00eabaa4;
  local_af = s_IsEndStatus_039130e1._0_7_;
  uStack_a8 = 0x73757461;
  local_a4 = 0;
  local_90 = &LAB_00eabb7c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00eabb34;
  do {
    uVar16 = *(ulong *)(psVar30 + 8);
    psVar2 = *(string **)(psVar30 + 0x10);
    if (((byte)*psVar30 & 1) == 0) {
      psVar2 = psVar30 + 1;
      uVar16 = (ulong)((byte)*psVar30 >> 1);
    }
    uVar16 = FUN_008e8ed4(local_80,psVar2,uVar16);
    uVar27 = plVar15[2];
    if (uVar27 != 0) {
      uVar20 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        unaff_x28 = uVar27 - 1 & uVar16;
      }
      else {
        unaff_x28 = uVar16;
        if (uVar27 <= uVar16) {
          uVar4 = 0;
          if (uVar27 != 0) {
            uVar4 = uVar16 / uVar27;
          }
          unaff_x28 = uVar16 - uVar4 * uVar27;
        }
      }
      plVar22 = *(long **)(*plVar19 + unaff_x28 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        psVar2 = psVar30 + 1;
        sVar18 = (ulong)((byte)*psVar30 >> 1);
        if (((byte)*psVar30 & 1) != 0) {
          psVar2 = *(string **)(psVar30 + 0x10);
          sVar18 = *(size_t *)(psVar30 + 8);
        }
        if (uVar20 < 2) {
          if (sVar18 == 0) {
            do {
              if (plVar22[1] != uVar16 && (plVar22[1] & uVar27 - 1) != unaff_x28) break;
              uVar20 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
              if ((*(byte *)(plVar22 + 2) & 1) != 0) {
                uVar20 = plVar22[3];
              }
              if (uVar20 == 0) goto LAB_00ea9d80;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              if (plVar22[1] != uVar16 && (plVar22[1] & uVar27 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar22 + 2);
              uVar20 = (ulong)(bVar3 >> 1);
              sVar1 = uVar20;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar22[3];
              }
              if (sVar1 == sVar18) {
                if ((bVar3 & 1) == 0) {
                  psVar24 = (string *)((long)plVar22 + 0x11);
                  psVar26 = psVar2;
                  while (*psVar24 == *psVar26) {
                    uVar20 = uVar20 - 1;
                    psVar24 = psVar24 + 1;
                    psVar26 = psVar26 + 1;
                    if (uVar20 == 0) goto LAB_00ea9d80;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar22[4],psVar2,sVar18);
                  if (iVar6 == 0) goto LAB_00ea9d80;
                }
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
        else if (sVar18 == 0) {
          do {
            uVar20 = plVar22[1];
            if (uVar20 != uVar16) {
              if (uVar27 <= uVar20) {
                uVar4 = 0;
                if (uVar27 != 0) {
                  uVar4 = uVar20 / uVar27;
                }
                uVar20 = uVar20 - uVar4 * uVar27;
              }
              if (uVar20 != unaff_x28) break;
            }
            uVar20 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
            if ((*(byte *)(plVar22 + 2) & 1) != 0) {
              uVar20 = plVar22[3];
            }
            if (uVar20 == 0) goto LAB_00ea9d80;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar22[1];
            if (uVar20 != uVar16) {
              if (uVar27 <= uVar20) {
                uVar4 = 0;
                if (uVar27 != 0) {
                  uVar4 = uVar20 / uVar27;
                }
                uVar20 = uVar20 - uVar4 * uVar27;
              }
              if (uVar20 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar22 + 2);
            uVar20 = (ulong)(bVar3 >> 1);
            sVar1 = uVar20;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar22[3];
            }
            if (sVar1 == sVar18) {
              if ((bVar3 & 1) == 0) {
                psVar24 = (string *)((long)plVar22 + 0x11);
                psVar26 = psVar2;
                while (*psVar24 == *psVar26) {
                  uVar20 = uVar20 - 1;
                  psVar24 = psVar24 + 1;
                  psVar26 = psVar26 + 1;
                  if (uVar20 == 0) goto LAB_00ea9d80;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar22[4],psVar2,sVar18);
                if (iVar6 == 0) goto LAB_00ea9d80;
              }
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    plVar22 = DAT_043f1798;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar22;
    }
    plVar22 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
    std::string::string((string *)(plVar22 + 2),psVar30);
    lVar23 = *(long *)(psVar30 + 0x18);
    lVar25 = *(long *)(psVar30 + 0x28);
    plVar22[6] = *(long *)(psVar30 + 0x20);
    plVar22[7] = lVar25;
    plVar22[5] = lVar23;
    *plVar22 = 0;
    plVar22[1] = uVar16;
    if ((uVar27 == 0) || (*(float *)(plVar15 + 5) * (float)uVar27 < (float)(plVar15[4] + 1))) {
      uVar27 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
      uVar20 = (ulong)((float)(plVar15[4] + 1) / *(float *)(plVar15 + 5));
      if (uVar20 <= uVar27) {
        uVar20 = uVar27;
      }
      FUN_008e9ae4(plVar19,uVar20);
      uVar27 = plVar15[2];
      if ((uVar27 & uVar27 - 1) == 0) {
        unaff_x28 = uVar27 - 1 & uVar16;
      }
      else if (uVar16 < uVar27) {
        unaff_x28 = uVar16;
      }
      else {
        uVar20 = 0;
        if (uVar27 != 0) {
          uVar20 = uVar16 / uVar27;
        }
        unaff_x28 = uVar16 - uVar20 * uVar27;
      }
    }
    lVar23 = *plVar19;
    plVar21 = *(long **)(lVar23 + unaff_x28 * 8);
    if (plVar21 == (long *)0x0) {
      *plVar22 = *plVar31;
      *plVar31 = (long)plVar22;
      *(long **)(lVar23 + unaff_x28 * 8) = plVar31;
      if (*plVar22 != 0) {
        uVar16 = *(ulong *)(*plVar22 + 8);
        if ((uVar27 & uVar27 - 1) == 0) {
          uVar16 = uVar16 & uVar27 - 1;
        }
        else if (uVar27 <= uVar16) {
          uVar20 = 0;
          if (uVar27 != 0) {
            uVar20 = uVar16 / uVar27;
          }
          uVar16 = uVar16 - uVar20 * uVar27;
        }
        plVar21 = (long *)(*plVar19 + uVar16 * 8);
        goto LAB_00ea9d70;
      }
    }
    else {
      *plVar22 = *plVar21;
LAB_00ea9d70:
      *plVar21 = (long)plVar22;
    }
    plVar15[4] = plVar15[4] + 1;
LAB_00ea9d80:
    psVar30 = psVar30 + 0x30;
  } while (psVar30 != (string *)local_80);
  lVar25 = FUN_008cca50();
  lVar23 = 0;
  do {
    lVar17 = FUN_008e8c90(plVar19,lVar25 + lVar23);
    if (lVar17 != 0) {
      FUN_008f2aec(local_80,plVar19,lVar17);
      lVar17 = local_80[0];
      plVar31 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar17 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar17 + 0x10) & 1) != 0)) &&
           (lVar32 = *(long *)(lVar17 + 0x20), lVar32 != 0)) {
          plVar22 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar22 = plVar31;
          }
          uVar16 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar22,lVar32,0,8);
              goto LAB_00ea9fa4;
            }
          }
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar32,0,8);
        }
LAB_00ea9fa4:
        plVar31 = DAT_043f1798;
        plVar22 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar22 = plVar31;
        }
        uVar16 = (**(code **)(*plVar22 + 0xc0))(plVar22);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar22,lVar17,0,8);
            goto LAB_00ea9f5c;
          }
        }
        (**(code **)(*plVar22 + 0x18))(plVar22,lVar17,0,8);
      }
    }
LAB_00ea9f5c:
    lVar23 = lVar23 + 0x18;
  } while (lVar23 != 0x300);
  pcVar29 = (char *)plVar15[0xc];
  sVar18 = strlen(pcVar29);
  iVar6 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0xd];
  sVar18 = strlen(pcVar29);
  iVar7 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0xf];
  sVar18 = strlen(pcVar29);
  iVar8 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x12];
  sVar18 = strlen(pcVar29);
  iVar9 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x15];
  sVar18 = strlen(pcVar29);
  iVar10 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x18];
  sVar18 = strlen(pcVar29);
  iVar11 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x1b];
  sVar18 = strlen(pcVar29);
  iVar12 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x1e];
  sVar18 = strlen(pcVar29);
  iVar13 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x21];
  sVar18 = strlen(pcVar29);
  iVar14 = FUN_008f2c60(sVar18,pcVar29);
  lVar25 = local_a0;
  *(bool *)(plVar15 + 0xb) =
       (((((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0
         ) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0;
  plVar19 = DAT_043f1798;
  lVar23 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_d0;
        goto joined_r0x00eaa1d0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_d0;
  }
joined_r0x00eaa1d0:
  lVar25 = local_100;
  local_d0 = lVar23;
  if (((local_e0 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_100;
        goto joined_r0x00eaa9b4;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_100;
  }
joined_r0x00eaa9b4:
  lVar23 = local_130;
  local_100 = lVar25;
  if (((local_110 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_130;
        goto joined_r0x00eaa338;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_130;
  }
joined_r0x00eaa338:
  lVar25 = local_160;
  local_130 = lVar23;
  if (((local_140 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_160;
        goto joined_r0x00eaa9f4;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_160;
  }
joined_r0x00eaa9f4:
  lVar23 = local_190;
  local_160 = lVar25;
  if (((local_170 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_190;
        goto joined_r0x00eaa4a0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_190;
  }
joined_r0x00eaa4a0:
  lVar25 = local_1c0;
  local_190 = lVar23;
  if (((local_1a0 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_1c0;
        goto joined_r0x00eaaa34;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_1c0;
  }
joined_r0x00eaaa34:
  lVar23 = local_1f0;
  local_1c0 = lVar25;
  if (((local_1d0 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_1f0;
        goto joined_r0x00eaa608;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_1f0;
  }
joined_r0x00eaa608:
  lVar25 = local_220;
  local_1f0 = lVar23;
  if (((local_200 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_220;
        goto joined_r0x00eaaa74;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_220;
  }
joined_r0x00eaaa74:
  DAT_043f1798 = plVar19;
  local_220 = lVar25;
  if ((((byte)local_230 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        goto LAB_00eaa76c;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
  }
LAB_00eaa76c:
  uVar28 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar28);
  (**(code **)*plVar15)(plVar15,uVar28);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  uVar16 = (ulong)&local_248 | 1;
  if ((local_248 & 1) != 0) {
    uVar16 = local_238;
  }
  FUN_001522a0(uVar28,uVar16);
  uVar16 = local_238;
  plVar15 = DAT_043f1798;
  if (((local_248 & 1) != 0) && (local_238 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar15;
    }
    uVar27 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,uVar16,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,uVar16,0,8);
  }
  return;
}


