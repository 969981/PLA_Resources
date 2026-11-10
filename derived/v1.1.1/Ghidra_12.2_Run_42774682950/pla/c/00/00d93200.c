/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d93200; name: FUN_00d93200
 */


void FUN_00d93200(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (((*(byte *)(param_1 + 0x98) & 1) != 0) &&
     (lVar5 = *(long *)(param_1 + 0x90), lVar4 = nn::os::GetCurrentThread(), lVar4 == lVar5)) {
    FUN_00d932d0(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x84));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d93268;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d93268:
  FUN_00d932d0(param_1);
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x84));
  return;
}


