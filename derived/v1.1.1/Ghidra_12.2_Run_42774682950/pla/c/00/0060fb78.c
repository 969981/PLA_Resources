/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060fb78; name: FUN_0060fb78
 */


void FUN_0060fb78(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_043753d8 + 0x10);
  if ((char)param_1[0xc] != '\0') {
    thunk_FUN_00783db8(param_1 + 3,param_1);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  plVar4 = (long *)param_1[10];
  if (plVar4 != (long *)0x0) {
    if (plVar4 == param_1 + 6) {
      pcVar5 = *(code **)(*plVar4 + 0x10);
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x18);
    }
    (*pcVar5)();
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      FUN_00783c84(param_1);
      return;
    }
  }
  FUN_00783c84(param_1);
  return;
}


