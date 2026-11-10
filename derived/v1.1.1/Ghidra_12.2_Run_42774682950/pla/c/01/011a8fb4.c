/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a8fb4; name: FUN_011a8fb4
 */


void FUN_011a8fb4(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined1 local_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_58;
  
  local_58 = *(undefined8 *)(param_1 + 8);
  FUN_011a96b0(&local_a0,local_58,&local_58);
  plVar9 = local_a0;
  local_a0 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x5c0);
  *(long **)(param_1 + 0x5c0) = plVar9;
  if (lVar8 != 0) {
    FUN_011abdbc(param_1 + 0x5c8);
  }
  lVar8 = 0;
  *(long **)(param_1 + 0x5d0) = local_90;
  *(long **)(param_1 + 0x5d8) = local_88;
  *(long **)(param_1 + 0x5c8) = local_98;
  local_78 = 0;
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_70 = 0;
  lStack_68 = 0;
  do {
    lVar10 = *(long *)(param_1 + 0x5c0);
    plVar9 = *(long **)(param_1 + 0x5b8);
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_011a9484:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar11 = plVar9[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_011a9484;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = lVar10 + lVar8 * 0x500;
    plVar7 = *(long **)(lVar10 + 0x148);
    *(long **)(lVar10 + 0x148) = plVar9;
    if (plVar7 == (long *)0x0) {
LAB_011a90f0:
      if (plVar9 == (long *)0x0) goto LAB_011a9110;
LAB_011a90f4:
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 != 0) goto LAB_011a9110;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
      plVar9 = *(long **)(param_1 + 0x2c8);
      plVar7 = local_a0;
    }
    else {
      lVar10 = plVar7[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 != 0) goto LAB_011a90f0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
      if (plVar9 != (long *)0x0) goto LAB_011a90f4;
LAB_011a9110:
      plVar9 = *(long **)(param_1 + 0x2c8);
      plVar7 = local_a0;
    }
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_a0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar3 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    plVar7 = local_98;
    local_98 = (long *)0x0;
    local_a0 = plVar9;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    plVar9 = local_90;
    local_90 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    FUN_00d37c90(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
    plVar9 = local_88;
    plVar7 = (long *)local_a8[0xd];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_88 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_88 = plVar7;
    if (local_a8 == (long *)0x0) {
LAB_011a921c:
      plVar9 = *(long **)(param_1 + 0x508);
      plVar7 = local_80;
    }
    else {
      lVar10 = local_a8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 != 0) goto LAB_011a921c;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
      plVar9 = *(long **)(param_1 + 0x508);
      plVar7 = local_80;
    }
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_80 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar3 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    local_78 = 0;
    lStack_68 = *(long *)(param_1 + 0x4c8) + lVar8 * 0xc0;
    local_70 = 0;
    local_80 = plVar9;
    FUN_02855244(*(long *)(param_1 + 0x5c0) + lVar8 * 0x500,&local_a0,&DAT_043be0d0 + lVar8 * 0x19);
    lVar8 = lVar8 + 1;
    if (lVar8 == 6) {
      if (local_80 != (long *)0x0) {
        plVar9 = local_80 + 10;
        do {
          iVar3 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      if (local_88 != (long *)0x0) {
        plVar9 = local_88 + 10;
        do {
          iVar3 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      if (local_90 != (long *)0x0) {
        plVar9 = local_90 + 10;
        do {
          iVar3 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      if (local_98 != (long *)0x0) {
        lVar8 = local_98[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
      if (local_a0 != (long *)0x0) {
        plVar9 = local_a0 + 10;
        do {
          iVar3 = (int)*plVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
      return;
    }
  } while( true );
}


