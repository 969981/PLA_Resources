/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02899b18; name: FUN_02899b18
 */


void FUN_02899b18(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar4 = (long *)FUN_02882758();
  puVar3 = PTR_DAT_04387f08;
  lVar5 = *plVar4;
  *(long *)PTR_DAT_04387f08 = lVar5;
  uVar6 = *(undefined8 *)(lVar5 + 0x58);
  lVar5 = nn::os::GetCurrentThread();
  plVar4 = (long *)(param_1 + 0x208);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1fc));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02899b94;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02899b94:
  FUN_02a70468(param_1,uVar6,0);
  plVar4 = (long *)FUN_02882758();
  lVar5 = *plVar4;
  *(long *)puVar3 = lVar5;
  lVar7 = *(long *)(lVar5 + 0x60);
  FUN_02a70468(param_1,0,lVar7);
  lVar5 = nn::os::GetCurrentThread();
  plVar4 = (long *)(lVar7 + 0x208);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1fc));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02899c10;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02899c10:
  *(undefined8 *)(lVar7 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1fc));
  *(undefined8 *)(param_1 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1fc));
  return;
}


