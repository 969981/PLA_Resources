/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6b46c; name: FUN_02b6b46c
 */


/* WARNING: Removing unreachable block (ram,0x02b6b5cc) */

void FUN_02b6b46c(long param_1,short param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x478) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
joined_r0x02b6b4a8:
  while ((lVar9 != 0 && (lVar6 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x478);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x478) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar1 != lVar9 || *(long *)(param_1 + 0x478) != lVar10) goto LAB_02b6b4b0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x474) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = *(ushort *)(*(long *)(param_1 + 200) + (long)param_2 * 2);
  uVar7 = (ulong)(short)uVar3;
  lVar6 = *(long *)(param_1 + 0x138);
  if (((1 << (ulong)(uVar3 & 0x1f) & *(uint *)(lVar6 + (uVar7 >> 3 & 0x1ffffffffffffffc))) == 0) &&
     (*(long *)(param_1 + 0x140) != lVar6)) {
    lVar9 = *(long *)(param_1 + 0x90);
    uVar8 = 0;
    do {
      lVar10 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      *(uint *)(lVar6 + lVar10) =
           *(uint *)(lVar6 + lVar10) | *(uint *)(*(long *)(lVar9 + uVar7 * 0x40) + lVar10);
      lVar6 = *(long *)(param_1 + 0x138);
    } while (uVar8 < (ulong)(*(long *)(param_1 + 0x140) - lVar6 >> 2));
  }
  lVar6 = *(long *)(param_1 + 0x270) + uVar7 * 0x30;
  uVar2 = param_3[1];
  *(undefined8 *)(lVar6 + 0x10) = *param_3;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x478) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x478) != lVar9) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x474) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b6b5dc;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar9 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar10 = *plVar1;
      if (lVar10 != lVar6 || *(long *)(param_1 + 0x478) != lVar9) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b6b620;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x474) = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b6b620:
    lVar6 = lVar10;
    lVar9 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b6b5dc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6b4b0:
  ClearExclusiveLocal();
  lVar9 = *plVar1;
  lVar10 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6b4a8;
}


