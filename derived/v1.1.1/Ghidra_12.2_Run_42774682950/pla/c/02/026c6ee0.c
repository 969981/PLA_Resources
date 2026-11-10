/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026c6ee0; name: FUN_026c6ee0
 */


void FUN_026c6ee0(long param_1)

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
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar12 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  if (uVar11 == 0) {
LAB_026c70b8:
    uVar15 = 0;
  }
  else {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar10 = 0x6a437d1436c47a27;
      if (uVar11 < 0x6a437d1436c47a28) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6a437d1436c47a27 / uVar11;
        }
        uVar10 = 0x6a437d1436c47a27 - uVar10 * uVar11;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar10 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_026c70b8;
    if (1 < uVar9) {
      do {
        uVar9 = plVar13[1];
        if (uVar9 == 0x6a437d1436c47a27) {
          if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c6fbc;
        }
        else {
          if (uVar11 <= uVar9) {
            uVar4 = 0;
            if (uVar11 != 0) {
              uVar4 = uVar9 / uVar11;
            }
            uVar9 = uVar9 - uVar4 * uVar11;
          }
          if (uVar9 != uVar10) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
      goto LAB_026c70b8;
    }
    do {
      if (plVar13[1] == 0x6a437d1436c47a27) {
        if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c6fbc;
      }
      else if ((plVar13[1] & uVar11 - 1) != uVar10) goto LAB_026c70b8;
      plVar13 = (long *)*plVar13;
      uVar15 = 0;
    } while (plVar13 != (long *)0x0);
  }
  goto LAB_026c7120;
LAB_026c6fbc:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto LAB_026c70b8;
  plVar1 = plVar13 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar11 = plVar13[0x14];
  if (uVar11 == 0) {
    uVar15 = 0;
  }
  else {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0xcb17c8aafe04bb21;
    }
    else if (uVar11 < 0xcb17c8aafe04bb22) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = 0xcb17c8aafe04bb21 / uVar11;
      }
      uVar10 = 0xcb17c8aafe04bb21 - uVar10 * uVar11;
    }
    else {
      uVar10 = 0xcb17c8aafe04bb21;
    }
    plVar14 = *(long **)(plVar13[0x13] + uVar10 * 8);
    if (plVar14 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        uVar15 = 0;
      }
      else if (uVar9 < 2) {
        do {
          if (plVar14[1] == 0xcb17c8aafe04bb21) {
            if (plVar14[2] == -0x34e8375501fb44df) goto LAB_026c7108;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar10) {
            uVar15 = 0;
            break;
          }
          plVar14 = (long *)*plVar14;
          uVar15 = 0;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == 0xcb17c8aafe04bb21) {
            if (plVar14[2] == -0x34e8375501fb44df) goto LAB_026c7108;
          }
          else {
            if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar10) {
              uVar15 = 0;
              goto LAB_026c710c;
            }
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
        uVar15 = 0;
      }
    }
  }
  goto LAB_026c710c;
LAB_026c7108:
  uVar15 = (undefined4)plVar14[6];
LAB_026c710c:
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
    (**(code **)(*plVar13 + 0x10))();
  }
LAB_026c7120:
  *(undefined4 *)(param_1 + 0x34) = uVar15;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  if (uVar11 == 0) {
LAB_026c72b8:
    uVar15 = 0;
  }
  else {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar10 = 0x6a437d1436c47a27;
      if (uVar11 < 0x6a437d1436c47a28) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6a437d1436c47a27 / uVar11;
        }
        uVar10 = 0x6a437d1436c47a27 - uVar10 * uVar11;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar10 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_026c72b8;
    if (1 < uVar9) {
      do {
        uVar9 = plVar13[1];
        if (uVar9 == 0x6a437d1436c47a27) {
          if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c71bc;
        }
        else {
          if (uVar11 <= uVar9) {
            uVar4 = 0;
            if (uVar11 != 0) {
              uVar4 = uVar9 / uVar11;
            }
            uVar9 = uVar9 - uVar4 * uVar11;
          }
          if (uVar9 != uVar10) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
      goto LAB_026c72b8;
    }
    do {
      if (plVar13[1] == 0x6a437d1436c47a27) {
        if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c71bc;
      }
      else if ((plVar13[1] & uVar11 - 1) != uVar10) goto LAB_026c72b8;
      plVar13 = (long *)*plVar13;
      uVar15 = 0;
    } while (plVar13 != (long *)0x0);
  }
LAB_026c7320:
  *(undefined4 *)(param_1 + 0x38) = uVar15;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar10 = 0x6a437d1436c47a27;
      if (uVar11 < 0x6a437d1436c47a28) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6a437d1436c47a27 / uVar11;
        }
        uVar10 = 0x6a437d1436c47a27 - uVar10 * uVar11;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar10 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar13[1] == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c73c0;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c73c0;
          }
          else {
            if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar10) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_026c751c;
LAB_026c71bc:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar13[0x14];
    if (uVar11 == 0) {
      uVar15 = 0;
    }
    else {
      uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar11 - 1 & 0x248a836b781516ad;
      }
      else if (uVar11 < 0x248a836b781516ae) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x248a836b781516ad / uVar11;
        }
        uVar10 = 0x248a836b781516ad - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x248a836b781516ad;
      }
      plVar14 = *(long **)(plVar13[0x13] + uVar10 * 8);
      if (plVar14 == (long *)0x0) {
        uVar15 = 0;
      }
      else {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          uVar15 = 0;
        }
        else if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0x248a836b781516ad) {
              if (plVar14[2] == 0x248a836b781516ad) goto LAB_026c7308;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) {
              uVar15 = 0;
              break;
            }
            plVar14 = (long *)*plVar14;
            uVar15 = 0;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0x248a836b781516ad) {
              if (plVar14[2] == 0x248a836b781516ad) goto LAB_026c7308;
            }
            else {
              if (uVar11 <= uVar9) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar9 / uVar11;
                }
                uVar9 = uVar9 - uVar4 * uVar11;
              }
              if (uVar9 != uVar10) {
                uVar15 = 0;
                goto LAB_026c730c;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          uVar15 = 0;
        }
      }
    }
    goto LAB_026c730c;
  }
  goto LAB_026c72b8;
LAB_026c7308:
  uVar15 = (undefined4)plVar14[6];
LAB_026c730c:
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
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_026c7320;
LAB_026c73c0:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar13[0x21];
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar11 - 1 & 0xaf93c100c9f7f891;
      }
      else if (uVar11 < 0xaf93c100c9f7f892) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xaf93c100c9f7f891 / uVar11;
        }
        uVar10 = 0xaf93c100c9f7f891 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xaf93c100c9f7f891;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0xaf93c100c9f7f891) {
              if (plVar14[2] == -0x506c3eff3608076f) goto LAB_026c7504;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0xaf93c100c9f7f891) {
              if (plVar14[2] == -0x506c3eff3608076f) goto LAB_026c7504;
            }
            else {
              if (uVar11 <= uVar9) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar9 / uVar11;
                }
                uVar9 = uVar9 - uVar4 * uVar11;
              }
              if (uVar9 != uVar10) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_026c7508;
  }
  goto LAB_026c751c;
LAB_026c75bc:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar13[0x21];
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar11 - 1 & 0xd0019b69581c5981;
      }
      else if (uVar11 < 0xd0019b69581c5982) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xd0019b69581c5981 / uVar11;
        }
        uVar10 = 0xd0019b69581c5981 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xd0019b69581c5981;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0xd0019b69581c5981) {
              if (plVar14[2] == -0x2ffe6496a7e3a67f) goto LAB_026c7700;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0xd0019b69581c5981) {
              if (plVar14[2] == -0x2ffe6496a7e3a67f) goto LAB_026c7700;
            }
            else {
              if (uVar11 <= uVar9) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar9 / uVar11;
                }
                uVar9 = uVar9 - uVar4 * uVar11;
              }
              if (uVar9 != uVar10) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_026c7704;
  }
  goto LAB_026c7718;
LAB_026c7700:
  uVar15 = (undefined4)plVar14[6];
LAB_026c7704:
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
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_026c7718;
LAB_026c77b8:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar13[0x21];
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar11 - 1 & 0x80e5b4341fca8276;
      }
      else if (uVar11 < 0x80e5b4341fca8277) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x80e5b4341fca8276 / uVar11;
        }
        uVar10 = 0x80e5b4341fca8276 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x80e5b4341fca8276;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0x80e5b4341fca8276) {
              if (plVar14[2] == -0x7f1a4bcbe0357d8a) goto LAB_026c78fc;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0x80e5b4341fca8276) {
              if (plVar14[2] == -0x7f1a4bcbe0357d8a) goto LAB_026c78fc;
            }
            else {
              if (uVar11 <= uVar9) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar9 / uVar11;
                }
                uVar9 = uVar9 - uVar4 * uVar11;
              }
              if (uVar9 != uVar10) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_026c7900;
  }
  goto LAB_026c7914;
LAB_026c78fc:
  uVar15 = (undefined4)plVar14[6];
LAB_026c7900:
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
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_026c7914;
LAB_026c79b4:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto LAB_026c7b10;
  plVar1 = plVar13 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar11 = plVar13[0x21];
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x12d45aebe65cb34c;
    }
    else if (uVar11 < 0x12d45aebe65cb34d) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = 0x12d45aebe65cb34c / uVar11;
      }
      uVar10 = 0x12d45aebe65cb34c - uVar10 * uVar11;
    }
    else {
      uVar10 = 0x12d45aebe65cb34c;
    }
    plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar14[1] == 0x12d45aebe65cb34c) {
            if (plVar14[2] == 0x12d45aebe65cb34c) goto LAB_026c7af8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == 0x12d45aebe65cb34c) {
            if (plVar14[2] == 0x12d45aebe65cb34c) goto LAB_026c7af8;
          }
          else {
            if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar10) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_026c7afc;
LAB_026c7af8:
  uVar15 = (undefined4)plVar14[6];
LAB_026c7afc:
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
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_026c7b10;
LAB_026c7504:
  uVar15 = (undefined4)plVar14[6];
LAB_026c7508:
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
    (**(code **)(*plVar13 + 0x10))();
  }
LAB_026c751c:
  *(undefined4 *)(param_1 + 0x3c) = uVar15;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar10 = 0x6a437d1436c47a27;
      if (uVar11 < 0x6a437d1436c47a28) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6a437d1436c47a27 / uVar11;
        }
        uVar10 = 0x6a437d1436c47a27 - uVar10 * uVar11;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar10 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar13[1] == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c75bc;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c75bc;
          }
          else {
            if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar10) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_026c7718:
  *(undefined4 *)(param_1 + 0x40) = uVar15;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar10 = 0x6a437d1436c47a27;
      if (uVar11 < 0x6a437d1436c47a28) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6a437d1436c47a27 / uVar11;
        }
        uVar10 = 0x6a437d1436c47a27 - uVar10 * uVar11;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar10 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar13[1] == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c77b8;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c77b8;
          }
          else {
            if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar10) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_026c7914:
  *(undefined4 *)(param_1 + 0x44) = uVar15;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar10 = 0x6a437d1436c47a27;
      if (uVar11 < 0x6a437d1436c47a28) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6a437d1436c47a27 / uVar11;
        }
        uVar10 = 0x6a437d1436c47a27 - uVar10 * uVar11;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar10 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar13[1] == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c79b4;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c79b4;
          }
          else {
            if (uVar11 <= uVar9) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar4 * uVar11;
            }
            if (uVar9 != uVar10) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_026c7b10:
  *(undefined4 *)(param_1 + 0x48) = uVar15;
  return;
}


