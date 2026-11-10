/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae4bcc; name: FUN_00ae4bcc
 */


void FUN_00ae4bcc(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *__dest;
  undefined8 *puVar11;
  long *plVar12;
  
  if (4 < *param_2) {
    plVar12 = (long *)FUN_00ae58d0();
    *plVar12 = (long)&PTR_LAB_041d36b8;
    DAT_043a9ff8 = 0;
    if (plVar12[3] != 0) {
      (**(code **)(*(long *)plVar12[1] + 0xb8))();
    }
    if (plVar12[7] != 0) {
      (**(code **)(*(long *)plVar12[5] + 0xb8))();
    }
    if (plVar12[0xb] != 0) {
      (**(code **)(*(long *)plVar12[9] + 0xb8))();
    }
    if (plVar12[0xf] != 0) {
      (**(code **)(*(long *)plVar12[0xd] + 0xb8))();
    }
    if (plVar12[0x13] != 0) {
      (**(code **)(*(long *)plVar12[0x11] + 0xb8))();
    }
    *plVar12 = (long)(PTR_DAT_0437a000 + 0x10);
    lVar9 = FUN_02bcf6a4();
    lVar10 = nn::os::GetCurrentThread();
    plVar2 = (long *)(lVar9 + 0x10);
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 4));
          while (*plVar2 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00ae4e00;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00ae4e00:
    lVar10 = DAT_043f1fb0 * 8;
    puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
    __dest = &DAT_043f17b0;
    if ((lVar10 != 0) && (DAT_043f17b0 != plVar12)) {
      puVar11 = &DAT_043f17b0;
      do {
        lVar10 = lVar10 + -8;
        if (lVar10 == 0) {
          __dest = puVar3;
          break;
        }
        __dest = puVar11 + 1;
        puVar1 = puVar11 + 1;
        puVar11 = __dest;
      } while ((long *)*puVar1 != plVar12);
    }
    if (puVar3 != __dest) {
      puVar11 = __dest + 1;
      if (puVar11 != puVar3) {
        memmove(__dest,puVar11,(long)puVar3 - (long)puVar11);
      }
      DAT_043f1fb0 = DAT_043f1fb0 + -1;
    }
    *(undefined8 *)(lVar9 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 4));
    return;
  }
  param_1 = param_1 + (ulong)*param_2 * 0x20;
  (**(code **)**(undefined8 **)(param_1 + 8))();
  *(undefined8 *)(param_1 + 8) = 0;
  plVar12 = *(long **)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar8 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar12,uVar4,uVar5,8);
      goto LAB_00ae4c80;
    }
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,uVar4,uVar5,8);
LAB_00ae4c80:
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


