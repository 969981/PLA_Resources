/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b219a8; name: FUN_02b219a8
 */


void FUN_02b219a8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_38;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xf8) == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b21a10;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b21a10:
  puVar4 = *(undefined8 **)(param_1 + 0x108);
  for (puVar10 = *(undefined8 **)(param_1 + 0x100); puVar10 != puVar4; puVar10 = puVar10 + 1) {
    (**(code **)(*(long *)*puVar10 + 0x18))();
  }
  local_38 = *(undefined8 *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x68);
  lVar8 = *(long *)(param_1 + 0x70);
  uVar2 = 0;
  if (lVar8 - lVar7 != 0) {
    uVar2 = (lVar8 - lVar7 >> 3) * 0x12 - 1;
  }
  uVar9 = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0);
  if (uVar2 == uVar9) {
    FUN_02b23154(param_1 + 0x60);
    uVar9 = *(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0xa8);
    lVar7 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x70);
  }
  if (lVar8 == lVar7) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + (uVar9 / 0x12) * 8) + (uVar9 % 0x12) * 0xd8;
  }
  FUN_02b23f6c(param_1 + 0xb0,lVar7,&local_38);
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xf8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xf8) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0xf8) != lVar8) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xf8);
      goto LAB_02b21b34;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xf4) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_02b21b18;
LAB_02b21b34:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar7 && *(long *)(param_1 + 0xf8) == lVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xf4) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b21b34;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar3;
    lVar8 = *(long *)(param_1 + 0xf8);
  } while (!bVar6);
LAB_02b21b18:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


