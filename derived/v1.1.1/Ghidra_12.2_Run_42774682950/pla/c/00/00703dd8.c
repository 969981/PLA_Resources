/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00703dd8; name: FUN_00703dd8
 */


void FUN_00703dd8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar4 = (long *)FUN_00612290();
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
  puVar5[4] = plVar4;
  *puVar5 = &DAT_0419eb08;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = param_2;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  plVar4 = *(long **)(param_1 + 0xb0);
  *(undefined8 **)(param_1 + 0xb0) = puVar5;
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


