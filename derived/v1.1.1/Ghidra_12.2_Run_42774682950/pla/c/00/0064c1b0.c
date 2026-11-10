/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064c1b0; name: FUN_0064c1b0
 */


void FUN_0064c1b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = *(long *)(lVar7 + 0x30);
  *(undefined8 *)(lVar7 + 0x28) = uVar2;
  *(long *)(lVar7 + 0x30) = lVar3;
  if (lVar6 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


