/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a82fdc; name: FUN_02a82fdc
 */


/* WARNING: Type propagation algorithm not settling */

char * FUN_02a82fdc(long param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  string *psVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  long lVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  ushort uVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  char *pcVar21;
  long lVar22;
  char *pcVar23;
  byte *pbVar24;
  long *plVar25;
  char *pcVar26;
  char *pcVar27;
  undefined1 *puVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  char *pcVar32;
  byte *pbVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  byte bVar37;
  char *pcVar38;
  string *this;
  string *psVar39;
  size_t sVar40;
  void *pvVar41;
  void *pvVar42;
  byte *pbVar43;
  ulong local_128;
  char *local_120;
  undefined1 *local_118;
  ulong local_110;
  ulong local_108;
  char *local_100;
  ulong local_f8;
  char *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  ulong local_d8;
  char *local_d0;
  ulong local_c8;
  ulong local_c0;
  char *local_b8;
  byte local_b0;
  char *local_a8;
  undefined1 *local_a0;
  ulong local_98;
  char *local_90;
  undefined1 *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 != '[') {
    return param_2;
  }
  if (param_2 + 1 != param_3) {
    pcVar35 = param_2 + 2;
    if (param_2[1] != '^') {
      pcVar35 = param_2 + 1;
    }
    lVar15 = FUN_02a874e0(param_1,param_2[1] == '^');
    plVar25 = DAT_043f1798;
    if (pcVar35 != param_3) {
      lVar9 = tpidr_el0;
      if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pcVar35 == ']')) {
        if (*(char *)(lVar15 + 0xa5) == '\0') {
          puVar28 = *(undefined1 **)(lVar15 + 0x30);
          puVar7 = *(undefined1 **)(lVar15 + 0x38);
          if (*(char *)(lVar15 + 0xa6) == '\0') {
            if (puVar28 != puVar7) goto LAB_02a83258;
          }
          else if (puVar28 < puVar7) {
LAB_02a83258:
            *puVar28 = 0x5d;
            goto LAB_02a83260;
          }
          pvVar42 = *(void **)(lVar15 + 0x28);
          sVar40 = (long)puVar28 - (long)pvVar42;
          uVar29 = sVar40 + 1;
          if ((long)uVar29 < 0) goto LAB_02a86030;
          if ((ulong)((long)puVar7 - (long)pvVar42) < 0x3fffffffffffffff) {
            uVar17 = ((long)puVar7 - (long)pvVar42) * 2;
            if (uVar29 <= uVar17) {
              uVar29 = uVar17;
            }
            if (uVar29 != 0) goto LAB_02a83274;
            pvVar41 = (void *)0x0;
          }
          else {
            uVar29 = 0x7fffffffffffffff;
LAB_02a83274:
            plVar19 = *(long **)(lVar9 + 0x20);
            if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
              *(long **)(lVar9 + 0x20) = DAT_043f1798;
              plVar19 = plVar25;
            }
            pvVar41 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar29,8);
          }
          *(undefined1 *)((long)pvVar41 + sVar40) = 0x5d;
          if (0 < (long)sVar40) {
            memcpy(pvVar41,pvVar42,sVar40);
          }
          *(void **)(lVar15 + 0x28) = pvVar41;
          *(undefined1 **)(lVar15 + 0x30) = (undefined1 *)((long)pvVar41 + sVar40) + 1;
          *(ulong *)(lVar15 + 0x38) = (long)pvVar41 + uVar29;
          plVar25 = DAT_043f1798;
          if (pvVar42 != (void *)0x0) {
            plVar19 = *(long **)(lVar9 + 0x20);
            if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
              *(long **)(lVar9 + 0x20) = DAT_043f1798;
              plVar19 = plVar25;
            }
            uVar29 = (**(code **)(*plVar19 + 0xc0))(plVar19);
            if ((uVar29 & 1) != 0) {
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar9 + 0x38d480)) goto LAB_02a85ecc;
            }
            lVar22 = *plVar19;
LAB_02a83390:
            (**(code **)(lVar22 + 0x18))(plVar19,pvVar42,0,8);
          }
        }
        else {
          uVar12 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))(*(long **)(lVar15 + 0x18),0x5d);
          plVar25 = DAT_043f1798;
          puVar28 = *(undefined1 **)(lVar15 + 0x30);
          if (puVar28 < *(undefined1 **)(lVar15 + 0x38)) {
            *puVar28 = uVar12;
LAB_02a83260:
            *(long *)(lVar15 + 0x30) = *(long *)(lVar15 + 0x30) + 1;
          }
          else {
            pvVar42 = *(void **)(lVar15 + 0x28);
            sVar40 = (long)puVar28 - (long)pvVar42;
            uVar29 = sVar40 + 1;
            if ((long)uVar29 < 0) goto LAB_02a86030;
            uVar17 = (long)*(undefined1 **)(lVar15 + 0x38) - (long)pvVar42;
            if (uVar17 < 0x3fffffffffffffff) {
              uVar17 = uVar17 * 2;
              if (uVar29 <= uVar17) {
                uVar29 = uVar17;
              }
              if (uVar29 != 0) goto LAB_02a83130;
              pvVar41 = (void *)0x0;
            }
            else {
              uVar29 = 0x7fffffffffffffff;
LAB_02a83130:
              plVar19 = *(long **)(lVar9 + 0x20);
              if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                *(long **)(lVar9 + 0x20) = DAT_043f1798;
                plVar19 = plVar25;
              }
              pvVar41 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar29,8);
            }
            *(undefined1 *)((long)pvVar41 + sVar40) = uVar12;
            if (0 < (long)sVar40) {
              memcpy(pvVar41,pvVar42,sVar40);
            }
            *(ulong *)(lVar15 + 0x38) = (long)pvVar41 + uVar29;
            *(void **)(lVar15 + 0x28) = pvVar41;
            *(undefined1 **)(lVar15 + 0x30) = (undefined1 *)((long)pvVar41 + sVar40) + 1;
            plVar25 = DAT_043f1798;
            if (pvVar42 != (void *)0x0) {
              plVar19 = *(long **)(lVar9 + 0x20);
              if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                *(long **)(lVar9 + 0x20) = DAT_043f1798;
                plVar19 = plVar25;
              }
              uVar29 = (**(code **)(*plVar19 + 0xc0))(plVar19);
              if ((uVar29 & 1) == 0) {
LAB_02a83244:
                lVar22 = *plVar19;
                goto LAB_02a83390;
              }
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a83244;
LAB_02a85ecc:
              FUN_02bcc824(plVar19,pvVar42,0,8);
            }
          }
        }
        pcVar35 = pcVar35 + 1;
      }
      if (pcVar35 != param_3) {
        pcVar21 = param_3 + -1;
        pcVar26 = (char *)((ulong)&local_80 | 1);
        pcVar32 = (char *)((ulong)&local_c8 | 1);
        puVar1 = (undefined8 *)(lVar15 + 0x28);
        plVar25 = (long *)(lVar15 + 0x30);
        pcVar27 = (char *)((ulong)&local_110 | 1);
        puVar28 = (undefined1 *)((ulong)&local_128 | 1);
        do {
          pcVar36 = pcVar35;
          plVar19 = DAT_043f1798;
          pcVar38 = param_3;
          if (pcVar36 == param_3) {
LAB_02a83440:
            pcVar35 = pcVar38;
          }
          else {
            pcVar38 = pcVar36;
            if (*pcVar36 == ']') goto LAB_02a83440;
            pcVar34 = pcVar36 + 1;
            uVar29 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = (char *)0x0;
            if (pcVar34 == param_3) {
LAB_02a835d8:
              uVar29 = 0;
LAB_02a835dc:
              uVar20 = *(uint *)(param_1 + 0x18);
              uVar17 = uVar29 >> 1;
              if ((uVar29 & 1) != 0) {
                uVar17 = local_d8;
              }
              uVar2 = uVar20 & 0x1f0;
              pcVar35 = (char *)(ulong)uVar2;
              pcVar34 = (char *)((ulong)&local_e0 | 1);
              if (uVar17 != 0) {
joined_r0x02a8364c:
                if (pcVar38 == param_3) goto LAB_02a83a8c;
LAB_02a83a80:
                plVar19 = DAT_043f1798;
                if (*pcVar38 == ']') goto LAB_02a83a8c;
                if (((pcVar38 + 1 != param_3) && (*pcVar38 == '-')) && (pcVar38[1] != ']')) {
                  local_f0 = (char *)0x0;
                  local_e8 = (undefined1 *)0x0;
                  pcVar34 = pcVar38 + 2;
                  local_f8 = 0;
                  cVar13 = pcVar38[1];
                  if ((pcVar34 == param_3) || (cVar13 != '[')) {
                    if (((uVar20 & 0x1b0) != 0) || (cVar13 != '\\')) goto LAB_02a83c8c;
                    if (uVar2 == 0) {
                      pcVar34 = (char *)FUN_02a89bf0(param_1,pcVar34,param_3,&local_f8,lVar15);
                    }
                    else {
                      pcVar34 = (char *)FUN_02a8a2d0(param_1,pcVar34,param_3);
                    }
                  }
                  else if (*pcVar34 == '.') {
                    pcVar34 = (char *)FUN_02a899bc(param_1,pcVar38 + 3,param_3,&local_f8);
                  }
                  else {
LAB_02a83c8c:
                    std::string::operator=((string *)&local_f8,cVar13);
                  }
                  local_100 = local_d0;
                  local_108 = local_d8;
                  local_110 = local_e0;
                  local_118 = local_e8;
                  pcVar38 = local_f0;
                  uVar29 = local_f8;
                  local_e0 = 0;
                  local_d8 = 0;
                  local_d0 = (char *)0x0;
                  uVar17 = local_110;
                  local_e8 = (undefined1 *)0x0;
                  local_128 = local_f8;
                  local_120 = local_f0;
                  local_f8 = 0;
                  local_f0 = (char *)0x0;
                  local_128._0_1_ = (byte)uVar29;
                  local_128 = uVar29;
                  if (*(char *)(lVar15 + 0xa6) == '\0') {
                    uVar17 = (ulong)((byte)local_110 >> 1);
                    if ((local_110 & 1) != 0) {
                      uVar17 = local_108;
                    }
                    if (uVar17 != 1) {
LAB_02a86040:
                      local_128 = uVar29;
                      FUN_02a8b530();
LAB_02a86044:
                    /* WARNING: Subroutine does not return */
                      FUN_02a8a8c0();
                    }
                    pcVar35 = (char *)(ulong)((byte)local_128 >> 1);
                    if ((uVar29 & 1) != 0) {
                      pcVar35 = pcVar38;
                    }
                    if (pcVar35 != (char *)0x1) goto LAB_02a86040;
                    if (*(char *)(lVar15 + 0xa5) != '\0') {
                      pcVar35 = pcVar27;
                      if ((local_110 & 1) != 0) {
                        pcVar35 = local_100;
                      }
                      cVar13 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                         (*(long **)(lVar15 + 0x18),*pcVar35);
                      pcVar35 = pcVar27;
                      if ((local_110 & 1) != 0) {
                        pcVar35 = local_100;
                      }
                      *pcVar35 = cVar13;
                      puVar7 = puVar28;
                      if ((local_128 & 1) != 0) {
                        puVar7 = local_118;
                      }
                      uVar12 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                         (*(long **)(lVar15 + 0x18),*puVar7);
                      puVar7 = puVar28;
                      if ((local_128 & 1) != 0) {
                        puVar7 = local_118;
                      }
                      *puVar7 = uVar12;
                    }
                    local_b8 = local_100;
                    uVar29 = local_128;
                    local_100 = (char *)0x0;
                    local_c8 = local_110;
                    local_c0 = local_108;
                    local_128 = 0;
                    local_b0 = (byte)uVar29;
                    local_110 = 0;
                    local_108 = 0;
                    local_a8 = local_120;
                    local_a0 = local_118;
                    local_120 = (char *)0x0;
                    local_118 = (undefined1 *)0x0;
                    FUN_02a8ad4c(lVar15 + 0x58,&local_c8);
                    plVar19 = DAT_043f1798;
                    pcVar35 = pcVar27;
                    if (((local_b0 & 1) != 0) && (local_a0 != (undefined1 *)0x0)) {
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                      if ((uVar29 & 1) == 0) {
LAB_02a8403c:
                        (**(code **)(*plVar18 + 0x18))(plVar18,local_a0,0,8);
                        goto LAB_02a84058;
                      }
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a8403c;
                      FUN_02bcc824(plVar18,local_a0,0,8);
                      plVar19 = DAT_043f1798;
                      puVar7 = local_118;
                      if ((local_c8 & 1) != 0) goto LAB_02a84060;
                      goto joined_r0x02a85458;
                    }
LAB_02a84058:
                    plVar19 = DAT_043f1798;
                    puVar7 = local_118;
                    if ((local_c8 & 1) == 0) goto joined_r0x02a85458;
LAB_02a84060:
                    pcVar38 = local_b8;
                    plVar19 = DAT_043f1798;
                    puVar7 = local_118;
                    if (local_b8 == (char *)0x0) goto joined_r0x02a85458;
LAB_02a84ce0:
                    plVar19 = DAT_043f1798;
                    plVar18 = *(long **)(lVar9 + 0x20);
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = DAT_043f1798;
                      plVar18 = plVar19;
                    }
                    uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                    if ((uVar29 & 1) != 0) {
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar9 + 0x38d480)) {
                        FUN_02bcc824(plVar18,pcVar38,0,8);
                        plVar19 = DAT_043f1798;
                        puVar7 = local_118;
                        goto joined_r0x02a85458;
                      }
                    }
                    (**(code **)(*plVar18 + 0x18))(plVar18,pcVar38,0,8);
                    plVar19 = DAT_043f1798;
                    puVar7 = local_118;
                  }
                  else {
                    bVar11 = (local_110 & 1) == 0;
                    uVar17 = (ulong)((byte)local_110 >> 1);
                    if (!bVar11) {
                      uVar17 = local_108;
                    }
                    if (*(char *)(lVar15 + 0xa5) == '\0') {
                      if (uVar17 != 0) {
                        uVar17 = 0;
                        do {
                          pcVar35 = pcVar27;
                          if (!bVar11) {
                            pcVar35 = local_100;
                          }
                          pcVar23 = pcVar27;
                          if (!bVar11) {
                            pcVar23 = local_100;
                          }
                          pcVar23[uVar17] = pcVar35[uVar17];
                          bVar11 = (local_110 & 1) == 0;
                          uVar17 = uVar17 + 1;
                          uVar31 = (ulong)((byte)local_110 >> 1);
                          if (!bVar11) {
                            uVar31 = local_108;
                          }
                        } while (uVar17 < uVar31);
                      }
                      bVar11 = (uVar29 & 1) == 0;
                      pcVar35 = (char *)(ulong)((byte)local_128 >> 1);
                      if (!bVar11) {
                        pcVar35 = pcVar38;
                      }
                      if (pcVar35 == (char *)0x0) {
                        pcVar35 = (char *)0x0;
                        bVar37 = (byte)local_128 & 1;
                      }
                      else {
                        pcVar23 = (char *)0x0;
                        do {
                          puVar7 = puVar28;
                          if (!bVar11) {
                            puVar7 = local_118;
                          }
                          puVar3 = puVar28;
                          if (!bVar11) {
                            puVar3 = local_118;
                          }
                          puVar3[(long)pcVar23] = puVar7[(long)pcVar23];
                          bVar11 = (uVar29 & 1) == 0;
                          pcVar23 = pcVar23 + 1;
                          pcVar35 = (char *)(ulong)((byte)local_128 >> 1);
                          if (!bVar11) {
                            pcVar35 = pcVar38;
                          }
                        } while (pcVar23 < pcVar35);
                        bVar37 = (byte)local_128 & 1;
                      }
                    }
                    else {
                      if (uVar17 != 0) {
                        uVar29 = 0;
                        do {
                          pcVar35 = pcVar27;
                          if (!bVar11) {
                            pcVar35 = local_100;
                          }
                          cVar13 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                             (*(long **)(lVar15 + 0x18),pcVar35[uVar29]);
                          pcVar35 = pcVar27;
                          if ((local_110 & 1) != 0) {
                            pcVar35 = local_100;
                          }
                          pcVar35[uVar29] = cVar13;
                          bVar11 = (local_110 & 1) == 0;
                          uVar29 = uVar29 + 1;
                          uVar17 = local_110 >> 1 & 0x7f;
                          if (!bVar11) {
                            uVar17 = local_108;
                          }
                        } while (uVar29 < uVar17);
                      }
                      bVar11 = (local_128 & 1) == 0;
                      pcVar35 = (char *)(ulong)((byte)local_128 >> 1);
                      if (!bVar11) {
                        pcVar35 = local_120;
                      }
                      if (pcVar35 == (char *)0x0) {
                        pcVar35 = (char *)0x0;
                        bVar37 = (byte)local_128 & 1;
                      }
                      else {
                        pcVar38 = (char *)0x0;
                        do {
                          puVar7 = puVar28;
                          if (!bVar11) {
                            puVar7 = local_118;
                          }
                          uVar12 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                             (*(long **)(lVar15 + 0x18),puVar7[(long)pcVar38]);
                          puVar7 = puVar28;
                          if ((local_128 & 1) != 0) {
                            puVar7 = local_118;
                          }
                          puVar7[(long)pcVar38] = uVar12;
                          bVar11 = (local_128 & 1) == 0;
                          pcVar38 = pcVar38 + 1;
                          pcVar35 = (char *)(ulong)((byte)local_128 >> 1);
                          if (!bVar11) {
                            pcVar35 = local_120;
                          }
                        } while (pcVar38 < pcVar35);
                        bVar37 = (byte)local_128 & 1;
                      }
                    }
                    uVar29 = local_110 >> 1 & 0x7f;
                    pcVar38 = pcVar27;
                    if ((local_110 & 1) != 0) {
                      uVar29 = local_108;
                      pcVar38 = local_100;
                    }
                    FUN_02a8b2cc(&local_80,lVar15 + 0x10,pcVar38,pcVar38 + uVar29);
                    puVar7 = puVar28;
                    if (bVar37 != 0) {
                      puVar7 = local_118;
                    }
                    FUN_02a8b2cc(&local_98,lVar15 + 0x10,puVar7,puVar7 + (long)pcVar35);
                    local_b8 = local_70;
                    uVar29 = local_98;
                    local_70 = (char *)0x0;
                    local_c8 = local_80;
                    local_c0 = local_78;
                    local_98 = 0;
                    local_b0 = (byte)uVar29;
                    local_80 = 0;
                    local_78 = 0;
                    local_a8 = local_90;
                    local_a0 = local_88;
                    local_90 = (char *)0x0;
                    local_88 = (undefined1 *)0x0;
                    FUN_02a8ad4c(lVar15 + 0x58,&local_c8);
                    plVar19 = DAT_043f1798;
                    if (((local_b0 & 1) == 0) || (local_a0 == (undefined1 *)0x0)) {
LAB_02a84b68:
                      if ((local_c8 & 1) == 0) goto LAB_02a84c1c;
LAB_02a84b70:
                      pcVar38 = local_b8;
                      plVar19 = DAT_043f1798;
                      if (local_b8 == (char *)0x0) goto LAB_02a84c1c;
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                      if ((uVar29 & 1) == 0) {
LAB_02a84c00:
                        (**(code **)(*plVar18 + 0x18))(plVar18,pcVar38,0,8);
                        goto LAB_02a84c1c;
                      }
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a84c00;
                      FUN_02bcc824(plVar18,pcVar38,0,8);
                      if ((local_98 & 1) != 0) goto LAB_02a84c24;
LAB_02a84cd0:
                      plVar19 = DAT_043f1798;
                      puVar7 = local_118;
                      if ((local_80 & 1) != 0) goto LAB_02a84cd8;
                    }
                    else {
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                      if ((uVar29 & 1) == 0) {
LAB_02a84b4c:
                        (**(code **)(*plVar18 + 0x18))(plVar18,local_a0,0,8);
                        goto LAB_02a84b68;
                      }
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a84b4c;
                      FUN_02bcc824(plVar18,local_a0,0,8);
                      if ((local_c8 & 1) != 0) goto LAB_02a84b70;
LAB_02a84c1c:
                      if ((local_98 & 1) == 0) goto LAB_02a84cd0;
LAB_02a84c24:
                      puVar7 = local_88;
                      plVar19 = DAT_043f1798;
                      if (local_88 == (undefined1 *)0x0) goto LAB_02a84cd0;
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                      if ((uVar29 & 1) == 0) {
LAB_02a84cb4:
                        (**(code **)(*plVar18 + 0x18))(plVar18,puVar7,0,8);
                        goto LAB_02a84cd0;
                      }
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a84cb4;
                      FUN_02bcc824(plVar18,puVar7,0,8);
                      plVar19 = DAT_043f1798;
                      puVar7 = local_118;
                      if ((local_80 & 1) == 0) goto joined_r0x02a85458;
LAB_02a84cd8:
                      pcVar38 = local_70;
                      plVar19 = DAT_043f1798;
                      puVar7 = local_118;
                      if (local_70 != (char *)0x0) goto LAB_02a84ce0;
                    }
                  }
joined_r0x02a85458:
                  local_118 = puVar7;
                  pcVar38 = local_100;
                  if (((local_128 & 1) != 0) && (puVar7 != (undefined1 *)0x0)) {
                    plVar18 = *(long **)(lVar9 + 0x20);
                    DAT_043f1798 = plVar19;
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = plVar19;
                      plVar18 = plVar19;
                    }
                    uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                    if ((uVar29 & 1) != 0) {
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar9 + 0x38d480)) {
                        FUN_02bcc824(plVar18,puVar7,0,8);
                        plVar19 = DAT_043f1798;
                        pcVar38 = local_100;
                        goto joined_r0x02a84e3c;
                      }
                    }
                    (**(code **)(*plVar18 + 0x18))(plVar18,puVar7,0,8);
                    plVar19 = DAT_043f1798;
                    pcVar38 = local_100;
                  }
joined_r0x02a84e3c:
                  local_100 = pcVar38;
                  puVar7 = local_e8;
                  if (((local_110 & 1) != 0) && (pcVar38 != (char *)0x0)) {
                    plVar18 = *(long **)(lVar9 + 0x20);
                    DAT_043f1798 = plVar19;
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = plVar19;
                      plVar18 = plVar19;
                    }
                    uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                    if ((uVar29 & 1) != 0) {
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar9 + 0x38d480)) {
                        FUN_02bcc824(plVar18,pcVar38,0,8);
                        plVar19 = DAT_043f1798;
                        puVar7 = local_e8;
                        goto joined_r0x02a85498;
                      }
                    }
                    (**(code **)(*plVar18 + 0x18))(plVar18,pcVar38,0,8);
                    plVar19 = DAT_043f1798;
                    puVar7 = local_e8;
                  }
joined_r0x02a85498:
                  pcVar38 = pcVar34;
                  local_e8 = puVar7;
                  if (((local_f8 & 1) != 0) && (puVar7 != (undefined1 *)0x0)) {
                    plVar18 = *(long **)(lVar9 + 0x20);
                    DAT_043f1798 = plVar19;
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = plVar19;
                      plVar18 = plVar19;
                    }
                    uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                    if ((uVar29 & 1) != 0) {
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar9 + 0x38d480)) {
                        FUN_02bcc824(plVar18,puVar7,0,8);
                        plVar19 = DAT_043f1798;
                        goto joined_r0x02a84fa8;
                      }
                    }
                    (**(code **)(*plVar18 + 0x18))(plVar18,puVar7,0,8);
                    plVar19 = DAT_043f1798;
                  }
joined_r0x02a84fa8:
                  bVar11 = true;
                  DAT_043f1798 = plVar19;
                  goto joined_r0x02a84fa8;
                }
                uVar29 = (ulong)((byte)local_e0._0_1_ >> 1);
                if ((local_e0 & 1) != 0) {
                  uVar29 = local_d8;
                }
                if (uVar29 == 0) goto LAB_02a848e4;
                if ((local_e0 & 1) == 0) {
                  cVar13 = local_e0._1_1_;
                  if (((byte)local_e0._0_1_ & 0xfe) == 2) goto LAB_02a83b78;
                  goto LAB_02a83c30;
                }
                cVar13 = *local_d0;
                pcVar34 = local_d0;
                if (local_d8 != 1) goto LAB_02a83c30;
LAB_02a83b78:
                if (*(char *)(lVar15 + 0xa5) == '\0') {
                  pcVar34 = *(char **)(lVar15 + 0x30);
                  pcVar23 = *(char **)(lVar15 + 0x38);
                  if (*(char *)(lVar15 + 0xa6) != '\0') {
                    if (pcVar34 < pcVar23) goto LAB_02a848d0;
LAB_02a84314:
                    pvVar42 = (void *)*puVar1;
                    sVar40 = (long)pcVar34 - (long)pvVar42;
                    uVar29 = sVar40 + 1;
                    if ((long)uVar29 < 0) goto LAB_02a86050;
                    if ((ulong)((long)pcVar23 - (long)pvVar42) < 0x3fffffffffffffff) {
                      uVar17 = ((long)pcVar23 - (long)pvVar42) * 2;
                      if (uVar29 <= uVar17) {
                        uVar29 = uVar17;
                      }
                      if (uVar29 != 0) goto LAB_02a84fb8;
                      pvVar41 = (void *)0x0;
                    }
                    else {
                      uVar29 = 0x7fffffffffffffff;
LAB_02a84fb8:
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      pvVar41 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar29,8);
                    }
                    pcVar35 = (char *)((long)pvVar41 + uVar29);
                    *(char *)((long)pvVar41 + sVar40) = cVar13;
                    if (0 < (long)sVar40) {
                      memcpy(pvVar41,pvVar42,sVar40);
                    }
                    *(void **)(lVar15 + 0x28) = pvVar41;
                    *(char **)(lVar15 + 0x30) = (char *)((long)pvVar41 + sVar40) + 1;
                    *(char **)(lVar15 + 0x38) = pcVar35;
                    plVar19 = DAT_043f1798;
                    if (pvVar42 != (void *)0x0) {
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                      if ((uVar29 & 1) != 0) {
                        if (*(char *)(lVar9 + 0x38d488) == '\0') {
                          *(undefined1 *)(lVar9 + 0x38d488) = 1;
                          *(undefined8 *)(lVar9 + 0x38d478) = 0;
                          *(undefined8 *)(lVar9 + 0x38d480) = 0;
                          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                        }
                        if (0 < *(int *)(lVar9 + 0x38d480)) {
                          FUN_02bcc824(plVar18,pvVar42,0,8);
                          goto LAB_02a848e4;
                        }
                      }
                      (**(code **)(*plVar18 + 0x18))(plVar18,pvVar42,0,8);
                    }
                    goto LAB_02a848e4;
                  }
                  if (pcVar34 == pcVar23) goto LAB_02a84314;
                  goto LAB_02a848d0;
                }
                uVar12 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                   (*(long **)(lVar15 + 0x18),cVar13);
                plVar19 = DAT_043f1798;
                puVar7 = *(undefined1 **)(lVar15 + 0x30);
                if (puVar7 < *(undefined1 **)(lVar15 + 0x38)) {
                  *puVar7 = uVar12;
LAB_02a848d4:
                  *plVar25 = *plVar25 + 1;
                  goto LAB_02a848e4;
                }
                pvVar42 = (void *)*puVar1;
                sVar40 = (long)puVar7 - (long)pvVar42;
                uVar29 = sVar40 + 1;
                if (-1 < (long)uVar29) {
                  uVar17 = (long)*(undefined1 **)(lVar15 + 0x38) - (long)pvVar42;
                  if (uVar17 < 0x3fffffffffffffff) {
                    uVar17 = uVar17 * 2;
                    if (uVar29 <= uVar17) {
                      uVar29 = uVar17;
                    }
                    if (uVar29 != 0) goto LAB_02a847f0;
                    pvVar41 = (void *)0x0;
                  }
                  else {
                    uVar29 = 0x7fffffffffffffff;
LAB_02a847f0:
                    plVar18 = *(long **)(lVar9 + 0x20);
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = DAT_043f1798;
                      plVar18 = plVar19;
                    }
                    pvVar41 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar29,8);
                  }
                  pcVar35 = (char *)((long)pvVar41 + uVar29);
                  *(undefined1 *)((long)pvVar41 + sVar40) = uVar12;
                  if (0 < (long)sVar40) {
                    memcpy(pvVar41,pvVar42,sVar40);
                  }
                  *(void **)(lVar15 + 0x28) = pvVar41;
                  *(undefined1 **)(lVar15 + 0x30) = (undefined1 *)((long)pvVar41 + sVar40) + 1;
                  *(char **)(lVar15 + 0x38) = pcVar35;
                  plVar19 = DAT_043f1798;
                  if (pvVar42 == (void *)0x0) goto joined_r0x02a84fa8;
                  plVar18 = *(long **)(lVar9 + 0x20);
                  if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                    *(long **)(lVar9 + 0x20) = DAT_043f1798;
                    plVar18 = plVar19;
                  }
                  uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                  goto joined_r0x02a848c4;
                }
                goto LAB_02a86030;
              }
              if (((uVar20 & 0x1b0) != 0) || (*pcVar38 != '\\')) {
                std::string::operator=((string *)&local_e0,*pcVar38);
                pcVar38 = pcVar38 + 1;
                goto joined_r0x02a8364c;
              }
              if (uVar2 == 0) {
                pcVar38 = (char *)FUN_02a89bf0(param_1,pcVar38 + 1,param_3,&local_e0,lVar15);
              }
              else {
                pcVar38 = (char *)FUN_02a8a2d0();
              }
              if (pcVar38 != param_3) goto LAB_02a83a80;
LAB_02a83a8c:
              plVar19 = DAT_043f1798;
              uVar29 = (ulong)((byte)local_e0._0_1_ >> 1);
              if ((local_e0 & 1) != 0) {
                uVar29 = local_d8;
              }
              if (uVar29 != 0) {
                if ((local_e0 & 1) == 0) {
                  cVar13 = local_e0._1_1_;
                  if (((byte)local_e0._0_1_ & 0xfe) == 2) goto LAB_02a83abc;
                }
                else {
                  cVar13 = *local_d0;
                  pcVar34 = local_d0;
                  if (local_d8 == 1) {
LAB_02a83abc:
                    if (*(char *)(lVar15 + 0xa5) == '\0') {
                      pcVar34 = *(char **)(lVar15 + 0x30);
                      pcVar23 = *(char **)(lVar15 + 0x38);
                      if (*(char *)(lVar15 + 0xa6) == '\0') {
                        if (pcVar34 == pcVar23) goto LAB_02a83e78;
                      }
                      else if (pcVar23 <= pcVar34) {
LAB_02a83e78:
                        pvVar42 = (void *)*puVar1;
                        sVar40 = (long)pcVar34 - (long)pvVar42;
                        uVar29 = sVar40 + 1;
                        if ((long)uVar29 < 0) {
LAB_02a86050:
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        if ((ulong)((long)pcVar23 - (long)pvVar42) < 0x3fffffffffffffff) {
                          uVar17 = ((long)pcVar23 - (long)pvVar42) * 2;
                          if (uVar29 <= uVar17) {
                            uVar29 = uVar17;
                          }
                          if (uVar29 != 0) goto LAB_02a84450;
                          pvVar41 = (void *)0x0;
                        }
                        else {
                          uVar29 = 0x7fffffffffffffff;
LAB_02a84450:
                          plVar18 = *(long **)(lVar9 + 0x20);
                          if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                            *(long **)(lVar9 + 0x20) = DAT_043f1798;
                            plVar18 = plVar19;
                          }
                          pvVar41 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar29,8);
                        }
                        pcVar35 = (char *)((long)pvVar41 + sVar40) + 1;
                        *(char *)((long)pvVar41 + sVar40) = cVar13;
                        if (0 < (long)sVar40) {
                          memcpy(pvVar41,pvVar42,sVar40);
                        }
                        *(void **)(lVar15 + 0x28) = pvVar41;
                        *(char **)(lVar15 + 0x30) = pcVar35;
                        *(ulong *)(lVar15 + 0x38) = (long)pvVar41 + uVar29;
                        plVar19 = DAT_043f1798;
                        goto joined_r0x02a844d0;
                      }
LAB_02a848d0:
                      *pcVar34 = cVar13;
                      goto LAB_02a848d4;
                    }
                    cVar13 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                       (*(long **)(lVar15 + 0x18),cVar13);
                    plVar19 = DAT_043f1798;
                    pcVar34 = *(char **)(lVar15 + 0x30);
                    if (pcVar34 < *(char **)(lVar15 + 0x38)) goto LAB_02a848d0;
                    pvVar42 = (void *)*puVar1;
                    sVar40 = (long)pcVar34 - (long)pvVar42;
                    uVar29 = sVar40 + 1;
                    if ((long)uVar29 < 0) goto LAB_02a86050;
                    uVar17 = (long)*(char **)(lVar15 + 0x38) - (long)pvVar42;
                    if (uVar17 < 0x3fffffffffffffff) {
                      uVar17 = uVar17 * 2;
                      if (uVar29 <= uVar17) {
                        uVar29 = uVar17;
                      }
                      if (uVar29 != 0) goto LAB_02a83dd4;
                      pvVar41 = (void *)0x0;
                    }
                    else {
                      uVar29 = 0x7fffffffffffffff;
LAB_02a83dd4:
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      pvVar41 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar29,8);
                    }
                    pcVar35 = (char *)((long)pvVar41 + uVar29);
                    *(char *)((long)pvVar41 + sVar40) = cVar13;
                    if (0 < (long)sVar40) {
                      memcpy(pvVar41,pvVar42,sVar40);
                    }
                    *(void **)(lVar15 + 0x28) = pvVar41;
                    *(char **)(lVar15 + 0x30) = (char *)((long)pvVar41 + sVar40) + 1;
                    *(char **)(lVar15 + 0x38) = pcVar35;
                    plVar19 = DAT_043f1798;
joined_r0x02a844d0:
                    if (pvVar42 == (void *)0x0) goto joined_r0x02a84fa8;
                    plVar18 = *(long **)(lVar9 + 0x20);
                    DAT_043f1798 = plVar19;
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = plVar19;
                      plVar18 = plVar19;
                    }
                    uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
joined_r0x02a848c4:
                    if ((uVar29 & 1) != 0) {
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar9 + 0x38d480)) {
                        FUN_02bcc824(plVar18,pvVar42,0,8);
                        goto LAB_02a848e4;
                      }
                    }
                    (**(code **)(*plVar18 + 0x18))(plVar18,pvVar42,0,8);
                    goto LAB_02a848e4;
                  }
                }
LAB_02a83c30:
                FUN_02a8a43c(lVar15,cVar13,pcVar34[1]);
              }
LAB_02a848e4:
              bVar11 = true;
              if ((local_e0 & 1) != 0) goto LAB_02a848f4;
LAB_02a84fac:
              if (bVar11) goto LAB_02a83440;
            }
            else {
              if (*pcVar36 != '[') goto LAB_02a835dc;
              cVar13 = *pcVar34;
              if (cVar13 == '.') {
                pcVar38 = (char *)FUN_02a899bc(param_1,pcVar36 + 2,param_3,&local_e0);
                uVar29 = local_e0 & 0xff;
                goto LAB_02a835dc;
              }
              if (cVar13 == ':') {
                pcVar23 = pcVar36 + 2;
                local_80 = CONCAT62(local_80._2_6_,0x5d3a);
                if ((1 < (long)param_3 - (long)pcVar23) && (pcVar21 != pcVar23)) {
                  lVar22 = 2;
                  while( true ) {
                    cVar13 = pcVar36[lVar22];
                    while (cVar13 != ':') {
                      if ((long)(param_3 + -2) - (long)pcVar36 == lVar22) goto LAB_02a8602c;
                      pcVar35 = pcVar34 + lVar22;
                      lVar22 = lVar22 + 1;
                      cVar13 = *pcVar35;
                    }
                    pcVar35 = pcVar36 + lVar22;
                    if (pcVar35[1] == ']') break;
                    lVar22 = lVar22 + 1;
                    if (pcVar21 == pcVar36 + lVar22) goto LAB_02a8602c;
                  }
                  if (pcVar35 != param_3) {
                    uVar8 = *(undefined4 *)(param_1 + 0x18);
                    uVar29 = lVar22 - 2;
                    local_c8 = 0;
                    local_c0 = 0;
                    local_b8 = (char *)0x0;
                    if (0xffffffffffffffef < uVar29) {
LAB_02a86034:
                      local_b8 = (char *)0x0;
                      local_c0 = 0;
                      local_c8 = 0;
                    /* WARNING: Subroutine does not return */
                      std::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uVar29 < 0x17) {
                      uVar20 = (int)uVar29 << 1;
                      uVar17 = (ulong)uVar20;
                      local_c8 = (ulong)(byte)uVar20;
                      pcVar34 = pcVar32;
                      if (lVar22 != 2) goto LAB_02a83768;
                      uVar20 = 0;
                      pcVar16 = pcVar32;
                    }
                    else {
                      uVar17 = lVar22 + 0xeU & 0xfffffffffffffff0;
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      pcVar34 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar17,8);
                      uVar17 = uVar17 | 1;
                      local_c8 = uVar17;
                      local_c0 = uVar29;
                      local_b8 = pcVar34;
LAB_02a83768:
                      do {
                        uVar20 = (uint)uVar17;
                        uVar29 = uVar29 - 1;
                        pcVar16 = pcVar34 + 1;
                        *pcVar34 = *pcVar23;
                        pcVar34 = pcVar16;
                        pcVar23 = pcVar23 + 1;
                      } while (uVar29 != 0);
                    }
                    *pcVar16 = '\0';
                    uVar29 = (ulong)(uVar20 >> 1 & 0x7f);
                    pcVar34 = pcVar32;
                    if ((uVar20 & 1) != 0) {
                      uVar29 = local_c0;
                      pcVar34 = local_b8;
                    }
                    (**(code **)(**(long **)(param_1 + 8) + 0x30))
                              (*(long **)(param_1 + 8),pcVar34,pcVar34 + uVar29);
                    pcVar34 = pcVar32;
                    if ((local_c8 & 1) != 0) {
                      pcVar34 = local_b8;
                    }
                    uVar14 = std::__get_classname(pcVar34,(bool)((byte)uVar8 & 1));
                    pcVar34 = local_b8;
                    plVar19 = DAT_043f1798;
                    if (((local_c8 & 1) != 0) && (local_b8 != (char *)0x0)) {
                      plVar18 = *(long **)(lVar9 + 0x20);
                      if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                        *(long **)(lVar9 + 0x20) = DAT_043f1798;
                        plVar18 = plVar19;
                      }
                      uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                      if ((uVar29 & 1) != 0) {
                        if (*(char *)(lVar9 + 0x38d488) == '\0') {
                          *(undefined1 *)(lVar9 + 0x38d488) = 1;
                          *(undefined8 *)(lVar9 + 0x38d478) = 0;
                          *(undefined8 *)(lVar9 + 0x38d480) = 0;
                          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                        }
                        if (0 < *(int *)(lVar9 + 0x38d480)) {
                          FUN_02bcc824(plVar18,pcVar34,0,8);
                          goto LAB_02a83884;
                        }
                      }
                      (**(code **)(*plVar18 + 0x18))(plVar18,pcVar34,0,8);
                    }
LAB_02a83884:
                    if (uVar14 != 0) {
                      *(ushort *)(lVar15 + 0xa0) = *(ushort *)(lVar15 + 0xa0) | uVar14;
                      goto LAB_02a85270;
                    }
                    FUN_02a8ad40();
                    uVar29 = local_128;
                    goto LAB_02a86040;
                  }
                }
                goto LAB_02a8602c;
              }
              if (cVar13 != '=') goto LAB_02a835d8;
              pcVar34 = pcVar36 + 2;
              local_f8 = CONCAT62(local_f8._2_6_,0x5d3d);
              if (((long)param_3 - (long)pcVar34 < 2) || (pcVar21 == pcVar34)) goto LAB_02a8602c;
              pcVar35 = pcVar34;
              while( true ) {
                cVar13 = *pcVar35;
                while (cVar13 != '=') {
                  if (param_3 + -2 == pcVar35) goto LAB_02a8602c;
                  cVar13 = pcVar35[1];
                  pcVar35 = pcVar35 + 1;
                }
                if (pcVar35[1] == ']') break;
                pcVar35 = pcVar35 + 1;
                if (pcVar21 == pcVar35) goto LAB_02a8602c;
              }
              if (pcVar35 == param_3) goto LAB_02a8602c;
              FUN_02a8a8cc(&local_80,param_1,pcVar34,pcVar35);
              plVar19 = DAT_043f1798;
              uVar29 = local_80 >> 1 & 0x7f;
              if ((local_80 & 1) != 0) {
                uVar29 = local_78;
              }
              if (uVar29 == 0) goto LAB_02a86044;
              local_c8 = 0;
              pcVar34 = pcVar26;
              if ((local_80 & 1) != 0) {
                pcVar34 = local_70;
              }
              local_c0 = 0;
              local_b8 = (char *)0x0;
              if (0xffffffffffffffef < uVar29) goto LAB_02a86034;
              pcVar23 = pcVar34 + uVar29;
              if (uVar29 < 0x17) {
                uVar20 = (int)uVar29 << 1;
                local_c8 = (ulong)(byte)uVar20;
                pcVar16 = pcVar32;
                uVar29 = (ulong)uVar20;
              }
              else {
                uVar17 = uVar29 + 0x10 & 0xfffffffffffffff0;
                plVar18 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = DAT_043f1798;
                  plVar18 = plVar19;
                }
                pcVar16 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar17,8);
                local_c8 = uVar17 | 1;
                local_b8 = pcVar16;
                local_c0 = uVar29;
                uVar29 = local_c8;
              }
              for (; pcVar23 != pcVar34; pcVar34 = pcVar34 + 1) {
                *pcVar16 = *pcVar34;
                pcVar16 = pcVar16 + 1;
              }
              *pcVar16 = '\0';
              uVar17 = (ulong)((uint)uVar29 >> 1 & 0x7f);
              pcVar34 = pcVar32;
              if ((uVar29 & 1) != 0) {
                uVar17 = local_c0;
                pcVar34 = local_b8;
              }
              (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
                        (&local_98,*(long **)(param_1 + 0x10),pcVar34,pcVar34 + uVar17);
              pcVar23 = local_b8;
              pcVar34 = (char *)(local_98 >> 1 & 0x7f);
              if ((local_98 & 1) != 0) {
                pcVar34 = local_90;
              }
              uVar29 = 0xaaaaaaaaaaaaaaa;
              plVar19 = DAT_043f1798;
              if (pcVar34 != (char *)0x1) {
                if (pcVar34 == (char *)0xc) {
                  bVar11 = (local_98 & 1) != 0;
                  puVar7 = (undefined1 *)((ulong)&local_98 | 4);
                  if (bVar11) {
                    puVar7 = local_88 + 3;
                  }
                  puVar3 = (undefined1 *)((ulong)&local_98 | 1);
                  if (bVar11) {
                    puVar3 = local_88;
                  }
                  puVar3[0xb] = *puVar7;
                  plVar19 = DAT_043f1798;
                }
                else if ((local_98 & 1) == 0) {
                  local_98 = local_98 & 0xffffffffffff0000;
                }
                else {
                  *local_88 = 0;
                  local_90 = (char *)0x0;
                  plVar19 = DAT_043f1798;
                }
              }
              DAT_043f1798 = plVar19;
              if (((local_c8 & 1) != 0) && (local_b8 != (char *)0x0)) {
                plVar18 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = plVar19;
                  plVar18 = plVar19;
                }
                uVar17 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                if ((uVar17 & 1) != 0) {
                  if (*(char *)(lVar9 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar9 + 0x38d488) = 1;
                    *(undefined8 *)(lVar9 + 0x38d478) = 0;
                    *(undefined8 *)(lVar9 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar9 + 0x38d480)) {
                    FUN_02bcc824(plVar18,pcVar23,0,8);
                    goto LAB_02a84080;
                  }
                }
                (**(code **)(*plVar18 + 0x18))(plVar18,pcVar23,0,8);
              }
LAB_02a84080:
              plVar19 = DAT_043f1798;
              pcVar34 = (char *)(local_98 >> 1 & 0x7f);
              if ((local_98 & 1) != 0) {
                pcVar34 = local_90;
              }
              if (pcVar34 == (char *)0x0) {
                uVar29 = local_80 >> 1 & 0x7f;
                if ((local_80 & 1) != 0) {
                  uVar29 = local_78;
                }
                if (uVar29 == 2) {
                  pcVar34 = pcVar26;
                  if ((local_80 & 1) != 0) {
                    pcVar34 = local_70;
                  }
                  FUN_02a8a43c(lVar15,*pcVar34,pcVar34[1]);
                  plVar19 = DAT_043f1798;
                  puVar7 = local_88;
                  goto joined_r0x02a84784;
                }
                if (uVar29 != 1) goto LAB_02a86044;
                pcVar34 = pcVar26;
                if ((local_80 & 1) != 0) {
                  pcVar34 = local_70;
                }
                cVar13 = *pcVar34;
                if (*(char *)(lVar15 + 0xa5) != '\0') {
                  uVar12 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                     (*(long **)(lVar15 + 0x18),cVar13);
                  plVar19 = DAT_043f1798;
                  puVar7 = *(undefined1 **)(lVar15 + 0x30);
                  if (puVar7 < *(undefined1 **)(lVar15 + 0x38)) {
                    *puVar7 = uVar12;
LAB_02a85198:
                    *plVar25 = *plVar25 + 1;
                    plVar19 = DAT_043f1798;
                    puVar7 = local_88;
                    goto joined_r0x02a84784;
                  }
                  pbVar43 = (byte *)*puVar1;
                  sVar40 = (long)puVar7 - (long)pbVar43;
                  uVar29 = sVar40 + 1;
                  if ((long)uVar29 < 0) goto LAB_02a86050;
                  uVar17 = (long)*(undefined1 **)(lVar15 + 0x38) - (long)pbVar43;
                  if (uVar17 < 0x3fffffffffffffff) {
                    uVar17 = uVar17 * 2;
                    if (uVar29 <= uVar17) {
                      uVar29 = uVar17;
                    }
                    if (uVar29 != 0) goto LAB_02a850fc;
                    pvVar42 = (void *)0x0;
                  }
                  else {
                    uVar29 = 0x7fffffffffffffff;
LAB_02a850fc:
                    plVar18 = *(long **)(lVar9 + 0x20);
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = DAT_043f1798;
                      plVar18 = plVar19;
                    }
                    pvVar42 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar29,8);
                  }
                  *(undefined1 *)((long)pvVar42 + sVar40) = uVar12;
                  if (0 < (long)sVar40) {
                    memcpy(pvVar42,pbVar43,sVar40);
                  }
                  *(void **)(lVar15 + 0x28) = pvVar42;
                  *(undefined1 **)(lVar15 + 0x30) = (undefined1 *)((long)pvVar42 + sVar40) + 1;
                  *(ulong *)(lVar15 + 0x38) = (long)pvVar42 + uVar29;
                  plVar19 = DAT_043f1798;
                  goto joined_r0x02a85188;
                }
                pcVar34 = *(char **)(lVar15 + 0x30);
                pcVar23 = *(char **)(lVar15 + 0x38);
                if (*(char *)(lVar15 + 0xa6) == '\0') {
                  if (pcVar34 != pcVar23) goto LAB_02a85194;
                }
                else if (pcVar34 < pcVar23) {
LAB_02a85194:
                  *pcVar34 = cVar13;
                  goto LAB_02a85198;
                }
                pbVar43 = (byte *)*puVar1;
                sVar40 = (long)pcVar34 - (long)pbVar43;
                uVar29 = sVar40 + 1;
                if ((long)uVar29 < 0) goto LAB_02a86050;
                if ((ulong)((long)pcVar23 - (long)pbVar43) < 0x3fffffffffffffff) {
                  uVar17 = ((long)pcVar23 - (long)pbVar43) * 2;
                  if (uVar29 <= uVar17) {
                    uVar29 = uVar17;
                  }
                  if (uVar29 != 0) goto LAB_02a85284;
                  pvVar42 = (void *)0x0;
                }
                else {
                  uVar29 = 0x7fffffffffffffff;
LAB_02a85284:
                  plVar18 = *(long **)(lVar9 + 0x20);
                  if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                    *(long **)(lVar9 + 0x20) = DAT_043f1798;
                    plVar18 = plVar19;
                  }
                  pvVar42 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar29,8);
                }
                *(char *)((long)pvVar42 + sVar40) = cVar13;
                if (0 < (long)sVar40) {
                  memcpy(pvVar42,pbVar43,sVar40);
                }
                *(void **)(lVar15 + 0x28) = pvVar42;
                *(char **)(lVar15 + 0x30) = (char *)((long)pvVar42 + sVar40) + 1;
                *(ulong *)(lVar15 + 0x38) = (long)pvVar42 + uVar29;
                plVar19 = DAT_043f1798;
                puVar7 = local_88;
                if (pbVar43 == (byte *)0x0) goto joined_r0x02a84784;
                plVar18 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = DAT_043f1798;
                  plVar18 = plVar19;
                }
                uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                if ((uVar29 & 1) != 0) {
                  if (*(char *)(lVar9 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar9 + 0x38d488) = 1;
                    *(undefined8 *)(lVar9 + 0x38d478) = 0;
                    *(undefined8 *)(lVar9 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a85398;
                  goto LAB_02a85428;
                }
LAB_02a85398:
                lVar22 = *plVar18;
LAB_02a84770:
                (**(code **)(lVar22 + 0x18))(plVar18,pbVar43,0,8);
                plVar19 = DAT_043f1798;
                puVar7 = local_88;
              }
              else {
                psVar4 = *(string **)(lVar15 + 0x90);
                if (psVar4 == *(string **)(lVar15 + 0x98)) {
                  lVar22 = (long)psVar4 - *(long *)(lVar15 + 0x88) >> 3;
                  uVar17 = lVar22 * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar17) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar30 = (long)*(string **)(lVar15 + 0x98) - *(long *)(lVar15 + 0x88) >> 3;
                  if ((ulong)(lVar30 * -0x5555555555555555) < 0x555555555555555) {
                    uVar31 = lVar30 * 0x5555555555555556;
                    uVar29 = uVar17;
                    if (uVar17 <= uVar31) {
                      uVar29 = uVar31;
                    }
                    if (uVar29 != 0) goto LAB_02a84230;
                    lVar30 = 0;
                  }
                  else {
LAB_02a84230:
                    plVar18 = *(long **)(lVar9 + 0x20);
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = DAT_043f1798;
                      plVar18 = plVar19;
                    }
                    lVar30 = (**(code **)(*plVar18 + 0x10))(plVar18,uVar29 * 0x18,8);
                  }
                  this = (string *)(lVar30 + lVar22 * 8);
                  std::string::string(this,(string *)&local_98);
                  pbVar24 = *(byte **)(lVar15 + 0x88);
                  psVar4 = this + 0x18;
                  pbVar43 = *(byte **)(lVar15 + 0x90);
                  psVar39 = this;
                  if (*(byte **)(lVar15 + 0x90) == pbVar24) {
                    pbVar43 = pbVar24;
                  }
                  else {
                    do {
                      pbVar33 = pbVar43 + -0x18;
                      uVar5 = *(undefined8 *)(pbVar43 + -0x10);
                      uVar6 = *(undefined8 *)(pbVar43 + -8);
                      this = psVar39 + -0x18;
                      *(undefined8 *)this = *(undefined8 *)pbVar33;
                      *(undefined8 *)(psVar39 + -0x10) = uVar5;
                      *(undefined8 *)(psVar39 + -8) = uVar6;
                      pbVar43[-8] = 0;
                      pbVar43[-7] = 0;
                      pbVar43[-6] = 0;
                      pbVar43[-5] = 0;
                      pbVar43[-4] = 0;
                      pbVar43[-3] = 0;
                      pbVar43[-2] = 0;
                      pbVar43[-1] = 0;
                      pbVar33[0] = 0;
                      pbVar33[1] = 0;
                      pbVar33[2] = 0;
                      pbVar33[3] = 0;
                      pbVar33[4] = 0;
                      pbVar33[5] = 0;
                      pbVar33[6] = 0;
                      pbVar33[7] = 0;
                      pbVar43[-0x10] = 0;
                      pbVar43[-0xf] = 0;
                      pbVar43[-0xe] = 0;
                      pbVar43[-0xd] = 0;
                      pbVar43[-0xc] = 0;
                      pbVar43[-0xb] = 0;
                      pbVar43[-10] = 0;
                      pbVar43[-9] = 0;
                      pbVar43 = pbVar33;
                      psVar39 = this;
                    } while (pbVar24 != pbVar33);
                    pbVar24 = *(byte **)(lVar15 + 0x90);
                    pbVar43 = *(byte **)(lVar15 + 0x88);
                  }
                  *(string **)(lVar15 + 0x88) = this;
                  *(string **)(lVar15 + 0x90) = psVar4;
                  *(ulong *)(lVar15 + 0x98) = lVar30 + uVar29 * 0x18;
                  plVar19 = DAT_043f1798;
                  if (pbVar24 != pbVar43) {
                    bVar37 = pbVar24[-0x18];
                    pbVar33 = pbVar24 + -0x18;
                    do {
                      pbVar10 = pbVar33;
                      DAT_043f1798 = plVar19;
                      if (((bVar37 & 1) != 0) && (lVar22 = *(long *)(pbVar24 + -8), lVar22 != 0)) {
                        plVar18 = *(long **)(lVar9 + 0x20);
                        if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                          *(long **)(lVar9 + 0x20) = plVar19;
                          plVar18 = plVar19;
                        }
                        uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                        if ((uVar29 & 1) != 0) {
                          if (*(char *)(lVar9 + 0x38d488) == '\0') {
                            *(undefined1 *)(lVar9 + 0x38d488) = 1;
                            *(undefined8 *)(lVar9 + 0x38d478) = 0;
                            *(undefined8 *)(lVar9 + 0x38d480) = 0;
                            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                          }
                          if (0 < *(int *)(lVar9 + 0x38d480)) {
                            FUN_02bcc824(plVar18,lVar22,0,8);
                            goto LAB_02a845c8;
                          }
                        }
                        (**(code **)(*plVar18 + 0x18))(plVar18,lVar22,0,8);
                      }
LAB_02a845c8:
                      plVar19 = DAT_043f1798;
                      if (pbVar43 == pbVar10) break;
                      bVar37 = pbVar10[-0x18];
                      pbVar33 = pbVar10 + -0x18;
                      pbVar24 = pbVar10;
                    } while( true );
                  }
joined_r0x02a85188:
                  puVar7 = local_88;
                  if (pbVar43 != (byte *)0x0) {
                    plVar18 = *(long **)(lVar9 + 0x20);
                    DAT_043f1798 = plVar19;
                    if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                      *(long **)(lVar9 + 0x20) = plVar19;
                      plVar18 = plVar19;
                    }
                    uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                    if ((uVar29 & 1) != 0) {
                      if (*(char *)(lVar9 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar9 + 0x38d488) = 1;
                        *(undefined8 *)(lVar9 + 0x38d478) = 0;
                        *(undefined8 *)(lVar9 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (0 < *(int *)(lVar9 + 0x38d480)) {
LAB_02a85428:
                        FUN_02bcc824(plVar18,pbVar43,0,8);
                        plVar19 = DAT_043f1798;
                        puVar7 = local_88;
                        goto joined_r0x02a84784;
                      }
                    }
                    lVar22 = *plVar18;
                    goto LAB_02a84770;
                  }
                }
                else {
                  std::string::string(psVar4,(string *)&local_98);
                  *(long *)(lVar15 + 0x90) = *(long *)(lVar15 + 0x90) + 0x18;
                  plVar19 = DAT_043f1798;
                  puVar7 = local_88;
                }
              }
joined_r0x02a84784:
              DAT_043f1798 = plVar19;
              local_88 = puVar7;
              if (((local_98 & 1) != 0) && (puVar7 != (undefined1 *)0x0)) {
                plVar18 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = plVar19;
                  plVar18 = plVar19;
                }
                uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                if ((uVar29 & 1) != 0) {
                  if (*(char *)(lVar9 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar9 + 0x38d488) = 1;
                    *(undefined8 *)(lVar9 + 0x38d478) = 0;
                    *(undefined8 *)(lVar9 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar9 + 0x38d480)) {
                    FUN_02bcc824(plVar18,puVar7,0,8);
                    goto LAB_02a851b0;
                  }
                }
                (**(code **)(*plVar18 + 0x18))(plVar18,puVar7,0,8);
              }
LAB_02a851b0:
              pcVar34 = local_70;
              plVar19 = DAT_043f1798;
              if (((local_80 & 1) != 0) && (local_70 != (char *)0x0)) {
                plVar18 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = DAT_043f1798;
                  plVar18 = plVar19;
                }
                uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                if ((uVar29 & 1) != 0) {
                  if (*(char *)(lVar9 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar9 + 0x38d488) = 1;
                    *(undefined8 *)(lVar9 + 0x38d478) = 0;
                    *(undefined8 *)(lVar9 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar9 + 0x38d480)) {
                    FUN_02bcc824(plVar18,pcVar34,0,8);
                    goto LAB_02a85270;
                  }
                }
                (**(code **)(*plVar18 + 0x18))(plVar18,pcVar34,0,8);
              }
LAB_02a85270:
              pcVar35 = pcVar35 + 2;
              bVar11 = false;
joined_r0x02a84fa8:
              if ((local_e0 & 1) == 0) goto LAB_02a84fac;
LAB_02a848f4:
              pcVar34 = local_d0;
              plVar19 = DAT_043f1798;
              if (local_d0 == (char *)0x0) goto LAB_02a84fac;
              plVar18 = *(long **)(lVar9 + 0x20);
              if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                *(long **)(lVar9 + 0x20) = DAT_043f1798;
                plVar18 = plVar19;
              }
              uVar29 = (**(code **)(*plVar18 + 0xc0))(plVar18);
              if ((uVar29 & 1) == 0) {
LAB_02a84984:
                (**(code **)(*plVar18 + 0x18))(plVar18,pcVar34,0,8);
              }
              else {
                if (*(char *)(lVar9 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar9 + 0x38d488) = 1;
                  *(undefined8 *)(lVar9 + 0x38d478) = 0;
                  *(undefined8 *)(lVar9 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a84984;
                FUN_02bcc824(plVar18,pcVar34,0,8);
              }
              if (bVar11) goto LAB_02a83440;
            }
          }
          plVar19 = DAT_043f1798;
        } while (pcVar35 != pcVar36);
        if (pcVar36 != param_3) {
          if (*pcVar36 == '-') {
            if (*(char *)(lVar15 + 0xa5) == '\0') {
              puVar28 = *(undefined1 **)(lVar15 + 0x30);
              puVar7 = *(undefined1 **)(lVar15 + 0x38);
              if (*(char *)(lVar15 + 0xa6) == '\0') {
                if (puVar28 != puVar7) goto LAB_02a85cf8;
              }
              else if (puVar28 < puVar7) {
LAB_02a85cf8:
                *puVar28 = 0x2d;
                goto LAB_02a85d00;
              }
              pvVar42 = (void *)*puVar1;
              sVar40 = (long)puVar28 - (long)pvVar42;
              uVar29 = sVar40 + 1;
              if ((long)uVar29 < 0) goto LAB_02a86030;
              if ((ulong)((long)puVar7 - (long)pvVar42) < 0x3fffffffffffffff) {
                uVar17 = ((long)puVar7 - (long)pvVar42) * 2;
                if (uVar29 <= uVar17) {
                  uVar29 = uVar17;
                }
                if (uVar29 != 0) goto LAB_02a85d18;
                pvVar41 = (void *)0x0;
              }
              else {
                uVar29 = 0x7fffffffffffffff;
LAB_02a85d18:
                plVar25 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = DAT_043f1798;
                  plVar25 = plVar19;
                }
                pvVar41 = (void *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar29,8);
              }
              *(undefined1 *)((long)pvVar41 + sVar40) = 0x2d;
              if (0 < (long)sVar40) {
                memcpy(pvVar41,pvVar42,sVar40);
              }
              *(void **)(lVar15 + 0x28) = pvVar41;
              *(undefined1 **)(lVar15 + 0x30) = (undefined1 *)((long)pvVar41 + sVar40) + 1;
              *(ulong *)(lVar15 + 0x38) = (long)pvVar41 + uVar29;
              plVar25 = DAT_043f1798;
              if (pvVar42 != (void *)0x0) {
                plVar19 = *(long **)(lVar9 + 0x20);
                if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                  *(long **)(lVar9 + 0x20) = DAT_043f1798;
                  plVar19 = plVar25;
                }
                uVar29 = (**(code **)(*plVar19 + 0xc0))(plVar19);
                if ((uVar29 & 1) != 0) {
                  if (*(char *)(lVar9 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar9 + 0x38d488) = 1;
                    *(undefined8 *)(lVar9 + 0x38d478) = 0;
                    *(undefined8 *)(lVar9 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar9 + 0x38d480)) goto LAB_02a85eb4;
                }
                lVar15 = *plVar19;
LAB_02a85e44:
                (**(code **)(lVar15 + 0x18))(plVar19,pvVar42,0,8);
              }
            }
            else {
              uVar12 = (**(code **)(**(long **)(lVar15 + 0x18) + 0x28))
                                 (*(long **)(lVar15 + 0x18),0x2d);
              plVar19 = DAT_043f1798;
              puVar28 = *(undefined1 **)(lVar15 + 0x30);
              if (puVar28 < *(undefined1 **)(lVar15 + 0x38)) {
                *puVar28 = uVar12;
LAB_02a85d00:
                *plVar25 = *plVar25 + 1;
              }
              else {
                pvVar42 = (void *)*puVar1;
                sVar40 = (long)puVar28 - (long)pvVar42;
                uVar29 = sVar40 + 1;
                if ((long)uVar29 < 0) goto LAB_02a86030;
                uVar17 = (long)*(undefined1 **)(lVar15 + 0x38) - (long)pvVar42;
                if (uVar17 < 0x3fffffffffffffff) {
                  uVar17 = uVar17 * 2;
                  if (uVar29 <= uVar17) {
                    uVar29 = uVar17;
                  }
                  if (uVar29 != 0) goto LAB_02a85bcc;
                  pvVar41 = (void *)0x0;
                }
                else {
                  uVar29 = 0x7fffffffffffffff;
LAB_02a85bcc:
                  plVar25 = *(long **)(lVar9 + 0x20);
                  if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                    *(long **)(lVar9 + 0x20) = DAT_043f1798;
                    plVar25 = plVar19;
                  }
                  pvVar41 = (void *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar29,8);
                }
                *(undefined1 *)((long)pvVar41 + sVar40) = uVar12;
                if (0 < (long)sVar40) {
                  memcpy(pvVar41,pvVar42,sVar40);
                }
                *(ulong *)(lVar15 + 0x38) = (long)pvVar41 + uVar29;
                *(void **)(lVar15 + 0x28) = pvVar41;
                *(undefined1 **)(lVar15 + 0x30) = (undefined1 *)((long)pvVar41 + sVar40) + 1;
                plVar25 = DAT_043f1798;
                if (pvVar42 != (void *)0x0) {
                  plVar19 = *(long **)(lVar9 + 0x20);
                  if (*(long **)(lVar9 + 0x20) == (long *)0x0) {
                    *(long **)(lVar9 + 0x20) = DAT_043f1798;
                    plVar19 = plVar25;
                  }
                  uVar29 = (**(code **)(*plVar19 + 0xc0))(plVar19);
                  if ((uVar29 & 1) == 0) {
LAB_02a85ce4:
                    lVar15 = *plVar19;
                    goto LAB_02a85e44;
                  }
                  if (*(char *)(lVar9 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar9 + 0x38d488) = 1;
                    *(undefined8 *)(lVar9 + 0x38d478) = 0;
                    *(undefined8 *)(lVar9 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a85ce4;
LAB_02a85eb4:
                  FUN_02bcc824(plVar19,pvVar42,0,8);
                }
              }
            }
            pcVar36 = pcVar36 + 1;
          }
          if ((pcVar36 != param_3) && (*pcVar36 == ']')) {
            return pcVar36 + 1;
          }
        }
      }
    }
  }
LAB_02a8602c:
  FUN_02a899b0();
LAB_02a86030:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


