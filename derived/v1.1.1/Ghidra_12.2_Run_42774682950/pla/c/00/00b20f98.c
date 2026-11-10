/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b20f98; name: FUN_00b20f98
 */


void FUN_00b20f98(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *local_90 [4];
  long *local_70;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  char *local_28;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar8 = *(undefined8 *)(param_1 + 8);
    local_30 = (long *)FUN_02ad80ec();
    local_30 = (long *)*local_30;
    if (local_30 != (long *)0x0) {
      plVar7 = local_30 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_60 = &PTR_LAB_041d4f48;
    uStack_58 = 0;
    local_28 = "bin/pokemon/data/poke_default_locator.trloc";
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_009f1b84(local_90,&local_28);
    FUN_00b2191c(&local_60,local_90);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_90[0] != (long *)0x0) {
      (**(code **)(*local_90[0] + 0x20))();
    }
    lVar6 = FUN_00b23154(uVar8,&local_30,&local_60);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x68) = lVar6;
    *(undefined1 *)(param_1 + 0x70) = 1;
    FUN_00b210f0(&local_60);
    if (local_30 != (long *)0x0) {
      plVar7 = local_30 + 10;
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  return;
}


