/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6da64; name: FUN_02a6da64
 */


void FUN_02a6da64(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_0427e8b0;
  param_1[9] = &PTR_LAB_0427e920;
  param_1[10] = &DAT_0427e968;
  plVar5 = (long *)param_1[0xb8];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0xb7));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb3));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x584));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xac));
  FUN_02a6db34(param_1 + 0x9e);
  FUN_02a6db34(param_1 + 0x90);
  FUN_02a6db34(param_1 + 0x82);
  FUN_02a49060(param_1);
  return;
}


