/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c35d4; name: FUN_031c35d4
 */


void FUN_031c35d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  MutexType *pMVar8;
  long *plVar9;
  long *plVar10;
  
  pMVar8 = (MutexType *)param_1[5];
  *param_1 = (long)&PTR_LAB_0430b710;
  if (pMVar8 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar8);
    lVar7 = tpidr_el0;
    lVar6 = *(long *)(lVar7 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
    plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,pMVar8,0x20);
  }
  if ((int)param_1[4] != 0) {
    plVar9 = (long *)param_1[3];
    plVar10 = plVar9 + (long)(int)param_1[4] + -1;
    plVar5 = (long *)*plVar10;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar1 = plVar5 + 2;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) goto LAB_031c36a4;
    }
LAB_031c3674:
    if (plVar10 != plVar9) {
      while( true ) {
        plVar10 = plVar10 + -1;
        plVar5 = (long *)*plVar10;
        if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) break;
        plVar1 = plVar5 + 2;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 != 0) break;
LAB_031c36a4:
        (**(code **)(*plVar5 + 0x18))();
        if (plVar10 == plVar9) goto LAB_031c36b8;
      }
      goto LAB_031c3674;
    }
  }
LAB_031c36b8:
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[3],
               ((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 3);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


