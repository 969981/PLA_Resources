/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287a454; name: FUN_0287a454
 */


void FUN_0287a454(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *__dest;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_04271440;
  lVar8 = 0;
  *(undefined8 *)PTR_DAT_0437b160 = 0;
  do {
    if (*(long *)((long)param_1 + lVar8 + 0x18) != 0) {
      (**(code **)(**(long **)((long)param_1 + lVar8 + 8) + 0xb8))();
    }
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0x3c0);
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar8 = FUN_02bcf6a4();
  lVar6 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar8 + 0x10);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0287a508;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0287a508:
  lVar6 = DAT_043f1fb0 * 8;
  puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar6 != 0) && (DAT_043f17b0 != param_1)) {
    puVar7 = &DAT_043f17b0;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
        __dest = puVar3;
        break;
      }
      __dest = puVar7 + 1;
      puVar1 = puVar7 + 1;
      puVar7 = __dest;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar3 != __dest) {
    puVar7 = __dest + 1;
    if (puVar7 != puVar3) {
      memmove(__dest,puVar7,(long)puVar3 - (long)puVar7);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  *(undefined8 *)(lVar8 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
  return;
}


