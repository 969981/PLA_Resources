/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109ddb8; name: FUN_0109ddb8
 */


void FUN_0109ddb8(long param_1)

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
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar16 = *(ulong *)(lVar17 + 0x60);
  if (uVar16 != 0) {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0xb0d55380947492dd;
    }
    else {
      uVar15 = 0xb0d55380947492dd;
      if (uVar16 < 0xb0d55380947492de) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0xb0d55380947492dd / uVar16;
        }
        uVar15 = 0xb0d55380947492dd - uVar15 * uVar16;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar15 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_0109df90;
    if (1 < uVar14) {
      do {
        uVar14 = plVar18[1];
        if (uVar14 == 0xb0d55380947492dd) {
          if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109de94;
        }
        else {
          if (uVar16 <= uVar14) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar14 / uVar16;
            }
            uVar14 = uVar14 - uVar5 * uVar16;
          }
          if (uVar14 != uVar15) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_0109df90;
    }
    do {
      if (plVar18[1] == 0xb0d55380947492dd) {
        if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109de94;
      }
      else if ((plVar18[1] & uVar16 - 1) != uVar15) goto LAB_0109df90;
      plVar18 = (long *)*plVar18;
      iVar12 = 0;
    } while (plVar18 != (long *)0x0);
    goto LAB_0109e000;
  }
LAB_0109df90:
  iVar12 = 0;
  bVar2 = *puVar6;
  goto joined_r0x0109e488;
LAB_0109de94:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_0109df90;
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
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0xad14feb23ef9e91c;
    }
    else if (uVar16 < 0xad14feb23ef9e91d) {
      uVar15 = 0;
      if (uVar16 != 0) {
        uVar15 = 0xad14feb23ef9e91c / uVar16;
      }
      uVar15 = 0xad14feb23ef9e91c - uVar15 * uVar16;
    }
    else {
      uVar15 = 0xad14feb23ef9e91c;
    }
    plVar19 = *(long **)(plVar18[0x13] + uVar15 * 8);
    if (plVar19 == (long *)0x0) {
      iVar12 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        iVar12 = 0;
      }
      else if (uVar14 < 2) {
        do {
          if (plVar19[1] == 0xad14feb23ef9e91c) {
            if (plVar19[2] == -0x52eb014dc10616e4) goto LAB_0109dfe8;
          }
          else if ((plVar19[1] & uVar16 - 1) != uVar15) {
            iVar12 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          iVar12 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar19[1];
          if (uVar14 == 0xad14feb23ef9e91c) {
            if (plVar19[2] == -0x52eb014dc10616e4) goto LAB_0109dfe8;
          }
          else {
            if (uVar16 <= uVar14) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar14 / uVar16;
              }
              uVar14 = uVar14 - uVar5 * uVar16;
            }
            if (uVar14 != uVar15) {
              iVar12 = 0;
              goto LAB_0109dfec;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        iVar12 = 0;
      }
    }
  }
  goto LAB_0109dfec;
LAB_0109e098:
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
      uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar16 - 1 & 0xad1501b23ef9ee35;
      }
      else if (uVar16 < 0xad1501b23ef9ee36) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0xad1501b23ef9ee35 / uVar16;
        }
        uVar15 = 0xad1501b23ef9ee35 - uVar15 * uVar16;
      }
      else {
        uVar15 = 0xad1501b23ef9ee35;
      }
      plVar19 = *(long **)(plVar18[0x13] + uVar15 * 8);
      if (plVar19 == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          iVar10 = 0;
        }
        else if (uVar14 < 2) {
          do {
            if (plVar19[1] == 0xad1501b23ef9ee35) {
              if (plVar19[2] == -0x52eafe4dc10611cb) goto LAB_0109e1ec;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar15) {
              iVar10 = 0;
              break;
            }
            plVar19 = (long *)*plVar19;
            iVar10 = 0;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar19[1];
            if (uVar14 == 0xad1501b23ef9ee35) {
              if (plVar19[2] == -0x52eafe4dc10611cb) goto LAB_0109e1ec;
            }
            else {
              if (uVar16 <= uVar14) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar14 / uVar16;
                }
                uVar14 = uVar14 - uVar5 * uVar16;
              }
              if (uVar14 != uVar15) {
                iVar10 = 0;
                goto LAB_0109e1f0;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          iVar10 = 0;
        }
      }
    }
    goto LAB_0109e1f0;
  }
  goto LAB_0109e194;
LAB_0109e1ec:
  iVar10 = (int)plVar19[6];
LAB_0109e1f0:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 != 0) goto LAB_0109e204;
  (**(code **)(*plVar18 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0109e19c;
LAB_0109e29c:
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
      uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar16 - 1 & 0xad1500b23ef9ec82;
      }
      else if (uVar16 < 0xad1500b23ef9ec83) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0xad1500b23ef9ec82 / uVar16;
        }
        uVar15 = 0xad1500b23ef9ec82 - uVar15 * uVar16;
      }
      else {
        uVar15 = 0xad1500b23ef9ec82;
      }
      plVar19 = *(long **)(plVar18[0x13] + uVar15 * 8);
      if (plVar19 == (long *)0x0) {
        iVar11 = 0;
      }
      else {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          iVar11 = 0;
        }
        else if (uVar14 < 2) {
          do {
            if (plVar19[1] == 0xad1500b23ef9ec82) {
              if (plVar19[2] == -0x52eaff4dc106137e) goto LAB_0109e3e8;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar15) {
              iVar11 = 0;
              break;
            }
            plVar19 = (long *)*plVar19;
            iVar11 = 0;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar19[1];
            if (uVar14 == 0xad1500b23ef9ec82) {
              if (plVar19[2] == -0x52eaff4dc106137e) goto LAB_0109e3e8;
            }
            else {
              if (uVar16 <= uVar14) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar14 / uVar16;
                }
                uVar14 = uVar14 - uVar5 * uVar16;
              }
              if (uVar14 != uVar15) {
                iVar11 = 0;
                goto LAB_0109e3ec;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          iVar11 = 0;
        }
      }
    }
    goto LAB_0109e3ec;
  }
  goto LAB_0109e398;
LAB_0109e3e8:
  iVar11 = (int)plVar19[6];
LAB_0109e3ec:
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
  goto LAB_0109e400;
LAB_0109dfe8:
  iVar12 = (int)plVar19[6];
LAB_0109dfec:
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
    bVar2 = *puVar6;
  }
  else {
LAB_0109e000:
    bVar2 = *puVar6;
  }
joined_r0x0109e488:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar16 = *(ulong *)(lVar17 + 0x60);
  if (uVar16 == 0) {
LAB_0109e194:
    iVar10 = 0;
    bVar2 = *puVar6;
  }
  else {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0xb0d55380947492dd;
    }
    else {
      uVar15 = 0xb0d55380947492dd;
      if (uVar16 < 0xb0d55380947492de) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0xb0d55380947492dd / uVar16;
        }
        uVar15 = 0xb0d55380947492dd - uVar15 * uVar16;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar15 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_0109e194;
    if (1 < uVar14) {
      do {
        uVar14 = plVar18[1];
        if (uVar14 == 0xb0d55380947492dd) {
          if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109e098;
        }
        else {
          if (uVar16 <= uVar14) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar14 / uVar16;
            }
            uVar14 = uVar14 - uVar5 * uVar16;
          }
          if (uVar14 != uVar15) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_0109e194;
    }
    do {
      if (plVar18[1] == 0xb0d55380947492dd) {
        if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109e098;
      }
      else if ((plVar18[1] & uVar16 - 1) != uVar15) goto LAB_0109e194;
      plVar18 = (long *)*plVar18;
      iVar10 = 0;
    } while (plVar18 != (long *)0x0);
LAB_0109e204:
    bVar2 = *puVar6;
  }
joined_r0x0109e19c:
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar16 = *(ulong *)(lVar17 + 0x60);
  if (uVar16 != 0) {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar16 - 1 & 0xb0d55380947492dd;
    }
    else {
      uVar15 = 0xb0d55380947492dd;
      if (uVar16 < 0xb0d55380947492de) {
        uVar15 = 0;
        if (uVar16 != 0) {
          uVar15 = 0xb0d55380947492dd / uVar16;
        }
        uVar15 = 0xb0d55380947492dd - uVar15 * uVar16;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar15 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar18[1] == 0xb0d55380947492dd) {
            if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109e29c;
          }
          else if ((plVar18[1] & uVar16 - 1) != uVar15) goto LAB_0109e398;
          plVar18 = (long *)*plVar18;
          iVar11 = 0;
        } while (plVar18 != (long *)0x0);
        goto LAB_0109e400;
      }
      do {
        uVar14 = plVar18[1];
        if (uVar14 == 0xb0d55380947492dd) {
          if (plVar18[2] == -0x4f2aac7f6b8b6d23) goto LAB_0109e29c;
        }
        else {
          if (uVar16 <= uVar14) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar14 / uVar16;
            }
            uVar14 = uVar14 - uVar5 * uVar16;
          }
          if (uVar14 != uVar15) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_0109e398:
  iVar11 = 0;
LAB_0109e400:
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


