/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00798b7c; name: FUN_00798b7c
 */


void FUN_00798b7c(__shared_weak_count *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_04376ee8;
  *(undefined **)param_1 = PTR_DAT_04376ee0 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar4 + 0x10;
  if (param_1[0x71] != (__shared_weak_count)0x0) {
    param_1[0x71] = (__shared_weak_count)0x0;
  }
  plVar6 = *(long **)(param_1 + 0x68);
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
  FUN_00784118(param_1 + 0x20);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


