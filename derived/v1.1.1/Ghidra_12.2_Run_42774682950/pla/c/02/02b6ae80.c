/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6ae80; name: FUN_02b6ae80
 */


/* WARNING: Removing unreachable block (ram,0x02b6b024) */

void FUN_02b6ae80(long param_1,short param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar12 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x478) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
joined_r0x02b6aebc:
  while ((lVar12 != 0 && (lVar6 != lVar12))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar12 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x478);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12;
        *(long *)(param_1 + 0x478) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar1 != lVar12 || *(long *)(param_1 + 0x478) != lVar13) goto LAB_02b6aec4;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x474) = lVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar2 = *(ushort *)(*(long *)(param_1 + 200) + (long)param_2 * 2);
  lVar6 = *(long *)(param_1 + 0x138);
  uVar7 = (ulong)(short)uVar2;
  uVar3 = 1 << (ulong)(uVar2 & 0x1f);
  if (((uVar3 & *(uint *)(lVar6 + (uVar7 >> 5) * 4)) == 0) && (*(long *)(param_1 + 0x140) != lVar6))
  {
    lVar12 = *(long *)(param_1 + 0x90);
    uVar11 = 0;
    do {
      lVar13 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(uint *)(lVar6 + lVar13) =
           *(uint *)(lVar6 + lVar13) | *(uint *)(*(long *)(lVar12 + uVar7 * 0x40) + lVar13);
      lVar6 = *(long *)(param_1 + 0x138);
    } while (uVar11 < (ulong)(*(long *)(param_1 + 0x140) - lVar6 >> 2));
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x270) + uVar7 * 0x30);
  uVar10 = param_3[1];
  *puVar8 = *param_3;
  uVar9 = param_3[5];
  puVar8[3] = param_3[3];
  puVar8[5] = uVar9;
  puVar8[1] = uVar10;
  uVar10 = param_3[2];
  puVar8[4] = param_3[4];
  puVar8[2] = uVar10;
  lVar6 = (uVar7 >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x1b8) + lVar6) =
       *(uint *)(*(long *)(param_1 + 0x1b8) + lVar6) | uVar3;
  *(uint *)(*(long *)(param_1 + 0x1f8) + lVar6) =
       *(uint *)(*(long *)(param_1 + 0x1f8) + lVar6) | uVar3;
  do {
    lVar6 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x478) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x478) != lVar12) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x474) = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b6b034;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar12 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar13 = *plVar1;
      if (lVar13 != lVar6 || *(long *)(param_1 + 0x478) != lVar12) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b6b078;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x474) = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b6b078:
    lVar6 = lVar13;
    lVar12 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b6b034:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6aec4:
  ClearExclusiveLocal();
  lVar12 = *plVar1;
  lVar13 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6aebc;
}


