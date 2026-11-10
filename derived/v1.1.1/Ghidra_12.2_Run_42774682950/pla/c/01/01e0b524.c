/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0b524; name: FUN_01e0b524
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0b524(long *param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  
  puVar9 = PTR_DAT_04380750;
  plVar18 = (long *)PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d8;
  plVar19 = (long *)PTR_DAT_043794d0;
  lVar20 = *param_1;
  if (lVar20 == 0) {
    return;
  }
  if (*(int *)(lVar20 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar20 + 0xc);
  iVar11 = *(int *)(lVar20 + 0xc);
  do {
    plVar22 = *(long **)(lVar20 + 0x10);
    if (((*(byte *)plVar18 & 1) == 0) && (iVar10 = __cxa_guard_acquire(plVar18), iVar10 != 0)) {
      if (((*(byte *)plVar19 & 1) == 0) && (iVar10 = __cxa_guard_acquire(plVar19), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(plVar19);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(plVar18);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == (long *)puVar9) break;
      plVar22 = (long *)*plVar22;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 == 0) {
          return;
        }
        uVar15 = *(ulong *)(lVar20 + 0xf0);
        if (uVar15 == 0) goto LAB_01e0bfa0;
        uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar16 < 2) {
          uVar17 = (ulong)((uint)uVar15 - 1) & 0x1b;
        }
        else {
          uVar17 = 0x1b;
          if (uVar15 < 0x1c) {
            uVar2 = (uint)uVar15 & 0xff;
            uVar5 = 0;
            if ((uVar15 & 0xff) != 0) {
              uVar5 = 0x1b / uVar2;
            }
            uVar17 = (ulong)(0x1b - uVar5 * uVar2);
          }
        }
        plVar22 = *(long **)(*(long *)(lVar20 + 0xe8) + uVar17 * 8);
        if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
        goto LAB_01e0bfa0;
        if (1 < uVar16) break;
        goto LAB_01e0b6f8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
  do {
    uVar16 = plVar22[1];
    if (uVar16 == 0x1b) {
      if ((int)plVar22[2] == 0x1b) goto LAB_01e0b72c;
    }
    else {
      if (uVar15 <= uVar16) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar16 / uVar15;
        }
        uVar16 = uVar16 - uVar6 * uVar15;
      }
      if (uVar16 != uVar17) break;
    }
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
  goto LAB_01e0bfa0;
LAB_01e0b72c:
  plVar18 = (long *)plVar22[3];
  if (plVar18 != (long *)0x0) {
    lVar21 = plVar18[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar13 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
  puVar9 = PTR_DAT_04381cc0;
  if (((*PTR_DAT_04381cb8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04381cb8), puVar8 = PTR_DAT_0437ef00, iVar11 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437eef8), iVar11 != 0)) {
      if (((*(byte *)plVar19 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)puVar9 = puVar8;
    __cxa_guard_release(PTR_DAT_04381cb8);
  }
  for (; puVar13 != (undefined8 *)puVar9; puVar13 = (undefined8 *)*puVar13) {
  }
  for (plVar22 = (long *)plVar18[0x13]; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    while (plVar19 = (long *)plVar22[3], plVar19 != (long *)0x0) {
      lVar21 = plVar19[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar21 = plVar19[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_01bcbad0(plVar19);
      lVar21 = plVar19[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      lVar21 = plVar19[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
        plVar22 = (long *)*plVar22;
      }
      else {
        plVar22 = (long *)*plVar22;
      }
      if (plVar22 == (long *)0x0) goto LAB_01e0b8f8;
    }
    FUN_01bcbad0(0);
  }
LAB_01e0b8f8:
  if (plVar18 == (long *)0x0) {
LAB_01e0b918:
    uVar15 = *(ulong *)(lVar20 + 0xf0);
  }
  else {
    lVar21 = plVar18[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01e0b918;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    uVar15 = *(ulong *)(lVar20 + 0xf0);
  }
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = (ulong)((uint)uVar15 - 1) & 0x1c;
    }
    else {
      uVar17 = 0x1c;
      if (uVar15 < 0x1d) {
        uVar2 = (uint)uVar15 & 0xff;
        uVar5 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar5 = 0x1c / uVar2;
        }
        uVar17 = (ulong)(0x1c - uVar5 * uVar2);
      }
    }
    plVar22 = *(long **)(*(long *)(lVar20 + 0xe8) + uVar17 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar22[1] == 0x1c) {
            if ((int)plVar22[2] == 0x1c) goto LAB_01e0ba10;
          }
          else if ((plVar22[1] & uVar15 - 1) != uVar17) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar22[1];
          if (uVar16 == 0x1c) {
            if ((int)plVar22[2] == 0x1c) goto LAB_01e0ba10;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar6 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_01e0bfa0;
LAB_01e0ba10:
  plVar18 = (long *)plVar22[3];
  if (plVar18 != (long *)0x0) {
    plVar19 = (long *)plVar18[0xb];
    if ((undefined8 *)plVar19[3] == (undefined8 *)0x0) goto LAB_01e0bfbc;
    if (plVar19[2] == 0) {
      lVar21 = (*(code *)**(undefined8 **)plVar19[3])();
      plVar19[2] = lVar21;
    }
    piVar1 = (int *)((long)plVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar21 = FUN_01e0c11c(plVar18 + 10);
  for (plVar22 = *(long **)(lVar21 + 0x98); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    while (plVar19 = (long *)plVar22[3], plVar19 != (long *)0x0) {
      lVar21 = plVar19[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar21 = plVar19[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_01b51ba0(plVar19);
      lVar21 = plVar19[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      lVar21 = plVar19[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
        plVar22 = (long *)*plVar22;
      }
      else {
        plVar22 = (long *)*plVar22;
      }
      if (plVar22 == (long *)0x0) goto LAB_01e0bb6c;
    }
    FUN_01b51ba0(0);
  }
LAB_01e0bb6c:
  if (plVar18 == (long *)0x0) {
LAB_01e0bb8c:
    uVar15 = *(ulong *)(lVar20 + 0xf0);
  }
  else {
    lVar21 = plVar18[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01e0bb8c;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    uVar15 = *(ulong *)(lVar20 + 0xf0);
  }
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = (ulong)((uint)uVar15 - 1) & 0x1c;
    }
    else {
      uVar17 = 0x1c;
      if (uVar15 < 0x1d) {
        uVar2 = (uint)uVar15 & 0xff;
        uVar5 = 0;
        if ((uVar15 & 0xff) != 0) {
          uVar5 = 0x1c / uVar2;
        }
        uVar17 = (ulong)(0x1c - uVar5 * uVar2);
      }
    }
    plVar22 = *(long **)(*(long *)(lVar20 + 0xe8) + uVar17 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar22[1] == 0x1c) {
            if ((int)plVar22[2] == 0x1c) goto LAB_01e0bc84;
          }
          else if ((plVar22[1] & uVar15 - 1) != uVar17) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar22[1];
          if (uVar16 == 0x1c) {
            if ((int)plVar22[2] == 0x1c) goto LAB_01e0bc84;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar6 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_01e0bfa0;
LAB_01e0bc84:
  plVar18 = (long *)plVar22[3];
  if (plVar18 != (long *)0x0) {
    lVar21 = plVar18[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_01e0bfbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar21 = FUN_01e0c11c(plVar18 + 10);
  plVar19 = *(long **)(lVar21 + 0x98);
joined_r0x01e0bcd0:
  if (plVar19 != (long *)0x0) {
    do {
      lVar21 = _DAT_000001f0;
      plVar22 = (long *)plVar19[3];
      if (plVar22 == (long *)0x0) {
        if ((_DAT_000001f0 != 0) && (*(int *)(_DAT_000001f0 + 0xc) != 0)) {
          piVar1 = (int *)(_DAT_000001f0 + 0xc);
          iVar11 = *(int *)(_DAT_000001f0 + 0xc);
          do {
            plVar22 = *(long **)(lVar21 + 0x10);
            lVar14 = FUN_01b52494();
            while( true ) {
              if (plVar22 == (long *)0x0) goto LAB_01e0bd90;
              if (plVar22 == (long *)lVar14) break;
              plVar22 = (long *)*plVar22;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_01e0be6c;
              lVar21 = *(long *)(lVar21 + 0x18);
              if (lVar21 != 0) {
                plVar22 = (long *)(lVar21 + -0x50);
                FUN_0291a870(plVar22);
                lVar21 = *(long *)(lVar21 + 8);
                piVar1 = (int *)(lVar21 + 0xc);
                do {
                  iVar11 = *piVar1 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                goto joined_r0x01e0bed8;
              }
              break;
            }
            ClearExclusiveLocal();
LAB_01e0be6c:
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
      }
      else {
        lVar21 = plVar22[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar21 = plVar22[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01e0bfbc;
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar21 = plVar22[0x3e];
        if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
          piVar1 = (int *)(lVar21 + 0xc);
          iVar11 = *(int *)(lVar21 + 0xc);
          do {
            plVar23 = *(long **)(lVar21 + 0x10);
            lVar14 = FUN_01b52494();
            while( true ) {
              if (plVar23 == (long *)0x0) goto LAB_01e0bd58;
              if (plVar23 == (long *)lVar14) break;
              plVar23 = (long *)*plVar23;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar21 = *(long *)(lVar21 + 0x18);
                if (lVar21 != 0) {
                  plVar23 = (long *)(lVar21 + -0x50);
                  FUN_0291a870(plVar23);
                  lVar21 = *(long *)(lVar21 + 8);
                  piVar1 = (int *)(lVar21 + 0xc);
                  do {
                    iVar11 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar11 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar11 + -1 == 0) {
                    *(undefined8 *)(lVar21 + 0x18) = 0;
                    (**(code **)(*plVar23 + 0x20))(plVar23);
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_01e0bd58:
        lVar21 = plVar22[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
        lVar21 = plVar22[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar11 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
joined_r0x01e0bed8:
        if (iVar11 == 0) goto LAB_01e0bedc;
      }
LAB_01e0bd90:
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) break;
    } while( true );
  }
  plVar19 = (long *)(lVar20 + -0x50);
  if (plVar18 == (long *)0x0) goto LAB_01e0bf1c;
  lVar21 = plVar18[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 != 0) goto LAB_01e0bf1c;
  goto LAB_01e0bfa4;
LAB_01e0bedc:
  *(undefined8 *)(lVar21 + 0x18) = 0;
  (**(code **)(*plVar22 + 0x20))(plVar22);
  plVar19 = (long *)*plVar19;
  goto joined_r0x01e0bcd0;
  while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
LAB_01e0b6f8:
    if (plVar22[1] == 0x1b) {
      if ((int)plVar22[2] == 0x1b) goto LAB_01e0b72c;
    }
    else if ((plVar22[1] & uVar15 - 1) != uVar17) break;
  }
LAB_01e0bfa0:
  FUN_01e0c110();
  lVar21 = extraout_x8;
LAB_01e0bfa4:
  *(undefined8 *)(lVar21 + 0x18) = 0;
  (**(code **)(*plVar18 + 0x20))(plVar18);
LAB_01e0bf1c:
  lVar20 = *(long *)(lVar20 + 8);
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e0bf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar19 + 0x20))(plVar19);
    return;
  }
  return;
}


