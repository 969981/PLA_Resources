/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b80638; name: FUN_02b80638
 */


long FUN_02b80638(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x88);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x88) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar8 != 0 && (lVar6 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x74));
      do {
        lVar8 = *plVar1;
        lVar11 = *(long *)(param_1 + 0x88);
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x88) = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar8 || *(long *)(param_1 + 0x88) != lVar11) break;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x84) = lVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*param_2 == '\0') {
          lVar6 = 0;
          goto LAB_02b80824;
        }
        uVar14 = *(ulong *)(param_2 + 8);
        plVar13 = *(long **)(param_2 + 0x20);
        if (plVar13 == (long *)0x0) {
          uVar7 = *(ulong *)(param_1 + 0x10);
        }
        else {
          (**(code **)(*plVar13 + 0x18))(plVar13);
          uVar7 = *(ulong *)(param_1 + 0x10);
        }
        if (uVar7 == 0) {
          plVar12 = (long *)0x0;
          goto LAB_02b80800;
        }
        uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar10 = uVar7 - 1 & uVar14;
        }
        else {
          uVar10 = uVar14;
          if (uVar7 <= uVar14) {
            uVar10 = 0;
            if (uVar7 != 0) {
              uVar10 = uVar14 / uVar7;
            }
            uVar10 = uVar14 - uVar10 * uVar7;
          }
        }
        plVar12 = *(long **)(*(long *)(param_1 + 8) + uVar10 * 8);
        if (plVar12 == (long *)0x0) goto LAB_02b807d8;
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_02b80800;
        if (1 < uVar9) goto LAB_02b80784;
        goto LAB_02b807c0;
      }
    }
    ClearExclusiveLocal();
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x88);
  } while( true );
LAB_02b80784:
  do {
    uVar9 = plVar12[1];
    if (uVar9 == uVar14) {
      if (plVar12[2] == uVar14) break;
    }
    else {
      if (uVar7 <= uVar9) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar9 / uVar7;
        }
        uVar9 = uVar9 - uVar5 * uVar7;
      }
      if (uVar9 != uVar10) goto LAB_02b807d8;
    }
    plVar12 = (long *)*plVar12;
  } while (plVar12 != (long *)0x0);
  goto LAB_02b80800;
LAB_02b807d8:
  plVar12 = (long *)0x0;
  if (plVar13 == (long *)0x0) goto LAB_02b80814;
  goto LAB_02b80804;
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
LAB_02b807c0:
    if (plVar12[1] == uVar14) {
      if (plVar12[2] == uVar14) break;
    }
    else if ((plVar12[1] & uVar7 - 1) != uVar10) goto LAB_02b807d8;
  }
LAB_02b80800:
  if (plVar13 != (long *)0x0) {
LAB_02b80804:
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
LAB_02b80814:
  if (plVar12 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar12[6];
  }
LAB_02b80824:
  do {
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x88);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x88) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    if (*plVar1 != lVar8 || *(long *)(param_1 + 0x88) != lVar11) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x84) = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02b808a4;
  }
  ClearExclusiveLocal();
  lVar8 = *plVar1;
  lVar11 = *(long *)(param_1 + 0x88);
  do {
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0x88) != lVar11) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b80888;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x84) = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_02b80888:
    lVar8 = lVar2;
    lVar11 = *(long *)(param_1 + 0x88);
  } while (!bVar4);
LAB_02b808a4:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x74));
  return lVar6;
}


