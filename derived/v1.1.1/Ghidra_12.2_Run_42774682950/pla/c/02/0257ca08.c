/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257ca08; name: FUN_0257ca08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0257ca08(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 extraout_w1;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_60;
  undefined8 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined8 local_28;
  
  FUN_0257bb60(&local_58);
  if (local_58 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_011a5e18(&local_38);
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_58 + 1);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_28 = *puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 != (long *)0x0) {
    uVar9 = FUN_019188bc();
    *(undefined8 *)(param_1 + 0x5b0) = uVar9;
    *(undefined1 *)(param_1 + 0x5b8) = extraout_w1;
    if (local_38 != (long *)0x0) {
      lVar11 = local_38[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  FUN_0257c070(param_1);
  if (*(char *)(param_1 + 0x744) == '\0') {
    if (*(int *)(param_1 + 0x5b0) != 1) {
      if (*(int *)(param_1 + 0x5b0) != 0) goto LAB_0257ca8c;
      goto LAB_0257cdd4;
    }
    *(undefined4 *)(param_1 + 0x5ac) = 1;
    local_58 = (undefined8 *)0x10c9e3af13afddae;
    pcStack_50 = "anime_switch_poke_state";
  }
  else {
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    *(undefined2 *)(param_1 + 0x5b6) = 0;
    *(undefined1 *)(param_1 + 0x5b8) = 1;
    *(undefined1 *)(param_1 + 0x5b4) = 0;
LAB_0257cdd4:
    *(undefined4 *)(param_1 + 0x5ac) = 0;
    local_58 = (undefined8 *)0x6aab1335aabff758;
    pcStack_50 = "anime_switch_item_state";
  }
  local_48 = 0x17;
  local_40 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_58);
  }
LAB_0257ca8c:
  bVar4 = *(byte *)(param_1 + 0x5b4);
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar13 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)plVar10[0x29];
  lVar11 = plVar10[0x2a];
  if ((lVar11 != 0) && (*plVar13 != 0x361d1ba48da27d69)) {
    plVar12 = plVar13 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar13 = plVar12;
        break;
      }
      plVar3 = plVar13 + 6;
      plVar1 = plVar13 + 6;
      plVar13 = plVar3;
    } while (*plVar1 != 0x361d1ba48da27d69);
  }
  *(byte *)(plVar13[4] + 0x58) = *(byte *)(plVar13[4] + 0x58) & 0xfe | bVar4;
  if (plVar10 != (long *)0x0) {
    plVar13 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)plVar10[0xd];
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar11 = plVar10[0xb];
  piVar2 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  local_58 = (undefined8 *)0x2c6d0d9bc6b243db;
  pcStack_50 = "pane_L_boxmax_00_T_boxmax_00";
  local_48 = 0x1c;
  local_40 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_28 = 0xcfa70ea4151698c2;
  local_60 = plVar13;
  FUN_011845f4(param_1 + 0x180,&local_58,&local_60,&local_28,10);
  if (local_60 != (long *)0x0) {
    plVar10 = local_60 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = (undefined8 *)0x22efd65c0f92c223;
  pcStack_50 = "anime_L_boxmax_00_keep";
  local_48 = 0x16;
  local_40 = (long *)0x0;
  plVar10 = _DAT_00000148;
  lVar11 = _DAT_00000150;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_58);
    plVar10 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar11 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  }
  if (lVar11 != 0) {
    lVar11 = *plVar10;
    while (lVar11 != 0x80a8e808288e407) {
      plVar10 = plVar10 + 6;
      lVar11 = *plVar10;
    }
  }
  *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) | 1;
  FUN_00d7331c(param_1,0);
  FUN_00d7331c(param_1,2);
  FUN_0257b998(param_1);
  FUN_0257c070(param_1);
  FUN_0257c2d8(param_1);
  FUN_02579ebc(param_1);
  *(undefined2 *)(param_1 + 0x5b6) = 0;
  *(undefined1 *)(param_1 + 0x745) = 0;
  *(undefined4 *)(param_1 + 0x750) = 0;
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


