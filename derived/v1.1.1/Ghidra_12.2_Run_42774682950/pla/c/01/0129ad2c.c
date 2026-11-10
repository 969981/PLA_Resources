/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129ad2c; name: FUN_0129ad2c
 */


void FUN_0129ad2c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *__dest;
  undefined8 *puVar9;
  
  puVar6 = PTR_DAT_0437eb58;
  *param_1 = (long)&PTR_LAB_04202648;
  *(undefined8 *)puVar6 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar7 = FUN_02bcf6a4();
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar7 + 0x10);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0129adc4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0129adc4:
  lVar8 = DAT_043f1fb0 * 8;
  puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar8 != 0) && (DAT_043f17b0 != param_1)) {
    puVar9 = &DAT_043f17b0;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) {
        __dest = puVar3;
        break;
      }
      __dest = puVar9 + 1;
      puVar1 = puVar9 + 1;
      puVar9 = __dest;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar3 != __dest) {
    puVar9 = __dest + 1;
    if (puVar9 != puVar3) {
      memmove(__dest,puVar9,(long)puVar3 - (long)puVar9);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  *(undefined8 *)(lVar7 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  return;
}


