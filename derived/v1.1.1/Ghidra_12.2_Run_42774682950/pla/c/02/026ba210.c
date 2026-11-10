/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026ba210; name: FUN_026ba210
 */


uint FUN_026ba210(uint param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  char cVar21;
  
  puVar6 = PTR_DAT_04379558;
  uVar13 = (ulong)(int)param_1;
  if ((&DAT_03a7dd03)[uVar13] == '\0' || 4 < param_1) {
    return param_1;
  }
  if ((0x1bU >> (ulong)(param_1 & 0x1f) & 1) == 0) {
    return param_1;
  }
  iVar11 = *(int *)(&DAT_03a7dd90 + uVar13 * 4);
  if ((param_2 & 1) == 0) {
    iVar10 = 3;
    if ((uVar13 & 0xfffffffffffffffd) != 0) {
      iVar10 = -1;
    }
    uVar19 = *(uint *)(&DAT_03889000 + (long)(iVar10 + iVar11) * 4);
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar8 = PTR_DAT_04379568;
    puVar7 = PTR_DAT_04379560;
    lVar14 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar14;
    plVar20 = *(long **)(lVar14 + 0x228);
    if (plVar20 != (long *)0x0) {
      lVar14 = plVar20[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_026baeac;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar21 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      uVar13 = ((long *)plVar20[0x37])[1];
      if (uVar13 != 0) {
        uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar15 = *(ulong *)(&DAT_03a7dd40 + (long)(int)uVar19 * 8);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 < 2) {
          uVar17 = uVar13 - 1 & uVar15;
        }
        else if (uVar15 < uVar13) {
          uVar17 = uVar15;
        }
        else {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar15 / uVar13;
          }
          uVar17 = uVar15 - uVar17 * uVar13;
        }
        plVar18 = *(long **)(*(long *)plVar20[0x37] + uVar17 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if (uVar16 < 2) {
            do {
              if (plVar18[1] == uVar15) {
                if (plVar18[2] == uVar15) goto LAB_026ba708;
              }
              else if ((plVar18[1] & uVar13 - 1) != uVar17) goto LAB_026ba514;
              plVar18 = (long *)*plVar18;
              cVar21 = '\0';
            } while (plVar18 != (long *)0x0);
            goto LAB_026ba70c;
          }
          do {
            uVar16 = plVar18[1];
            if (uVar16 == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026ba708;
            }
            else {
              if (uVar13 <= uVar16) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar16 / uVar13;
                }
                uVar16 = uVar16 - uVar5 * uVar13;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
LAB_026ba514:
      cVar21 = '\0';
      goto LAB_026ba70c;
    }
    goto LAB_026ba72c;
  }
  uVar19 = *(uint *)(&DAT_03889000 + ((ulong)(iVar11 + 1) & 3) * 4);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  lVar14 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar14;
  plVar20 = *(long **)(lVar14 + 0x228);
  if (plVar20 != (long *)0x0) {
    lVar14 = plVar20[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_026baeac;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar21 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    uVar13 = ((long *)plVar20[0x37])[1];
    if (uVar13 != 0) {
      uVar15 = *(ulong *)(&DAT_03a7dd40 + (long)(int)uVar19 * 8);
      uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar13 - 1 & uVar15;
      }
      else if (uVar15 < uVar13) {
        uVar17 = uVar15;
      }
      else {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = uVar15 / uVar13;
        }
        uVar17 = uVar15 - uVar17 * uVar13;
      }
      plVar18 = *(long **)(*(long *)plVar20[0x37] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026ba564;
            }
            else if ((plVar18[1] & uVar13 - 1) != uVar17) goto LAB_026ba3c4;
            plVar18 = (long *)*plVar18;
            cVar21 = '\0';
          } while (plVar18 != (long *)0x0);
          goto LAB_026ba568;
        }
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar15) {
            if (plVar18[2] == uVar15) goto LAB_026ba564;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar5 * uVar13;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
LAB_026ba3c4:
    cVar21 = '\0';
    goto LAB_026ba568;
  }
LAB_026ba588:
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  plVar20 = *(long **)(lVar14 + 0x228);
  if (plVar20 != (long *)0x0) {
    lVar14 = plVar20[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_026baeac;
    uVar2 = *(uint *)(&DAT_03889000 + ((ulong)(iVar11 + 2) & 3) * 4);
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar21 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    uVar13 = ((long *)plVar20[0x37])[1];
    if (uVar13 != 0) {
      uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar15 = *(ulong *)(&DAT_03a7dd40 + (long)(int)uVar2 * 8);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar13 - 1 & uVar15;
      }
      else if (uVar15 < uVar13) {
        uVar17 = uVar15;
      }
      else {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = uVar15 / uVar13;
        }
        uVar17 = uVar15 - uVar17 * uVar13;
      }
      plVar18 = *(long **)(*(long *)plVar20[0x37] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026ba8c8;
            }
            else if ((plVar18[1] & uVar13 - 1) != uVar17) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026ba8c8;
            }
            else {
              if (uVar13 <= uVar16) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar16 / uVar13;
                }
                uVar16 = uVar16 - uVar5 * uVar13;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    cVar21 = '\0';
LAB_026ba8d4:
    lVar14 = plVar20[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (cVar21 != '\0') {
      return uVar19;
    }
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  plVar20 = *(long **)(lVar14 + 0x228);
  if (plVar20 != (long *)0x0) {
    lVar14 = plVar20[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_026baeac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    uVar2 = *(uint *)(&DAT_03889000 + ((ulong)(iVar11 - 1) & 3) * 4);
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar21 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    uVar13 = ((long *)plVar20[0x37])[1];
    if (uVar13 != 0) {
      uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar15 = *(ulong *)(&DAT_03a7dd40 + (long)(int)uVar2 * 8);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar13 - 1 & uVar15;
      }
      else if (uVar15 < uVar13) {
        uVar17 = uVar15;
      }
      else {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = uVar15 / uVar13;
        }
        uVar17 = uVar15 - uVar17 * uVar13;
      }
      plVar18 = *(long **)(*(long *)plVar20[0x37] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026bac34;
            }
            else if ((plVar18[1] & uVar13 - 1) != uVar17) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026bac34;
            }
            else {
              if (uVar13 <= uVar16) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar16 / uVar13;
                }
                uVar16 = uVar16 - uVar5 * uVar13;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    cVar21 = '\0';
LAB_026bac40:
    lVar14 = plVar20[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
joined_r0x026baccc:
    if (iVar11 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (cVar21 != '\0') {
      return uVar19;
    }
  }
  return param_1;
LAB_026ba708:
  cVar21 = (char)plVar18[3];
LAB_026ba70c:
  lVar14 = plVar20[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (cVar21 != '\0') {
    return uVar19;
  }
LAB_026ba72c:
  iVar10 = iVar11 + 2;
  if (-1 < iVar11 + -2) {
    iVar10 = iVar11 + -2;
  }
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  plVar20 = *(long **)(lVar14 + 0x228);
  if (plVar20 != (long *)0x0) {
    lVar14 = plVar20[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_026baeac;
    uVar2 = *(uint *)(&DAT_03889000 + (long)iVar10 * 4);
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar21 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    uVar13 = ((long *)plVar20[0x37])[1];
    if (uVar13 != 0) {
      uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar15 = *(ulong *)(&DAT_03a7dd40 + (long)(int)uVar2 * 8);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar13 - 1 & uVar15;
      }
      else if (uVar15 < uVar13) {
        uVar17 = uVar15;
      }
      else {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = uVar15 / uVar13;
        }
        uVar17 = uVar15 - uVar17 * uVar13;
      }
      plVar18 = *(long **)(*(long *)plVar20[0x37] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar18[1] == uVar15) {
              if (plVar18[2] == uVar15) goto LAB_026baa7c;
            }
            else if ((plVar18[1] & uVar13 - 1) != uVar17) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          cVar21 = '\0';
          goto LAB_026baa88;
        }
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar15) {
            if (plVar18[2] == uVar15) goto LAB_026baa7c;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar5 * uVar13;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
    cVar21 = '\0';
    goto LAB_026baa88;
  }
  goto LAB_026baab8;
LAB_026baa7c:
  cVar21 = (char)plVar18[3];
  if (cVar21 != '\0') {
    uVar19 = uVar2;
  }
LAB_026baa88:
  lVar14 = plVar20[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (cVar21 != '\0') {
    return uVar19;
  }
LAB_026baab8:
  puVar7 = PTR_DAT_04379560;
  iVar10 = iVar11 + -3;
  if (iVar10 < 0) {
    iVar10 = iVar11 + 1;
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  plVar20 = *(long **)(lVar14 + 0x228);
  if (plVar20 == (long *)0x0) {
    return param_1;
  }
  lVar14 = plVar20[0xb];
  if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_026baeac;
  uVar2 = *(uint *)(&DAT_03889000 + (long)iVar10 * 4);
  if (*(long *)(lVar14 + 0x10) == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
    *(undefined8 *)(lVar14 + 0x10) = uVar12;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    cVar21 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
  uVar13 = ((long *)plVar20[0x37])[1];
  if (uVar13 != 0) {
    uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = *(ulong *)(&DAT_03a7dd40 + (long)(int)uVar2 * 8);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar13 - 1 & uVar15;
    }
    else if (uVar15 < uVar13) {
      uVar17 = uVar15;
    }
    else {
      uVar17 = 0;
      if (uVar13 != 0) {
        uVar17 = uVar15 / uVar13;
      }
      uVar17 = uVar15 - uVar17 * uVar13;
    }
    plVar18 = *(long **)(*(long *)plVar20[0x37] + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == uVar15) {
            if (plVar18[2] == uVar15) goto LAB_026baca8;
          }
          else if ((plVar18[1] & uVar13 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar15) {
            if (plVar18[2] == uVar15) goto LAB_026baca8;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar5 * uVar13;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  cVar21 = '\0';
LAB_026bacb4:
  lVar14 = plVar20[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar11 = *piVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto joined_r0x026baccc;
LAB_026baca8:
  cVar21 = (char)plVar18[3];
  if (cVar21 != '\0') {
    uVar19 = uVar2;
  }
  goto LAB_026bacb4;
LAB_026ba564:
  cVar21 = (char)plVar18[3];
LAB_026ba568:
  lVar14 = plVar20[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (cVar21 != '\0') {
    return uVar19;
  }
  goto LAB_026ba588;
LAB_026ba8c8:
  cVar21 = (char)plVar18[3];
  if (cVar21 != '\0') {
    uVar19 = uVar2;
  }
  goto LAB_026ba8d4;
LAB_026bac34:
  cVar21 = (char)plVar18[3];
  if (cVar21 != '\0') {
    uVar19 = uVar2;
  }
  goto LAB_026bac40;
}


