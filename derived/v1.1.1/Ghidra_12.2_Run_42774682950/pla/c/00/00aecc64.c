/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aecc64; name: FUN_00aecc64
 */


void FUN_00aecc64(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  long *local_140;
  undefined1 *local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_68;
  int local_64;
  
  puVar14 = PTR_DAT_04379e80;
  puVar13 = PTR_DAT_04379e78;
  if (*(char *)(param_1 + 0x21a) == '\0') {
    return;
  }
  lVar25 = *(long *)(param_1 + 0x1f0);
  if (lVar25 == 0) {
    return;
  }
  if (*(int *)(lVar25 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar25 + 0xc);
  iVar16 = *(int *)(lVar25 + 0xc);
  do {
    plVar29 = *(long **)(lVar25 + 0x10);
    if (((*puVar13 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar13), iVar15 != 0)) {
      uVar17 = FUN_0095a420();
      *(undefined8 *)puVar14 = uVar17;
      __cxa_guard_release(puVar13);
    }
    while( true ) {
      if (plVar29 == (long *)0x0) {
        return;
      }
      if (plVar29 == (long *)puVar14) break;
      plVar29 = (long *)*plVar29;
    }
    iVar15 = *piVar1;
    if (iVar15 == iVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar25 = *(long *)(lVar25 + 0x18);
        plVar29 = (long *)(lVar25 + -0x50);
        if (lVar25 == 0) {
          return;
        }
        FUN_00aae1c0(&local_98,plVar29);
        puVar19 = local_98;
        if (local_98 == (undefined8 *)0x0) goto LAB_00aecd58;
        if (*(int *)((long)local_98 + 0xc) == 0) goto LAB_00aece20;
        piVar1 = (int *)((long)local_98 + 0xc);
        iVar16 = *(int *)((long)local_98 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar15;
    if (iVar15 == 0) {
      return;
    }
  } while( true );
  do {
    plVar27 = (long *)puVar19[2];
    lVar18 = FUN_00a3edb8();
    while( true ) {
      if (plVar27 == (long *)0x0) goto LAB_00aece20;
      if (plVar27 == (long *)lVar18) break;
      plVar27 = (long *)*plVar27;
    }
    iVar15 = *piVar1;
    if (iVar15 == iVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar18 = puVar19[3];
        plVar27 = (long *)0x0;
        puVar19 = local_98;
        if (lVar18 != 0) {
          plVar27 = (long *)(lVar18 + -0x50);
        }
        goto joined_r0x00aece18;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar15;
  } while (iVar15 != 0);
LAB_00aece20:
  plVar27 = (long *)0x0;
  puVar19 = local_98;
joined_r0x00aece18:
  local_98 = puVar19;
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar16 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_b8 = *puVar19;
      FUN_02a44274(lVar18 + 0xd8,&local_b8);
    }
  }
  if (plVar27 == (long *)0x0) goto LAB_00aecd58;
  plVar28 = (long *)plVar27[0x3e];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02a4754c(&local_98,PTR_DAT_0437a770);
    puVar19 = (undefined8 *)FUN_02a9b144(plVar27,&local_98);
    plVar26 = (long *)*puVar19;
    if (plVar26 != (long *)0x0) {
      plVar24 = plVar26 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar5) {
          *(int *)plVar24 = (int)*plVar24 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (plVar26 != (long *)0x0) {
      if (((1L << ((long)*(int *)((long)plVar28 + 0x174) & 0x3fU) & *(ulong *)(param_1 + 0x228)) ==
           0) && (*(char *)(param_1 + 0x21a) != '\0')) {
        local_64 = 0;
        if ((*(char *)(param_1 + 0x218) != '\0') && (*(char *)(param_1 + 0x21b) == '\0')) {
          local_64 = 1;
        }
        local_88 = 7;
        local_80 = (long *)0x0;
        local_b8 = 0xf49cad53a240e1e9;
        pcStack_b0 = "BaseEmissionColorRGB";
        local_98 = (undefined8 *)0xf30c61e6459b01fe;
        pcStack_90 = "pokemon";
        local_a8 = 0x14;
        local_a0 = (long *)0x0;
        auVar9 = FUN_00aee408(&local_98,&local_b8);
        uVar31 = auVar9._8_4_;
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        local_88 = 7;
        local_80 = (long *)0x0;
        local_b8 = 0xe6ba6dd8c1fece29;
        pcStack_b0 = "HighlightColorRGB";
        local_98 = (undefined8 *)0xf30c61e6459b01fe;
        pcStack_90 = "pokemon";
        local_a8 = 0x11;
        local_a0 = (long *)0x0;
        auVar10 = FUN_00aee408(&local_98,&local_b8);
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        local_88 = 7;
        local_80 = (long *)0x0;
        local_b8 = 0x3ebb8b04cf703bff;
        pcStack_b0 = "NormalLayermaskIntensitiesRGB";
        local_98 = (undefined8 *)0xf30c61e6459b01fe;
        pcStack_90 = "pokemon";
        local_a8 = 0x1d;
        local_a0 = (long *)0x0;
        auVar11 = FUN_00aee408(&local_98,&local_b8);
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        local_88 = 7;
        local_80 = (long *)0x0;
        local_b8 = 0x210add64b2cef34a;
        pcStack_b0 = "OybnLayermaskIntensitiesRGB";
        local_98 = (undefined8 *)0xf30c61e6459b01fe;
        pcStack_90 = "pokemon";
        local_a8 = 0x1b;
        local_a0 = (long *)0x0;
        auVar12 = FUN_00aee408(&local_98,&local_b8);
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        uVar32 = auVar9._4_4_;
        uVar7 = auVar9._0_4_;
        if (local_64 == 0) {
          local_b8 = 0x7193c8fea88bfe6c;
          pcStack_b0 = "BaseEmissionColorNormalA";
          local_a8 = 0x18;
          local_a0 = (long *)0x0;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar18;
          uVar21 = *(ulong *)(lVar18 + 0x60);
          uVar30 = 0;
          local_bc = 0;
          if (uVar21 != 0) {
            uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
            uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar22 < 2) {
              uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
            }
            else {
              uVar23 = 0xf30c61e6459b01fe;
              if (uVar21 < 0xf30c61e6459b01ff) {
                uVar23 = 0;
                if (uVar21 != 0) {
                  uVar23 = 0xf30c61e6459b01fe / uVar21;
                }
                uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
              }
            }
            plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
            if (plVar24 != (long *)0x0) {
              plVar24 = (long *)*plVar24;
              if (plVar24 != (long *)0x0) {
                if (uVar22 < 2) {
                  do {
                    if (plVar24[1] == 0xf30c61e6459b01fe) {
                      if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed4c4;
                    }
                    else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
                    plVar24 = (long *)*plVar24;
                  } while (plVar24 != (long *)0x0);
                }
                else {
                  do {
                    uVar22 = plVar24[1];
                    if (uVar22 == 0xf30c61e6459b01fe) {
                      if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed4c4;
                    }
                    else {
                      if (uVar21 <= uVar22) {
                        uVar6 = 0;
                        if (uVar21 != 0) {
                          uVar6 = uVar22 / uVar21;
                        }
                        uVar22 = uVar22 - uVar6 * uVar21;
                      }
                      if (uVar22 != uVar23) break;
                    }
                    plVar24 = (long *)*plVar24;
                  } while (plVar24 != (long *)0x0);
                }
              }
            }
          }
          goto LAB_00aed518;
        }
        local_98 = (undefined8 *)0x738f3f6c8f316e65;
        pcStack_90 = "BaseEmissionColorOybnA";
        local_88 = 0x16;
        local_80 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar18 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar18;
        uVar21 = *(ulong *)(lVar18 + 0x60);
        uVar30 = 0;
        local_bc = 0;
        if (uVar21 != 0) {
          uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
          uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar22 < 2) {
            uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
          }
          else {
            uVar23 = 0xf30c61e6459b01fe;
            if (uVar21 < 0xf30c61e6459b01ff) {
              uVar23 = 0;
              if (uVar21 != 0) {
                uVar23 = 0xf30c61e6459b01fe / uVar21;
              }
              uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
            }
          }
          plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
          local_bc = uVar30;
          if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
            if (uVar22 < 2) {
              do {
                if (plVar24[1] == 0xf30c61e6459b01fe) {
                  if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed524;
                }
                else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
            else {
              do {
                uVar22 = plVar24[1];
                if (uVar22 == 0xf30c61e6459b01fe) {
                  if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed524;
                }
                else {
                  if (uVar21 <= uVar22) {
                    uVar6 = 0;
                    if (uVar21 != 0) {
                      uVar6 = uVar22 / uVar21;
                    }
                    uVar22 = uVar22 - uVar6 * uVar21;
                  }
                  if (uVar22 != uVar23) break;
                }
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
          }
        }
        goto LAB_00aed57c;
      }
      goto LAB_00aecf0c;
    }
    goto LAB_00aecf24;
  }
  goto LAB_00aecf38;
LAB_00aed4c4:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar30 = FUN_00d7905c(plVar24,&local_b8);
    do {
      lVar18 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar18 == 1) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
LAB_00aed518:
    local_bc = uVar30;
  }
  bVar8 = false;
  bVar5 = true;
  goto LAB_00aed580;
LAB_00aed758:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_cc = FUN_00d7905c(plVar24,&local_f8);
    do {
      iVar16 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  goto LAB_00aed7a8;
LAB_00aed964:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_fc = FUN_00d7905c(plVar24,&local_f8);
    do {
      iVar16 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  goto LAB_00aed9b4;
LAB_00aedb70:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_10c = FUN_00d7905c(plVar24,&local_f8);
    do {
      iVar16 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  goto LAB_00aedbc0;
LAB_00aedee4:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar31 = FUN_00d7905c(plVar24,&local_f8);
    do {
      iVar16 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  goto LAB_00aedf34;
LAB_00aee2d0:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_68 = FUN_00d7905c(plVar24,&local_138);
    do {
      iVar16 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  goto LAB_00aee320;
LAB_00aed524:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar3 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_bc = FUN_00d7905c(plVar24,&local_98);
    do {
      lVar18 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar18 == 1) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
LAB_00aed57c:
  bVar5 = false;
  bVar8 = true;
LAB_00aed580:
  local_c8 = uVar7;
  uStack_c4 = uVar32;
  local_c0 = uVar31;
  if ((bVar5) && (local_a0 != (long *)0x0)) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if ((bVar8) && (local_80 != (long *)0x0)) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_f8 = 0xc4673dbcc6b546d5;
  pcStack_f0 = "HighlightColorA";
  local_e8 = 0xf;
  local_e0 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  local_cc = 0;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar21 = *(ulong *)(lVar18 + 0x60);
  if (uVar21 != 0) {
    uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
    }
    else {
      uVar23 = 0xf30c61e6459b01fe;
      if (uVar21 < 0xf30c61e6459b01ff) {
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = 0xf30c61e6459b01fe / uVar21;
        }
        uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed758;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed758;
          }
          else {
            if (uVar21 <= uVar22) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar22 / uVar21;
              }
              uVar22 = uVar22 - uVar6 * uVar21;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_00aed7a8:
  local_d8 = auVar10._0_4_;
  uStack_d4 = auVar10._4_4_;
  local_d0 = auVar10._8_4_;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0xd3a3fd312e77dff7;
  pcStack_f0 = "NormalLayermaskIntensitiesA";
  local_e8 = 0x1b;
  local_e0 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  local_fc = 0;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar21 = *(ulong *)(lVar18 + 0x60);
  if (uVar21 != 0) {
    uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
    }
    else {
      uVar23 = 0xf30c61e6459b01fe;
      if (uVar21 < 0xf30c61e6459b01ff) {
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = 0xf30c61e6459b01fe / uVar21;
        }
        uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed964;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aed964;
          }
          else {
            if (uVar21 <= uVar22) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar22 / uVar21;
              }
              uVar22 = uVar22 - uVar6 * uVar21;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_00aed9b4:
  local_108 = auVar11._0_4_;
  uStack_104 = auVar11._4_4_;
  local_100 = auVar11._8_4_;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0x426edd07856f36c6;
  pcStack_f0 = "OybnLayermaskIntensitiesA";
  local_e8 = 0x19;
  local_e0 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  local_10c = 0;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar21 = *(ulong *)(lVar18 + 0x60);
  if (uVar21 != 0) {
    uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
    }
    else {
      uVar23 = 0xf30c61e6459b01fe;
      if (uVar21 < 0xf30c61e6459b01ff) {
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = 0xf30c61e6459b01fe / uVar21;
        }
        uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aedb70;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aedb70;
          }
          else {
            if (uVar21 <= uVar22) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar22 / uVar21;
              }
              uVar22 = uVar22 - uVar6 * uVar21;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_00aedbc0:
  local_118 = auVar12._0_4_;
  uStack_114 = auVar12._4_4_;
  local_110 = auVar12._8_4_;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0x2848f7b9ee0305c7;
  pcStack_f0 = "OverrideEyeBaseEmissionColor";
  local_128 = 0;
  local_120 = (long *)0x0;
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  FUN_02b39ed0(plVar26,&local_f8,&local_c8,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0x507f7cba3f3c5831;
  pcStack_f0 = "OverrideEyeHighlightColor";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  local_128 = 0;
  local_120 = (long *)0x0;
  FUN_02b39ed0(plVar26,&local_f8,&local_d8,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0xbaea8e36f417594c;
  pcStack_f0 = "OverrideEyeLayermaskIntensities";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  if (local_64 == 0) {
    puVar20 = &local_108;
  }
  else {
    puVar20 = &local_118;
  }
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  local_128 = 0;
  local_120 = (long *)0x0;
  FUN_02b39ed0(plVar26,&local_f8,puVar20,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0x19afe6d997ec5cf5;
  pcStack_f0 = "LayermaskScales";
  local_e8 = 0xf;
  local_e0 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar21 = *(ulong *)(lVar18 + 0x60);
  uVar31 = 0;
  if (uVar21 != 0) {
    uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
    }
    else {
      uVar23 = 0xf30c61e6459b01fe;
      if (uVar21 < 0xf30c61e6459b01ff) {
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = 0xf30c61e6459b01fe / uVar21;
        }
        uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aedee4;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aedee4;
          }
          else {
            if (uVar21 <= uVar22) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar22 / uVar21;
              }
              uVar22 = uVar22 - uVar6 * uVar21;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_00aedf34:
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_158 = (undefined1 *)CONCAT44(uVar31,uVar31);
  local_150 = (undefined1 *)CONCAT44(uVar31,uVar31);
  local_f8 = 0xc8c68217b31adfa0;
  pcStack_f0 = "OverrideEyeLayermaskScales";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  local_128 = 0;
  local_120 = (long *)0x0;
  FUN_02b39cb4(plVar26,&local_f8,&local_158,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0x8feca35a180693d5;
  pcStack_f0 = "OverrideEyeLerpHighlight";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  local_128 = 0;
  local_120 = (long *)0x0;
  FUN_02b39f84(plVar26,&local_f8,&local_64,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0xab3036986ad14faf;
  pcStack_f0 = "OverrideEyeLerpEmissionColor";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  local_128 = 0;
  local_120 = (long *)0x0;
  FUN_02b39f84(plVar26,&local_f8,&local_64,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0x739dc37d21d16dc3;
  pcStack_f0 = "OverrideEyeLerpLayermaskScales";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = &DAT_cbf29ce484222645;
  pcStack_130 = "";
  local_128 = 0;
  local_120 = (long *)0x0;
  FUN_02b39f84(plVar26,&local_f8,&local_64,&local_138);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8 = 0xde63ce90bf99d3fc;
  pcStack_f0 = "OverrideEyeLerpValue";
  local_e8 = 0x1f;
  local_e0 = (long *)0x0;
  local_138 = (undefined1 *)0x56c10adce23f0619;
  pcStack_130 = "LerpValue";
  local_128 = 9;
  local_120 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar21 = *(ulong *)(lVar18 + 0x60);
  local_68 = 0;
  if (uVar21 != 0) {
    uVar22 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar21 - 1 & 0xf30c61e6459b01fe;
    }
    else {
      uVar23 = 0xf30c61e6459b01fe;
      if (uVar21 < 0xf30c61e6459b01ff) {
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = 0xf30c61e6459b01fe / uVar21;
        }
        uVar23 = 0xf30c61e6459b01fe - uVar23 * uVar21;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aee2d0;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0xf30c61e6459b01fe) {
            if (plVar24[2] == -0xcf39e19ba64fe02) goto LAB_00aee2d0;
          }
          else {
            if (uVar21 <= uVar22) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar22 / uVar21;
              }
              uVar22 = uVar22 - uVar6 * uVar21;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_00aee320:
  local_158 = &DAT_cbf29ce484222645;
  local_150 = &DAT_03996322;
  local_148 = 0;
  local_140 = (long *)0x0;
  FUN_02b39c00(plVar26,&local_f8,&local_68,&local_158);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  *(ulong *)(param_1 + 0x228) =
       1L << ((long)*(int *)((long)plVar28 + 0x174) & 0x3fU) | *(ulong *)(param_1 + 0x228);
LAB_00aecf0c:
  plVar24 = plVar26 + 10;
  do {
    iVar16 = (int)*plVar24 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
LAB_00aecf24:
  do {
    iVar16 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar28 + 0x10))(plVar28);
  }
LAB_00aecf38:
  lVar18 = plVar27[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar16 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar27 + 0x20))(plVar27);
  }
LAB_00aecd58:
  lVar25 = *(long *)(lVar25 + 8);
  piVar1 = (int *)(lVar25 + 0xc);
  do {
    iVar16 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar25 + 0x18) = 0;
    (**(code **)(*plVar29 + 0x20))(plVar29);
  }
  return;
}


