/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b330b0; name: FUN_02b330b0
 */


int FUN_02b330b0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long *local_58;
  long lStack_50;
  undefined1 local_48;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xf8) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b33120;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b33120:
  uVar13 = *(ulong *)(param_1 + 0x78);
  if (uVar13 != 0) {
    uVar9 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar8 = *(ulong *)(param_2 + 8);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar14 = uVar13 - 1 & uVar8;
    }
    else {
      uVar14 = uVar8;
      if (uVar13 <= uVar8) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar8 / uVar13;
        }
        uVar14 = uVar8 - uVar14 * uVar13;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar14 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar8) {
            if (plVar11[2] == uVar8) goto LAB_02b33214;
          }
          else if ((plVar11[1] & uVar13 - 1) != uVar14) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar8) {
            if (plVar11[2] == uVar8) goto LAB_02b33214;
          }
          else {
            if (uVar13 <= uVar9) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar9 / uVar13;
              }
              uVar9 = uVar9 - uVar5 * uVar13;
            }
            if (uVar9 != uVar14) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_02b33394:
  iVar16 = 0;
LAB_02b33398:
  do {
    lVar7 = *plVar1;
    lVar12 = *(long *)(param_1 + 0xf8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xf8) = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0xf8) != lVar12) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar12 = *(long *)(param_1 + 0xf8);
      goto LAB_02b33400;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xf4) = lVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b333dc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return iVar16;
LAB_02b33214:
  iVar16 = (int)plVar11[8] + -1;
  *(int *)(plVar11 + 8) = iVar16;
  if (iVar16 == 0) {
    uVar9 = *(ulong *)(param_1 + 0x78);
    uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar8 = uVar9 - 1 & uVar8;
    }
    else if (uVar9 <= uVar8) {
      uVar14 = 0;
      if (uVar9 != 0) {
        uVar14 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar14 * uVar9;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x70) + uVar8 * 8);
    do {
      plVar15 = plVar6;
      plVar6 = (long *)*plVar15;
    } while ((long *)*plVar15 != plVar11);
    if (plVar15 == (long *)(param_1 + 0xa0)) {
LAB_02b332d8:
      if (*plVar11 != 0) {
        uVar14 = *(ulong *)(*plVar11 + 8);
        if (uVar13 < 2) {
          uVar14 = uVar14 & uVar9 - 1;
        }
        else if (uVar9 <= uVar14) {
          uVar5 = 0;
          if (uVar9 != 0) {
            uVar5 = uVar14 / uVar9;
          }
          uVar14 = uVar14 - uVar5 * uVar9;
        }
        if (uVar14 == uVar8) goto LAB_02b3331c;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar8 * 8) = 0;
    }
    else {
      uVar14 = plVar15[1];
      if (uVar13 < 2) {
        uVar14 = uVar14 & uVar9 - 1;
      }
      else if (uVar9 <= uVar14) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar14 / uVar9;
        }
        uVar14 = uVar14 - uVar5 * uVar9;
      }
      if (uVar14 != uVar8) goto LAB_02b332d8;
    }
LAB_02b3331c:
    lVar7 = *plVar11;
    if (lVar7 != 0) {
      uVar14 = *(ulong *)(lVar7 + 8);
      if (uVar13 < 2) {
        uVar14 = uVar14 & uVar9 - 1;
      }
      else if (uVar9 <= uVar14) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar14 / uVar9;
        }
        uVar14 = uVar14 - uVar13 * uVar9;
      }
      if (uVar14 != uVar8) {
        *(long **)(*(long *)(param_1 + 0x70) + uVar14 * 8) = plVar15;
        lVar7 = *plVar11;
      }
    }
    *plVar15 = lVar7;
    lStack_50 = param_1 + 0xa8;
    *plVar11 = 0;
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
    local_48 = 1;
    local_58 = plVar11;
    FUN_02b34e28(&local_58);
    goto LAB_02b33394;
  }
  goto LAB_02b33398;
LAB_02b33400:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar7 && *(long *)(param_1 + 0xf8) == lVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xf4) = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b33400;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar2;
    lVar12 = *(long *)(param_1 + 0xf8);
  } while (!bVar4);
  goto LAB_02b333dc;
}


