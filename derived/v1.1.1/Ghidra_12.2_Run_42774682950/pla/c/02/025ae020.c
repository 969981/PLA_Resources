/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ae020; name: FUN_025ae020
 */


undefined8 FUN_025ae020(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_38;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x160);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x154));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_025ae084;
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
LAB_025ae084:
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar6 = FUN_02a43a8c(), (uVar6 & 1) == 0)) {
    lVar5 = 0;
    if (*(long **)(param_2 + 0x10) != (long *)0x0) {
      lVar5 = **(long **)(param_2 + 0x10);
    }
    plVar8 = *(long **)(param_1 + 0x168);
    if (plVar8 == (long *)0x0) {
      if (lVar5 == 0) goto LAB_025ae0e0;
    }
    else if (lVar5 == *plVar8) {
LAB_025ae0e0:
      *(undefined8 *)(param_1 + 0x168) = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
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
          plVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar5 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar5;
          local_38 = *plVar8;
          FUN_02a44274(lVar5 + 0xd8,&local_38);
        }
      }
      *(undefined8 *)(param_1 + 0x170) = 0;
      FUN_00ac508c(param_1 + 0x178,param_2);
      uVar7 = 1;
      goto LAB_025ae098;
    }
  }
  uVar7 = 0;
LAB_025ae098:
  *(undefined8 *)(param_1 + 0x160) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x154));
  return uVar7;
}


