/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2ae3c; name: FUN_02b2ae3c
 */


void FUN_02b2ae3c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x1a0);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x194));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02b2aea0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02b2aea0:
  plVar8 = *(long **)(param_1 + 0x158);
  param_2 = (long *)*param_2;
  plVar6 = *(long **)(param_1 + 0x150);
  do {
    plVar7 = plVar6;
    if (plVar8 == plVar7) goto LAB_02b2af5c;
    plVar6 = plVar7 + 1;
  } while ((long *)*plVar7 != param_2);
  if (plVar8 == plVar6) goto LAB_02b2af28;
  *plVar7 = 0;
  plVar1 = plVar7;
  while( true ) {
    if (param_2 != (long *)0x0) {
      plVar7 = param_2 + 10;
      do {
        iVar4 = (int)*plVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*param_2 + 0x10))();
      }
    }
    lVar5 = *plVar6;
    *plVar6 = 0;
    plVar7 = plVar1 + 1;
    *plVar1 = lVar5;
    if (plVar6 + 1 == plVar8) break;
    param_2 = (long *)*plVar7;
    *plVar7 = 0;
    plVar6 = plVar6 + 1;
    plVar1 = plVar7;
  }
  plVar8 = *(long **)(param_1 + 0x158);
  while (plVar8 != plVar7) {
LAB_02b2af28:
    plVar8 = plVar8 + -1;
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
  }
  *(long **)(param_1 + 0x158) = plVar7;
LAB_02b2af5c:
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x194));
  return;
}


