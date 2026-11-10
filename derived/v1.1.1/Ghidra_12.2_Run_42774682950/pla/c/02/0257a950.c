/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257a950; name: FUN_0257a950
 */


void FUN_0257a950(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar7 = *(long **)(param_1 + 0x2c8);
  param_2 = param_2 & 0xffffffff;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar11 = (&DAT_0425d808)[param_2 * 3];
  plVar8 = (long *)plVar7[0x29];
  lVar10 = plVar7[0x2a];
  if ((lVar10 != 0) && (*plVar8 != lVar11)) {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != lVar11);
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (param_3 == 0) {
    return;
  }
  iVar5 = FUN_02c667f4(*(undefined8 *)(param_3 + 0x98));
  if (iVar5 == 0) {
    if (*(long *)(*(long *)(param_3 + 0x98) + 8) == 0) {
      uVar6 = FUN_02c5e31c(param_3);
      uVar6 = uVar6 & 0xffff;
    }
    else {
      uVar6 = FUN_02c66b3c();
    }
    if (uVar6 != 0) {
      return;
    }
  }
  plVar7 = *(long **)(param_1 + 0x508);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_60 = *(undefined8 *)(&DAT_0425d880 + param_2 * 0x18);
    pcStack_58 = (&PTR_s_pane_L_icon_sick_00_P_sick_00_0425d888)[param_2 * 3];
    local_50 = *(undefined8 *)(&DAT_0425d890 + param_2 * 0x18);
    local_48 = (long *)0x0;
    if (*pcStack_58 != '\0') {
      lVar10 = FUN_00d63240(*(undefined8 *)(param_1 + 0x2c8),&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar10 != 0) {
        FUN_0284c170(plVar7,param_3,lVar10,1,0,0,0);
      }
    }
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar7 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x0257ab08;
    }
  }
  plVar7 = *(long **)(param_1 + 0x2c8);
joined_r0x0257ab08:
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)plVar7[0x29];
  lVar10 = plVar7[0x2a];
  if ((lVar10 != 0) && (*plVar8 != lVar11)) {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != lVar11);
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) | 1;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return;
}


