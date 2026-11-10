/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7ff1c; name: FUN_02b7ff1c
 */


/* WARNING: Removing unreachable block (ram,0x02b80020) */

undefined8 FUN_02b7ff1c(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_1 + 0x61e0);
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = plVar8 + 10;
  do {
    lVar6 = *plVar1;
    lVar2 = plVar8[0xb];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      plVar8[0xb] = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
joined_r0x02b7ff50:
  while ((lVar6 != 0 && (lVar5 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)((long)plVar8 + 0x44));
    do {
      lVar6 = *plVar1;
      lVar2 = plVar8[0xb];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        plVar8[0xb] = lVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    if (*plVar1 != lVar6 || plVar8[0xb] != lVar2) goto LAB_02b7ff58;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)((long)plVar8 + 0x54) = lVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*param_2 == '\0') {
    uVar7 = 0;
  }
  else if (*(ulong *)(param_2 + 8) < (ulong)(plVar8[1] - *plVar8 >> 5)) {
    uVar7 = *(undefined8 *)(*plVar8 + *(ulong *)(param_2 + 8) * 0x20);
  }
  else {
    uVar7 = 0;
  }
  do {
    lVar5 = *plVar1;
    lVar6 = plVar8[0xb];
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      plVar8[0xb] = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar5 || plVar8[0xb] != lVar6) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)((long)plVar8 + 0x54) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b80030;
  }
  ClearExclusiveLocal();
  lVar5 = *plVar1;
  lVar6 = plVar8[0xb];
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar5 || plVar8[0xb] != lVar6) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b80078;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        *(long *)((long)plVar8 + 0x54) = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_02b80078:
    lVar5 = lVar2;
    lVar6 = plVar8[0xb];
  } while (!bVar4);
LAB_02b80030:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar8 + 0x44));
  return uVar7;
LAB_02b7ff58:
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar2 = plVar8[0xb];
  goto joined_r0x02b7ff50;
}


