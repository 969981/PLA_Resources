/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02afd574; name: FUN_02afd574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02afd574(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int extraout_var;
  int extraout_var_00;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong local_80 [2];
  int local_6c;
  int aiStack_68 [2];
  
  plVar12 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x80);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x410) + 0x80);
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
  }
  (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,6);
  (**(code **)(*DAT_043ef740 + 0x58))(DAT_043ef740,7);
  aiStack_68[0] = 2;
  local_80[0] = local_80[0] & 0xffffffffffffff00;
  piVar11 = (int *)plVar12[0x24];
  local_6c = extraout_var;
  if (piVar11 != (int *)plVar12[0x25]) {
LAB_02afd650:
    if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afd644;
    lVar10 = *param_2;
    if (lVar10 != 0) {
      piVar3 = (int *)(lVar10 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar14 = *(long **)(piVar11 + 2);
    *(long *)(piVar11 + 2) = lVar10;
    if (plVar14 != (long *)0x0) {
      plVar8 = plVar14 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    goto LAB_02afd6d0;
  }
LAB_02afd6b8:
  FUN_02bb199c(plVar12 + 0x24,aiStack_68,&local_6c,param_2,local_80);
LAB_02afd6d0:
  aiStack_68[0] = 2;
  local_80[0] = local_80[0] & 0xffffffffffffff00;
  piVar11 = (int *)plVar13[0x24];
  plVar14 = plVar13 + 0x24;
  if (piVar11 != (int *)plVar13[0x25]) {
LAB_02afd700:
    if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afd6f4;
    lVar10 = *param_2;
    if (lVar10 != 0) {
      piVar3 = (int *)(lVar10 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = *(long **)(piVar11 + 2);
    *(long *)(piVar11 + 2) = lVar10;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        local_6c = extraout_var;
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    goto LAB_02afd780;
  }
LAB_02afd768:
  local_6c = extraout_var;
  FUN_02bb199c(plVar14,aiStack_68,&local_6c,param_2,local_80);
LAB_02afd780:
  aiStack_68[0] = 2;
  local_80[0] = 0;
  puVar1 = (undefined8 *)(param_1 + 0x5b0);
  for (piVar11 = (int *)plVar13[0x24]; piVar11 != (int *)plVar13[0x25]; piVar11 = piVar11 + 8) {
    if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
      uVar4 = *(undefined8 *)(param_1 + 0x5b8);
      *(undefined8 *)(piVar11 + 4) = *puVar1;
      *(undefined8 *)(piVar11 + 6) = uVar4;
      goto LAB_02afd7e8;
    }
  }
  local_6c = extraout_var;
  FUN_02bb1e80(plVar14,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afd7e8:
  aiStack_68[0] = 2;
  local_80[0] = local_80[0] & 0xffffffffffffff00;
  piVar11 = (int *)plVar12[0x24];
  local_6c = extraout_var_00;
  if (piVar11 != (int *)plVar12[0x25]) {
LAB_02afd814:
    if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afd808;
    lVar10 = *param_3;
    if (lVar10 != 0) {
      piVar3 = (int *)(lVar10 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = *(long **)(piVar11 + 2);
    *(long *)(piVar11 + 2) = lVar10;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    goto LAB_02afd898;
  }
LAB_02afd880:
  FUN_02bb199c(plVar12 + 0x24,aiStack_68,&local_6c,param_3,local_80);
LAB_02afd898:
  aiStack_68[0] = 2;
  local_80[0] = local_80[0] & 0xffffffffffffff00;
  piVar11 = (int *)plVar13[0x24];
  if (piVar11 != (int *)plVar13[0x25]) {
LAB_02afd8c0:
    if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afd8b4;
    lVar10 = *param_3;
    if (lVar10 != 0) {
      piVar3 = (int *)(lVar10 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = *(long **)(piVar11 + 2);
    *(long *)(piVar11 + 2) = lVar10;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        local_6c = extraout_var_00;
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    goto LAB_02afd944;
  }
LAB_02afd92c:
  local_6c = extraout_var_00;
  FUN_02bb199c(plVar14,aiStack_68,&local_6c,param_3,local_80);
LAB_02afd944:
  aiStack_68[0] = 2;
  local_80[0] = 0;
  for (piVar11 = (int *)plVar13[0x24]; piVar11 != (int *)plVar13[0x25]; piVar11 = piVar11 + 8) {
    if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
      uVar4 = *(undefined8 *)(param_1 + 0x5b8);
      *(undefined8 *)(piVar11 + 4) = *puVar1;
      *(undefined8 *)(piVar11 + 6) = uVar4;
      lVar10 = *(long *)(param_1 + 0x420);
      local_6c = extraout_var_00;
      goto joined_r0x02afd990;
    }
  }
  local_6c = extraout_var_00;
  FUN_02bb1e80(plVar14,aiStack_68,&local_6c,local_80,puVar1);
  lVar10 = *(long *)(param_1 + 0x420);
joined_r0x02afd990:
  if (lVar10 != 0) {
    plVar14 = *(long **)(lVar10 + 0x80);
    local_80[0]._1_7_ = (uint7)(local_80[0] >> 8);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = _DAT_00000120;
      if (_DAT_00000120 != _DAT_00000128) {
LAB_02afdad8:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afdacc;
        lVar10 = *param_4;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar7 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != 0) goto LAB_02afdb50;
          lVar10 = *plVar14;
          local_6c = extraout_var;
          goto LAB_02afda98;
        }
        goto LAB_02afdb50;
      }
LAB_02afdb38:
      local_6c = extraout_var;
      FUN_02bb199c(0x120,aiStack_68,&local_6c,param_4,local_80);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = (int *)plVar14[0x24];
      if (piVar11 != (int *)plVar14[0x25]) {
LAB_02afd9d8:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afd9cc;
        lVar10 = *param_4;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        local_6c = extraout_var;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_02afda7c;
      }
LAB_02afda64:
      local_6c = extraout_var;
      FUN_02bb199c(plVar14 + 0x24,aiStack_68,&local_6c,param_4,local_80);
LAB_02afda7c:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar10 = *plVar14;
LAB_02afda98:
        (**(code **)(lVar10 + 0x10))(plVar14);
      }
    }
LAB_02afdb50:
    plVar14 = *(long **)(*(long *)(param_1 + 0x420) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = _DAT_00000120; piVar11 != _DAT_00000128; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_02afdc6c;
        }
      }
      local_6c = extraout_var;
      FUN_02bb1e80(0x120,aiStack_68,&local_6c,local_80,puVar1);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = (int *)plVar14[0x24]; piVar11 != (int *)plVar14[0x25]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          local_6c = extraout_var;
          goto LAB_02afdbd4;
        }
      }
      local_6c = extraout_var;
      FUN_02bb1e80(plVar14 + 0x24,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afdbd4:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
LAB_02afdc6c:
    plVar14 = *(long **)(*(long *)(param_1 + 0x428) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = _DAT_00000120;
      if (_DAT_00000120 != _DAT_00000128) {
LAB_02afdd90:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afdd84;
        lVar10 = *param_4;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar7 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != 0) goto LAB_02afde08;
          lVar10 = *plVar14;
          local_6c = extraout_var;
          goto LAB_02afdd50;
        }
        goto LAB_02afde08;
      }
LAB_02afddf0:
      local_6c = extraout_var;
      FUN_02bb199c(0x120,aiStack_68,&local_6c,param_4,local_80);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = (int *)plVar14[0x24];
      if (piVar11 != (int *)plVar14[0x25]) {
LAB_02afdcb4:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afdca8;
        lVar10 = *param_4;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        local_6c = extraout_var;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_02afdd34;
      }
LAB_02afdd1c:
      local_6c = extraout_var;
      FUN_02bb199c(plVar14 + 0x24,aiStack_68,&local_6c,param_4,local_80);
LAB_02afdd34:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar10 = *plVar14;
LAB_02afdd50:
        (**(code **)(lVar10 + 0x10))(plVar14);
      }
    }
LAB_02afde08:
    plVar14 = *(long **)(*(long *)(param_1 + 0x428) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = _DAT_00000120; piVar11 != _DAT_00000128; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_02afdf24;
        }
      }
      local_6c = extraout_var;
      FUN_02bb1e80(0x120,aiStack_68,&local_6c,local_80,puVar1);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = (int *)plVar14[0x24]; piVar11 != (int *)plVar14[0x25]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          local_6c = extraout_var;
          goto LAB_02afde8c;
        }
      }
      local_6c = extraout_var;
      FUN_02bb1e80(plVar14 + 0x24,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afde8c:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
LAB_02afdf24:
    plVar14 = *(long **)(*(long *)(param_1 + 0x420) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = _DAT_00000120;
      if (_DAT_00000120 != _DAT_00000128) {
LAB_02afe048:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afe03c;
        lVar10 = *param_5;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar7 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != 0) goto LAB_02afe0c0;
          lVar10 = *plVar14;
          local_6c = extraout_var_00;
          goto LAB_02afe008;
        }
        goto LAB_02afe0c0;
      }
LAB_02afe0a8:
      local_6c = extraout_var_00;
      FUN_02bb199c(0x120,aiStack_68,&local_6c,param_5,local_80);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = (int *)plVar14[0x24];
      if (piVar11 != (int *)plVar14[0x25]) {
LAB_02afdf6c:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afdf60;
        lVar10 = *param_5;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        local_6c = extraout_var_00;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_02afdfec;
      }
LAB_02afdfd4:
      local_6c = extraout_var_00;
      FUN_02bb199c(plVar14 + 0x24,aiStack_68,&local_6c,param_5,local_80);
LAB_02afdfec:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar10 = *plVar14;
LAB_02afe008:
        (**(code **)(lVar10 + 0x10))(plVar14);
      }
    }
LAB_02afe0c0:
    plVar14 = *(long **)(*(long *)(param_1 + 0x420) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = _DAT_00000120; piVar11 != _DAT_00000128; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_02afe1dc;
        }
      }
      local_6c = extraout_var_00;
      FUN_02bb1e80(0x120,aiStack_68,&local_6c,local_80,puVar1);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = (int *)plVar14[0x24]; piVar11 != (int *)plVar14[0x25]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          local_6c = extraout_var_00;
          goto LAB_02afe144;
        }
      }
      local_6c = extraout_var_00;
      FUN_02bb1e80(plVar14 + 0x24,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afe144:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
LAB_02afe1dc:
    plVar14 = *(long **)(*(long *)(param_1 + 0x428) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = _DAT_00000120;
      if (_DAT_00000120 != _DAT_00000128) {
LAB_02afe300:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afe2f4;
        lVar10 = *param_5;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar7 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != 0) goto LAB_02afe378;
          lVar10 = *plVar14;
          local_6c = extraout_var_00;
          goto LAB_02afe2c0;
        }
        goto LAB_02afe378;
      }
LAB_02afe360:
      local_6c = extraout_var_00;
      FUN_02bb199c(0x120,aiStack_68,&local_6c,param_5,local_80);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = (int *)plVar14[0x24];
      if (piVar11 != (int *)plVar14[0x25]) {
LAB_02afe224:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afe218;
        lVar10 = *param_5;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        local_6c = extraout_var_00;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_02afe2a4;
      }
LAB_02afe28c:
      local_6c = extraout_var_00;
      FUN_02bb199c(plVar14 + 0x24,aiStack_68,&local_6c,param_5,local_80);
LAB_02afe2a4:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar10 = *plVar14;
LAB_02afe2c0:
        (**(code **)(lVar10 + 0x10))(plVar14);
      }
    }
LAB_02afe378:
    plVar14 = *(long **)(*(long *)(param_1 + 0x428) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = _DAT_00000120; piVar11 != _DAT_00000128; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          lVar10 = *(long *)(param_1 + 0x3b8);
          local_6c = extraout_var_00;
          goto joined_r0x02afe55c;
        }
      }
      local_6c = extraout_var_00;
      FUN_02bb1e80(0x120,aiStack_68,&local_6c,local_80,puVar1);
      lVar10 = *(long *)(param_1 + 0x3b8);
      goto joined_r0x02afe55c;
    }
    plVar8 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    aiStack_68[0] = 2;
    local_80[0] = 0;
    for (piVar11 = (int *)plVar14[0x24]; piVar11 != (int *)plVar14[0x25]; piVar11 = piVar11 + 8) {
      if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
        uVar4 = *(undefined8 *)(param_1 + 0x5b8);
        *(undefined8 *)(piVar11 + 4) = *puVar1;
        *(undefined8 *)(piVar11 + 6) = uVar4;
        local_6c = extraout_var_00;
        goto LAB_02afe3fc;
      }
    }
    local_6c = extraout_var_00;
    FUN_02bb1e80(plVar14 + 0x24,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afe3fc:
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar10 = *(long *)(param_1 + 0x3b8);
      goto joined_r0x02afe55c;
    }
  }
  lVar10 = *(long *)(param_1 + 0x3b8);
joined_r0x02afe55c:
  if (lVar10 != 0) {
    plVar14 = *(long **)(lVar10 + 0x80);
    local_80[0]._1_7_ = (uint7)(local_80[0] >> 8);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = _DAT_00000120;
      if (_DAT_00000120 != _DAT_00000128) {
LAB_02afe598:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afe58c;
        lVar10 = *param_2;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar7 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != 0) goto LAB_02afe634;
          lVar10 = *plVar14;
          local_6c = extraout_var;
          goto LAB_02afe4f8;
        }
        goto LAB_02afe634;
      }
LAB_02afe61c:
      local_6c = extraout_var;
      FUN_02bb199c(0x120,aiStack_68,&local_6c,param_2,local_80);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = (int *)plVar14[0x24];
      if (piVar11 != (int *)plVar14[0x25]) {
LAB_02afe45c:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var)) goto LAB_02afe450;
        lVar10 = *param_2;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        local_6c = extraout_var;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_02afe4dc;
      }
LAB_02afe4c4:
      local_6c = extraout_var;
      FUN_02bb199c(plVar14 + 0x24,aiStack_68,&local_6c,param_2,local_80);
LAB_02afe4dc:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar10 = *plVar14;
LAB_02afe4f8:
        (**(code **)(lVar10 + 0x10))(plVar14);
      }
    }
LAB_02afe634:
    plVar14 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = _DAT_00000120; piVar11 != _DAT_00000128; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_02afe750;
        }
      }
      local_6c = extraout_var;
      FUN_02bb1e80(0x120,aiStack_68,&local_6c,local_80,puVar1);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = (int *)plVar14[0x24]; piVar11 != (int *)plVar14[0x25]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          local_6c = extraout_var;
          goto LAB_02afe6b8;
        }
      }
      local_6c = extraout_var;
      FUN_02bb1e80(plVar14 + 0x24,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afe6b8:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
LAB_02afe750:
    plVar14 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = _DAT_00000120;
      if (_DAT_00000120 != _DAT_00000128) {
LAB_02afe878:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afe86c;
        lVar10 = *param_3;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        if (plVar14 != (long *)0x0) {
          plVar8 = plVar14 + 10;
          do {
            iVar7 = (int)*plVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != 0) goto LAB_02afe8f4;
          lVar10 = *plVar14;
          local_6c = extraout_var_00;
          goto LAB_02afe838;
        }
        goto LAB_02afe8f4;
      }
LAB_02afe8dc:
      local_6c = extraout_var_00;
      FUN_02bb199c(0x120,aiStack_68,&local_6c,param_3,local_80);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = (ulong)local_80[0]._1_7_ << 8;
      piVar11 = (int *)plVar14[0x24];
      if (piVar11 != (int *)plVar14[0x25]) {
LAB_02afe798:
        if ((*piVar11 != 2) || (piVar11[1] != extraout_var_00)) goto LAB_02afe78c;
        lVar10 = *param_3;
        if (lVar10 != 0) {
          piVar3 = (int *)(lVar10 + 0x50);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar9 = *(long **)(piVar11 + 2);
        *(long *)(piVar11 + 2) = lVar10;
        local_6c = extraout_var_00;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
        goto LAB_02afe81c;
      }
LAB_02afe804:
      local_6c = extraout_var_00;
      FUN_02bb199c(plVar14 + 0x24,aiStack_68,&local_6c,param_3,local_80);
LAB_02afe81c:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar10 = *plVar14;
LAB_02afe838:
        (**(code **)(lVar10 + 0x10))(plVar14);
      }
    }
LAB_02afe8f4:
    plVar14 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x80);
    if (plVar14 == (long *)0x0) {
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = _DAT_00000120; piVar11 != _DAT_00000128; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          local_6c = extraout_var_00;
          goto joined_r0x02afea24;
        }
      }
      local_6c = extraout_var_00;
      FUN_02bb1e80(0x120,aiStack_68,&local_6c,local_80,puVar1);
    }
    else {
      plVar8 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      aiStack_68[0] = 2;
      local_80[0] = 0;
      for (piVar11 = (int *)plVar14[0x24]; piVar11 != (int *)plVar14[0x25]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 2) && (piVar11[1] == extraout_var_00)) {
          uVar4 = *(undefined8 *)(param_1 + 0x5b8);
          *(undefined8 *)(piVar11 + 4) = *puVar1;
          *(undefined8 *)(piVar11 + 6) = uVar4;
          local_6c = extraout_var_00;
          goto LAB_02afe978;
        }
      }
      local_6c = extraout_var_00;
      FUN_02bb1e80(plVar14 + 0x24,aiStack_68,&local_6c,local_80,puVar1);
LAB_02afe978:
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
joined_r0x02afea24:
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02afeabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      return;
    }
  }
  return;
LAB_02afd644:
  piVar11 = piVar11 + 8;
  if ((int *)plVar12[0x25] == piVar11) goto LAB_02afd6b8;
  goto LAB_02afd650;
LAB_02afd6f4:
  piVar11 = piVar11 + 8;
  if ((int *)plVar13[0x25] == piVar11) goto LAB_02afd768;
  goto LAB_02afd700;
LAB_02afd808:
  piVar11 = piVar11 + 8;
  if ((int *)plVar12[0x25] == piVar11) goto LAB_02afd880;
  goto LAB_02afd814;
LAB_02afd8b4:
  piVar11 = piVar11 + 8;
  if ((int *)plVar13[0x25] == piVar11) goto LAB_02afd92c;
  goto LAB_02afd8c0;
LAB_02afdacc:
  piVar11 = piVar11 + 8;
  if (_DAT_00000128 == piVar11) goto LAB_02afdb38;
  goto LAB_02afdad8;
LAB_02afd9cc:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x25] == piVar11) goto LAB_02afda64;
  goto LAB_02afd9d8;
LAB_02afdd84:
  piVar11 = piVar11 + 8;
  if (_DAT_00000128 == piVar11) goto LAB_02afddf0;
  goto LAB_02afdd90;
LAB_02afdca8:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x25] == piVar11) goto LAB_02afdd1c;
  goto LAB_02afdcb4;
LAB_02afe03c:
  piVar11 = piVar11 + 8;
  if (_DAT_00000128 == piVar11) goto LAB_02afe0a8;
  goto LAB_02afe048;
LAB_02afdf60:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x25] == piVar11) goto LAB_02afdfd4;
  goto LAB_02afdf6c;
LAB_02afe2f4:
  piVar11 = piVar11 + 8;
  if (_DAT_00000128 == piVar11) goto LAB_02afe360;
  goto LAB_02afe300;
LAB_02afe218:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x25] == piVar11) goto LAB_02afe28c;
  goto LAB_02afe224;
LAB_02afe58c:
  piVar11 = piVar11 + 8;
  if (_DAT_00000128 == piVar11) goto LAB_02afe61c;
  goto LAB_02afe598;
LAB_02afe450:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x25] == piVar11) goto LAB_02afe4c4;
  goto LAB_02afe45c;
LAB_02afe86c:
  piVar11 = piVar11 + 8;
  if (_DAT_00000128 == piVar11) goto LAB_02afe8dc;
  goto LAB_02afe878;
LAB_02afe78c:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x25] == piVar11) goto LAB_02afe804;
  goto LAB_02afe798;
}


