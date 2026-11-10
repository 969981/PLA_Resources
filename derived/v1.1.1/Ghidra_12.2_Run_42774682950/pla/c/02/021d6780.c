/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021d6780; name: FUN_021d6780
 */


void FUN_021d6780(long param_1)

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
  long *plVar10;
  char *pcVar11;
  long lVar12;
  size_t sVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  char *pcVar23;
  undefined8 uVar24;
  long *plVar25;
  string *psVar26;
  char *pcVar27;
  long lVar28;
  byte local_128;
  char acStack_127 [7];
  char local_120;
  char acStack_11f [7];
  ulong local_118;
  string local_110;
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
  local_128 = 0x1e;
  acStack_127 = (char  [7])s_FieldObjectUtil_038b01af._0_7_;
  local_120 = s_FieldObjectUtil_038b01af[7];
  acStack_11f = (char  [7])s_FieldObjectUtil_038b01af._8_7_;
  local_118 = 0;
  lVar5 = tpidr_el0;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,200,8);
  plVar10[4] = 0;
  plVar25 = plVar10 + 1;
  *plVar25 = 0;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[10] = 0;
  plVar10[6] = (long)FUN_021d75c0;
  plVar10[7] = (long)FUN_021d7670;
  pcVar27 = "__haxe_export_GetCharacterLocatorPos";
  *plVar10 = (long)&PTR_FUN_0425b740;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  plVar10[0xe] = (long)&DAT_0392da3c;
  plVar10[0xf] = 0;
  plVar10[0xc] = (long)"__haxe_export_GetCharacterLocatorPos";
  plVar10[0xd] = (long)&DAT_038ca815;
  plVar10[0x18] = 0;
  plVar10[0x16] = 0;
  *(undefined1 *)(plVar10 + 0x17) = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = (long)FUN_021d7844;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[0x12] = (long)&LAB_021d7b24;
  plVar10[0x13] = (long)&LAB_021d7e00;
  plVar10[0x14] = (long)&LAB_021d7e10;
  plVar10[0x15] = 0;
  plVar1 = DAT_043f1798;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  local_100[0x20] = 'r';
  uVar24 = s___haxe_export_GetCharacterLocato_038b9e03._8_8_;
  local_100[0x21] = 'P';
  local_100[0x22] = 'o';
  local_100[0x23] = 's';
  *(undefined8 *)local_100 = s___haxe_export_GetCharacterLocato_038b9e03._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar24;
  uVar6 = s___haxe_export_GetCharacterLocato_038b9e03._24_8_;
  uVar24 = s___haxe_export_GetCharacterLocato_038b9e03._16_8_;
  local_100[0x24] = '\0';
  *(undefined8 *)(local_100 + 0x10) = uVar24;
  *(undefined8 *)(local_100 + 0x18) = uVar6;
  local_110 = (string)0x31;
  local_108 = 0x24;
  psVar26 = &local_110;
  local_f8 = &LAB_021d7e14;
  puStack_f0 = &LAB_021d7e5c;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_d0 = 0;
  puStack_c8 = &LAB_021d7ea4;
  local_af = 0x63675f5f;
  local_c0 = &LAB_021d7eec;
  local_a0 = 0;
  puStack_98 = &LAB_021d7f34;
  plVar1 = plVar10 + 3;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_e8 = 0xffffffff;
  local_dc = 0;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_021d7f7c;
  local_88 = 0xffffffff;
  do {
    uVar14 = *(ulong *)(psVar26 + 8);
    psVar3 = *(string **)(psVar26 + 0x10);
    if (((byte)*psVar26 & 1) == 0) {
      psVar3 = psVar26 + 1;
      uVar14 = (ulong)((byte)*psVar26 >> 1);
    }
    pcVar11 = (char *)FUN_008e8ed4(local_80,psVar3,uVar14);
    pcVar23 = (char *)plVar10[2];
    if (pcVar23 != (char *)0x0) {
      uVar14 = (long)pcVar23 - ((ulong)pcVar23 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        pcVar27 = (char *)((ulong)(pcVar23 + -1) & (ulong)pcVar11);
      }
      else {
        pcVar27 = pcVar11;
        if (pcVar23 <= pcVar11) {
          uVar18 = 0;
          if (pcVar23 != (char *)0x0) {
            uVar18 = (ulong)pcVar11 / (ulong)pcVar23;
          }
          pcVar27 = pcVar11 + -(uVar18 * (long)pcVar23);
        }
      }
      plVar17 = *(long **)(*plVar25 + (long)pcVar27 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar3 = psVar26 + 1;
        sVar13 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar3 = *(string **)(psVar26 + 0x10);
          sVar13 = *(size_t *)(psVar26 + 8);
        }
        if (uVar14 < 2) {
          if (sVar13 == 0) {
            do {
              if ((char *)plVar17[1] != pcVar11 &&
                  (char *)((ulong)plVar17[1] & (ulong)(pcVar23 + -1)) != pcVar27) break;
              uVar14 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar14 = plVar17[3];
              }
              if (uVar14 == 0) goto LAB_021d6b98;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar17[1] != pcVar11 &&
                  (char *)((ulong)plVar17[1] & (ulong)(pcVar23 + -1)) != pcVar27) break;
              bVar4 = *(byte *)(plVar17 + 2);
              uVar14 = (ulong)(bVar4 >> 1);
              sVar2 = uVar14;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar17[3];
              }
              if (sVar2 == sVar13) {
                if ((bVar4 & 1) == 0) {
                  psVar20 = (string *)((long)plVar17 + 0x11);
                  psVar22 = psVar3;
                  while (*psVar20 == *psVar22) {
                    uVar14 = uVar14 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar14 == 0) goto LAB_021d6b98;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar17[4],psVar3,sVar13);
                  if (iVar7 == 0) goto LAB_021d6b98;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar13 == 0) {
          do {
            pcVar16 = (char *)plVar17[1];
            if (pcVar16 != pcVar11) {
              if (pcVar23 <= pcVar16) {
                uVar14 = 0;
                if (pcVar23 != (char *)0x0) {
                  uVar14 = (ulong)pcVar16 / (ulong)pcVar23;
                }
                pcVar16 = pcVar16 + -(uVar14 * (long)pcVar23);
              }
              if (pcVar16 != pcVar27) break;
            }
            uVar14 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar14 = plVar17[3];
            }
            if (uVar14 == 0) goto LAB_021d6b98;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            pcVar16 = (char *)plVar17[1];
            if (pcVar16 != pcVar11) {
              if (pcVar23 <= pcVar16) {
                uVar14 = 0;
                if (pcVar23 != (char *)0x0) {
                  uVar14 = (ulong)pcVar16 / (ulong)pcVar23;
                }
                pcVar16 = pcVar16 + -(uVar14 * (long)pcVar23);
              }
              if (pcVar16 != pcVar27) break;
            }
            bVar4 = *(byte *)(plVar17 + 2);
            uVar14 = (ulong)(bVar4 >> 1);
            sVar2 = uVar14;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar17[3];
            }
            if (sVar2 == sVar13) {
              if ((bVar4 & 1) == 0) {
                psVar20 = (string *)((long)plVar17 + 0x11);
                psVar22 = psVar3;
                while (*psVar20 == *psVar22) {
                  uVar14 = uVar14 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar14 == 0) goto LAB_021d6b98;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar17[4],psVar3,sVar13);
                if (iVar7 == 0) goto LAB_021d6b98;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar26);
    lVar19 = *(long *)(psVar26 + 0x18);
    lVar21 = *(long *)(psVar26 + 0x28);
    plVar17[6] = *(long *)(psVar26 + 0x20);
    plVar17[7] = lVar21;
    plVar17[5] = lVar19;
    *plVar17 = 0;
    plVar17[1] = (long)pcVar11;
    if ((pcVar23 == (char *)0x0) ||
       (*(float *)(plVar10 + 5) * (float)pcVar23 < (float)(plVar10[4] + 1))) {
      uVar14 = (ulong)(pcVar23 < (char *)0x3 || ((ulong)pcVar23 & (ulong)(pcVar23 + -1)) != 0) |
               (long)pcVar23 << 1;
      uVar18 = (ulong)((float)(plVar10[4] + 1) / *(float *)(plVar10 + 5));
      if (uVar18 <= uVar14) {
        uVar18 = uVar14;
      }
      FUN_008e9ae4(plVar25,uVar18);
      pcVar23 = (char *)plVar10[2];
      if (((ulong)pcVar23 & (ulong)(pcVar23 + -1)) == 0) {
        pcVar27 = (char *)((ulong)(pcVar23 + -1) & (ulong)pcVar11);
      }
      else if (pcVar11 < pcVar23) {
        pcVar27 = pcVar11;
      }
      else {
        uVar14 = 0;
        if (pcVar23 != (char *)0x0) {
          uVar14 = (ulong)pcVar11 / (ulong)pcVar23;
        }
        pcVar27 = pcVar11 + -(uVar14 * (long)pcVar23);
      }
    }
    lVar19 = *plVar25;
    plVar15 = *(long **)(lVar19 + (long)pcVar27 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar17 = *plVar1;
      *plVar1 = (long)plVar17;
      *(long **)(lVar19 + (long)pcVar27 * 8) = plVar1;
      if (*plVar17 != 0) {
        pcVar11 = *(char **)(*plVar17 + 8);
        if (((ulong)pcVar23 & (ulong)(pcVar23 + -1)) == 0) {
          pcVar11 = (char *)((ulong)pcVar11 & (ulong)(pcVar23 + -1));
        }
        else if (pcVar23 <= pcVar11) {
          uVar14 = 0;
          if (pcVar23 != (char *)0x0) {
            uVar14 = (ulong)pcVar11 / (ulong)pcVar23;
          }
          pcVar11 = pcVar11 + -(uVar14 * (long)pcVar23);
        }
        plVar15 = (long *)(*plVar25 + (long)pcVar11 * 8);
        goto LAB_021d6b88;
      }
    }
    else {
      *plVar17 = *plVar15;
LAB_021d6b88:
      *plVar15 = (long)plVar17;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_021d6b98:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != (string *)local_80);
  lVar21 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar25,lVar21 + lVar19);
    if (lVar12 != 0) {
      FUN_008f2aec(local_80,plVar25,lVar12);
      lVar12 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar12 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar12 + 0x20), lVar28 != 0)) {
          plVar17 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar17 = plVar1;
          }
          uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar14 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar28,0,8);
              goto LAB_021d6ebc;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar28,0,8);
        }
LAB_021d6ebc:
        plVar1 = DAT_043f1798;
        plVar17 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar17 = plVar1;
        }
        uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar12,0,8);
            goto LAB_021d6e20;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
      }
    }
LAB_021d6e20:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar27 = (char *)plVar10[0xc];
  sVar13 = strlen(pcVar27);
  iVar7 = FUN_008f2c60(sVar13,pcVar27);
  pcVar27 = (char *)plVar10[0xd];
  sVar13 = strlen(pcVar27);
  iVar8 = FUN_008f2c60(sVar13,pcVar27);
  pcVar27 = (char *)plVar10[0xe];
  sVar13 = strlen(pcVar27);
  iVar9 = FUN_008f2c60(sVar13,pcVar27);
  lVar21 = local_a0;
  *(bool *)(plVar10 + 0xb) = (iVar8 != 0 || iVar7 != 0) || iVar9 != 0;
  plVar1 = DAT_043f1798;
  lVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar21,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_d0;
        goto joined_r0x021d7060;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar21,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x021d7060:
  pcVar27 = local_100;
  local_d0 = lVar19;
  if (((local_e0 & 1) != 0) && (lVar19 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pcVar27 = local_100;
        goto joined_r0x021d7390;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pcVar27 = local_100;
  }
joined_r0x021d7390:
  DAT_043f1798 = plVar1;
  local_100 = pcVar27;
  if ((((byte)local_110 & 1) != 0) && (pcVar27 != (char *)0x0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar27,0,8);
        goto LAB_021d71c4;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar27,0,8);
  }
LAB_021d71c4:
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar10)(plVar10,uVar24);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar14 = (ulong)&local_128 | 1;
  if ((local_128 & 1) != 0) {
    uVar14 = local_118;
  }
  FUN_001522a0(uVar24,uVar14);
  uVar14 = local_118;
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar18 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,uVar14,0,8);
        return;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,uVar14,0,8);
  }
  return;
}


