/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6b298; name: FUN_02b6b298
 */


/* WARNING: Removing unreachable block (ram,0x02b6b408) */

void FUN_02b6b298(long param_1,short param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar11 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x478) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
joined_r0x02b6b2d4:
  while ((lVar11 != 0 && (lVar7 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar11 = *plVar1;
      lVar12 = *(long *)(param_1 + 0x478);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x478) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    if (*plVar1 != lVar11 || *(long *)(param_1 + 0x478) != lVar12) goto LAB_02b6b2dc;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x474) = lVar12 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar3 = *(ushort *)(*(long *)(param_1 + 200) + (long)param_2 * 2);
  lVar7 = *(long *)(param_1 + 0x138);
  uVar8 = (ulong)(short)uVar3;
  uVar4 = 1 << (ulong)(uVar3 & 0x1f);
  if (((uVar4 & *(uint *)(lVar7 + (uVar8 >> 5) * 4)) == 0) && (*(long *)(param_1 + 0x140) != lVar7))
  {
    lVar11 = *(long *)(param_1 + 0x90);
    uVar10 = 0;
    do {
      lVar12 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      *(uint *)(lVar7 + lVar12) =
           *(uint *)(lVar7 + lVar12) | *(uint *)(*(long *)(lVar11 + uVar8 * 0x40) + lVar12);
      lVar7 = *(long *)(param_1 + 0x138);
    } while (uVar10 < (ulong)(*(long *)(param_1 + 0x140) - lVar7 >> 2));
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x270) + uVar8 * 0x30);
  uVar2 = param_3[1];
  lVar7 = (uVar8 >> 5) * 4;
  *puVar9 = *param_3;
  puVar9[1] = uVar2;
  *(uint *)(*(long *)(param_1 + 0x1b8) + lVar7) =
       *(uint *)(*(long *)(param_1 + 0x1b8) + lVar7) | uVar4;
  do {
    lVar7 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar11) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b6b418;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar11 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar12 = *plVar1;
      if (lVar12 != lVar7 || *(long *)(param_1 + 0x478) != lVar11) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b6b45c;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x474) = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b6b45c:
    lVar7 = lVar12;
    lVar11 = *(long *)(param_1 + 0x478);
  } while (!bVar6);
LAB_02b6b418:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6b2dc:
  ClearExclusiveLocal();
  lVar11 = *plVar1;
  lVar12 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6b2d4;
}


