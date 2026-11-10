/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d974c; name: FUN_011d974c
 */


void FUN_011d974c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
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
  FUN_0283d6dc(plVar6);
  local_40 = 0x8ec74ddbabeb84f4;
  pcStack_38 = "pane_L_enemy_00";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar5 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar5 != 0) {
    FUN_002350e8(*(undefined8 *)(lVar5 + 0xe8),"T_pokename_00");
  }
  local_40 = 0x8ec74edbabeb86a7;
  pcStack_38 = "pane_L_enemy_01";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar5 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar5 != 0) {
    FUN_002350e8(*(undefined8 *)(lVar5 + 0xe8),"T_pokename_00");
  }
  local_40 = 0x8ec74fdbabeb885a;
  pcStack_38 = "pane_L_enemy_02";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar5 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar5 != 0) {
    FUN_002350e8(*(undefined8 *)(lVar5 + 0xe8),"T_pokename_00");
  }
  local_40 = 0x8ec750dbabeb8a0d;
  pcStack_38 = "pane_L_enemy_03";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar5 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar5 != 0) {
    FUN_002350e8(*(undefined8 *)(lVar5 + 0xe8),"T_pokename_00");
  }
  local_40 = 0x8ec749dbabeb7e28;
  pcStack_38 = "pane_L_enemy_04";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar5 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar5 != 0) {
    FUN_002350e8(*(undefined8 *)(lVar5 + 0xe8),"T_pokename_00");
  }
  return;
}


