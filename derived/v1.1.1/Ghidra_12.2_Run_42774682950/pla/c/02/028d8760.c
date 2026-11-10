/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d8760; name: FUN_028d8760
 */


/* WARNING: Removing unreachable block (ram,0x028d89f8) */

void FUN_028d8760(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 local_70;
  undefined7 uStack_6f;
  
  lVar4 = DAT_043ef5a0;
  if ((param_3 == 0) || (*(long *)(DAT_043ef5a0 + 0x60) == 0)) {
    return;
  }
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_3 + 0xb0);
  do {
    lVar11 = *plVar1;
    lVar12 = *(long *)(param_3 + 0xb8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      *(long *)(param_3 + 0xb8) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
joined_r0x028d87c0:
  while ((lVar11 != 0 && (lVar9 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_3 + 0xa4));
    do {
      lVar11 = *plVar1;
      lVar12 = *(long *)(param_3 + 0xb8);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)(param_3 + 0xb8) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    if (*plVar1 != lVar11 || *(long *)(param_3 + 0xb8) != lVar12) goto LAB_028d87c8;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      *(long *)(param_3 + 0xb4) = lVar12 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar13 = *(long **)(param_3 + 0x60);
  plVar3 = *(long **)(param_3 + 0x68);
  if (plVar13 != plVar3) {
    do {
      if (*(long *)(*plVar13 + 0x58) == *param_4) {
        FUN_02b3365c(&local_70,*(undefined8 *)(lVar4 + 0x60),plVar13 + 10);
        plVar8 = (long *)CONCAT71(uStack_6f,local_70);
        if (plVar8 != (long *)0x0) {
          plVar14 = plVar8 + 10;
          do {
            iVar7 = (int)*plVar14 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *(int *)plVar14 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          plVar14 = (long *)plVar8[0x3b];
          if (plVar14 != (long *)0x0) {
            do {
              local_70 = 1;
              plVar2 = plVar14 + 2;
              uVar10 = (*(code *)*param_5)(param_5 + 4,&local_70,plVar13 + 1,plVar13 + 0xb,plVar2);
              if (((uVar10 & 1) == 0) &&
                 (uVar10 = (**(code **)(*(long *)(plVar8[0xc] + 0x58) + 0x98))
                                     ((long *)(plVar8[0xc] + 0x58),&local_70,plVar2,plVar8 + 0x1a),
                 (uVar10 & 1) != 0)) {
                (**(code **)(*(long *)(plVar8[0xc] + 0x58) + 0x20))
                          ((long *)(plVar8[0xc] + 0x58),plVar2,&local_70);
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          plVar14 = (long *)plVar8[0x48];
          if (plVar14 != (long *)0x0) {
            do {
              local_70 = 0;
              plVar2 = plVar14 + 2;
              uVar10 = (*(code *)*param_5)(param_5 + 4,&local_70,plVar13 + 1,plVar13 + 0xb,plVar2);
              if (((uVar10 & 1) == 0) &&
                 (uVar10 = (**(code **)(*(long *)(plVar8[0xc] + 0x58) + 0xa8))
                                     ((long *)(plVar8[0xc] + 0x58),&local_70,plVar2,plVar8 + 0x1a),
                 (uVar10 & 1) != 0)) {
                (**(code **)(*(long *)(plVar8[0xc] + 0x58) + 0x30))
                          ((long *)(plVar8[0xc] + 0x58),plVar2,&local_70);
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      plVar13 = plVar13 + 0xf;
    } while (plVar13 != plVar3);
  }
  do {
    lVar4 = *plVar1;
    lVar9 = *(long *)(param_3 + 0xb8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_3 + 0xb8) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    lVar11 = *plVar1;
    lVar12 = *(long *)(param_3 + 0xb8);
    if (lVar11 != lVar4 || lVar12 != lVar9) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_3 + 0xb4) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_028d8a38;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar4 = *plVar1;
      if (lVar4 != lVar11 || *(long *)(param_3 + 0xb8) != lVar12) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_028d8a04;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11;
        *(long *)(param_3 + 0xb4) = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_028d8a04:
    lVar11 = lVar4;
    lVar12 = *(long *)(param_3 + 0xb8);
  } while (!bVar6);
LAB_028d8a38:
  nn::os::SignalLightEvent((LightEventType *)(param_3 + 0xa4));
  return;
LAB_028d87c8:
  ClearExclusiveLocal();
  lVar11 = *plVar1;
  lVar12 = *(long *)(param_3 + 0xb8);
  goto joined_r0x028d87c0;
}


