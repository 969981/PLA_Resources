/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8f3c0; name: FUN_02a8f3c0
 */


void FUN_02a8f3c0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_02a48e80();
  *param_1 = &PTR_LAB_0427f7e8;
  param_1[9] = &PTR_LAB_0427f858;
  param_1[10] = &PTR_LAB_0427f8a0;
  FUN_02a90fd8(param_1 + 0x82);
  FUN_02a90fd8(param_1 + 0x89);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x90),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x94));
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  lVar5 = FUN_02a915e0(param_1[1],&local_28);
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02a8f74c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x96];
  param_1[0x96] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  param_1[0x96] = lVar5;
  lVar5 = FUN_02a915e0(param_1[1],&local_28);
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02a8f74c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x97];
  param_1[0x97] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  param_1[0x97] = lVar5;
  lVar5 = FUN_02a915e0(param_1[1],&local_28);
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02a8f74c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x98];
  param_1[0x98] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  param_1[0x98] = lVar5;
  lVar5 = FUN_02a915e0(param_1[1],&local_28);
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_02a8f74c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x99];
  param_1[0x99] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  param_1[0x99] = lVar5;
  if (*(int *)((long)param_1 + 0x304) != 1) {
    pcVar8 = (code *)param_1[99];
    if (pcVar8 != (code *)0x0) {
      param_1[100] = 0;
      param_1[0x65] = 0;
      param_1[0x62] = 0;
      param_1[99] = 0;
      (*pcVar8)(param_1 + 0x66);
    }
    param_1[0x62] = &LAB_02a91f48;
    param_1[99] = &LAB_02a92114;
    param_1[100] = &LAB_02a92118;
    param_1[0x65] = &LAB_02a92124;
    param_1[0x66] = param_1;
    *(undefined4 *)((long)param_1 + 0x304) = 1;
  }
  if (*(int *)(param_1 + 0x61) != 1) {
    pcVar8 = (code *)param_1[0x73];
    if (pcVar8 != (code *)0x0) {
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      (*pcVar8)(param_1 + 0x76);
    }
    param_1[0x72] = &LAB_02a92130;
    param_1[0x73] = &LAB_02a922c0;
    param_1[0x74] = &LAB_02a922c4;
    param_1[0x75] = &LAB_02a922d0;
    param_1[0x76] = param_1;
    *(undefined4 *)(param_1 + 0x61) = 1;
  }
  return;
}


