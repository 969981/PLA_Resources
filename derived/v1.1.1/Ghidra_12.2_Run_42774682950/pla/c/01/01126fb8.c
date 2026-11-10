/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01126fb8; name: FUN_01126fb8
 */


void FUN_01126fb8(long param_1,long *param_2,undefined8 *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1 + (long)param_4 * 0x180;
  lVar6 = *(long *)(*param_2 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0112703c;
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
LAB_0112703c:
  FUN_02c65ef8(lVar6,lVar5 + 0x68,lVar5 + 0x1d0);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x24));
  *(undefined8 *)(param_1 + (long)param_4 * 0x180 + 0x1e0) = *param_3;
  return;
}


