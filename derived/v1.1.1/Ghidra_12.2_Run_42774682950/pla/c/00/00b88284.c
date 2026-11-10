/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b88284; name: FUN_00b88284
 */


/* WARNING: Removing unreachable block (ram,0x00b884c0) */

bool FUN_00b88284(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  uVar8 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x2d0);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar6;
    }
    else if (uVar6 < uVar8) {
      uVar10 = uVar6;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar6 / uVar8;
      }
      uVar10 = uVar6 - uVar10 * uVar8;
    }
    plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0x2c8) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) {
              return true;
            }
          }
          else if ((plVar12[1] & uVar8 - 1) != uVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar12[1];
          if (uVar9 == uVar6) {
            if (plVar12[2] == uVar6) {
              return true;
            }
          }
          else {
            if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0xa0);
  do {
    lVar1 = *plVar12;
    lVar7 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar1;
      *(long *)(param_1 + 0xa8) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar1 != 0 && (lVar5 != lVar1))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
      do {
        lVar1 = *plVar12;
        lVar7 = *(long *)(param_1 + 0xa8);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar1;
          *(long *)(param_1 + 0xa8) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar12 != lVar1 || *(long *)(param_1 + 0xa8) != lVar7) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar1;
        *(long *)(param_1 + 0xa4) = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar8 = *(ulong *)(*(long *)(param_1 + 0x70) + 0x2d0);
        if (uVar8 == 0) goto LAB_00b885c8;
        uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar6 = *param_2;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar10 = uVar8 - 1 & uVar6;
        }
        else if (uVar6 < uVar8) {
          uVar10 = uVar6;
        }
        else {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar6 / uVar8;
          }
          uVar10 = uVar6 - uVar10 * uVar8;
        }
        plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x70) + 0x2c8) + uVar10 * 8);
        if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
        goto LAB_00b885c8;
        if (1 < uVar9) goto LAB_00b88594;
        goto LAB_00b88458;
      }
    }
    ClearExclusiveLocal();
    lVar1 = *plVar12;
    lVar7 = *(long *)(param_1 + 0xa8);
  } while( true );
LAB_00b88594:
  do {
    uVar9 = plVar13[1];
    if (uVar9 == uVar6) {
      if (plVar13[2] == uVar6) goto LAB_00b88470;
    }
    else {
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      if (uVar9 != uVar10) goto LAB_00b885c8;
    }
    plVar13 = (long *)*plVar13;
    plVar14 = (long *)0x0;
  } while (plVar13 != (long *)0x0);
  goto LAB_00b88474;
LAB_00b885c8:
  plVar14 = (long *)0x0;
  goto LAB_00b88474;
LAB_00b88470:
  plVar14 = plVar13;
  goto LAB_00b88474;
  while( true ) {
    plVar13 = (long *)*plVar13;
    plVar14 = (long *)0x0;
    if (plVar13 == (long *)0x0) break;
LAB_00b88458:
    if (plVar13[1] == uVar6) {
      if (plVar13[2] == uVar6) goto LAB_00b88470;
    }
    else if ((plVar13[1] & uVar8 - 1) != uVar10) goto LAB_00b885c8;
  }
LAB_00b88474:
  do {
    lVar5 = *plVar12;
    lVar1 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar12;
    lVar11 = *(long *)(param_1 + 0xa8);
    if (lVar7 != lVar5 || lVar11 != lVar1) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      *(long *)(param_1 + 0xa4) = lVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00b88500;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar5 = *plVar12;
      if (lVar5 != lVar7 || *(long *)(param_1 + 0xa8) != lVar11) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b884cc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar7;
        *(long *)(param_1 + 0xa4) = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b884cc:
    lVar7 = lVar5;
    lVar11 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00b88500:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return plVar14 != (long *)0x0;
}


