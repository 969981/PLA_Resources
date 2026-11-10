/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02634828; name: FUN_02634828
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02634828(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined1 *puVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  if (*(long *)(param_1 + 0x200) == 0) {
    local_68 = (long *)0x0;
    uVar11 = param_2;
  }
  else {
    FUN_01aa8974(&local_68);
    puVar6 = PTR_DAT_04379660;
    uVar11 = param_2 & 0xffffffff;
    if (local_68 != (long *)0x0) {
      local_80 = 0;
      local_78 = (long *)0x0;
      local_90 = (undefined1 *)0x0;
      pcStack_88 = (char *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar8 = PTR_DAT_04379670;
      puVar7 = PTR_DAT_04379668;
      lVar23 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar23;
      puVar24 = *(undefined1 **)(lVar23 + 0x60);
      uVar26 = 0;
      if (puVar24 != (undefined1 *)0x0) {
        uVar11 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar14 = (undefined1 *)((ulong)(puVar24 + -1) & 0x7f1d939d8653868);
        }
        else {
          puVar14 = &DAT_7f1d939d8653868;
          if (puVar24 < (undefined1 *)0x7f1d939d8653869) {
            uVar18 = 0;
            if (puVar24 != (undefined1 *)0x0) {
              uVar18 = 0x7f1d939d8653868 / (ulong)puVar24;
            }
            puVar14 = &DAT_7f1d939d8653868 + -(uVar18 * (long)puVar24);
          }
        }
        plVar22 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar14 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar22[1] == &DAT_7f1d939d8653868) {
                if ((undefined1 *)plVar22[2] == &DAT_7f1d939d8653868) goto LAB_02634a24;
              }
              else if ((undefined1 *)((ulong)plVar22[1] & (ulong)(puVar24 + -1)) != puVar14) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              puVar17 = (undefined1 *)plVar22[1];
              if (puVar17 == &DAT_7f1d939d8653868) {
                if ((undefined1 *)plVar22[2] == &DAT_7f1d939d8653868) goto LAB_02634a24;
              }
              else {
                if (puVar24 <= puVar17) {
                  uVar11 = 0;
                  if (puVar24 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar17 / (ulong)puVar24;
                  }
                  puVar17 = puVar17 + -(uVar11 * (long)puVar24);
                }
                if (puVar17 != puVar14) break;
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      goto LAB_02634b80;
    }
  }
  goto LAB_02634870;
LAB_02634a24:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar16 = plVar22 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar22[0x21];
    uVar26 = 0;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x80581f76875044ee;
      }
      else if (uVar11 < 0x80581f76875044ef) {
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = 0x80581f76875044ee / uVar11;
        }
        uVar19 = 0x80581f76875044ee - uVar19 * uVar11;
      }
      else {
        uVar19 = 0x80581f76875044ee;
      }
      plVar20 = *(long **)(plVar22[0x20] + uVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar20[1] == 0x80581f76875044ee) {
              if (plVar20[2] == -0x7fa7e08978afbb12) goto LAB_02634b68;
            }
            else if ((plVar20[1] & uVar11 - 1) != uVar19) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar20[1];
            if (uVar18 == 0x80581f76875044ee) {
              if (plVar20[2] == -0x7fa7e08978afbb12) goto LAB_02634b68;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar4 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02634b6c;
  }
  goto LAB_02634b80;
LAB_02634b68:
  uVar26 = (undefined4)plVar20[6];
LAB_02634b6c:
  do {
    iVar10 = (int)*plVar16 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *(int *)plVar16 = iVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar22 + 0x10))();
  }
LAB_02634b80:
  local_a0 = 0xb;
  local_98 = (long *)0x0;
  local_b0 = &DAT_7f1d939d8653868;
  pcStack_a8 = "ride_change";
  local_d0 = 0x2107f459fd5947b4;
  pcStack_c8 = "start_rim_rgb";
  local_80 = CONCAT44(local_80._4_4_,uVar26);
  local_c0 = 0xd;
  local_b8 = (long *)0x0;
  auVar5 = FUN_00aee408(&local_b0,&local_d0);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar7;
  *(long *)puVar8 = lVar23;
  puVar24 = *(undefined1 **)(lVar23 + 0x60);
  uVar26 = 0;
  if (puVar24 != (undefined1 *)0x0) {
    uVar11 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar24 + -1) & 0x7f1d939d8653868);
    }
    else {
      puVar14 = &DAT_7f1d939d8653868;
      if (puVar24 < (undefined1 *)0x7f1d939d8653869) {
        uVar18 = 0;
        if (puVar24 != (undefined1 *)0x0) {
          uVar18 = 0x7f1d939d8653868 / (ulong)puVar24;
        }
        puVar14 = &DAT_7f1d939d8653868 + -(uVar18 * (long)puVar24);
      }
    }
    plVar22 = *(long **)(*(long *)(lVar23 + 0x58) + (long)puVar14 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar22[1] == &DAT_7f1d939d8653868) {
            if ((undefined1 *)plVar22[2] == &DAT_7f1d939d8653868) goto LAB_02634c6c;
          }
          else if ((undefined1 *)((ulong)plVar22[1] & (ulong)(puVar24 + -1)) != puVar14) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar22[1];
          if (puVar17 == &DAT_7f1d939d8653868) {
            if ((undefined1 *)plVar22[2] == &DAT_7f1d939d8653868) goto LAB_02634c6c;
          }
          else {
            if (puVar24 <= puVar17) {
              uVar11 = 0;
              if (puVar24 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar17 / (ulong)puVar24;
              }
              puVar17 = puVar17 + -(uVar11 * (long)puVar24);
            }
            if (puVar17 != puVar14) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_02634dd0;
LAB_02634c6c:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar16 = plVar22 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar22[0x21];
    uVar26 = 0;
    if (uVar11 != 0) {
      uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar11 - 1 & 0x24a76ba64f4d05c3;
      }
      else if (uVar11 < 0x24a76ba64f4d05c4) {
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = 0x24a76ba64f4d05c3 / uVar11;
        }
        uVar19 = 0x24a76ba64f4d05c3 - uVar19 * uVar11;
      }
      else {
        uVar19 = 0x24a76ba64f4d05c3;
      }
      plVar20 = *(long **)(plVar22[0x20] + uVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar20[1] == 0x24a76ba64f4d05c3) {
              if (plVar20[2] == 0x24a76ba64f4d05c3) goto LAB_02634db4;
            }
            else if ((plVar20[1] & uVar11 - 1) != uVar19) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar20[1];
            if (uVar18 == 0x24a76ba64f4d05c3) {
              if (plVar20[2] == 0x24a76ba64f4d05c3) goto LAB_02634db4;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar4 * uVar11;
              }
              if (uVar18 != uVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02634dbc;
  }
  goto LAB_02634dd0;
LAB_02634db4:
  uVar26 = (undefined4)plVar20[6];
LAB_02634dbc:
  do {
    iVar10 = (int)*plVar16 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *(int *)plVar16 = iVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar22 + 0x10))();
  }
LAB_02634dd0:
  pcStack_88 = (char *)CONCAT44(uVar26,auVar5._8_4_);
  local_90 = auVar5._0_8_;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_00ae676c(local_68,&local_90);
  *(undefined8 *)(param_1 + 0x230) = 1;
  uVar11 = param_2 & 0xffffffff;
  if (local_68 != (long *)0x0) {
    lVar23 = local_68[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = param_2 & 0xffffffff;
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      uVar11 = param_2 & 0xffffffff;
      cVar2 = *(char *)(param_1 + 0x210);
      goto joined_r0x02634e70;
    }
  }
LAB_02634870:
  cVar2 = *(char *)(param_1 + 0x210);
joined_r0x02634e70:
  if (cVar2 == '\0') {
    if ((uVar11 & 1) == 0) {
      local_b0 = (undefined1 *)0x39880c1126be82bb;
      pcStack_a8 = "enable_ride_off_player_effect";
      local_a0 = 0x1d;
    }
    else {
      local_b0 = (undefined1 *)0x5fd594880e05a90f;
      pcStack_a8 = "enable_ride_on_player_effect";
      local_a0 = 0x1c;
    }
    local_78 = (long *)0x0;
    local_80 = 0xb;
    pcStack_88 = "ride_change";
    local_90 = &DAT_7f1d939d8653868;
    local_98 = (long *)0x0;
    uVar11 = FUN_00e9e50c(&local_90,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  else {
    if ((uVar11 & 1) == 0) {
      local_b0 = (undefined1 *)0x39880c1126be82bb;
      pcStack_a8 = "enable_ride_off_player_effect";
      local_a0 = 0x1d;
    }
    else {
      local_b0 = (undefined1 *)0x5fd594880e05a90f;
      pcStack_a8 = "enable_ride_on_player_effect";
      local_a0 = 0x1c;
    }
    local_78 = (long *)0x0;
    local_80 = 0xb;
    pcStack_88 = "ride_change";
    local_90 = &DAT_7f1d939d8653868;
    local_98 = (long *)0x0;
    uVar11 = FUN_00e9e50c(&local_90,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((uVar11 & 1) != 0) {
      return;
    }
  }
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  puVar24 = &DAT_7f1d939d8653868;
  lVar23 = *(long *)(param_1 + 0x1f0);
  if (lVar23 == 0) {
    return;
  }
  if (*(int *)(lVar23 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar23 + 0xc);
  iVar10 = *(int *)(lVar23 + 0xc);
  do {
    plVar22 = *(long **)(lVar23 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
      uVar13 = FUN_00ad3750();
      *(undefined8 *)puVar7 = uVar13;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == (long *)puVar7) break;
      plVar22 = (long *)*plVar22;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar23 = *(long *)(lVar23 + 0x18);
        if (lVar23 == 0) {
          return;
        }
        plVar22 = (long *)(lVar23 + -0x50);
        FUN_02c90b50(plVar22,1);
        lVar12 = FUN_02c90d14(plVar22);
        if (lVar12 == 0) goto LAB_02635128;
        if (*(char *)(param_1 + 0x210) != '\0') {
          fVar25 = (float)FUN_0263563c(*(undefined4 *)(param_1 + 0x214));
          goto LAB_02635104;
        }
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar15 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar15;
        puVar14 = *(undefined1 **)(lVar15 + 0x60);
        fVar25 = 0.0;
        if (puVar14 == (undefined1 *)0x0) goto LAB_02635104;
        uVar11 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar24 = (undefined1 *)((ulong)(puVar14 + -1) & 0x7f1d939d8653868);
        }
        else if (puVar14 < (undefined1 *)0x7f1d939d8653869) {
          uVar18 = 0;
          if (puVar14 != (undefined1 *)0x0) {
            uVar18 = 0x7f1d939d8653868 / (ulong)puVar14;
          }
          puVar24 = &DAT_7f1d939d8653868 + -(uVar18 * (long)puVar14);
        }
        plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar24 * 8);
        if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
        goto LAB_02635104;
        if (1 < uVar11) break;
        goto LAB_026353f4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
  do {
    puVar17 = (undefined1 *)plVar16[1];
    if (puVar17 == &DAT_7f1d939d8653868) {
      if ((undefined1 *)plVar16[2] == &DAT_7f1d939d8653868) goto LAB_02635210;
    }
    else {
      if (puVar14 <= puVar17) {
        uVar11 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar11 = (ulong)puVar17 / (ulong)puVar14;
        }
        puVar17 = puVar17 + -(uVar11 * (long)puVar14);
      }
      if (puVar17 != puVar24) break;
    }
    plVar16 = (long *)*plVar16;
  } while (plVar16 != (long *)0x0);
  goto LAB_02635104;
  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
LAB_026353f4:
    if ((undefined1 *)plVar16[1] == &DAT_7f1d939d8653868) {
      if ((undefined1 *)plVar16[2] == &DAT_7f1d939d8653868) goto LAB_02635210;
    }
    else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar14 + -1)) != puVar24) break;
  }
  goto LAB_02635104;
LAB_02635210:
  plVar16 = (long *)plVar16[3];
  if (plVar16 == (long *)0x0) goto LAB_02635104;
  plVar20 = plVar16 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar3) {
      *(int *)plVar20 = (int)*plVar20 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar11 = plVar16[0x21];
  fVar25 = 0.0;
  if (uVar11 != 0) {
    uVar18 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar11 - 1 & 0xf5ca08e9d897897;
    }
    else if (uVar11 < 0xf5ca08e9d897898) {
      uVar19 = 0;
      if (uVar11 != 0) {
        uVar19 = 0xf5ca08e9d897897 / uVar11;
      }
      uVar19 = 0xf5ca08e9d897897 - uVar19 * uVar11;
    }
    else {
      uVar19 = 0xf5ca08e9d897897;
    }
    plVar21 = *(long **)(plVar16[0x20] + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xf5ca08e9d897897) {
            if (plVar21[2] == 0xf5ca08e9d897897) goto LAB_02635358;
          }
          else if ((plVar21[1] & uVar11 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xf5ca08e9d897897) {
            if (plVar21[2] == 0xf5ca08e9d897897) goto LAB_02635358;
          }
          else {
            if (uVar11 <= uVar18) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar18 / uVar11;
              }
              uVar18 = uVar18 - uVar4 * uVar11;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_02635360;
LAB_02635358:
  fVar25 = *(float *)(plVar21 + 6);
LAB_02635360:
  do {
    iVar10 = (int)*plVar20 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar3) {
      *(int *)plVar20 = iVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_02635104:
  *(ulong *)(lVar12 + 0x128) = (ulong)(uint)fVar25;
  *(ulong *)(lVar12 + 0x120) = CONCAT44(fVar25,fVar25);
  *(ulong *)(lVar12 + 0x148) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xf8) >> 0x20) * 0.0,
                (float)*(undefined8 *)(lVar12 + 0xf8) * fVar25);
  *(ulong *)(lVar12 + 0x140) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xf0) >> 0x20) * fVar25,
                (float)*(undefined8 *)(lVar12 + 0xf0) * fVar25);
LAB_02635128:
  lVar23 = *(long *)(lVar23 + 8);
  piVar1 = (int *)(lVar23 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
}


