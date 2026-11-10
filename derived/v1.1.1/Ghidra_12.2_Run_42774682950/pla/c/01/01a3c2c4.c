/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3c2c4; name: FUN_01a3c2c4
 */


undefined4 FUN_01a3c2c4(void)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined4 uVar20;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar19 = *(long **)(lVar10 + 0x230);
  if (plVar19 != (long *)0x0) {
    lVar10 = plVar19[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar20 = 0;
  bVar3 = *(byte *)((long)plVar19 + 0x6b) & 7;
  if (bVar3 == 4) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar10 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar10;
    puVar11 = *(undefined1 **)(lVar10 + 0x60);
    if (puVar11 != (undefined1 *)0x0) {
      uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xf976cfc5b993016e);
      }
      else if (&DAT_f976cfc5b993016e < puVar11) {
        puVar13 = &DAT_f976cfc5b993016e;
      }
      else {
        uVar15 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar15 = 0xf976cfc5b993016e / (ulong)puVar11;
        }
        puVar13 = &DAT_f976cfc5b993016e + -(uVar15 * (long)puVar11);
      }
      plVar14 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if ((undefined1 *)plVar14[1] == &DAT_f976cfc5b993016e) {
              if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3c40c;
            }
            else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            puVar17 = (undefined1 *)plVar14[1];
            if (puVar17 == &DAT_f976cfc5b993016e) {
              if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3c40c;
            }
            else {
              if (puVar11 <= puVar17) {
                uVar12 = 0;
                if (puVar11 != (undefined1 *)0x0) {
                  uVar12 = (ulong)puVar17 / (ulong)puVar11;
                }
                puVar17 = puVar17 + -(uVar12 * (long)puVar11);
              }
              if (puVar17 != puVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
  }
  else {
    switch(bVar3) {
    case 0:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      puVar11 = *(undefined1 **)(lVar10 + 0x60);
      if (puVar11 != (undefined1 *)0x0) {
        uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar11) {
          puVar13 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar15 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar15 = 0xf976cfc5b993016e / (ulong)puVar11;
          }
          puVar13 = &DAT_f976cfc5b993016e + -(uVar15 * (long)puVar11);
        }
        plVar14 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar13 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3c8bc;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar17 = (undefined1 *)plVar14[1];
              if (puVar17 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3c8bc;
              }
              else {
                if (puVar11 <= puVar17) {
                  uVar12 = 0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar12 = (ulong)puVar17 / (ulong)puVar11;
                  }
                  puVar17 = puVar17 + -(uVar12 * (long)puVar11);
                }
                if (puVar17 != puVar13) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      break;
    case 1:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      puVar11 = *(undefined1 **)(lVar10 + 0x60);
      if (puVar11 != (undefined1 *)0x0) {
        uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar11) {
          puVar13 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar15 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar15 = 0xf976cfc5b993016e / (ulong)puVar11;
          }
          puVar13 = &DAT_f976cfc5b993016e + -(uVar15 * (long)puVar11);
        }
        plVar14 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar13 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3ca54;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar17 = (undefined1 *)plVar14[1];
              if (puVar17 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3ca54;
              }
              else {
                if (puVar11 <= puVar17) {
                  uVar12 = 0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar12 = (ulong)puVar17 / (ulong)puVar11;
                  }
                  puVar17 = puVar17 + -(uVar12 * (long)puVar11);
                }
                if (puVar17 != puVar13) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      break;
    case 2:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      puVar11 = *(undefined1 **)(lVar10 + 0x60);
      if (puVar11 != (undefined1 *)0x0) {
        uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar11) {
          puVar13 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar15 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar15 = 0xf976cfc5b993016e / (ulong)puVar11;
          }
          puVar13 = &DAT_f976cfc5b993016e + -(uVar15 * (long)puVar11);
        }
        plVar14 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar13 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3c678;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar17 = (undefined1 *)plVar14[1];
              if (puVar17 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3c678;
              }
              else {
                if (puVar11 <= puVar17) {
                  uVar12 = 0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar12 = (ulong)puVar17 / (ulong)puVar11;
                  }
                  puVar17 = puVar17 + -(uVar12 * (long)puVar11);
                }
                if (puVar17 != puVar13) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      break;
    case 3:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      puVar11 = *(undefined1 **)(lVar10 + 0x60);
      if (puVar11 != (undefined1 *)0x0) {
        uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0xf976cfc5b993016e);
        }
        else if (&DAT_f976cfc5b993016e < puVar11) {
          puVar13 = &DAT_f976cfc5b993016e;
        }
        else {
          uVar15 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar15 = 0xf976cfc5b993016e / (ulong)puVar11;
          }
          puVar13 = &DAT_f976cfc5b993016e + -(uVar15 * (long)puVar11);
        }
        plVar14 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar13 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3cbec;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar11 + -1)) != puVar13) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar17 = (undefined1 *)plVar14[1];
              if (puVar17 == &DAT_f976cfc5b993016e) {
                if ((undefined1 *)plVar14[2] == &DAT_f976cfc5b993016e) goto LAB_01a3cbec;
              }
              else {
                if (puVar11 <= puVar17) {
                  uVar12 = 0;
                  if (puVar11 != (undefined1 *)0x0) {
                    uVar12 = (ulong)puVar17 / (ulong)puVar11;
                  }
                  puVar17 = puVar17 + -(uVar12 * (long)puVar11);
                }
                if (puVar17 != puVar13) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
    }
  }
switchD_01a3c5b8_default:
  if (plVar19 != (long *)0x0) {
LAB_01a3c56c:
    lVar10 = plVar19[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return uVar20;
LAB_01a3cbec:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar12 = plVar14[0x21];
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar12 - 1 & 0xeb0ec43bef980037;
      }
      else if (uVar12 < 0xeb0ec43bef980038) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = 0xeb0ec43bef980037 / uVar12;
        }
        uVar16 = 0xeb0ec43bef980037 - uVar16 * uVar12;
      }
      else {
        uVar16 = 0xeb0ec43bef980037;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0xeb0ec43bef980037) {
              if (plVar18[2] == -0x14f13bc41067ffc9) goto LAB_01a3ced4;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0xeb0ec43bef980037) {
              if (plVar18[2] == -0x14f13bc41067ffc9) goto LAB_01a3ced4;
            }
            else {
              if (uVar12 <= uVar15) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar15 / uVar12;
                }
                uVar15 = uVar15 - uVar6 * uVar12;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3ced8;
  }
  goto switchD_01a3c5b8_default;
LAB_01a3ced4:
  uVar20 = (undefined4)plVar18[6];
LAB_01a3ced8:
  do {
    iVar8 = (int)*plVar2 + -1;
    bVar7 = iVar8 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_01a3c564;
LAB_01a3c678:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar12 = plVar14[0x21];
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar12 - 1 & 0xeb0ec13bef97fb1e;
      }
      else if (uVar12 < 0xeb0ec13bef97fb1f) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = 0xeb0ec13bef97fb1e / uVar12;
        }
        uVar16 = 0xeb0ec13bef97fb1e - uVar16 * uVar12;
      }
      else {
        uVar16 = 0xeb0ec13bef97fb1e;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0xeb0ec13bef97fb1e) {
              if (plVar18[2] == -0x14f13ec4106804e2) goto LAB_01a3c7d4;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0xeb0ec13bef97fb1e) {
              if (plVar18[2] == -0x14f13ec4106804e2) goto LAB_01a3c7d4;
            }
            else {
              if (uVar12 <= uVar15) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar15 / uVar12;
                }
                uVar15 = uVar15 - uVar6 * uVar12;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3c7d8;
  }
  goto switchD_01a3c5b8_default;
LAB_01a3c7d4:
  uVar20 = (undefined4)plVar18[6];
LAB_01a3c7d8:
  do {
    iVar8 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 != 0) goto switchD_01a3c5b8_default;
  goto LAB_01a3c7ec;
LAB_01a3ca54:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar12 = plVar14[0x21];
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar12 - 1 & 0xeb0ec23bef97fcd1;
      }
      else if (uVar12 < 0xeb0ec23bef97fcd2) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = 0xeb0ec23bef97fcd1 / uVar12;
        }
        uVar16 = 0xeb0ec23bef97fcd1 - uVar16 * uVar12;
      }
      else {
        uVar16 = 0xeb0ec23bef97fcd1;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0xeb0ec23bef97fcd1) {
              if (plVar18[2] == -0x14f13dc41068032f) goto LAB_01a3ce84;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0xeb0ec23bef97fcd1) {
              if (plVar18[2] == -0x14f13dc41068032f) goto LAB_01a3ce84;
            }
            else {
              if (uVar12 <= uVar15) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar15 / uVar12;
                }
                uVar15 = uVar15 - uVar6 * uVar12;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3ce88;
  }
  goto switchD_01a3c5b8_default;
LAB_01a3ce84:
  uVar20 = (undefined4)plVar18[6];
LAB_01a3ce88:
  do {
    iVar8 = (int)*plVar2 + -1;
    bVar7 = iVar8 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_01a3c564;
LAB_01a3c8bc:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar12 = plVar14[0x21];
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar12 - 1 & 0xeb0ebf3bef97f7b8;
      }
      else if (uVar12 < 0xeb0ebf3bef97f7b9) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = 0xeb0ebf3bef97f7b8 / uVar12;
        }
        uVar16 = 0xeb0ebf3bef97f7b8 - uVar16 * uVar12;
      }
      else {
        uVar16 = 0xeb0ebf3bef97f7b8;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0xeb0ebf3bef97f7b8) {
              if (plVar18[2] == -0x14f140c410680848) goto LAB_01a3ce34;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0xeb0ebf3bef97f7b8) {
              if (plVar18[2] == -0x14f140c410680848) goto LAB_01a3ce34;
            }
            else {
              if (uVar12 <= uVar15) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar15 / uVar12;
                }
                uVar15 = uVar15 - uVar6 * uVar12;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3ce38;
  }
  goto switchD_01a3c5b8_default;
LAB_01a3ce34:
  uVar20 = (undefined4)plVar18[6];
LAB_01a3ce38:
  do {
    iVar8 = (int)*plVar2 + -1;
    bVar7 = iVar8 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_01a3c564;
LAB_01a3c40c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar12 = plVar14[0x21];
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar12 - 1 & 0xeb0ec33bef97fe84;
      }
      else if (uVar12 < 0xeb0ec33bef97fe85) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = 0xeb0ec33bef97fe84 / uVar12;
        }
        uVar16 = 0xeb0ec33bef97fe84 - uVar16 * uVar12;
      }
      else {
        uVar16 = 0xeb0ec33bef97fe84;
      }
      plVar18 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0xeb0ec33bef97fe84) {
              if (plVar18[2] == -0x14f13cc41068017c) goto LAB_01a3c550;
            }
            else if ((plVar18[1] & uVar12 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0xeb0ec33bef97fe84) {
              if (plVar18[2] == -0x14f13cc41068017c) goto LAB_01a3c550;
            }
            else {
              if (uVar12 <= uVar15) {
                uVar6 = 0;
                if (uVar12 != 0) {
                  uVar6 = uVar15 / uVar12;
                }
                uVar15 = uVar15 - uVar6 * uVar12;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_01a3c554;
  }
  goto switchD_01a3c5b8_default;
LAB_01a3c550:
  uVar20 = (undefined4)plVar18[6];
LAB_01a3c554:
  do {
    iVar8 = (int)*plVar2 + -1;
    bVar7 = iVar8 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a3c564:
  if (!bVar7) goto switchD_01a3c5b8_default;
LAB_01a3c7ec:
  (**(code **)(*plVar14 + 0x10))();
  if (plVar19 == (long *)0x0) {
    return uVar20;
  }
  goto LAB_01a3c56c;
}


