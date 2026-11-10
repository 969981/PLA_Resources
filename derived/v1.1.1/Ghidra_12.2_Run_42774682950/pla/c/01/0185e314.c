/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185e314; name: FUN_0185e314
 */


int FUN_0185e314(long param_1)

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
  ulong uVar10;
  long *plVar11;
  int iVar12;
  uint unaff_w23;
  long *local_38;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x78);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar11 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0185e378;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0185e378:
  plVar11 = *(long **)(param_1 + 0x80);
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar11 == plVar3) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    do {
      if ((*plVar11 != 0) && (FUN_00b911c4(&local_38), plVar7 = local_38, local_38 != (long *)0x0))
      {
        FUN_01b39678(&local_38,local_38);
        if (local_38 == (long *)0x0) {
          bVar6 = false;
        }
        else {
          iVar8 = FUN_02c5be48();
          uVar10 = FUN_02c628dc(local_38);
          unaff_w23 = 0;
          if (((((uVar10 & 1) == 0) &&
               ((6 < iVar8 - 0x1e5U || ((1 << (ulong)(iVar8 - 0x1e5U & 0x1f) & 0x49U) == 0)))) &&
              ((4 < iVar8 - 0x281U || ((1 << (ulong)(iVar8 - 0x281U & 0x1f) & 0x13U) == 0)))) &&
             (iVar8 != 0x389)) {
            unaff_w23 = (uint)(2 < iVar8 - 0x1e0U);
          }
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
          iVar12 = iVar12 + (unaff_w23 & 1);
        }
      }
      plVar11 = plVar11 + 4;
    } while (plVar11 != plVar3);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return iVar12;
}


