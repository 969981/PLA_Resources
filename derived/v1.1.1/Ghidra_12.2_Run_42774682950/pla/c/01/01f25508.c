/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f25508; name: FUN_01f25508
 */


void FUN_01f25508(long param_1,ulong *param_2,long *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long local_60;
  int local_58;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x88);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7c));
        while (*plVar13 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01f2557c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01f2557c:
  uVar9 = *(ulong *)(param_1 + 0x98);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar7;
    }
    else if (uVar7 < uVar9) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar7 / uVar9;
      }
      uVar11 = uVar7 - uVar11 * uVar9;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x90) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_01f25670;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if (uVar10 == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_01f25670;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar3 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_01f256fc;
LAB_01f25670:
  puVar5 = (ulong *)(plVar13 + 3);
  plVar6 = (long *)*puVar5;
  plVar8 = (long *)plVar13[4];
  plVar13 = plVar6;
  if (plVar6 != plVar8) {
    lVar4 = *plVar6;
    while ((lVar4 != *param_3 && (plVar12 = plVar13 + 2, plVar13 = plVar8, plVar8 != plVar12))) {
      lVar4 = *plVar12;
      plVar13 = plVar12;
    }
  }
  if (plVar8 == plVar13) {
    for (; local_58 = param_4, plVar6 < plVar8; plVar6 = plVar6 + 2) {
      if (param_4 < (int)plVar6[1]) {
        local_60 = *param_3;
        FUN_01f25758(puVar5,plVar6,&local_60);
        goto LAB_01f256fc;
      }
    }
    local_60 = *param_3;
    FUN_01f252b0(puVar5,&local_60);
  }
LAB_01f256fc:
  *(undefined8 *)(param_1 + 0x88) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x7c));
  return;
}


