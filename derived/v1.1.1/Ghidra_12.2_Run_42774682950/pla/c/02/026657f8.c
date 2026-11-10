/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026657f8; name: FUN_026657f8
 */


undefined4 FUN_026657f8(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 uVar20;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_34;
  
  puVar7 = PTR_DAT_04379660;
  uStack_60 = *(undefined8 *)(*param_1 + 8);
  local_68 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_48 = 0;
  local_58 = 0x3fffffffffffffff;
  uStack_50 = 0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xa47c00866f39edf3);
    }
    else {
      puVar13 = &DAT_a47c00866f39edf3;
      if (puVar11 < (undefined1 *)0xa47c00866f39edf4) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0xa47c00866f39edf3 / (ulong)puVar11;
        }
        puVar13 = &DAT_a47c00866f39edf3 + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_a47c00866f39edf3) {
            if ((undefined1 *)plVar15[2] == &DAT_a47c00866f39edf3) goto LAB_026658ec;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == &DAT_a47c00866f39edf3) {
            if ((undefined1 *)plVar15[2] == &DAT_a47c00866f39edf3) goto LAB_026658ec;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_026659e8:
  local_34 = 1;
  bVar2 = *puVar7;
joined_r0x02665a84:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar8;
  *(long *)puVar9 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xa47c00866f39edf3);
    }
    else {
      puVar13 = &DAT_a47c00866f39edf3;
      if (puVar11 < (undefined1 *)0xa47c00866f39edf4) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0xa47c00866f39edf3 / (ulong)puVar11;
        }
        puVar13 = &DAT_a47c00866f39edf3 + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_a47c00866f39edf3) {
            if ((undefined1 *)plVar15[2] == &DAT_a47c00866f39edf3) goto LAB_02665b18;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == &DAT_a47c00866f39edf3) {
            if ((undefined1 *)plVar15[2] == &DAT_a47c00866f39edf3) goto LAB_02665b18;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02665c14:
  local_34 = 0;
LAB_02665c9c:
  if (lStack_70 - local_78 == 0) {
    uVar20 = 2;
  }
  else {
    lVar14 = FUN_026685b0((lStack_70 - local_78 >> 2) + -1);
    uVar20 = *(undefined4 *)(local_78 + lVar14 * 4);
  }
  FUN_02668b68(&local_78);
  return uVar20;
LAB_026658ec:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x14];
    if (uVar12 == 0) {
      iVar10 = 0;
    }
    else {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0x9fccd483eb6e792f;
      }
      else if (uVar12 < 0x9fccd483eb6e7930) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0x9fccd483eb6e792f / uVar12;
        }
        uVar18 = 0x9fccd483eb6e792f - uVar18 * uVar12;
      }
      else {
        uVar18 = 0x9fccd483eb6e792f;
      }
      plVar19 = *(long **)(plVar15[0x13] + uVar18 * 8);
      if (plVar19 == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          iVar10 = 0;
        }
        else if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x9fccd483eb6e792f) {
              if (plVar19[2] == -0x60332b7c149186d1) goto LAB_02665a44;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) {
              iVar10 = 0;
              break;
            }
            plVar19 = (long *)*plVar19;
            iVar10 = 0;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x9fccd483eb6e792f) {
              if (plVar19[2] == -0x60332b7c149186d1) goto LAB_02665a44;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar6 * uVar12;
              }
              if (uVar17 != uVar18) {
                iVar10 = 0;
                goto LAB_02665a48;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          iVar10 = 0;
        }
      }
    }
    goto LAB_02665a48;
  }
  goto LAB_026659e8;
LAB_02665a44:
  iVar10 = (int)plVar19[6];
LAB_02665a48:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  local_34 = 1;
  if (0 < iVar10) {
    do {
      FUN_026686e4(&local_78,&local_34);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  bVar2 = *puVar7;
  goto joined_r0x02665a84;
LAB_02665b18:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x14];
    if (uVar12 == 0) {
      iVar10 = 0;
    }
    else {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0xeedc1d5b96cec2c;
      }
      else if (uVar12 < 0xeedc1d5b96cec2d) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0xeedc1d5b96cec2c / uVar12;
        }
        uVar18 = 0xeedc1d5b96cec2c - uVar18 * uVar12;
      }
      else {
        uVar18 = 0xeedc1d5b96cec2c;
      }
      plVar19 = *(long **)(plVar15[0x13] + uVar18 * 8);
      if (plVar19 == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          iVar10 = 0;
        }
        else if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0xeedc1d5b96cec2c) {
              if (plVar19[2] == 0xeedc1d5b96cec2c) goto LAB_02665c64;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) {
              iVar10 = 0;
              break;
            }
            plVar19 = (long *)*plVar19;
            iVar10 = 0;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0xeedc1d5b96cec2c) {
              if (plVar19[2] == 0xeedc1d5b96cec2c) goto LAB_02665c64;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar6 * uVar12;
              }
              if (uVar17 != uVar18) {
                iVar10 = 0;
                goto LAB_02665c68;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          iVar10 = 0;
        }
      }
    }
    goto LAB_02665c68;
  }
  goto LAB_02665c14;
LAB_02665c64:
  iVar10 = (int)plVar19[6];
LAB_02665c68:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  local_34 = 0;
  if (0 < iVar10) {
    do {
      FUN_026686e4(&local_78,&local_34);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  goto LAB_02665c9c;
}


