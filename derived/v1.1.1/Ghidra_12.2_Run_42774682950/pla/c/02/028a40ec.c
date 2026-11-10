/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a40ec; name: FUN_028a40ec
 */


void FUN_028a40ec(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  uVar2 = *(undefined4 *)*param_1;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x98);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x8c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028a4158;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028a4158:
  *(undefined4 *)(lVar6 + 0x130) = uVar2;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x8c));
  return;
}


