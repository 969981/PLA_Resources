/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015ae3c0; name: FUN_015ae3c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_015ae3c0(long param_1)

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
  long *plVar19;
  ulong uVar20;
  long lVar21;
  size_t sVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  string *psVar27;
  long lVar28;
  string *psVar29;
  ulong uVar30;
  undefined8 uVar31;
  long *plVar32;
  char *pcVar33;
  string *psVar34;
  long lVar35;
  ulong uVar36;
  byte local_278;
  undefined7 uStack_277;
  char cStack_270;
  undefined7 uStack_26f;
  char local_268;
  undefined4 uStack_267;
  undefined1 uStack_263;
  undefined2 uStack_262;
  string local_260;
  undefined2 local_25f;
  undefined1 local_25d;
  undefined8 local_25c;
  undefined4 local_254;
  long local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  undefined4 local_22f;
  undefined7 local_22b;
  undefined4 uStack_224;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  char local_1ff [7];
  char cStack_1f8;
  char acStack_1f7 [7];
  long local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [7];
  char cStack_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
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
  char acStack_16f [7];
  char local_168;
  char acStack_167 [7];
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
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  uStack_262 = 0;
  uStack_267 = 0x72656761;
  local_278 = 0x28;
  uStack_26f = s_EventProgressManager_03909ba2._8_7_;
  local_268 = s_EventProgressManager_03909ba2[0xf];
  uStack_277 = s_EventProgressManager_03909ba2._0_7_;
  cStack_270 = s_EventProgressManager_03909ba2[7];
  uStack_263 = 0;
  lVar6 = tpidr_el0;
  plVar25 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  plVar19 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x108,8);
  plVar19[4] = 0;
  plVar32 = plVar19 + 1;
  *plVar32 = 0;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[10] = 0;
  plVar19[6] = (long)FUN_015afd50;
  plVar19[7] = (long)FUN_015afe00;
  *plVar19 = (long)&PTR_FUN_0421e520;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  *(undefined1 *)(plVar19 + 0xe) = 0;
  plVar19[0x15] = (long)"GetEventRanchManager";
  plVar19[0x16] = (long)"GetEventGinkgoManager";
  plVar19[0x20] = 0;
  plVar19[0xc] = (long)&DAT_038ca815;
  plVar19[0xd] = (long)&DAT_0392da3c;
  *(undefined1 *)(plVar19 + 0x1f) = 0;
  plVar19[0x19] = (long)FUN_015aff90;
  plVar19[0x1a] = (long)&LAB_015b0270;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[0xf] = (long)"GetEventListManager";
  plVar19[0x10] = (long)"GetQuestListManager";
  plVar19[0x11] = (long)"GetEventProgressWork";
  plVar19[0x12] = (long)"GetNpcTalkManager";
  plVar19[0x13] = (long)"GetEventItemOverflowManager";
  plVar19[0x14] = (long)"GetEventPokePassShowManager";
  plVar19[0x17] = 0;
  plVar19[0x18] = 0;
  plVar19[0x1b] = (long)&LAB_015b0550;
  plVar19[0x1c] = (long)&LAB_015b0560;
  plVar19[0x1d] = 0;
  plVar19[0x1e] = 0;
  plVar1 = DAT_043f1798;
  local_240 = &LAB_015b05ac;
  local_210 = &LAB_015b063c;
  local_260 = (string)0x6;
  local_25f = 0x656e;
  local_230 = 8;
  uVar36 = 0x72656761;
  local_1ff[0] = s_GetEventListManager_038c2c00[0];
  local_1ff[1] = s_GetEventListManager_038c2c00[1];
  local_1ff[2] = s_GetEventListManager_038c2c00[2];
  local_1ff[3] = s_GetEventListManager_038c2c00[3];
  local_1ff[4] = s_GetEventListManager_038c2c00[4];
  local_1ff[5] = s_GetEventListManager_038c2c00[5];
  local_1ff[6] = s_GetEventListManager_038c2c00[6];
  cStack_1f8 = s_GetEventListManager_038c2c00[7];
  acStack_1f7[0] = s_GetEventListManager_038c2c00[8];
  acStack_1f7[1] = s_GetEventListManager_038c2c00[9];
  acStack_1f7[2] = s_GetEventListManager_038c2c00[10];
  acStack_1f7[3] = s_GetEventListManager_038c2c00[0xb];
  acStack_1f7[4] = s_GetEventListManager_038c2c00[0xc];
  acStack_1f7[5] = s_GetEventListManager_038c2c00[0xd];
  acStack_1f7[6] = s_GetEventListManager_038c2c00[0xe];
  local_25d = 0x77;
  local_25c = 0;
  local_254 = 0;
  local_238 = 0xffffffff;
  local_22b = 0;
  uStack_224 = 0;
  local_208 = 0xffffffff;
  local_1e0 = &LAB_015b06cc;
  local_1d8 = 0xffffffff;
  local_1f0 = 0x72656761;
  puStack_1e8 = &LAB_015b0684;
  local_250 = 0;
  local_248 = &LAB_015b0564;
  local_22f = 0x63675f5f;
  local_220 = 0;
  puStack_218 = &LAB_015b05f4;
  local_200 = 0x26;
  local_1d0 = 0x26;
  local_1cf[0] = s_GetQuestListManager_0394eb2a[0];
  local_1cf[1] = s_GetQuestListManager_0394eb2a[1];
  local_1cf[2] = s_GetQuestListManager_0394eb2a[2];
  local_1cf[3] = s_GetQuestListManager_0394eb2a[3];
  local_1cf[4] = s_GetQuestListManager_0394eb2a[4];
  local_1cf[5] = s_GetQuestListManager_0394eb2a[5];
  local_1cf[6] = s_GetQuestListManager_0394eb2a[6];
  local_1a8 = 0xffffffff;
  local_1a0 = 0x28;
  cStack_1c8 = s_GetQuestListManager_0394eb2a[7];
  acStack_1c7[0] = s_GetQuestListManager_0394eb2a[8];
  acStack_1c7[1] = s_GetQuestListManager_0394eb2a[9];
  acStack_1c7[2] = s_GetQuestListManager_0394eb2a[10];
  acStack_1c7[3] = s_GetQuestListManager_0394eb2a[0xb];
  acStack_1c7[4] = s_GetQuestListManager_0394eb2a[0xc];
  acStack_1c7[5] = s_GetQuestListManager_0394eb2a[0xd];
  acStack_1c7[6] = s_GetQuestListManager_0394eb2a[0xe];
  local_1c0 = 0x72656761;
  acStack_197[0] = s_GetEventProgressWork_038ea779[8];
  acStack_197[1] = s_GetEventProgressWork_038ea779[9];
  acStack_197[2] = s_GetEventProgressWork_038ea779[10];
  acStack_197[3] = s_GetEventProgressWork_038ea779[0xb];
  acStack_197[4] = s_GetEventProgressWork_038ea779[0xc];
  acStack_197[5] = s_GetEventProgressWork_038ea779[0xd];
  acStack_197[6] = s_GetEventProgressWork_038ea779[0xe];
  local_1b8 = &LAB_015b0714;
  puStack_1b0 = &LAB_015b075c;
  acStack_19f[0] = s_GetEventProgressWork_038ea779[0];
  acStack_19f[1] = s_GetEventProgressWork_038ea779[1];
  acStack_19f[2] = s_GetEventProgressWork_038ea779[2];
  acStack_19f[3] = s_GetEventProgressWork_038ea779[3];
  acStack_19f[4] = s_GetEventProgressWork_038ea779[4];
  acStack_19f[5] = s_GetEventProgressWork_038ea779[5];
  acStack_19f[6] = s_GetEventProgressWork_038ea779[6];
  local_198 = s_GetEventProgressWork_038ea779[7];
  local_178 = 0xffffffff;
  local_190 = 0x6b726f5773;
  puStack_188 = &LAB_015b07a4;
  local_180 = &LAB_015b07ec;
  local_170 = 0x22;
  acStack_167[0] = s_GetNpcTalkManager_0399b733[8];
  acStack_167[1] = s_GetNpcTalkManager_0399b733[9];
  acStack_167[2] = s_GetNpcTalkManager_0399b733[10];
  acStack_167[3] = s_GetNpcTalkManager_0399b733[0xb];
  acStack_167[4] = s_GetNpcTalkManager_0399b733[0xc];
  acStack_167[5] = s_GetNpcTalkManager_0399b733[0xd];
  acStack_167[6] = s_GetNpcTalkManager_0399b733[0xe];
  acStack_16f[0] = s_GetNpcTalkManager_0399b733[0];
  acStack_16f[1] = s_GetNpcTalkManager_0399b733[1];
  acStack_16f[2] = s_GetNpcTalkManager_0399b733[2];
  acStack_16f[3] = s_GetNpcTalkManager_0399b733[3];
  acStack_16f[4] = s_GetNpcTalkManager_0399b733[4];
  acStack_16f[5] = s_GetNpcTalkManager_0399b733[5];
  acStack_16f[6] = s_GetNpcTalkManager_0399b733[6];
  local_168 = s_GetNpcTalkManager_0399b733[7];
  local_148 = 0xffffffff;
  local_160 = 0x7265;
  puStack_158 = &LAB_015b0834;
  local_150 = &LAB_015b087c;
  plVar25 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x20,8);
  local_130[0x17] = 'a';
  local_130[0x18] = 'g';
  local_130[0x19] = 'e';
  local_130[0x1a] = 'r';
  psVar34 = &local_260;
  local_130[0x1b] = '\0';
  uVar31 = s_GetEventItemOverflowManager_03988af4._8_8_;
  *(undefined8 *)local_130 = s_GetEventItemOverflowManager_03988af4._0_8_;
  uVar8 = s_GetEventItemOverflowManager_03988af4._16_8_;
  *(undefined8 *)(local_130 + 8) = uVar31;
  *(undefined8 *)(local_130 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x1b;
  local_118 = 0xffffffff;
  local_128 = &LAB_015b08c4;
  puStack_120 = &LAB_015b090c;
  plVar25 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar25 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,0x20,8);
  local_100[0x17] = 'a';
  local_100[0x18] = 'g';
  local_100[0x19] = 'e';
  local_100[0x1a] = 'r';
  local_100[0x1b] = '\0';
  uVar31 = s_GetEventPokePassShowManager_038ea78e._8_8_;
  *(undefined8 *)local_100 = s_GetEventPokePassShowManager_038ea78e._0_8_;
  uVar8 = s_GetEventPokePassShowManager_038ea78e._16_8_;
  *(undefined8 *)(local_100 + 8) = uVar31;
  *(undefined8 *)(local_100 + 0x10) = uVar8;
  local_110 = 0x21;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_108 = 0x1b;
  local_f8 = &LAB_015b0954;
  puStack_f0 = &LAB_015b099c;
  local_e0 = 0x28;
  local_e8 = 0xffffffff;
  plVar1 = plVar19 + 3;
  local_df[0] = s_GetEventRanchManager_03a737a8[0];
  local_df[1] = s_GetEventRanchManager_03a737a8[1];
  local_df[2] = s_GetEventRanchManager_03a737a8[2];
  local_df[3] = s_GetEventRanchManager_03a737a8[3];
  local_df[4] = s_GetEventRanchManager_03a737a8[4];
  local_df[5] = s_GetEventRanchManager_03a737a8[5];
  local_df[6] = s_GetEventRanchManager_03a737a8[6];
  cStack_d8 = s_GetEventRanchManager_03a737a8[7];
  acStack_d7[0] = s_GetEventRanchManager_03a737a8[8];
  acStack_d7[1] = s_GetEventRanchManager_03a737a8[9];
  acStack_d7[2] = s_GetEventRanchManager_03a737a8[10];
  acStack_d7[3] = s_GetEventRanchManager_03a737a8[0xb];
  acStack_d7[4] = s_GetEventRanchManager_03a737a8[0xc];
  acStack_d7[5] = s_GetEventRanchManager_03a737a8[0xd];
  acStack_d7[6] = s_GetEventRanchManager_03a737a8[0xe];
  local_d0 = 0x726567616e;
  local_c8 = &LAB_015b09e4;
  puStack_c0 = &LAB_015b0a2c;
  local_b0 = 0x2a;
  local_b8 = 0xffffffff;
  local_af[0] = s_GetEventGinkgoManager_03909bb7[0];
  local_af[1] = s_GetEventGinkgoManager_03909bb7[1];
  local_af[2] = s_GetEventGinkgoManager_03909bb7[2];
  local_af[3] = s_GetEventGinkgoManager_03909bb7[3];
  local_af[4] = s_GetEventGinkgoManager_03909bb7[4];
  local_af[5] = s_GetEventGinkgoManager_03909bb7[5];
  local_af[6] = s_GetEventGinkgoManager_03909bb7[6];
  cStack_a8 = s_GetEventGinkgoManager_03909bb7[7];
  acStack_a7[0] = s_GetEventGinkgoManager_03909bb7[8];
  acStack_a7[1] = s_GetEventGinkgoManager_03909bb7[9];
  acStack_a7[2] = s_GetEventGinkgoManager_03909bb7[10];
  acStack_a7[3] = s_GetEventGinkgoManager_03909bb7[0xb];
  acStack_a7[4] = s_GetEventGinkgoManager_03909bb7[0xc];
  acStack_a7[5] = s_GetEventGinkgoManager_03909bb7[0xd];
  acStack_a7[6] = s_GetEventGinkgoManager_03909bb7[0xe];
  local_a0 = 0x726567616e61;
  local_98 = &LAB_015b0a74;
  local_88 = 0xffffffff;
  local_90 = &LAB_015b0abc;
  do {
    uVar20 = *(ulong *)(psVar34 + 8);
    psVar3 = *(string **)(psVar34 + 0x10);
    if (((byte)*psVar34 & 1) == 0) {
      psVar3 = psVar34 + 1;
      uVar20 = (ulong)((byte)*psVar34 >> 1);
    }
    uVar20 = FUN_008e8ed4(local_80,psVar3,uVar20);
    uVar30 = plVar19[2];
    if (uVar30 != 0) {
      uVar36 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
      uVar36 = (uVar36 & 0x3333333333333333) + (uVar36 >> 2 & 0x3333333333333333);
      uVar23 = (uVar36 + (uVar36 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar36 = uVar30 - 1 & uVar20;
      }
      else {
        uVar36 = uVar20;
        if (uVar30 <= uVar20) {
          uVar36 = 0;
          if (uVar30 != 0) {
            uVar36 = uVar20 / uVar30;
          }
          uVar36 = uVar20 - uVar36 * uVar30;
        }
      }
      plVar25 = *(long **)(*plVar32 + uVar36 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        psVar3 = psVar34 + 1;
        sVar22 = (ulong)((byte)*psVar34 >> 1);
        if (((byte)*psVar34 & 1) != 0) {
          psVar3 = *(string **)(psVar34 + 0x10);
          sVar22 = *(size_t *)(psVar34 + 8);
        }
        if (uVar23 < 2) {
          if (sVar22 == 0) {
            do {
              if (plVar25[1] != uVar20 && (plVar25[1] & uVar30 - 1) != uVar36) break;
              uVar23 = (ulong)(*(byte *)(plVar25 + 2) >> 1);
              if ((*(byte *)(plVar25 + 2) & 1) != 0) {
                uVar23 = plVar25[3];
              }
              if (uVar23 == 0) goto LAB_015aeaa4;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              if (plVar25[1] != uVar20 && (plVar25[1] & uVar30 - 1) != uVar36) break;
              bVar4 = *(byte *)(plVar25 + 2);
              uVar23 = (ulong)(bVar4 >> 1);
              sVar2 = uVar23;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar25[3];
              }
              if (sVar2 == sVar22) {
                if ((bVar4 & 1) == 0) {
                  psVar27 = (string *)((long)plVar25 + 0x11);
                  psVar29 = psVar3;
                  while (*psVar27 == *psVar29) {
                    uVar23 = uVar23 - 1;
                    psVar27 = psVar27 + 1;
                    psVar29 = psVar29 + 1;
                    if (uVar23 == 0) goto LAB_015aeaa4;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar25[4],psVar3,sVar22);
                  if (iVar9 == 0) goto LAB_015aeaa4;
                }
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
        else if (sVar22 == 0) {
          do {
            uVar23 = plVar25[1];
            if (uVar23 != uVar20) {
              if (uVar30 <= uVar23) {
                uVar5 = 0;
                if (uVar30 != 0) {
                  uVar5 = uVar23 / uVar30;
                }
                uVar23 = uVar23 - uVar5 * uVar30;
              }
              if (uVar23 != uVar36) break;
            }
            uVar23 = (ulong)(*(byte *)(plVar25 + 2) >> 1);
            if ((*(byte *)(plVar25 + 2) & 1) != 0) {
              uVar23 = plVar25[3];
            }
            if (uVar23 == 0) goto LAB_015aeaa4;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar25[1];
            if (uVar23 != uVar20) {
              if (uVar30 <= uVar23) {
                uVar5 = 0;
                if (uVar30 != 0) {
                  uVar5 = uVar23 / uVar30;
                }
                uVar23 = uVar23 - uVar5 * uVar30;
              }
              if (uVar23 != uVar36) break;
            }
            bVar4 = *(byte *)(plVar25 + 2);
            uVar23 = (ulong)(bVar4 >> 1);
            sVar2 = uVar23;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar25[3];
            }
            if (sVar2 == sVar22) {
              if ((bVar4 & 1) == 0) {
                psVar27 = (string *)((long)plVar25 + 0x11);
                psVar29 = psVar3;
                while (*psVar27 == *psVar29) {
                  uVar23 = uVar23 - 1;
                  psVar27 = psVar27 + 1;
                  psVar29 = psVar29 + 1;
                  if (uVar23 == 0) goto LAB_015aeaa4;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar25[4],psVar3,sVar22);
                if (iVar9 == 0) goto LAB_015aeaa4;
              }
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    plVar25 = DAT_043f1798;
    plVar24 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar24 = plVar25;
    }
    plVar25 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x40,8);
    std::string::string((string *)(plVar25 + 2),psVar34);
    lVar26 = *(long *)(psVar34 + 0x18);
    lVar28 = *(long *)(psVar34 + 0x28);
    plVar25[6] = *(long *)(psVar34 + 0x20);
    plVar25[7] = lVar28;
    plVar25[5] = lVar26;
    *plVar25 = 0;
    plVar25[1] = uVar20;
    if ((uVar30 == 0) || (*(float *)(plVar19 + 5) * (float)uVar30 < (float)(plVar19[4] + 1))) {
      uVar36 = (ulong)(uVar30 < 3 || (uVar30 & uVar30 - 1) != 0) | uVar30 << 1;
      uVar30 = (ulong)((float)(plVar19[4] + 1) / *(float *)(plVar19 + 5));
      if (uVar30 <= uVar36) {
        uVar30 = uVar36;
      }
      FUN_008e9ae4(plVar32,uVar30);
      uVar30 = plVar19[2];
      if ((uVar30 & uVar30 - 1) == 0) {
        uVar36 = uVar30 - 1 & uVar20;
      }
      else if (uVar20 < uVar30) {
        uVar36 = uVar20;
      }
      else {
        uVar36 = 0;
        if (uVar30 != 0) {
          uVar36 = uVar20 / uVar30;
        }
        uVar36 = uVar20 - uVar36 * uVar30;
      }
    }
    lVar26 = *plVar32;
    plVar24 = *(long **)(lVar26 + uVar36 * 8);
    if (plVar24 == (long *)0x0) {
      *plVar25 = *plVar1;
      *plVar1 = (long)plVar25;
      *(long **)(lVar26 + uVar36 * 8) = plVar1;
      if (*plVar25 != 0) {
        uVar20 = *(ulong *)(*plVar25 + 8);
        if ((uVar30 & uVar30 - 1) == 0) {
          uVar20 = uVar20 & uVar30 - 1;
        }
        else if (uVar30 <= uVar20) {
          uVar23 = 0;
          if (uVar30 != 0) {
            uVar23 = uVar20 / uVar30;
          }
          uVar20 = uVar20 - uVar23 * uVar30;
        }
        plVar24 = (long *)(*plVar32 + uVar20 * 8);
        goto LAB_015aea94;
      }
    }
    else {
      *plVar25 = *plVar24;
LAB_015aea94:
      *plVar24 = (long)plVar25;
    }
    plVar19[4] = plVar19[4] + 1;
LAB_015aeaa4:
    psVar34 = psVar34 + 0x30;
  } while (psVar34 != (string *)local_80);
  lVar28 = FUN_008cca50();
  lVar26 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar32,lVar28 + lVar26);
    if (lVar21 != 0) {
      FUN_008f2aec(local_80,plVar32,lVar21);
      lVar21 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar21 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar35 = *(long *)(lVar21 + 0x20), lVar35 != 0)) {
          plVar25 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar25 = plVar1;
          }
          uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
          if ((uVar36 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar25,lVar35,0,8);
              goto LAB_015aed18;
            }
          }
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar35,0,8);
        }
LAB_015aed18:
        plVar1 = DAT_043f1798;
        plVar25 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar25 = plVar1;
        }
        uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
        if ((uVar36 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar25,lVar21,0,8);
            goto LAB_015aecd0;
          }
        }
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar21,0,8);
      }
    }
LAB_015aecd0:
    lVar26 = lVar26 + 0x18;
  } while (lVar26 != 0x300);
  pcVar33 = (char *)plVar19[0xc];
  sVar22 = strlen(pcVar33);
  iVar9 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0xd];
  sVar22 = strlen(pcVar33);
  iVar10 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0xf];
  sVar22 = strlen(pcVar33);
  iVar11 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x10];
  sVar22 = strlen(pcVar33);
  iVar12 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x11];
  sVar22 = strlen(pcVar33);
  iVar13 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x12];
  sVar22 = strlen(pcVar33);
  iVar14 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x13];
  sVar22 = strlen(pcVar33);
  iVar15 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x14];
  sVar22 = strlen(pcVar33);
  iVar16 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x15];
  sVar22 = strlen(pcVar33);
  iVar17 = FUN_008f2c60(sVar22,pcVar33);
  pcVar33 = (char *)plVar19[0x16];
  sVar22 = strlen(pcVar33);
  iVar18 = FUN_008f2c60(sVar22,pcVar33);
  lVar28 = local_a0;
  *(bool *)(plVar19 + 0xb) =
       ((((((((iVar10 != 0 || iVar9 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
          iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0;
  plVar1 = DAT_043f1798;
  lVar26 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_d0;
        goto joined_r0x015aef50;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_d0;
  }
joined_r0x015aef50:
  pcVar33 = local_100;
  local_d0 = lVar26;
  if (((local_e0 & 1) != 0) && (lVar26 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar26,0,8);
        plVar1 = DAT_043f1798;
        pcVar33 = local_100;
        goto joined_r0x015af7e0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
    plVar1 = DAT_043f1798;
    pcVar33 = local_100;
  }
joined_r0x015af7e0:
  pcVar7 = local_130;
  local_100 = pcVar33;
  if (((local_110 & 1) != 0) && (pcVar33 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar33,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_130;
        goto joined_r0x015af0b8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar33,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_130;
  }
joined_r0x015af0b8:
  lVar26 = local_160;
  local_130 = pcVar7;
  if (((local_140 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_160;
        goto joined_r0x015af820;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_160;
  }
joined_r0x015af820:
  lVar28 = local_190;
  local_160 = lVar26;
  if (((local_170 & 1) != 0) && (lVar26 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_190;
        goto joined_r0x015af220;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_190;
  }
joined_r0x015af220:
  lVar26 = local_1c0;
  local_190 = lVar28;
  if (((local_1a0 & 1) != 0) && (lVar28 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_1c0;
        goto joined_r0x015af860;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_1c0;
  }
joined_r0x015af860:
  lVar28 = local_1f0;
  local_1c0 = lVar26;
  if (((local_1d0 & 1) != 0) && (lVar26 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_1f0;
        goto joined_r0x015af388;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_1f0;
  }
joined_r0x015af388:
  lVar26 = local_220;
  local_1f0 = lVar28;
  if (((local_200 & 1) != 0) && (lVar28 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_220;
        goto joined_r0x015af8a0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_220;
  }
joined_r0x015af8a0:
  lVar28 = local_250;
  local_220 = lVar26;
  if (((local_230 & 1) != 0) && (lVar26 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_250;
        goto joined_r0x015af4f0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_250;
  }
joined_r0x015af4f0:
  DAT_043f1798 = plVar1;
  local_250 = lVar28;
  if ((((byte)local_260 & 1) != 0) && (lVar28 != 0)) {
    plVar25 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar28,0,8);
        goto LAB_015af5a0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar28,0,8);
  }
LAB_015af5a0:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar19)(plVar19,uVar31);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  uVar36 = (ulong)&local_278 | 1;
  if ((local_278 & 1) != 0) {
    uVar36 = CONCAT26(uStack_262,CONCAT15(uStack_263,CONCAT41(uStack_267,local_268)));
  }
  FUN_001522a0(uVar31,uVar36);
  plVar1 = DAT_043f1798;
  if (((local_278 & 1) != 0) &&
     (lVar26 = CONCAT26(uStack_262,CONCAT15(uStack_263,CONCAT41(uStack_267,local_268))), lVar26 != 0
     )) {
    plVar25 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    uVar36 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
  }
  return;
}


