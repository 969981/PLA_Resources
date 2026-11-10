/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0267d64c; name: FUN_0267d64c
 */


void FUN_0267d64c(undefined8 param_1,long param_2,int param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  puVar6 = PTR_DAT_04379660;
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (param_3 != 3) {
        if (param_3 != 0) goto LAB_0267e040;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        puVar8 = PTR_DAT_04379670;
        puVar7 = PTR_DAT_04379668;
        lVar14 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar14;
        uVar11 = *(ulong *)(lVar14 + 0x60);
        uVar17 = 0;
        if (uVar11 != 0) {
          uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar12 < 2) {
            uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
          }
          else {
            uVar13 = 0x6fc8d43756f5f9ed;
            if (uVar11 < 0x6fc8d43756f5f9ee) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = 0x6fc8d43756f5f9ed / uVar11;
              }
              uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
            }
          }
          plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
            if (uVar12 < 2) {
              do {
                if (plVar15[1] == 0x6fc8d43756f5f9ed) {
                  if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267ed88;
                }
                else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
            else {
              do {
                uVar12 = plVar15[1];
                if (uVar12 == 0x6fc8d43756f5f9ed) {
                  if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267ed88;
                }
                else {
                  if (uVar11 <= uVar12) {
                    uVar5 = 0;
                    if (uVar11 != 0) {
                      uVar5 = uVar12 / uVar11;
                    }
                    uVar12 = uVar12 - uVar5 * uVar11;
                  }
                  if (uVar12 != uVar13) break;
                }
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
          }
        }
        goto LAB_0267f63c;
      }
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar8 = PTR_DAT_04379670;
      puVar7 = PTR_DAT_04379668;
      lVar14 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar14;
      uVar11 = *(ulong *)(lVar14 + 0x60);
      uVar17 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
        }
        else {
          uVar13 = 0x6fc8d43756f5f9ed;
          if (uVar11 < 0x6fc8d43756f5f9ee) {
            uVar13 = 0;
            if (uVar11 != 0) {
              uVar13 = 0x6fc8d43756f5f9ed / uVar11;
            }
            uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
          }
        }
        plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if (plVar15[1] == 0x6fc8d43756f5f9ed) {
                if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267eae4;
              }
              else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar15[1];
              if (uVar12 == 0x6fc8d43756f5f9ed) {
                if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267eae4;
              }
              else {
                if (uVar11 <= uVar12) {
                  uVar5 = 0;
                  if (uVar11 != 0) {
                    uVar5 = uVar12 / uVar11;
                  }
                  uVar12 = uVar12 - uVar5 * uVar11;
                }
                if (uVar12 != uVar13) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      goto LAB_0267eee4;
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar11 = *(ulong *)(lVar14 + 0x60);
    fVar22 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
      }
      else {
        uVar13 = 0x6fc8d43756f5f9ed;
        if (uVar11 < 0x6fc8d43756f5f9ee) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = 0x6fc8d43756f5f9ed / uVar11;
          }
          uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == 0x6fc8d43756f5f9ed) {
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267d8ec;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6fc8d43756f5f9ed) {
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267d8ec;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_0267e214;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267d740;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267d740;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_0267da48;
LAB_0267ed88:
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
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x7d9252bda5f109e4;
      }
      else if (uVar11 < 0x7d9252bda5f109e5) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7d9252bda5f109e4 / uVar11;
        }
        uVar13 = 0x7d9252bda5f109e4 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x7d9252bda5f109e4;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x7d9252bda5f109e4) {
              if (plVar16[2] == 0x7d9252bda5f109e4) goto LAB_0267f624;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x7d9252bda5f109e4) {
              if (plVar16[2] == 0x7d9252bda5f109e4) goto LAB_0267f624;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267f628;
  }
LAB_0267f63c:
  bVar2 = *puVar6;
  goto joined_r0x0267fc34;
LAB_0267f624:
  uVar17 = (undefined4)plVar16[6];
LAB_0267f628:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267f63c;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
joined_r0x0267fc34:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar20 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f6d8;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f6d8;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267f834:
  bVar2 = *puVar6;
joined_r0x0267fc84:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar19 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f8d0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f8d0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267fa2c:
  bVar2 = *puVar6;
joined_r0x0267fcd4:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  fVar22 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267fac8;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267fac8;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_0267e030;
LAB_0267f6d8:
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
    uVar11 = plVar15[0x21];
    uVar20 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xe2e4509e8241bf5d;
      }
      else if (uVar11 < 0xe2e4509e8241bf5e) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xe2e4509e8241bf5d / uVar11;
        }
        uVar13 = 0xe2e4509e8241bf5d - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xe2e4509e8241bf5d;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xe2e4509e8241bf5d) {
              if (plVar16[2] == -0x1d1baf617dbe40a3) goto LAB_0267f81c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xe2e4509e8241bf5d) {
              if (plVar16[2] == -0x1d1baf617dbe40a3) goto LAB_0267f81c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267f820;
  }
  goto LAB_0267f834;
LAB_0267f81c:
  uVar20 = (undefined4)plVar16[6];
LAB_0267f820:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267f834;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267fc84;
LAB_0267f8d0:
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
    uVar11 = plVar15[0x21];
    uVar19 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x9a78d2925ef17689;
      }
      else if (uVar11 < 0x9a78d2925ef1768a) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x9a78d2925ef17689 / uVar11;
        }
        uVar13 = 0x9a78d2925ef17689 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x9a78d2925ef17689;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x9a78d2925ef17689) {
              if (plVar16[2] == -0x65872d6da10e8977) goto LAB_0267fa14;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x9a78d2925ef17689) {
              if (plVar16[2] == -0x65872d6da10e8977) goto LAB_0267fa14;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267fa18;
  }
  goto LAB_0267fa2c;
LAB_0267fa14:
  uVar19 = (undefined4)plVar16[6];
LAB_0267fa18:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267fa2c;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267fcd4;
LAB_0267fac8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0267e030;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x21];
  fVar22 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0xe9d414feebbb0430;
    }
    else if (uVar11 < 0xe9d414feebbb0431) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0xe9d414feebbb0430 / uVar11;
      }
      uVar13 = 0xe9d414feebbb0430 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0xe9d414feebbb0430;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xe9d414feebbb0430) {
            if (plVar16[2] == -0x162beb011444fbd0) goto LAB_0267fc0c;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xe9d414feebbb0430) {
            if (plVar16[2] == -0x162beb011444fbd0) goto LAB_0267fc0c;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_0267fc10;
LAB_0267fc0c:
  fVar22 = *(float *)(plVar16 + 6);
LAB_0267fc10:
  do {
    iVar10 = (int)*plVar1 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_0267e02c;
LAB_0267eae4:
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
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xf4e7d60c896d3019;
      }
      else if (uVar11 < 0xf4e7d60c896d301a) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xf4e7d60c896d3019 / uVar11;
        }
        uVar13 = 0xf4e7d60c896d3019 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xf4e7d60c896d3019;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xf4e7d60c896d3019) {
              if (plVar16[2] == -0xb1829f37692cfe7) goto LAB_0267eecc;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xf4e7d60c896d3019) {
              if (plVar16[2] == -0xb1829f37692cfe7) goto LAB_0267eecc;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267eed0;
  }
LAB_0267eee4:
  bVar2 = *puVar6;
  goto joined_r0x0267f500;
LAB_0267eecc:
  uVar17 = (undefined4)plVar16[6];
LAB_0267eed0:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267eee4;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
joined_r0x0267f500:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar20 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267ef80;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267ef80;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267f0dc:
  bVar2 = *puVar6;
joined_r0x0267f550:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar19 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f178;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f178;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267f2d4:
  bVar2 = *puVar6;
joined_r0x0267f5a0:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  fVar22 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f370;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267f370;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_0267e030;
LAB_0267ef80:
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
    uVar11 = plVar15[0x21];
    uVar20 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x6a9d0830209445f4;
      }
      else if (uVar11 < 0x6a9d0830209445f5) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6a9d0830209445f4 / uVar11;
        }
        uVar13 = 0x6a9d0830209445f4 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x6a9d0830209445f4;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x6a9d0830209445f4) {
              if (plVar16[2] == 0x6a9d0830209445f4) goto LAB_0267f0c4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x6a9d0830209445f4) {
              if (plVar16[2] == 0x6a9d0830209445f4) goto LAB_0267f0c4;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267f0c8;
  }
  goto LAB_0267f0dc;
LAB_0267f0c4:
  uVar20 = (undefined4)plVar16[6];
LAB_0267f0c8:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267f0dc;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267f550;
LAB_0267f178:
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
    uVar11 = plVar15[0x21];
    uVar19 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x734474ee9e877d6;
      }
      else if (uVar11 < 0x734474ee9e877d7) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x734474ee9e877d6 / uVar11;
        }
        uVar13 = 0x734474ee9e877d6 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x734474ee9e877d6;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x734474ee9e877d6) {
              if (plVar16[2] == 0x734474ee9e877d6) goto LAB_0267f2bc;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x734474ee9e877d6) {
              if (plVar16[2] == 0x734474ee9e877d6) goto LAB_0267f2bc;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267f2c0;
  }
  goto LAB_0267f2d4;
LAB_0267f2bc:
  uVar19 = (undefined4)plVar16[6];
LAB_0267f2c0:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267f2d4;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267f5a0;
LAB_0267f370:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0267e030;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x21];
  fVar22 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x8e769aa12282fc91;
    }
    else if (uVar11 < 0x8e769aa12282fc92) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0x8e769aa12282fc91 / uVar11;
      }
      uVar13 = 0x8e769aa12282fc91 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0x8e769aa12282fc91;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x8e769aa12282fc91) {
            if (plVar16[2] == -0x7189655edd7d036f) goto LAB_0267f4b4;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x8e769aa12282fc91) {
            if (plVar16[2] == -0x7189655edd7d036f) goto LAB_0267f4b4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_0267f4b8;
LAB_0267f4b4:
  fVar22 = *(float *)(plVar16 + 6);
LAB_0267f4b8:
  do {
    iVar10 = (int)*plVar1 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_0267e02c;
LAB_0267d8ec:
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
    uVar11 = plVar15[0x21];
    fVar22 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xd6a8a501d99d5b75;
      }
      else if (uVar11 < 0xd6a8a501d99d5b76) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xd6a8a501d99d5b75 / uVar11;
        }
        uVar13 = 0xd6a8a501d99d5b75 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xd6a8a501d99d5b75;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xd6a8a501d99d5b75) {
              if (plVar16[2] == -0x29575afe2662a48b) goto LAB_0267e1fc;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xd6a8a501d99d5b75) {
              if (plVar16[2] == -0x29575afe2662a48b) goto LAB_0267e1fc;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267e200;
  }
LAB_0267e214:
  bVar2 = *puVar6;
  goto joined_r0x0267ec10;
LAB_0267e1fc:
  fVar22 = *(float *)(plVar16 + 6);
LAB_0267e200:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267e214;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
joined_r0x0267ec10:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  fVar21 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e2b0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e2b0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_0267e40c;
LAB_0267e2b0:
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
    uVar11 = plVar15[0x21];
    fVar21 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xd6c38f01d9b3fdcb;
      }
      else if (uVar11 < 0xd6c38f01d9b3fdcc) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xd6c38f01d9b3fdcb / uVar11;
        }
        uVar13 = 0xd6c38f01d9b3fdcb - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xd6c38f01d9b3fdcb;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xd6c38f01d9b3fdcb) {
              if (plVar16[2] == -0x293c70fe264c0235) goto LAB_0267e3f4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xd6c38f01d9b3fdcb) {
              if (plVar16[2] == -0x293c70fe264c0235) goto LAB_0267e3f4;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267e3f8;
  }
  goto LAB_0267e40c;
LAB_0267e4c0:
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
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x16e0a1f4ee01547e;
      }
      else if (uVar11 < 0x16e0a1f4ee01547f) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x16e0a1f4ee01547e / uVar11;
        }
        uVar13 = 0x16e0a1f4ee01547e - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x16e0a1f4ee01547e;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x16e0a1f4ee01547e) {
              if (plVar16[2] == 0x16e0a1f4ee01547e) goto LAB_0267e604;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x16e0a1f4ee01547e) {
              if (plVar16[2] == 0x16e0a1f4ee01547e) goto LAB_0267e604;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267e608;
  }
  goto LAB_0267e61c;
LAB_0267e604:
  uVar17 = (undefined4)plVar16[6];
LAB_0267e608:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267e61c;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267ec70;
LAB_0267e6bc:
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
    uVar11 = plVar15[0x21];
    uVar20 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xe93ac3d18073ce5f;
      }
      else if (uVar11 < 0xe93ac3d18073ce60) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xe93ac3d18073ce5f / uVar11;
        }
        uVar13 = 0xe93ac3d18073ce5f - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xe93ac3d18073ce5f;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xe93ac3d18073ce5f) {
              if (plVar16[2] == -0x16c53c2e7f8c31a1) goto LAB_0267e800;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xe93ac3d18073ce5f) {
              if (plVar16[2] == -0x16c53c2e7f8c31a1) goto LAB_0267e800;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267e804;
  }
  goto LAB_0267e818;
LAB_0267e800:
  uVar20 = (undefined4)plVar16[6];
LAB_0267e804:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_0267e818;
LAB_0267e8bc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0267e030;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x21];
  uVar19 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0xf790ec10701628cf;
    }
    else if (uVar11 < 0xf790ec10701628d0) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0xf790ec10701628cf / uVar11;
      }
      uVar13 = 0xf790ec10701628cf - uVar13 * uVar11;
    }
    else {
      uVar13 = 0xf790ec10701628cf;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xf790ec10701628cf) {
            if (plVar16[2] == -0x86f13ef8fe9d731) goto LAB_0267ea00;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xf790ec10701628cf) {
            if (plVar16[2] == -0x86f13ef8fe9d731) goto LAB_0267ea00;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_0267ea04;
LAB_0267ea00:
  uVar19 = (undefined4)plVar16[6];
LAB_0267ea04:
  do {
    iVar10 = (int)*plVar1 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0267e02c:
  if (bVar9) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_0267e030;
LAB_0267d740:
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
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x6ff84dd0823c2dff;
      }
      else if (uVar11 < 0x6ff84dd0823c2e00) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6ff84dd0823c2dff / uVar11;
        }
        uVar13 = 0x6ff84dd0823c2dff - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x6ff84dd0823c2dff;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x6ff84dd0823c2dff) {
              if (plVar16[2] == 0x6ff84dd0823c2dff) goto LAB_0267da30;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x6ff84dd0823c2dff) {
              if (plVar16[2] == 0x6ff84dd0823c2dff) goto LAB_0267da30;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267da34;
  }
LAB_0267da48:
  bVar2 = *puVar6;
joined_r0x0267e0d8:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar20 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267dae4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267dae4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267dc40:
  bVar2 = *puVar6;
joined_r0x0267e128:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar19 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267dcdc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267dcdc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267de38:
  bVar2 = *puVar6;
joined_r0x0267e178:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  fVar22 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267ded4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267ded4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_0267e030;
LAB_0267da30:
  uVar17 = (undefined4)plVar16[6];
LAB_0267da34:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267da48;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267e0d8;
LAB_0267dae4:
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
    uVar11 = plVar15[0x21];
    uVar20 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x5089ebad1bda9862;
      }
      else if (uVar11 < 0x5089ebad1bda9863) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x5089ebad1bda9862 / uVar11;
        }
        uVar13 = 0x5089ebad1bda9862 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x5089ebad1bda9862;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x5089ebad1bda9862) {
              if (plVar16[2] == 0x5089ebad1bda9862) goto LAB_0267dc28;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x5089ebad1bda9862) {
              if (plVar16[2] == 0x5089ebad1bda9862) goto LAB_0267dc28;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267dc2c;
  }
  goto LAB_0267dc40;
LAB_0267dc28:
  uVar20 = (undefined4)plVar16[6];
LAB_0267dc2c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267dc40;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267e128;
LAB_0267dcdc:
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
    uVar11 = plVar15[0x21];
    uVar19 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xde9961ea2189c7c0;
      }
      else if (uVar11 < 0xde9961ea2189c7c1) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xde9961ea2189c7c0 / uVar11;
        }
        uVar13 = 0xde9961ea2189c7c0 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xde9961ea2189c7c0;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xde9961ea2189c7c0) {
              if (plVar16[2] == -0x21669e15de763840) goto LAB_0267de20;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xde9961ea2189c7c0) {
              if (plVar16[2] == -0x21669e15de763840) goto LAB_0267de20;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267de24;
  }
  goto LAB_0267de38;
LAB_0267de20:
  uVar19 = (undefined4)plVar16[6];
LAB_0267de24:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0267de38;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0267e178;
LAB_0267ded4:
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
    uVar11 = plVar15[0x21];
    fVar22 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x4ba65241ecd6700b;
      }
      else if (uVar11 < 0x4ba65241ecd6700c) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x4ba65241ecd6700b / uVar11;
        }
        uVar13 = 0x4ba65241ecd6700b - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x4ba65241ecd6700b;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x4ba65241ecd6700b) {
              if (plVar16[2] == 0x4ba65241ecd6700b) goto LAB_0267e018;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x4ba65241ecd6700b) {
              if (plVar16[2] == 0x4ba65241ecd6700b) goto LAB_0267e018;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0267e01c;
  }
  goto LAB_0267e030;
LAB_0267e018:
  fVar22 = *(float *)(plVar16 + 6);
LAB_0267e01c:
  do {
    iVar10 = (int)*plVar1 + -1;
    bVar9 = iVar10 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_0267e02c;
LAB_0267e3f4:
  fVar21 = *(float *)(plVar16 + 6);
LAB_0267e3f8:
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
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_0267e40c:
  fVar18 = (float)(**(code **)PTR_PTR_0437a4c8)(param_1);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e4c0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e4c0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267e61c:
  bVar2 = *puVar6;
joined_r0x0267ec70:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  uVar20 = 0;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e6bc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e6bc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267e818:
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  fVar22 = fVar22 + (fVar21 - fVar22) * fVar18;
  uVar19 = 0;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x6fc8d43756f5f9ed;
    }
    else {
      uVar13 = 0x6fc8d43756f5f9ed;
      if (uVar11 < 0x6fc8d43756f5f9ee) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6fc8d43756f5f9ed / uVar11;
        }
        uVar13 = 0x6fc8d43756f5f9ed - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e8bc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0267e8bc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0267e030:
  *(undefined4 *)(param_2 + 0x314) = uVar17;
  *(undefined4 *)(param_2 + 0x318) = uVar20;
  *(undefined4 *)(param_2 + 0x31c) = uVar19;
  *(float *)(param_2 + 800) = fVar22;
LAB_0267e040:
  if (*(int *)(param_2 + 0xc6c) == param_3) {
    uVar17 = *(undefined4 *)(param_2 + (long)*(int *)(param_2 + 0x310) * 4 + 0x314);
    *(undefined4 *)(param_2 + 0x214) = uVar17;
    if (*(float *)(param_2 + 0x20c) <= *(float *)(param_2 + 0x208)) {
      *(undefined4 *)(param_2 + 0x1f8) = uVar17;
      FUN_0261a5b8(param_2);
      return;
    }
  }
  else {
    *(int *)(param_2 + 0xc6c) = param_3;
    *(undefined4 *)(param_2 + 0x210) = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined4 *)(param_2 + 0x214) =
         *(undefined4 *)(param_2 + (long)*(int *)(param_2 + 0x310) * 4 + 0x314);
    *(undefined4 *)(param_2 + 0x208) = 0;
  }
  return;
}


