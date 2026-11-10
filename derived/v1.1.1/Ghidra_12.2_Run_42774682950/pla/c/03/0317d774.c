/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317d774; name: FUN_0317d774
 */


void FUN_0317d774(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_LAB_042fdfe8;
  plVar5 = (long *)param_1[0x18];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar10 = plVar5 + 2;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,param_1[9],*(int *)((long)param_1 + 0x54) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  lVar8 = tpidr_el0;
  if ((int)param_1[8] != 0) {
    plVar5 = (long *)param_1[7];
    plVar10 = plVar5 + (long)(int)param_1[8] * 3;
    do {
      while( true ) {
        lVar9 = plVar10[-2];
        plVar10 = plVar10 + -3;
        if (lVar9 != 0) {
          nn::os::FinalizeMutex((MutexType *)(lVar9 + 8));
          lVar7 = *(long *)(lVar8 + 0x38d490);
          if (lVar7 == 0) {
            lVar7 = FUN_0333d16c(0,1);
            *(long *)(lVar8 + 0x38d490) = lVar7;
          }
          plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,0x38);
        }
        plVar6 = (long *)*plVar10;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) break;
LAB_0317d890:
        if (plVar10 == plVar5) goto LAB_0317d8dc;
      }
      plVar1 = plVar6 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 != 0) goto LAB_0317d890;
      (**(code **)(*plVar6 + 0x18))();
    } while (plVar10 != plVar5);
  }
LAB_0317d8dc:
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) * 0x18);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  lVar9 = param_1[5];
  if (lVar9 != 0) {
    nn::os::FinalizeMutex((MutexType *)(lVar9 + 8));
    lVar7 = *(long *)(lVar8 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar8 + 0x38d490) = lVar7;
    }
    plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,0x38);
  }
  plVar5 = (long *)param_1[4];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar10 = plVar5 + 2;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


