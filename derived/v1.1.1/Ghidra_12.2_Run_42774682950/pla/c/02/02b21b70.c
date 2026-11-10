/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21b70; name: FUN_02b21b70
 */


void FUN_02b21b70(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xf8) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b21bd4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b21bd4:
  puVar3 = *(undefined8 **)(param_1 + 0x108);
  for (puVar9 = *(undefined8 **)(param_1 + 0x100); puVar9 != puVar3; puVar9 = puVar9 + 1) {
    (**(code **)(*(long *)*puVar9 + 0x20))();
  }
  if (*(ulong *)(param_1 + 0xa8) < 2) {
    uVar7 = (*(ulong *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
    FUN_02b21790(*(long *)(*(long *)(param_1 + 0x68) + (uVar7 / 0x12) * 8) + (uVar7 % 0x12) * 0xd8);
  }
  else {
    FUN_02b24acc(param_1 + 0x60);
  }
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xf8);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xf8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0xf8) != lVar8) {
      ClearExclusiveLocal();
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xf8);
      goto LAB_02b21ca8;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xf4) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02b21c94;
LAB_02b21ca8:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar6 && *(long *)(param_1 + 0xf8) == lVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xf4) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b21ca8;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar2;
    lVar8 = *(long *)(param_1 + 0xf8);
  } while (!bVar5);
LAB_02b21c94:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


