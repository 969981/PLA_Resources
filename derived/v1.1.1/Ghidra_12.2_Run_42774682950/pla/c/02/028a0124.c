/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a0124; name: FUN_028a0124
 */


void FUN_028a0124(long param_1,byte param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  byte *apbStack_c0 [13];
  byte local_54 [4];
  long *local_48;
  
  local_54[0] = param_2 & 1;
  lVar7 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x228);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x21c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028a0198;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028a0198:
  bVar6 = local_54[0];
  apbStack_c0[0] = local_54;
  plVar11 = *(long **)(param_1 + 0x250);
  plVar12 = *(long **)(param_1 + 600);
  if (*(char *)param_3[1] == '\0') {
    if (plVar11 != plVar12) {
      do {
        plVar9 = (long *)*plVar11;
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          local_48 = plVar9;
          FUN_028a4198(apbStack_c0,&local_48);
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar12);
    }
  }
  else if (plVar11 == plVar12) {
LAB_028a0210:
    if ((plVar11 != plVar12) && (lVar7 = *plVar11, lVar7 != 0)) {
      lVar8 = nn::os::GetCurrentThread();
      plVar11 = (long *)(lVar7 + 0x98);
      do {
        if (*plVar11 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x8c));
            while (*plVar11 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_028a02dc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_028a02dc:
      puVar2 = *(undefined8 **)(lVar7 + 0xf8);
      for (puVar10 = *(undefined8 **)(lVar7 + 0xf0); puVar10 != puVar2; puVar10 = puVar10 + 1) {
        (**(code **)(*(long *)*puVar10 + 0x78))();
      }
      if ((bVar6 != 0) && (*(long **)(lVar7 + 0x68) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar7 + 0x68) + 0x108))();
      }
      *(undefined8 *)(lVar7 + 0x98) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x8c));
    }
  }
  else {
    do {
      if (*(long *)(*plVar11 + 0x158) == *param_3) goto LAB_028a0210;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
  }
  FUN_028a4260(apbStack_c0);
  if (local_54[0] != 0) {
    FUN_028ac6dc(*(undefined8 *)(param_1 + 0x248));
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
  return;
}


