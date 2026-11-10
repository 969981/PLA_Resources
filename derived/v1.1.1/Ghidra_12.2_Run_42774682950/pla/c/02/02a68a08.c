/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a68a08; name: FUN_02a68a08
 */


void FUN_02a68a08(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x84));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a68a90;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02a68a90:
  *(undefined1 *)(param_1 + 0x98) = 1;
  FUN_02a68b38(param_1,param_2);
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    FUN_02a68d40(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48));
    *(undefined1 *)(param_1 + 0x38) = 1;
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x48);
    while (lVar4 = lVar5, lVar4 != lVar6) {
      pcVar7 = *(code **)(lVar4 + -0x78);
      lVar5 = lVar4 + -0x80;
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x70) = 0;
        *(undefined8 *)(lVar4 + -0x68) = 0;
        *(undefined8 *)(lVar4 + -0x80) = 0;
        *(undefined8 *)(lVar4 + -0x78) = 0;
        (*pcVar7)(lVar4 + -0x60);
      }
    }
    *(long *)(param_1 + 0x48) = lVar6;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x84));
  return;
}


