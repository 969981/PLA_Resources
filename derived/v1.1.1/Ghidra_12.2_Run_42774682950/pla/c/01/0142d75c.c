/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142d75c; name: FUN_0142d75c
 */


void FUN_0142d75c(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *local_f8;
  char *local_f0;
  char *pcStack_e8;
  char *local_e0;
  long *local_d8;
  char *local_d0 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  long *local_38;
  
  local_d0[0] = (char *)0x53f994d63728786d;
  local_d0[1] = "pane_L_list_base_00_N_context";
  local_d0[2] = (char *)0x1d;
  local_d0[3] = (char *)0x91fea366bc24756a;
  local_d0[4] = "pane_L_list_base_01_N_context";
  local_d0[5] = (char *)0x1d;
  local_d0[6] = (char *)0x8cdfbc71d4678d33;
  local_d0[7] = "pane_L_list_base_02_N_context";
  local_90 = 0x1d;
  uStack_88 = 0x70855bfb5bec4448;
  local_80 = "pane_L_list_base_03_N_context";
  uStack_78 = 0x1d;
  local_70 = 0x3bdd285d85005409;
  pcStack_68 = "pane_L_list_base_04_N_context";
  local_60 = 0x1d;
  uStack_58 = 0x27248d3ce9d6fec6;
  local_50 = "pane_L_list_base_05_N_context";
  uStack_48 = 0x1d;
  lVar9 = *(long *)(*(long *)(param_1 + 0x5b0) + (ulong)param_2 * 8 + 0x70);
  if (lVar9 != 0) {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x70) + 0x60);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_f0 = (char *)0x8ad48bca42a4661b;
    pcStack_e8 = "context_menu_00";
    local_e0 = (char *)0xf;
    local_d8 = (long *)0x0;
    lVar5 = FUN_00d472a0(param_1 + 0x180,&local_f0);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (lVar5 != 0) {
      plVar6 = *(long **)(param_1 + 0x2c8);
      if (plVar6 != (long *)0x0) {
        plVar10 = plVar6 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)*plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10 = (long *)plVar6[0x39];
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar1 = plVar6 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      uVar7 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
      if (((uVar7 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (plVar10 == (long *)0x0) {
          local_38 = (long *)0x0;
          FUN_0142dbdc(param_1,0,0,&local_38);
          local_38 = (long *)0x0;
          FUN_0142dbdc(param_1,1,1,&local_38);
          local_38 = (long *)0x0;
          FUN_0142dbdc(param_1,2,2,&local_38);
        }
        else {
          plVar6 = plVar10 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = (int)*plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_38 = plVar10;
          FUN_0142dbdc(param_1,0,0,&local_38);
          if (plVar10 != (long *)0x0) {
            plVar1 = plVar10 + 10;
            do {
              iVar4 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = (int)*plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_38 = plVar10;
          FUN_0142dbdc(param_1,1,1,&local_38);
          if (plVar10 != (long *)0x0) {
            plVar1 = plVar10 + 10;
            do {
              iVar4 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = (int)*plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_38 = plVar10;
          FUN_0142dbdc(param_1,2,2,&local_38);
          if (plVar10 != (long *)0x0) {
            plVar6 = plVar10 + 10;
            do {
              iVar4 = (int)*plVar6 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *(int *)plVar6 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        uVar7 = (ulong)*(byte *)(param_1 + 0x804);
        local_f0 = local_d0[uVar7 * 3];
        pcStack_e8 = local_d0[uVar7 * 3 + 1];
        local_e0 = local_d0[uVar7 * 3 + 2];
        uVar8 = 3;
      }
      else {
        local_f8 = plVar10;
        if (plVar10 == (long *)0x0) {
          FUN_0142dbdc(param_1,0,2,&local_f8);
        }
        else {
          plVar6 = plVar10 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = (int)*plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_0142dbdc(param_1,0,2,&local_f8);
          if (plVar10 != (long *)0x0) {
            plVar6 = plVar10 + 10;
            do {
              iVar4 = (int)*plVar6 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *(int *)plVar6 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        uVar7 = (ulong)*(byte *)(param_1 + 0x804);
        local_f0 = local_d0[uVar7 * 3];
        pcStack_e8 = local_d0[uVar7 * 3 + 1];
        local_e0 = local_d0[uVar7 * 3 + 2];
        uVar8 = 1;
      }
      local_d8 = (long *)0x0;
      FUN_0280a8d0(lVar5,&local_f0,uVar8);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (plVar10 != (long *)0x0) {
        plVar6 = plVar10 + 10;
        do {
          iVar4 = (int)*plVar6 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    FUN_00d42438(param_1,1,1);
  }
  return;
}


