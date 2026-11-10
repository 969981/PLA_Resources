/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6b088; name: FUN_02b6b088
 */


/* WARNING: Removing unreachable block (ram,0x02b6b22c) */

void FUN_02b6b088(long param_1,undefined4 param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar11 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x478) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
joined_r0x02b6b0c0:
  while ((lVar11 != 0 && (lVar6 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar11 = *plVar1;
      lVar12 = *(long *)(param_1 + 0x478);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x478) = lVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar1 != lVar11 || *(long *)(param_1 + 0x478) != lVar12) goto LAB_02b6b0c8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x474) = lVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar2 = *(ushort *)(*(long *)(param_1 + 200) + (long)(short)param_2 * 2);
  lVar6 = *(long *)(param_1 + 0x138);
  uVar13 = (ulong)(short)uVar2;
  uVar3 = 1 << (ulong)(uVar2 & 0x1f);
  if (((uVar3 & *(uint *)(lVar6 + (uVar13 >> 5) * 4)) == 0) && (*(long *)(param_1 + 0x140) != lVar6)
     ) {
    lVar11 = *(long *)(param_1 + 0x90);
    uVar9 = 0;
    do {
      lVar12 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      *(uint *)(lVar6 + lVar12) =
           *(uint *)(lVar6 + lVar12) | *(uint *)(*(long *)(lVar11 + uVar13 * 0x40) + lVar12);
      lVar6 = *(long *)(param_1 + 0x138);
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x140) - lVar6 >> 2));
  }
  puVar7 = (undefined8 *)FUN_02b68f84(param_1,param_2);
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x270) + uVar13 * 0x30);
  uVar10 = puVar7[3];
  puVar8[5] = puVar7[5];
  puVar8[3] = uVar10;
  uVar10 = puVar7[2];
  puVar8[4] = puVar7[4];
  puVar8[2] = uVar10;
  uVar10 = puVar7[1];
  *puVar8 = *puVar7;
  puVar8[1] = uVar10;
  lVar6 = (uVar13 >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x1b8) + lVar6) =
       *(uint *)(*(long *)(param_1 + 0x1b8) + lVar6) | uVar3;
  *(uint *)(*(long *)(param_1 + 0x1f8) + lVar6) =
       *(uint *)(*(long *)(param_1 + 0x1f8) + lVar6) | uVar3;
  do {
    lVar6 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x478) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x478) != lVar11) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x474) = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b6b23c;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar11 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar12 = *plVar1;
      if (lVar12 != lVar6 || *(long *)(param_1 + 0x478) != lVar11) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b6b288;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x474) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b6b288:
    lVar6 = lVar12;
    lVar11 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b6b23c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6b0c8:
  ClearExclusiveLocal();
  lVar11 = *plVar1;
  lVar12 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6b0c0;
}


