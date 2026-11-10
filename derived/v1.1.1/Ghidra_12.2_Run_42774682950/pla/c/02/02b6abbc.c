/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6abbc; name: FUN_02b6abbc
 */


/* WARNING: Removing unreachable block (ram,0x02b6ad68) */

undefined8 FUN_02b6abbc(long param_1,short param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    lVar9 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x478) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
joined_r0x02b6abf8:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
    do {
      lVar9 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x478);
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x478) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    if (*plVar1 != lVar9 || *(long *)(param_1 + 0x478) != lVar4) goto LAB_02b6ac00;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x474) = lVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar10 = 0;
  if ((-1 < param_2) && (param_3 != (undefined8 *)0x0)) {
    if ((int)param_2 <
        (*(int *)(param_1 + 0x3d8) - (int)*(long *)(param_1 + 0x3d0)) * 0x8000 >> 0x10) {
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x3d0) + (long)param_2 * 2);
      if ((short)uVar3 < 0) {
        uVar10 = 0;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x2a8);
        if ((int)(short)uVar3 < (*(int *)(param_1 + 0x2b0) - (int)lVar7) * 0x400 >> 0x10) {
          if ((*(uint *)(*(long *)(param_1 + 0x138) +
                        ((ulong)(long)(int)(short)uVar3 >> 3 & 0x1ffffffffffffffc)) &
              1 << (ulong)(uVar3 & 0x1f)) != 0) {
            FUN_02b697ac(param_1);
            lVar7 = *(long *)(param_1 + 0x2a8);
          }
          puVar2 = (undefined8 *)(lVar7 + (long)(int)(short)uVar3 * 0x40);
          uVar10 = 1;
          uVar8 = puVar2[7];
          param_3[5] = puVar2[5];
          param_3[7] = uVar8;
          uVar8 = puVar2[3];
          param_3[1] = puVar2[1];
          param_3[3] = uVar8;
          uVar8 = *puVar2;
          param_3[2] = puVar2[2];
          *param_3 = uVar8;
          uVar8 = puVar2[4];
          param_3[6] = puVar2[6];
          param_3[4] = uVar8;
        }
        else {
          uVar10 = 0;
        }
      }
    }
    else {
      uVar10 = 0;
    }
  }
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar9) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x474) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02b6ad78;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar9 = *(long *)(param_1 + 0x478);
  do {
    do {
      lVar4 = *plVar1;
      if (lVar4 != lVar7 || *(long *)(param_1 + 0x478) != lVar9) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_02b6adc8;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x474) = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_02b6adc8:
    lVar7 = lVar4;
    lVar9 = *(long *)(param_1 + 0x478);
  } while (!bVar6);
LAB_02b6ad78:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return uVar10;
LAB_02b6ac00:
  ClearExclusiveLocal();
  lVar9 = *plVar1;
  lVar4 = *(long *)(param_1 + 0x478);
  goto joined_r0x02b6abf8;
}


