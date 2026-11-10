/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109f020; name: FUN_0109f020
 */


void FUN_0109f020(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  puVar15 = *(ulong **)(lVar14 + 0xd8);
  uVar16 = *puVar15;
  uVar17 = puVar15[1];
  do {
    uVar19 = uVar16 ^ uVar17;
    iVar12 = (int)uVar17;
    uVar17 = uVar19 >> 0x1b | uVar19 << 0x25;
    uVar13 = (int)uVar16 + iVar12 & 0x7f;
    uVar16 = uVar19 ^ (uVar16 >> 0x28 | uVar16 << 0x18) ^ uVar19 << 0x10;
  } while (99 < uVar13);
  *puVar15 = uVar16;
  puVar15[1] = uVar17;
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar16 = *(ulong *)(lVar14 + 0x60);
  if (uVar16 == 0) {
    return;
  }
  uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
  uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar17 < 2) {
    uVar19 = uVar16 - 1 & 0xb0d55380947492dd;
  }
  else {
    uVar19 = 0xb0d55380947492dd;
    if (uVar16 < 0xb0d55380947492de) {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = 0xb0d55380947492dd / uVar16;
      }
      uVar19 = 0xb0d55380947492dd - uVar19 * uVar16;
    }
  }
  plVar18 = *(long **)(*(long *)(lVar14 + 0x58) + uVar19 * 8);
  if (plVar18 == (long *)0x0) {
    return;
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return;
  }
  if (uVar17 < 2) {
    do {
      if (plVar18[1] == 0xb0d55380947492dd) {
        if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f150;
      }
      else if ((plVar18[1] & uVar16 - 1) != uVar19) {
        return;
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar17 = plVar18[1];
    if (uVar17 == 0xb0d55380947492dd) {
      if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f150;
    }
    else {
      if (uVar16 <= uVar17) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar17 / uVar16;
        }
        uVar17 = uVar17 - uVar5 * uVar16;
      }
      if (uVar17 != uVar19) {
        return;
      }
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_0109f298:
  iVar12 = (int)plVar20[6];
  goto LAB_0109f29c;
LAB_0109f350:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar18[0x14];
    if (uVar16 == 0) {
      iVar12 = 0;
    }
    else {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar19 = uVar16 - 1 & 0x30913a18fde437be;
      }
      else if (uVar16 < 0x30913a18fde437bf) {
        uVar19 = 0;
        if (uVar16 != 0) {
          uVar19 = 0x30913a18fde437be / uVar16;
        }
        uVar19 = 0x30913a18fde437be - uVar19 * uVar16;
      }
      else {
        uVar19 = 0x30913a18fde437be;
      }
      plVar20 = *(long **)(plVar18[0x13] + uVar19 * 8);
      if (plVar20 == (long *)0x0) {
        iVar12 = 0;
      }
      else {
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) {
          iVar12 = 0;
        }
        else if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0x30913a18fde437be) {
              if (plVar20[2] == 0x30913a18fde437be) goto LAB_0109f4a4;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar19) {
              iVar12 = 0;
              break;
            }
            plVar20 = (long *)*plVar20;
            iVar12 = 0;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0x30913a18fde437be) {
              if (plVar20[2] == 0x30913a18fde437be) goto LAB_0109f4a4;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar19) {
                iVar12 = 0;
                goto LAB_0109f4a8;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
          iVar12 = 0;
        }
      }
    }
    goto LAB_0109f4a8;
  }
  goto LAB_0109f44c;
LAB_0109f4a4:
  iVar12 = (int)plVar20[6];
LAB_0109f4a8:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_0109f4bc;
  (**(code **)(*plVar18 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0109f454;
LAB_0109f554:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar18[0x14];
    if (uVar16 == 0) {
      iVar10 = 0;
    }
    else {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar19 = uVar16 - 1 & 0x30913918fde4360b;
      }
      else if (uVar16 < 0x30913918fde4360c) {
        uVar19 = 0;
        if (uVar16 != 0) {
          uVar19 = 0x30913918fde4360b / uVar16;
        }
        uVar19 = 0x30913918fde4360b - uVar19 * uVar16;
      }
      else {
        uVar19 = 0x30913918fde4360b;
      }
      plVar20 = *(long **)(plVar18[0x13] + uVar19 * 8);
      if (plVar20 == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) {
          iVar10 = 0;
        }
        else if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0x30913918fde4360b) {
              if (plVar20[2] == 0x30913918fde4360b) goto LAB_0109f6a8;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar19) {
              iVar10 = 0;
              break;
            }
            plVar20 = (long *)*plVar20;
            iVar10 = 0;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0x30913918fde4360b) {
              if (plVar20[2] == 0x30913918fde4360b) goto LAB_0109f6a8;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar19) {
                iVar10 = 0;
                goto LAB_0109f6ac;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
          iVar10 = 0;
        }
      }
    }
    goto LAB_0109f6ac;
  }
  goto LAB_0109f650;
LAB_0109f6a8:
  iVar10 = (int)plVar20[6];
LAB_0109f6ac:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 != 0) goto LAB_0109f6c0;
  (**(code **)(*plVar18 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0109f658;
LAB_0109f758:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar18[0x14];
    if (uVar16 == 0) {
      iVar11 = 0;
    }
    else {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar19 = uVar16 - 1 & 0x30913818fde43458;
      }
      else if (uVar16 < 0x30913818fde43459) {
        uVar19 = 0;
        if (uVar16 != 0) {
          uVar19 = 0x30913818fde43458 / uVar16;
        }
        uVar19 = 0x30913818fde43458 - uVar19 * uVar16;
      }
      else {
        uVar19 = 0x30913818fde43458;
      }
      plVar20 = *(long **)(plVar18[0x13] + uVar19 * 8);
      if (plVar20 == (long *)0x0) {
        iVar11 = 0;
      }
      else {
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) {
          iVar11 = 0;
        }
        else if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0x30913818fde43458) {
              if (plVar20[2] == 0x30913818fde43458) goto LAB_0109f8a4;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar19) {
              iVar11 = 0;
              break;
            }
            plVar20 = (long *)*plVar20;
            iVar11 = 0;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0x30913818fde43458) {
              if (plVar20[2] == 0x30913818fde43458) goto LAB_0109f8a4;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar19) {
                iVar11 = 0;
                goto LAB_0109f8a8;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
          iVar11 = 0;
        }
      }
    }
    goto LAB_0109f8a8;
  }
  goto LAB_0109f854;
LAB_0109f8a4:
  iVar11 = (int)plVar20[6];
LAB_0109f8a8:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_0109f8bc;
LAB_0109f150:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) {
    return;
  }
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar16 = plVar18[0x14];
  if (uVar16 == 0) {
    iVar12 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & 0xcb51b7617ffd721c;
    }
    else if (uVar16 < 0xcb51b7617ffd721d) {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = 0xcb51b7617ffd721c / uVar16;
      }
      uVar19 = 0xcb51b7617ffd721c - uVar19 * uVar16;
    }
    else {
      uVar19 = 0xcb51b7617ffd721c;
    }
    plVar20 = *(long **)(plVar18[0x13] + uVar19 * 8);
    if (plVar20 == (long *)0x0) {
      iVar12 = 0;
    }
    else {
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        iVar12 = 0;
      }
      else if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xcb51b7617ffd721c) {
            if (plVar20[2] == -0x34ae489e80028de4) goto LAB_0109f298;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar19) {
            iVar12 = 0;
            break;
          }
          plVar20 = (long *)*plVar20;
          iVar12 = 0;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xcb51b7617ffd721c) {
            if (plVar20[2] == -0x34ae489e80028de4) goto LAB_0109f298;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar19) {
              iVar12 = 0;
              goto LAB_0109f29c;
            }
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        iVar12 = 0;
      }
    }
  }
LAB_0109f29c:
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
    (**(code **)(*plVar18 + 0x10))();
  }
  if (iVar12 <= (int)uVar13) {
    return;
  }
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar16 = *(ulong *)(lVar14 + 0x60);
  if (uVar16 == 0) {
LAB_0109f44c:
    iVar12 = 0;
    bVar2 = *puVar6;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & 0xb0d55380947492dd;
    }
    else {
      uVar19 = 0xb0d55380947492dd;
      if (uVar16 < 0xb0d55380947492de) {
        uVar19 = 0;
        if (uVar16 != 0) {
          uVar19 = 0xb0d55380947492dd / uVar16;
        }
        uVar19 = 0xb0d55380947492dd - uVar19 * uVar16;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar14 + 0x58) + uVar19 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_0109f44c;
    if (1 < uVar17) {
      do {
        uVar17 = plVar18[1];
        if (uVar17 == 0xb0d55380947492dd) {
          if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f350;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar19) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_0109f44c;
    }
    do {
      if (plVar18[1] == 0xb0d55380947492dd) {
        if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f350;
      }
      else if ((plVar18[1] & uVar16 - 1) != uVar19) goto LAB_0109f44c;
      plVar18 = (long *)*plVar18;
      iVar12 = 0;
    } while (plVar18 != (long *)0x0);
LAB_0109f4bc:
    bVar2 = *puVar6;
  }
joined_r0x0109f454:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar16 = *(ulong *)(lVar14 + 0x60);
  if (uVar16 == 0) {
LAB_0109f650:
    iVar10 = 0;
    bVar2 = *puVar6;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & 0xb0d55380947492dd;
    }
    else {
      uVar19 = 0xb0d55380947492dd;
      if (uVar16 < 0xb0d55380947492de) {
        uVar19 = 0;
        if (uVar16 != 0) {
          uVar19 = 0xb0d55380947492dd / uVar16;
        }
        uVar19 = 0xb0d55380947492dd - uVar19 * uVar16;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar14 + 0x58) + uVar19 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_0109f650;
    if (1 < uVar17) {
      do {
        uVar17 = plVar18[1];
        if (uVar17 == 0xb0d55380947492dd) {
          if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f554;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar19) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_0109f650;
    }
    do {
      if (plVar18[1] == 0xb0d55380947492dd) {
        if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f554;
      }
      else if ((plVar18[1] & uVar16 - 1) != uVar19) goto LAB_0109f650;
      plVar18 = (long *)*plVar18;
      iVar10 = 0;
    } while (plVar18 != (long *)0x0);
LAB_0109f6c0:
    bVar2 = *puVar6;
  }
joined_r0x0109f658:
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar16 = *(ulong *)(lVar14 + 0x60);
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & 0xb0d55380947492dd;
    }
    else {
      uVar19 = 0xb0d55380947492dd;
      if (uVar16 < 0xb0d55380947492de) {
        uVar19 = 0;
        if (uVar16 != 0) {
          uVar19 = 0xb0d55380947492dd / uVar16;
        }
        uVar19 = 0xb0d55380947492dd - uVar19 * uVar16;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar14 + 0x58) + uVar19 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar18[1] == 0xb0d55380947492dd) {
            if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f758;
          }
          else if ((plVar18[1] & uVar16 - 1) != uVar19) goto LAB_0109f854;
          plVar18 = (long *)*plVar18;
          iVar11 = 0;
        } while (plVar18 != (long *)0x0);
        goto LAB_0109f8bc;
      }
      do {
        uVar17 = plVar18[1];
        if (uVar17 == 0xb0d55380947492dd) {
          if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109f758;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar19) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_0109f854:
  iVar11 = 0;
LAB_0109f8bc:
  uVar16 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  if (((uVar16 & 1) != 0) ||
     ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4) >> 2 & 1) != 0)) {
    return;
  }
  iVar9 = FUN_02c6917c();
  if (0x9f < iVar9) {
    iVar10 = iVar11;
  }
  if (99 < iVar9) {
    iVar12 = iVar10;
  }
  uVar13 = iVar12 + iVar9;
  if (0xfe < (int)uVar13) {
    uVar13 = 0xff;
  }
  if ((int)uVar13 < 1) {
    uVar13 = 0;
  }
  if (0xfe < uVar13) {
    uVar13 = 0xff;
  }
  FUN_02c7a8c4(*(undefined8 *)(param_1 + 0x98),uVar13);
  FUN_02c5bb1c(param_1,1);
  return;
}


