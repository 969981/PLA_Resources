/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017edbd4; name: FUN_017edbd4
 */


void FUN_017edbd4(long *param_1)

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
  
  *param_1 = (long)&PTR_LAB_04225c28;
  DAT_043d11b0 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar6 = FUN_02bcf6a4();
  lVar7 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar6 + 0x10);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017edc68;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017edc68:
  lVar7 = DAT_043f1fb0 * 8;
  puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar7 != 0) && (DAT_043f17b0 != param_1)) {
    puVar8 = &DAT_043f17b0;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) {
        __dest = puVar3;
        break;
      }
      __dest = puVar8 + 1;
      puVar1 = puVar8 + 1;
      puVar8 = __dest;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar3 != __dest) {
    puVar8 = __dest + 1;
    if (puVar8 != puVar3) {
      memmove(__dest,puVar8,(long)puVar3 - (long)puVar8);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
  return;
}


