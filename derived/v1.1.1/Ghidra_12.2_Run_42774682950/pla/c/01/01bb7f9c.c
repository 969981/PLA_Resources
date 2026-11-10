/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb7f9c; name: FUN_01bb7f9c
 */


undefined8 FUN_01bb7f9c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0xd1;
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x67c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01bb7fec;
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
LAB_01bb7fec:
  if (((*(char *)((long)param_1 + 0x531) == '\0') &&
      (uVar5 = (**(code **)(*param_1 + 0x108))(param_1), (uVar5 & 1) == 0)) &&
     ((char)param_1[0xce] == '\0')) {
    uVar6 = 1;
    *(undefined2 *)(param_1 + 0xce) = 1;
  }
  else {
    uVar6 = 0;
  }
  param_1[0xd1] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x67c));
  return uVar6;
}


