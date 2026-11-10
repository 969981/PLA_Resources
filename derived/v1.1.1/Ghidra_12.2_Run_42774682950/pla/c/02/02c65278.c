/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c65278; name: FUN_02c65278
 */


void FUN_02c65278(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_1c8 [360];
  undefined1 auStack_60 [16];
  
  FUN_02c59c80();
  *param_1 = &PTR_LAB_0428ae40;
  param_1[9] = &PTR_LAB_0428ae80;
  FUN_02c64e4c(param_1,param_2);
  lVar5 = *(long *)(param_3 + 0x98);
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
          if (cVar2 == '\0') goto LAB_02c65314;
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
LAB_02c65314:
  FUN_02c65ef8(lVar5,auStack_1c8,auStack_60);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  lVar5 = param_1[0x13];
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
          if (cVar2 == '\0') goto LAB_02c6538c;
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
LAB_02c6538c:
  FUN_02c661d4(lVar5,auStack_1c8,auStack_60);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  FUN_02c5acfc(param_1);
  return;
}


