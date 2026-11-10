/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e974c; name: FUN_025e974c
 */


undefined4 FUN_025e974c(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 uVar20;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar17 = *(long **)(lVar10 + 0x280);
  if (plVar17 != (long *)0x0) {
    lVar10 = plVar17[0xb];
    puVar9 = *(undefined8 **)(lVar10 + 0x18);
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      puVar9 = (undefined8 *)(**(code **)*puVar9)();
      *(undefined8 **)(lVar10 + 0x10) = puVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = FUN_010dac08(puVar9,0);
    iVar8 = 0;
    if (uVar7 != 0) {
      uVar18 = (ulong)uVar7;
      plVar19 = plVar17 + 0xd;
      do {
        uVar7 = FUN_02c5072c((short)*plVar19,0xd);
        iVar8 = iVar8 + (uVar7 & 1);
        uVar18 = uVar18 - 1;
        plVar19 = (long *)((long)plVar19 + 4);
      } while (uVar18 != 0);
    }
    lVar10 = plVar17[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    if (iVar8 != 0) {
      switch(iVar8) {
      case 1:
        goto switchD_025e9aa4_caseD_1;
      case 2:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        puVar11 = *(undefined1 **)(lVar10 + 0x60);
        if (puVar11 == (undefined1 *)0x0) {
          return 0;
        }
        uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar11) {
          puVar12 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar13 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
          }
          puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
        }
        plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025ea27c;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
              return 0;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          puVar15 = (undefined1 *)plVar17[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025ea27c;
          }
          else {
            if (puVar11 <= puVar15) {
              uVar18 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar15 / (ulong)puVar11;
              }
              puVar15 = puVar15 + -(uVar18 * (long)puVar11);
            }
            if (puVar15 != puVar12) {
              return 0;
            }
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 3:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        puVar11 = *(undefined1 **)(lVar10 + 0x60);
        if (puVar11 == (undefined1 *)0x0) {
          return 0;
        }
        uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar11) {
          puVar12 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar13 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
          }
          puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
        }
        plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e9f44;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
              return 0;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          puVar15 = (undefined1 *)plVar17[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e9f44;
          }
          else {
            if (puVar11 <= puVar15) {
              uVar18 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar15 / (ulong)puVar11;
              }
              puVar15 = puVar15 + -(uVar18 * (long)puVar11);
            }
            if (puVar15 != puVar12) {
              return 0;
            }
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 4:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        puVar11 = *(undefined1 **)(lVar10 + 0x60);
        if (puVar11 == (undefined1 *)0x0) {
          return 0;
        }
        uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar11) {
          puVar12 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar13 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
          }
          puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
        }
        plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025ea0e0;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
              return 0;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          puVar15 = (undefined1 *)plVar17[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025ea0e0;
          }
          else {
            if (puVar11 <= puVar15) {
              uVar18 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar15 / (ulong)puVar11;
              }
              puVar15 = puVar15 + -(uVar18 * (long)puVar11);
            }
            if (puVar15 != puVar12) {
              return 0;
            }
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 5:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        puVar11 = *(undefined1 **)(lVar10 + 0x60);
        if (puVar11 == (undefined1 *)0x0) {
          return 0;
        }
        uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar11) {
          puVar12 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar13 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
          }
          puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
        }
        plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e9da8;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
              return 0;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          puVar15 = (undefined1 *)plVar17[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e9da8;
          }
          else {
            if (puVar11 <= puVar15) {
              uVar18 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar15 / (ulong)puVar11;
              }
              puVar15 = puVar15 + -(uVar18 * (long)puVar11);
            }
            if (puVar15 != puVar12) {
              return 0;
            }
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            return 0;
          }
        } while( true );
      default:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        puVar11 = *(undefined1 **)(lVar10 + 0x60);
        if (puVar11 == (undefined1 *)0x0) {
          return 0;
        }
        uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
        }
        else if (&DAT_7c08eae870e235e0 < puVar11) {
          puVar12 = &DAT_7c08eae870e235e0;
        }
        else {
          uVar13 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
          }
          puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
        }
        plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025ea418;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
              return 0;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          puVar15 = (undefined1 *)plVar17[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025ea418;
          }
          else {
            if (puVar11 <= puVar15) {
              uVar18 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar18 = (ulong)puVar15 / (ulong)puVar11;
              }
              puVar15 = puVar15 + -(uVar18 * (long)puVar11);
            }
            if (puVar15 != puVar12) {
              return 0;
            }
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  puVar11 = *(undefined1 **)(lVar10 + 0x60);
  if (puVar11 == (undefined1 *)0x0) {
    return 0;
  }
  uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar18 < 2) {
    puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
  }
  else if (&DAT_7c08eae870e235e0 < puVar11) {
    puVar12 = &DAT_7c08eae870e235e0;
  }
  else {
    uVar13 = 0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
    }
    puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
  }
  plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  if (uVar18 < 2) {
    do {
      if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
        if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e98e4;
      }
      else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
        return 0;
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    puVar15 = (undefined1 *)plVar17[1];
    if (puVar15 == &DAT_7c08eae870e235e0) {
      if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e98e4;
    }
    else {
      if (puVar11 <= puVar15) {
        uVar18 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar18 = (ulong)puVar15 / (ulong)puVar11;
        }
        puVar15 = puVar15 + -(uVar18 * (long)puVar11);
      }
      if (puVar15 != puVar12) {
        return 0;
      }
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_025ea418:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x781bfc9564e239e8;
    }
    else if (uVar18 < 0x781bfc9564e239e9) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x781bfc9564e239e8 / uVar18;
      }
      uVar14 = 0x781bfc9564e239e8 - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x781bfc9564e239e8;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x781bfc9564e239e8) {
            if (plVar16[2] == 0x781bfc9564e239e8) goto LAB_025ea7f4;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x781bfc9564e239e8) {
            if (plVar16[2] == 0x781bfc9564e239e8) goto LAB_025ea7f4;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025ea7f8:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025e9a3c;
LAB_025ea7f4:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025ea7f8;
LAB_025e9da8:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x781bfc9564e239e8;
    }
    else if (uVar18 < 0x781bfc9564e239e9) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x781bfc9564e239e8 / uVar18;
      }
      uVar14 = 0x781bfc9564e239e8 - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x781bfc9564e239e8;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x781bfc9564e239e8) {
            if (plVar16[2] == 0x781bfc9564e239e8) goto LAB_025ea6b4;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x781bfc9564e239e8) {
            if (plVar16[2] == 0x781bfc9564e239e8) goto LAB_025ea6b4;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025ea6b8:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025e9a3c;
LAB_025ea6b4:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025ea6b8;
LAB_025ea0e0:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x781bfd9564e23b9b;
    }
    else if (uVar18 < 0x781bfd9564e23b9c) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x781bfd9564e23b9b / uVar18;
      }
      uVar14 = 0x781bfd9564e23b9b - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x781bfd9564e23b9b;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x781bfd9564e23b9b) {
            if (plVar16[2] == 0x781bfd9564e23b9b) goto LAB_025ea754;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x781bfd9564e23b9b) {
            if (plVar16[2] == 0x781bfd9564e23b9b) goto LAB_025ea754;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025ea758:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025e9a3c;
LAB_025ea754:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025ea758;
LAB_025e9f44:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x781c029564e2441a;
    }
    else if (uVar18 < 0x781c029564e2441b) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x781c029564e2441a / uVar18;
      }
      uVar14 = 0x781c029564e2441a - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x781c029564e2441a;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x781c029564e2441a) {
            if (plVar16[2] == 0x781c029564e2441a) goto LAB_025ea704;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x781c029564e2441a) {
            if (plVar16[2] == 0x781c029564e2441a) goto LAB_025ea704;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025ea708:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025e9a3c;
LAB_025ea704:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025ea708;
LAB_025ea27c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x781c039564e245cd;
    }
    else if (uVar18 < 0x781c039564e245ce) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x781c039564e245cd / uVar18;
      }
      uVar14 = 0x781c039564e245cd - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x781c039564e245cd;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x781c039564e245cd) {
            if (plVar16[2] == 0x781c039564e245cd) goto LAB_025ea7a4;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x781c039564e245cd) {
            if (plVar16[2] == 0x781c039564e245cd) goto LAB_025ea7a4;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025ea7a8:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025e9a3c;
LAB_025ea7a4:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025ea7a8;
switchD_025e9aa4_caseD_1:
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  puVar11 = *(undefined1 **)(lVar10 + 0x60);
  if (puVar11 == (undefined1 *)0x0) {
    return 0;
  }
  uVar18 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar18 < 2) {
    puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x7c08eae870e235e0);
  }
  else if (&DAT_7c08eae870e235e0 < puVar11) {
    puVar12 = &DAT_7c08eae870e235e0;
  }
  else {
    uVar13 = 0;
    if (puVar11 != (undefined1 *)0x0) {
      uVar13 = 0x7c08eae870e235e0 / (ulong)puVar11;
    }
    puVar12 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar11);
  }
  plVar17 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  if (uVar18 < 2) {
    do {
      if ((undefined1 *)plVar17[1] == &DAT_7c08eae870e235e0) {
        if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) goto LAB_025e9b68;
      }
      else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar12) {
        return 0;
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    puVar15 = (undefined1 *)plVar17[1];
    if (puVar15 == &DAT_7c08eae870e235e0) {
      if ((undefined1 *)plVar17[2] == &DAT_7c08eae870e235e0) break;
    }
    else {
      if (puVar11 <= puVar15) {
        uVar18 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar18 = (ulong)puVar15 / (ulong)puVar11;
        }
        puVar15 = puVar15 + -(uVar18 * (long)puVar11);
      }
      if (puVar15 != puVar12) {
        return 0;
      }
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_025e9b68:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x781c009564e240b4;
    }
    else if (uVar18 < 0x781c009564e240b5) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x781c009564e240b4 / uVar18;
      }
      uVar14 = 0x781c009564e240b4 - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x781c009564e240b4;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x781c009564e240b4) {
            if (plVar16[2] == 0x781c009564e240b4) goto LAB_025ea664;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x781c009564e240b4) {
            if (plVar16[2] == 0x781c009564e240b4) goto LAB_025ea664;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025ea668:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_025e9a3c;
LAB_025ea664:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025ea668;
LAB_025e9a28:
  uVar20 = (undefined4)plVar16[6];
  goto LAB_025e9a2c;
LAB_025e98e4:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) {
    return 0;
  }
  plVar19 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar18 = plVar17[0x21];
  uVar20 = 0;
  if (uVar18 != 0) {
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar18 - 1 & 0x71c530fe9920da38;
    }
    else if (uVar18 < 0x71c530fe9920da39) {
      uVar14 = 0;
      if (uVar18 != 0) {
        uVar14 = 0x71c530fe9920da38 / uVar18;
      }
      uVar14 = 0x71c530fe9920da38 - uVar14 * uVar18;
    }
    else {
      uVar14 = 0x71c530fe9920da38;
    }
    plVar16 = *(long **)(plVar17[0x20] + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0x71c530fe9920da38) {
            if (plVar16[2] == 0x71c530fe9920da38) goto LAB_025e9a28;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0x71c530fe9920da38) {
            if (plVar16[2] == 0x71c530fe9920da38) goto LAB_025e9a28;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar5 * uVar18;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_025e9a2c:
  do {
    iVar8 = (int)*plVar19 + -1;
    bVar6 = iVar8 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *(int *)plVar19 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025e9a3c:
  if (bVar6) {
    (**(code **)(*plVar17 + 0x10))();
  }
  return uVar20;
}


