/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191b340; name: FUN_0191b340
 */


void FUN_0191b340(long *param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x43;
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x20c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0191b394;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0191b394:
  (**(code **)(*param_1 + 0xf0))(param_1,param_2);
  param_1[0x43] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x20c));
  return;
}


