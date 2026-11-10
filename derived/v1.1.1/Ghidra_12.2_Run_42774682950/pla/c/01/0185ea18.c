/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185ea18; name: FUN_0185ea18
 */


undefined4 FUN_0185ea18(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x78);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0185ea6c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0185ea6c:
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = *(long **)(param_1 + 0x88);
  plVar7 = plVar1;
  if ((plVar1 != plVar2) && (*plVar1 != *param_2)) {
    do {
      plVar7 = plVar7 + 4;
      if (plVar2 == plVar7) {
        plVar7 = plVar2;
        goto LAB_0185ea8c;
      }
    } while (*plVar7 != *param_2);
  }
LAB_0185ea8c:
  uVar6 = 0xffffffff;
  if (plVar2 != plVar7) {
    uVar6 = (undefined4)((ulong)((long)plVar7 - (long)plVar1) >> 5);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return uVar6;
}


