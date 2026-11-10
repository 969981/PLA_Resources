/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01343f20; name: FUN_01343f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01343f20(long param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar10 + 400);
  if (uVar4 != 0) {
    uVar12 = 0;
    piVar11 = (int *)(lVar10 + 0x20);
LAB_01343f74:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar11 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar11 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_72837ff1f1cec6a2) || (*piVar11 != 10)) goto LAB_01344200;
    if (((uint)uVar12 < 0x10) && (plVar8 = *(long **)(piVar11 + -2), plVar8 != (long *)0x0)) {
      lVar10 = plVar8[0xb];
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
      plVar7 = (long *)plVar8[0xd];
      goto joined_r0x013442a0;
    }
  }
LAB_01343fa4:
  plVar8 = (long *)0x0;
  plVar7 = _DAT_00000068;
joined_r0x013442a0:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar11 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  local_60 = 0x331f83b52ac8ed40;
  pcStack_58 = "pane_L_window_popup_lmap_00_T_puinfo_name_00";
  param_1 = param_1 + 0x180;
  local_50 = 0x2c;
  local_48 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_68 = 0xf2bcaa147076165;
  local_38 = plVar7;
  FUN_011845f4(param_1,&local_60,&local_38,&local_68,10);
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((param_3 & 1) == 0) {
    local_60 = 0x4aadb856ffc842ce;
    pcStack_58 = "pane_L_window_popup_lmap_00_T_poke_name_00";
    local_50 = 0x2a;
    local_48 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_68 = 0xf285ba147046ef1;
    local_78 = plVar7;
    FUN_011845f4(param_1,&local_60,&local_78,&local_68,10);
    if (local_78 == (long *)0x0) goto joined_r0x01344120;
    plVar8 = local_78 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar1 = local_78;
    } while (cVar5 != '\0');
  }
  else {
    local_60 = 0x4aadb856ffc842ce;
    pcStack_58 = "pane_L_window_popup_lmap_00_T_poke_name_00";
    local_50 = 0x2a;
    local_48 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_68 = 0xf2bc9a147075fb2;
    local_70 = plVar7;
    FUN_0133fa78(param_1,&local_60,&local_70,&local_68,0,param_2);
    if (local_70 == (long *)0x0) goto joined_r0x01344120;
    plVar8 = local_70 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar1 = local_70;
    } while (cVar5 != '\0');
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))();
  }
joined_r0x01344120:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_00d2e2f0(0x40000000,param_1,"anime_L_window_popup_lmap_00_ptn_window");
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
LAB_01344200:
  uVar12 = uVar12 + 1;
  piVar11 = piVar11 + 6;
  if (uVar4 == uVar12) goto LAB_01343fa4;
  goto LAB_01343f74;
}


