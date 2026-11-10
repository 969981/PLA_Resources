/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad2e18; name: FUN_01ad2e18
 */


uint FUN_01ad2e18(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  
  puVar5 = PTR_DAT_04379660;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar13 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar12 = 0x4e9fd5f8e749f8e3;
      if (uVar10 < 0x4e9fd5f8e749f8e4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x4e9fd5f8e749f8e3 / uVar10;
        }
        uVar12 = 0x4e9fd5f8e749f8e3 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad2f10;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad2f10;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01ad306c:
  local_90 = CONCAT44(local_90._4_4_,uVar16);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar12 = 0x4e9fd5f8e749f8e3;
      if (uVar10 < 0x4e9fd5f8e749f8e4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x4e9fd5f8e749f8e3 / uVar10;
        }
        uVar12 = 0x4e9fd5f8e749f8e3 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad310c;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad310c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01ad3268:
  local_90 = CONCAT44(uVar16,(undefined4)local_90);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar12 = 0x4e9fd5f8e749f8e3;
      if (uVar10 < 0x4e9fd5f8e749f8e4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x4e9fd5f8e749f8e3 / uVar10;
        }
        uVar12 = 0x4e9fd5f8e749f8e3 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad3308;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad3308;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01ad3464:
  local_88 = CONCAT44(local_88._4_4_,uVar16);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar12 = 0x4e9fd5f8e749f8e3;
      if (uVar10 < 0x4e9fd5f8e749f8e4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x4e9fd5f8e749f8e3 / uVar10;
        }
        uVar12 = 0x4e9fd5f8e749f8e3 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad3504;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad3504;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01ad3660:
  local_88 = CONCAT44(uVar16,(undefined4)local_88);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar12 = 0x4e9fd5f8e749f8e3;
      if (uVar10 < 0x4e9fd5f8e749f8e4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x4e9fd5f8e749f8e3 / uVar10;
        }
        uVar12 = 0x4e9fd5f8e749f8e3 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad3708;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x4e9fd5f8e749f8e3) {
            if (plVar14[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad3708;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01ad3864:
  local_68 = *(undefined8 *)(param_2 + 0x18);
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_60 = 1;
  local_80 = uVar16;
  uVar8 = FUN_01ad3bac(param_1,&local_90);
  return uVar8 & 1;
LAB_01ad2f10:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x5829d19e5699ca9;
      }
      else if (uVar10 < 0x5829d19e5699caa) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x5829d19e5699ca9 / uVar10;
        }
        uVar12 = 0x5829d19e5699ca9 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x5829d19e5699ca9;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x5829d19e5699ca9) {
              if (plVar15[2] == 0x5829d19e5699ca9) goto LAB_01ad3054;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x5829d19e5699ca9) {
              if (plVar15[2] == 0x5829d19e5699ca9) goto LAB_01ad3054;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad3058;
  }
  goto LAB_01ad306c;
LAB_01ad3054:
  uVar16 = (undefined4)plVar15[6];
LAB_01ad3058:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01ad306c;
LAB_01ad310c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0xc1da763d4c6f8629;
      }
      else if (uVar10 < 0xc1da763d4c6f862a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xc1da763d4c6f8629 / uVar10;
        }
        uVar12 = 0xc1da763d4c6f8629 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0xc1da763d4c6f8629;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xc1da763d4c6f8629) {
              if (plVar15[2] == -0x3e2589c2b39079d7) goto LAB_01ad3250;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xc1da763d4c6f8629) {
              if (plVar15[2] == -0x3e2589c2b39079d7) goto LAB_01ad3250;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad3254;
  }
  goto LAB_01ad3268;
LAB_01ad3250:
  uVar16 = (undefined4)plVar15[6];
LAB_01ad3254:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01ad3268;
LAB_01ad3308:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x55777f7e48b9a5da;
      }
      else if (uVar10 < 0x55777f7e48b9a5db) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x55777f7e48b9a5da / uVar10;
        }
        uVar12 = 0x55777f7e48b9a5da - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x55777f7e48b9a5da;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x55777f7e48b9a5da) {
              if (plVar15[2] == 0x55777f7e48b9a5da) goto LAB_01ad344c;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x55777f7e48b9a5da) {
              if (plVar15[2] == 0x55777f7e48b9a5da) goto LAB_01ad344c;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad3450;
  }
  goto LAB_01ad3464;
LAB_01ad344c:
  uVar16 = (undefined4)plVar15[6];
LAB_01ad3450:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01ad3464;
LAB_01ad3504:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x8ecc55eb0935d9b6;
      }
      else if (uVar10 < 0x8ecc55eb0935d9b7) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x8ecc55eb0935d9b6 / uVar10;
        }
        uVar12 = 0x8ecc55eb0935d9b6 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x8ecc55eb0935d9b6;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x8ecc55eb0935d9b6) {
              if (plVar15[2] == -0x7133aa14f6ca264a) goto LAB_01ad3648;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x8ecc55eb0935d9b6) {
              if (plVar15[2] == -0x7133aa14f6ca264a) goto LAB_01ad3648;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad364c;
  }
  goto LAB_01ad3660;
LAB_01ad3648:
  uVar16 = (undefined4)plVar15[6];
LAB_01ad364c:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01ad3660;
LAB_01ad3708:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) goto LAB_01ad3864;
  plVar1 = plVar14 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = plVar14[0x21];
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xb5941aaee6919e39;
    }
    else if (uVar10 < 0xb5941aaee6919e3a) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0xb5941aaee6919e39 / uVar10;
      }
      uVar12 = 0xb5941aaee6919e39 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0xb5941aaee6919e39;
    }
    plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar15[1] == 0xb5941aaee6919e39) {
            if (plVar15[2] == -0x4a6be551196e61c7) goto LAB_01ad384c;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == 0xb5941aaee6919e39) {
            if (plVar15[2] == -0x4a6be551196e61c7) goto LAB_01ad384c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_01ad3850;
LAB_01ad384c:
  uVar16 = (undefined4)plVar15[6];
LAB_01ad3850:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01ad3864;
}


