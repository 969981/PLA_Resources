/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141081c; name: FUN_0141081c
 */


void FUN_0141081c(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  undefined1 *local_460;
  long *local_458;
  long *local_450;
  char *pcStack_448;
  undefined8 local_440;
  long *local_438;
  undefined8 local_430;
  char *pcStack_428;
  undefined8 local_420;
  long *local_418;
  
  if ((param_2 & 0xffff) < 0x1c) {
    local_430 = 0xa9d9c1522adf01c5;
    pcStack_428 = "common/poke_unown.dat";
    local_420 = 0x15;
    local_418 = (long *)0x0;
    FUN_00d37bb4(&local_450,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_430,10);
    plVar9 = (long *)local_450[0xd];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (local_450 != (long *)0x0) {
      lVar7 = local_450[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_450 + 0x20))();
      }
    }
    if (local_418 != (long *)0x0) {
      (**(code **)(*local_418 + 0x20))();
    }
    memset(&local_430,0,0x400);
    snprintf((char *)&local_430,0x400,"msg_ui_unown_location_%02d",param_2 & 0xffff);
    local_450 = (long *)0xd36df2b18c96b732;
    pcStack_448 = "pane_T_description_00";
    local_440 = 0x15;
    local_438 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_460 = &DAT_cbf29ce484222645;
    if ((byte)local_430 != 0) {
      pbVar8 = (byte *)((ulong)&local_430 | 1);
      bVar4 = (byte)local_430;
      do {
        local_460 = (undefined1 *)(((ulong)local_460 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar4 != 0);
    }
    local_458 = plVar9;
    FUN_011845f4(param_1 + 0x180,&local_450,&local_458,&local_460,10);
    if (local_458 != (long *)0x0) {
      plVar1 = local_458 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_458 + 0x10))();
      }
    }
    if (local_438 != (long *)0x0) {
      (**(code **)(*local_438 + 0x20))();
    }
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  return;
}


