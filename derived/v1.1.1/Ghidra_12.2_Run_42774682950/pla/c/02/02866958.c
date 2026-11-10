/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02866958; name: FUN_02866958
 */


void FUN_02866958(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_34 [4];
  long *local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 200);
  local_34[0] = 1;
  FUN_02866ba8(&local_30,local_28,&local_28,local_34);
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x10) = local_30;
  plVar5 = local_30;
  while (iVar4 = (**(code **)(*plVar5 + 0x40))(), iVar4 != 1) {
    nn::os::SleepThread(16000000);
    plVar5 = *(long **)(param_1 + 0x10);
  }
  local_34[0] = 1;
  FUN_02866c20(&local_30,local_28,&local_28,local_34);
  plVar5 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x18) = local_30;
  plVar5 = local_30;
  while (iVar4 = (**(code **)(*plVar5 + 0x40))(), iVar4 != 1) {
    nn::os::SleepThread(16000000);
    plVar5 = *(long **)(param_1 + 0x18);
  }
  local_34[0] = 1;
  FUN_02866c98(&local_30,local_28,&local_28,local_34);
  plVar5 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x20) = local_30;
  plVar5 = local_30;
  while (iVar4 = (**(code **)(*plVar5 + 0x40))(), iVar4 != 1) {
    nn::os::SleepThread(16000000);
    plVar5 = *(long **)(param_1 + 0x20);
  }
  local_34[0] = 1;
  FUN_02866d10(&local_30,local_28,&local_28,local_34);
  plVar5 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x28) = local_30;
  while (iVar4 = (**(code **)(*local_30 + 0x40))(), iVar4 != 1) {
    nn::os::SleepThread(16000000);
    local_30 = *(long **)(param_1 + 0x28);
  }
  FUN_027ffb88(*(undefined8 *)(param_1 + 0xd0));
  return;
}


