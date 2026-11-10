/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a14738; name: FUN_01a14738
 */


void FUN_01a14738(long *param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  *(undefined4 *)((long)param_1 + 0xedc4) = 0x3f800000;
  param_1[0x1dba] = param_1[0x1dc8];
  param_1[0x1dbb] = param_1[0x1dc9];
  param_1[0x1dbc] = param_1[0x1dca];
  param_1[0x1dbd] = param_1[0x1dcb];
  param_1[0x1dbe] = 0;
  param_1[0x1dbf] = 0;
  param_1[0x1dc0] = 0;
  param_1[0x1dc1] = 0;
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar12 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar12;
  puVar9 = *(undefined1 **)(lVar12 + 0x60);
  uVar19 = 0;
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & 0x8013c350d279d9f9);
    }
    else if (&DAT_8013c350d279d9f9 < puVar9) {
      puVar11 = &DAT_8013c350d279d9f9;
    }
    else {
      uVar14 = 0;
      if (puVar9 != (undefined1 *)0x0) {
        uVar14 = 0x8013c350d279d9f9 / (ulong)puVar9;
      }
      puVar11 = &DAT_8013c350d279d9f9 + -(uVar14 * (long)puVar9);
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar13[2] == &DAT_8013c350d279d9f9) goto LAB_01a14870;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar9 + -1)) != puVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar13[1];
          if (puVar16 == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar13[2] == &DAT_8013c350d279d9f9) goto LAB_01a14870;
          }
          else {
            if (puVar9 <= puVar16) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar16 / (ulong)puVar9;
              }
              puVar16 = puVar16 + -(uVar10 * (long)puVar9);
            }
            if (puVar16 != puVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01a149cc:
  *(undefined4 *)((long)param_1 + 0xee14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1dc2) = uVar19;
  *(undefined4 *)(param_1 + 0x1c61) = 0xc1a00000;
  *(undefined2 *)((long)param_1 + 0xef21) = 0;
  *(undefined4 *)((long)param_1 + 0xef24) = 0;
  param_1[0x1de6] = 0;
  param_1[0x1de7] = 0;
  param_1[0x1dd4] = 0;
  param_1[0x1dd5] = 0;
  param_1[0x1dd6] = 0;
  param_1[0x1dd7] = 0;
  lVar12 = *(long *)(PTR_DAT_0437a120 + 8);
  param_1[0x1de8] = *(long *)PTR_DAT_0437a120;
  param_1[0x1de9] = lVar12;
  *(undefined4 *)(param_1 + 0x1dea) = 0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  puVar9 = *(undefined1 **)(lVar12 + 0x60);
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & 0xf976cfc5b993016e);
    }
    else if (&DAT_f976cfc5b993016e < puVar9) {
      puVar11 = &DAT_f976cfc5b993016e;
    }
    else {
      uVar14 = 0;
      if (puVar9 != (undefined1 *)0x0) {
        uVar14 = 0xf976cfc5b993016e / (ulong)puVar9;
      }
      puVar11 = &DAT_f976cfc5b993016e + -(uVar14 * (long)puVar9);
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar13[2] == &DAT_f976cfc5b993016e) goto LAB_01a14acc;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar9 + -1)) != puVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar13[1];
          if (puVar16 == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar13[2] == &DAT_f976cfc5b993016e) goto LAB_01a14acc;
          }
          else {
            if (puVar9 <= puVar16) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar16 / (ulong)puVar9;
              }
              puVar16 = puVar16 + -(uVar10 * (long)puVar9);
            }
            if (puVar16 != puVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_01a14d08;
LAB_01a14870:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar19 = 0;
    if (uVar10 != 0) {
      uVar14 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar10 - 1 & 0x4ea6d074b618efd5;
      }
      else if (uVar10 < 0x4ea6d074b618efd6) {
        uVar15 = 0;
        if (uVar10 != 0) {
          uVar15 = 0x4ea6d074b618efd5 / uVar10;
        }
        uVar15 = 0x4ea6d074b618efd5 - uVar15 * uVar10;
      }
      else {
        uVar15 = 0x4ea6d074b618efd5;
      }
      plVar17 = *(long **)(plVar13[0x20] + uVar15 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar17[1] == 0x4ea6d074b618efd5) {
              if (plVar17[2] == 0x4ea6d074b618efd5) goto LAB_01a149b4;
            }
            else if ((plVar17[1] & uVar10 - 1) != uVar15) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar17[1];
            if (uVar14 == 0x4ea6d074b618efd5) {
              if (plVar17[2] == 0x4ea6d074b618efd5) goto LAB_01a149b4;
            }
            else {
              if (uVar10 <= uVar14) {
                uVar18 = 0;
                if (uVar10 != 0) {
                  uVar18 = uVar14 / uVar10;
                }
                uVar14 = uVar14 - uVar18 * uVar10;
              }
              if (uVar14 != uVar15) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_01a149b8;
  }
  goto LAB_01a149cc;
LAB_01a149b4:
  uVar19 = (undefined4)plVar17[6];
LAB_01a149b8:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01a149cc;
LAB_01a14acc:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto LAB_01a14d08;
  plVar1 = plVar13 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = plVar13[0x21];
  if (uVar10 != 0) {
    uVar14 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar10 - 1 & 0x3d77c1ca5391a675;
    }
    else if (uVar10 < 0x3d77c1ca5391a676) {
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = 0x3d77c1ca5391a675 / uVar10;
      }
      uVar15 = 0x3d77c1ca5391a675 - uVar15 * uVar10;
    }
    else {
      uVar15 = 0x3d77c1ca5391a675;
    }
    uVar19 = 0;
    plVar17 = *(long **)(plVar13[0x20] + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0x3d77c1ca5391a675) {
            if (plVar17[2] == 0x3d77c1ca5391a675) goto LAB_01a14c10;
          }
          else if ((plVar17[1] & uVar10 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar17[1];
          if (uVar18 == 0x3d77c1ca5391a675) {
            if (plVar17[2] == 0x3d77c1ca5391a675) goto LAB_01a14c10;
          }
          else {
            if (uVar10 <= uVar18) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar18 / uVar10;
              }
              uVar18 = uVar18 - uVar4 * uVar10;
            }
            if (uVar18 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
    goto LAB_01a14c14;
  }
  uVar19 = 0;
  uVar20 = 0;
  goto LAB_01a14ce0;
LAB_01a14c10:
  uVar19 = (undefined4)plVar17[6];
LAB_01a14c14:
  if (uVar14 < 2) {
    uVar15 = uVar10 - 1 & 0x188fac5cb5d06468;
  }
  else if (uVar10 < 0x188fac5cb5d06469) {
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = 0x188fac5cb5d06468 / uVar10;
    }
    uVar15 = 0x188fac5cb5d06468 - uVar15 * uVar10;
  }
  else {
    uVar15 = 0x188fac5cb5d06468;
  }
  plVar17 = *(long **)(plVar13[0x20] + uVar15 * 8);
  uVar20 = 0;
  if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
    if (uVar14 < 2) {
      do {
        if (plVar17[1] == 0x188fac5cb5d06468) {
          if (plVar17[2] == 0x188fac5cb5d06468) goto LAB_01a14cdc;
        }
        else if ((plVar17[1] & uVar10 - 1) != uVar15) break;
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    else {
      do {
        uVar14 = plVar17[1];
        if (uVar14 == 0x188fac5cb5d06468) {
          if (plVar17[2] == 0x188fac5cb5d06468) goto LAB_01a14cdc;
        }
        else {
          if (uVar10 <= uVar14) {
            uVar18 = 0;
            if (uVar10 != 0) {
              uVar18 = uVar14 / uVar10;
            }
            uVar14 = uVar14 - uVar18 * uVar10;
          }
          if (uVar14 != uVar15) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  goto LAB_01a14ce0;
LAB_01a14cdc:
  uVar20 = (undefined4)plVar17[6];
LAB_01a14ce0:
  lVar12 = FUN_01a4b9b4(param_1);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x234) = uVar19;
    *(undefined4 *)(lVar12 + 0x238) = uVar20;
  }
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
LAB_01a14d08:
  *(byte *)(param_1 + 0x1db8) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x01a14d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}


