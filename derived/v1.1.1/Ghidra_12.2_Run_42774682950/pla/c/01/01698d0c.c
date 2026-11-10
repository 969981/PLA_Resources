/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01698d0c; name: FUN_01698d0c
 */


undefined8 FUN_01698d0c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long local_b8 [2];
  long *local_a8;
  long *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  long *local_68;
  
  plVar2 = *(long **)(param_1 + 0x90);
  plVar3 = *(long **)(param_1 + 0x98);
  if (plVar2 == plVar3) {
    return 0;
  }
  plVar8 = (long *)*plVar2;
  do {
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_01694394(&local_68,plVar8,param_2);
    if (local_68 == (long *)0x0) {
      iVar9 = 3;
    }
    else {
      if (local_68[0xb] == local_68[0xc]) {
        iVar9 = 0;
      }
      else {
        plVar7 = local_68 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar7 = *(long **)(param_1 + 0xd0);
        *(long **)(param_1 + 0xd0) = local_68;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        *(undefined4 *)(param_1 + 0xf4) = 1;
        local_a0 = (long *)0x0;
        local_98 = &DAT_cbf29ce484222645;
        local_90 = &DAT_cbf29ce484222645;
        puStack_88 = &DAT_03996322;
        local_70 = 0;
        local_80 = 0;
        local_78 = (long *)0x0;
        local_6e = 1;
        FUN_00947cf8(&local_a8,"NpcTalkTableScript");
        plVar7 = local_a0;
        local_a0 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        local_a0 = local_a8;
        local_98 = (undefined1 *)*param_2;
        local_6e = 0;
        FUN_016b14c0(local_b8,&local_a0);
        if (local_b8[0] != 0) {
          FUN_02a43934();
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        iVar9 = 1;
        if (local_68 == (long *)0x0) goto joined_r0x01698ee0;
      }
      plVar7 = local_68 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
joined_r0x01698ee0:
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if ((iVar9 != 3) && (iVar9 != 0)) {
      return 1;
    }
    plVar2 = plVar2 + 1;
    if (plVar2 == plVar3) {
      return 0;
    }
    plVar8 = (long *)*plVar2;
  } while( true );
}


