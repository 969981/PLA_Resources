/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cc30fc; name: FUN_00cc30fc
 */


void FUN_00cc30fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  uVar4 = FUN_00cc333c(*(long *)(param_1 + 0x68) + 0x1f8);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar9 != 0 || *(long *)(param_1 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar9 == 0 && *(long *)(param_1 + 0xa8) == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar5;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00cc3184;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar5;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00cc3184:
  puVar6 = (undefined8 *)FUN_00bed0b0(*(long *)(param_1 + 0x70) + 0x1f8,param_2);
  *puVar6 = *param_3;
  puVar6[1] = param_3[1];
  puVar6[2] = param_3[2];
  plVar9 = (long *)param_3[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar7 = (long *)puVar6[3];
  puVar6[3] = plVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  plVar9 = (long *)(param_1 + 0xa0);
  do {
    lVar5 = *plVar9;
    lVar8 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (*plVar9 != lVar5 || *(long *)(param_1 + 0xa8) != lVar8) {
      ClearExclusiveLocal();
      lVar5 = *plVar9;
      lVar8 = *(long *)(param_1 + 0xa8);
      goto LAB_00cc3244;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = 0;
      *(long *)(param_1 + 0xa4) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00cc3218;
LAB_00cc3244:
  do {
    lVar1 = *plVar9;
    if (lVar1 == lVar5 && *(long *)(param_1 + 0xa8) == lVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 0;
        *(long *)(param_1 + 0xa4) = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00cc3244;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    lVar5 = lVar1;
    lVar8 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00cc3218:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


