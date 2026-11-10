/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc8b20; name: FUN_02cc8b20
 */


void FUN_02cc8b20(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *__dest;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  *param_2 = (long)&PTR_LAB_04296e30;
  DAT_04408ba0 = 0;
  if (param_2[3] != 0) {
    (**(code **)(*(long *)param_2[1] + 0xb8))();
  }
  *param_2 = (long)(PTR_DAT_0437a000 + 0x10);
  if (((DAT_043f1fd0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043f1fd0), iVar7 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
    DAT_043f1fc8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1fd0);
  }
  lVar8 = nn::os::GetCurrentThread();
  do {
    if (DAT_043f1fc8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
        while (DAT_043f1fc8 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            DAT_043f1fc8 = lVar8;
          }
          if (cVar5 == '\0') goto LAB_02cc8be0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      DAT_043f1fc8 = lVar8;
    }
  } while (cVar5 != '\0');
LAB_02cc8be0:
  lVar8 = DAT_043f1fb0 * 8;
  puVar2 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar8 != 0) && (DAT_043f17b0 != param_2)) {
    puVar10 = &DAT_043f17b0;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) {
        __dest = puVar2;
        break;
      }
      __dest = puVar10 + 1;
      puVar1 = puVar10 + 1;
      puVar10 = __dest;
    } while ((long *)*puVar1 != param_2);
  }
  if (puVar2 != __dest) {
    puVar10 = __dest + 1;
    if (puVar10 != puVar2) {
      memmove(__dest,puVar10,(long)puVar2 - (long)puVar10);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  DAT_043f1fc8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
  plVar3 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar11 = param_1[2];
  uVar9 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  lVar8 = tpidr_el0;
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar3,param_2,uVar4,uVar11);
      goto LAB_02cc8cf0;
    }
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,uVar4,uVar11);
LAB_02cc8cf0:
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  return;
}


