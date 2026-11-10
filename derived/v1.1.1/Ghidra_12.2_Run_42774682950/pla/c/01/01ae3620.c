/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae3620; name: FUN_01ae3620
 */


void FUN_01ae3620(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *__dest;
  long lVar7;
  undefined8 *puVar8;
  
  *param_1 = (long)&PTR_LAB_0423db28;
  if (param_1[4] == 0) {
    lVar7 = param_1[9];
  }
  else {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
    lVar7 = param_1[9];
  }
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[6];
  }
  else {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
    plVar6 = (long *)param_1[6];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  if (((DAT_043f1fd0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043f1fd0), iVar5 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
    DAT_043f1fc8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1fd0);
  }
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (DAT_043f1fc8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
        while (DAT_043f1fc8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_043f1fc8 = lVar7;
          }
          if (cVar3 == '\0') goto LAB_01ae36e0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_043f1fc8 = lVar7;
    }
  } while (cVar3 != '\0');
LAB_01ae36e0:
  lVar7 = DAT_043f1fb0 * 8;
  puVar2 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar7 != 0) && (DAT_043f17b0 != param_1)) {
    puVar8 = &DAT_043f17b0;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) {
        __dest = puVar2;
        break;
      }
      __dest = puVar8 + 1;
      puVar1 = puVar8 + 1;
      puVar8 = __dest;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar2 != __dest) {
    puVar8 = __dest + 1;
    if (puVar8 != puVar2) {
      memmove(__dest,puVar8,(long)puVar2 - (long)puVar8);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  DAT_043f1fc8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
  return;
}


