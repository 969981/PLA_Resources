/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064c3dc; name: FUN_0064c3dc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0064c3dc(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x30);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
               *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffe,1);
    bVar2 = *(byte *)(param_1 + 0x30);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x10);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),
               *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffe,1);
    bVar2 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar2 & 1) == 0) {
    plVar6 = *(long **)(param_1 + 8);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe,1);
    plVar6 = *(long **)(param_1 + 8);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


