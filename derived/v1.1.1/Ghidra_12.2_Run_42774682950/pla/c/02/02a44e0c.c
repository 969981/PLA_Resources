/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a44e0c; name: FUN_02a44e0c
 */


void FUN_02a44e0c(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong *extraout_x8;
  ulong *puVar7;
  
  uVar5 = (int)param_3 - *(int *)(param_2 + 0xd8);
  if ((1L << ((ulong)uVar5 & 0x3f) &
      *(ulong *)(*(long *)(param_2 + 0x160) + ((ulong)(uVar5 >> 3) & 0x1ffffff8))) == 0) {
LAB_02a44f10:
    *param_1 = 0;
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x60);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x54));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a44e9c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a44e9c:
  if ((param_3 & 0xffffffff) < *(ulong *)(param_2 + 0xb0)) {
    uVar2 = *(long *)(param_2 + 0xa8) + (param_3 & 0xffffffff);
    puVar7 = (ulong *)(*(long *)(*(long *)(param_2 + 0x70) + (uVar2 >> 4 & 0xffffffffffffff8)) +
                      (uVar2 & 0x7f) * 0x20);
    if (*puVar7 != param_3) {
      *(undefined8 *)(param_2 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x54));
      goto LAB_02a44f10;
    }
    *param_1 = (long)puVar7;
    if (puVar7 == (ulong *)0x0) goto LAB_02a44ee0;
  }
  else {
    FUN_02a47050();
    puVar7 = extraout_x8;
  }
  puVar7 = puVar7 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar4) {
      *(int *)puVar7 = (int)*puVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a44ee0:
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x54));
  return;
}


