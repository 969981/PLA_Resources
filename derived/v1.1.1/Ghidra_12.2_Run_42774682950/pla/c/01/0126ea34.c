/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126ea34; name: FUN_0126ea34
 */


void FUN_0126ea34(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long *local_58;
  undefined1 *local_50;
  long *local_48;
  
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)plVar8[0x38];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_0126ed54(&local_48,param_1);
  puVar2 = (undefined8 *)PTR_PTR_04379d00;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x60);
  }
  local_50 = &DAT_cbf29ce484222645;
  pbVar7 = (byte *)*puVar2;
  bVar3 = *pbVar7;
  if (bVar3 != 0) {
    local_50 = &DAT_cbf29ce484222645;
    do {
      pbVar7 = pbVar7 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    } while (bVar3 != 0);
  }
  FUN_02c2e7d0(local_48,&local_50,plVar9);
  local_88 = 0x73239298964ec201;
  local_80 = "pane_T_name_item_00";
  uStack_78 = 0x13;
  FUN_02a4754c(auStack_70,&local_88);
  FUN_0283d080(plVar8,auStack_70,10);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar2 = (undefined8 *)PTR_PTR_04379d00;
  if (*(long *)(param_2 + 0x30) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + 0x60);
  }
  local_50 = &DAT_cbf29ce484222645;
  pbVar7 = (byte *)*puVar2;
  bVar3 = *pbVar7;
  if (bVar3 != 0) {
    local_50 = &DAT_cbf29ce484222645;
    do {
      pbVar7 = pbVar7 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    } while (bVar3 != 0);
  }
  FUN_02c2e7d0(local_48,&local_50,plVar9);
  local_88 = 0x73239198964ec04e;
  local_80 = "pane_T_name_item_01";
  uStack_78 = 0x13;
  FUN_02a4754c(auStack_70,&local_88);
  FUN_0283d080(plVar8,auStack_70,10);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar2 = (undefined8 *)PTR_PTR_04379d00;
  if (*(long *)(param_2 + 0x50) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x50) + 0x60);
  }
  pbVar7 = (byte *)*puVar2;
  bVar3 = *pbVar7;
  local_50 = &DAT_cbf29ce484222645;
  while (bVar3 != 0) {
    pbVar7 = pbVar7 + 1;
    local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar3) * 0x100000001b3);
    bVar3 = *pbVar7;
  }
  FUN_02c2e7d0(local_48,&local_50,plVar9);
  local_88 = 0x73239098964ebe9b;
  local_80 = "pane_T_name_item_02";
  uStack_78 = 0x13;
  FUN_02a4754c(auStack_70,&local_88);
  FUN_0283d080(plVar8,auStack_70,10);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    plVar9 = local_48 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


