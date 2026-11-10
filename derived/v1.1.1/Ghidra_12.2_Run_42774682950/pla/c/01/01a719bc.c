/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a719bc; name: FUN_01a719bc
 */


void FUN_01a719bc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  plVar1 = param_1 + 0x9f;
  uVar7 = (**(code **)(*param_1 + 0x108))();
  pcVar8 = (char *)FUN_01a74388(plVar1,uVar7);
  if (*pcVar8 != '\0') {
    *pcVar8 = '\0';
  }
  uVar7 = (**(code **)(*param_1 + 0x100))(param_1);
  pcVar8 = (char *)FUN_01a74388(plVar1,uVar7);
  if (*pcVar8 != '\0') {
    *pcVar8 = '\0';
  }
  if (param_1[0x8e] == 0) {
    return;
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar16 = param_1 + 0x9e;
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x4e4));
        while (*plVar16 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01a71a88;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a71a88:
  puVar10 = (ulong *)(**(code **)(*param_1 + 0x108))(param_1);
  uVar13 = param_1[0x90];
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar12 = *puVar10;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      uVar15 = uVar12;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar12 / uVar13;
      }
      uVar15 = uVar12 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(param_1[0x8f] + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_01a71b8c;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_01a71b8c;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar6 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_01a71bf4:
  puVar10 = (ulong *)(**(code **)(*param_1 + 0x100))(param_1);
  uVar13 = param_1[0x90];
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar12 = *puVar10;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      uVar15 = uVar12;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar12 / uVar13;
      }
      uVar15 = uVar12 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(param_1[0x8f] + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_01a71cf8;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_01a71cf8;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar6 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_01a71d60:
  param_1[0x9e] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x4e4));
  return;
LAB_01a71b8c:
  if ((short)plVar16[6] != -1) {
    puVar11 = (undefined8 *)FUN_02b6962c(param_1[0x8e]);
    uVar7 = (**(code **)(*param_1 + 0x108))(param_1);
    pcVar8 = (char *)FUN_01a74388(plVar1,uVar7);
    uVar7 = *puVar11;
    uVar2 = puVar11[1];
    uVar3 = puVar11[3];
    *(undefined8 *)(pcVar8 + 0x20) = puVar11[2];
    *(undefined8 *)(pcVar8 + 0x28) = uVar3;
    *(undefined8 *)(pcVar8 + 0x10) = uVar7;
    *(undefined8 *)(pcVar8 + 0x18) = uVar2;
    uVar2 = puVar11[7];
    uVar7 = puVar11[4];
    uVar3 = puVar11[5];
    *(undefined8 *)(pcVar8 + 0x40) = puVar11[6];
    *(undefined8 *)(pcVar8 + 0x48) = uVar2;
    *(undefined8 *)(pcVar8 + 0x30) = uVar7;
    *(undefined8 *)(pcVar8 + 0x38) = uVar3;
    if (*pcVar8 == '\0') {
      *pcVar8 = '\x01';
    }
  }
  goto LAB_01a71bf4;
LAB_01a71cf8:
  if ((short)plVar16[6] != -1) {
    puVar11 = (undefined8 *)FUN_02b6962c(param_1[0x8e]);
    uVar7 = (**(code **)(*param_1 + 0x100))(param_1);
    pcVar8 = (char *)FUN_01a74388(plVar1,uVar7);
    uVar7 = *puVar11;
    uVar2 = puVar11[1];
    uVar3 = puVar11[3];
    *(undefined8 *)(pcVar8 + 0x20) = puVar11[2];
    *(undefined8 *)(pcVar8 + 0x28) = uVar3;
    *(undefined8 *)(pcVar8 + 0x10) = uVar7;
    *(undefined8 *)(pcVar8 + 0x18) = uVar2;
    uVar2 = puVar11[7];
    uVar7 = puVar11[4];
    uVar3 = puVar11[5];
    *(undefined8 *)(pcVar8 + 0x40) = puVar11[6];
    *(undefined8 *)(pcVar8 + 0x48) = uVar2;
    *(undefined8 *)(pcVar8 + 0x30) = uVar7;
    *(undefined8 *)(pcVar8 + 0x38) = uVar3;
    if (*pcVar8 == '\0') {
      *pcVar8 = '\x01';
    }
  }
  goto LAB_01a71d60;
}


