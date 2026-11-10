/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026cf7e4; name: FUN_026cf7e4
 */


void FUN_026cf7e4(undefined8 *param_1,long param_2)

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
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  puVar7 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  uVar14 = *(ulong *)(lVar16 + 0x60);
  if (uVar14 != 0) {
    uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar14 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar13 = 0x6a437d1436c47a27;
      if (uVar14 < 0x6a437d1436c47a28) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = 0x6a437d1436c47a27 / uVar14;
        }
        uVar13 = 0x6a437d1436c47a27 - uVar13 * uVar14;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar13 * 8);
    if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
    goto LAB_026cf9c0;
    if (1 < uVar12) {
      do {
        uVar12 = plVar17[1];
        if (uVar12 == 0x6a437d1436c47a27) {
          if (plVar17[2] == 0x6a437d1436c47a27) goto LAB_026cf8c4;
        }
        else {
          if (uVar14 <= uVar12) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar12 / uVar14;
            }
            uVar12 = uVar12 - uVar6 * uVar14;
          }
          if (uVar12 != uVar13) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
      goto LAB_026cf9c0;
    }
    do {
      if (plVar17[1] == 0x6a437d1436c47a27) {
        if (plVar17[2] == 0x6a437d1436c47a27) goto LAB_026cf8c4;
      }
      else if ((plVar17[1] & uVar14 - 1) != uVar13) goto LAB_026cf9c0;
      plVar17 = (long *)*plVar17;
      iVar11 = 0;
    } while (plVar17 != (long *)0x0);
    goto LAB_026cfa30;
  }
LAB_026cf9c0:
  iVar11 = 0;
  bVar2 = *puVar7;
  goto joined_r0x026cfd0c;
LAB_026cf8c4:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_026cf9c0;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar17[0x14];
  if (uVar14 == 0) {
    iVar11 = 0;
  }
  else {
    uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar14 - 1 & 0xcb17c8aafe04bb21;
    }
    else if (uVar14 < 0xcb17c8aafe04bb22) {
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = 0xcb17c8aafe04bb21 / uVar14;
      }
      uVar13 = 0xcb17c8aafe04bb21 - uVar13 * uVar14;
    }
    else {
      uVar13 = 0xcb17c8aafe04bb21;
    }
    plVar18 = *(long **)(plVar17[0x13] + uVar13 * 8);
    if (plVar18 == (long *)0x0) {
      iVar11 = 0;
    }
    else {
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        iVar11 = 0;
      }
      else if (uVar12 < 2) {
        do {
          if (plVar18[1] == 0xcb17c8aafe04bb21) {
            if (plVar18[2] == -0x34e8375501fb44df) goto LAB_026cfa18;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar13) {
            iVar11 = 0;
            break;
          }
          plVar18 = (long *)*plVar18;
          iVar11 = 0;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar18[1];
          if (uVar12 == 0xcb17c8aafe04bb21) {
            if (plVar18[2] == -0x34e8375501fb44df) goto LAB_026cfa18;
          }
          else {
            if (uVar14 <= uVar12) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar12 / uVar14;
              }
              uVar12 = uVar12 - uVar6 * uVar14;
            }
            if (uVar12 != uVar13) {
              iVar11 = 0;
              goto LAB_026cfa1c;
            }
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
        iVar11 = 0;
      }
    }
  }
  goto LAB_026cfa1c;
LAB_026cfac8:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = plVar17[0x14];
    if (uVar14 == 0) {
      iVar10 = 0;
    }
    else {
      uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar14 - 1 & 0x248a836b781516ad;
      }
      else if (uVar14 < 0x248a836b781516ae) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = 0x248a836b781516ad / uVar14;
        }
        uVar13 = 0x248a836b781516ad - uVar13 * uVar14;
      }
      else {
        uVar13 = 0x248a836b781516ad;
      }
      plVar18 = *(long **)(plVar17[0x13] + uVar13 * 8);
      if (plVar18 == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          iVar10 = 0;
        }
        else if (uVar12 < 2) {
          do {
            if (plVar18[1] == 0x248a836b781516ad) {
              if (plVar18[2] == 0x248a836b781516ad) goto LAB_026cfc14;
            }
            else if ((plVar18[1] & uVar14 - 1) != uVar13) {
              iVar10 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            iVar10 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar18[1];
            if (uVar12 == 0x248a836b781516ad) {
              if (plVar18[2] == 0x248a836b781516ad) goto LAB_026cfc14;
            }
            else {
              if (uVar14 <= uVar12) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar12 / uVar14;
                }
                uVar12 = uVar12 - uVar6 * uVar14;
              }
              if (uVar12 != uVar13) {
                iVar10 = 0;
                goto LAB_026cfc18;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          iVar10 = 0;
        }
      }
    }
    goto LAB_026cfc18;
  }
  goto LAB_026cfbc4;
LAB_026cfc14:
  iVar10 = (int)plVar18[6];
LAB_026cfc18:
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
    (**(code **)(*plVar17 + 0x10))();
  }
  goto LAB_026cfc2c;
LAB_026cfa18:
  iVar11 = (int)plVar18[6];
LAB_026cfa1c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar17 + 0x10))();
    bVar2 = *puVar7;
  }
  else {
LAB_026cfa30:
    bVar2 = *puVar7;
  }
joined_r0x026cfd0c:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar8;
  *(long *)puVar9 = lVar16;
  uVar14 = *(ulong *)(lVar16 + 0x60);
  if (uVar14 != 0) {
    uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar14 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar13 = 0x6a437d1436c47a27;
      if (uVar14 < 0x6a437d1436c47a28) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = 0x6a437d1436c47a27 / uVar14;
        }
        uVar13 = 0x6a437d1436c47a27 - uVar13 * uVar14;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar13 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar17[1] == 0x6a437d1436c47a27) {
            if (plVar17[2] == 0x6a437d1436c47a27) goto LAB_026cfac8;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar13) goto LAB_026cfbc4;
          plVar17 = (long *)*plVar17;
          iVar10 = 0;
        } while (plVar17 != (long *)0x0);
        goto LAB_026cfc2c;
      }
      do {
        uVar12 = plVar17[1];
        if (uVar12 == 0x6a437d1436c47a27) {
          if (plVar17[2] == 0x6a437d1436c47a27) goto LAB_026cfac8;
        }
        else {
          if (uVar14 <= uVar12) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar12 / uVar14;
            }
            uVar12 = uVar12 - uVar6 * uVar14;
          }
          if (uVar12 != uVar13) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
LAB_026cfbc4:
  iVar10 = 0;
LAB_026cfc2c:
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar21 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
  param_1[4] = *(undefined8 *)PTR_DAT_0437a0f8;
  param_1[5] = uVar21;
  lVar16 = *(long *)(param_2 + 0xb8);
  if (*(long *)(param_2 + 0xc0) != lVar16) {
    uVar12 = *(ulong *)(param_2 + 0xf0);
    uVar14 = uVar12 + *(long *)(param_2 + 0xf8);
    plVar17 = (long *)(lVar16 + (uVar14 >> 3 & 0x1ffffffffffffff8));
    lVar15 = *plVar17 + (uVar14 & 0x3f) * 0x40;
    lVar16 = *(long *)(lVar16 + (uVar12 >> 3 & 0x1ffffffffffffff8)) + (uVar12 & 0x3f) * 0x40;
    if (lVar16 != lVar15) {
      iVar10 = iVar10 * iVar11;
      iVar11 = -1;
      do {
        lVar20 = *plVar17;
        if (lVar20 == lVar15) {
          cVar3 = *(char *)(plVar17[-1] + 0xfc0);
        }
        else {
          cVar3 = *(char *)(lVar15 + -0x40);
        }
        if (cVar3 != '\0') {
          lVar19 = lVar15;
          if (lVar20 == lVar15) {
            lVar19 = plVar17[-1] + 0x1000;
          }
          iVar5 = 0;
          if (iVar10 != 0) {
            iVar5 = *(int *)(lVar19 + -0x10) / iVar10;
          }
          iVar5 = *(int *)(lVar19 + -0x10) - iVar5 * iVar10;
          if ((iVar11 == -1) || (iVar5 < iVar11)) {
            lVar19 = lVar15;
            if (lVar20 == lVar15) {
              lVar19 = plVar17[-1] + 0x1000;
            }
            uVar21 = *(undefined8 *)(lVar19 + -0x18);
            param_1[3] = *(undefined8 *)(lVar19 + -0x28);
            param_1[5] = uVar21;
            param_1[1] = *(undefined8 *)(lVar19 + -0x38);
            *param_1 = *(undefined8 *)(lVar19 + -0x40);
            uVar21 = *(undefined8 *)(lVar19 + -0x30);
            param_1[4] = *(undefined8 *)(lVar19 + -0x20);
            param_1[2] = uVar21;
            lVar20 = *plVar17;
            iVar11 = iVar5;
          }
        }
        if (lVar20 == lVar15) {
          plVar17 = plVar17 + -1;
          lVar15 = *plVar17 + 0x1000;
        }
        lVar15 = lVar15 + -0x40;
      } while (lVar16 != lVar15);
    }
  }
  return;
}


