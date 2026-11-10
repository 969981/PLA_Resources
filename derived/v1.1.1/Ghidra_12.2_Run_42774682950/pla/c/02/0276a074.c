/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276a074; name: FUN_0276a074
 */


void FUN_0276a074(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_0426bbc0;
  if ((*(char *)(param_1 + 7) != '\0') && ((long *)param_1[8] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[8] + 0x18))();
  }
  pcVar4 = (code *)param_1[0x1b];
  if (pcVar4 != (code *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar4)(param_1 + 0x1e);
  }
  pcVar4 = (code *)param_1[0xb];
  if (pcVar4 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar4)(param_1 + 0xe);
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


