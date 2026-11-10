/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c5b34; name: FUN_013c5b34
 */


void FUN_013c5b34(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *local_68;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 0x70) = param_3;
    lVar7 = FUN_0139a0d0(param_2,"View_Top");
    *(long *)(param_1 + 0x90) = lVar7;
    if (lVar7 != 0) {
      local_60 = (undefined1 *)0xf985fd19ad6ea9c6;
      pcStack_58 = "ViewMysteryGiftTop";
      local_50 = 0x12;
      local_48 = (long *)0x0;
      lVar7 = FUN_013c751c(param_2,&local_60);
      *(long *)(param_1 + 0x98) = lVar7;
      if (lVar7 != 0) {
        local_60 = (undefined1 *)0x47c814f226086f26;
        pcStack_58 = "ViewMysteryGiftMessage";
        local_50 = 0x16;
        local_48 = (long *)0x0;
        lVar7 = FUN_013c7600(param_2,&local_60);
        *(long *)(param_1 + 0xa0) = lVar7;
        if (lVar7 != 0) {
          local_60 = (undefined1 *)0xcf9a15b48dd2e9a4;
          pcStack_58 = "ViewMysteryGiftRecieveList";
          local_50 = 0x1a;
          local_48 = (long *)0x0;
          lVar7 = FUN_013c76e4(param_2,&local_60);
          *(long *)(param_1 + 0xa8) = lVar7;
          if (lVar7 != 0) {
            local_60 = (undefined1 *)0xdec306d36230c11e;
            pcStack_58 = "ViewMysteryGiftResult";
            local_50 = 0x15;
            local_48 = (long *)0x0;
            lVar7 = FUN_013c77c8(param_2,&local_60);
            *(long *)(param_1 + 0xb0) = lVar7;
            if (lVar7 != 0) {
              local_60 = (undefined1 *)0xb9380a785d014999;
              pcStack_58 = "ViewMysteryGiftHistory";
              local_50 = 0x16;
              local_48 = (long *)0x0;
              lVar7 = FUN_013c78ac(param_2,&local_60);
              *(long *)(param_1 + 0xb8) = lVar7;
              if (lVar7 != 0) {
                local_60 = &DAT_f736fd1edafce6e;
                pcStack_58 = "SystemMessageView";
                local_50 = 0x11;
                local_48 = (long *)0x0;
                lVar7 = FUN_011994dc(param_2,&local_60);
                if (local_48 != (long *)0x0) {
                  (**(code **)(*local_48 + 0x20))();
                }
                if (lVar7 != 0) {
                  local_60 = (undefined1 *)0x9bf1d120b9d1525;
                  pcStack_58 = "common/mystery.dat";
                  local_50 = 0x12;
                  local_48 = (long *)0x0;
                  FUN_00d37bb4(&local_38,*(undefined8 *)(param_2 + 0xb0),&local_60,10);
                  plVar12 = (long *)local_38[0xd];
                  if (plVar12 != (long *)0x0) {
                    plVar1 = plVar12 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar6) {
                        *(int *)plVar1 = (int)*plVar1 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  if (local_38 != (long *)0x0) {
                    lVar11 = local_38[0xb];
                    piVar2 = (int *)(lVar11 + 0xc);
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
                      *(undefined8 *)(lVar11 + 0x18) = 0;
                      (**(code **)(*local_38 + 0x20))();
                    }
                  }
                  if (local_48 != (long *)0x0) {
                    (**(code **)(*local_48 + 0x20))();
                  }
                  if (plVar12 != (long *)0x0) {
                    uVar10 = *(undefined8 *)(param_1 + 8);
                    plVar1 = plVar12 + 10;
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar6) {
                        *(int *)plVar1 = (int)*plVar1 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    local_68 = plVar12;
                    FUN_027bc3ac(param_1 + 0xc0,uVar10,&local_68,lVar7);
                    if (local_68 != (long *)0x0) {
                      plVar8 = local_68 + 10;
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
                        (**(code **)(*local_68 + 0x10))();
                      }
                    }
                    local_60 = &DAT_e2c06acab97c29c2;
                    pcStack_58 = "CommonOptionBar";
                    local_50 = 0xf;
                    local_48 = (long *)0x0;
                    lVar7 = FUN_0118c80c(param_2,&local_60);
                    if (local_48 != (long *)0x0) {
                      (**(code **)(*local_48 + 0x20))();
                    }
                    *(long *)(param_1 + 0x270) = lVar7;
                    if (lVar7 != 0) {
                      *(undefined1 *)(param_1 + 0x278) = 1;
                      local_60 = (undefined1 *)CONCAT44(local_60._4_4_,0x40);
                      lVar7 = FUN_00a246f0(&local_38,*(undefined8 *)(param_1 + 8),&local_60);
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
                      plVar8 = *(long **)(param_1 + 0x280);
                      *(undefined8 *)(param_1 + 0x280) = 0;
                      if (plVar8 != (long *)0x0) {
                        plVar9 = plVar8 + 10;
                        do {
                          iVar4 = (int)*plVar9 + -1;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                          if (bVar6) {
                            *(int *)plVar9 = iVar4;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar4 == 0) {
                          (**(code **)(*plVar8 + 0x10))();
                        }
                      }
                      *(long *)(param_1 + 0x280) = lVar7;
                      local_60 = (undefined1 *)0x6a1723c0e3636df8;
                      FUN_02c2e7d0(plVar12,&local_60,lVar7);
                      local_60 = (undefined1 *)0xc4dbc279d356203b;
                      pcStack_58 = "common/net.dat";
                      local_50 = 0xe;
                      local_48 = (long *)0x0;
                      FUN_00d37bb4(&local_38,*(undefined8 *)(param_2 + 0xb0),&local_60,10);
                      plVar8 = (long *)local_38[0xd];
                      if (plVar8 != (long *)0x0) {
                        plVar9 = plVar8 + 10;
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                          if (bVar6) {
                            *(int *)plVar9 = (int)*plVar9 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      if (local_38 != (long *)0x0) {
                        lVar7 = local_38[0xb];
                        piVar2 = (int *)(lVar7 + 0xc);
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
                          *(undefined8 *)(lVar7 + 0x18) = 0;
                          (**(code **)(*local_38 + 0x20))();
                        }
                      }
                      if (local_48 != (long *)0x0) {
                        (**(code **)(*local_48 + 0x20))();
                      }
                      if (plVar8 != (long *)0x0) {
                        local_60 = (undefined1 *)CONCAT44(local_60._4_4_,0x40);
                        lVar7 = FUN_00a246f0(&local_38,*(undefined8 *)(param_1 + 8),&local_60);
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
                        plVar9 = *(long **)(param_1 + 0x288);
                        *(undefined8 *)(param_1 + 0x288) = 0;
                        if (plVar9 != (long *)0x0) {
                          plVar3 = plVar9 + 10;
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
                            (**(code **)(*plVar9 + 0x10))();
                          }
                        }
                        *(long *)(param_1 + 0x288) = lVar7;
                        local_60 = (undefined1 *)0xc988bb67d124c21f;
                        FUN_02c2e7d0(plVar8,&local_60,lVar7);
                        *(undefined4 *)(param_1 + 0x78) = 1;
                        lVar7 = 0;
                        if (*(long *)(param_1 + 0x90) != 0) {
                          lVar7 = *(long *)(param_1 + 0x90) + 0x5b0;
                        }
                        *(long *)(param_1 + 0x88) = lVar7;
                        plVar9 = plVar8 + 10;
                        do {
                          iVar4 = (int)*plVar9 + -1;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                          if (bVar6) {
                            *(int *)plVar9 = iVar4;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar4 == 0) {
                          (**(code **)(*plVar8 + 0x10))(plVar8);
                        }
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
                          (**(code **)(*plVar12 + 0x10))(plVar12);
                        }
                        return;
                      }
                    }
                  }
                }
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


