/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00de4c20; name: FUN_00de4c20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00de4c20(long param_1)

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
  long *plVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  string *psVar25;
  ulong uVar26;
  undefined8 uVar27;
  char *pcVar28;
  string *psVar29;
  long *plVar30;
  long lVar31;
  ulong unaff_x28;
  byte local_218;
  undefined7 uStack_217;
  char cStack_210;
  undefined2 local_20f;
  undefined5 uStack_20d;
  ulong local_208;
  string local_200;
  char local_1ff [6];
  char acStack_1f9 [2];
  char acStack_1f7 [6];
  undefined1 local_1f1;
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
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
  char local_19f [6];
  char acStack_199 [2];
  char acStack_197 [6];
  undefined1 local_191;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [8];
  undefined4 local_167;
  undefined1 local_163;
  undefined2 local_162;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [8];
  undefined4 local_137;
  undefined1 local_133;
  undefined2 local_132;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [8];
  undefined4 local_107;
  undefined1 local_103;
  undefined2 local_102;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar14 = DAT_043f1798;
  uStack_20d = 0;
  psVar29 = &local_200;
  local_218 = 0x12;
  uStack_217 = s_EventWork_038e8718._0_7_;
  cStack_210 = s_EventWork_038e8718[7];
  local_208 = 0;
  local_20f = 0x6b;
  lVar5 = tpidr_el0;
  plVar18 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar18 = plVar14;
  }
  plVar14 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0xf0,8);
  plVar14[2] = 0;
  plVar18 = plVar14 + 1;
  *plVar18 = 0;
  plVar30 = plVar14 + 3;
  *plVar30 = 0;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[6] = (long)FUN_00de61c0;
  plVar14[7] = (long)FUN_00de6270;
  *plVar14 = (long)&PTR_FUN_041ee5d0;
  plVar14[0x12] = (long)&DAT_038ca815;
  plVar14[0x13] = (long)&DAT_0392da3c;
  plVar14[4] = 0;
  plVar14[10] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  plVar14[0x1d] = 0;
  *(undefined1 *)(plVar14 + 0x1c) = 0;
  plVar14[0x16] = (long)FUN_00de6400;
  plVar14[0x17] = (long)&LAB_00de66e0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[0xc] = (long)"CheckEventFlag";
  plVar14[0xd] = (long)"SetEventFlag";
  plVar14[0xe] = (long)"ResetEventFlag";
  plVar14[0xf] = (long)"SetEventWork";
  plVar14[0x10] = (long)"AddEventWork";
  plVar14[0x11] = (long)"GetEventWork";
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x18] = (long)&LAB_00de69c0;
  plVar14[0x19] = (long)&LAB_00de69d0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  local_1cf[0] = s_SetEventFlag_039bdaa1[0];
  local_1cf[1] = s_SetEventFlag_039bdaa1[1];
  local_1cf[2] = s_SetEventFlag_039bdaa1[2];
  local_1cf[3] = s_SetEventFlag_039bdaa1[3];
  local_1cf[4] = s_SetEventFlag_039bdaa1[4];
  local_1cf[5] = s_SetEventFlag_039bdaa1[5];
  local_1cf[6] = s_SetEventFlag_039bdaa1[6];
  local_1cf[7] = s_SetEventFlag_039bdaa1[7];
  local_1ff[0] = s_CheckEventFlag_038d385e[0];
  local_1ff[1] = s_CheckEventFlag_038d385e[1];
  local_1ff[2] = s_CheckEventFlag_038d385e[2];
  local_1ff[3] = s_CheckEventFlag_038d385e[3];
  local_1ff[4] = s_CheckEventFlag_038d385e[4];
  local_1ff[5] = s_CheckEventFlag_038d385e[5];
  acStack_1f9[0] = s_CheckEventFlag_038d385e[6];
  acStack_1f9[1] = s_CheckEventFlag_038d385e[7];
  acStack_1f7[0] = s_CheckEventFlag_038d385e[8];
  acStack_1f7[1] = s_CheckEventFlag_038d385e[9];
  acStack_1f7[2] = s_CheckEventFlag_038d385e[10];
  acStack_1f7[3] = s_CheckEventFlag_038d385e[0xb];
  acStack_1f7[4] = s_CheckEventFlag_038d385e[0xc];
  acStack_1f7[5] = s_CheckEventFlag_038d385e[0xd];
  local_1e0 = &LAB_00de6a1c;
  local_1c7 = 0x67616c46;
  local_200 = (string)0x1c;
  local_1f1 = 0;
  local_1d0 = 0x18;
  local_1c3 = 0;
  local_1c2 = 0;
  local_1b0 = &LAB_00de6aac;
  local_1a0 = 0x1c;
  local_191 = 0;
  local_170 = 0x18;
  local_1c0 = 0;
  puStack_1b8 = &LAB_00de6a64;
  local_19f[0] = s_ResetEventFlag_0395636f[0];
  local_19f[1] = s_ResetEventFlag_0395636f[1];
  local_19f[2] = s_ResetEventFlag_0395636f[2];
  local_19f[3] = s_ResetEventFlag_0395636f[3];
  local_19f[4] = s_ResetEventFlag_0395636f[4];
  local_19f[5] = s_ResetEventFlag_0395636f[5];
  acStack_199[0] = s_ResetEventFlag_0395636f[6];
  acStack_199[1] = s_ResetEventFlag_0395636f[7];
  acStack_197[0] = s_ResetEventFlag_0395636f[8];
  acStack_197[1] = s_ResetEventFlag_0395636f[9];
  acStack_197[2] = s_ResetEventFlag_0395636f[10];
  acStack_197[3] = s_ResetEventFlag_0395636f[0xb];
  acStack_197[4] = s_ResetEventFlag_0395636f[0xc];
  acStack_197[5] = s_ResetEventFlag_0395636f[0xd];
  local_180 = &LAB_00de6b3c;
  local_1f0 = 0;
  local_1e8 = &LAB_00de69d4;
  local_1d8 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_178 = 0xffffffff;
  local_190 = 0;
  puStack_188 = &LAB_00de6af4;
  local_16f[0] = s_SetEventWork_03a735c4[0];
  local_16f[1] = s_SetEventWork_03a735c4[1];
  local_16f[2] = s_SetEventWork_03a735c4[2];
  local_16f[3] = s_SetEventWork_03a735c4[3];
  local_16f[4] = s_SetEventWork_03a735c4[4];
  local_16f[5] = s_SetEventWork_03a735c4[5];
  local_16f[6] = s_SetEventWork_03a735c4[6];
  local_16f[7] = s_SetEventWork_03a735c4[7];
  local_167 = 0x6b726f57;
  local_163 = 0;
  local_162 = 0;
  local_150 = &LAB_00de6bcc;
  local_148 = 0xffffffff;
  local_140 = 0x18;
  local_160 = 0;
  puStack_158 = &LAB_00de6b84;
  local_13f[0] = s_AddEventWork_03a73618[0];
  local_13f[1] = s_AddEventWork_03a73618[1];
  local_13f[2] = s_AddEventWork_03a73618[2];
  local_13f[3] = s_AddEventWork_03a73618[3];
  local_13f[4] = s_AddEventWork_03a73618[4];
  local_13f[5] = s_AddEventWork_03a73618[5];
  local_13f[6] = s_AddEventWork_03a73618[6];
  local_13f[7] = s_AddEventWork_03a73618[7];
  local_137 = 0x6b726f57;
  local_133 = 0;
  local_132 = 0;
  local_120 = &LAB_00de6c5c;
  local_118 = 0xffffffff;
  local_110 = 0x18;
  local_130 = 0;
  puStack_128 = &LAB_00de6c14;
  local_10f[0] = s_GetEventWork_03960352[0];
  local_10f[1] = s_GetEventWork_03960352[1];
  local_10f[2] = s_GetEventWork_03960352[2];
  local_10f[3] = s_GetEventWork_03960352[3];
  local_10f[4] = s_GetEventWork_03960352[4];
  local_10f[5] = s_GetEventWork_03960352[5];
  local_10f[6] = s_GetEventWork_03960352[6];
  local_10f[7] = s_GetEventWork_03960352[7];
  local_107 = 0x6b726f57;
  local_f0 = &LAB_00de6cec;
  local_103 = 0;
  local_102 = 0;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00de6ca4;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_00de6d7c;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_d0 = 0;
  puStack_c8 = &LAB_00de6d34;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_00de6e0c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00de6dc4;
  do {
    uVar15 = *(ulong *)(psVar29 + 8);
    psVar2 = *(string **)(psVar29 + 0x10);
    if (((byte)*psVar29 & 1) == 0) {
      psVar2 = psVar29 + 1;
      uVar15 = (ulong)((byte)*psVar29 >> 1);
    }
    uVar15 = FUN_008e8ed4(local_80,psVar2,uVar15);
    uVar26 = plVar14[2];
    if (uVar26 != 0) {
      uVar19 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        unaff_x28 = uVar26 - 1 & uVar15;
      }
      else {
        unaff_x28 = uVar15;
        if (uVar26 <= uVar15) {
          uVar4 = 0;
          if (uVar26 != 0) {
            uVar4 = uVar15 / uVar26;
          }
          unaff_x28 = uVar15 - uVar4 * uVar26;
        }
      }
      plVar21 = *(long **)(*plVar18 + unaff_x28 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        psVar2 = psVar29 + 1;
        sVar17 = (ulong)((byte)*psVar29 >> 1);
        if (((byte)*psVar29 & 1) != 0) {
          psVar2 = *(string **)(psVar29 + 0x10);
          sVar17 = *(size_t *)(psVar29 + 8);
        }
        if (uVar19 < 2) {
          if (sVar17 == 0) {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar26 - 1) != unaff_x28) break;
              uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
              if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                uVar19 = plVar21[3];
              }
              if (uVar19 == 0) goto LAB_00de50f8;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar26 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar21 + 2);
              uVar19 = (ulong)(bVar3 >> 1);
              sVar1 = uVar19;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar21[3];
              }
              if (sVar1 == sVar17) {
                if ((bVar3 & 1) == 0) {
                  psVar23 = (string *)((long)plVar21 + 0x11);
                  psVar25 = psVar2;
                  while (*psVar23 == *psVar25) {
                    uVar19 = uVar19 - 1;
                    psVar23 = psVar23 + 1;
                    psVar25 = psVar25 + 1;
                    if (uVar19 == 0) goto LAB_00de50f8;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar21[4],psVar2,sVar17);
                  if (iVar6 == 0) goto LAB_00de50f8;
                }
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
        else if (sVar17 == 0) {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar26 <= uVar19) {
                uVar4 = 0;
                if (uVar26 != 0) {
                  uVar4 = uVar19 / uVar26;
                }
                uVar19 = uVar19 - uVar4 * uVar26;
              }
              if (uVar19 != unaff_x28) break;
            }
            uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
            if ((*(byte *)(plVar21 + 2) & 1) != 0) {
              uVar19 = plVar21[3];
            }
            if (uVar19 == 0) goto LAB_00de50f8;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar26 <= uVar19) {
                uVar4 = 0;
                if (uVar26 != 0) {
                  uVar4 = uVar19 / uVar26;
                }
                uVar19 = uVar19 - uVar4 * uVar26;
              }
              if (uVar19 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar21 + 2);
            uVar19 = (ulong)(bVar3 >> 1);
            sVar1 = uVar19;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar21[3];
            }
            if (sVar1 == sVar17) {
              if ((bVar3 & 1) == 0) {
                psVar23 = (string *)((long)plVar21 + 0x11);
                psVar25 = psVar2;
                while (*psVar23 == *psVar25) {
                  uVar19 = uVar19 - 1;
                  psVar23 = psVar23 + 1;
                  psVar25 = psVar25 + 1;
                  if (uVar19 == 0) goto LAB_00de50f8;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar21[4],psVar2,sVar17);
                if (iVar6 == 0) goto LAB_00de50f8;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    plVar21 = DAT_043f1798;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar21;
    }
    plVar21 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
    std::string::string((string *)(plVar21 + 2),psVar29);
    lVar22 = *(long *)(psVar29 + 0x18);
    lVar24 = *(long *)(psVar29 + 0x28);
    plVar21[6] = *(long *)(psVar29 + 0x20);
    plVar21[7] = lVar24;
    plVar21[5] = lVar22;
    *plVar21 = 0;
    plVar21[1] = uVar15;
    if ((uVar26 == 0) || (*(float *)(plVar14 + 5) * (float)uVar26 < (float)(plVar14[4] + 1))) {
      uVar26 = (ulong)(uVar26 < 3 || (uVar26 & uVar26 - 1) != 0) | uVar26 << 1;
      uVar19 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar19 <= uVar26) {
        uVar19 = uVar26;
      }
      FUN_008e9ae4(plVar18,uVar19);
      uVar26 = plVar14[2];
      if ((uVar26 & uVar26 - 1) == 0) {
        unaff_x28 = uVar26 - 1 & uVar15;
      }
      else if (uVar15 < uVar26) {
        unaff_x28 = uVar15;
      }
      else {
        uVar19 = 0;
        if (uVar26 != 0) {
          uVar19 = uVar15 / uVar26;
        }
        unaff_x28 = uVar15 - uVar19 * uVar26;
      }
    }
    lVar22 = *plVar18;
    plVar20 = *(long **)(lVar22 + unaff_x28 * 8);
    if (plVar20 == (long *)0x0) {
      *plVar21 = *plVar30;
      *plVar30 = (long)plVar21;
      *(long **)(lVar22 + unaff_x28 * 8) = plVar30;
      if (*plVar21 != 0) {
        uVar15 = *(ulong *)(*plVar21 + 8);
        if ((uVar26 & uVar26 - 1) == 0) {
          uVar15 = uVar15 & uVar26 - 1;
        }
        else if (uVar26 <= uVar15) {
          uVar19 = 0;
          if (uVar26 != 0) {
            uVar19 = uVar15 / uVar26;
          }
          uVar15 = uVar15 - uVar19 * uVar26;
        }
        plVar20 = (long *)(*plVar18 + uVar15 * 8);
        goto LAB_00de50e8;
      }
    }
    else {
      *plVar21 = *plVar20;
LAB_00de50e8:
      *plVar20 = (long)plVar21;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_00de50f8:
    psVar29 = psVar29 + 0x30;
  } while (psVar29 != (string *)local_80);
  lVar24 = FUN_008cca50();
  lVar22 = 0;
  do {
    lVar16 = FUN_008e8c90(plVar18,lVar24 + lVar22);
    if (lVar16 != 0) {
      FUN_008f2aec(local_80,plVar18,lVar16);
      lVar16 = local_80[0];
      plVar30 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar16 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar16 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar16 + 0x20), lVar31 != 0)) {
          plVar21 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar21 = plVar30;
          }
          uVar15 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar31,0,8);
              goto LAB_00de540c;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar31,0,8);
        }
LAB_00de540c:
        plVar30 = DAT_043f1798;
        plVar21 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar21 = plVar30;
        }
        uVar15 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar16,0,8);
            goto LAB_00de53c4;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar16,0,8);
      }
    }
LAB_00de53c4:
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0x300);
  pcVar28 = (char *)plVar14[0xc];
  sVar17 = strlen(pcVar28);
  iVar6 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xd];
  sVar17 = strlen(pcVar28);
  iVar7 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xe];
  sVar17 = strlen(pcVar28);
  iVar8 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xf];
  sVar17 = strlen(pcVar28);
  iVar9 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x10];
  sVar17 = strlen(pcVar28);
  iVar10 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x11];
  sVar17 = strlen(pcVar28);
  iVar11 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x12];
  sVar17 = strlen(pcVar28);
  iVar12 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x13];
  sVar17 = strlen(pcVar28);
  iVar13 = FUN_008f2c60(sVar17,pcVar28);
  lVar24 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       ((((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0)
       || iVar12 != 0) || iVar13 != 0;
  plVar18 = DAT_043f1798;
  lVar22 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar24,0,8);
        plVar18 = DAT_043f1798;
        lVar22 = local_d0;
        goto joined_r0x00de5614;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar24,0,8);
    plVar18 = DAT_043f1798;
    lVar22 = local_d0;
  }
joined_r0x00de5614:
  lVar24 = local_100;
  local_d0 = lVar22;
  if (((local_e0 & 1) != 0) && (lVar22 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar22,0,8);
        plVar18 = DAT_043f1798;
        lVar24 = local_100;
        goto joined_r0x00de5d3c;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar22,0,8);
    plVar18 = DAT_043f1798;
    lVar24 = local_100;
  }
joined_r0x00de5d3c:
  lVar22 = local_130;
  local_100 = lVar24;
  if (((local_110 & 1) != 0) && (lVar24 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar24,0,8);
        plVar18 = DAT_043f1798;
        lVar22 = local_130;
        goto joined_r0x00de577c;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar24,0,8);
    plVar18 = DAT_043f1798;
    lVar22 = local_130;
  }
joined_r0x00de577c:
  lVar24 = local_160;
  local_130 = lVar22;
  if (((local_140 & 1) != 0) && (lVar22 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar22,0,8);
        plVar18 = DAT_043f1798;
        lVar24 = local_160;
        goto joined_r0x00de5d7c;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar22,0,8);
    plVar18 = DAT_043f1798;
    lVar24 = local_160;
  }
joined_r0x00de5d7c:
  lVar22 = local_190;
  local_160 = lVar24;
  if (((local_170 & 1) != 0) && (lVar24 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar24,0,8);
        plVar18 = DAT_043f1798;
        lVar22 = local_190;
        goto joined_r0x00de58e4;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar24,0,8);
    plVar18 = DAT_043f1798;
    lVar22 = local_190;
  }
joined_r0x00de58e4:
  lVar24 = local_1c0;
  local_190 = lVar22;
  if (((local_1a0 & 1) != 0) && (lVar22 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar22,0,8);
        plVar18 = DAT_043f1798;
        lVar24 = local_1c0;
        goto joined_r0x00de5dbc;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar22,0,8);
    plVar18 = DAT_043f1798;
    lVar24 = local_1c0;
  }
joined_r0x00de5dbc:
  lVar22 = local_1f0;
  local_1c0 = lVar24;
  if (((local_1d0 & 1) != 0) && (lVar24 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar24,0,8);
        plVar18 = DAT_043f1798;
        lVar22 = local_1f0;
        goto joined_r0x00de5a4c;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar24,0,8);
    plVar18 = DAT_043f1798;
    lVar22 = local_1f0;
  }
joined_r0x00de5a4c:
  DAT_043f1798 = plVar18;
  local_1f0 = lVar22;
  if ((((byte)local_200 & 1) != 0) && (lVar22 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar22,0,8);
        goto LAB_00de5afc;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar22,0,8);
  }
LAB_00de5afc:
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar27);
  (**(code **)*plVar14)(plVar14,uVar27);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar15 = (ulong)&local_218 | 1;
  if ((local_218 & 1) != 0) {
    uVar15 = local_208;
  }
  FUN_001522a0(uVar27,uVar15);
  uVar15 = local_208;
  plVar14 = DAT_043f1798;
  if (((local_218 & 1) != 0) && (local_208 != 0)) {
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar14;
    }
    uVar26 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar26 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar18,uVar15,0,8);
        return;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,uVar15,0,8);
  }
  return;
}


