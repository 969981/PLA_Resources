/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba819c; name: FUN_01ba819c
 */


void FUN_01ba819c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 4;
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x14));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01ba81f4;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01ba81f4:
  if (param_1[1] != 0) {
    *(undefined4 *)(*param_1 + 0x7f8) = *(undefined4 *)(param_1[1] + 0x28);
    *(undefined4 *)(*param_1 + 0x7fc) = *(undefined4 *)(param_1[1] + 0x2c);
    *(undefined4 *)(*param_1 + 0x898) = *(undefined4 *)(param_1[1] + 0x34);
    *(undefined4 *)(*param_1 + 0x88c) = *(undefined4 *)(param_1[1] + 0x38);
    *(undefined4 *)(*param_1 + 0x8a4) = *(undefined4 *)(param_1[1] + 0x3c);
    *(undefined1 *)(*param_1 + 0x95f) = *(undefined1 *)(param_1[1] + 0x40);
    *(undefined1 *)(*param_1 + 0x955) = *(undefined1 *)(param_1[1] + 0x41);
  }
  param_1[4] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x14));
  return;
}


