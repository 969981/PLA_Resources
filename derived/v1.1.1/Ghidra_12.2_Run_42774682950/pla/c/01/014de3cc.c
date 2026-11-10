/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014de3cc; name: FUN_014de3cc
 */


void FUN_014de3cc(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *local_60;
  long *local_58;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 != 0) {
    local_50 = &DAT_1e5b5b2eb6bc8833;
    pcStack_48 = "ViewTop";
    local_40 = 7;
    local_38 = (long *)0x0;
    lVar7 = FUN_014df0a0(param_2,&local_50);
    *(long *)(param_1 + 0x90) = lVar7;
    if (lVar7 != 0) {
      local_50 = (undefined1 *)0x9b910bcb9afb6cb6;
      pcStack_48 = "ViewAlert";
      local_40 = 9;
      local_38 = (long *)0x0;
      lVar7 = FUN_014df21c(param_2,&local_50);
      *(long *)(param_1 + 0x98) = lVar7;
      if (lVar7 != 0) {
        local_50 = (undefined1 *)0x9edfbe3c7ea19458;
        pcStack_48 = "ViewInMatching";
        local_40 = 0xe;
        local_38 = (long *)0x0;
        lVar7 = FUN_014df300(param_2,&local_50);
        *(long *)(param_1 + 0xa0) = lVar7;
        if (lVar7 != 0) {
          local_50 = &DAT_e2c06acab97c29c2;
          pcStack_48 = "CommonOptionBar";
          local_40 = 0xf;
          local_38 = (long *)0x0;
          lVar7 = FUN_0118c80c(param_2,&local_50);
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          *(long *)(param_1 + 0xa8) = lVar7;
          if (lVar7 != 0) {
            *(undefined1 *)(param_1 + 0xb0) = 0;
            local_50 = &DAT_f736fd1edafce6e;
            pcStack_48 = "SystemMessageView";
            local_40 = 0x11;
            local_38 = (long *)0x0;
            lVar7 = FUN_011994dc(param_2,&local_50);
            if (local_38 != (long *)0x0) {
              (**(code **)(*local_38 + 0x20))();
            }
            if (lVar7 != 0) {
              local_50 = (undefined1 *)0xc4dbc279d356203b;
              pcStack_48 = "common/net.dat";
              local_40 = 0xe;
              local_38 = (long *)0x0;
              FUN_00d37bb4(&local_58,*(undefined8 *)(param_2 + 0xb0),&local_50,10);
              plVar11 = (long *)local_58[0xd];
              if (plVar11 != (long *)0x0) {
                plVar1 = plVar11 + 10;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if (local_58 != (long *)0x0) {
                lVar10 = local_58[0xb];
                piVar2 = (int *)(lVar10 + 0xc);
                do {
                  iVar4 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 + -1 == 0) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*local_58 + 0x20))();
                }
              }
              if (local_38 != (long *)0x0) {
                (**(code **)(*local_38 + 0x20))();
              }
              if (plVar11 != (long *)0x0) {
                uVar9 = *(undefined8 *)(param_1 + 8);
                plVar1 = plVar11 + 10;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                local_60 = plVar11;
                FUN_027bc3ac(param_1 + 0xc0,uVar9,&local_60,lVar7);
                if (local_60 != (long *)0x0) {
                  plVar8 = local_60 + 10;
                  do {
                    iVar4 = (int)*plVar8 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                    if (bVar6) {
                      *(int *)plVar8 = iVar4;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar4 == 0) {
                    (**(code **)(*local_60 + 0x10))();
                  }
                }
                local_50 = (undefined1 *)CONCAT44(local_50._4_4_,0x20);
                lVar7 = FUN_00a246f0(&local_58,*(undefined8 *)(param_1 + 8),&local_50);
                if (lVar7 != 0) {
                  piVar2 = (int *)(lVar7 + 0x50);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar6) {
                      *piVar2 = *piVar2 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                plVar8 = *(long **)(param_1 + 0x270);
                *(undefined8 *)(param_1 + 0x270) = 0;
                if (plVar8 != (long *)0x0) {
                  plVar3 = plVar8 + 10;
                  do {
                    iVar4 = (int)*plVar3 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar6) {
                      *(int *)plVar3 = iVar4;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar4 == 0) {
                    (**(code **)(*plVar8 + 0x10))();
                  }
                }
                *(long *)(param_1 + 0x270) = lVar7;
                local_50 = (undefined1 *)0xc988bb67d124c21f;
                FUN_02c2e7d0(plVar11,&local_50,lVar7);
                lVar7 = 0;
                if (*(long *)(param_1 + 0x90) != 0) {
                  lVar7 = *(long *)(param_1 + 0x90) + 0x5b0;
                }
                *(undefined4 *)(param_1 + 0x78) = 0;
                *(long *)(param_1 + 0x88) = lVar7;
                do {
                  iVar4 = (int)*plVar1 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = iVar4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


