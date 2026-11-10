/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60a58; name: FUN_02c60a58
 */


void FUN_02c60a58(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (3 < ((uint)param_2 & 0xff)) {
    return;
  }
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),param_2,0);
  lVar5 = *(long *)(param_1 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c60af0;
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
LAB_02c60af0:
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),param_2 & 0xffffffff,0);
  return;
}


