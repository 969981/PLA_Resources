/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21278; name: FUN_02b21278
 */


/* WARNING: Removing unreachable block (ram,0x02b213b4) */

bool FUN_02b21278(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  if (*param_2 == '\0') {
    return false;
  }
  iVar3 = *(int *)(param_2 + 4);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    lVar4 = *plVar1;
    lVar10 = *(long *)(param_1 + 0xf8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xf8) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
joined_r0x02b212b4:
  while ((lVar4 != 0 && (lVar7 != lVar4))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
    do {
      lVar4 = *plVar1;
      lVar10 = *(long *)(param_1 + 0xf8);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar4;
        *(long *)(param_1 + 0xf8) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    if (*plVar1 != lVar4 || *(long *)(param_1 + 0xf8) != lVar10) goto LAB_02b212bc;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xf4) = lVar10 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar8 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x68) + (uVar8 / 0x12) * 8) +
                   (uVar8 % 0x12) * 0xd8);
  lVar7 = *plVar9;
  lVar4 = plVar9[1];
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_1 + 0xf8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0xf8) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar10 || *(long *)(param_1 + 0xf8) != lVar11) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0xf4) = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b213cc;
  }
  ClearExclusiveLocal();
  lVar10 = *plVar1;
  lVar11 = *(long *)(param_1 + 0xf8);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar10 || *(long *)(param_1 + 0xf8) != lVar11) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b21414;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0xf4) = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b21414:
    lVar10 = lVar2;
    lVar11 = *(long *)(param_1 + 0xf8);
  } while (!bVar6);
LAB_02b213cc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return (ulong)(long)iVar3 < (ulong)((lVar4 - lVar7 >> 4) * -0x7b425ed097b425ed);
LAB_02b212bc:
  ClearExclusiveLocal();
  lVar4 = *plVar1;
  lVar10 = *(long *)(param_1 + 0xf8);
  goto joined_r0x02b212b4;
}


