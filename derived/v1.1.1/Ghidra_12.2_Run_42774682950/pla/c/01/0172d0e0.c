/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0172d0e0; name: FUN_0172d0e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0172d0e0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  char *pcVar27;
  string *psVar28;
  long lVar29;
  byte local_188;
  undefined7 uStack_187;
  char cStack_180;
  undefined7 uStack_17f;
  char local_178;
  undefined2 uStack_177;
  undefined1 uStack_175;
  undefined4 uStack_174;
  string local_170;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined8 local_168;
  char *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
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
  
  plVar1 = DAT_043f1798;
  local_188 = 0x24;
  uStack_174 = 0;
  uStack_177 = 0x7265;
  uStack_187 = s_EventScriptManager_0397f1f5._0_7_;
  cStack_180 = s_EventScriptManager_0397f1f5[7];
  uStack_17f = s_EventScriptManager_0397f1f5._8_7_;
  local_178 = s_EventScriptManager_0397f1f5[0xf];
  uStack_175 = 0;
  uVar6 = tpidr_el0;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xd8,8);
  plVar12[4] = 0;
  plVar26 = plVar12 + 1;
  *plVar26 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  plVar12[6] = (long)FUN_0172e2d0;
  plVar12[7] = (long)FUN_0172e380;
  *plVar12 = (long)&PTR_FUN_04224f88;
  plVar12[0xe] = (long)"GetRealTimeEventManager";
  plVar12[0xf] = (long)&DAT_038ca815;
  plVar12[0x10] = (long)&DAT_0392da3c;
  plVar12[0x11] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  plVar12[0x12] = 0;
  plVar12[0x13] = (long)FUN_0172e510;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x18] = 0;
  *(undefined1 *)(plVar12 + 0x19) = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[0xc] = (long)"GetEventProgressManager";
  plVar12[0xd] = (long)"GetEventPresetManager";
  plVar12[0x14] = (long)&LAB_0172e7f0;
  plVar12[0x15] = (long)&LAB_0172ead0;
  plVar12[0x16] = (long)&LAB_0172eae0;
  plVar12[0x17] = 0;
  plVar1 = DAT_043f1798;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  local_160[0x17] = '\0';
  uVar25 = CONCAT17(s_GetEventProgressManager_03975d74[0xf],s_GetEventProgressManager_03975d74._8_7_
                   );
  *(undefined8 *)local_160 = s_GetEventProgressManager_03975d74._0_8_;
  *(undefined8 *)(local_160 + 8) = uVar25;
  *(ulong *)(local_160 + 0xf) =
       CONCAT71(s_GetEventProgressManager_03975d74._16_7_,s_GetEventProgressManager_03975d74[0xf]);
  plVar1 = DAT_043f1798;
  local_168 = 0x17;
  local_158 = &LAB_0172eae4;
  puStack_150 = &LAB_0172eb2c;
  local_140 = 0x2a;
  local_13f[0] = s_GetEventPresetManager_03a73638[0];
  local_13f[1] = s_GetEventPresetManager_03a73638[1];
  local_13f[2] = s_GetEventPresetManager_03a73638[2];
  local_13f[3] = s_GetEventPresetManager_03a73638[3];
  local_13f[4] = s_GetEventPresetManager_03a73638[4];
  local_13f[5] = s_GetEventPresetManager_03a73638[5];
  local_13f[6] = s_GetEventPresetManager_03a73638[6];
  cStack_138 = s_GetEventPresetManager_03a73638[7];
  acStack_137[0] = s_GetEventPresetManager_03a73638[8];
  acStack_137[1] = s_GetEventPresetManager_03a73638[9];
  acStack_137[2] = s_GetEventPresetManager_03a73638[10];
  acStack_137[3] = s_GetEventPresetManager_03a73638[0xb];
  acStack_137[4] = s_GetEventPresetManager_03a73638[0xc];
  acStack_137[5] = s_GetEventPresetManager_03a73638[0xd];
  acStack_137[6] = s_GetEventPresetManager_03a73638[0xe];
  local_170 = (string)0x21;
  local_130 = 0x726567616e61;
  puStack_128 = &LAB_0172eb74;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_148 = 0xffffffff;
  local_118 = 0xffffffff;
  local_120 = &LAB_0172ebbc;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  local_100[0x17] = '\0';
  uVar25 = CONCAT17(s_GetRealTimeEventManager_038e011e[0xf],s_GetRealTimeEventManager_038e011e._8_7_
                   );
  *(undefined8 *)local_100 = s_GetRealTimeEventManager_038e011e._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar25;
  *(ulong *)(local_100 + 0xf) =
       CONCAT71(s_GetRealTimeEventManager_038e011e._16_7_,s_GetRealTimeEventManager_038e011e[0xf]);
  local_108 = 0x17;
  local_110 = 0x21;
  local_f8 = &LAB_0172ec04;
  puStack_f0 = &LAB_0172ec4c;
  local_e0 = 6;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_e8 = 0xffffffff;
  plVar1 = plVar12 + 3;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_0172ecdc;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_d0 = 0;
  puStack_c8 = &LAB_0172ec94;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  psVar28 = &local_170;
  local_90 = &LAB_0172ed6c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0172ed24;
  uVar16 = uVar6;
  do {
    uVar13 = *(ulong *)(psVar28 + 8);
    psVar3 = *(string **)(psVar28 + 0x10);
    if (((byte)*psVar28 & 1) == 0) {
      psVar3 = psVar28 + 1;
      uVar13 = (ulong)((byte)*psVar28 >> 1);
    }
    uVar13 = FUN_008e8ed4(local_80,psVar3,uVar13);
    uVar24 = plVar12[2];
    if (uVar24 != 0) {
      uVar16 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar17 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar16 = uVar24 - 1 & uVar13;
      }
      else {
        uVar16 = uVar13;
        if (uVar24 <= uVar13) {
          uVar16 = 0;
          if (uVar24 != 0) {
            uVar16 = uVar13 / uVar24;
          }
          uVar16 = uVar13 - uVar16 * uVar24;
        }
      }
      plVar19 = *(long **)(*plVar26 + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar3 = psVar28 + 1;
        sVar15 = (ulong)((byte)*psVar28 >> 1);
        if (((byte)*psVar28 & 1) != 0) {
          psVar3 = *(string **)(psVar28 + 0x10);
          sVar15 = *(size_t *)(psVar28 + 8);
        }
        if (uVar17 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != uVar16) break;
              uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar17 = plVar19[3];
              }
              if (uVar17 == 0) goto LAB_0172d5b4;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != uVar16) break;
              bVar4 = *(byte *)(plVar19 + 2);
              uVar17 = (ulong)(bVar4 >> 1);
              sVar2 = uVar17;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar19[3];
              }
              if (sVar2 == sVar15) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar21 == *psVar23) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar17 == 0) goto LAB_0172d5b4;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar19[4],psVar3,sVar15);
                  if (iVar7 == 0) goto LAB_0172d5b4;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar15 == 0) {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar5 * uVar24;
              }
              if (uVar17 != uVar16) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar17 = plVar19[3];
            }
            if (uVar17 == 0) goto LAB_0172d5b4;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar5 * uVar24;
              }
              if (uVar17 != uVar16) break;
            }
            bVar4 = *(byte *)(plVar19 + 2);
            uVar17 = (ulong)(bVar4 >> 1);
            sVar2 = uVar17;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar19[3];
            }
            if (sVar2 == sVar15) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar3;
                while (*psVar21 == *psVar23) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar17 == 0) goto LAB_0172d5b4;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar19[4],psVar3,sVar15);
                if (iVar7 == 0) goto LAB_0172d5b4;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar28);
    lVar20 = *(long *)(psVar28 + 0x18);
    lVar22 = *(long *)(psVar28 + 0x28);
    plVar19[6] = *(long *)(psVar28 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar24 == 0) || (*(float *)(plVar12 + 5) * (float)uVar24 < (float)(plVar12[4] + 1))) {
      uVar16 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar24 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar24 <= uVar16) {
        uVar24 = uVar16;
      }
      FUN_008e9ae4(plVar26,uVar24);
      uVar24 = plVar12[2];
      if ((uVar24 & uVar24 - 1) == 0) {
        uVar16 = uVar24 - 1 & uVar13;
      }
      else if (uVar13 < uVar24) {
        uVar16 = uVar13;
      }
      else {
        uVar16 = 0;
        if (uVar24 != 0) {
          uVar16 = uVar13 / uVar24;
        }
        uVar16 = uVar13 - uVar16 * uVar24;
      }
    }
    lVar20 = *plVar26;
    plVar18 = *(long **)(lVar20 + uVar16 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + uVar16 * 8) = plVar1;
      if (*plVar19 != 0) {
        uVar13 = *(ulong *)(*plVar19 + 8);
        if ((uVar24 & uVar24 - 1) == 0) {
          uVar13 = uVar13 & uVar24 - 1;
        }
        else if (uVar24 <= uVar13) {
          uVar17 = 0;
          if (uVar24 != 0) {
            uVar17 = uVar13 / uVar24;
          }
          uVar13 = uVar13 - uVar17 * uVar24;
        }
        plVar18 = (long *)(*plVar26 + uVar13 * 8);
        goto LAB_0172d5a4;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_0172d5a4:
      *plVar18 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_0172d5b4:
    psVar28 = psVar28 + 0x30;
  } while (psVar28 != (string *)local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar26,lVar22 + lVar20);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar26,lVar14);
      lVar14 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(uVar6 + 0x20);
          if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
            *(long **)(uVar6 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(uVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(uVar6 + 0x38d488) = 1;
              *(undefined8 *)(uVar6 + 0x38d478) = 0;
              *(undefined8 *)(uVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(uVar6 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar29,0,8);
              goto LAB_0172d908;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_0172d908:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(uVar6 + 0x20);
        if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
          *(long **)(uVar6 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(uVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(uVar6 + 0x38d488) = 1;
            *(undefined8 *)(uVar6 + 0x38d478) = 0;
            *(undefined8 *)(uVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(uVar6 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar14,0,8);
            goto LAB_0172d86c;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_0172d86c:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar27 = (char *)plVar12[0xc];
  sVar15 = strlen(pcVar27);
  iVar7 = FUN_008f2c60(sVar15,pcVar27);
  pcVar27 = (char *)plVar12[0xd];
  sVar15 = strlen(pcVar27);
  iVar8 = FUN_008f2c60(sVar15,pcVar27);
  pcVar27 = (char *)plVar12[0xe];
  sVar15 = strlen(pcVar27);
  iVar9 = FUN_008f2c60(sVar15,pcVar27);
  pcVar27 = (char *)plVar12[0xf];
  sVar15 = strlen(pcVar27);
  iVar10 = FUN_008f2c60(sVar15,pcVar27);
  pcVar27 = (char *)plVar12[0x10];
  sVar15 = strlen(pcVar27);
  iVar11 = FUN_008f2c60(sVar15,pcVar27);
  lVar22 = local_a0;
  *(bool *)(plVar12 + 0xb) =
       (((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0;
  plVar1 = DAT_043f1798;
  lVar20 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar22,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_d0;
        goto joined_r0x0172db08;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_d0;
  }
joined_r0x0172db08:
  pcVar27 = local_100;
  local_d0 = lVar20;
  if (((local_e0 & 1) != 0) && (lVar20 != 0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar20,0,8);
        plVar1 = DAT_043f1798;
        pcVar27 = local_100;
        goto joined_r0x0172dfc0;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
    plVar1 = DAT_043f1798;
    pcVar27 = local_100;
  }
joined_r0x0172dfc0:
  lVar20 = local_130;
  local_100 = pcVar27;
  if (((local_110 & 1) != 0) && (pcVar27 != (char *)0x0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_130;
        goto joined_r0x0172dc70;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_130;
  }
joined_r0x0172dc70:
  pcVar27 = local_160;
  local_130 = lVar20;
  if (((local_140 & 1) != 0) && (lVar20 != 0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar20,0,8);
        plVar1 = DAT_043f1798;
        pcVar27 = local_160;
        goto joined_r0x0172e000;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
    plVar1 = DAT_043f1798;
    pcVar27 = local_160;
  }
joined_r0x0172e000:
  DAT_043f1798 = plVar1;
  local_160 = pcVar27;
  if ((((byte)local_170 & 1) != 0) && (pcVar27 != (char *)0x0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar27,0,8);
        goto LAB_0172ddd4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar27,0,8);
  }
LAB_0172ddd4:
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  uVar16 = (ulong)&local_188 | 1;
  if ((local_188 & 1) != 0) {
    uVar16 = CONCAT44(uStack_174,CONCAT13(uStack_175,CONCAT21(uStack_177,local_178)));
  }
  FUN_001522a0(uVar25,uVar16);
  plVar1 = DAT_043f1798;
  if (((local_188 & 1) != 0) &&
     (lVar20 = CONCAT44(uStack_174,CONCAT13(uStack_175,CONCAT21(uStack_177,local_178))), lVar20 != 0
     )) {
    plVar19 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar20,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
  }
  return;
}


