/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aeebd0; name: FUN_02aeebd0
 */


/* WARNING: Removing unreachable block (ram,0x02aeedb4) */

undefined8 FUN_02aeebd0(long param_1,ulong *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x290);
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x298);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x298) = lVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar9 != 0 && (lVar6 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x284));
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x298);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x298) = lVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar9 || *(long *)(param_1 + 0x298) != lVar2) break;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x294) = lVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        uVar8 = *(ulong *)(param_1 + 0x1b0);
        if (uVar8 == 0) {
          uVar13 = 0;
          goto LAB_02aeed80;
        }
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
        plVar12 = *(long **)(*(long *)(param_1 + 0x1a8) + uVar11 * 8);
        if (plVar12 == (long *)0x0) {
          uVar13 = 0;
          goto LAB_02aeed80;
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          uVar13 = 0;
          goto LAB_02aeed80;
        }
        if (1 < uVar10) goto LAB_02aeecf4;
        goto LAB_02aeed3c;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x298);
  } while( true );
LAB_02aeecf4:
  do {
    uVar10 = plVar12[1];
    if (uVar10 == uVar7) {
      if (plVar12[2] == uVar7) goto LAB_02aeed74;
    }
    else {
      if (uVar8 <= uVar10) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar10 / uVar8;
        }
        uVar10 = uVar10 - uVar5 * uVar8;
      }
      if (uVar10 != uVar11) {
        uVar13 = 0;
        break;
      }
    }
    plVar12 = (long *)*plVar12;
    uVar13 = 0;
  } while (plVar12 != (long *)0x0);
  goto LAB_02aeed80;
LAB_02aeed74:
  uVar13 = 1;
  *param_3 = (int)plVar12[6];
  goto LAB_02aeed80;
  while( true ) {
    plVar12 = (long *)*plVar12;
    uVar13 = 0;
    if (plVar12 == (long *)0x0) break;
LAB_02aeed3c:
    if (plVar12[1] == uVar7) {
      if (plVar12[2] == uVar7) goto LAB_02aeed74;
    }
    else if ((plVar12[1] & uVar8 - 1) != uVar11) {
      uVar13 = 0;
      break;
    }
  }
LAB_02aeed80:
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x298);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x298) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(param_1 + 0x298) != lVar9) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x294) = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02aeedc4;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar9 = *(long *)(param_1 + 0x298);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar6 || *(long *)(param_1 + 0x298) != lVar9) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02aeee30;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x294) = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_02aeee30:
    lVar6 = lVar2;
    lVar9 = *(long *)(param_1 + 0x298);
  } while (!bVar4);
LAB_02aeedc4:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x284));
  return uVar13;
}


