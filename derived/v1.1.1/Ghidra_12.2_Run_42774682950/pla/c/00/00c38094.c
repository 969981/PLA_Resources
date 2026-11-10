/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c38094; name: FUN_00c38094
 */


void FUN_00c38094(long param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar8 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x198);
  if (uVar8 != 0) {
    uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar7 / uVar8;
      }
      uVar11 = uVar7 - uVar11 * uVar8;
    }
    plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 400) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_00c38260;
          }
          else if ((plVar12[1] & uVar8 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar7) {
            if (plVar12[2] == uVar7) {
LAB_00c38260:
              plVar12[5] = param_3[1];
              plVar12[4] = *param_3;
              return;
            }
          }
          else {
            if (uVar8 <= uVar10) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar10 / uVar8;
              }
              uVar10 = uVar10 - uVar4 * uVar8;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar12 != 0 || *(long *)(param_1 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar12 == 0 && *(long *)(param_1 + 0xa8) == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar5;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00c381a8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00c381a8:
  plVar6 = (long *)FUN_00b8add0(*(long *)(param_1 + 0x70) + 400,param_2);
  lVar5 = param_3[1];
  *plVar6 = *param_3;
  plVar6[1] = lVar5;
  do {
    lVar5 = *plVar12;
    lVar9 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (*plVar12 != lVar5 || *(long *)(param_1 + 0xa8) != lVar9) {
      ClearExclusiveLocal();
      lVar5 = *plVar12;
      lVar9 = *(long *)(param_1 + 0xa8);
      goto LAB_00c38284;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = 0;
      *(long *)(param_1 + 0xa4) = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00c38204;
LAB_00c38284:
  do {
    lVar1 = *plVar12;
    if (lVar1 == lVar5 && *(long *)(param_1 + 0xa8) == lVar9) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = 0;
        *(long *)(param_1 + 0xa4) = lVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00c38284;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    lVar5 = lVar1;
    lVar9 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00c38204:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


