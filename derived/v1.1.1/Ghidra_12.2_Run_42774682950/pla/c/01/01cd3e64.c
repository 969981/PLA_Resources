/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd3e64; name: FUN_01cd3e64
 */


void FUN_01cd3e64(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar4 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01cd3eb4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01cd3eb4:
  plVar4 = *(long **)(param_1 + 0xa0);
  if (plVar4 != (long *)0x0) {
    do {
      while (*(int *)(plVar4[3] + 0x70) != 1) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_01cd3eec;
      }
      plVar4 = (long *)FUN_01cd71e8(param_1 + 0x70);
    } while (plVar4 != (long *)0x0);
  }
LAB_01cd3eec:
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


