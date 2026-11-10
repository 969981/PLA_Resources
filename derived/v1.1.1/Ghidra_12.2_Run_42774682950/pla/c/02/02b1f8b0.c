/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1f8b0; name: FUN_02b1f8b0
 */


/* WARNING: Removing unreachable block (ram,0x02b1fabc) */

ulong FUN_02b1f8b0(long param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xf8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0xf8) = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar9 != 0 && (lVar5 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0xf8);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0xf8) = lVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar9 || *(long *)(param_1 + 0xf8) != lVar2) break;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0xf4) = lVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        uVar6 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
        lVar5 = *(long *)(*(long *)(param_1 + 0x68) + (uVar6 / 0x12) * 8);
        uVar6 = uVar6 % 0x12;
        uVar8 = *(ulong *)(lVar5 + uVar6 * 0xd8 + 0x78);
        if (uVar8 == 0) goto LAB_02b1fa80;
        uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar7 = *param_2;
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          uVar11 = uVar8 - 1 & uVar7;
        }
        else {
          uVar11 = uVar7;
          if (uVar8 <= uVar7) {
            uVar11 = 0;
            if (uVar8 != 0) {
              uVar11 = uVar7 / uVar8;
            }
            uVar11 = uVar7 - uVar11 * uVar8;
          }
        }
        plVar12 = *(long **)(*(long *)(lVar5 + uVar6 * 0xd8 + 0x70) + uVar11 * 8);
        if ((plVar12 == (long *)0x0) || (plVar12 = (long *)*plVar12, plVar12 == (long *)0x0))
        goto LAB_02b1fa80;
        if (1 < uVar10) goto LAB_02b1fa2c;
        goto LAB_02b1fa68;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xf8);
  } while( true );
LAB_02b1fa2c:
  do {
    uVar6 = plVar12[1];
    if (uVar6 == uVar7) {
      if (plVar12[2] == uVar7) goto LAB_02b1fae4;
    }
    else {
      if (uVar8 <= uVar6) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar10 * uVar8;
      }
      if (uVar6 != uVar11) break;
    }
    plVar12 = (long *)*plVar12;
  } while (plVar12 != (long *)0x0);
  goto LAB_02b1fa80;
LAB_02b1fae4:
  uVar8 = (ulong)*(uint *)(plVar12 + 6) << 0x20;
  uVar6 = 1;
  goto LAB_02b1fa88;
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
LAB_02b1fa68:
    if (plVar12[1] == uVar7) {
      if (plVar12[2] == uVar7) goto LAB_02b1fae4;
    }
    else if ((plVar12[1] & uVar8 - 1) != uVar11) break;
  }
LAB_02b1fa80:
  uVar6 = 0;
  uVar8 = 0;
LAB_02b1fa88:
  do {
    lVar5 = *plVar1;
    lVar9 = *(long *)(param_1 + 0xf8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xf8) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar5 || *(long *)(param_1 + 0xf8) != lVar9) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xf4) = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b1facc;
  }
  ClearExclusiveLocal();
  lVar5 = *plVar1;
  lVar9 = *(long *)(param_1 + 0xf8);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar5 || *(long *)(param_1 + 0xf8) != lVar9) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b1fb24;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0xf4) = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_02b1fb24:
    lVar5 = lVar2;
    lVar9 = *(long *)(param_1 + 0xf8);
  } while (!bVar4);
LAB_02b1facc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return uVar8 | uVar6;
}


