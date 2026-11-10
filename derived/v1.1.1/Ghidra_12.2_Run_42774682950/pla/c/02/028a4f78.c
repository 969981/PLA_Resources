/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a4f78; name: FUN_028a4f78
 */


void FUN_028a4f78(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar4 = (long *)(param_1 + 0x80);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x74));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028a4fd8;
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
LAB_028a4fd8:
  plVar4 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar4 = *(long **)(param_1 + 0xb8);
  plVar5 = *(long **)(param_1 + 0xc0);
  while (plVar5 != plVar4) {
    plVar5 = plVar5 + -1;
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 0x18))();
    }
  }
  *(long **)(param_1 + 0xc0) = plVar4;
  plVar4 = *(long **)(param_1 + 0xf0);
  plVar5 = *(long **)(param_1 + 0xf8);
  while (plVar5 != plVar4) {
    plVar5 = plVar5 + -1;
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
  *(long **)(param_1 + 0xf8) = plVar4;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x74));
  return;
}


