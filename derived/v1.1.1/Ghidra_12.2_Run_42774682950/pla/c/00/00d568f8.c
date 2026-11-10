/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d568f8; name: FUN_00d568f8
 */


void FUN_00d568f8(long *param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  iVar11 = (int)param_3;
  if (*(char *)((long)param_1 + (long)iVar11 * 0x60 + 0x665) == '\0') {
    return;
  }
  plVar16 = (long *)param_1[0x59];
  if (plVar16 != (long *)0x0) {
    plVar19 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar12 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar12;
  lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0x50) + 0x2d10) + 8);
  if (lVar12 == 0) {
    plVar19 = (long *)0x0;
    plVar17 = (long *)plVar16[0x37];
  }
  else {
    plVar17 = *(long **)(lVar12 + 0x30);
    if (plVar17 != (long *)0x0) {
      lVar12 = plVar17[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00d56fe4;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar19 = (long *)plVar17[0xd];
    if (plVar19 != (long *)0x0) {
      plVar18 = plVar19 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar12 = plVar17[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
      plVar17 = (long *)plVar16[0x37];
    }
    else {
      plVar17 = (long *)plVar16[0x37];
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_00d56fe4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar18 = (long *)plVar16[0x38];
  if (plVar18 != (long *)0x0) {
    plVar13 = plVar18 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  plVar13 = (long *)plVar16[0x39];
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  lVar12 = *(long *)(*(long *)(param_1[(long)iVar11 * 0xc + 199] + 0xa8) + (ulong)param_2 * 0x10);
  switch(*(undefined4 *)(lVar12 + 8)) {
  case 1:
    plVar18 = (long *)param_1[0x59];
    if (plVar18 != (long *)0x0) {
      plVar13 = plVar18 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = (long *)plVar18[0x29];
    lVar12 = plVar18[0x2a];
    if ((lVar12 != 0) && (*plVar13 != 0x2dc110817bf2fd6c)) {
      plVar14 = plVar13 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar13 = plVar14;
          break;
        }
        plVar2 = plVar13 + 6;
        plVar3 = plVar13 + 6;
        plVar13 = plVar2;
      } while (*plVar3 != 0x2dc110817bf2fd6c);
    }
    *(byte *)(plVar13[4] + 0x58) = *(byte *)(plVar13[4] + 0x58) & 0xfe;
    if (plVar18 == (long *)0x0) goto joined_r0x00d56e6c;
    plVar13 = plVar18 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      bVar7 = iVar11 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_00d56e68;
  case 2:
    lVar15 = plVar19[0x16];
    if (lVar15 != 0) {
      plVar14 = *(long **)(lVar15 + 0x270);
      if (plVar14 != *(long **)(lVar15 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar3 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar3 == 0x61ec2b46541df712) goto LAB_00d56d38;
          plVar14 = plVar14 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar15 + 0x278) != plVar14);
      }
    }
    iVar8 = 0;
LAB_00d56d38:
    FUN_02c2e33c(plVar19,iVar8,plVar18);
    if (*(int *)(lVar12 + 8) == 2) {
      uVar10 = *(undefined2 *)(lVar12 + 0xc);
    }
    else {
      uVar10 = 0;
    }
    FUN_02c3865c(plVar17,0,uVar10,1);
    break;
  case 3:
    lVar12 = plVar19[0x16];
    if (lVar12 != 0) {
      plVar14 = *(long **)(lVar12 + 0x270);
      if (plVar14 != *(long **)(lVar12 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar14 != 0) {
            plVar3 = (long *)(*plVar14 + 0x58);
          }
          if (*plVar3 == 0x61ec2c46541df8c5) goto LAB_00d56c0c;
          plVar14 = plVar14 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar14);
      }
    }
    iVar8 = 0;
LAB_00d56c0c:
    FUN_02c2e33c(plVar19,iVar8,plVar18);
    (**(code **)(*param_1 + 0x108))(param_1,param_3,param_2,0);
    break;
  case 4:
    plVar18 = (long *)param_1[0x59];
    if (plVar18 != (long *)0x0) {
      plVar13 = plVar18 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = (long *)plVar18[0x29];
    lVar12 = plVar18[0x2a];
    if ((lVar12 != 0) && (*plVar13 != 0x2dc110817bf2fd6c)) {
      plVar14 = plVar13 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar13 = plVar14;
          break;
        }
        plVar2 = plVar13 + 6;
        plVar3 = plVar13 + 6;
        plVar13 = plVar2;
      } while (*plVar3 != 0x2dc110817bf2fd6c);
    }
    *(byte *)(plVar13[4] + 0x58) = *(byte *)(plVar13[4] + 0x58) & 0xfe;
    if (plVar18 == (long *)0x0) goto joined_r0x00d56e6c;
    plVar13 = plVar18 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      bVar7 = iVar11 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_00d56e68;
  }
  FUN_02c333a8(plVar17,plVar13,plVar18);
  local_70 = 0xf06908d3200cefc9;
  pcStack_68 = "pane_L_inventory_parts_00_T_00";
  local_60 = 0x1e;
  local_58 = (long *)0x0;
  FUN_0283ce7c(plVar16,&local_70,plVar13,10);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  bVar4 = *(byte *)((long)param_1 + (long)iVar11 * 0x60 + 0x665);
  plVar18 = (long *)param_1[0x59];
  if (plVar18 != (long *)0x0) {
    plVar13 = plVar18 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)plVar18[0x29];
  lVar12 = plVar18[0x2a];
  if ((lVar12 != 0) && (*plVar13 != 0x2dc110817bf2fd6c)) {
    plVar14 = plVar13 + lVar12 * 6;
    lVar12 = lVar12 * 0x30;
    do {
      lVar12 = lVar12 + -0x30;
      if (lVar12 == 0) {
        plVar13 = plVar14;
        break;
      }
      plVar2 = plVar13 + 6;
      plVar3 = plVar13 + 6;
      plVar13 = plVar2;
    } while (*plVar3 != 0x2dc110817bf2fd6c);
  }
  *(byte *)(plVar13[4] + 0x58) = *(byte *)(plVar13[4] + 0x58) & 0xfe | bVar4;
  if (plVar18 != (long *)0x0) {
    plVar13 = plVar18 + 10;
    do {
      iVar11 = (int)*plVar13 + -1;
      bVar7 = iVar11 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00d56e68:
    if (bVar7) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
joined_r0x00d56e6c:
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (plVar19 != (long *)0x0) {
    plVar17 = plVar19 + 10;
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  plVar19 = plVar16 + 10;
  do {
    iVar11 = (int)*plVar19 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar6) {
      *(int *)plVar19 = iVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  return;
}


