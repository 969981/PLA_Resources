/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026ce77c; name: FUN_026ce77c
 */


void FUN_026ce77c(long param_1)

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
LAB_026ce954:
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
    goto LAB_026ce954;
    if (1 < uVar9) {
      do {
        uVar9 = plVar13[1];
        if (uVar9 == 0x6a437d1436c47a27) {
          if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026ce858;
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
      goto LAB_026ce954;
    }
    do {
      if (plVar13[1] == 0x6a437d1436c47a27) {
        if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026ce858;
      }
      else if ((plVar13[1] & uVar11 - 1) != uVar10) goto LAB_026ce954;
      plVar13 = (long *)*plVar13;
      uVar15 = 0;
    } while (plVar13 != (long *)0x0);
  }
  goto LAB_026ce9bc;
LAB_026ce858:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto LAB_026ce954;
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
            if (plVar14[2] == -0x34e8375501fb44df) goto LAB_026ce9a4;
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
            if (plVar14[2] == -0x34e8375501fb44df) goto LAB_026ce9a4;
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
              goto LAB_026ce9a8;
            }
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
        uVar15 = 0;
      }
    }
  }
  goto LAB_026ce9a8;
LAB_026ce9a4:
  uVar15 = (undefined4)plVar14[6];
LAB_026ce9a8:
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
LAB_026ce9bc:
  *(undefined4 *)(param_1 + 0x34) = uVar15;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar11 = *(ulong *)(lVar12 + 0x60);
  if (uVar11 == 0) {
LAB_026ceb54:
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
    goto LAB_026ceb54;
    if (1 < uVar9) {
      do {
        uVar9 = plVar13[1];
        if (uVar9 == 0x6a437d1436c47a27) {
          if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cea58;
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
      goto LAB_026ceb54;
    }
    do {
      if (plVar13[1] == 0x6a437d1436c47a27) {
        if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cea58;
      }
      else if ((plVar13[1] & uVar11 - 1) != uVar10) goto LAB_026ceb54;
      plVar13 = (long *)*plVar13;
      uVar15 = 0;
    } while (plVar13 != (long *)0x0);
  }
LAB_026cebbc:
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
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cec5c;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cec5c;
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
  goto LAB_026cedb8;
LAB_026cea58:
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
              if (plVar14[2] == 0x248a836b781516ad) goto LAB_026ceba4;
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
              if (plVar14[2] == 0x248a836b781516ad) goto LAB_026ceba4;
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
                goto LAB_026ceba8;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          uVar15 = 0;
        }
      }
    }
    goto LAB_026ceba8;
  }
  goto LAB_026ceb54;
LAB_026ceba4:
  uVar15 = (undefined4)plVar14[6];
LAB_026ceba8:
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
  goto LAB_026cebbc;
LAB_026cec5c:
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
        uVar10 = uVar11 - 1 & 0x53acdb15c670eb52;
      }
      else if (uVar11 < 0x53acdb15c670eb53) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x53acdb15c670eb52 / uVar11;
        }
        uVar10 = 0x53acdb15c670eb52 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x53acdb15c670eb52;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0x53acdb15c670eb52) {
              if (plVar14[2] == 0x53acdb15c670eb52) goto LAB_026ceda0;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0x53acdb15c670eb52) {
              if (plVar14[2] == 0x53acdb15c670eb52) goto LAB_026ceda0;
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
    goto LAB_026ceda4;
  }
  goto LAB_026cedb8;
LAB_026cee58:
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
        uVar10 = uVar11 - 1 & 0xd10d70333ff949e8;
      }
      else if (uVar11 < 0xd10d70333ff949e9) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xd10d70333ff949e8 / uVar11;
        }
        uVar10 = 0xd10d70333ff949e8 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xd10d70333ff949e8;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0xd10d70333ff949e8) {
              if (plVar14[2] == -0x2ef28fccc006b618) goto LAB_026cef9c;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0xd10d70333ff949e8) {
              if (plVar14[2] == -0x2ef28fccc006b618) goto LAB_026cef9c;
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
    goto LAB_026cefa0;
  }
  goto LAB_026cefb4;
LAB_026cef9c:
  uVar15 = (undefined4)plVar14[6];
LAB_026cefa0:
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
  goto LAB_026cefb4;
LAB_026cf054:
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
        uVar10 = uVar11 - 1 & 0xf9f4847b3518c3d5;
      }
      else if (uVar11 < 0xf9f4847b3518c3d6) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xf9f4847b3518c3d5 / uVar11;
        }
        uVar10 = 0xf9f4847b3518c3d5 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xf9f4847b3518c3d5;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar14[1] == 0xf9f4847b3518c3d5) {
              if (plVar14[2] == -0x60b7b84cae73c2b) goto LAB_026cf198;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar14[1];
            if (uVar9 == 0xf9f4847b3518c3d5) {
              if (plVar14[2] == -0x60b7b84cae73c2b) goto LAB_026cf198;
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
    goto LAB_026cf19c;
  }
  goto LAB_026cf1b0;
LAB_026cf198:
  uVar15 = (undefined4)plVar14[6];
LAB_026cf19c:
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
  goto LAB_026cf1b0;
LAB_026cf250:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto LAB_026cf3ac;
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
      uVar10 = uVar11 - 1 & 0x73d0bdaa4c2ff0dd;
    }
    else if (uVar11 < 0x73d0bdaa4c2ff0de) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = 0x73d0bdaa4c2ff0dd / uVar11;
      }
      uVar10 = 0x73d0bdaa4c2ff0dd - uVar10 * uVar11;
    }
    else {
      uVar10 = 0x73d0bdaa4c2ff0dd;
    }
    plVar14 = *(long **)(plVar13[0x20] + uVar10 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar14[1] == 0x73d0bdaa4c2ff0dd) {
            if (plVar14[2] == 0x73d0bdaa4c2ff0dd) goto LAB_026cf394;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar10) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == 0x73d0bdaa4c2ff0dd) {
            if (plVar14[2] == 0x73d0bdaa4c2ff0dd) goto LAB_026cf394;
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
  goto LAB_026cf398;
LAB_026cf394:
  uVar15 = (undefined4)plVar14[6];
LAB_026cf398:
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
  goto LAB_026cf3ac;
LAB_026ceda0:
  uVar15 = (undefined4)plVar14[6];
LAB_026ceda4:
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
LAB_026cedb8:
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
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cee58;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cee58;
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
LAB_026cefb4:
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
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cf054;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cf054;
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
LAB_026cf1b0:
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
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cf250;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar10) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == 0x6a437d1436c47a27) {
            if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026cf250;
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
LAB_026cf3ac:
  *(undefined4 *)(param_1 + 0x48) = uVar15;
  return;
}


