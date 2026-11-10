/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140c404; name: FUN_0140c404
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140c404(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  long *plVar15;
  long *local_4a0;
  undefined8 local_498;
  long *local_490;
  undefined1 *local_488;
  char *pcStack_480;
  size_t local_478;
  long *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  
  *(undefined8 *)(param_1 + 0x5b0) = param_2;
  FUN_0140c960(&local_468,*(undefined8 *)(param_1 + 8));
  uVar9 = local_468;
  local_468 = 0;
  lVar10 = *(long *)(param_1 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5b8) = uVar9;
  if (lVar10 != 0) {
    FUN_0140f46c(param_1 + 0x5c0);
  }
  *(undefined8 *)(param_1 + 0x5c8) = uStack_458;
  *(undefined8 *)(param_1 + 0x5d0) = local_450;
  *(undefined8 *)(param_1 + 0x5c0) = local_460;
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar3 = *(uint *)(lVar10 + 400);
  if (uVar3 != 0) {
    uVar12 = 0;
    piVar11 = (int *)(lVar10 + 0x20);
    do {
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar11 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar11 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 == &DAT_304928236d5bcabe) && (*piVar11 == 10)) {
        if ((uint)uVar12 < 0x10) {
          plVar15 = *(long **)(piVar11 + -2);
          if (plVar15 != (long *)0x0) {
            lVar10 = plVar15[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar9;
            }
            piVar11 = (int *)(lVar10 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar6) {
                *piVar11 = *piVar11 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          plVar15 = (long *)0x0;
        }
        plVar8 = (long *)plVar15[0xd];
        goto joined_r0x0140c4d0;
      }
      uVar12 = uVar12 + 1;
      piVar11 = piVar11 + 6;
    } while (uVar3 != uVar12);
  }
  plVar15 = (long *)0x0;
  plVar8 = _DAT_00000068;
joined_r0x0140c4d0:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar15 != (long *)0x0) {
    lVar10 = plVar15[0xb];
    piVar11 = (int *)(lVar10 + 0xc);
    do {
      iVar14 = *piVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  memset(&local_468,0,0x400);
  local_488 = (undefined1 *)0xe78094384a19c962;
  pcStack_480 = "pane_T_unknown_00";
  param_1 = param_1 + 0x180;
  local_478 = 0x11;
  local_470 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_498 = 0x31afd2643b2c8c51;
  local_490 = plVar8;
  FUN_011845f4(param_1,&local_488,&local_490,&local_498,10);
  if (local_490 != (long *)0x0) {
    plVar15 = local_490 + 10;
    do {
      iVar14 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*local_490 + 0x10))();
    }
  }
  if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 0x20))();
  }
  plVar15 = plVar8 + 10;
  iVar14 = 0;
  if (plVar8 == (long *)0x0) {
    do {
      snprintf((char *)&local_468,0x400,"pane_L_list_task_plate_%02d_T_undecided_00",iVar14);
      local_478 = strlen((char *)&local_468);
      local_488 = &DAT_cbf29ce484222645;
      if ((byte)local_468 != 0) {
        local_488 = &DAT_cbf29ce484222645;
        pbVar13 = (byte *)((ulong)&local_468 | 1);
        bVar4 = (byte)local_468;
        do {
          local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar4 != 0);
      }
      local_470 = (long *)0x0;
      local_4a0 = (long *)0x0;
      local_498 = 0x3f5c65dd850debc;
      pcStack_480 = (char *)&local_468;
      FUN_011845f4(param_1,&local_488,&local_4a0,&local_498,10);
      if (local_4a0 != (long *)0x0) {
        plVar1 = local_4a0 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_4a0 + 0x10))();
        }
      }
      if (local_470 != (long *)0x0) {
        (**(code **)(*local_470 + 0x20))();
      }
      snprintf((char *)&local_468,0x400,"pane_L_list_task_plate_%02d_L_icon_b_00_N_icon_b_00",iVar14
              );
      lVar10 = FUN_01306260(param_1,&local_468);
      iVar14 = iVar14 + 1;
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
    } while (iVar14 != 10);
  }
  else {
    do {
      snprintf((char *)&local_468,0x400,"pane_L_list_task_plate_%02d_T_undecided_00",iVar14);
      local_478 = strlen((char *)&local_468);
      local_488 = &DAT_cbf29ce484222645;
      if ((byte)local_468 != 0) {
        local_488 = &DAT_cbf29ce484222645;
        pbVar13 = (byte *)((ulong)&local_468 | 1);
        bVar4 = (byte)local_468;
        do {
          local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar4 != 0);
      }
      local_470 = (long *)0x0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      local_498 = 0x3f5c65dd850debc;
      local_4a0 = plVar8;
      pcStack_480 = (char *)&local_468;
      FUN_011845f4(param_1,&local_488,&local_4a0,&local_498,10);
      if (local_4a0 != (long *)0x0) {
        plVar1 = local_4a0 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_4a0 + 0x10))();
        }
      }
      if (local_470 != (long *)0x0) {
        (**(code **)(*local_470 + 0x20))();
      }
      snprintf((char *)&local_468,0x400,"pane_L_list_task_plate_%02d_L_icon_b_00_N_icon_b_00",iVar14
              );
      lVar10 = FUN_01306260(param_1,&local_468);
      iVar14 = iVar14 + 1;
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
    } while (iVar14 != 10);
  }
  if (plVar8 != (long *)0x0) {
    do {
      iVar14 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


