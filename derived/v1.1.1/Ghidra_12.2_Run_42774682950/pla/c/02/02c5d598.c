/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d598; name: FUN_02c5d598
 */


undefined4 FUN_02c5d598(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x98);
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c5d5f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c5d5f8:
  uVar4 = FUN_02c69ba8(lVar6);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x24));
  return uVar4;
}


