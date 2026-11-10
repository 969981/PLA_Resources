/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d47ed0; name: FUN_00d47ed0
 */


void FUN_00d47ed0(long param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  long *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long local_90 [12];
  
  local_a0 = (code *)0x0;
  local_98 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x20));
  if (iVar5 == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_b8 = *(long **)(param_1 + 0x20);
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0280a488(uVar6,0,&local_b8);
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x28));
  if (iVar5 == 0) {
    iVar5 = 1;
    pcVar9 = local_a8;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    local_b8 = *(long **)(param_1 + 0x28);
    if (local_b8 != (long *)0x0) {
      plVar1 = local_b8 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0280a488(uVar6,1,&local_b8);
    if (local_b8 != (long *)0x0) {
      plVar1 = local_b8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x30));
    if (iVar5 == 0) {
      iVar5 = 2;
      pcVar9 = local_a8;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      local_b8 = *(long **)(param_1 + 0x30);
      if (local_b8 != (long *)0x0) {
        plVar1 = local_b8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_0280a488(uVar6,2,&local_b8);
      if (local_b8 != (long *)0x0) {
        plVar1 = local_b8 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x38));
      if (iVar5 == 0) {
        iVar5 = 3;
        pcVar9 = local_a8;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        local_b8 = *(long **)(param_1 + 0x38);
        if (local_b8 != (long *)0x0) {
          plVar1 = local_b8 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_0280a488(uVar6,3,&local_b8);
        if (local_b8 != (long *)0x0) {
          plVar1 = local_b8 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
        }
        iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x40));
        if (iVar5 == 0) {
          iVar5 = 4;
          pcVar9 = local_a8;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          local_b8 = *(long **)(param_1 + 0x40);
          if (local_b8 != (long *)0x0) {
            plVar1 = local_b8 + 10;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_0280a488(uVar6,4,&local_b8);
          if (local_b8 != (long *)0x0) {
            plVar1 = local_b8 + 10;
            do {
              iVar5 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*local_b8 + 0x10))();
            }
          }
          iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x48));
          if (iVar5 == 0) {
            iVar5 = 5;
            pcVar9 = local_a8;
          }
          else {
            uVar6 = *(undefined8 *)(param_1 + 0x18);
            local_b8 = *(long **)(param_1 + 0x48);
            if (local_b8 != (long *)0x0) {
              plVar1 = local_b8 + 10;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_0280a488(uVar6,5,&local_b8);
            if (local_b8 != (long *)0x0) {
              plVar1 = local_b8 + 10;
              do {
                iVar5 = (int)*plVar1 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = iVar5;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 == 0) {
                (**(code **)(*local_b8 + 0x10))();
              }
            }
            iVar5 = FUN_02c30040(*(undefined8 *)(param_1 + 0x50));
            if (iVar5 == 0) {
              iVar5 = 6;
              pcVar9 = local_a8;
            }
            else {
              uVar6 = *(undefined8 *)(param_1 + 0x18);
              local_b8 = *(long **)(param_1 + 0x50);
              if (local_b8 != (long *)0x0) {
                plVar1 = local_b8 + 10;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_0280a488(uVar6,6,&local_b8);
              if (local_b8 != (long *)0x0) {
                plVar1 = local_b8 + 10;
                do {
                  lVar10 = *plVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = (int)lVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((int)lVar10 == 1) {
                  (**(code **)(*local_b8 + 0x10))();
                }
              }
              iVar5 = 7;
              pcVar9 = local_a8;
            }
          }
        }
      }
    }
  }
  if (pcVar9 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar9)(local_90);
  }
  local_b0 = &LAB_00d48898;
  local_a8 = FUN_00d488d8;
  local_a0 = FUN_00d488dc;
  local_98 = &LAB_00d488e8;
  lVar10 = *(long *)(param_1 + 0x18);
  pcVar9 = *(code **)(lVar10 + 1000);
  local_90[0] = param_1;
  if (pcVar9 == (code *)0x0) {
LAB_00d481f8:
    (*local_a0)(local_90,lVar10 + 0x400);
    *(code **)(lVar10 + 1000) = local_a8;
    *(undefined1 **)(lVar10 + 0x3f8) = local_98;
    *(code **)(lVar10 + 0x3f0) = local_a0;
    *(undefined8 *)(lVar10 + 0x3e0) = local_b0;
  }
  else {
    *(undefined8 *)(lVar10 + 0x3f0) = 0;
    *(undefined8 *)(lVar10 + 0x3f8) = 0;
    *(undefined8 *)(lVar10 + 0x3e0) = 0;
    *(undefined8 *)(lVar10 + 1000) = 0;
    (*pcVar9)(lVar10 + 0x400);
    if (local_a0 != (code *)0x0) goto LAB_00d481f8;
  }
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),0);
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),1);
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),2);
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),3);
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),4);
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),5);
  FUN_0280a6bc(*(undefined8 *)(param_1 + 0x18),6);
  if (*(char *)(param_1 + 0x10c) != '\0') {
    sVar2 = *(short *)(param_1 + 0x10e);
    uVar8 = iVar5 - 1;
    if ((uint)(int)sVar2 <= uVar8 && (int)sVar2 != 0xffffffff) {
      uVar8 = (uint)sVar2;
    }
    FUN_0280a5d8(*(undefined8 *)(param_1 + 0x18),uVar8,&DAT_03a78378,1);
  }
  if (*(int *)(param_1 + 0xe0) == 4) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = 3;
    goto LAB_00d482c4;
  }
  switch(*(int *)(param_1 + 0xe0)) {
  case 0:
    FUN_0280a8d0(*(undefined8 *)(param_1 + 0x18),param_1 + 0xe8,iVar5);
    goto switchD_00d48384_caseD_4;
  case 1:
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = 0;
    break;
  case 2:
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = 1;
    break;
  case 3:
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = 2;
    break;
  default:
    goto switchD_00d48384_caseD_4;
  case 5:
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = 4;
    break;
  case 6:
    FUN_0280b114(*(undefined8 *)(param_1 + 0x18),param_1 + 0x120,iVar5);
    goto switchD_00d48384_caseD_4;
  }
LAB_00d482c4:
  FUN_0280b204(uVar6,uVar7,*(undefined4 *)(param_1 + 0x108),iVar5);
switchD_00d48384_caseD_4:
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_0280bf40(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x110));
  pcVar9 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar9)(local_90);
  }
  return;
}


