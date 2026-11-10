/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6b630; name: FUN_02b6b630
 */


/* WARNING: Removing unreachable block (ram,0x02b6b7a0) */

void FUN_02b6b630(long param_1,short param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x478) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
joined_r0x02b6b66c:
  while ((lVar10 != 0 && (lVar7 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x478);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x478) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    if (*plVar1 != lVar10 || *(long *)(param_1 + 0x478) != lVar11) goto LAB_02b6b674;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x474) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar3 = *(ushort *)(*(long *)(param_1 + 200) + (long)param_2 * 2);
  lVar7 = *(long *)(param_1 + 0x138);
  uVar8 = (ulong)(short)uVar3;
  uVar4 = 1 << (ulong)(uVar3 & 0x1f);
  if (((uVar4 & *(uint *)(lVar7 + (uVar8 >> 5) * 4)) == 0) && (*(long *)(param_1 + 0x140) != lVar7))
  {
    lVar10 = *(long *)(param_1 + 0x90);
    uVar9 = 0;
    do {
      lVar11 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      *(uint *)(lVar7 + lVar11) =
           *(uint *)(lVar7 + lVar11) | *(uint *)(*(long *)(lVar10 + uVar8 * 0x40) + lVar11);
      lVar7 = *(long *)(param_1 + 0x138);
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x140) - lVar7 >> 2));
  }
  lVar10 = *(long *)(param_1 + 0x270) + uVar8 * 0x30;
  uVar2 = param_3[1];
  lVar7 = (uVar8 >> 5) * 4;
  *(undefined8 *)(lVar10 + 0x20) = *param_3;
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  *(uint *)(*(long *)(param_1 + 0x1f8) + lVar7) =
       *(uint *)(*(long *)(param_1 + 0x1f8) + lVar7) | uVar4;
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar10) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b6b7b0;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar10 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar11 = *plVar1;
      if (lVar11 != lVar7 || *(long *)(param_1 + 0x478) != lVar10) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b6b7f4;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x474) = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b6b7f4:
    lVar7 = lVar11;
    lVar10 = *(long *)(param_1 + 0x478);
  } while (!bVar6);
LAB_02b6b7b0:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6b674:
  ClearExclusiveLocal();
  lVar10 = *plVar1;
  lVar11 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6b66c;
}


