/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b162c; name: FUN_028b162c
 */


ulong FUN_028b162c(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_1 + 0x360);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x354));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028b1694;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028b1694:
  lVar3 = *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x118) + 8);
    do {
      if (*plVar5 == *param_2) {
        uVar6 = 1;
        goto LAB_028b16ec;
      }
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 6;
    } while (uVar4 < (ulong)((lVar3 >> 4) * -0x5555555555555555));
  }
  uVar6 = 0;
LAB_028b16ec:
  *(undefined8 *)(param_1 + 0x360) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x354));
  return uVar6 | uVar4 << 0x20;
}


