/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01407c2c; name: FUN_01407c2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01407c2c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  long *local_4c0;
  long *local_4b8;
  long *local_4b0;
  long *local_4a8;
  long *local_4a0;
  undefined8 local_498;
  long *local_490;
  undefined1 *local_488;
  byte *pbStack_480;
  size_t local_478;
  long *local_470;
  byte local_468 [1032];
  
  *(undefined8 *)(param_1 + 0x5b0) = param_2;
  lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar6 = *(uint *)(lVar12 + 400);
  if (uVar6 != 0) {
    uVar14 = 0;
    piVar13 = (int *)(lVar12 + 0x20);
    do {
      puVar4 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar13 + -4) != 0) {
        puVar4 = (undefined8 *)(*(long *)(piVar13 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar4 == &DAT_304928236d5bcabe) && (*piVar13 == 10)) {
        if ((uint)uVar14 < 0x10) {
          plVar16 = *(long **)(piVar13 + -2);
          if (plVar16 != (long *)0x0) {
            lVar12 = plVar16[0xb];
            if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar12 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
              *(undefined8 *)(lVar12 + 0x10) = uVar11;
            }
            piVar13 = (int *)(lVar12 + 0xc);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar9) {
                *piVar13 = *piVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
        }
        else {
          plVar16 = (long *)0x0;
        }
        plVar10 = (long *)plVar16[0xd];
        goto joined_r0x01407cbc;
      }
      uVar14 = uVar14 + 1;
      piVar13 = piVar13 + 6;
    } while (uVar6 != uVar14);
  }
  plVar16 = (long *)0x0;
  plVar10 = _DAT_00000068;
joined_r0x01407cbc:
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (plVar16 != (long *)0x0) {
    lVar12 = plVar16[0xb];
    piVar13 = (int *)(lVar12 + 0xc);
    do {
      iVar5 = *piVar13;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar9) {
        *piVar13 = iVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar12 = param_1 + 0x180;
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  memset(local_468,0,0x400);
  local_488 = (undefined1 *)0xebfc2580c95df846;
  pbStack_480 = (byte *)0x39ac8bc;
  local_478 = 0x15;
  local_470 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  local_498 = 0xbbb02548be0f8d89;
  local_490 = plVar10;
  FUN_011845f4(lVar12,&local_488,&local_490,&local_498,10);
  if (local_490 != (long *)0x0) {
    plVar1 = local_490 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_490 + 0x10))();
    }
  }
  if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 0x20))();
  }
  lVar17 = 0;
  plVar1 = plVar16 + 10;
  plVar2 = plVar10 + 10;
  pbVar18 = (byte *)((ulong)local_468 | 1);
  do {
    snprintf((char *)local_468,0x400,"pane_%s%02d_%s","L_info_area_",(int)lVar17,"T_h_areaname_00");
    if (plVar16 != (long *)0x0) {
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    local_4a0 = plVar16;
    local_478 = strlen((char *)local_468);
    local_488 = &DAT_cbf29ce484222645;
    if (local_468[0] != 0) {
      local_488 = &DAT_cbf29ce484222645;
      pbVar15 = pbVar18;
      bVar7 = local_468[0];
      do {
        local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar7 != 0);
    }
    local_470 = (long *)0x0;
    if (plVar10 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      plVar19 = plVar10;
    }
    local_498 = 0x1e0b5b1836ed2624;
    local_4a8 = plVar10;
    pbStack_480 = local_468;
    FUN_014082d4(&local_4a0,&local_488,&local_4a8,&local_498,&DAT_03a7b858 + lVar17 * 8);
    if (plVar19 != (long *)0x0) {
      plVar3 = plVar19 + 10;
      do {
        iVar5 = (int)*plVar3 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *(int *)plVar3 = iVar5;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    if (local_4a0 != (long *)0x0) {
      plVar19 = local_4a0 + 10;
      do {
        iVar5 = (int)*plVar19 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar9) {
          *(int *)plVar19 = iVar5;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_4a0 + 0x10))();
      }
    }
    snprintf((char *)local_468,0x400,"pane_%s%02d_%s","L_info_area_",(int)lVar17,"T_h_nih_00");
    local_478 = strlen((char *)local_468);
    local_488 = &DAT_cbf29ce484222645;
    if (local_468[0] != 0) {
      local_488 = &DAT_cbf29ce484222645;
      pbVar15 = pbVar18;
      bVar7 = local_468[0];
      do {
        local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar7 != 0);
    }
    local_470 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    local_498 = 0xbbb02448be0f8bd6;
    local_4b0 = plVar10;
    pbStack_480 = local_468;
    FUN_011845f4(lVar12,&local_488,&local_4b0,&local_498,10);
    if (local_4b0 != (long *)0x0) {
      plVar19 = local_4b0 + 10;
      do {
        iVar5 = (int)*plVar19 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar9) {
          *(int *)plVar19 = iVar5;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_4b0 + 0x10))();
      }
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 != 5);
  local_488 = (undefined1 *)0x93805e963e688c3a;
  pbStack_480 = (byte *)0x3988608;
  local_478 = 0x19;
  local_470 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  local_498 = 0xbbb02748be0f90ef;
  local_4b8 = plVar10;
  FUN_011845f4(lVar12,&local_488,&local_4b8,&local_498,10);
  if (local_4b8 != (long *)0x0) {
    plVar19 = local_4b8 + 10;
    do {
      iVar5 = (int)*plVar19 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar9) {
        *(int *)plVar19 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_4b8 + 0x10))();
    }
  }
  if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 0x20))();
  }
  local_488 = (undefined1 *)0x2abbd4a068705808;
  pbStack_480 = (byte *)0x391e8b7;
  local_478 = 0x17;
  local_470 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  local_498 = 0xbbb02648be0f8f3c;
  local_4c0 = plVar10;
  FUN_011845f4(lVar12,&local_488,&local_4c0,&local_498,10);
  if (local_4c0 != (long *)0x0) {
    plVar19 = local_4c0 + 10;
    do {
      iVar5 = (int)*plVar19 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar9) {
        *(int *)plVar19 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_4c0 + 0x10))();
    }
  }
  if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if (plVar10 != (long *)0x0) {
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


