/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00973814; name: FUN_00973814
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00973814(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_4a;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_c8 = (long *)0x0;
  local_c0 = 0;
  local_b8 = 0x101;
  local_b6 = 0;
  FUN_00931034(&local_b0,*(undefined8 *)(param_1 + 0x58));
  plVar6 = *(long **)(local_b0[0xd1] + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar6[0x39];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar6 + 10;
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
    (**(code **)(*plVar6 + 0x10))();
  }
  local_c8 = plVar9;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (local_b0 != (long *)0x0) {
    lVar7 = local_b0[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  local_b8 = CONCAT11(local_b8._1_1_,param_2 != 0);
  local_c0 = CONCAT44(param_2,3);
  if (*(long *)(param_1 + 0x58) == 0) {
    local_b0 = (long *)0x0;
    lVar7 = _DAT_000006a8;
  }
  else {
    FUN_00931034(&local_b0);
    lVar7 = local_b0[0xd5];
    if (local_b0 != (long *)0x0) {
      lVar8 = local_b0[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_b0 + 0x20))();
      }
    }
  }
  FUN_00d42690(lVar7,1,1);
  if (*(long *)(param_1 + 0x58) == 0) {
    lVar7 = _DAT_000006a8;
  }
  else {
    FUN_00931034(&local_b0);
    lVar7 = local_b0[0xd5];
    if (local_b0 != (long *)0x0) {
      lVar8 = local_b0[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_b0 + 0x20))();
      }
    }
  }
  local_78 = 0;
  local_b0 = (long *)0x0;
  local_70 = 0x8abaf272a347e952;
  pcStack_68 = "pane_N_context";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  local_50 = 4;
  local_4c = 1;
  local_4a = 0xffff;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_00d67f30(lVar7,&local_c8,&local_b0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


