/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00798c10; name: FUN_00798c10
 */


void FUN_00798c10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 0x20);
  *plVar5 = (long)(PTR_DAT_04376ee8 + 0x10);
  if (*(char *)(param_1 + 0x71) != '\0') {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      FUN_00784118(plVar5);
      return;
    }
  }
  FUN_00784118(plVar5);
  return;
}


