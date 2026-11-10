/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a4198; name: FUN_028a4198
 */


void FUN_028a4198(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *param_2;
  cVar3 = *(char *)*param_1;
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x98);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x8c));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028a4204;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028a4204:
  puVar2 = *(undefined8 **)(lVar8 + 0xf8);
  for (puVar7 = *(undefined8 **)(lVar8 + 0xf0); puVar7 != puVar2; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)*puVar7 + 0x78))();
  }
  if ((cVar3 != '\0') && (*(long **)(lVar8 + 0x68) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar8 + 0x68) + 0x108))();
  }
  *(undefined8 *)(lVar8 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x8c));
  return;
}


