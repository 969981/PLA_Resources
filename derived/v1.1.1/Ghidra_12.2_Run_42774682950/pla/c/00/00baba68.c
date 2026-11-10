/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00baba68; name: FUN_00baba68
 */


/* WARNING: Removing unreachable block (ram,0x00babd60) */

bool FUN_00baba68(long param_1,ulong *param_2)

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
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  
  uVar8 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x338);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar12 = uVar8 - 1 & uVar6;
    }
    else if (uVar6 < uVar8) {
      uVar12 = uVar6;
    }
    else {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar6 / uVar8;
      }
      uVar12 = uVar6 - uVar12 * uVar8;
    }
    plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0x330) + uVar12 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar6) {
            if (plVar11[2] == uVar6) {
              return true;
            }
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar12) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar6) {
            if (plVar11[2] == uVar6) {
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
            if (uVar9 != uVar12) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0xa0);
  do {
    lVar1 = *plVar11;
    lVar7 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar1;
      *(long *)(param_1 + 0xa8) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar1 != 0 && (lVar5 != lVar1))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
      do {
        lVar1 = *plVar11;
        lVar7 = *(long *)(param_1 + 0xa8);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar1;
          *(long *)(param_1 + 0xa8) = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    while( true ) {
      if (*plVar11 != lVar1 || *(long *)(param_1 + 0xa8) != lVar7) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar1;
        *(long *)(param_1 + 0xa4) = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar8 = *(ulong *)(*(long *)(param_1 + 0x70) + 0x338);
        if (uVar8 == 0) goto LAB_00babc64;
        uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar6 = *param_2;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar12 = uVar8 - 1 & uVar6;
        }
        else if (uVar6 < uVar8) {
          uVar12 = uVar6;
        }
        else {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar6 / uVar8;
          }
          uVar12 = uVar6 - uVar12 * uVar8;
        }
        plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x70) + 0x330) + uVar12 * 8);
        if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
        goto LAB_00babc64;
        if (1 < uVar9) goto LAB_00babc28;
        goto LAB_00babcd8;
      }
    }
    ClearExclusiveLocal();
    lVar1 = *plVar11;
    lVar7 = *(long *)(param_1 + 0xa8);
  } while( true );
LAB_00babc28:
  do {
    uVar9 = plVar13[1];
    if (uVar9 == uVar6) {
      if (plVar13[2] == uVar6) goto LAB_00babd10;
    }
    else {
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      if (uVar9 != uVar12) break;
    }
    plVar13 = (long *)*plVar13;
  } while (plVar13 != (long *)0x0);
LAB_00babc64:
  plVar14 = (long *)0x0;
  goto LAB_00babd14;
LAB_00babd10:
  plVar14 = plVar13;
  goto LAB_00babd14;
  while( true ) {
    plVar13 = (long *)*plVar13;
    plVar14 = (long *)0x0;
    if (plVar13 == (long *)0x0) break;
LAB_00babcd8:
    if (plVar13[1] == uVar6) {
      if (plVar13[2] == uVar6) goto LAB_00babd10;
    }
    else if ((plVar13[1] & uVar8 - 1) != uVar12) goto LAB_00babc64;
  }
LAB_00babd14:
  do {
    lVar5 = *plVar11;
    lVar1 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar11;
    lVar10 = *(long *)(param_1 + 0xa8);
    if (lVar7 != lVar5 || lVar10 != lVar1) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      *(long *)(param_1 + 0xa4) = lVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00babda0;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar5 = *plVar11;
      if (lVar5 != lVar7 || *(long *)(param_1 + 0xa8) != lVar10) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00babd6c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar7;
        *(long *)(param_1 + 0xa4) = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00babd6c:
    lVar7 = lVar5;
    lVar10 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00babda0:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return plVar14 != (long *)0x0;
}


