/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7b3e4; name: FUN_00b7b3e4
 */


bool FUN_00b7b3e4(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar11 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar11 = uVar6;
    }
    else {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar6 / uVar7;
      }
      uVar11 = uVar6 - uVar11 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0x58) + uVar11 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) {
              return true;
            }
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar11) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) {
              return true;
            }
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar11) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0xa0);
  do {
    lVar9 = *plVar10;
    lVar1 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar9;
      *(long *)(param_1 + 0xa8) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar9 != 0 && (lVar5 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
      do {
        lVar9 = *plVar10;
        lVar1 = *(long *)(param_1 + 0xa8);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9;
          *(long *)(param_1 + 0xa8) = lVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar10 != lVar9 || *(long *)(param_1 + 0xa8) != lVar1) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar9;
        *(long *)(param_1 + 0xa4) = lVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar7 = *(ulong *)(*(long *)(param_1 + 0x70) + 0x60);
        if (uVar7 == 0) goto LAB_00b7b720;
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar6 = *param_2;
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar11 = uVar7 - 1 & uVar6;
        }
        else if (uVar6 < uVar7) {
          uVar11 = uVar6;
        }
        else {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar6 / uVar7;
          }
          uVar11 = uVar6 - uVar11 * uVar7;
        }
        plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x70) + 0x58) + uVar11 * 8);
        if ((plVar12 == (long *)0x0) || (plVar12 = (long *)*plVar12, plVar12 == (long *)0x0))
        goto LAB_00b7b720;
        if (1 < uVar8) goto LAB_00b7b600;
        goto LAB_00b7b654;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar10;
    lVar1 = *(long *)(param_1 + 0xa8);
  } while( true );
LAB_00b7b600:
  do {
    uVar8 = plVar12[1];
    if (uVar8 == uVar6) {
      if (plVar12[2] == uVar6) goto LAB_00b7b68c;
    }
    else {
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      if (uVar8 != uVar11) goto LAB_00b7b720;
    }
    plVar12 = (long *)*plVar12;
    plVar13 = (long *)0x0;
  } while (plVar12 != (long *)0x0);
  goto LAB_00b7b690;
LAB_00b7b720:
  plVar13 = (long *)0x0;
  goto LAB_00b7b690;
LAB_00b7b68c:
  plVar13 = plVar12;
  goto LAB_00b7b690;
  while( true ) {
    plVar12 = (long *)*plVar12;
    plVar13 = (long *)0x0;
    if (plVar12 == (long *)0x0) break;
LAB_00b7b654:
    if (plVar12[1] == uVar6) {
      if (plVar12[2] == uVar6) goto LAB_00b7b68c;
    }
    else if ((plVar12[1] & uVar7 - 1) != uVar11) goto LAB_00b7b720;
  }
LAB_00b7b690:
  do {
    lVar5 = *plVar10;
    lVar9 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    if (*plVar10 != lVar5 || *(long *)(param_1 + 0xa8) != lVar9) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar5;
      *(long *)(param_1 + 0xa4) = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00b7b718;
  }
  ClearExclusiveLocal();
  lVar5 = *plVar10;
  lVar9 = *(long *)(param_1 + 0xa8);
  do {
    do {
      lVar1 = *plVar10;
      if (lVar1 != lVar5 || *(long *)(param_1 + 0xa8) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b7b6fc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar5;
        *(long *)(param_1 + 0xa4) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b7b6fc:
    lVar5 = lVar1;
    lVar9 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00b7b718:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return plVar13 != (long *)0x0;
}


