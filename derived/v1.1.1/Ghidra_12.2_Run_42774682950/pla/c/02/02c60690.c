/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60690; name: FUN_02c60690
 */


void FUN_02c60690(long param_1,undefined8 param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      bVar3 = false;
      ClearExclusiveLocal();
      goto LAB_02c606d4;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar3 = true;
LAB_02c606d4:
  if (param_3 < 4) {
    if (!bVar3) {
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c60710;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  else if (!bVar3) {
    do {
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
      while (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_02c60710;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_02c60710:
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  return;
}


