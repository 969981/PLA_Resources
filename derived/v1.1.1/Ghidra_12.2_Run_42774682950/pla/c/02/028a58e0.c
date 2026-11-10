/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a58e0; name: FUN_028a58e0
 */


void FUN_028a58e0(float param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  
  if (*(char *)(param_2 + 0x12a) == '\0') {
    lVar7 = nn::os::GetCurrentThread();
    plVar15 = (long *)(param_2 + 0x98);
    do {
      if (*plVar15 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x8c));
          while (*plVar15 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_028a5950;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_028a5950:
    puVar13 = *(undefined8 **)(param_2 + 0xf0);
    puVar2 = *(undefined8 **)(param_2 + 0xf8);
    iVar3 = *(int *)(param_2 + 0x184);
    if (puVar13 != puVar2) {
      param_1 = *(float *)(param_2 + 0x130) * param_1;
      if (iVar3 == 0) {
        do {
          uVar8 = (**(code **)(*(long *)*puVar13 + 0x88))();
          if ((uVar8 & 1) == 0) {
            lVar7 = *(long *)*puVar13;
            fVar16 = param_1;
          }
          else {
            lVar7 = *(long *)*puVar13;
            fVar16 = *(float *)(param_2 + 0x188);
          }
          (**(code **)(lVar7 + 0x40))(fVar16);
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
      }
      else {
        do {
          uVar8 = (**(code **)(*(long *)*puVar13 + 0x88))();
          if ((uVar8 & 1) == 0) {
            (**(code **)(*(long *)*puVar13 + 0x40))(param_1);
          }
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
      }
    }
    lVar7 = nn::os::GetCurrentThread();
    plVar15 = (long *)(param_2 + 0xb0);
    do {
      if (*plVar15 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa4));
          while (*plVar15 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_028a5a34;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_028a5a34:
    if (iVar3 == 0) {
      *(undefined4 *)(param_2 + 0x188) = 0;
      iVar3 = *(int *)(param_2 + 0x198);
      *(undefined4 *)(param_2 + 0x198) = 0;
      uVar11 = iVar3 + *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x17c) = uVar11;
    }
    else {
      uVar11 = *(uint *)(param_2 + 0x17c);
    }
    uVar1 = *(int *)(param_2 + 0x184) + 1;
    uVar6 = 0;
    if (uVar11 != 0) {
      uVar6 = uVar1 / uVar11;
    }
    *(uint *)(param_2 + 0x184) = uVar1 - uVar6 * uVar11;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa4));
    *(undefined8 *)(param_2 + 0x98) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x8c));
  }
  if (*(char *)(param_2 + 0x19c) != '\0') {
    lVar7 = nn::os::GetCurrentThread();
    plVar15 = (long *)(param_2 + 0xb0);
    do {
      if (*plVar15 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa4));
          while (*plVar15 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_028a5adc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_028a5adc:
    iVar3 = *(int *)(param_2 + 0x194);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *(int *)(param_2 + 0x180) = iVar3;
    *(int *)(param_2 + 0x17c) = iVar3;
    *(undefined4 *)(param_2 + 0x184) = 0;
    *(undefined1 *)(param_2 + 0x19c) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa4));
  }
  if (*(char *)(param_2 + 0x129) == '\0') {
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_2 + 0x80);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x74));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028a5b70;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028a5b70:
  plVar15 = *(long **)(param_2 + 0xf0);
  plVar14 = *(long **)(param_2 + 0xf8);
  if ((plVar15 != plVar14) && (uVar8 = (**(code **)(*(long *)*plVar15 + 0x70))(), (uVar8 & 1) == 0))
  {
    do {
      if (plVar14 + -1 == plVar15) {
        plVar10 = plVar14;
        goto LAB_028a5c20;
      }
      plVar10 = plVar15 + 1;
      plVar15 = plVar15 + 1;
      uVar8 = (**(code **)(*(long *)*plVar10 + 0x70))();
    } while ((uVar8 & 1) == 0);
  }
  plVar10 = plVar15;
  if (plVar15 != plVar14) {
    while( true ) {
      plVar15 = plVar15 + 1;
      if (plVar15 == plVar14) break;
      uVar8 = (**(code **)(*(long *)*plVar15 + 0x70))();
      if ((uVar8 & 1) == 0) {
        plVar9 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))();
        }
        lVar7 = *plVar15;
        *plVar15 = 0;
        *plVar10 = lVar7;
        plVar10 = plVar10 + 1;
      }
    }
  }
LAB_028a5c20:
  plVar15 = *(long **)(param_2 + 0xf8);
  lVar7 = (long)plVar15 - (long)plVar10;
  if (lVar7 != 0) {
    if ((long *)((long)plVar10 + lVar7) != plVar15) {
      lVar7 = lVar7 >> 3;
      plVar14 = plVar10;
      do {
        plVar10 = (long *)*plVar14;
        *plVar14 = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))();
        }
        lVar12 = plVar14[lVar7];
        plVar14[lVar7] = 0;
        plVar10 = plVar14 + 1;
        *plVar14 = lVar12;
        plVar14 = plVar10;
      } while (plVar15 + -lVar7 != plVar10);
      plVar15 = *(long **)(param_2 + 0xf8);
    }
    while (plVar15 != plVar10) {
      plVar15 = plVar15 + -1;
      if ((long *)*plVar15 != (long *)0x0) {
        (**(code **)(*(long *)*plVar15 + 0x18))();
      }
    }
    *(long **)(param_2 + 0xf8) = plVar10;
  }
  *(undefined1 *)(param_2 + 0x129) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x74));
  return;
}


