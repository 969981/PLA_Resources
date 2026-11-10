/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124f9b0; name: FUN_0124f9b0
 */


void FUN_0124f9b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  plVar6 = *(long **)(param_1 + 0x2c8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  FUN_0124f208(&local_38,param_1,0);
  local_58 = (long *)&DAT_ced9934ccf052522;
  pcStack_50 = "pane_N_buy_00";
  local_48 = 0xd;
  local_40 = (long *)0x0;
  FUN_0283b11c(plVar6,&local_58,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  FUN_0124eff0(param_1);
  FUN_012367fc(param_1 + 0x5c0,*(undefined8 *)(param_1 + 8));
  FUN_01233ca8(param_1 + 0x9c0,param_1 + 0x5c0);
  FUN_01245fe8(param_1 + 0x1268,plVar6);
  FUN_01246018(param_1 + 0x1268,0,1);
  FUN_0124f208(&local_58,param_1,1);
  FUN_01246a44(param_1 + 0x12c0,plVar6,local_58);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  local_58 = (long *)&DAT_e2c06acab97c29c2;
  pcStack_50 = "CommonOptionBar";
  local_48 = 0xf;
  local_40 = (long *)0x0;
  uVar5 = FUN_00d6adf4(param_1 + 0x180,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  FUN_0124712c(param_1 + 0x12d0,plVar6,local_38,uVar5);
  FUN_0124fbcc(param_1);
  FUN_0124febc(param_1);
  FUN_0124ff60(param_1);
  FUN_01250078(param_1);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


