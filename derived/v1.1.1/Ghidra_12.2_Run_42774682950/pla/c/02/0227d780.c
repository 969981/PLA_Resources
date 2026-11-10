/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0227d780; name: FUN_0227d780
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0227d780(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  size_t sVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  string *psVar24;
  long lVar25;
  string *psVar26;
  ulong uVar27;
  undefined8 uVar28;
  long *plVar29;
  char *pcVar30;
  string *psVar31;
  ulong uVar32;
  long lVar33;
  byte local_218;
  undefined7 uStack_217;
  char cStack_210;
  undefined2 local_20f;
  undefined5 uStack_20d;
  ulong local_208;
  string local_200;
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
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
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
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  char acStack_13f [7];
  char local_138;
  char acStack_137 [7];
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
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
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
  
  plVar1 = DAT_043f1798;
  uStack_20d = 0;
  local_218 = 0x12;
  uStack_217 = s_FieldProc_0396eaa2._0_7_;
  cStack_210 = s_FieldProc_0396eaa2[7];
  local_208 = 0;
  local_20f = 99;
  lVar6 = tpidr_el0;
  plVar22 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar22 = plVar1;
  }
  plVar16 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x150,8);
  plVar16[4] = 0;
  plVar29 = plVar16 + 1;
  *plVar29 = 0;
  *(undefined4 *)(plVar16 + 5) = 0x3f800000;
  plVar16[10] = 0;
  plVar16[6] = (long)FUN_0227ee00;
  plVar16[7] = (long)FUN_0227eeb0;
  *plVar16 = (long)&PTR_FUN_0425b948;
  plVar16[0xc] = (long)"RequestAreaChange";
  plVar16[0xd] = (long)&LAB_01e5a958;
  plVar16[0x10] = (long)&LAB_0227eddc;
  plVar16[0x11] = 0;
  plVar16[0x12] = (long)"IsEndInitializeCurrentArea";
  plVar16[0x13] = (long)FUN_01e5b238;
  plVar16[0x16] = (long)"GetLoadAreaCount";
  plVar16[0x17] = 0x1e5bbec;
  plVar16[0x1a] = (long)FUN_01e5b6f0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = (long)"IsFieldTaskEmpty";
  plVar16[0x1d] = (long)FUN_01e560b4;
  plVar16[0x18] = 0;
  plVar16[0x19] = (long)"GetTaskCount";
  plVar16[0x1e] = 0;
  plVar16[0x1f] = (long)&DAT_0392da3c;
  *(undefined1 *)(plVar16 + 0xb) = 0;
  plVar16[0x29] = 0;
  *(undefined1 *)(plVar16 + 0x28) = 0;
  plVar16[0x22] = (long)FUN_0227f040;
  plVar16[0x23] = (long)&LAB_0227f320;
  plVar16[2] = 0;
  plVar16[3] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = (long)"IsEndInitializeField";
  plVar16[0x14] = 0;
  plVar16[0x15] = (long)"UnloadCurrentArea";
  plVar16[0x20] = 0;
  plVar16[0x21] = 0;
  plVar16[0x24] = (long)&LAB_0227f600;
  plVar16[0x25] = (long)&LAB_0227f610;
  plVar16[0x26] = 0;
  plVar16[0x27] = 0;
  plVar1 = DAT_043f1798;
  local_1ff[0] = s_RequestAreaChange_03934886[0];
  local_1ff[1] = s_RequestAreaChange_03934886[1];
  local_1ff[2] = s_RequestAreaChange_03934886[2];
  local_1ff[3] = s_RequestAreaChange_03934886[3];
  local_1ff[4] = s_RequestAreaChange_03934886[4];
  local_1ff[5] = s_RequestAreaChange_03934886[5];
  local_1ff[6] = s_RequestAreaChange_03934886[6];
  cStack_1f8 = s_RequestAreaChange_03934886[7];
  acStack_1f7[0] = s_RequestAreaChange_03934886[8];
  acStack_1f7[1] = s_RequestAreaChange_03934886[9];
  acStack_1f7[2] = s_RequestAreaChange_03934886[10];
  acStack_1f7[3] = s_RequestAreaChange_03934886[0xb];
  acStack_1f7[4] = s_RequestAreaChange_03934886[0xc];
  acStack_1f7[5] = s_RequestAreaChange_03934886[0xd];
  acStack_1f7[6] = s_RequestAreaChange_03934886[0xe];
  local_1f0 = 0x6567;
  local_200 = (string)0x22;
  local_1d8 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_1e8 = &LAB_0227f614;
  puStack_1e0 = &LAB_0227f65c;
  local_1d0 = 0x28;
  local_1cf[0] = s_IsEndInitializeField_039c060c[0];
  local_1cf[1] = s_IsEndInitializeField_039c060c[1];
  local_1cf[2] = s_IsEndInitializeField_039c060c[2];
  local_1cf[3] = s_IsEndInitializeField_039c060c[3];
  local_1cf[4] = s_IsEndInitializeField_039c060c[4];
  local_1cf[5] = s_IsEndInitializeField_039c060c[5];
  local_1cf[6] = s_IsEndInitializeField_039c060c[6];
  cStack_1c8 = s_IsEndInitializeField_039c060c[7];
  acStack_1c7[0] = s_IsEndInitializeField_039c060c[8];
  acStack_1c7[1] = s_IsEndInitializeField_039c060c[9];
  acStack_1c7[2] = s_IsEndInitializeField_039c060c[10];
  acStack_1c7[3] = s_IsEndInitializeField_039c060c[0xb];
  acStack_1c7[4] = s_IsEndInitializeField_039c060c[0xc];
  acStack_1c7[5] = s_IsEndInitializeField_039c060c[0xd];
  acStack_1c7[6] = s_IsEndInitializeField_039c060c[0xe];
  local_1c0 = 0x646c656946;
  puStack_1b8 = &LAB_0227f6a4;
  local_1b0 = &LAB_0227f6ec;
  plVar22 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar22 = plVar1;
  }
  uVar32 = 0x20;
  local_190 = (char *)(**(code **)(*plVar22 + 0x10))(plVar22,0x20,8);
  local_190[0x18] = 'e';
  local_190[0x19] = 'a';
  local_190[0x1a] = '\0';
  uVar28 = s_IsEndInitializeCurrentArea_038f685d._8_8_;
  *(undefined8 *)local_190 = s_IsEndInitializeCurrentArea_038f685d._0_8_;
  uVar7 = s_IsEndInitializeCurrentArea_038f685d._16_8_;
  *(undefined8 *)(local_190 + 8) = uVar28;
  *(undefined8 *)(local_190 + 0x10) = uVar7;
  local_198 = 0x1a;
  local_1a0 = 0x21;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_188 = &LAB_0227f734;
  puStack_180 = &LAB_0227f77c;
  local_178 = 0xffffffff;
  local_170 = 0x22;
  plVar1 = plVar16 + 3;
  local_16f[0] = s_UnloadCurrentArea_0392192d[0];
  local_16f[1] = s_UnloadCurrentArea_0392192d[1];
  local_16f[2] = s_UnloadCurrentArea_0392192d[2];
  local_16f[3] = s_UnloadCurrentArea_0392192d[3];
  local_16f[4] = s_UnloadCurrentArea_0392192d[4];
  local_16f[5] = s_UnloadCurrentArea_0392192d[5];
  local_16f[6] = s_UnloadCurrentArea_0392192d[6];
  cStack_168 = s_UnloadCurrentArea_0392192d[7];
  acStack_167[0] = s_UnloadCurrentArea_0392192d[8];
  acStack_167[1] = s_UnloadCurrentArea_0392192d[9];
  acStack_167[2] = s_UnloadCurrentArea_0392192d[10];
  acStack_167[3] = s_UnloadCurrentArea_0392192d[0xb];
  acStack_167[4] = s_UnloadCurrentArea_0392192d[0xc];
  acStack_167[5] = s_UnloadCurrentArea_0392192d[0xd];
  acStack_167[6] = s_UnloadCurrentArea_0392192d[0xe];
  local_160 = 0x6165;
  local_158 = &LAB_0227f7c4;
  puStack_150 = &LAB_0227f80c;
  local_148 = 0xffffffff;
  local_140 = 0x20;
  acStack_137[0] = s_GetLoadAreaCount_03a7369c[8];
  acStack_137[1] = s_GetLoadAreaCount_03a7369c[9];
  acStack_137[2] = s_GetLoadAreaCount_03a7369c[10];
  acStack_137[3] = s_GetLoadAreaCount_03a7369c[0xb];
  acStack_137[4] = s_GetLoadAreaCount_03a7369c[0xc];
  acStack_137[5] = s_GetLoadAreaCount_03a7369c[0xd];
  acStack_137[6] = s_GetLoadAreaCount_03a7369c[0xe];
  acStack_13f[0] = s_GetLoadAreaCount_03a7369c[0];
  acStack_13f[1] = s_GetLoadAreaCount_03a7369c[1];
  acStack_13f[2] = s_GetLoadAreaCount_03a7369c[2];
  acStack_13f[3] = s_GetLoadAreaCount_03a7369c[3];
  acStack_13f[4] = s_GetLoadAreaCount_03a7369c[4];
  acStack_13f[5] = s_GetLoadAreaCount_03a7369c[5];
  acStack_13f[6] = s_GetLoadAreaCount_03a7369c[6];
  local_138 = s_GetLoadAreaCount_03a7369c[7];
  local_130 = 0x74;
  puStack_128 = &LAB_0227f854;
  local_110 = 0x18;
  local_120 = &LAB_0227f89c;
  local_118 = 0xffffffff;
  local_107 = 0x746e756f;
  local_10f[0] = s_GetTaskCount_03a737e0[0];
  local_10f[1] = s_GetTaskCount_03a737e0[1];
  local_10f[2] = s_GetTaskCount_03a737e0[2];
  local_10f[3] = s_GetTaskCount_03a737e0[3];
  local_10f[4] = s_GetTaskCount_03a737e0[4];
  local_10f[5] = s_GetTaskCount_03a737e0[5];
  local_10f[6] = s_GetTaskCount_03a737e0[6];
  local_10f[7] = s_GetTaskCount_03a737e0[7];
  local_f0 = &LAB_0227f92c;
  psVar31 = &local_200;
  local_100 = 0;
  puStack_f8 = &LAB_0227f8e4;
  local_103 = 0;
  local_102 = 0;
  local_e8 = 0xffffffff;
  local_e0 = 0x20;
  local_df[0] = s_IsFieldTaskEmpty_038ebfb2[0];
  local_df[1] = s_IsFieldTaskEmpty_038ebfb2[1];
  local_df[2] = s_IsFieldTaskEmpty_038ebfb2[2];
  local_df[3] = s_IsFieldTaskEmpty_038ebfb2[3];
  local_df[4] = s_IsFieldTaskEmpty_038ebfb2[4];
  local_df[5] = s_IsFieldTaskEmpty_038ebfb2[5];
  local_df[6] = s_IsFieldTaskEmpty_038ebfb2[6];
  local_b8 = 0xffffffff;
  cStack_d8 = s_IsFieldTaskEmpty_038ebfb2[7];
  acStack_d7[0] = s_IsFieldTaskEmpty_038ebfb2[8];
  acStack_d7[1] = s_IsFieldTaskEmpty_038ebfb2[9];
  acStack_d7[2] = s_IsFieldTaskEmpty_038ebfb2[10];
  acStack_d7[3] = s_IsFieldTaskEmpty_038ebfb2[0xb];
  acStack_d7[4] = s_IsFieldTaskEmpty_038ebfb2[0xc];
  acStack_d7[5] = s_IsFieldTaskEmpty_038ebfb2[0xd];
  acStack_d7[6] = s_IsFieldTaskEmpty_038ebfb2[0xe];
  local_d0 = 0x79;
  local_c8 = &LAB_0227f974;
  puStack_c0 = &LAB_0227f9bc;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0227fa4c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0227fa04;
  do {
    uVar17 = *(ulong *)(psVar31 + 8);
    psVar3 = *(string **)(psVar31 + 0x10);
    if (((byte)*psVar31 & 1) == 0) {
      psVar3 = psVar31 + 1;
      uVar17 = (ulong)((byte)*psVar31 >> 1);
    }
    uVar17 = FUN_008e8ed4(local_80,psVar3,uVar17);
    uVar27 = plVar16[2];
    if (uVar27 != 0) {
      uVar32 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
      uVar20 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar32 = uVar27 - 1 & uVar17;
      }
      else {
        uVar32 = uVar17;
        if (uVar27 <= uVar17) {
          uVar32 = 0;
          if (uVar27 != 0) {
            uVar32 = uVar17 / uVar27;
          }
          uVar32 = uVar17 - uVar32 * uVar27;
        }
      }
      plVar22 = *(long **)(*plVar29 + uVar32 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        psVar3 = psVar31 + 1;
        sVar19 = (ulong)((byte)*psVar31 >> 1);
        if (((byte)*psVar31 & 1) != 0) {
          psVar3 = *(string **)(psVar31 + 0x10);
          sVar19 = *(size_t *)(psVar31 + 8);
        }
        if (uVar20 < 2) {
          if (sVar19 == 0) {
            do {
              if (plVar22[1] != uVar17 && (plVar22[1] & uVar27 - 1) != uVar32) break;
              uVar20 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
              if ((*(byte *)(plVar22 + 2) & 1) != 0) {
                uVar20 = plVar22[3];
              }
              if (uVar20 == 0) goto LAB_0227dd8c;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              if (plVar22[1] != uVar17 && (plVar22[1] & uVar27 - 1) != uVar32) break;
              bVar4 = *(byte *)(plVar22 + 2);
              uVar20 = (ulong)(bVar4 >> 1);
              sVar2 = uVar20;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar22[3];
              }
              if (sVar2 == sVar19) {
                if ((bVar4 & 1) == 0) {
                  psVar24 = (string *)((long)plVar22 + 0x11);
                  psVar26 = psVar3;
                  while (*psVar24 == *psVar26) {
                    uVar20 = uVar20 - 1;
                    psVar24 = psVar24 + 1;
                    psVar26 = psVar26 + 1;
                    if (uVar20 == 0) goto LAB_0227dd8c;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar22[4],psVar3,sVar19);
                  if (iVar8 == 0) goto LAB_0227dd8c;
                }
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
        else if (sVar19 == 0) {
          do {
            uVar20 = plVar22[1];
            if (uVar20 != uVar17) {
              if (uVar27 <= uVar20) {
                uVar5 = 0;
                if (uVar27 != 0) {
                  uVar5 = uVar20 / uVar27;
                }
                uVar20 = uVar20 - uVar5 * uVar27;
              }
              if (uVar20 != uVar32) break;
            }
            uVar20 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
            if ((*(byte *)(plVar22 + 2) & 1) != 0) {
              uVar20 = plVar22[3];
            }
            if (uVar20 == 0) goto LAB_0227dd8c;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar22[1];
            if (uVar20 != uVar17) {
              if (uVar27 <= uVar20) {
                uVar5 = 0;
                if (uVar27 != 0) {
                  uVar5 = uVar20 / uVar27;
                }
                uVar20 = uVar20 - uVar5 * uVar27;
              }
              if (uVar20 != uVar32) break;
            }
            bVar4 = *(byte *)(plVar22 + 2);
            uVar20 = (ulong)(bVar4 >> 1);
            sVar2 = uVar20;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar22[3];
            }
            if (sVar2 == sVar19) {
              if ((bVar4 & 1) == 0) {
                psVar24 = (string *)((long)plVar22 + 0x11);
                psVar26 = psVar3;
                while (*psVar24 == *psVar26) {
                  uVar20 = uVar20 - 1;
                  psVar24 = psVar24 + 1;
                  psVar26 = psVar26 + 1;
                  if (uVar20 == 0) goto LAB_0227dd8c;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar22[4],psVar3,sVar19);
                if (iVar8 == 0) goto LAB_0227dd8c;
              }
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    plVar22 = DAT_043f1798;
    plVar21 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar21 = plVar22;
    }
    plVar22 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
    std::string::string((string *)(plVar22 + 2),psVar31);
    lVar23 = *(long *)(psVar31 + 0x18);
    lVar25 = *(long *)(psVar31 + 0x28);
    plVar22[6] = *(long *)(psVar31 + 0x20);
    plVar22[7] = lVar25;
    plVar22[5] = lVar23;
    *plVar22 = 0;
    plVar22[1] = uVar17;
    if ((uVar27 == 0) || (*(float *)(plVar16 + 5) * (float)uVar27 < (float)(plVar16[4] + 1))) {
      uVar32 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
      uVar27 = (ulong)((float)(plVar16[4] + 1) / *(float *)(plVar16 + 5));
      if (uVar27 <= uVar32) {
        uVar27 = uVar32;
      }
      FUN_008e9ae4(plVar29,uVar27);
      uVar27 = plVar16[2];
      if ((uVar27 & uVar27 - 1) == 0) {
        uVar32 = uVar27 - 1 & uVar17;
      }
      else if (uVar17 < uVar27) {
        uVar32 = uVar17;
      }
      else {
        uVar32 = 0;
        if (uVar27 != 0) {
          uVar32 = uVar17 / uVar27;
        }
        uVar32 = uVar17 - uVar32 * uVar27;
      }
    }
    lVar23 = *plVar29;
    plVar21 = *(long **)(lVar23 + uVar32 * 8);
    if (plVar21 == (long *)0x0) {
      *plVar22 = *plVar1;
      *plVar1 = (long)plVar22;
      *(long **)(lVar23 + uVar32 * 8) = plVar1;
      if (*plVar22 != 0) {
        uVar17 = *(ulong *)(*plVar22 + 8);
        if ((uVar27 & uVar27 - 1) == 0) {
          uVar17 = uVar17 & uVar27 - 1;
        }
        else if (uVar27 <= uVar17) {
          uVar20 = 0;
          if (uVar27 != 0) {
            uVar20 = uVar17 / uVar27;
          }
          uVar17 = uVar17 - uVar20 * uVar27;
        }
        plVar21 = (long *)(*plVar29 + uVar17 * 8);
        goto LAB_0227dd7c;
      }
    }
    else {
      *plVar22 = *plVar21;
LAB_0227dd7c:
      *plVar21 = (long)plVar22;
    }
    plVar16[4] = plVar16[4] + 1;
LAB_0227dd8c:
    psVar31 = psVar31 + 0x30;
  } while (psVar31 != (string *)local_80);
  lVar25 = FUN_008cca50();
  lVar23 = 0;
  do {
    lVar18 = FUN_008e8c90(plVar29,lVar25 + lVar23);
    if (lVar18 != 0) {
      FUN_008f2aec(local_80,plVar29,lVar18);
      lVar18 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar18 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar18 + 0x10) & 1) != 0)) &&
           (lVar33 = *(long *)(lVar18 + 0x20), lVar33 != 0)) {
          plVar22 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar22 = plVar1;
          }
          uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar32 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar22,lVar33,0,8);
              goto LAB_0227e01c;
            }
          }
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar33,0,8);
        }
LAB_0227e01c:
        plVar1 = DAT_043f1798;
        plVar22 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar22 = plVar1;
        }
        uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
        if ((uVar32 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar22,lVar18,0,8);
            goto LAB_0227dfd4;
          }
        }
        (**(code **)(*plVar22 + 0x18))(plVar22,lVar18,0,8);
      }
    }
LAB_0227dfd4:
    lVar23 = lVar23 + 0x18;
  } while (lVar23 != 0x300);
  pcVar30 = (char *)plVar16[0xc];
  sVar19 = strlen(pcVar30);
  iVar8 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0xf];
  sVar19 = strlen(pcVar30);
  iVar9 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0x12];
  sVar19 = strlen(pcVar30);
  iVar10 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0x15];
  sVar19 = strlen(pcVar30);
  iVar11 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0x16];
  sVar19 = strlen(pcVar30);
  iVar12 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0x19];
  sVar19 = strlen(pcVar30);
  iVar13 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0x1c];
  sVar19 = strlen(pcVar30);
  iVar14 = FUN_008f2c60(sVar19,pcVar30);
  pcVar30 = (char *)plVar16[0x1f];
  sVar19 = strlen(pcVar30);
  iVar15 = FUN_008f2c60(sVar19,pcVar30);
  lVar25 = local_a0;
  *(bool *)(plVar16 + 0xb) =
       ((((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
        iVar13 != 0) || iVar14 != 0) || iVar15 != 0;
  plVar1 = DAT_043f1798;
  lVar23 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar23 = local_d0;
        goto joined_r0x0227e238;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar23 = local_d0;
  }
joined_r0x0227e238:
  lVar25 = local_100;
  local_d0 = lVar23;
  if (((local_e0 & 1) != 0) && (lVar23 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar23,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_100;
        goto joined_r0x0227e960;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar23,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_100;
  }
joined_r0x0227e960:
  lVar23 = local_130;
  local_100 = lVar25;
  if (((local_110 & 1) != 0) && (lVar25 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar23 = local_130;
        goto joined_r0x0227e3a0;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar23 = local_130;
  }
joined_r0x0227e3a0:
  lVar25 = local_160;
  local_130 = lVar23;
  if (((local_140 & 1) != 0) && (lVar23 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar23,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_160;
        goto joined_r0x0227e9a0;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar23,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_160;
  }
joined_r0x0227e9a0:
  pcVar30 = local_190;
  local_160 = lVar25;
  if (((local_170 & 1) != 0) && (lVar25 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar30 = local_190;
        goto joined_r0x0227e508;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar30 = local_190;
  }
joined_r0x0227e508:
  lVar23 = local_1c0;
  local_190 = pcVar30;
  if (((local_1a0 & 1) != 0) && (pcVar30 != (char *)0x0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,pcVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar23 = local_1c0;
        goto joined_r0x0227e9e0;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pcVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar23 = local_1c0;
  }
joined_r0x0227e9e0:
  lVar25 = local_1f0;
  local_1c0 = lVar23;
  if (((local_1d0 & 1) != 0) && (lVar23 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar23,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_1f0;
        goto joined_r0x0227e670;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar23,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_1f0;
  }
joined_r0x0227e670:
  DAT_043f1798 = plVar1;
  local_1f0 = lVar25;
  if ((((byte)local_200 & 1) != 0) && (lVar25 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar32 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar25,0,8);
        goto LAB_0227e720;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,0,8);
  }
LAB_0227e720:
  uVar28 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar28);
  (**(code **)*plVar16)(plVar16,uVar28);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  uVar32 = (ulong)&local_218 | 1;
  if ((local_218 & 1) != 0) {
    uVar32 = local_208;
  }
  FUN_001522a0(uVar28,uVar32);
  uVar32 = local_208;
  plVar1 = DAT_043f1798;
  if (((local_218 & 1) != 0) && (local_208 != 0)) {
    plVar22 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar22 = plVar1;
    }
    uVar17 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar22,uVar32,0,8);
        return;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,uVar32,0,8);
  }
  return;
}


