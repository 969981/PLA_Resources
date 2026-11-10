/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6ba60; name: FUN_02b6ba60
 */


/* WARNING: Removing unreachable block (ram,0x02b6bc18) */

void FUN_02b6ba60(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar10 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x478);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x478) = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
joined_r0x02b6ba90:
  while ((lVar10 != 0 && (lVar6 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar10 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x478);
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x478) = lVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    if (*plVar1 != lVar10 || *(long *)(param_1 + 0x478) != lVar2) goto LAB_02b6ba98;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x474) = lVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar5 = (int)(short)((short)((uint)(*(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x270)) >> 4) *
                      -0x5555);
  if (0 < iVar5) {
    uVar11 = 0;
    do {
      if ((1 << (ulong)(uVar11 & 0x1f) &
          *(uint *)(*(long *)(param_1 + 0x138) + (ulong)(uVar11 >> 5 & 0x7ff) * 4)) != 0) {
        FUN_02b697ac(param_1,uVar11);
      }
      uVar11 = (uint)(short)((short)uVar11 + 1);
    } while ((int)uVar11 < iVar5);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x3c0) + 0x58);
  (**(code **)(*plVar7 + 0x10))
            (plVar7,*(undefined8 *)(param_1 + 0x388),*(long *)(param_1 + 0x2a8),
             *(undefined8 *)(param_1 + 0x350),
             (ulong)(*(long *)(param_1 + 0x2b0) - *(long *)(param_1 + 0x2a8)) >> 6);
  if (*(long *)(param_1 + 0x3c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3c8) + 0x58) + 0x18))();
  }
  uVar9 = *(long *)(param_1 + 0x1c0) - (long)*(undefined4 **)(param_1 + 0x1b8);
  if (0 < (long)uVar9) {
    uVar9 = uVar9 >> 2;
    puVar8 = *(undefined4 **)(param_1 + 0x1b8);
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (0 < (long)uVar9);
  }
  uVar9 = *(long *)(param_1 + 0x200) - (long)*(undefined4 **)(param_1 + 0x1f8);
  if (0 < (long)uVar9) {
    uVar9 = uVar9 >> 2;
    puVar8 = *(undefined4 **)(param_1 + 0x1f8);
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (0 < (long)uVar9);
  }
  do {
    lVar6 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x478);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x478) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x478) != lVar10) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x474) = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b6bc28;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar10 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar6 || *(long *)(param_1 + 0x478) != lVar10) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b6bc70;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x474) = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_02b6bc70:
    lVar6 = lVar2;
    lVar10 = *(long *)(param_1 + 0x478);
  } while (!bVar4);
LAB_02b6bc28:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b6ba98:
  ClearExclusiveLocal();
  lVar10 = *plVar1;
  lVar2 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6ba90;
}


