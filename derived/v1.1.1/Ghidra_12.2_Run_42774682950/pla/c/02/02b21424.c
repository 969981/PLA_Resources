/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21424; name: FUN_02b21424
 */


undefined8 FUN_02b21424(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  uVar6 = FUN_02b21278();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b214a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b214a8:
  puVar3 = *(undefined8 **)(param_1 + 0x108);
  uVar6 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  lVar7 = *(long *)(*(long *)(param_1 + 0x68) + (uVar6 / 0x12) * 8);
  uVar6 = uVar6 % 0x12;
  plVar10 = (long *)(lVar7 + uVar6 * 0xd8);
  uVar9 = (ulong)*(int *)(param_2 + 4);
  for (puVar11 = *(undefined8 **)(param_1 + 0x100); puVar11 != puVar3; puVar11 = puVar11 + 1) {
    (**(code **)(*(long *)*puVar11 + 8))((long *)*puVar11,param_2,*plVar10 + uVar9 * 0x1b0);
  }
  lVar7 = lVar7 + uVar6 * 0xd8;
  FUN_02b2479c(lVar7 + 0x70,*plVar10 + uVar9 * 0x1b0);
  lVar7 = *(long *)(lVar7 + 0x38);
  uVar6 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar7 + uVar6) =
       *(ulong *)(lVar7 + uVar6) & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
  *(undefined1 *)(*plVar10 + uVar9 * 0x1b0 + 0x1a8) = 0;
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xf8);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xf8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0xf8) != lVar8) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xf8);
      goto LAB_02b215d4;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xf4) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02b215ac;
LAB_02b215d4:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar7 && *(long *)(param_1 + 0xf8) == lVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xf4) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b215d4;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0xf8);
  } while (!bVar5);
LAB_02b215ac:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return 1;
}


