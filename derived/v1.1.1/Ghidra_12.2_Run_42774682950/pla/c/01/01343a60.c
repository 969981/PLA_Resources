/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01343a60; name: FUN_01343a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01343a60(long param_1)

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
  undefined8 local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar10 + 400);
  if (uVar4 != 0) {
    uVar12 = 0;
    piVar11 = (int *)(lVar10 + 0x20);
    do {
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar11 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar11 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 == &DAT_72837ff1f1cec6a2) && (*piVar11 == 10)) {
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
          goto joined_r0x01343ca0;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      piVar11 = piVar11 + 6;
    } while (uVar4 != uVar12);
  }
  plVar8 = (long *)0x0;
  plVar7 = _DAT_00000068;
joined_r0x01343ca0:
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
  local_50 = 0x21aa6ba2e5282d6;
  pcStack_48 = "pane_L_window_popup_lmap_00_T_info_01";
  local_40 = 0x25;
  local_38 = (long *)0x0;
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
  local_58 = 0xf2558a147023401;
  local_28 = plVar7;
  FUN_011845f4(param_1 + 0x180,&local_50,&local_28,&local_58,10);
  if (local_28 != (long *)0x0) {
    plVar8 = local_28 + 10;
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
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d2e2f0(0x40a00000,param_1 + 0x180,"anime_L_window_popup_lmap_00_ptn_window");
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
}


