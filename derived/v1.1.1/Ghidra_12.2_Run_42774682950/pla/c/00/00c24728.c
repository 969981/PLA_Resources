/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c24728; name: FUN_00c24728
 */


void FUN_00c24728(long param_1,ulong *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  uVar9 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x60);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      uVar11 = uVar8;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar8 / uVar9;
      }
      uVar11 = uVar8 - uVar11 * uVar9;
    }
    plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0x58) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) {
LAB_00c247d0:
              *(undefined4 *)(plVar13 + 3) = *param_3;
              return;
            }
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if (uVar10 == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00c247d0;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar13 != 0 || *(long *)(param_1 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar13 == 0 && *(long *)(param_1 + 0xa8) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar6;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c24858;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar6;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c24858:
  uVar2 = *param_3;
  puVar7 = (undefined4 *)FUN_00b89f84(*(long *)(param_1 + 0x70) + 0x58,param_2);
  plVar13 = (long *)(param_1 + 0xa0);
  *puVar7 = uVar2;
  do {
    lVar6 = *plVar13;
    lVar12 = *(long *)(param_1 + 0xa8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar6;
      *(long *)(param_1 + 0xa8) = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar13 != lVar6 || *(long *)(param_1 + 0xa8) != lVar12) {
      ClearExclusiveLocal();
      lVar6 = *plVar13;
      lVar12 = *(long *)(param_1 + 0xa8);
      goto LAB_00c248d8;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = 0;
      *(long *)(param_1 + 0xa4) = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_00c248b8;
LAB_00c248d8:
  do {
    lVar1 = *plVar13;
    if (lVar1 == lVar6 && *(long *)(param_1 + 0xa8) == lVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = 0;
        *(long *)(param_1 + 0xa4) = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00c248d8;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar1;
    lVar12 = *(long *)(param_1 + 0xa8);
  } while (!bVar4);
LAB_00c248b8:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


