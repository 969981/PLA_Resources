/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01225f70; name: FUN_01225f70
 */


void FUN_01225f70(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_70 = 0xdcac3193e77dee74;
  pcStack_68 = "pane_L_mode_trade_00_T_trdplayer_00";
  local_60 = 0x23;
  local_58 = (long *)0x0;
  FUN_0121ac84(param_1,0x69bb3bcd1460e220,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (param_2 != 0) {
    plVar10 = (long *)plVar9[0x37];
    if (plVar10 == (long *)0x0) {
      FUN_010c6478(0,0,param_2,param_3,param_4);
    }
    else {
      lVar11 = plVar10[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar7;
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
      FUN_010c6478(plVar10,0,param_2,param_3,param_4);
      lVar11 = plVar10[0xb];
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
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    local_70 = 0xdcac3293e77df027;
    pcStack_68 = "pane_L_mode_trade_00_T_trdplayer_01";
    local_60 = 0x23;
    local_58 = (long *)0x0;
    FUN_0121ac84(param_1,0x69bb3ccd1460e3d3,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  plVar10 = (long *)plVar9[0x29];
  lVar11 = plVar9[0x2a];
  if ((lVar11 != 0) && (*plVar10 != -0x29f82561ac5bef72)) {
    plVar8 = plVar10 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar10 = plVar8;
        break;
      }
      plVar3 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar3;
    } while (*plVar1 != -0x29f82561ac5bef72);
  }
  *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) | 1;
  plVar10 = (long *)plVar9[0x29];
  lVar11 = plVar9[0x2a];
  if ((lVar11 != 0) && (*plVar10 != -0x565c7acef11b286)) {
    plVar8 = plVar10 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar10 = plVar8;
        break;
      }
      plVar3 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar3;
    } while (*plVar1 != -0x565c7acef11b286);
  }
  *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) & 0xfe;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


