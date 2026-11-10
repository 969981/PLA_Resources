/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148dfe4; name: FUN_0148dfe4
 */


void FUN_0148dfe4(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  plVar18 = DAT_043c39e8;
  lVar16 = DAT_043c39d0;
  plVar17 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (DAT_043c39e8 != (long *)0x0) {
    (**(code **)(*DAT_043c39e8 + 0x18))(DAT_043c39e8);
  }
  plVar19 = plVar17;
  if ((lVar10 != 0) && (*plVar17 != lVar16)) {
    lVar15 = lVar10 * 0x30;
    plVar21 = plVar17 + lVar10 * 6;
    do {
      lVar15 = lVar15 + -0x30;
      plVar19 = plVar21;
      if (lVar15 == 0) break;
      plVar22 = plVar17 + 6;
      plVar17 = plVar17 + 6;
      plVar19 = plVar17;
    } while (*plVar22 != lVar16);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  *(byte *)(plVar19[4] + 0x58) = *(byte *)(plVar19[4] + 0x58) | 1;
  local_90 = 0xb75036d146243a92;
  pcStack_88 = "pane_L_zninfo_00";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  lVar10 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0xe8), lVar10 != 0)) {
    FUN_00235780(lVar10);
    FUN_002350e8(lVar10,"T_param_u_zninfo_00");
    FUN_002350e8(lVar10,"T_param_u_zninfo_01");
    FUN_002350e8(lVar10,"T_param_u_zninfo_02");
    FUN_002350e8(lVar10,"T_param_zninfo_00");
    FUN_002350e8(lVar10,"T_param_zninfo_01");
    FUN_002350e8(lVar10,"T_param_zninfo_02");
    FUN_002350e8(lVar10,"T_multiple_zninfo_00");
  }
  plVar17 = *(long **)(param_1 + 0x2c8);
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar9 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  plVar18 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0xa8);
  if (plVar18 != (long *)0x0) {
    lVar10 = plVar18[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar19 = (long *)plVar18[0xd];
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar10 = plVar18[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar18 = *(long **)(lVar10 + 0x298);
  if (plVar18 != (long *)0x0) {
    lVar10 = plVar18[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_0284ef04(*(long *)(param_1 + 0x448) + 0xd0,*(undefined8 *)(param_2 + 8),0,1);
  plVar21 = *(long **)(param_1 + 0x2c8);
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar9 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  plVar22 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0xa8);
  if (plVar22 != (long *)0x0) {
    lVar10 = plVar22[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = (long *)plVar22[0xd];
  if (plVar20 != (long *)0x0) {
    plVar2 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar10 = plVar22[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 1:
    lVar10 = FUN_0140c280(1);
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 == (long *)0x0) {
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x270);
        if (plVar22 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar22 != 0) {
              plVar2 = (long *)(*plVar22 + 0x58);
            }
            if (*plVar2 == lVar10) goto LAB_0148f77c;
            plVar22 = plVar22 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar22);
        }
      }
      iVar9 = 0;
LAB_0148f77c:
      FUN_02c2e33c(plVar20,iVar9,0);
      plVar22 = (long *)plVar21[0x37];
    }
    else {
      plVar2 = plVar22 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar13 = *(long **)(lVar16 + 0x270);
        if (plVar13 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar13 != 0) {
              plVar3 = (long *)(*plVar13 + 0x58);
            }
            if (*plVar3 == lVar10) goto LAB_0148ed00;
            plVar13 = plVar13 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar13);
        }
      }
      iVar9 = 0;
LAB_0148ed00:
      FUN_02c2e33c(plVar20,iVar9,plVar22);
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        plVar22 = (long *)plVar21[0x37];
      }
      else {
        plVar22 = (long *)plVar21[0x37];
      }
    }
    if (plVar22 == (long *)0x0) {
      FUN_010c5d94(0,0,*(undefined4 *)(param_2 + 0x30));
      break;
    }
    lVar10 = plVar22[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_010c5d94(plVar22,0,*(undefined4 *)(param_2 + 0x30));
    lVar10 = plVar22[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0148ee8c:
    if (iVar9 != 0) break;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    pcVar14 = *(code **)(*plVar22 + 0x20);
    goto LAB_0148ef40;
  case 2:
    lVar10 = FUN_0140c280(2);
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 == (long *)0x0) {
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x270);
        if (plVar22 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar22 != 0) {
              plVar2 = (long *)(*plVar22 + 0x58);
            }
            if (*plVar2 == lVar10) goto LAB_0148f7e8;
            plVar22 = plVar22 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar22);
        }
      }
      iVar9 = 0;
LAB_0148f7e8:
      FUN_02c2e33c(plVar20,iVar9,0);
      plVar22 = (long *)plVar21[0x37];
    }
    else {
      plVar2 = plVar22 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar13 = *(long **)(lVar16 + 0x270);
        if (plVar13 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar13 != 0) {
              plVar3 = (long *)(*plVar13 + 0x58);
            }
            if (*plVar3 == lVar10) goto LAB_0148ee04;
            plVar13 = plVar13 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar13);
        }
      }
      iVar9 = 0;
LAB_0148ee04:
      FUN_02c2e33c(plVar20,iVar9,plVar22);
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        plVar22 = (long *)plVar21[0x37];
      }
      else {
        plVar22 = (long *)plVar21[0x37];
      }
    }
    if (plVar22 != (long *)0x0) {
      lVar10 = plVar22[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_010c6d2c(plVar22,0,*(undefined1 *)(param_2 + 0x2e));
      lVar10 = plVar22[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_0148ee8c;
    }
    FUN_010c6d2c(0,0,*(undefined1 *)(param_2 + 0x2e));
    break;
  default:
    lVar10 = FUN_0140c280();
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 != (long *)0x0) {
      plVar2 = plVar22 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar13 = *(long **)(lVar16 + 0x270);
        if (plVar13 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar13 != 0) {
              plVar3 = (long *)(*plVar13 + 0x58);
            }
            if (*plVar3 == lVar10) goto LAB_0148e3e4;
            plVar13 = plVar13 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar13);
        }
      }
      iVar9 = 0;
LAB_0148e3e4:
      FUN_02c2e33c(plVar20,iVar9,plVar22);
      do {
        iVar9 = (int)*plVar2 + -1;
        bVar8 = iVar9 == 0;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_0148e400;
    }
    lVar16 = plVar20[0x16];
    if (lVar16 != 0) {
      plVar22 = *(long **)(lVar16 + 0x270);
      if (plVar22 != *(long **)(lVar16 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar22 != 0) {
            plVar2 = (long *)(*plVar22 + 0x58);
          }
          if (*plVar2 == lVar10) goto LAB_0148f698;
          plVar22 = plVar22 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar22);
      }
    }
LAB_0148f694:
    iVar9 = 0;
LAB_0148f698:
    FUN_02c2e33c(plVar20,iVar9,0);
    break;
  case 6:
  case 7:
    lVar10 = FUN_0140c280();
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 == (long *)0x0) {
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x270);
        if (plVar22 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar22 != 0) {
              plVar2 = (long *)(*plVar22 + 0x58);
            }
            if (*plVar2 == lVar10) goto LAB_0148f698;
            plVar22 = plVar22 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar22);
        }
      }
      goto LAB_0148f694;
    }
    plVar2 = plVar22 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = plVar20[0x16];
    if (lVar16 != 0) {
      plVar13 = *(long **)(lVar16 + 0x270);
      if (plVar13 != *(long **)(lVar16 + 0x278)) {
        iVar9 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == lVar10) goto LAB_0148f340;
          plVar13 = plVar13 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar13);
      }
    }
    iVar9 = 0;
LAB_0148f340:
    FUN_02c2e33c(plVar20,iVar9,plVar22);
    do {
      iVar9 = (int)*plVar2 + -1;
      bVar8 = iVar9 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_0148e400;
  case 8:
  case 9:
    lVar10 = FUN_0140c280();
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 == (long *)0x0) {
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x270);
        if (plVar22 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar22 != 0) {
              plVar2 = (long *)(*plVar22 + 0x58);
            }
            if (*plVar2 == lVar10) goto LAB_0148f698;
            plVar22 = plVar22 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar22);
        }
      }
      goto LAB_0148f694;
    }
    plVar2 = plVar22 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = plVar20[0x16];
    if (lVar16 != 0) {
      plVar13 = *(long **)(lVar16 + 0x270);
      if (plVar13 != *(long **)(lVar16 + 0x278)) {
        iVar9 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == lVar10) goto LAB_0148f1a4;
          plVar13 = plVar13 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar13);
      }
    }
    iVar9 = 0;
LAB_0148f1a4:
    FUN_02c2e33c(plVar20,iVar9,plVar22);
    do {
      iVar9 = (int)*plVar2 + -1;
      bVar8 = iVar9 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0148e400:
    if (bVar8) {
LAB_0148ef38:
      pcVar14 = *(code **)(*plVar22 + 0x10);
LAB_0148ef40:
      (*pcVar14)(plVar22);
    }
    break;
  case 10:
    lVar10 = FUN_0140c298(*(undefined1 *)(param_2 + 0x34));
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 == (long *)0x0) {
      lVar16 = plVar20[0x16];
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x270);
        if (plVar22 != *(long **)(lVar16 + 0x278)) {
          iVar9 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar22 != 0) {
              plVar2 = (long *)(*plVar22 + 0x58);
            }
            if (*plVar2 == lVar10) goto LAB_0148f698;
            plVar22 = plVar22 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar22);
        }
      }
      goto LAB_0148f694;
    }
    plVar2 = plVar22 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = plVar20[0x16];
    if (lVar16 != 0) {
      plVar13 = *(long **)(lVar16 + 0x270);
      if (plVar13 != *(long **)(lVar16 + 0x278)) {
        iVar9 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == lVar10) goto LAB_0148ef18;
          plVar13 = plVar13 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar13);
      }
    }
    iVar9 = 0;
LAB_0148ef18:
    FUN_02c2e33c(plVar20,iVar9,plVar22);
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 != 0) break;
    goto LAB_0148ef38;
  }
  local_80 = 0x23;
  local_78 = (long *)0x0;
  local_90 = 0x1866506f6909511d;
  pcStack_88 = "pane_L_zninfo_00_T_header_zninfo_00";
  lVar15 = plVar21[0x37];
  lVar10 = plVar21[0x38];
  lVar16 = plVar21[0x39];
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,lVar10);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar16,lVar10,0,0);
  FUN_0283ce7c(plVar21,&local_90,plVar21[0x39],10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  plVar21 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar21 != (long *)0x0) {
    lVar10 = plVar21[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar22 = (long *)plVar21[0xd];
  if (plVar22 != (long *)0x0) {
    plVar20 = plVar22 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = (int)*plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      iVar9 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  lVar10 = plVar21[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  uVar11 = 0x3f800000;
  if (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x24)) {
    uVar11 = 0;
  }
  if (*(char *)(param_2 + 0x2c) != '\0') {
    uVar11 = 0x40000000;
  }
  uVar12 = 5;
  if (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x24)) {
    uVar12 = 0;
  }
  if (*(char *)(param_2 + 0x2c) != '\0') {
    uVar12 = 5;
  }
  local_90 = 0x225884f5797e1ee3;
  pcStack_88 = "anime_L_zninfo_00_switch_complete";
  local_80 = 0x21;
  local_78 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_90);
  }
  FUN_00d2e2f0(uVar11,param_1 + 0x180,"anime_L_zninfo_00_switch_complete");
  plVar19 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar10 != 0) && (*plVar19 != (&DAT_04212828)[(ulong)uVar12 * 3])) {
    plVar21 = plVar19 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar19 = plVar21;
        break;
      }
      plVar2 = plVar19 + 6;
      plVar20 = plVar19 + 6;
      plVar19 = plVar2;
    } while (*plVar20 != (&DAT_04212828)[(ulong)uVar12 * 3]);
  }
  *(byte *)(plVar19[4] + 0x58) = *(byte *)(plVar19[4] + 0x58) | 1;
  uVar7 = (ulong)(uVar12 + 1);
  local_90 = (&DAT_04212828)[uVar7 * 3];
  pcStack_88 = (&PTR_s_pane_L_zninfo_00_N_count_uncompl_04212830)[uVar7 * 3];
  local_80 = *(undefined8 *)(&DAT_04212838 + uVar7 * 0x18);
  local_78 = (long *)0x0;
  if (*pcStack_88 != '\0') {
    lVar10 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
      FUN_00256608(lVar10);
    }
  }
  plVar19 = (long *)plVar17[0x38];
  if (plVar19 == (long *)0x0) {
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar19 = *(long **)(lVar10 + 0x270);
      if (plVar19 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar21 = (long *)PTR_DAT_04379c88;
          if (*plVar19 != 0) {
            plVar21 = (long *)(*plVar19 + 0x58);
          }
          if (*plVar21 == -0x1e0799cb7a65e3bc) goto LAB_0148f54c;
          plVar19 = plVar19 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar19);
      }
    }
    iVar9 = 0;
LAB_0148f54c:
    FUN_02c2e33c(plVar22,iVar9,0);
    plVar19 = (long *)plVar17[0x37];
joined_r0x0148f55c:
    if (plVar19 != (long *)0x0) goto LAB_0148e73c;
LAB_0148f1fc:
    FUN_02c395d0(0,0,*(undefined4 *)(param_2 + 0x28),3,0,1);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar20 = *(long **)(lVar10 + 0x270);
      if (plVar20 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar20 != 0) {
            plVar2 = (long *)(*plVar20 + 0x58);
          }
          if (*plVar2 == -0x1e0799cb7a65e3bc) goto LAB_0148e714;
          plVar20 = plVar20 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar20);
      }
    }
    iVar9 = 0;
LAB_0148e714:
    FUN_02c2e33c(plVar22,iVar9,plVar19);
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      plVar19 = (long *)plVar17[0x37];
      goto joined_r0x0148f55c;
    }
    plVar19 = (long *)plVar17[0x37];
    if (plVar19 == (long *)0x0) goto LAB_0148f1fc;
LAB_0148e73c:
    lVar10 = plVar19[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02c395d0(plVar19,0,*(undefined4 *)(param_2 + 0x28),3,0,1);
    lVar10 = plVar19[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  uVar7 = (ulong)(uVar12 | 2);
  local_90 = (&DAT_04212828)[uVar7 * 3];
  pcStack_88 = (&PTR_s_pane_L_zninfo_00_N_count_uncompl_04212830)[uVar7 * 3];
  local_80 = *(undefined8 *)(&DAT_04212838 + uVar7 * 0x18);
  local_78 = (long *)0x0;
  lVar15 = plVar17[0x37];
  lVar10 = plVar17[0x38];
  lVar16 = plVar17[0x39];
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,lVar10);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar16,lVar10,0,0);
  FUN_0283ce7c(plVar17,&local_90,plVar17[0x39],10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar19 = (long *)plVar17[0x38];
  if (plVar19 == (long *)0x0) {
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar19 = *(long **)(lVar10 + 0x270);
      if (plVar19 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar21 = (long *)PTR_DAT_04379c88;
          if (*plVar19 != 0) {
            plVar21 = (long *)(*plVar19 + 0x58);
          }
          if (*plVar21 == -0x1e079acb7a65e56f) goto LAB_0148f5c8;
          plVar19 = plVar19 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar19);
      }
    }
    iVar9 = 0;
LAB_0148f5c8:
    FUN_02c2e33c(plVar22,iVar9,0);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar20 = *(long **)(lVar10 + 0x270);
      if (plVar20 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar20 != 0) {
            plVar2 = (long *)(*plVar20 + 0x58);
          }
          if (*plVar2 == -0x1e079acb7a65e56f) goto LAB_0148e8c0;
          plVar20 = plVar20 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar20);
      }
    }
    iVar9 = 0;
LAB_0148e8c0:
    FUN_02c2e33c(plVar22,iVar9,plVar19);
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  uVar7 = (ulong)(uVar12 + 3);
  local_90 = (&DAT_04212828)[uVar7 * 3];
  pcStack_88 = (&PTR_s_pane_L_zninfo_00_N_count_uncompl_04212830)[uVar7 * 3];
  local_80 = *(undefined8 *)(&DAT_04212838 + uVar7 * 0x18);
  local_78 = (long *)0x0;
  lVar15 = plVar17[0x37];
  lVar10 = plVar17[0x38];
  lVar16 = plVar17[0x39];
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,lVar10);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar16,lVar10,0,0);
  FUN_0283ce7c(plVar17,&local_90,plVar17[0x39],10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar19 = (long *)plVar17[0x38];
  if (plVar19 == (long *)0x0) {
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar19 = *(long **)(lVar10 + 0x270);
      if (plVar19 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar21 = (long *)PTR_DAT_04379c88;
          if (*plVar19 != 0) {
            plVar21 = (long *)(*plVar19 + 0x58);
          }
          if (*plVar21 == -0x1e0799cb7a65e3bc) goto LAB_0148f62c;
          plVar19 = plVar19 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar19);
      }
    }
    iVar9 = 0;
LAB_0148f62c:
    FUN_02c2e33c(plVar22,iVar9,0);
    plVar19 = (long *)plVar17[0x37];
joined_r0x0148f63c:
    if (plVar19 != (long *)0x0) goto LAB_0148ea0c;
LAB_0148f248:
    FUN_02c395d0(0,0,*(undefined4 *)(param_2 + 0x24),3,0,1);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar20 = *(long **)(lVar10 + 0x270);
      if (plVar20 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar20 != 0) {
            plVar2 = (long *)(*plVar20 + 0x58);
          }
          if (*plVar2 == -0x1e0799cb7a65e3bc) goto LAB_0148e9e4;
          plVar20 = plVar20 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar20);
      }
    }
    iVar9 = 0;
LAB_0148e9e4:
    FUN_02c2e33c(plVar22,iVar9,plVar19);
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      plVar19 = (long *)plVar17[0x37];
      goto joined_r0x0148f63c;
    }
    plVar19 = (long *)plVar17[0x37];
    if (plVar19 == (long *)0x0) goto LAB_0148f248;
LAB_0148ea0c:
    lVar10 = plVar19[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0148f8fc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02c395d0(plVar19,0,*(undefined4 *)(param_2 + 0x24),3,0,1);
    lVar10 = plVar19[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  uVar7 = (ulong)(uVar12 + 4);
  local_90 = (&DAT_04212828)[uVar7 * 3];
  pcStack_88 = (&PTR_s_pane_L_zninfo_00_N_count_uncompl_04212830)[uVar7 * 3];
  local_80 = *(undefined8 *)(&DAT_04212838 + uVar7 * 0x18);
  local_78 = (long *)0x0;
  lVar15 = plVar17[0x37];
  lVar10 = plVar17[0x38];
  lVar16 = plVar17[0x39];
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,lVar10);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar16,lVar10,0,0);
  FUN_0283ce7c(plVar17,&local_90,plVar17[0x39],10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar10 == 0) || (*plVar19 == 0x6bec55b7f8681b55)) {
    plVar21 = plVar19;
  }
  else {
    lVar16 = lVar10 * 0x30;
    plVar20 = plVar19;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) goto LAB_0148ef4c;
      plVar2 = plVar20 + 6;
      plVar21 = plVar20 + 6;
      plVar20 = plVar20 + 6;
    } while (*plVar2 != 0x6bec55b7f8681b55);
  }
  if (plVar21 == plVar19 + lVar10 * 6) {
LAB_0148ef4c:
    lVar10 = 0;
    bVar4 = DAT_00000058;
  }
  else {
    lVar10 = plVar21[4];
    bVar4 = *(byte *)(lVar10 + 0x58);
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    *(byte *)(lVar10 + 0x58) = bVar4 & 0xfe;
    goto joined_r0x0148eb90;
  }
  *(byte *)(lVar10 + 0x58) = bVar4 | 1;
  plVar19 = (long *)plVar17[0x38];
  if (plVar19 == (long *)0x0) {
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar19 = *(long **)(lVar10 + 0x270);
      if (plVar19 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar21 = (long *)PTR_DAT_04379c88;
          if (*plVar19 != 0) {
            plVar21 = (long *)(*plVar19 + 0x58);
          }
          if (*plVar21 == -0x1e0798cb7a65e209) goto LAB_0148f70c;
          plVar19 = plVar19 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar19);
      }
    }
    iVar9 = 0;
LAB_0148f70c:
    FUN_02c2e33c(plVar22,iVar9,0);
    plVar19 = (long *)plVar17[0x37];
joined_r0x0148f720:
    if (plVar19 != (long *)0x0) goto LAB_0148f008;
LAB_0148f378:
    FUN_02c395d0(0,0,*(undefined4 *)(param_2 + 0x3c),3,0,1);
  }
  else {
    plVar21 = plVar19 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = plVar22[0x16];
    if (lVar10 != 0) {
      plVar20 = *(long **)(lVar10 + 0x270);
      if (plVar20 != *(long **)(lVar10 + 0x278)) {
        iVar9 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar20 != 0) {
            plVar2 = (long *)(*plVar20 + 0x58);
          }
          if (*plVar2 == -0x1e0798cb7a65e209) goto LAB_0148efe0;
          plVar20 = plVar20 + 1;
          iVar9 = iVar9 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar20);
      }
    }
    iVar9 = 0;
LAB_0148efe0:
    FUN_02c2e33c(plVar22,iVar9,plVar19);
    do {
      iVar9 = (int)*plVar21 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      plVar19 = (long *)plVar17[0x37];
      goto joined_r0x0148f720;
    }
    plVar19 = (long *)plVar17[0x37];
    if (plVar19 == (long *)0x0) goto LAB_0148f378;
LAB_0148f008:
    lVar10 = plVar19[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0148f8fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02c395d0(plVar19,0,*(undefined4 *)(param_2 + 0x3c),3,0,1);
    lVar10 = plVar19[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  local_80 = 0x25;
  local_78 = (long *)0x0;
  local_90 = 0xa0fba39d5362f57c;
  pcStack_88 = "pane_L_zninfo_00_T_multiple_zninfo_00";
  lVar15 = plVar17[0x37];
  lVar10 = plVar17[0x38];
  lVar16 = plVar17[0x39];
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,lVar10);
  if (*(char *)(lVar16 + 0x7c) != '\0') {
    **(undefined2 **)(lVar16 + 0x58) = 0;
    *(undefined2 *)(lVar16 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar16,lVar10,0,0);
  FUN_0283ce7c(plVar17,&local_90,plVar17[0x39],10);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
joined_r0x0148eb90:
  if (plVar18 != (long *)0x0) {
    lVar10 = plVar18[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar17 = plVar22 + 10;
    do {
      iVar9 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  local_90 = 0xca879a697d0cc79c;
  pcStack_88 = "PLAY_UI_COMMON_HUD_SLIDE_IN";
  local_80 = 0x1b;
  local_78 = (long *)0x0;
  FUN_028354b0(&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (*(char *)(param_1 + 0x1af0) == '\0') {
    *(char *)(param_1 + 0x1af0) = '\x01';
  }
  local_90 = 0xe7aac34ac020315d;
  pcStack_88 = "PLAY_UI_COMMON_HUD_NOTICE";
  local_80 = 0x19;
  local_78 = (long *)0x0;
  FUN_028354b0(&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


