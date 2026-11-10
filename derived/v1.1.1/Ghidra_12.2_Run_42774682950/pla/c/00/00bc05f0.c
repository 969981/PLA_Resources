/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bc05f0; name: FUN_00bc05f0
 */


void FUN_00bc05f0(long param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x68) + 0x268);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar6 / uVar7;
      }
      uVar9 = uVar6 - uVar9 * uVar7;
    }
    plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0x260) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == uVar6) {
            if (plVar11[2] == uVar6) goto LAB_00bc069c;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == uVar6) {
            if (plVar11[2] == uVar6) {
LAB_00bc069c:
              plVar11[3] = *param_3;
              return;
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
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar11 != 0 || *(long *)(param_1 + 0xa8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar11 == 0 && *(long *)(param_1 + 0xa8) == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar5;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00bc0748;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00bc0748:
  plVar11 = (long *)FUN_00b88ea8(*(long *)(param_1 + 0x70) + 0x260,param_2);
  *plVar11 = *param_3;
  plVar11 = (long *)(param_1 + 0xa0);
  do {
    lVar5 = *plVar11;
    lVar10 = *(long *)(param_1 + 0xa8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      *(long *)(param_1 + 0xa8) = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (*plVar11 != lVar5 || *(long *)(param_1 + 0xa8) != lVar10) {
      ClearExclusiveLocal();
      lVar5 = *plVar11;
      lVar10 = *(long *)(param_1 + 0xa8);
      goto LAB_00bc07e0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = 0;
      *(long *)(param_1 + 0xa4) = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_00bc07c0;
LAB_00bc07e0:
  do {
    lVar1 = *plVar11;
    if (lVar1 == lVar5 && *(long *)(param_1 + 0xa8) == lVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = 0;
        *(long *)(param_1 + 0xa4) = lVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_00bc07e0;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    lVar5 = lVar1;
    lVar10 = *(long *)(param_1 + 0xa8);
  } while (!bVar3);
LAB_00bc07c0:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


