/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60b20; name: FUN_02c60b20
 */


void FUN_02c60b20(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  long lVar14;
  
  plVar11 = (long *)(param_1 + 0x98);
  uVar4 = FUN_02c6b1c0(*plVar11,0);
  if ((((uVar4 == param_2) || (uVar4 = FUN_02c6b1c0(*plVar11,1), uVar4 == param_2)) ||
      (uVar4 = FUN_02c6b1c0(*plVar11,2), uVar4 == param_2)) ||
     (uVar4 = FUN_02c6b1c0(*plVar11,3), uVar4 == param_2)) {
    return;
  }
  iVar5 = FUN_02c6b1c0(*plVar11,0);
  if (iVar5 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
    iVar5 = FUN_02c6b1c0(*plVar11,1);
    if (iVar5 != 0) {
      uVar12 = 2;
      iVar5 = FUN_02c6b1c0(*plVar11,2);
      if (iVar5 != 0) {
        uVar12 = 3;
        iVar5 = FUN_02c6b1c0(*plVar11,3);
        if (iVar5 != 0) {
          uVar6 = FUN_02c6b1c0(*plVar11,1);
          uVar7 = FUN_02c6b51c(*plVar11,1);
          FUN_02c7c9c8(*plVar11,0,uVar6);
          FUN_02c7cd1c(*plVar11,0,uVar7);
          lVar14 = *plVar11;
          lVar8 = nn::os::GetCurrentThread();
          plVar9 = (long *)(lVar14 + 0x30);
          do {
            if (*plVar9 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
                while (*plVar9 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar3) {
                    *plVar9 = lVar8;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_02c60d78;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_02c60d78:
          *(undefined8 *)(lVar14 + 0x30) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
          uVar6 = FUN_02c6b1c0(*plVar11,2);
          uVar7 = FUN_02c6b51c(*plVar11,2);
          FUN_02c7c9c8(*plVar11,1,uVar6);
          FUN_02c7cd1c(*plVar11,1,uVar7);
          lVar14 = *plVar11;
          lVar8 = nn::os::GetCurrentThread();
          plVar9 = (long *)(lVar14 + 0x30);
          do {
            if (*plVar9 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
                while (*plVar9 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar3) {
                    *plVar9 = lVar8;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_02c60e14;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_02c60e14:
          *(undefined8 *)(lVar14 + 0x30) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
          uVar6 = FUN_02c6b1c0(*plVar11,3);
          uVar7 = FUN_02c6b51c(*plVar11,3);
          FUN_02c7c9c8(*plVar11,2,uVar6);
          FUN_02c7cd1c(*plVar11,2,uVar7);
          lVar14 = *plVar11;
          lVar8 = nn::os::GetCurrentThread();
          plVar9 = (long *)(lVar14 + 0x30);
          do {
            if (*plVar9 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
                while (*plVar9 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar3) {
                    *plVar9 = lVar8;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_02c60eb0;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_02c60eb0:
          *(undefined8 *)(lVar14 + 0x30) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
          lVar8 = (&DAT_0428af30)[(ulong)param_2 * 6];
          if (lVar8 == 0) {
            plVar9 = &DAT_0428af30;
          }
          else {
            plVar9 = &DAT_0428af30;
            if (*(char *)(lVar8 + 0x1e1) != '\0') {
              plVar9 = &DAT_0428af30 + (ulong)param_2 * 6;
            }
          }
          piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar10 == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined1 *)((long)piVar1 + uVar10);
          }
          FUN_02c7c9c8(*plVar11,3,param_2);
          lVar14 = *plVar11;
          lVar8 = nn::os::GetCurrentThread();
          plVar9 = (long *)(lVar14 + 0x30);
          do {
            if (*plVar9 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
                while (*plVar9 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar3) {
                    *plVar9 = lVar8;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_02c60f80;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_02c60f80:
          *(undefined8 *)(lVar14 + 0x30) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
          lVar8 = *plVar11;
          uVar12 = 3;
          goto LAB_02c60d38;
        }
      }
    }
  }
  lVar8 = (&DAT_0428af30)[(ulong)param_2 * 6];
  if (lVar8 == 0) {
    plVar9 = &DAT_0428af30;
  }
  else {
    plVar9 = &DAT_0428af30;
    if (*(char *)(lVar8 + 0x1e1) != '\0') {
      plVar9 = &DAT_0428af30 + (ulong)param_2 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar10 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined1 *)((long)piVar1 + uVar10);
  }
  FUN_02c7c9c8(*plVar11,uVar12,param_2);
  lVar14 = *plVar11;
  lVar8 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar14 + 0x30);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c60d1c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c60d1c:
  *(undefined8 *)(lVar14 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
  lVar8 = *plVar11;
LAB_02c60d38:
  FUN_02c7cd1c(lVar8,uVar12,uVar13);
  return;
}


