/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02768b7c; name: FUN_02768b7c
 */


void FUN_02768b7c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_0426bb30;
  if ((*(char *)(param_1 + 0xe) != '\0') && ((long *)param_1[0xf] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
  }
  pcVar4 = (code *)param_1[0x23];
  if (pcVar4 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar4)(param_1 + 0x26);
  }
  pcVar4 = (code *)param_1[0x13];
  if (pcVar4 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar4)(param_1 + 0x16);
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    plVar6 = (long *)param_1[0x10];
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
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_02763dac(param_1 + 7);
  *param_1 = &PTR_LAB_0426bac0;
  FUN_00785f18(param_1 + 2);
  return;
}


