/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb9e30; name: FUN_01cb9e30
 */


void FUN_01cb9e30(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  
  *param_1 = 0x3f19999a3f4ccccd;
  param_1[1] = 0x3ecccccd3f000000;
  param_1[2] = 0x3dcccccd3e4ccccd;
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
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
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cb9f38;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cb9f38;
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
LAB_01cba094:
  *(undefined4 *)param_1 = uVar16;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
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
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba134;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba134;
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
LAB_01cba290:
  *(undefined4 *)((long)param_1 + 4) = uVar16;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
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
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba330;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba330;
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
LAB_01cba48c:
  *(undefined4 *)(param_1 + 1) = uVar16;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
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
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba52c;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba52c;
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
LAB_01cba688:
  *(undefined4 *)((long)param_1 + 0xc) = uVar16;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
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
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba728;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba728;
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
LAB_01cba884:
  *(undefined4 *)(param_1 + 2) = uVar16;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
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
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba924;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cba924;
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
LAB_01cbaa80:
  *(undefined4 *)((long)param_1 + 0x14) = uVar16;
  return;
LAB_01cb9f38:
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
        uVar9 = uVar10 - 1 & 0xaf44ff938453fa8;
      }
      else if (uVar10 < 0xaf44ff938453fa9) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xaf44ff938453fa8 / uVar10;
        }
        uVar9 = 0xaf44ff938453fa8 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xaf44ff938453fa8;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xaf44ff938453fa8) {
              if (plVar15[2] == 0xaf44ff938453fa8) goto LAB_01cba07c;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xaf44ff938453fa8) {
              if (plVar15[2] == 0xaf44ff938453fa8) goto LAB_01cba07c;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01cba080;
  }
  goto LAB_01cba094;
LAB_01cba07c:
  uVar16 = (undefined4)plVar15[6];
LAB_01cba080:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01cba094;
LAB_01cba134:
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
        uVar9 = uVar10 - 1 & 0x97f4b92f1b8cd634;
      }
      else if (uVar10 < 0x97f4b92f1b8cd635) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x97f4b92f1b8cd634 / uVar10;
        }
        uVar9 = 0x97f4b92f1b8cd634 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x97f4b92f1b8cd634;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x97f4b92f1b8cd634) {
              if (plVar15[2] == -0x680b46d0e47329cc) goto LAB_01cba278;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x97f4b92f1b8cd634) {
              if (plVar15[2] == -0x680b46d0e47329cc) goto LAB_01cba278;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01cba27c;
  }
  goto LAB_01cba290;
LAB_01cba278:
  uVar16 = (undefined4)plVar15[6];
LAB_01cba27c:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01cba290;
LAB_01cba330:
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
        uVar9 = uVar10 - 1 & 0xb5defc836a71f4f9;
      }
      else if (uVar10 < 0xb5defc836a71f4fa) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xb5defc836a71f4f9 / uVar10;
        }
        uVar9 = 0xb5defc836a71f4f9 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xb5defc836a71f4f9;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xb5defc836a71f4f9) {
              if (plVar15[2] == -0x4a21037c958e0b07) goto LAB_01cba474;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xb5defc836a71f4f9) {
              if (plVar15[2] == -0x4a21037c958e0b07) goto LAB_01cba474;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01cba478;
  }
  goto LAB_01cba48c;
LAB_01cba474:
  uVar16 = (undefined4)plVar15[6];
LAB_01cba478:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01cba48c;
LAB_01cba52c:
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
        uVar9 = uVar10 - 1 & 0x5bb4bd61ce5dd723;
      }
      else if (uVar10 < 0x5bb4bd61ce5dd724) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x5bb4bd61ce5dd723 / uVar10;
        }
        uVar9 = 0x5bb4bd61ce5dd723 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x5bb4bd61ce5dd723;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x5bb4bd61ce5dd723) {
              if (plVar15[2] == 0x5bb4bd61ce5dd723) goto LAB_01cba670;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x5bb4bd61ce5dd723) {
              if (plVar15[2] == 0x5bb4bd61ce5dd723) goto LAB_01cba670;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01cba674;
  }
  goto LAB_01cba688;
LAB_01cba670:
  uVar16 = (undefined4)plVar15[6];
LAB_01cba674:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01cba688;
LAB_01cba728:
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
        uVar9 = uVar10 - 1 & 0xd5abd11c66a82c8;
      }
      else if (uVar10 < 0xd5abd11c66a82c9) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xd5abd11c66a82c8 / uVar10;
        }
        uVar9 = 0xd5abd11c66a82c8 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xd5abd11c66a82c8;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xd5abd11c66a82c8) {
              if (plVar15[2] == 0xd5abd11c66a82c8) goto LAB_01cba86c;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xd5abd11c66a82c8) {
              if (plVar15[2] == 0xd5abd11c66a82c8) goto LAB_01cba86c;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01cba870;
  }
  goto LAB_01cba884;
LAB_01cba86c:
  uVar16 = (undefined4)plVar15[6];
LAB_01cba870:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01cba884;
LAB_01cba924:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) goto LAB_01cbaa80;
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
      uVar9 = uVar10 - 1 & 0x8562ed54f229f154;
    }
    else if (uVar10 < 0x8562ed54f229f155) {
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = 0x8562ed54f229f154 / uVar10;
      }
      uVar9 = 0x8562ed54f229f154 - uVar9 * uVar10;
    }
    else {
      uVar9 = 0x8562ed54f229f154;
    }
    plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar15[1] == 0x8562ed54f229f154) {
            if (plVar15[2] == -0x7a9d12ab0dd60eac) goto LAB_01cbaa68;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == 0x8562ed54f229f154) {
            if (plVar15[2] == -0x7a9d12ab0dd60eac) goto LAB_01cbaa68;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar12 * uVar10;
            }
            if (uVar11 != uVar9) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_01cbaa6c;
LAB_01cbaa68:
  uVar16 = (undefined4)plVar15[6];
LAB_01cbaa6c:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01cbaa80;
}


