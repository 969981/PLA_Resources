/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b92624; name: FUN_02b92624
 */


void FUN_02b92624(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar7 = (long *)(param_1 + 0x10);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02b92688;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02b92688:
  plVar6 = (long *)(param_1 + 0x98);
  plVar7 = (long *)*plVar6;
  if (plVar6 != plVar7) {
    iVar1 = *(int *)(plVar7 + 8);
    while( true ) {
      if (-1 < iVar1) {
        if (DAT_043f1790 == (undefined **)0x0) {
          DAT_043f1790 = &PTR_PTR_042868c8;
        }
        (**(code **)(*DAT_043f1790 + 0x10))();
      }
      plVar7 = (long *)*plVar7;
      if (plVar6 == plVar7) break;
      iVar1 = (int)plVar7[8];
    }
  }
  plVar7 = *(long **)(param_1 + 0xd0);
  while (plVar7 != (long *)(param_1 + 200)) {
    while (plVar6 = (long *)plVar7[2], (long *)plVar7[2] == (long *)0x0) {
      do {
        plVar6 = plVar7;
        plVar5 = (long *)*plVar6;
        plVar7 = plVar5;
      } while (plVar6 == (long *)plVar5[2]);
      plVar7 = plVar6;
      if ((long *)plVar6[2] != plVar5) {
        plVar7 = plVar5;
      }
      if (plVar7 == (long *)(param_1 + 200)) goto LAB_02b92734;
    }
    do {
      plVar7 = plVar6;
      plVar6 = (long *)plVar7[1];
    } while ((long *)plVar7[1] != (long *)0x0);
  }
LAB_02b92734:
  *(undefined8 *)(param_1 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return;
}


