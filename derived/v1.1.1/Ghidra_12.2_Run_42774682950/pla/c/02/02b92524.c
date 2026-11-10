/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b92524; name: FUN_02b92524
 */


long FUN_02b92524(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0xf0);
  lVar3 = nn::os::GetCurrentThread();
  plVar4 = (long *)(param_1 + 0x10);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02b92588;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02b92588:
  plVar4 = *(long **)(param_1 + 0xd0);
  if (plVar4 == (long *)(param_1 + 200)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar3 = plVar4[5] + lVar3;
      plVar5 = (long *)plVar4[2];
      if ((long *)plVar4[2] == (long *)0x0) {
        do {
          plVar5 = plVar4;
          plVar6 = (long *)*plVar5;
          plVar4 = plVar6;
        } while (plVar5 == (long *)plVar6[2]);
        plVar4 = plVar5;
        if ((long *)plVar5[2] != plVar6) {
          plVar4 = plVar6;
        }
      }
      else {
        do {
          plVar4 = plVar5;
          plVar5 = (long *)plVar4[1];
        } while ((long *)plVar4[1] != (long *)0x0);
      }
    } while (plVar4 != (long *)(param_1 + 200));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return (lVar7 - lVar3) + *(long *)(param_1 + 0x60) * -0x48;
}


