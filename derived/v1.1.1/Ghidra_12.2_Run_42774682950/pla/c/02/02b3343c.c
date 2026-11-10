/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3343c; name: FUN_02b3343c
 */


void FUN_02b3343c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0xf0);
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xe4));
        while (*plVar1 == 0 && *(long *)(param_2 + 0xf8) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_2 + 0xf8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b334ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_2 + 0xf8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b334ac:
  uVar9 = *(ulong *)(param_2 + 0x78);
  if (uVar9 != 0) {
    uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar8 = *(ulong *)(param_3 + 8);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar9 - 1 & uVar8;
    }
    else {
      uVar12 = uVar8;
      if (uVar9 <= uVar8) {
        uVar12 = 0;
        if (uVar9 != 0) {
          uVar12 = uVar8 / uVar9;
        }
        uVar12 = uVar8 - uVar12 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x70) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_02b335fc;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_02b335fc;
          }
          else {
            if (uVar9 <= uVar11) {
              uVar6 = 0;
              if (uVar9 != 0) {
                uVar6 = uVar11 / uVar9;
              }
              uVar11 = uVar11 - uVar6 * uVar9;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_02b335a0:
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(param_2 + 0xf8);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xf8) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_2 + 0xf8) != lVar10) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar10 = *(long *)(param_2 + 0xf8);
      goto LAB_02b33620;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_2 + 0xf4) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b335e4:
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xe4));
  return;
LAB_02b335fc:
  lVar7 = plVar13[6];
  *param_1 = lVar7;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  goto LAB_02b335a0;
LAB_02b33620:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar7 && *(long *)(param_2 + 0xf8) == lVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_2 + 0xf4) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b33620;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar3;
    lVar10 = *(long *)(param_2 + 0xf8);
  } while (!bVar5);
  goto LAB_02b335e4;
}


