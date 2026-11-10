/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276a9d8; name: FUN_0276a9d8
 */


void FUN_0276a9d8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_0426bbf8;
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_00784040(param_1 + 8);
  }
  if ((*(char *)(param_1 + 10) != '\0') && ((long *)param_1[0xb] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xb] + 0x18))();
  }
  pcVar4 = (code *)param_1[0x3f];
  if (pcVar4 != (code *)0x0) {
    param_1[0x41] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    (*pcVar4)(param_1 + 0x42);
  }
  pcVar4 = (code *)param_1[0x2f];
  if (pcVar4 != (code *)0x0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (*pcVar4)(param_1 + 0x32);
  }
  pcVar4 = (code *)param_1[0x1f];
  if (pcVar4 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar4)(param_1 + 0x22);
  }
  pcVar4 = (code *)param_1[0xf];
  if (pcVar4 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar4)(param_1 + 0x12);
  }
  if (*(char *)(param_1 + 10) != '\0') {
    plVar6 = (long *)param_1[0xc];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    plVar6 = (long *)param_1[9];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  *param_1 = &PTR_LAB_0426bac0;
  FUN_00785f18(param_1 + 2);
  return;
}


