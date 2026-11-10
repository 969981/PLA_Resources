/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6a9fc; name: FUN_02b6a9fc
 */


/* WARNING: Removing unreachable block (ram,0x02b6ab4c) */

undefined1  [16] FUN_02b6a9fc(long param_1,short param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar8 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x478) = lVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
joined_r0x02b6aa30:
  while ((lVar8 != 0 && (lVar7 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar8 = *plVar1;
      lVar3 = *(long *)(param_1 + 0x478);
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x478) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar1 != lVar8 || *(long *)(param_1 + 0x478) != lVar3) goto LAB_02b6aa38;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x474) = lVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x2a8) +
           (long)*(short *)(*(long *)(param_1 + 200) + (long)param_2 * 2) * 0x40);
  uVar13 = puVar2[1];
  uVar10 = *puVar2;
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar12 = (float)uVar13;
  fVar14 = (float)((ulong)uVar13 >> 0x20);
  auVar6._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * fVar9 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x428) >> 0x20) * fVar11 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20) * fVar12 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20) * fVar14;
  auVar6._8_4_ = (float)*(undefined8 *)(param_1 + 0x418) * fVar9 +
                 (float)*(undefined8 *)(param_1 + 0x428) * fVar11 +
                 (float)*(undefined8 *)(param_1 + 0x438) * fVar12 +
                 (float)*(undefined8 *)(param_1 + 0x448) * fVar14;
  auVar6._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * fVar9 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20) * fVar11 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) * fVar12 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20) * fVar14;
  auVar6._0_4_ = (float)*(undefined8 *)(param_1 + 0x410) * fVar9 +
                 (float)*(undefined8 *)(param_1 + 0x420) * fVar11 +
                 (float)*(undefined8 *)(param_1 + 0x430) * fVar12 +
                 (float)*(undefined8 *)(param_1 + 0x440) * fVar14;
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar8) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b6ab5c;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar8 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar3 = *plVar1;
      if (lVar3 != lVar7 || *(long *)(param_1 + 0x478) != lVar8) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b6abac;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x474) = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b6abac:
    lVar7 = lVar3;
    lVar8 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
LAB_02b6ab5c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return auVar6;
LAB_02b6aa38:
  ClearExclusiveLocal();
  lVar8 = *plVar1;
  lVar3 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6aa30;
}


