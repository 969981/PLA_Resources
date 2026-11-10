/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb7cd0; name: FUN_01cb7cd0
 */


void FUN_01cb7cd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,ulong *param_4)

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
  
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  puVar5 = PTR_DAT_04379660;
  if (param_1 != (undefined4 *)0x0) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb7db4;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb7db4;
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
    goto LAB_01cb7f10;
  }
  goto LAB_01cb8708;
LAB_01cb7db4:
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
        uVar9 = uVar10 - 1 & 0xf8d660225710f061;
      }
      else if (uVar10 < 0xf8d660225710f062) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xf8d660225710f061 / uVar10;
        }
        uVar9 = 0xf8d660225710f061 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xf8d660225710f061;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xf8d660225710f061) {
              if (plVar15[2] == -0x7299fdda8ef0f9f) goto LAB_01cb7ef8;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xf8d660225710f061) {
              if (plVar15[2] == -0x7299fdda8ef0f9f) goto LAB_01cb7ef8;
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
    goto LAB_01cb7efc;
  }
  goto LAB_01cb7f10;
LAB_01cb7ef8:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb7efc:
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
LAB_01cb7f10:
  *param_1 = uVar16;
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
    uVar9 = *param_4;
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
            if (plVar14[2] == uVar9) goto LAB_01cb7fb0;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cb7fb0;
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
  goto LAB_01cb810c;
LAB_01cb7fb0:
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
        uVar9 = uVar10 - 1 & 0xde647b9ec33470a9;
      }
      else if (uVar10 < 0xde647b9ec33470aa) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xde647b9ec33470a9 / uVar10;
        }
        uVar9 = 0xde647b9ec33470a9 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xde647b9ec33470a9;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xde647b9ec33470a9) {
              if (plVar15[2] == -0x219b84613ccb8f57) goto LAB_01cb80f4;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xde647b9ec33470a9) {
              if (plVar15[2] == -0x219b84613ccb8f57) goto LAB_01cb80f4;
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
    goto LAB_01cb80f8;
  }
  goto LAB_01cb810c;
LAB_01cb81ac:
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
        uVar9 = uVar10 - 1 & 0xc6307b64698eee12;
      }
      else if (uVar10 < 0xc6307b64698eee13) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xc6307b64698eee12 / uVar10;
        }
        uVar9 = 0xc6307b64698eee12 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xc6307b64698eee12;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xc6307b64698eee12) {
              if (plVar15[2] == -0x39cf849b967111ee) goto LAB_01cb82f0;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xc6307b64698eee12) {
              if (plVar15[2] == -0x39cf849b967111ee) goto LAB_01cb82f0;
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
    goto LAB_01cb82f4;
  }
  goto LAB_01cb8308;
LAB_01cb82f0:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb82f4:
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
  goto LAB_01cb8308;
LAB_01cb83a8:
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
        uVar9 = uVar10 - 1 & 0x87f406e607a58318;
      }
      else if (uVar10 < 0x87f406e607a58319) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x87f406e607a58318 / uVar10;
        }
        uVar9 = 0x87f406e607a58318 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x87f406e607a58318;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x87f406e607a58318) {
              if (plVar15[2] == -0x780bf919f85a7ce8) goto LAB_01cb84ec;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x87f406e607a58318) {
              if (plVar15[2] == -0x780bf919f85a7ce8) goto LAB_01cb84ec;
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
    goto LAB_01cb84f0;
  }
  goto LAB_01cb8504;
LAB_01cb84ec:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb84f0:
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
  goto LAB_01cb8504;
LAB_01cb85a0:
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
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar16 = 0;
    }
    else {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x6f7f65a0939599c1;
      }
      else if (uVar10 < 0x6f7f65a0939599c2) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x6f7f65a0939599c1 / uVar10;
        }
        uVar9 = 0x6f7f65a0939599c1 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x6f7f65a0939599c1;
      }
      plVar15 = *(long **)(plVar14[0x13] + uVar9 * 8);
      if (plVar15 == (long *)0x0) {
        uVar16 = 0;
      }
      else {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          uVar16 = 0;
        }
        else if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x6f7f65a0939599c1) {
              if (plVar15[2] == 0x6f7f65a0939599c1) goto LAB_01cb86ec;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) {
              uVar16 = 0;
              break;
            }
            plVar15 = (long *)*plVar15;
            uVar16 = 0;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x6f7f65a0939599c1) {
              if (plVar15[2] == 0x6f7f65a0939599c1) goto LAB_01cb86ec;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) {
                uVar16 = 0;
                goto LAB_01cb86f0;
              }
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
          uVar16 = 0;
        }
      }
    }
    goto LAB_01cb86f0;
  }
  goto LAB_01cb869c;
LAB_01cb86ec:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb86f0:
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
  goto LAB_01cb8704;
LAB_01cb87a8:
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
        uVar9 = uVar10 - 1 & 0xdd4b533e6813fcfe;
      }
      else if (uVar10 < 0xdd4b533e6813fcff) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xdd4b533e6813fcfe / uVar10;
        }
        uVar9 = 0xdd4b533e6813fcfe - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xdd4b533e6813fcfe;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xdd4b533e6813fcfe) {
              if (plVar15[2] == -0x22b4acc197ec0302) goto LAB_01cb88ec;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xdd4b533e6813fcfe) {
              if (plVar15[2] == -0x22b4acc197ec0302) goto LAB_01cb88ec;
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
    goto LAB_01cb88f0;
  }
  goto LAB_01cb8904;
LAB_01cb88ec:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb88f0:
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
  goto LAB_01cb8904;
LAB_01cb89a4:
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
        uVar9 = uVar10 - 1 & 0xb31a6bbae13216a3;
      }
      else if (uVar10 < 0xb31a6bbae13216a4) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xb31a6bbae13216a3 / uVar10;
        }
        uVar9 = 0xb31a6bbae13216a3 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xb31a6bbae13216a3;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xb31a6bbae13216a3) {
              if (plVar15[2] == -0x4ce594451ecde95d) goto LAB_01cb8ae8;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xb31a6bbae13216a3) {
              if (plVar15[2] == -0x4ce594451ecde95d) goto LAB_01cb8ae8;
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
    goto LAB_01cb8aec;
  }
  goto LAB_01cb8b00;
LAB_01cb8ae8:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb8aec:
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
  goto LAB_01cb8b00;
LAB_01cb8ba0:
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
        uVar9 = uVar10 - 1 & 0xbbeb0e3a87ccf731;
      }
      else if (uVar10 < 0xbbeb0e3a87ccf732) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xbbeb0e3a87ccf731 / uVar10;
        }
        uVar9 = 0xbbeb0e3a87ccf731 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xbbeb0e3a87ccf731;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xbbeb0e3a87ccf731) {
              if (plVar15[2] == -0x4414f1c5783308cf) goto LAB_01cb8ce4;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xbbeb0e3a87ccf731) {
              if (plVar15[2] == -0x4414f1c5783308cf) goto LAB_01cb8ce4;
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
    goto LAB_01cb8ce8;
  }
  goto LAB_01cb8cfc;
LAB_01cb8ce4:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb8ce8:
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
  goto LAB_01cb8cfc;
LAB_01cb8da0:
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
        uVar9 = uVar10 - 1 & 0x97fd253e579823f4;
      }
      else if (uVar10 < 0x97fd253e579823f5) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x97fd253e579823f4 / uVar10;
        }
        uVar9 = 0x97fd253e579823f4 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x97fd253e579823f4;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x97fd253e579823f4) {
              if (plVar15[2] == -0x6802dac1a867dc0c) goto LAB_01cb8ee4;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x97fd253e579823f4) {
              if (plVar15[2] == -0x6802dac1a867dc0c) goto LAB_01cb8ee4;
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
    goto LAB_01cb8ee8;
  }
  goto LAB_01cb8efc;
LAB_01cb8ee4:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb8ee8:
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
  goto LAB_01cb8efc;
LAB_01cb8f9c:
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
        uVar9 = uVar10 - 1 & 0x3afc9d97f5d8f792;
      }
      else if (uVar10 < 0x3afc9d97f5d8f793) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x3afc9d97f5d8f792 / uVar10;
        }
        uVar9 = 0x3afc9d97f5d8f792 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x3afc9d97f5d8f792;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x3afc9d97f5d8f792) {
              if (plVar15[2] == 0x3afc9d97f5d8f792) goto LAB_01cb90e0;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x3afc9d97f5d8f792) {
              if (plVar15[2] == 0x3afc9d97f5d8f792) goto LAB_01cb90e0;
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
    goto LAB_01cb90e4;
  }
  goto LAB_01cb90f8;
LAB_01cb90e0:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb90e4:
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
  goto LAB_01cb90f8;
LAB_01cb9198:
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
        uVar9 = uVar10 - 1 & 0x3cb0d8a1d4e26608;
      }
      else if (uVar10 < 0x3cb0d8a1d4e26609) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x3cb0d8a1d4e26608 / uVar10;
        }
        uVar9 = 0x3cb0d8a1d4e26608 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x3cb0d8a1d4e26608;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar9 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x3cb0d8a1d4e26608) {
              if (plVar15[2] == 0x3cb0d8a1d4e26608) goto LAB_01cb92dc;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar9) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x3cb0d8a1d4e26608) {
              if (plVar15[2] == 0x3cb0d8a1d4e26608) goto LAB_01cb92dc;
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
    goto LAB_01cb92e0;
  }
  goto LAB_01cb92f4;
LAB_01cb92dc:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb92e0:
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
  goto LAB_01cb92f4;
LAB_01cb80f4:
  uVar16 = (undefined4)plVar15[6];
LAB_01cb80f8:
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
LAB_01cb810c:
  param_1[1] = uVar16;
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
    uVar9 = *param_4;
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
            if (plVar14[2] == uVar9) goto LAB_01cb81ac;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cb81ac;
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
LAB_01cb8308:
  param_1[3] = uVar16;
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
    uVar9 = *param_4;
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
            if (plVar14[2] == uVar9) goto LAB_01cb83a8;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01cb83a8;
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
LAB_01cb8504:
  param_1[2] = uVar16;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  if (uVar10 == 0) {
LAB_01cb869c:
    uVar16 = 0;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_4;
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
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_01cb869c;
    if (1 < uVar11) {
      do {
        uVar11 = plVar14[1];
        if (uVar11 == uVar9) {
          if (plVar14[2] == uVar9) goto LAB_01cb85a0;
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
      goto LAB_01cb869c;
    }
    do {
      if (plVar14[1] == uVar9) {
        if (plVar14[2] == uVar9) goto LAB_01cb85a0;
      }
      else if ((plVar14[1] & uVar10 - 1) != uVar12) goto LAB_01cb869c;
      plVar14 = (long *)*plVar14;
      uVar16 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_01cb8704:
  param_1[4] = uVar16;
LAB_01cb8708:
  if (param_2 != (undefined4 *)0x0) {
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb87a8;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb87a8;
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
LAB_01cb8904:
    *param_2 = uVar16;
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb89a4;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb89a4;
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
LAB_01cb8b00:
    param_2[1] = uVar16;
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb8ba0;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb8ba0;
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
LAB_01cb8cfc:
    param_2[2] = uVar16;
  }
  if (param_3 != (undefined4 *)0x0) {
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb8da0;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb8da0;
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
LAB_01cb8efc:
    *param_3 = uVar16;
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb8f9c;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb8f9c;
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
LAB_01cb90f8:
    param_3[1] = uVar16;
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
      uVar9 = *param_4;
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
              if (plVar14[2] == uVar9) goto LAB_01cb9198;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == uVar9) {
              if (plVar14[2] == uVar9) goto LAB_01cb9198;
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
LAB_01cb92f4:
    param_3[2] = uVar16;
  }
  return;
}


