/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd73a0; name: FUN_00cd73a0
 */


bool FUN_00cd73a0(uint param_1)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  long *local_a0;
  long *local_98;
  long *local_90;
  ulong local_88;
  char *pcStack_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_68);
  if (local_68 == (long *)0x0) {
    return false;
  }
  local_88 = 0x52daf76250fe632a;
  pcStack_80 = "WSYS_U_RANK";
  local_78 = (long *)0xb;
  local_70 = (long *)0x0;
  uVar10 = FUN_010f5878(local_68,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar7 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar19 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar19;
  uVar18 = *(ulong *)(lVar19 + 0x60);
  if (uVar18 != 0) {
    uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar18 - 1 & 0x1073f2d92331daf9;
    }
    else {
      uVar17 = 0x1073f2d92331daf9;
      if (uVar18 < 0x1073f2d92331dafa) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = 0x1073f2d92331daf9 / uVar18;
        }
        uVar17 = 0x1073f2d92331daf9 - uVar17 * uVar18;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar17 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_00cd7604;
    if (1 < uVar16) {
      do {
        uVar16 = plVar20[1];
        if (uVar16 == 0x1073f2d92331daf9) {
          if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd7500;
        }
        else {
          if (uVar18 <= uVar16) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar6 * uVar18;
          }
          if (uVar16 != uVar17) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_00cd7604;
    }
    do {
      if (plVar20[1] == 0x1073f2d92331daf9) {
        if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd7500;
      }
      else if ((plVar20[1] & uVar18 - 1) != uVar17) goto LAB_00cd7604;
      plVar20 = (long *)*plVar20;
      iVar13 = 0;
    } while (plVar20 != (long *)0x0);
    goto LAB_00cd7674;
  }
LAB_00cd7604:
  iVar13 = 0;
  bVar3 = *puVar7;
  goto joined_r0x00cd8280;
LAB_00cd7500:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_00cd7604;
  plVar1 = plVar20 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar18 = plVar20[0x14];
  if (uVar18 == 0) {
    iVar13 = 0;
  }
  else {
    uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar18 - 1 & 0x66d43cf2e4e4abe8;
    }
    else if (uVar18 < 0x66d43cf2e4e4abe9) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = 0x66d43cf2e4e4abe8 / uVar18;
      }
      uVar17 = 0x66d43cf2e4e4abe8 - uVar17 * uVar18;
    }
    else {
      uVar17 = 0x66d43cf2e4e4abe8;
    }
    plVar21 = *(long **)(plVar20[0x13] + uVar17 * 8);
    if (plVar21 == (long *)0x0) {
      iVar13 = 0;
    }
    else {
      plVar21 = (long *)*plVar21;
      if (plVar21 == (long *)0x0) {
        iVar13 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar21[1] == 0x66d43cf2e4e4abe8) {
            if (plVar21[2] == 0x66d43cf2e4e4abe8) goto LAB_00cd765c;
          }
          else if ((plVar21[1] & uVar18 - 1) != uVar17) {
            iVar13 = 0;
            break;
          }
          plVar21 = (long *)*plVar21;
          iVar13 = 0;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar21[1];
          if (uVar16 == 0x66d43cf2e4e4abe8) {
            if (plVar21[2] == 0x66d43cf2e4e4abe8) goto LAB_00cd765c;
          }
          else {
            if (uVar18 <= uVar16) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar16 / uVar18;
              }
              uVar16 = uVar16 - uVar6 * uVar18;
            }
            if (uVar16 != uVar17) {
              iVar13 = 0;
              goto LAB_00cd7660;
            }
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
        iVar13 = 0;
      }
    }
  }
  goto LAB_00cd7660;
LAB_00cd770c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar20[0x14];
    if (uVar18 == 0) {
      iVar12 = 0;
    }
    else {
      uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar18 - 1 & 0x686db7abaa6d8f6d;
      }
      else if (uVar18 < 0x686db7abaa6d8f6e) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = 0x686db7abaa6d8f6d / uVar18;
        }
        uVar17 = 0x686db7abaa6d8f6d - uVar17 * uVar18;
      }
      else {
        uVar17 = 0x686db7abaa6d8f6d;
      }
      plVar21 = *(long **)(plVar20[0x13] + uVar17 * 8);
      if (plVar21 == (long *)0x0) {
        iVar12 = 0;
      }
      else {
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) {
          iVar12 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar21[1] == 0x686db7abaa6d8f6d) {
              if (plVar21[2] == 0x686db7abaa6d8f6d) goto LAB_00cd7860;
            }
            else if ((plVar21[1] & uVar18 - 1) != uVar17) {
              iVar12 = 0;
              break;
            }
            plVar21 = (long *)*plVar21;
            iVar12 = 0;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar21[1];
            if (uVar16 == 0x686db7abaa6d8f6d) {
              if (plVar21[2] == 0x686db7abaa6d8f6d) goto LAB_00cd7860;
            }
            else {
              if (uVar18 <= uVar16) {
                uVar6 = 0;
                if (uVar18 != 0) {
                  uVar6 = uVar16 / uVar18;
                }
                uVar16 = uVar16 - uVar6 * uVar18;
              }
              if (uVar16 != uVar17) {
                iVar12 = 0;
                goto LAB_00cd7864;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
          iVar12 = 0;
        }
      }
    }
    goto LAB_00cd7864;
  }
  goto LAB_00cd7808;
LAB_00cd7860:
  iVar12 = (int)plVar21[6];
LAB_00cd7864:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 != 0) goto LAB_00cd7878;
  (**(code **)(*plVar20 + 0x10))();
  bVar3 = *puVar7;
  goto joined_r0x00cd7810;
LAB_00cd7910:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar20[0x14];
    if (uVar18 == 0) {
      iVar14 = 0;
    }
    else {
      uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar18 - 1 & 0x9ee506e2afdc7d42;
      }
      else if (uVar18 < 0x9ee506e2afdc7d43) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = 0x9ee506e2afdc7d42 / uVar18;
        }
        uVar17 = 0x9ee506e2afdc7d42 - uVar17 * uVar18;
      }
      else {
        uVar17 = 0x9ee506e2afdc7d42;
      }
      plVar21 = *(long **)(plVar20[0x13] + uVar17 * 8);
      if (plVar21 == (long *)0x0) {
        iVar14 = 0;
      }
      else {
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) {
          iVar14 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar21[1] == 0x9ee506e2afdc7d42) {
              if (plVar21[2] == -0x611af91d502382be) goto LAB_00cd7a5c;
            }
            else if ((plVar21[1] & uVar18 - 1) != uVar17) {
              iVar14 = 0;
              break;
            }
            plVar21 = (long *)*plVar21;
            iVar14 = 0;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar21[1];
            if (uVar16 == 0x9ee506e2afdc7d42) {
              if (plVar21[2] == -0x611af91d502382be) goto LAB_00cd7a5c;
            }
            else {
              if (uVar18 <= uVar16) {
                uVar6 = 0;
                if (uVar18 != 0) {
                  uVar6 = uVar16 / uVar18;
                }
                uVar16 = uVar16 - uVar6 * uVar18;
              }
              if (uVar16 != uVar17) {
                iVar14 = 0;
                goto LAB_00cd7a60;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
          iVar14 = 0;
        }
      }
    }
    goto LAB_00cd7a60;
  }
  goto LAB_00cd7a0c;
LAB_00cd7a5c:
  iVar14 = (int)plVar21[6];
LAB_00cd7a60:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
  goto LAB_00cd7a74;
LAB_00cd7f98:
  uVar22 = *(uint *)(plVar21 + 6);
  goto LAB_00cd7fa4;
LAB_00cd86cc:
  plVar20 = (long *)*plVar20;
  uVar22 = 0;
  if (plVar20 == (long *)0x0) goto LAB_00cd7fb8;
  goto LAB_00cd85f4;
LAB_00cd820c:
  uVar10 = *(uint *)(plVar21 + 6);
  goto LAB_00cd8210;
LAB_00cd8704:
  plVar20 = (long *)*plVar20;
  uVar10 = 0;
  if (plVar20 == (long *)0x0) goto joined_r0x00cd8784;
  goto LAB_00cd8644;
LAB_00cd7d40:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar18 = plVar20[0x14];
    if (uVar18 == 0) {
      uVar10 = 0;
    }
    else {
      uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar18 - 1 & local_88;
      }
      else if (local_88 < uVar18) {
        uVar17 = local_88;
      }
      else {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = local_88 / uVar18;
        }
        uVar17 = local_88 - uVar17 * uVar18;
      }
      plVar21 = *(long **)(plVar20[0x13] + uVar17 * 8);
      if (plVar21 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) {
          uVar10 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar21[1] == local_88) {
              if (plVar21[2] == local_88) goto LAB_00cd7ec4;
            }
            else if ((plVar21[1] & uVar18 - 1) != uVar17) {
              uVar10 = 0;
              break;
            }
            plVar21 = (long *)*plVar21;
            uVar10 = 0;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar21[1];
            if (uVar16 == local_88) {
              if (plVar21[2] == local_88) goto LAB_00cd7ec4;
            }
            else {
              if (uVar18 <= uVar16) {
                uVar6 = 0;
                if (uVar18 != 0) {
                  uVar6 = uVar16 / uVar18;
                }
                uVar16 = uVar16 - uVar6 * uVar18;
              }
              if (uVar16 != uVar17) {
                uVar10 = 0;
                goto LAB_00cd7ec8;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
          uVar10 = 0;
        }
      }
    }
    goto LAB_00cd7ec8;
  }
  goto LAB_00cd7e60;
LAB_00cd7ec4:
  uVar10 = *(uint *)(plVar21 + 6);
LAB_00cd7ec8:
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
  goto joined_r0x00cd7e68;
LAB_00cd765c:
  iVar13 = (int)plVar21[6];
LAB_00cd7660:
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar20 + 0x10))();
    bVar3 = *puVar7;
  }
  else {
LAB_00cd7674:
    bVar3 = *puVar7;
  }
joined_r0x00cd8280:
  if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar8;
  *(long *)puVar9 = lVar19;
  uVar18 = *(ulong *)(lVar19 + 0x60);
  if (uVar18 == 0) {
LAB_00cd7808:
    iVar12 = 0;
    bVar3 = *puVar7;
  }
  else {
    uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar18 - 1 & 0x1073f2d92331daf9;
    }
    else {
      uVar17 = 0x1073f2d92331daf9;
      if (uVar18 < 0x1073f2d92331dafa) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = 0x1073f2d92331daf9 / uVar18;
        }
        uVar17 = 0x1073f2d92331daf9 - uVar17 * uVar18;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar17 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_00cd7808;
    if (1 < uVar16) {
      do {
        uVar16 = plVar20[1];
        if (uVar16 == 0x1073f2d92331daf9) {
          if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd770c;
        }
        else {
          if (uVar18 <= uVar16) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar6 * uVar18;
          }
          if (uVar16 != uVar17) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_00cd7808;
    }
    do {
      if (plVar20[1] == 0x1073f2d92331daf9) {
        if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd770c;
      }
      else if ((plVar20[1] & uVar18 - 1) != uVar17) goto LAB_00cd7808;
      plVar20 = (long *)*plVar20;
      iVar12 = 0;
    } while (plVar20 != (long *)0x0);
LAB_00cd7878:
    bVar3 = *puVar7;
  }
joined_r0x00cd7810:
  if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar8;
  *(long *)puVar9 = lVar19;
  uVar18 = *(ulong *)(lVar19 + 0x60);
  if (uVar18 == 0) {
LAB_00cd7a0c:
    iVar14 = 0;
  }
  else {
    uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar18 - 1 & 0x1073f2d92331daf9;
    }
    else {
      uVar17 = 0x1073f2d92331daf9;
      if (uVar18 < 0x1073f2d92331dafa) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = 0x1073f2d92331daf9 / uVar18;
        }
        uVar17 = 0x1073f2d92331daf9 - uVar17 * uVar18;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar17 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_00cd7a0c;
    if (1 < uVar16) {
      do {
        uVar16 = plVar20[1];
        if (uVar16 == 0x1073f2d92331daf9) {
          if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd7910;
        }
        else {
          if (uVar18 <= uVar16) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar6 * uVar18;
          }
          if (uVar16 != uVar17) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_00cd7a0c;
    }
    do {
      if (plVar20[1] == 0x1073f2d92331daf9) {
        if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd7910;
      }
      else if ((plVar20[1] & uVar18 - 1) != uVar17) goto LAB_00cd7a0c;
      plVar20 = (long *)*plVar20;
      iVar14 = 0;
    } while (plVar20 != (long *)0x0);
  }
LAB_00cd7a74:
  iVar11 = FUN_00cd8790(99);
  if (uVar10 < 9) {
    std::to_string(uVar10);
    local_98 = (long *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      local_98 = local_78;
    }
    FUN_00cd88c0(&local_90,&local_98,"_pokerank_range_1");
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    FUN_02a47560(&local_88,&local_90);
    if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar19 = *(long *)puVar8;
    *(long *)puVar9 = lVar19;
    uVar18 = *(ulong *)(lVar19 + 0x60);
    if (uVar18 != 0) {
      uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar18 - 1 & 0x1073f2d92331daf9;
      }
      else {
        uVar17 = 0x1073f2d92331daf9;
        if (uVar18 < 0x1073f2d92331dafa) {
          uVar17 = 0;
          if (uVar18 != 0) {
            uVar17 = 0x1073f2d92331daf9 / uVar18;
          }
          uVar17 = 0x1073f2d92331daf9 - uVar17 * uVar18;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar17 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar16 < 2) {
LAB_00cd85f4:
          if (plVar20[1] != 0x1073f2d92331daf9) {
            if ((plVar20[1] & uVar18 - 1) == uVar17) goto LAB_00cd86cc;
            uVar22 = 0;
            goto LAB_00cd7fb8;
          }
          if (plVar20[2] != 0x1073f2d92331daf9) goto LAB_00cd86cc;
          plVar20 = (long *)plVar20[3];
joined_r0x00cd7b84:
          if (plVar20 == (long *)0x0) goto LAB_00cd7e30;
          plVar1 = plVar20 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar18 = plVar20[0x14];
          if (uVar18 == 0) {
LAB_00cd7c48:
            uVar22 = 0;
          }
          else {
            uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
            uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar16 < 2) {
              uVar17 = uVar18 - 1 & local_88;
            }
            else if (local_88 < uVar18) {
              uVar17 = local_88;
            }
            else {
              uVar17 = 0;
              if (uVar18 != 0) {
                uVar17 = local_88 / uVar18;
              }
              uVar17 = local_88 - uVar17 * uVar18;
            }
            plVar21 = *(long **)(plVar20[0x13] + uVar17 * 8);
            if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
            goto LAB_00cd7c48;
            if (1 < uVar16) {
              do {
                uVar16 = plVar21[1];
                if (uVar16 == local_88) {
                  if (plVar21[2] == local_88) goto LAB_00cd7f98;
                }
                else {
                  if (uVar18 <= uVar16) {
                    uVar6 = 0;
                    if (uVar18 != 0) {
                      uVar6 = uVar16 / uVar18;
                    }
                    uVar16 = uVar16 - uVar6 * uVar18;
                  }
                  if (uVar16 != uVar17) break;
                }
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
              goto LAB_00cd7c48;
            }
            do {
              if (plVar21[1] != local_88) {
                if ((plVar21[1] & uVar18 - 1) == uVar17) goto LAB_00cd7f88;
                goto LAB_00cd7c48;
              }
              if (plVar21[2] == local_88) goto LAB_00cd7f98;
LAB_00cd7f88:
              plVar21 = (long *)*plVar21;
              uVar22 = 0;
            } while (plVar21 != (long *)0x0);
          }
LAB_00cd7fa4:
          do {
            iVar15 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar20 + 0x10))();
          }
          goto LAB_00cd7fb8;
        }
        do {
          uVar16 = plVar20[1];
          if (uVar16 == 0x1073f2d92331daf9) {
            if (plVar20[2] == 0x1073f2d92331daf9) {
              plVar20 = (long *)plVar20[3];
              goto joined_r0x00cd7b84;
            }
          }
          else {
            if (uVar18 <= uVar16) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar16 / uVar18;
              }
              uVar16 = uVar16 - uVar6 * uVar18;
            }
            if (uVar16 != uVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
LAB_00cd7e30:
    uVar22 = 0;
LAB_00cd7fb8:
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    std::to_string(uVar10);
    local_a0 = (long *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      local_a0 = local_78;
    }
    FUN_00cd88c0(&local_98,&local_a0,"_pokerank_range_2");
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    FUN_02a47560(&local_88,&local_98);
    if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar19 = *(long *)puVar8;
    *(long *)puVar9 = lVar19;
    uVar18 = *(ulong *)(lVar19 + 0x60);
    if (uVar18 != 0) {
      uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar18 - 1 & 0x1073f2d92331daf9;
      }
      else {
        uVar17 = 0x1073f2d92331daf9;
        if (uVar18 < 0x1073f2d92331dafa) {
          uVar17 = 0;
          if (uVar18 != 0) {
            uVar17 = 0x1073f2d92331daf9 / uVar18;
          }
          uVar17 = 0x1073f2d92331daf9 - uVar17 * uVar18;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar17 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar16 < 2) {
LAB_00cd8644:
          if (plVar20[1] != 0x1073f2d92331daf9) {
            if ((plVar20[1] & uVar18 - 1) == uVar17) goto LAB_00cd8704;
            uVar10 = 0;
            goto joined_r0x00cd8784;
          }
          if (plVar20[2] != 0x1073f2d92331daf9) goto LAB_00cd8704;
          plVar20 = (long *)plVar20[3];
joined_r0x00cd80c8:
          if (plVar20 == (long *)0x0) goto LAB_00cd81b4;
          plVar1 = plVar20 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar18 = plVar20[0x14];
          if (uVar18 == 0) {
            uVar10 = 0;
          }
          else {
            uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
            uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
            uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar16 < 2) {
              uVar17 = uVar18 - 1 & local_88;
            }
            else if (local_88 < uVar18) {
              uVar17 = local_88;
            }
            else {
              uVar17 = 0;
              if (uVar18 != 0) {
                uVar17 = local_88 / uVar18;
              }
              uVar17 = local_88 - uVar17 * uVar18;
            }
            plVar21 = *(long **)(plVar20[0x13] + uVar17 * 8);
            if (plVar21 == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              plVar21 = (long *)*plVar21;
              if (plVar21 == (long *)0x0) {
                uVar10 = 0;
              }
              else if (uVar16 < 2) {
                do {
                  if (plVar21[1] == local_88) {
                    if (plVar21[2] == local_88) goto LAB_00cd820c;
                  }
                  else if ((plVar21[1] & uVar18 - 1) != uVar17) {
                    uVar10 = 0;
                    break;
                  }
                  plVar21 = (long *)*plVar21;
                  uVar10 = 0;
                } while (plVar21 != (long *)0x0);
              }
              else {
                do {
                  uVar16 = plVar21[1];
                  if (uVar16 != local_88) {
                    if (uVar18 <= uVar16) {
                      uVar6 = 0;
                      if (uVar18 != 0) {
                        uVar6 = uVar16 / uVar18;
                      }
                      uVar16 = uVar16 - uVar6 * uVar18;
                    }
                    if (uVar16 == uVar17) goto LAB_00cd8184;
                    uVar10 = 0;
                    goto LAB_00cd8210;
                  }
                  if (plVar21[2] == local_88) goto LAB_00cd820c;
LAB_00cd8184:
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
                uVar10 = 0;
              }
            }
          }
LAB_00cd8210:
          do {
            iVar15 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar20 + 0x10))();
          }
          goto joined_r0x00cd8784;
        }
        do {
          uVar16 = plVar20[1];
          if (uVar16 == 0x1073f2d92331daf9) {
            if (plVar20[2] == 0x1073f2d92331daf9) {
              plVar20 = (long *)plVar20[3];
              goto joined_r0x00cd80c8;
            }
          }
          else {
            if (uVar18 <= uVar16) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar16 / uVar18;
              }
              uVar16 = uVar16 - uVar6 * uVar18;
            }
            if (uVar16 != uVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
LAB_00cd81b4:
    uVar10 = 0;
joined_r0x00cd8784:
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (param_1 <= uVar10) {
      iVar14 = iVar12;
    }
    if (param_1 <= uVar22) {
      iVar14 = iVar13;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    goto joined_r0x00cd8268;
  }
  std::to_string(uVar10);
  local_98 = (long *)((ulong)&local_88 | 1);
  if ((local_88 & 1) != 0) {
    local_98 = local_78;
  }
  FUN_00cd88c0(&local_90,&local_98,"_pokerank_range_1");
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  FUN_02a47560(&local_88,&local_90);
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar8;
  *(long *)puVar9 = lVar19;
  uVar18 = *(ulong *)(lVar19 + 0x60);
  if (uVar18 == 0) {
LAB_00cd7e60:
    uVar10 = 0;
  }
  else {
    uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar18 - 1 & 0x1073f2d92331daf9;
    }
    else {
      uVar17 = 0x1073f2d92331daf9;
      if (uVar18 < 0x1073f2d92331dafa) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = 0x1073f2d92331daf9 / uVar18;
        }
        uVar17 = 0x1073f2d92331daf9 - uVar17 * uVar18;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar17 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_00cd7e60;
    if (1 < uVar16) {
      do {
        uVar16 = plVar20[1];
        if (uVar16 == 0x1073f2d92331daf9) {
          if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd7d40;
        }
        else {
          if (uVar18 <= uVar16) {
            uVar6 = 0;
            if (uVar18 != 0) {
              uVar6 = uVar16 / uVar18;
            }
            uVar16 = uVar16 - uVar6 * uVar18;
          }
          if (uVar16 != uVar17) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_00cd7e60;
    }
    do {
      if (plVar20[1] == 0x1073f2d92331daf9) {
        if (plVar20[2] == 0x1073f2d92331daf9) goto LAB_00cd7d40;
      }
      else if ((plVar20[1] & uVar18 - 1) != uVar17) goto LAB_00cd7e60;
      plVar20 = (long *)*plVar20;
      uVar10 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x00cd7e68:
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  iVar14 = iVar12;
  if (param_1 <= uVar10) {
    iVar14 = iVar13;
  }
joined_r0x00cd8268:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    lVar19 = local_68[0xb];
    piVar2 = (int *)(lVar19 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return iVar11 < iVar14;
}


