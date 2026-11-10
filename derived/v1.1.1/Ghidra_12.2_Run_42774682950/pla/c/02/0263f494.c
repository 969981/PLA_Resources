/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0263f494; name: FUN_0263f494
 */


void FUN_0263f494(long param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68 [2];
  long *local_58;
  long *local_50;
  undefined8 local_48;
  
  *(undefined1 *)(param_1 + 0x2a4) = 1;
  *(undefined4 *)(param_1 + 0x2a8) = 0xf;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined1 *)(param_1 + 0x2ac) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 500) = *param_2;
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  bVar2 = *(byte *)(param_2 + 1);
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(byte *)(param_1 + 0x2b8) = bVar2 ^ 1;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    if (*(char *)(param_1 + 0x370) != '\0') {
      *(undefined1 *)(param_1 + 0x370) = 0;
    }
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  *(undefined2 *)(param_1 + 0x3c4) = 0;
  if ((*(int *)(param_1 + 0x1f0) == 2) && (*(char *)((long)param_2 + 9) == '\0')) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    uVar10 = *(ulong *)(lVar15 + 0x60);
    if (uVar10 == 0) {
LAB_0263f808:
      uVar22 = 0;
    }
    else {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x7ae129403ce05f36;
      }
      else if (uVar10 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar10;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x7ae129403ce05f36;
      }
      plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar13 * 8);
      if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
      goto LAB_0263f808;
      if (1 < uVar12) {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar16[2] == 0x7ae129403ce05f36) goto LAB_0263f694;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        goto LAB_0263f808;
      }
      do {
        if (plVar16[1] == 0x7ae129403ce05f36) {
          if (plVar16[2] == 0x7ae129403ce05f36) goto LAB_0263f694;
        }
        else if ((plVar16[1] & uVar10 - 1) != uVar13) goto LAB_0263f808;
        plVar16 = (long *)*plVar16;
        uVar22 = 0;
      } while (plVar16 != (long *)0x0);
    }
    goto LAB_0263f7d0;
  }
  goto LAB_0263f7d4;
LAB_0263f694:
  plVar16 = (long *)plVar16[3];
  if (plVar16 == (long *)0x0) goto LAB_0263f808;
  plVar17 = plVar16 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *(int *)plVar17 = (int)*plVar17 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar10 = plVar16[0x14];
  if (uVar10 == 0) {
    uVar22 = 0;
  }
  else {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0xc2ae34ff46bf0e27;
    }
    else if (uVar10 < 0xc2ae34ff46bf0e28) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0xc2ae34ff46bf0e27 / uVar10;
      }
      uVar13 = 0xc2ae34ff46bf0e27 - uVar13 * uVar10;
    }
    else {
      uVar13 = 0xc2ae34ff46bf0e27;
    }
    plVar18 = *(long **)(plVar16[0x13] + uVar13 * 8);
    if (plVar18 == (long *)0x0) {
      uVar22 = 0;
    }
    else {
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        uVar22 = 0;
      }
      else if (uVar12 < 2) {
        do {
          if (plVar18[1] == 0xc2ae34ff46bf0e27) {
            if (plVar18[2] == -0x3d51cb00b940f1d9) goto LAB_0263f7b8;
          }
          else if ((plVar18[1] & uVar10 - 1) != uVar13) {
            uVar22 = 0;
            break;
          }
          plVar18 = (long *)*plVar18;
          uVar22 = 0;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar18[1];
          if (uVar12 == 0xc2ae34ff46bf0e27) {
            if (plVar18[2] == -0x3d51cb00b940f1d9) goto LAB_0263f7b8;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) {
              uVar22 = 0;
              goto LAB_0263f7bc;
            }
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
        uVar22 = 0;
      }
    }
  }
  goto LAB_0263f7bc;
LAB_0263f7b8:
  uVar22 = (undefined4)plVar18[6];
LAB_0263f7bc:
  do {
    iVar9 = (int)*plVar17 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *(int *)plVar17 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_0263f7d0:
  *(undefined4 *)(param_1 + 0x2c0) = uVar22;
LAB_0263f7d4:
  if (*(long *)(param_1 + 0x228) == 0) {
    return;
  }
  FUN_0095a2ac(&local_50);
  if (local_50 == (long *)0x0) {
    return;
  }
  FUN_026bbdc4(local_68);
  if (local_68[0] == (undefined8 *)0x0) {
    local_58 = (long *)0x0;
    plVar16 = local_58;
  }
  else {
    FUN_025fa884(&local_58);
    puVar21 = local_68[0];
    plVar16 = local_58;
    if (local_68[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68[0] + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_68[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_48 = *puVar21;
        FUN_02a44274(lVar15 + 0xd8,&local_48);
        plVar16 = local_58;
      }
    }
  }
  local_58 = plVar16;
  if (plVar16 == (long *)0x0) goto joined_r0x02641698;
  switch(*(undefined4 *)(param_1 + 0x1f0)) {
  case 0:
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00cf9db0(&local_78,param_1 + 0x208);
    puVar6 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    puVar11 = *(undefined1 **)(lVar15 + 0x60);
    fVar23 = 0.0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & 0xa47c00866f39edf3);
      }
      else if (&DAT_a47c00866f39edf3 < puVar11) {
        puVar14 = &DAT_a47c00866f39edf3;
      }
      else {
        uVar12 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0xa47c00866f39edf3 / (ulong)puVar11;
        }
        puVar14 = &DAT_a47c00866f39edf3 + -(uVar12 * (long)puVar11);
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_a47c00866f39edf3) {
              if ((undefined1 *)plVar17[2] == &DAT_a47c00866f39edf3) goto LAB_0263ff8c;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar17[1];
            if (puVar19 == &DAT_a47c00866f39edf3) {
              if ((undefined1 *)plVar17[2] == &DAT_a47c00866f39edf3) goto LAB_0263ff8c;
            }
            else {
              if (puVar11 <= puVar19) {
                uVar10 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar19 / (ulong)puVar11;
                }
                puVar19 = puVar19 + -(uVar10 * (long)puVar11);
              }
              if (puVar19 != puVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
LAB_026400c4:
    bVar2 = *puVar6;
joined_r0x026401a4:
    if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)puVar7;
    *(long *)puVar8 = lVar15;
    puVar11 = *(undefined1 **)(lVar15 + 0x60);
    fVar24 = 0.0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7f1d939d8653868);
      }
      else if (&DAT_7f1d939d8653868 < puVar11) {
        puVar14 = &DAT_7f1d939d8653868;
      }
      else {
        uVar12 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0x7f1d939d8653868 / (ulong)puVar11;
        }
        puVar14 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar11);
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02640c98;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar17[1];
            if (puVar19 == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02640c98;
            }
            else {
              if (puVar11 <= puVar19) {
                uVar10 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar19 / (ulong)puVar11;
                }
                puVar19 = puVar19 + -(uVar10 * (long)puVar11);
              }
              if (puVar19 != puVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_02640dd0;
  case 1:
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    FUN_00cf9db0(&local_b8,param_1 + 0x208);
    puVar6 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    uVar10 = *(ulong *)(lVar15 + 0x60);
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x51158b6ddb1ee2da;
      }
      else if (uVar10 < 0x51158b6ddb1ee2db) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x51158b6ddb1ee2da / uVar10;
        }
        uVar13 = 0x51158b6ddb1ee2da - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x51158b6ddb1ee2da;
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + uVar13 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar17[1] == 0x51158b6ddb1ee2da) {
              if (plVar17[2] == 0x51158b6ddb1ee2da) goto LAB_026409fc;
            }
            else if ((plVar17[1] & uVar10 - 1) != uVar13) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar17[1];
            if (uVar12 == 0x51158b6ddb1ee2da) {
              if (plVar17[2] == 0x51158b6ddb1ee2da) goto LAB_026409fc;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
LAB_02640b34:
    bVar2 = *puVar6;
joined_r0x02640c14:
    if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)puVar7;
    *(long *)puVar8 = lVar15;
    puVar11 = *(undefined1 **)(lVar15 + 0x60);
    fVar24 = 0.0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7f1d939d8653868);
      }
      else if (&DAT_7f1d939d8653868 < puVar11) {
        puVar14 = &DAT_7f1d939d8653868;
      }
      else {
        uVar12 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0x7f1d939d8653868 / (ulong)puVar11;
        }
        puVar14 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar11);
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02641444;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar17[1];
            if (puVar19 == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02641444;
            }
            else {
              if (puVar11 <= puVar19) {
                uVar10 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar19 / (ulong)puVar11;
                }
                puVar19 = puVar19 + -(uVar10 * (long)puVar11);
              }
              if (puVar19 != puVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_0264157c;
  case 2:
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00cf9db0(&local_88,param_1 + 0x208);
    puVar6 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    uVar10 = *(ulong *)(lVar15 + 0x60);
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x7ae129403ce05f36;
      }
      else if (uVar10 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar10;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x7ae129403ce05f36;
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + uVar13 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar17[1] == 0x7ae129403ce05f36) {
              if (plVar17[2] == 0x7ae129403ce05f36) goto LAB_026404c4;
            }
            else if ((plVar17[1] & uVar10 - 1) != uVar13) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar17[1];
            if (uVar12 == 0x7ae129403ce05f36) {
              if (plVar17[2] == 0x7ae129403ce05f36) goto LAB_026404c4;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
LAB_026405fc:
    bVar2 = *puVar6;
joined_r0x026406dc:
    if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)puVar7;
    *(long *)puVar8 = lVar15;
    puVar11 = *(undefined1 **)(lVar15 + 0x60);
    fVar24 = 0.0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7f1d939d8653868);
      }
      else if (&DAT_7f1d939d8653868 < puVar11) {
        puVar14 = &DAT_7f1d939d8653868;
      }
      else {
        uVar12 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0x7f1d939d8653868 / (ulong)puVar11;
        }
        puVar14 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar11);
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02641000;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar17[1];
            if (puVar19 == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02641000;
            }
            else {
              if (puVar11 <= puVar19) {
                uVar10 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar19 / (ulong)puVar11;
                }
                puVar19 = puVar19 + -(uVar10 * (long)puVar11);
              }
              if (puVar19 != puVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_02641138;
  case 3:
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    FUN_00cf9db0(&local_a8,param_1 + 0x208);
    puVar6 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    uVar10 = *(ulong *)(lVar15 + 0x60);
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x51158b6ddb1ee2da;
      }
      else if (uVar10 < 0x51158b6ddb1ee2db) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x51158b6ddb1ee2da / uVar10;
        }
        uVar13 = 0x51158b6ddb1ee2da - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x51158b6ddb1ee2da;
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + uVar13 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar17[1] == 0x51158b6ddb1ee2da) {
              if (plVar17[2] == 0x51158b6ddb1ee2da) goto LAB_02640760;
            }
            else if ((plVar17[1] & uVar10 - 1) != uVar13) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar17[1];
            if (uVar12 == 0x51158b6ddb1ee2da) {
              if (plVar17[2] == 0x51158b6ddb1ee2da) goto LAB_02640760;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
LAB_02640898:
    bVar2 = *puVar6;
joined_r0x02640978:
    if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)puVar7;
    *(long *)puVar8 = lVar15;
    puVar11 = *(undefined1 **)(lVar15 + 0x60);
    fVar24 = 0.0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7f1d939d8653868);
      }
      else if (&DAT_7f1d939d8653868 < puVar11) {
        puVar14 = &DAT_7f1d939d8653868;
      }
      else {
        uVar12 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0x7f1d939d8653868 / (ulong)puVar11;
        }
        puVar14 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar11);
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02641244;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar17[1];
            if (puVar19 == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02641244;
            }
            else {
              if (puVar11 <= puVar19) {
                uVar10 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar19 / (ulong)puVar11;
                }
                puVar19 = puVar19 + -(uVar10 * (long)puVar11);
              }
              if (puVar19 != puVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_0264137c;
  case 4:
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_00cf9db0(&local_98,param_1 + 0x208);
    puVar6 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    uVar10 = *(ulong *)(lVar15 + 0x60);
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x6fc8d43756f5f9ed;
      }
      else if (uVar10 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar10;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x6fc8d43756f5f9ed;
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + uVar13 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar17[1] == 0x6fc8d43756f5f9ed) {
              if (plVar17[2] == 0x6fc8d43756f5f9ed) goto LAB_02640228;
            }
            else if ((plVar17[1] & uVar10 - 1) != uVar13) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar17[1];
            if (uVar12 == 0x6fc8d43756f5f9ed) {
              if (plVar17[2] == 0x6fc8d43756f5f9ed) goto LAB_02640228;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
LAB_02640360:
    bVar2 = *puVar6;
joined_r0x02640440:
    if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)puVar7;
    *(long *)puVar8 = lVar15;
    puVar11 = *(undefined1 **)(lVar15 + 0x60);
    fVar24 = 0.0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar10 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7f1d939d8653868);
      }
      else if (&DAT_7f1d939d8653868 < puVar11) {
        puVar14 = &DAT_7f1d939d8653868;
      }
      else {
        uVar12 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0x7f1d939d8653868 / (ulong)puVar11;
        }
        puVar14 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar11);
      }
      plVar17 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar14 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02640e4c;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar14) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar19 = (undefined1 *)plVar17[1];
            if (puVar19 == &DAT_7f1d939d8653868) {
              if ((undefined1 *)plVar17[2] == &DAT_7f1d939d8653868) goto LAB_02640e4c;
            }
            else {
              if (puVar11 <= puVar19) {
                uVar10 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar19 / (ulong)puVar11;
                }
                puVar19 = puVar19 + -(uVar10 * (long)puVar11);
              }
              if (puVar19 != puVar14) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_02640f84;
  }
  goto switchD_0263f87c_default;
LAB_02640228:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0xf383b9aaa9be20b5;
      }
      else if (uVar10 < 0xf383b9aaa9be20b6) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xf383b9aaa9be20b5 / uVar10;
        }
        uVar13 = 0xf383b9aaa9be20b5 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0xf383b9aaa9be20b5;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_02640348;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_02640348;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_0264034c;
  }
  goto LAB_02640360;
LAB_02640348:
  fVar23 = *(float *)(plVar20 + 6);
LAB_0264034c:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_02640360;
  (**(code **)(*plVar17 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x02640440;
LAB_02640e4c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar24 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x80792fd2c80457ab;
      }
      else if (uVar10 < 0x80792fd2c80457ac) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x80792fd2c80457ab / uVar10;
        }
        uVar13 = 0x80792fd2c80457ab - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x80792fd2c80457ab;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0x80792fd2c80457ab) {
              if (plVar20[2] == -0x7f86d02d37fba855) goto LAB_02640f6c;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0x80792fd2c80457ab) {
              if (plVar20[2] == -0x7f86d02d37fba855) goto LAB_02640f6c;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02640f70;
  }
  goto LAB_02640f84;
LAB_02640f6c:
  fVar24 = *(float *)(plVar20 + 6);
LAB_02640f70:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_02640f84:
  FUN_00cf9db0(plVar16 + 0x33,&local_98);
  *(float *)(plVar16 + 0x15) = fVar23 + fVar24;
  if (local_98 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_98 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar21 = local_98;
    } while (cVar3 != '\0');
    goto LAB_02641168;
  }
  goto LAB_026411b8;
LAB_02640760:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0xf383b9aaa9be20b5;
      }
      else if (uVar10 < 0xf383b9aaa9be20b6) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xf383b9aaa9be20b5 / uVar10;
        }
        uVar13 = 0xf383b9aaa9be20b5 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0xf383b9aaa9be20b5;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_02640880;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_02640880;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02640884;
  }
  goto LAB_02640898;
LAB_02640880:
  fVar23 = *(float *)(plVar20 + 6);
LAB_02640884:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_02640898;
  (**(code **)(*plVar17 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x02640978;
LAB_02641244:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar24 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x3eabbd6c1d2c0eae;
      }
      else if (uVar10 < 0x3eabbd6c1d2c0eaf) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x3eabbd6c1d2c0eae / uVar10;
        }
        uVar13 = 0x3eabbd6c1d2c0eae - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x3eabbd6c1d2c0eae;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0x3eabbd6c1d2c0eae) {
              if (plVar20[2] == 0x3eabbd6c1d2c0eae) goto LAB_02641364;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0x3eabbd6c1d2c0eae) {
              if (plVar20[2] == 0x3eabbd6c1d2c0eae) goto LAB_02641364;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02641368;
  }
  goto LAB_0264137c;
LAB_02641364:
  fVar24 = *(float *)(plVar20 + 6);
LAB_02641368:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_0264137c:
  FUN_00cf9db0(plVar16 + 0x33,&local_a8);
  puVar21 = local_a8;
  *(float *)(plVar16 + 0x15) = fVar23 + fVar24;
  if (local_a8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a8 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 1) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68[0] = (undefined8 *)*puVar21;
      FUN_02a44274(lVar15 + 0xd8,local_68);
    }
  }
  uVar22 = 2;
  goto LAB_026415f8;
LAB_026404c4:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0xf383b9aaa9be20b5;
      }
      else if (uVar10 < 0xf383b9aaa9be20b6) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xf383b9aaa9be20b5 / uVar10;
        }
        uVar13 = 0xf383b9aaa9be20b5 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0xf383b9aaa9be20b5;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_026405e4;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_026405e4;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_026405e8;
  }
  goto LAB_026405fc;
LAB_026405e4:
  fVar23 = *(float *)(plVar20 + 6);
LAB_026405e8:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_026405fc;
  (**(code **)(*plVar17 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x026406dc;
LAB_02641000:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar24 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x69eb095ff5a141e5;
      }
      else if (uVar10 < 0x69eb095ff5a141e6) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x69eb095ff5a141e5 / uVar10;
        }
        uVar13 = 0x69eb095ff5a141e5 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x69eb095ff5a141e5;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0x69eb095ff5a141e5) {
              if (plVar20[2] == 0x69eb095ff5a141e5) goto LAB_02641120;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0x69eb095ff5a141e5) {
              if (plVar20[2] == 0x69eb095ff5a141e5) goto LAB_02641120;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02641124;
  }
  goto LAB_02641138;
LAB_02641120:
  fVar24 = *(float *)(plVar20 + 6);
LAB_02641124:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_02641138:
  FUN_00cf9db0(plVar16 + 0x33,&local_88);
  *(float *)(plVar16 + 0x15) = fVar23 + fVar24;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar21 = local_88;
    } while (cVar3 != '\0');
    goto LAB_02641168;
  }
  goto LAB_026411b8;
LAB_026409fc:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0xf383b9aaa9be20b5;
      }
      else if (uVar10 < 0xf383b9aaa9be20b6) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xf383b9aaa9be20b5 / uVar10;
        }
        uVar13 = 0xf383b9aaa9be20b5 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0xf383b9aaa9be20b5;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_02640b1c;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_02640b1c;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02640b20;
  }
  goto LAB_02640b34;
LAB_02640b1c:
  fVar23 = *(float *)(plVar20 + 6);
LAB_02640b20:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_02640b34;
  (**(code **)(*plVar17 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x02640c14;
LAB_02641444:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar24 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x3eabbd6c1d2c0eae;
      }
      else if (uVar10 < 0x3eabbd6c1d2c0eaf) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x3eabbd6c1d2c0eae / uVar10;
        }
        uVar13 = 0x3eabbd6c1d2c0eae - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x3eabbd6c1d2c0eae;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0x3eabbd6c1d2c0eae) {
              if (plVar20[2] == 0x3eabbd6c1d2c0eae) goto LAB_02641564;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0x3eabbd6c1d2c0eae) {
              if (plVar20[2] == 0x3eabbd6c1d2c0eae) goto LAB_02641564;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02641568;
  }
  goto LAB_0264157c;
LAB_02641564:
  fVar24 = *(float *)(plVar20 + 6);
LAB_02641568:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_0264157c:
  FUN_00cf9db0(plVar16 + 0x33,&local_b8);
  puVar21 = local_b8;
  *(float *)(plVar16 + 0x15) = fVar23 + fVar24;
  if (local_b8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b8 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 1) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68[0] = (undefined8 *)*puVar21;
      FUN_02a44274(lVar15 + 0xd8,local_68);
    }
  }
  uVar22 = 3;
  goto LAB_026415f8;
LAB_0263ff8c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar23 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0xf383b9aaa9be20b5;
      }
      else if (uVar10 < 0xf383b9aaa9be20b6) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xf383b9aaa9be20b5 / uVar10;
        }
        uVar13 = 0xf383b9aaa9be20b5 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0xf383b9aaa9be20b5;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_026400ac;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0xf383b9aaa9be20b5) {
              if (plVar20[2] == -0xc7c46555641df4b) goto LAB_026400ac;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_026400b0;
  }
  goto LAB_026400c4;
LAB_026400ac:
  fVar23 = *(float *)(plVar20 + 6);
LAB_026400b0:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_026400c4;
  (**(code **)(*plVar17 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x026401a4;
LAB_02640c98:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar17[0x21];
    fVar24 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x6094abcff84de1e0;
      }
      else if (uVar10 < 0x6094abcff84de1e1) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x6094abcff84de1e0 / uVar10;
        }
        uVar13 = 0x6094abcff84de1e0 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x6094abcff84de1e0;
      }
      plVar20 = *(long **)(plVar17[0x20] + uVar13 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar20[1] == 0x6094abcff84de1e0) {
              if (plVar20[2] == 0x6094abcff84de1e0) goto LAB_02640db8;
            }
            else if ((plVar20[1] & uVar10 - 1) != uVar13) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar20[1];
            if (uVar12 == 0x6094abcff84de1e0) {
              if (plVar20[2] == 0x6094abcff84de1e0) goto LAB_02640db8;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02640dbc;
  }
  goto LAB_02640dd0;
LAB_02640db8:
  fVar24 = *(float *)(plVar20 + 6);
LAB_02640dbc:
  do {
    iVar9 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_02640dd0:
  FUN_00cf9db0(plVar16 + 0x33,&local_78);
  *(float *)(plVar16 + 0x15) = fVar23 + fVar24;
  if (local_78 == (undefined8 *)0x0) {
LAB_026411b8:
    uVar22 = 1;
  }
  else {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar21 = local_78;
    } while (cVar3 != '\0');
LAB_02641168:
    if (iVar9 != 1) goto LAB_026411b8;
    puVar21[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar15 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar15;
    local_68[0] = (undefined8 *)*puVar21;
    FUN_02a44274(lVar15 + 0xd8,local_68);
    uVar22 = 1;
  }
LAB_026415f8:
  *(undefined4 *)((long)local_58 + 0xa4) = uVar22;
switchD_0263f87c_default:
  plVar16 = local_58;
  FUN_024474a4(local_58 + 0x16);
  *(undefined4 *)((long)plVar16 + 0xac) = 0;
  FUN_024474a4(plVar16 + 0x25);
  *(undefined4 *)(plVar16 + 0x24) = 0;
  if (local_58 != (long *)0x0) {
    lVar15 = local_58[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
joined_r0x02641698:
  if (local_50 != (long *)0x0) {
    lVar15 = local_50[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return;
}


