/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086a334; name: FUN_0086a334
 */


void FUN_0086a334(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  plVar6 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
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
      piVar4 = *(int **)(param_1 + 0x58);
      goto joined_r0x0086a36c;
    }
  }
  piVar4 = *(int **)(param_1 + 0x58);
joined_r0x0086a36c:
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      FUN_007e5d18();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar4 = (int *)(param_1 + 0x60);
  if (*piVar4 == 1) {
    FUN_007e5d18(piVar4);
  }
  FUN_007e5bd8(piVar4);
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0xc0,local_30);
  return;
}


