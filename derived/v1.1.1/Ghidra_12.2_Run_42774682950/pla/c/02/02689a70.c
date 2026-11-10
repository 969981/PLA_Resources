/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02689a70; name: FUN_02689a70
 */


void FUN_02689a70(undefined8 param_1,long *param_2,undefined4 param_3)

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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  puVar6 = PTR_DAT_04379660;
  switch(param_3) {
  case 0:
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
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_02689eb8;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6fc8d43756f5f9ed) {
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_02689eb8;
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
    break;
  case 1:
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
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_02689b78;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6fc8d43756f5f9ed) {
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_02689b78;
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
    goto LAB_0268a1fc;
  case 2:
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
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_02689d18;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6fc8d43756f5f9ed) {
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_02689d18;
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
    goto LAB_0268a840;
  case 3:
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
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a0a0;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6fc8d43756f5f9ed) {
              if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a0a0;
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
    goto LAB_0268b7fc;
  default:
    goto switchD_02689ab0_default;
  }
  goto LAB_0268ae84;
LAB_0268a0a0:
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
        uVar13 = uVar11 - 1 & 0x765e2e14626f99e4;
      }
      else if (uVar11 < 0x765e2e14626f99e5) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x765e2e14626f99e4 / uVar11;
        }
        uVar13 = 0x765e2e14626f99e4 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x765e2e14626f99e4;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x765e2e14626f99e4) {
              if (plVar16[2] == 0x765e2e14626f99e4) goto LAB_0268b7e4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x765e2e14626f99e4) {
              if (plVar16[2] == 0x765e2e14626f99e4) goto LAB_0268b7e4;
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
    goto LAB_0268b7e8;
  }
LAB_0268b7fc:
  bVar2 = *puVar6;
  goto joined_r0x0268bdf4;
LAB_0268b7e4:
  uVar17 = (undefined4)plVar16[6];
LAB_0268b7e8:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268b7fc;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
joined_r0x0268bdf4:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar18 = 0;
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268b898;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268b898;
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
LAB_0268b9f4:
  bVar2 = *puVar6;
joined_r0x0268be44:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268ba90;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268ba90;
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
LAB_0268bbec:
  bVar2 = *puVar6;
joined_r0x0268be94:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268bc88;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268bc88;
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
  goto LAB_0268b46c;
LAB_0268b898:
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
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xdbb02bf53ec04f5d;
      }
      else if (uVar11 < 0xdbb02bf53ec04f5e) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xdbb02bf53ec04f5d / uVar11;
        }
        uVar13 = 0xdbb02bf53ec04f5d - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xdbb02bf53ec04f5d;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xdbb02bf53ec04f5d) {
              if (plVar16[2] == -0x244fd40ac13fb0a3) goto LAB_0268b9dc;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xdbb02bf53ec04f5d) {
              if (plVar16[2] == -0x244fd40ac13fb0a3) goto LAB_0268b9dc;
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
    goto LAB_0268b9e0;
  }
  goto LAB_0268b9f4;
LAB_0268b9dc:
  uVar18 = (undefined4)plVar16[6];
LAB_0268b9e0:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268b9f4;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268be44;
LAB_0268ba90:
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
        uVar13 = uVar11 - 1 & 0xd74b4702f990a689;
      }
      else if (uVar11 < 0xd74b4702f990a68a) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xd74b4702f990a689 / uVar11;
        }
        uVar13 = 0xd74b4702f990a689 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xd74b4702f990a689;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xd74b4702f990a689) {
              if (plVar16[2] == -0x28b4b8fd066f5977) goto LAB_0268bbd4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xd74b4702f990a689) {
              if (plVar16[2] == -0x28b4b8fd066f5977) goto LAB_0268bbd4;
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
    goto LAB_0268bbd8;
  }
  goto LAB_0268bbec;
LAB_0268bbd4:
  uVar19 = (undefined4)plVar16[6];
LAB_0268bbd8:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268bbec;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268be94;
LAB_0268bc88:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0268b46c;
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
      uVar13 = uVar11 - 1 & 0xe29ff055a8399430;
    }
    else if (uVar11 < 0xe29ff055a8399431) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0xe29ff055a8399430 / uVar11;
      }
      uVar13 = 0xe29ff055a8399430 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0xe29ff055a8399430;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xe29ff055a8399430) {
            if (plVar16[2] == -0x1d600faa57c66bd0) goto LAB_0268bdcc;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xe29ff055a8399430) {
            if (plVar16[2] == -0x1d600faa57c66bd0) goto LAB_0268bdcc;
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
  goto LAB_0268bdd0;
LAB_0268bdcc:
  uVar20 = (undefined4)plVar16[6];
LAB_0268bdd0:
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
  goto LAB_0268b468;
LAB_02689d18:
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
        uVar13 = uVar11 - 1 & 0xff20f1d463141105;
      }
      else if (uVar11 < 0xff20f1d463141106) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xff20f1d463141105 / uVar11;
        }
        uVar13 = 0xff20f1d463141105 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xff20f1d463141105;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xff20f1d463141105) {
              if (plVar16[2] == -0xdf0e2b9cebeefb) goto LAB_0268a828;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xff20f1d463141105) {
              if (plVar16[2] == -0xdf0e2b9cebeefb) goto LAB_0268a828;
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
    goto LAB_0268a82c;
  }
LAB_0268a840:
  bVar2 = *puVar6;
  goto joined_r0x0268b5ac;
LAB_0268a828:
  uVar17 = (undefined4)plVar16[6];
LAB_0268a82c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268a840;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
joined_r0x0268b5ac:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar18 = 0;
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a8dc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a8dc;
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
LAB_0268aa38:
  bVar2 = *puVar6;
joined_r0x0268b5fc:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268aad4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268aad4;
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
LAB_0268ac30:
  bVar2 = *puVar6;
joined_r0x0268b64c:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268accc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268accc;
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
  goto LAB_0268b46c;
LAB_0268a8dc:
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
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x5b595bb65c613270;
      }
      else if (uVar11 < 0x5b595bb65c613271) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x5b595bb65c613270 / uVar11;
        }
        uVar13 = 0x5b595bb65c613270 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x5b595bb65c613270;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x5b595bb65c613270) {
              if (plVar16[2] == 0x5b595bb65c613270) goto LAB_0268aa20;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x5b595bb65c613270) {
              if (plVar16[2] == 0x5b595bb65c613270) goto LAB_0268aa20;
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
    goto LAB_0268aa24;
  }
  goto LAB_0268aa38;
LAB_0268aa20:
  uVar18 = (undefined4)plVar16[6];
LAB_0268aa24:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268aa38;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b5fc;
LAB_0268aad4:
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
        uVar13 = uVar11 - 1 & 0x4e233c5414f6f08a;
      }
      else if (uVar11 < 0x4e233c5414f6f08b) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x4e233c5414f6f08a / uVar11;
        }
        uVar13 = 0x4e233c5414f6f08a - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x4e233c5414f6f08a;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x4e233c5414f6f08a) {
              if (plVar16[2] == 0x4e233c5414f6f08a) goto LAB_0268ac18;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x4e233c5414f6f08a) {
              if (plVar16[2] == 0x4e233c5414f6f08a) goto LAB_0268ac18;
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
    goto LAB_0268ac1c;
  }
  goto LAB_0268ac30;
LAB_0268ac18:
  uVar19 = (undefined4)plVar16[6];
LAB_0268ac1c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268ac30;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b64c;
LAB_0268accc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0268b46c;
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
      uVar13 = uVar11 - 1 & 0x7ee11e275e0a3075;
    }
    else if (uVar11 < 0x7ee11e275e0a3076) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0x7ee11e275e0a3075 / uVar11;
      }
      uVar13 = 0x7ee11e275e0a3075 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0x7ee11e275e0a3075;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x7ee11e275e0a3075) {
            if (plVar16[2] == 0x7ee11e275e0a3075) goto LAB_0268ae10;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x7ee11e275e0a3075) {
            if (plVar16[2] == 0x7ee11e275e0a3075) goto LAB_0268ae10;
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
  goto LAB_0268ae14;
LAB_0268ae10:
  uVar20 = (undefined4)plVar16[6];
LAB_0268ae14:
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
  goto LAB_0268b468;
LAB_02689b78:
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
        uVar13 = uVar11 - 1 & 0x34e34d49c27507c6;
      }
      else if (uVar11 < 0x34e34d49c27507c7) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x34e34d49c27507c6 / uVar11;
        }
        uVar13 = 0x34e34d49c27507c6 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x34e34d49c27507c6;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x34e34d49c27507c6) {
              if (plVar16[2] == 0x34e34d49c27507c6) goto LAB_0268a1e4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x34e34d49c27507c6) {
              if (plVar16[2] == 0x34e34d49c27507c6) goto LAB_0268a1e4;
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
    goto LAB_0268a1e8;
  }
LAB_0268a1fc:
  bVar2 = *puVar6;
  goto joined_r0x0268b4bc;
LAB_0268a1e4:
  uVar17 = (undefined4)plVar16[6];
LAB_0268a1e8:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268a1fc;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
joined_r0x0268b4bc:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar18 = 0;
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a298;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a298;
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
LAB_0268a3f4:
  bVar2 = *puVar6;
joined_r0x0268b50c:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a490;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a490;
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
LAB_0268a5ec:
  bVar2 = *puVar6;
joined_r0x0268b55c:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a688;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268a688;
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
  goto LAB_0268b46c;
LAB_0268a298:
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
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x19e09f26efbd8037;
      }
      else if (uVar11 < 0x19e09f26efbd8038) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x19e09f26efbd8037 / uVar11;
        }
        uVar13 = 0x19e09f26efbd8037 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x19e09f26efbd8037;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x19e09f26efbd8037) {
              if (plVar16[2] == 0x19e09f26efbd8037) goto LAB_0268a3dc;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x19e09f26efbd8037) {
              if (plVar16[2] == 0x19e09f26efbd8037) goto LAB_0268a3dc;
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
    goto LAB_0268a3e0;
  }
  goto LAB_0268a3f4;
LAB_0268a3dc:
  uVar18 = (undefined4)plVar16[6];
LAB_0268a3e0:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268a3f4;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b50c;
LAB_0268a490:
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
        uVar13 = uVar11 - 1 & 0xe57269ae57518e87;
      }
      else if (uVar11 < 0xe57269ae57518e88) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xe57269ae57518e87 / uVar11;
        }
        uVar13 = 0xe57269ae57518e87 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xe57269ae57518e87;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xe57269ae57518e87) {
              if (plVar16[2] == -0x1a8d9651a8ae7179) goto LAB_0268a5d4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xe57269ae57518e87) {
              if (plVar16[2] == -0x1a8d9651a8ae7179) goto LAB_0268a5d4;
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
    goto LAB_0268a5d8;
  }
  goto LAB_0268a5ec;
LAB_0268a5d4:
  uVar19 = (undefined4)plVar16[6];
LAB_0268a5d8:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268a5ec;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b55c;
LAB_0268a688:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0268b46c;
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
      uVar13 = uVar11 - 1 & 0xcbe5ffa9ecbb1336;
    }
    else if (uVar11 < 0xcbe5ffa9ecbb1337) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0xcbe5ffa9ecbb1336 / uVar11;
      }
      uVar13 = 0xcbe5ffa9ecbb1336 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0xcbe5ffa9ecbb1336;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xcbe5ffa9ecbb1336) {
            if (plVar16[2] == -0x341a00561344ecca) goto LAB_0268a7cc;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xcbe5ffa9ecbb1336) {
            if (plVar16[2] == -0x341a00561344ecca) goto LAB_0268a7cc;
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
  goto LAB_0268a7d0;
LAB_0268a7cc:
  uVar20 = (undefined4)plVar16[6];
LAB_0268a7d0:
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
LAB_0268b468:
  if (bVar9) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_0268b46c;
LAB_0268ae6c:
  uVar17 = (undefined4)plVar16[6];
LAB_0268ae70:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268ae84;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b69c;
LAB_0268af20:
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
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xfd39924abab8f032;
      }
      else if (uVar11 < 0xfd39924abab8f033) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xfd39924abab8f032 / uVar11;
        }
        uVar13 = 0xfd39924abab8f032 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xfd39924abab8f032;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xfd39924abab8f032) {
              if (plVar16[2] == -0x2c66db545470fce) goto LAB_0268b064;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xfd39924abab8f032) {
              if (plVar16[2] == -0x2c66db545470fce) goto LAB_0268b064;
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
    goto LAB_0268b068;
  }
  goto LAB_0268b07c;
LAB_0268b064:
  uVar18 = (undefined4)plVar16[6];
LAB_0268b068:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268b07c;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b6ec;
LAB_0268b118:
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
        uVar13 = uVar11 - 1 & 0x3b55ac7c71b52790;
      }
      else if (uVar11 < 0x3b55ac7c71b52791) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x3b55ac7c71b52790 / uVar11;
        }
        uVar13 = 0x3b55ac7c71b52790 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x3b55ac7c71b52790;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x3b55ac7c71b52790) {
              if (plVar16[2] == 0x3b55ac7c71b52790) goto LAB_0268b25c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x3b55ac7c71b52790) {
              if (plVar16[2] == 0x3b55ac7c71b52790) goto LAB_0268b25c;
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
    goto LAB_0268b260;
  }
  goto LAB_0268b274;
LAB_0268b25c:
  uVar19 = (undefined4)plVar16[6];
LAB_0268b260:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0268b274;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268b73c;
LAB_0268b310:
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
        uVar13 = uVar11 - 1 & 0x1f1139eb89e5ad9b;
      }
      else if (uVar11 < 0x1f1139eb89e5ad9c) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x1f1139eb89e5ad9b / uVar11;
        }
        uVar13 = 0x1f1139eb89e5ad9b - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x1f1139eb89e5ad9b;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x1f1139eb89e5ad9b) {
              if (plVar16[2] == 0x1f1139eb89e5ad9b) goto LAB_0268b454;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x1f1139eb89e5ad9b) {
              if (plVar16[2] == 0x1f1139eb89e5ad9b) goto LAB_0268b454;
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
    goto LAB_0268b458;
  }
  goto LAB_0268b46c;
LAB_0268b454:
  uVar20 = (undefined4)plVar16[6];
LAB_0268b458:
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
  goto LAB_0268b468;
LAB_02689eb8:
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
        uVar13 = uVar11 - 1 & 0x31d8346ebe1bd7cf;
      }
      else if (uVar11 < 0x31d8346ebe1bd7d0) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x31d8346ebe1bd7cf / uVar11;
        }
        uVar13 = 0x31d8346ebe1bd7cf - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x31d8346ebe1bd7cf;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x31d8346ebe1bd7cf) {
              if (plVar16[2] == 0x31d8346ebe1bd7cf) goto LAB_0268ae6c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x31d8346ebe1bd7cf) {
              if (plVar16[2] == 0x31d8346ebe1bd7cf) goto LAB_0268ae6c;
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
    goto LAB_0268ae70;
  }
LAB_0268ae84:
  bVar2 = *puVar6;
joined_r0x0268b69c:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar18 = 0;
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268af20;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268af20;
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
LAB_0268b07c:
  bVar2 = *puVar6;
joined_r0x0268b6ec:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268b118;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268b118;
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
LAB_0268b274:
  bVar2 = *puVar6;
joined_r0x0268b73c:
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
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268b310;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x6fc8d43756f5f9ed) {
            if (plVar15[2] == 0x6fc8d43756f5f9ed) goto LAB_0268b310;
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
LAB_0268b46c:
  lVar14 = *param_2;
  *(undefined4 *)(lVar14 + 0x6c) = uVar17;
  *(undefined4 *)(lVar14 + 0x70) = uVar18;
  *(undefined4 *)(lVar14 + 0x74) = uVar19;
  *(undefined4 *)(lVar14 + 0x78) = uVar20;
switchD_02689ab0_default:
  return;
}


