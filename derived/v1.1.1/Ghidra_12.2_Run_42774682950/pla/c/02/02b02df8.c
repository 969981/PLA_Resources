/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b02df8; name: FUN_02b02df8
 */


void FUN_02b02df8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_28;
  
  plVar7 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = &DAT_ceed8cb7fadcadb9;
  pcStack_48 = "IrradianceVolume";
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_02b30210(&local_28,plVar7,&local_50);
  plVar5 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar6 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
  }
  FUN_02b62284(uVar6);
  FUN_02b62410(*(undefined8 *)(param_1 + 0x58));
  local_50 = &DAT_3ec97bb01f9f4caa;
  pcStack_48 = "SpecularProbe";
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_02b30210(&local_28,plVar7,&local_50);
  plVar5 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar6 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
  }
  FUN_02b62284(uVar6);
  FUN_02b62410(*(undefined8 *)(param_1 + 0x60));
  local_50 = (undefined1 *)0x1;
  FUN_02b5b250(&DAT_043ef568,param_1 + 0x70,&local_50);
  FUN_02b5b660(&local_28,&DAT_043ef568);
  plVar5 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = local_28;
  *(undefined4 *)(param_1 + 0xc0) = 0x24;
  *(long *)(param_1 + 0x160) = param_1;
  FUN_02b22840(DAT_043ef5b0,param_1 + 0x158);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


