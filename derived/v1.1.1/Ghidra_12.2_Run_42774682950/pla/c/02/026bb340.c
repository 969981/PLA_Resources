/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026bb340; name: FUN_026bb340
 */


int FUN_026bb340(int param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char cVar19;
  
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  puVar5 = PTR_DAT_04379558;
  if ((&DAT_03a7dd03)[param_1] == '\0') {
    return param_1;
  }
  iVar9 = 0;
  if (param_1 != 0) {
    if (param_1 == 4) {
      iVar9 = 2;
    }
    else {
      if (param_1 != 1) {
        return param_1;
      }
      iVar9 = 1;
    }
  }
  if ((param_2 & 1) == 0) {
    iVar11 = 2;
    if (iVar9 != 0) {
      iVar11 = -1;
    }
    iVar11 = (&DAT_03a7dd08)[iVar11 + iVar9];
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar12 = *(long *)puVar6;
    *(long *)puVar7 = lVar12;
    plVar18 = *(long **)(lVar12 + 0x228);
    if (plVar18 != (long *)0x0) {
      lVar12 = plVar18[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_026bbb98;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar19 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar19 = ExclusiveMonitorsStatus();
        }
      } while (cVar19 != '\0');
      uVar14 = ((long *)plVar18[0x37])[1];
      if (uVar14 != 0) {
        uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar13 = *(ulong *)(&DAT_03a7dd40 + (long)iVar11 * 8);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          uVar16 = uVar14 - 1 & uVar13;
        }
        else if (uVar13 < uVar14) {
          uVar16 = uVar13;
        }
        else {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = uVar13 / uVar14;
          }
          uVar16 = uVar13 - uVar16 * uVar14;
        }
        plVar17 = *(long **)(*(long *)plVar18[0x37] + uVar16 * 8);
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          if (uVar15 < 2) {
            do {
              if (plVar17[1] == uVar13) {
                if (plVar17[2] == uVar13) goto LAB_026bb814;
              }
              else if ((plVar17[1] & uVar14 - 1) != uVar16) goto LAB_026bb610;
              plVar17 = (long *)*plVar17;
              cVar19 = '\0';
            } while (plVar17 != (long *)0x0);
            goto LAB_026bb818;
          }
          do {
            uVar15 = plVar17[1];
            if (uVar15 == uVar13) {
              if (plVar17[2] == uVar13) goto LAB_026bb814;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar4 = 0;
                if (uVar14 != 0) {
                  uVar4 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar4 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
LAB_026bb610:
      cVar19 = '\0';
      goto LAB_026bb818;
    }
    goto LAB_026bb838;
  }
  iVar11 = (&DAT_03a7dd08)[(iVar9 + 1U) % 3];
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  plVar18 = *(long **)(lVar12 + 0x228);
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_026bbb98;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    uVar14 = ((long *)plVar18[0x37])[1];
    if (uVar14 != 0) {
      uVar13 = *(ulong *)(&DAT_03a7dd40 + (long)iVar11 * 8);
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & uVar13;
      }
      else if (uVar13 < uVar14) {
        uVar16 = uVar13;
      }
      else {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar13 / uVar14;
        }
        uVar16 = uVar13 - uVar16 * uVar14;
      }
      plVar17 = *(long **)(*(long *)plVar18[0x37] + uVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar17[1] == uVar13) {
              if (plVar17[2] == uVar13) goto LAB_026bb66c;
            }
            else if ((plVar17[1] & uVar14 - 1) != uVar16) goto LAB_026bb4e8;
            plVar17 = (long *)*plVar17;
            cVar19 = '\0';
          } while (plVar17 != (long *)0x0);
          goto LAB_026bb670;
        }
        do {
          uVar15 = plVar17[1];
          if (uVar15 == uVar13) {
            if (plVar17[2] == uVar13) goto LAB_026bb66c;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
LAB_026bb4e8:
    cVar19 = '\0';
    goto LAB_026bb670;
  }
LAB_026bb690:
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  plVar18 = *(long **)(lVar12 + 0x228);
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_026bbb98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    iVar9 = (&DAT_03a7dd08)[(iVar9 + 2U) % 3];
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    uVar14 = ((long *)plVar18[0x37])[1];
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar13 = *(ulong *)(&DAT_03a7dd40 + (long)iVar9 * 8);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & uVar13;
      }
      else if (uVar13 < uVar14) {
        uVar16 = uVar13;
      }
      else {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar13 / uVar14;
        }
        uVar16 = uVar13 - uVar16 * uVar14;
      }
      plVar17 = *(long **)(*(long *)plVar18[0x37] + uVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar17[1] == uVar13) {
              if (plVar17[2] == uVar13) goto LAB_026bb9bc;
            }
            else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 == uVar13) {
              if (plVar17[2] == uVar13) goto LAB_026bb9bc;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar4 = 0;
                if (uVar14 != 0) {
                  uVar4 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar4 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    cVar19 = '\0';
LAB_026bb9c8:
    lVar12 = plVar18[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_026bba40:
    if (iVar9 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
    if (cVar19 != '\0') {
      return iVar11;
    }
  }
  return param_1;
LAB_026bb814:
  cVar19 = (char)plVar17[3];
LAB_026bb818:
  lVar12 = plVar18[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (cVar19 != '\0') {
    return iVar11;
  }
LAB_026bb838:
  iVar8 = iVar9 + -2;
  if (iVar8 < 0) {
    iVar8 = iVar9 + 1;
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  plVar18 = *(long **)(lVar12 + 0x228);
  if (plVar18 == (long *)0x0) {
    return param_1;
  }
  lVar12 = plVar18[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_026bbb98;
  iVar9 = (&DAT_03a7dd08)[iVar8];
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
    *(undefined8 *)(lVar12 + 0x10) = uVar10;
  }
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  uVar14 = ((long *)plVar18[0x37])[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar13 = *(ulong *)(&DAT_03a7dd40 + (long)iVar9 * 8);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & uVar13;
    }
    else if (uVar13 < uVar14) {
      uVar16 = uVar13;
    }
    else {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = uVar13 / uVar14;
      }
      uVar16 = uVar13 - uVar16 * uVar14;
    }
    plVar17 = *(long **)(*(long *)plVar18[0x37] + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == uVar13) {
            if (plVar17[2] == uVar13) goto LAB_026bba1c;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == uVar13) {
            if (plVar17[2] == uVar13) goto LAB_026bba1c;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  cVar19 = '\0';
  goto LAB_026bba28;
LAB_026bba1c:
  cVar19 = (char)plVar17[3];
  if (cVar19 != '\0') {
    iVar11 = iVar9;
  }
LAB_026bba28:
  lVar12 = plVar18[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar9 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_026bba40;
LAB_026bb66c:
  cVar19 = (char)plVar17[3];
LAB_026bb670:
  lVar12 = plVar18[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (cVar19 != '\0') {
    return iVar11;
  }
  goto LAB_026bb690;
LAB_026bb9bc:
  cVar19 = (char)plVar17[3];
  if (cVar19 != '\0') {
    iVar11 = iVar9;
  }
  goto LAB_026bb9c8;
}


