/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01365690; name: FUN_01365690
 */


void FUN_01365690(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar4 = FUN_0289e9f4();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar4 + 0x80);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x74));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01365714;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01365714:
  puVar6 = (undefined8 *)FUN_013657d0(*(undefined8 *)(lVar4 + 0xf0),*(undefined8 *)(lVar4 + 0xf8));
  if (*(undefined8 **)(lVar4 + 0xf8) == puVar6) {
    lVar5 = FUN_013657d0(*(undefined8 *)(lVar4 + 0xb8),*(undefined8 *)(lVar4 + 0xc0));
    if (*(long *)(lVar4 + 0xc0) != lVar5) {
      FUN_01365890((undefined8 *)(lVar4 + 0xb8),lVar5);
    }
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar4 + 0x98);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        (**(code **)(*(long *)*puVar6 + 0x68))();
        *(undefined1 *)(lVar4 + 0x129) = 1;
        goto LAB_013657b4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_01365890((undefined8 *)(lVar4 + 0xf0),puVar6);
    *(undefined8 *)(lVar4 + 0x98) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x8c));
  }
LAB_013657b4:
  *(undefined8 *)(lVar4 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x74));
  return;
}


