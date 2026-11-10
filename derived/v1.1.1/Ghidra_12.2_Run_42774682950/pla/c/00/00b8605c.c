/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b8605c; name: FUN_00b8605c
 */


/* WARNING: Removing unreachable block (ram,0x00b86240) */

undefined8 FUN_00b8605c(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  lVar6 = *(long *)(param_1 + 0x68);
  uVar10 = *(ulong *)(lVar6 + 0x130);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar8;
    }
    else if (uVar8 < uVar10) {
      uVar12 = uVar8;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar8 / uVar10;
      }
      uVar12 = uVar8 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar6 + 0x128) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00b86194;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar8) {
            if (plVar13[2] == uVar8) {
LAB_00b86194:
              uVar5 = FUN_00b86734(lVar6 + 0x128,param_2);
              return uVar5;
            }
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0xa0);
  do {
    lVar1 = *plVar13;
    lVar7 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar1;
      *(long *)(param_1 + 0xa8) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
joined_r0x00b86140:
  while ((lVar1 != 0 && (lVar6 != lVar1))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
    do {
      lVar1 = *plVar13;
      lVar7 = *(long *)(param_1 + 0xa8);
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar1;
        *(long *)(param_1 + 0xa8) = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    if (*plVar13 != lVar1 || *(long *)(param_1 + 0xa8) != lVar7) goto LAB_00b861b0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar1;
      *(long *)(param_1 + 0xa4) = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar5 = FUN_00b86734(*(long *)(param_1 + 0x70) + 0x128,param_2);
  do {
    lVar6 = *plVar13;
    lVar1 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar6;
      *(long *)(param_1 + 0xa8) = lVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar7 = *plVar13;
    lVar9 = *(long *)(param_1 + 0xa8);
    if (lVar7 != lVar6 || lVar9 != lVar1) break;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar6;
      *(long *)(param_1 + 0xa4) = lVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00b86280;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar13;
      if (lVar6 != lVar7 || *(long *)(param_1 + 0xa8) != lVar9) {
        bVar3 = false;
        ClearExclusiveLocal();
        goto LAB_00b8624c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar7;
        *(long *)(param_1 + 0xa4) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = true;
LAB_00b8624c:
    lVar7 = lVar6;
    lVar9 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00b86280:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return uVar5;
LAB_00b861b0:
  ClearExclusiveLocal();
  lVar1 = *plVar13;
  lVar7 = *(long *)(param_1 + 0xa8);
  goto joined_r0x00b86140;
}


