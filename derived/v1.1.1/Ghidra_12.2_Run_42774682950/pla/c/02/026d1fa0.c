/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026d1fa0; name: FUN_026d1fa0
 */


void FUN_026d1fa0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  int *piVar25;
  
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar24 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
  param_1[4] = *(undefined8 *)PTR_DAT_0437a0f8;
  param_1[5] = uVar24;
  puVar9 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar11 = PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar16 = *(ulong *)(lVar18 + 0x60);
  if (uVar16 != 0) {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar15 = 0x6a437d1436c47a27;
      if (uVar16 < 0x6a437d1436c47a28) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0x6a437d1436c47a27 / uVar16;
        }
        uVar15 = 0x6a437d1436c47a27 - uVar15 * uVar16;
      }
    }
    plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + uVar15 * 8);
    if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
    goto LAB_026d2194;
    if (1 < uVar14) {
      do {
        uVar14 = plVar19[1];
        if (uVar14 == 0x6a437d1436c47a27) {
          if (plVar19[2] == 0x6a437d1436c47a27) goto LAB_026d2098;
        }
        else {
          if (uVar16 <= uVar14) {
            uVar8 = 0;
            if (uVar16 != 0) {
              uVar8 = uVar14 / uVar16;
            }
            uVar14 = uVar14 - uVar8 * uVar16;
          }
          if (uVar14 != uVar15) break;
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
      goto LAB_026d2194;
    }
    do {
      if (plVar19[1] == 0x6a437d1436c47a27) {
        if (plVar19[2] == 0x6a437d1436c47a27) goto LAB_026d2098;
      }
      else if ((plVar19[1] & uVar16 - 1) != uVar15) goto LAB_026d2194;
      plVar19 = (long *)*plVar19;
      iVar13 = 0;
    } while (plVar19 != (long *)0x0);
    goto LAB_026d2204;
  }
LAB_026d2194:
  iVar13 = 0;
  bVar3 = *puVar9;
  goto joined_r0x026d24d0;
LAB_026d2098:
  plVar19 = (long *)plVar19[3];
  if (plVar19 == (long *)0x0) goto LAB_026d2194;
  plVar1 = plVar19 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar16 = plVar19[0x14];
  if (uVar16 == 0) {
    iVar13 = 0;
  }
  else {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0xcb17c8aafe04bb21;
    }
    else if (uVar16 < 0xcb17c8aafe04bb22) {
      uVar15 = 0;
      if (uVar16 != 0) {
        uVar15 = 0xcb17c8aafe04bb21 / uVar16;
      }
      uVar15 = 0xcb17c8aafe04bb21 - uVar15 * uVar16;
    }
    else {
      uVar15 = 0xcb17c8aafe04bb21;
    }
    plVar21 = *(long **)(plVar19[0x13] + uVar15 * 8);
    if (plVar21 == (long *)0x0) {
      iVar13 = 0;
    }
    else {
      plVar21 = (long *)*plVar21;
      if (plVar21 == (long *)0x0) {
        iVar13 = 0;
      }
      else if (uVar14 < 2) {
        do {
          if (plVar21[1] == 0xcb17c8aafe04bb21) {
            if (plVar21[2] == -0x34e8375501fb44df) goto LAB_026d21ec;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar15) {
            iVar13 = 0;
            break;
          }
          plVar21 = (long *)*plVar21;
          iVar13 = 0;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar21[1];
          if (uVar14 == 0xcb17c8aafe04bb21) {
            if (plVar21[2] == -0x34e8375501fb44df) goto LAB_026d21ec;
          }
          else {
            if (uVar16 <= uVar14) {
              uVar8 = 0;
              if (uVar16 != 0) {
                uVar8 = uVar14 / uVar16;
              }
              uVar14 = uVar14 - uVar8 * uVar16;
            }
            if (uVar14 != uVar15) {
              iVar13 = 0;
              goto LAB_026d21f0;
            }
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
        iVar13 = 0;
      }
    }
  }
  goto LAB_026d21f0;
LAB_026d229c:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar16 = plVar19[0x14];
    if (uVar16 == 0) {
      iVar12 = 0;
    }
    else {
      uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar16 - 1 & 0x248a836b781516ad;
      }
      else if (uVar16 < 0x248a836b781516ae) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0x248a836b781516ad / uVar16;
        }
        uVar15 = 0x248a836b781516ad - uVar15 * uVar16;
      }
      else {
        uVar15 = 0x248a836b781516ad;
      }
      plVar21 = *(long **)(plVar19[0x13] + uVar15 * 8);
      if (plVar21 == (long *)0x0) {
        iVar12 = 0;
      }
      else {
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) {
          iVar12 = 0;
        }
        else if (uVar14 < 2) {
          do {
            if (plVar21[1] == 0x248a836b781516ad) {
              if (plVar21[2] == 0x248a836b781516ad) goto LAB_026d23e8;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar15) {
              iVar12 = 0;
              break;
            }
            plVar21 = (long *)*plVar21;
            iVar12 = 0;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar21[1];
            if (uVar14 == 0x248a836b781516ad) {
              if (plVar21[2] == 0x248a836b781516ad) goto LAB_026d23e8;
            }
            else {
              if (uVar16 <= uVar14) {
                uVar8 = 0;
                if (uVar16 != 0) {
                  uVar8 = uVar14 / uVar16;
                }
                uVar14 = uVar14 - uVar8 * uVar16;
              }
              if (uVar14 != uVar15) {
                iVar12 = 0;
                goto LAB_026d23ec;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
          iVar12 = 0;
        }
      }
    }
    goto LAB_026d23ec;
  }
  goto LAB_026d2398;
LAB_026d23e8:
  iVar12 = (int)plVar21[6];
LAB_026d23ec:
  do {
    iVar20 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
  goto LAB_026d2400;
LAB_026d21ec:
  iVar13 = (int)plVar21[6];
LAB_026d21f0:
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar19 + 0x10))();
    bVar3 = *puVar9;
  }
  else {
LAB_026d2204:
    bVar3 = *puVar9;
  }
joined_r0x026d24d0:
  if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *(long *)puVar11 = lVar18;
  uVar16 = *(ulong *)(lVar18 + 0x60);
  if (uVar16 != 0) {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar15 = 0x6a437d1436c47a27;
      if (uVar16 < 0x6a437d1436c47a28) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0x6a437d1436c47a27 / uVar16;
        }
        uVar15 = 0x6a437d1436c47a27 - uVar15 * uVar16;
      }
    }
    plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + uVar15 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar19[1] == 0x6a437d1436c47a27) {
            if (plVar19[2] == 0x6a437d1436c47a27) goto LAB_026d229c;
          }
          else if ((plVar19[1] & uVar16 - 1) != uVar15) goto LAB_026d2398;
          plVar19 = (long *)*plVar19;
          iVar12 = 0;
        } while (plVar19 != (long *)0x0);
        goto LAB_026d2400;
      }
      do {
        uVar14 = plVar19[1];
        if (uVar14 == 0x6a437d1436c47a27) {
          if (plVar19[2] == 0x6a437d1436c47a27) goto LAB_026d229c;
        }
        else {
          if (uVar16 <= uVar14) {
            uVar8 = 0;
            if (uVar16 != 0) {
              uVar8 = uVar14 / uVar16;
            }
            uVar14 = uVar14 - uVar8 * uVar16;
          }
          if (uVar14 != uVar15) break;
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
  }
LAB_026d2398:
  iVar12 = 0;
LAB_026d2400:
  lVar18 = *(long *)(param_2 + 0x130);
  if (*(long *)(param_2 + 0x138) != lVar18) {
    uVar14 = *(ulong *)(param_2 + 0x168);
    uVar16 = uVar14 + *(long *)(param_2 + 0x170);
    plVar19 = (long *)(lVar18 + (uVar16 >> 3 & 0x1ffffffffffffff8));
    lVar17 = *plVar19 + (uVar16 & 0x3f) * 0x40;
    lVar18 = *(long *)(lVar18 + (uVar14 >> 3 & 0x1ffffffffffffff8)) + (uVar14 & 0x3f) * 0x40;
    if (lVar17 != lVar18) {
      iVar13 = iVar12 * iVar13;
      iVar20 = -1;
      do {
        lVar23 = *plVar19;
        if (lVar23 == lVar17) {
          piVar25 = (int *)(plVar19[-1] + 0xff0);
          cVar6 = *(char *)(plVar19[-1] + 0xfc0);
        }
        else {
          piVar25 = (int *)(lVar17 + -0x10);
          cVar6 = *(char *)(lVar17 + -0x40);
        }
        if (cVar6 != '\0') {
          iVar4 = 0;
          if (iVar13 != 0) {
            iVar4 = *piVar25 / iVar13;
          }
          iVar4 = *piVar25 - iVar4 * iVar13;
          iVar5 = 0;
          if (iVar12 != 0) {
            iVar5 = iVar4 / iVar12;
          }
          iVar2 = 0;
          if (iVar4 != iVar5 * iVar12) {
            iVar2 = iVar13;
          }
          if ((iVar20 == -1) || (iVar2 + iVar4 < iVar20)) {
            lVar22 = lVar17;
            if (lVar23 == lVar17) {
              lVar22 = plVar19[-1] + 0x1000;
            }
            uVar24 = *(undefined8 *)(lVar22 + -0x18);
            param_1[3] = *(undefined8 *)(lVar22 + -0x28);
            param_1[5] = uVar24;
            param_1[1] = *(undefined8 *)(lVar22 + -0x38);
            *param_1 = *(undefined8 *)(lVar22 + -0x40);
            uVar24 = *(undefined8 *)(lVar22 + -0x30);
            param_1[4] = *(undefined8 *)(lVar22 + -0x20);
            param_1[2] = uVar24;
            lVar23 = *plVar19;
            iVar20 = iVar2 + iVar4;
          }
        }
        if (lVar17 == lVar23) {
          plVar19 = plVar19 + -1;
          lVar17 = *plVar19 + 0x1000;
        }
        lVar17 = lVar17 + -0x40;
      } while (lVar17 != lVar18);
    }
  }
  return;
}


