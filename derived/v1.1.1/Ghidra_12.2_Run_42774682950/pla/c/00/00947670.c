/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00947670; name: FUN_00947670
 */


void FUN_00947670(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *__dest;
  undefined8 *puVar8;
  
  *param_1 = &PTR_LAB_041c2978;
  DAT_043a88c8 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[5] + 0xb8))();
  }
  *param_1 = &PTR___cxa_pure_virtual_041c29a8;
  lVar6 = FUN_02bcf6a4();
  lVar7 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar6 + 0x10);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00947728;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00947728:
  __dest = &DAT_043f17b0;
  lVar7 = DAT_043f1fb0 * 8;
  puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
  if ((lVar7 != 0) && (DAT_043f17b0 != param_1)) {
    puVar8 = &DAT_043f17b0;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) goto LAB_009477a0;
      __dest = puVar8 + 1;
      puVar1 = puVar8 + 1;
      puVar8 = __dest;
    } while ((undefined8 *)*puVar1 != param_1);
  }
  if (puVar3 != __dest) {
    puVar8 = __dest + 1;
    if (puVar8 != puVar3) {
      memmove(__dest,puVar8,(long)puVar3 - (long)puVar8);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
LAB_009477a0:
  *(undefined8 *)(lVar6 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
  return;
}


