/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064c2e4; name: FUN_0064c2e4
 */


void FUN_0064c2e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        lVar5 = lVar5 + -8;
        FUN_0064ef40(lVar5);
      } while (lVar6 != lVar5);
      lVar5 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),lVar5,*(long *)(param_1 + 0x40) - lVar5,8);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        lVar5 = lVar5 + -8;
        FUN_00680b34(lVar5);
      } while (lVar6 != lVar5);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x18) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),lVar5,*(long *)(param_1 + 0x20) - lVar5,8);
  }
  plVar4 = *(long **)(param_1 + 8);
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
      return;
    }
  }
  return;
}


