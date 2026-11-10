/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c803dc; name: FUN_01c803dc
 */


void FUN_01c803dc(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_50;
  long *local_48;
  
  lVar6 = FUN_019005f0(*param_2,*(undefined8 *)(*param_2 + 8));
  local_50 = *param_3;
  FUN_02bea704(local_60,lVar6,&local_50);
  FUN_00ab5ae0(&local_68,local_60);
  plVar4 = local_68;
  if (local_68 == (long *)0x0) {
LAB_01c80584:
    *param_1 = lVar6;
  }
  else {
    lVar8 = local_68[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01c806e4;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)((long)plVar4 + 0xfc) = *(undefined4 *)(param_3 + 2);
    local_48 = plVar4;
    lVar8 = plVar4[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01c806e4;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    (**(code **)param_3[1])(param_3 + 1,&local_48);
    if (local_48 != (long *)0x0) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    lVar8 = plVar4[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    *(undefined4 *)((long)local_68 + 0xe4) = *(undefined4 *)(param_3 + 0xe);
    *(undefined1 *)((long)local_68 + 0xf4) = *(undefined1 *)(param_3 + 0x10);
    *(undefined1 *)((long)local_68 + 0xf5) = *(undefined1 *)((long)param_3 + 0x81);
    lVar8 = *(long *)((long)param_3 + 0x74);
    *(undefined4 *)(local_68 + 0x1e) = *(undefined4 *)((long)param_3 + 0x7c);
    local_68[0x1d] = lVar8;
    if (*(char *)(param_3 + 10) != '\0') {
      local_68[0x4f] = param_3[0xd];
      local_68[0x4e] = param_3[0xc];
      *(undefined1 *)((long)local_68 + 0x282) = 1;
    }
    *(undefined1 *)((long)local_68 + 0x281) = *(undefined1 *)(param_3 + 9);
    FUN_02bdb158(local_68,*(undefined4 *)(param_3 + 7),*(undefined4 *)((long)param_3 + 0x3c),
                 *(undefined4 *)(param_3 + 8),*(undefined4 *)((long)param_3 + 0x44));
    *(undefined1 *)((long)local_68 + 0x79) = 0;
    if (*(int *)((long)local_68 + 0x7c) == 0) {
      *(undefined4 *)((long)local_68 + 0x7c) = 1;
    }
    else if (local_68 == (long *)0x0) goto LAB_01c80584;
    lVar8 = local_68[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01c80584;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_68 + 0x20))();
    *param_1 = lVar6;
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_01c806e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_60[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60[0] + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_48 = (long *)*local_60[0];
      FUN_02a44274(lVar6 + 0xd8,&local_48);
    }
  }
  return;
}


