/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4e5f4; name: FUN_02a4e5f4
 */


/* WARNING: Removing unreachable block (ram,0x02a4e728) */

void FUN_02a4e5f4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar14 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x58);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar14;
      *(long *)(param_1 + 0x58) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x44);
joined_r0x02a4e634:
  while ((lVar14 != 0 && (lVar10 != lVar14))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar14 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x58);
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar14;
        *(long *)(param_1 + 0x58) = lVar6;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  do {
    if (*plVar1 != lVar14 || *(long *)(param_1 + 0x58) != lVar6) goto LAB_02a4e63c;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar14;
      *(long *)(param_1 + 0x54) = lVar6 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  puVar5 = *(undefined8 **)(param_1 + 0xf0);
  for (puVar4 = *(undefined8 **)(param_1 + 0xe8); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    uVar9 = (**(code **)(*(long *)*puVar4 + 0x40))();
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,uVar9);
    if (0 < *(long *)(lVar10 + 8)) {
      (**(code **)(*(long *)*puVar4 + 0xb0))((long *)*puVar4,param_2);
    }
  }
  do {
    lVar10 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x58);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x58) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  while( true ) {
    if (*plVar1 != lVar10 || *(long *)(param_1 + 0x58) != lVar14) break;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x54) = lVar14 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_02a4e738;
  }
  ClearExclusiveLocal();
  lVar10 = *plVar1;
  lVar14 = *(long *)(param_1 + 0x58);
  do {
    do {
      lVar6 = *plVar1;
      if (lVar6 != lVar10 || *(long *)(param_1 + 0x58) != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_02a4e9c0;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x54) = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar8 = true;
LAB_02a4e9c0:
    lVar10 = lVar6;
    lVar14 = *(long *)(param_1 + 0x58);
  } while (!bVar8);
LAB_02a4e738:
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x58) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && *(long *)(param_1 + 0x58) == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0x58) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_02a4e780;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x58) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_02a4e780:
  if (*(char *)(param_1 + 0x123) != '\0') {
    plVar3 = (long *)(param_1 + 0x70);
    do {
      *(undefined1 *)(param_1 + 0x123) = 0;
      lVar10 = nn::os::GetCurrentThread();
      do {
        if (*plVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
            while (*plVar3 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *plVar3 = lVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_02a4e7cc;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_02a4e7cc:
      plVar16 = *(long **)(param_1 + 0xe8);
      plVar15 = *(long **)(param_1 + 0xf0);
      if ((plVar16 == plVar15) ||
         (uVar11 = (**(code **)(*(long *)*plVar16 + 0x78))(), (uVar11 & 1) != 0)) {
LAB_02a4e818:
        plVar13 = plVar16;
        if (plVar16 != plVar15) {
          while( true ) {
            plVar16 = plVar16 + 1;
            if (plVar16 == plVar15) break;
            uVar11 = (**(code **)(*(long *)*plVar16 + 0x78))();
            if ((uVar11 & 1) == 0) {
              plVar12 = (long *)*plVar13;
              *plVar13 = 0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x18))();
              }
              lVar10 = *plVar16;
              *plVar16 = 0;
              *plVar13 = lVar10;
              plVar13 = plVar13 + 1;
            }
          }
        }
      }
      else {
        while (plVar15 + -1 != plVar16) {
          plVar13 = plVar16 + 1;
          plVar16 = plVar16 + 1;
          uVar11 = (**(code **)(*(long *)*plVar13 + 0x78))();
          if ((uVar11 & 1) != 0) goto LAB_02a4e818;
        }
        plVar13 = plVar15;
      }
      plVar16 = *(long **)(param_1 + 0xf0);
      lVar10 = (long)plVar16 - (long)plVar13;
      if (lVar10 != 0) {
        if ((long *)((long)plVar13 + lVar10) != plVar16) {
          lVar10 = lVar10 >> 3;
          plVar15 = plVar13;
          do {
            plVar13 = (long *)*plVar15;
            *plVar15 = 0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))();
            }
            lVar14 = plVar15[lVar10];
            plVar15[lVar10] = 0;
            plVar13 = plVar15 + 1;
            *plVar15 = lVar14;
            plVar15 = plVar13;
          } while (plVar16 + -lVar10 != plVar13);
          plVar16 = *(long **)(param_1 + 0xf0);
        }
        while (plVar16 != plVar13) {
          plVar16 = plVar16 + -1;
          if ((long *)*plVar16 != (long *)0x0) {
            (**(code **)(*(long *)*plVar16 + 0x18))();
          }
        }
        *(long **)(param_1 + 0xf0) = plVar13;
      }
      FUN_02a50b50(*(undefined8 *)(param_1 + 0xe8),plVar13);
      *(undefined8 *)(param_1 + 0x70) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
    } while (*(char *)(param_1 + 0x123) != '\0');
  }
  do {
    lVar10 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x58);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x58) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    if (*plVar1 != lVar10 || *(long *)(param_1 + 0x58) != lVar14) {
      ClearExclusiveLocal();
      lVar10 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x58);
      goto LAB_02a4e9d0;
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x54) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  goto LAB_02a4e970;
LAB_02a4e63c:
  ClearExclusiveLocal();
  lVar14 = *plVar1;
  lVar6 = *(long *)(param_1 + 0x58);
  goto joined_r0x02a4e634;
LAB_02a4e9d0:
  do {
    lVar6 = *plVar1;
    if (lVar6 == lVar10 && *(long *)(param_1 + 0x58) == lVar14) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x54) = lVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_02a4e9d0;
      bVar8 = true;
    }
    else {
      bVar8 = false;
      ClearExclusiveLocal();
    }
    lVar10 = lVar6;
    lVar14 = *(long *)(param_1 + 0x58);
  } while (!bVar8);
LAB_02a4e970:
  nn::os::SignalLightEvent(pLVar2);
  return;
}


