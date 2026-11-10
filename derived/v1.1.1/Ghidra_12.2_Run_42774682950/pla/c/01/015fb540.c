/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015fb540; name: FUN_015fb540
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_015fb540(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
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
  char *pcVar17;
  long lVar18;
  size_t sVar19;
  ulong uVar20;
  char *pcVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  string *psVar26;
  long lVar27;
  string *psVar28;
  char *pcVar29;
  undefined8 uVar30;
  long *plVar31;
  string *psVar32;
  long lVar33;
  char *pcVar34;
  byte local_248;
  undefined7 uStack_247;
  char cStack_240;
  undefined7 uStack_23f;
  char local_238;
  undefined4 uStack_237;
  undefined1 uStack_233;
  undefined2 uStack_232;
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
  undefined1 local_1c7;
  undefined4 local_1c6;
  undefined2 local_1c2;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
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
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  char acStack_df [5];
  char local_da [3];
  char acStack_d7 [5];
  undefined2 local_d2;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  uStack_232 = 0;
  uStack_237 = 0x72656761;
  local_248 = 0x28;
  uStack_23f = s_RealTimeEventManager_0389bd9a._8_7_;
  local_238 = s_RealTimeEventManager_0389bd9a[0xf];
  uStack_247 = s_RealTimeEventManager_0389bd9a._0_7_;
  cStack_240 = s_RealTimeEventManager_0389bd9a[7];
  uStack_233 = 0;
  lVar5 = tpidr_el0;
  plVar23 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  plVar16 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x170,8);
  plVar16[4] = 0;
  plVar16[2] = 0;
  plVar16[3] = 0;
  plVar31 = plVar16 + 1;
  *plVar31 = 0;
  plVar16[6] = (long)FUN_015fcd40;
  plVar16[7] = (long)FUN_015fcdf0;
  *(undefined4 *)(plVar16 + 5) = 0x3f800000;
  *plVar16 = (long)&PTR_FUN_0421e650;
  plVar16[0xc] = (long)&DAT_038ca815;
  plVar16[0xd] = (long)&DAT_0392da3c;
  plVar16[0xf] = (long)"IsWarning";
  plVar16[0x10] = (long)&LAB_01781154;
  plVar16[0x13] = (long)FUN_0178115c;
  plVar16[0x14] = 0;
  plVar16[0x15] = (long)"SetRealTimeEventInfo";
  plVar16[0x16] = (long)&LAB_017811e8;
  plVar16[0x19] = (long)FUN_01781abc;
  plVar16[0x1a] = 0;
  plVar16[0x1f] = (long)FUN_0178038c;
  plVar16[0x20] = 0;
  pcVar34 = "SetRealTimeEventWarningInfo";
  plVar16[0x21] = (long)"SetEnablePlayerRun";
  plVar16[0x22] = (long)&LAB_01783c28;
  plVar16[0x1b] = (long)"GetPointPosition";
  plVar16[0x1c] = (long)FUN_01782528;
  plVar16[0x25] = 0;
  plVar16[0x26] = (long)FUN_015fcf80;
  plVar16[0x27] = (long)&LAB_015fd260;
  plVar16[0x28] = (long)&LAB_015fd540;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  *(undefined1 *)(plVar16 + 0xb) = 0;
  *(undefined1 *)(plVar16 + 0xe) = 0;
  plVar16[0x2d] = 0;
  plVar16[0x2b] = 0;
  *(undefined1 *)(plVar16 + 0x2c) = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = (long)"SetCanPlayerControl";
  plVar16[0x17] = 0;
  plVar16[0x18] = (long)"SetRealTimeEventWarningInfo";
  plVar16[0x1d] = 0;
  plVar16[0x1e] = (long)"IsWaitCatchUp";
  plVar16[0x23] = 0;
  plVar16[0x24] = 0;
  plVar16[0x29] = (long)&LAB_015fd550;
  plVar16[0x2a] = 0;
  plVar1 = DAT_043f1798;
  local_230 = (string)0x6;
  local_22f = 0x656e;
  local_22d = 0x77;
  local_210 = &LAB_015fd59c;
  local_1cf[0] = s_IsWarning_03945960[0];
  local_1cf[1] = s_IsWarning_03945960[1];
  local_1cf[2] = s_IsWarning_03945960[2];
  local_1cf[3] = s_IsWarning_03945960[3];
  local_1cf[4] = s_IsWarning_03945960[4];
  local_1cf[5] = s_IsWarning_03945960[5];
  local_1cf[6] = s_IsWarning_03945960[6];
  local_1cf[7] = s_IsWarning_03945960[7];
  local_22c = 0;
  local_224 = 0;
  local_208 = 0xffffffff;
  local_200 = 8;
  local_1fb = 0;
  uStack_1f4 = 0;
  local_1e0 = &LAB_015fd62c;
  local_1d8 = 0xffffffff;
  local_1c2 = 0;
  local_220 = 0;
  local_218 = &LAB_015fd554;
  local_1ff = 0x63675f5f;
  local_1f0 = 0;
  puStack_1e8 = &LAB_015fd5e4;
  local_1d0 = 0x12;
  local_1c7 = 0x67;
  local_1c6 = 0;
  local_1b0 = &LAB_015fd6bc;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_015fd674;
  local_1a0 = 0x26;
  local_19f[0] = s_SetCanPlayerControl_03914512[0];
  local_19f[1] = s_SetCanPlayerControl_03914512[1];
  local_19f[2] = s_SetCanPlayerControl_03914512[2];
  local_19f[3] = s_SetCanPlayerControl_03914512[3];
  local_19f[4] = s_SetCanPlayerControl_03914512[4];
  local_19f[5] = s_SetCanPlayerControl_03914512[5];
  local_19f[6] = s_SetCanPlayerControl_03914512[6];
  local_178 = 0xffffffff;
  local_170 = 0x28;
  cStack_198 = s_SetCanPlayerControl_03914512[7];
  acStack_197[0] = s_SetCanPlayerControl_03914512[8];
  acStack_197[1] = s_SetCanPlayerControl_03914512[9];
  acStack_197[2] = s_SetCanPlayerControl_03914512[10];
  acStack_197[3] = s_SetCanPlayerControl_03914512[0xb];
  acStack_197[4] = s_SetCanPlayerControl_03914512[0xc];
  acStack_197[5] = s_SetCanPlayerControl_03914512[0xd];
  acStack_197[6] = s_SetCanPlayerControl_03914512[0xe];
  local_190 = 0x6c6f7274;
  acStack_167[0] = s_SetRealTimeEventInfo_03992594[8];
  acStack_167[1] = s_SetRealTimeEventInfo_03992594[9];
  acStack_167[2] = s_SetRealTimeEventInfo_03992594[10];
  acStack_167[3] = s_SetRealTimeEventInfo_03992594[0xb];
  acStack_167[4] = s_SetRealTimeEventInfo_03992594[0xc];
  acStack_167[5] = s_SetRealTimeEventInfo_03992594[0xd];
  acStack_167[6] = s_SetRealTimeEventInfo_03992594[0xe];
  local_188 = &LAB_015fd704;
  puStack_180 = &LAB_015fd74c;
  acStack_16f[0] = s_SetRealTimeEventInfo_03992594[0];
  acStack_16f[1] = s_SetRealTimeEventInfo_03992594[1];
  acStack_16f[2] = s_SetRealTimeEventInfo_03992594[2];
  acStack_16f[3] = s_SetRealTimeEventInfo_03992594[3];
  acStack_16f[4] = s_SetRealTimeEventInfo_03992594[4];
  acStack_16f[5] = s_SetRealTimeEventInfo_03992594[5];
  acStack_16f[6] = s_SetRealTimeEventInfo_03992594[6];
  local_168 = s_SetRealTimeEventInfo_03992594[7];
  local_148 = 0xffffffff;
  local_160 = 0x6f666e4974;
  puStack_158 = &LAB_015fd794;
  local_150 = &LAB_015fd7dc;
  plVar23 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
  local_130[0x17] = 'I';
  local_130[0x18] = 'n';
  local_130[0x19] = 'f';
  local_130[0x1a] = 'o';
  local_130[0x1b] = '\0';
  uVar30 = s_SetRealTimeEventWarningInfo_039a4d94._8_8_;
  *(undefined8 *)local_130 = s_SetRealTimeEventWarningInfo_039a4d94._0_8_;
  uVar6 = s_SetRealTimeEventWarningInfo_039a4d94._16_8_;
  *(undefined8 *)(local_130 + 8) = uVar30;
  *(undefined8 *)(local_130 + 0x10) = uVar6;
  local_140 = 0x21;
  local_13b = 0;
  local_13f = 0;
  local_110 = 0x20;
  local_138 = 0x1b;
  local_128 = &LAB_015fd824;
  puStack_120 = &LAB_015fd86c;
  psVar32 = &local_230;
  local_139 = 0;
  local_118 = 0xffffffff;
  local_10f[0] = s_GetPointPosition_03a7371c[0];
  local_10f[1] = s_GetPointPosition_03a7371c[1];
  local_10f[2] = s_GetPointPosition_03a7371c[2];
  local_10f[3] = s_GetPointPosition_03a7371c[3];
  local_10f[4] = s_GetPointPosition_03a7371c[4];
  local_10f[5] = s_GetPointPosition_03a7371c[5];
  local_10f[6] = s_GetPointPosition_03a7371c[6];
  local_f8 = &LAB_015fd8b4;
  puStack_f0 = &LAB_015fd8fc;
  plVar1 = plVar16 + 3;
  local_e8 = 0xffffffff;
  cStack_108 = s_GetPointPosition_03a7371c[7];
  acStack_107[0] = s_GetPointPosition_03a7371c[8];
  acStack_107[1] = s_GetPointPosition_03a7371c[9];
  acStack_107[2] = s_GetPointPosition_03a7371c[10];
  acStack_107[3] = s_GetPointPosition_03a7371c[0xb];
  acStack_107[4] = s_GetPointPosition_03a7371c[0xc];
  acStack_107[5] = s_GetPointPosition_03a7371c[0xd];
  acStack_107[6] = s_GetPointPosition_03a7371c[0xe];
  local_100 = 0x6e;
  local_e0 = 0x1a;
  acStack_d7[0] = s_IsWaitCatchUp_03a734e0[8];
  acStack_d7[1] = s_IsWaitCatchUp_03a734e0[9];
  acStack_d7[2] = s_IsWaitCatchUp_03a734e0[10];
  acStack_d7[3] = s_IsWaitCatchUp_03a734e0[0xb];
  acStack_d7[4] = s_IsWaitCatchUp_03a734e0[0xc];
  acStack_df[0] = s_IsWaitCatchUp_03a734e0[0];
  acStack_df[1] = s_IsWaitCatchUp_03a734e0[1];
  acStack_df[2] = s_IsWaitCatchUp_03a734e0[2];
  acStack_df[3] = s_IsWaitCatchUp_03a734e0[3];
  acStack_df[4] = s_IsWaitCatchUp_03a734e0[4];
  local_da[0] = s_IsWaitCatchUp_03a734e0[5];
  local_da[1] = s_IsWaitCatchUp_03a734e0[6];
  local_da[2] = s_IsWaitCatchUp_03a734e0[7];
  local_c0 = &LAB_015fd98c;
  local_d2 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_015fd944;
  local_b8 = 0xffffffff;
  local_b0 = 0x24;
  local_af[0] = s_SetEnablePlayerRun_039a4db0[0];
  local_af[1] = s_SetEnablePlayerRun_039a4db0[1];
  local_af[2] = s_SetEnablePlayerRun_039a4db0[2];
  local_af[3] = s_SetEnablePlayerRun_039a4db0[3];
  local_af[4] = s_SetEnablePlayerRun_039a4db0[4];
  local_af[5] = s_SetEnablePlayerRun_039a4db0[5];
  local_af[6] = s_SetEnablePlayerRun_039a4db0[6];
  local_88 = 0xffffffff;
  cStack_a8 = s_SetEnablePlayerRun_039a4db0[7];
  acStack_a7[0] = s_SetEnablePlayerRun_039a4db0[8];
  acStack_a7[1] = s_SetEnablePlayerRun_039a4db0[9];
  acStack_a7[2] = s_SetEnablePlayerRun_039a4db0[10];
  acStack_a7[3] = s_SetEnablePlayerRun_039a4db0[0xb];
  acStack_a7[4] = s_SetEnablePlayerRun_039a4db0[0xc];
  acStack_a7[5] = s_SetEnablePlayerRun_039a4db0[0xd];
  acStack_a7[6] = s_SetEnablePlayerRun_039a4db0[0xe];
  local_a0 = 0x6e7552;
  local_98 = &LAB_015fd9d4;
  puStack_90 = &LAB_015fda1c;
  do {
    uVar20 = *(ulong *)(psVar32 + 8);
    psVar3 = *(string **)(psVar32 + 0x10);
    if (((byte)*psVar32 & 1) == 0) {
      psVar3 = psVar32 + 1;
      uVar20 = (ulong)((byte)*psVar32 >> 1);
    }
    pcVar17 = (char *)FUN_008e8ed4(local_80,psVar3,uVar20);
    pcVar29 = (char *)plVar16[2];
    if (pcVar29 != (char *)0x0) {
      uVar20 = (long)pcVar29 - ((ulong)pcVar29 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        pcVar34 = (char *)((ulong)(pcVar29 + -1) & (ulong)pcVar17);
      }
      else {
        pcVar34 = pcVar17;
        if (pcVar29 <= pcVar17) {
          uVar25 = 0;
          if (pcVar29 != (char *)0x0) {
            uVar25 = (ulong)pcVar17 / (ulong)pcVar29;
          }
          pcVar34 = pcVar17 + -(uVar25 * (long)pcVar29);
        }
      }
      plVar23 = *(long **)(*plVar31 + (long)pcVar34 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        psVar3 = psVar32 + 1;
        sVar19 = (ulong)((byte)*psVar32 >> 1);
        if (((byte)*psVar32 & 1) != 0) {
          psVar3 = *(string **)(psVar32 + 0x10);
          sVar19 = *(size_t *)(psVar32 + 8);
        }
        if (uVar20 < 2) {
          if (sVar19 == 0) {
            do {
              if ((char *)plVar23[1] != pcVar17 &&
                  (char *)((ulong)plVar23[1] & (ulong)(pcVar29 + -1)) != pcVar34) break;
              uVar20 = (ulong)(*(byte *)(plVar23 + 2) >> 1);
              if ((*(byte *)(plVar23 + 2) & 1) != 0) {
                uVar20 = plVar23[3];
              }
              if (uVar20 == 0) goto LAB_015fbc18;
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar23[1] != pcVar17 &&
                  (char *)((ulong)plVar23[1] & (ulong)(pcVar29 + -1)) != pcVar34) break;
              bVar4 = *(byte *)(plVar23 + 2);
              uVar20 = (ulong)(bVar4 >> 1);
              sVar2 = uVar20;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar23[3];
              }
              if (sVar2 == sVar19) {
                if ((bVar4 & 1) == 0) {
                  psVar26 = (string *)((long)plVar23 + 0x11);
                  psVar28 = psVar3;
                  while (*psVar26 == *psVar28) {
                    uVar20 = uVar20 - 1;
                    psVar26 = psVar26 + 1;
                    psVar28 = psVar28 + 1;
                    if (uVar20 == 0) goto LAB_015fbc18;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar23[4],psVar3,sVar19);
                  if (iVar7 == 0) goto LAB_015fbc18;
                }
              }
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
        }
        else if (sVar19 == 0) {
          do {
            pcVar21 = (char *)plVar23[1];
            if (pcVar21 != pcVar17) {
              if (pcVar29 <= pcVar21) {
                uVar20 = 0;
                if (pcVar29 != (char *)0x0) {
                  uVar20 = (ulong)pcVar21 / (ulong)pcVar29;
                }
                pcVar21 = pcVar21 + -(uVar20 * (long)pcVar29);
              }
              if (pcVar21 != pcVar34) break;
            }
            uVar20 = (ulong)(*(byte *)(plVar23 + 2) >> 1);
            if ((*(byte *)(plVar23 + 2) & 1) != 0) {
              uVar20 = plVar23[3];
            }
            if (uVar20 == 0) goto LAB_015fbc18;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            pcVar21 = (char *)plVar23[1];
            if (pcVar21 != pcVar17) {
              if (pcVar29 <= pcVar21) {
                uVar20 = 0;
                if (pcVar29 != (char *)0x0) {
                  uVar20 = (ulong)pcVar21 / (ulong)pcVar29;
                }
                pcVar21 = pcVar21 + -(uVar20 * (long)pcVar29);
              }
              if (pcVar21 != pcVar34) break;
            }
            bVar4 = *(byte *)(plVar23 + 2);
            uVar20 = (ulong)(bVar4 >> 1);
            sVar2 = uVar20;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar23[3];
            }
            if (sVar2 == sVar19) {
              if ((bVar4 & 1) == 0) {
                psVar26 = (string *)((long)plVar23 + 0x11);
                psVar28 = psVar3;
                while (*psVar26 == *psVar28) {
                  uVar20 = uVar20 - 1;
                  psVar26 = psVar26 + 1;
                  psVar28 = psVar28 + 1;
                  if (uVar20 == 0) goto LAB_015fbc18;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar23[4],psVar3,sVar19);
                if (iVar7 == 0) goto LAB_015fbc18;
              }
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    plVar23 = DAT_043f1798;
    plVar22 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar22 = plVar23;
    }
    plVar23 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x40,8);
    std::string::string((string *)(plVar23 + 2),psVar32);
    lVar24 = *(long *)(psVar32 + 0x18);
    lVar27 = *(long *)(psVar32 + 0x28);
    plVar23[6] = *(long *)(psVar32 + 0x20);
    plVar23[7] = lVar27;
    plVar23[5] = lVar24;
    *plVar23 = 0;
    plVar23[1] = (long)pcVar17;
    if ((pcVar29 == (char *)0x0) ||
       (*(float *)(plVar16 + 5) * (float)pcVar29 < (float)(plVar16[4] + 1))) {
      uVar20 = (ulong)(pcVar29 < (char *)0x3 || ((ulong)pcVar29 & (ulong)(pcVar29 + -1)) != 0) |
               (long)pcVar29 << 1;
      uVar25 = (ulong)((float)(plVar16[4] + 1) / *(float *)(plVar16 + 5));
      if (uVar25 <= uVar20) {
        uVar25 = uVar20;
      }
      FUN_008e9ae4(plVar31,uVar25);
      pcVar29 = (char *)plVar16[2];
      if (((ulong)pcVar29 & (ulong)(pcVar29 + -1)) == 0) {
        pcVar34 = (char *)((ulong)(pcVar29 + -1) & (ulong)pcVar17);
      }
      else if (pcVar17 < pcVar29) {
        pcVar34 = pcVar17;
      }
      else {
        uVar20 = 0;
        if (pcVar29 != (char *)0x0) {
          uVar20 = (ulong)pcVar17 / (ulong)pcVar29;
        }
        pcVar34 = pcVar17 + -(uVar20 * (long)pcVar29);
      }
    }
    lVar24 = *plVar31;
    plVar22 = *(long **)(lVar24 + (long)pcVar34 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar23 = *plVar1;
      *plVar1 = (long)plVar23;
      *(long **)(lVar24 + (long)pcVar34 * 8) = plVar1;
      if (*plVar23 != 0) {
        pcVar17 = *(char **)(*plVar23 + 8);
        if (((ulong)pcVar29 & (ulong)(pcVar29 + -1)) == 0) {
          pcVar17 = (char *)((ulong)pcVar17 & (ulong)(pcVar29 + -1));
        }
        else if (pcVar29 <= pcVar17) {
          uVar20 = 0;
          if (pcVar29 != (char *)0x0) {
            uVar20 = (ulong)pcVar17 / (ulong)pcVar29;
          }
          pcVar17 = pcVar17 + -(uVar20 * (long)pcVar29);
        }
        plVar22 = (long *)(*plVar31 + (long)pcVar17 * 8);
        goto LAB_015fbc08;
      }
    }
    else {
      *plVar23 = *plVar22;
LAB_015fbc08:
      *plVar22 = (long)plVar23;
    }
    plVar16[4] = plVar16[4] + 1;
LAB_015fbc18:
    psVar32 = psVar32 + 0x30;
  } while (psVar32 != (string *)local_80);
  lVar27 = FUN_008cca50();
  lVar24 = 0;
  do {
    lVar18 = FUN_008e8c90(plVar31,lVar27 + lVar24);
    if (lVar18 != 0) {
      FUN_008f2aec(local_80,plVar31,lVar18);
      lVar18 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar18 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar18 + 0x10) & 1) != 0)) &&
           (lVar33 = *(long *)(lVar18 + 0x20), lVar33 != 0)) {
          plVar23 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar23 = plVar1;
          }
          uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
          if ((uVar20 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar23,lVar33,0,8);
              goto LAB_015fbe48;
            }
          }
          (**(code **)(*plVar23 + 0x18))(plVar23,lVar33,0,8);
        }
LAB_015fbe48:
        plVar1 = DAT_043f1798;
        plVar23 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar23 = plVar1;
        }
        uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
        if ((uVar20 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar23,lVar18,0,8);
            goto LAB_015fbe00;
          }
        }
        (**(code **)(*plVar23 + 0x18))(plVar23,lVar18,0,8);
      }
    }
LAB_015fbe00:
    lVar24 = lVar24 + 0x18;
  } while (lVar24 != 0x300);
  pcVar34 = (char *)plVar16[0xc];
  sVar19 = strlen(pcVar34);
  iVar7 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0xd];
  sVar19 = strlen(pcVar34);
  iVar8 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0xf];
  sVar19 = strlen(pcVar34);
  iVar9 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0x12];
  sVar19 = strlen(pcVar34);
  iVar10 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0x15];
  sVar19 = strlen(pcVar34);
  iVar11 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0x18];
  sVar19 = strlen(pcVar34);
  iVar12 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0x1b];
  sVar19 = strlen(pcVar34);
  iVar13 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0x1e];
  sVar19 = strlen(pcVar34);
  iVar14 = FUN_008f2c60(sVar19,pcVar34);
  pcVar34 = (char *)plVar16[0x21];
  sVar19 = strlen(pcVar34);
  iVar15 = FUN_008f2c60(sVar19,pcVar34);
  lVar27 = local_a0;
  *(bool *)(plVar16 + 0xb) =
       (((((((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) ||
         iVar12 != 0) || iVar13 != 0) || iVar14 != 0) || iVar15 != 0;
  plVar1 = DAT_043f1798;
  lVar24 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_d0;
        goto joined_r0x015fc068;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_d0;
  }
joined_r0x015fc068:
  lVar27 = local_100;
  local_d0 = lVar24;
  if (((local_e0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_100;
        goto joined_r0x015fc844;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_100;
  }
joined_r0x015fc844:
  pcVar34 = local_130;
  local_100 = lVar27;
  if (((local_110 & 1) != 0) && (lVar27 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar27,0,8);
        plVar1 = DAT_043f1798;
        pcVar34 = local_130;
        goto joined_r0x015fc1d0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar27,0,8);
    plVar1 = DAT_043f1798;
    pcVar34 = local_130;
  }
joined_r0x015fc1d0:
  lVar24 = local_160;
  local_130 = pcVar34;
  if (((local_140 & 1) != 0) && (pcVar34 != (char *)0x0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,pcVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_160;
        goto joined_r0x015fc884;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pcVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_160;
  }
joined_r0x015fc884:
  lVar27 = local_190;
  local_160 = lVar24;
  if (((local_170 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_190;
        goto joined_r0x015fc338;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_190;
  }
joined_r0x015fc338:
  lVar24 = local_1c0;
  local_190 = lVar27;
  if (((local_1a0 & 1) != 0) && (lVar27 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_1c0;
        goto joined_r0x015fc8c4;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_1c0;
  }
joined_r0x015fc8c4:
  lVar27 = local_1f0;
  local_1c0 = lVar24;
  if (((local_1d0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_1f0;
        goto joined_r0x015fc4a0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_1f0;
  }
joined_r0x015fc4a0:
  lVar24 = local_220;
  local_1f0 = lVar27;
  if (((local_200 & 1) != 0) && (lVar27 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_220;
        goto joined_r0x015fc904;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_220;
  }
joined_r0x015fc904:
  DAT_043f1798 = plVar1;
  local_220 = lVar24;
  if ((((byte)local_230 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        goto LAB_015fc604;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
  }
LAB_015fc604:
  uVar30 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar30);
  (**(code **)*plVar16)(plVar16,uVar30);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  uVar20 = (ulong)&local_248 | 1;
  if ((local_248 & 1) != 0) {
    uVar20 = CONCAT26(uStack_232,CONCAT15(uStack_233,CONCAT41(uStack_237,local_238)));
  }
  FUN_001522a0(uVar30,uVar20);
  plVar1 = DAT_043f1798;
  if (((local_248 & 1) != 0) &&
     (lVar24 = CONCAT26(uStack_232,CONCAT15(uStack_233,CONCAT41(uStack_237,local_238))), lVar24 != 0
     )) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar23 = plVar1;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        return;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
  }
  return;
}


