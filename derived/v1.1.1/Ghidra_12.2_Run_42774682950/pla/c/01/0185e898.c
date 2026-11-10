/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185e898; name: FUN_0185e898
 */


ulong FUN_0185e898(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *local_38;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0x78);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0185e8fc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar6) {
      *plVar12 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0185e8fc:
  plVar10 = *(long **)(param_1 + 0x80);
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar10 == plVar3) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      if ((*plVar10 != 0) && (FUN_00b911c4(&local_38), plVar7 = local_38, local_38 != (long *)0x0))
      {
        FUN_01b39678(&local_38,local_38);
        if (local_38 == (long *)0x0) {
          bVar6 = false;
        }
        else {
          iVar8 = FUN_02c5be48();
          plVar12 = (long *)(ulong)(iVar8 - 0x1e0U < 3);
          if (local_38 != (long *)0x0) {
            plVar1 = local_38 + 10;
            do {
              lVar9 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = (int)lVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar9 == 1) {
              (**(code **)(*local_38 + 0x10))();
            }
          }
          bVar6 = true;
        }
        lVar9 = plVar7[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
        if (bVar6) {
          uVar11 = uVar11 + ((ulong)plVar12 & 1);
        }
      }
      plVar10 = plVar10 + 4;
    } while (plVar10 != plVar3);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return uVar11 & 0xffffffff;
}


