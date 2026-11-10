/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02865ef8; name: FUN_02865ef8
 */


void FUN_02865ef8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *local_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  if ((*(int *)(*(long *)(param_2 + 0x50) + 0x2860) != 0) &&
     (*(long *)(*(long *)(param_2 + 0x50) + 0x2868) != 0)) {
LAB_02866190:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_028727c4(&local_48,param_3,param_4,param_5);
  (**(code **)(*local_48 + 0x10))(local_40);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01ef880c(param_1,local_40);
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
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
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *local_40[0];
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  plVar4 = local_48;
  local_48 = (long *)0x0;
  lVar8 = *(long *)(param_2 + 0x50);
  if (plVar4 != (long *)0x0) {
    lVar9 = plVar4[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02866190;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = *(long **)(lVar8 + 0x2868);
  if (*(int *)(lVar8 + 0x2860) == 0) {
    *(undefined4 *)(lVar8 + 0x2860) = 1;
    *(undefined8 *)(lVar8 + 0x2868) = 0;
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
LAB_02866040:
    *(long **)(lVar8 + 0x2868) = plVar4;
    if (plVar4 == (long *)0x0) goto joined_r0x02866068;
  }
  else {
    if (plVar7 == (long *)0x0) {
      *(undefined4 *)(lVar8 + 0x2860) = 1;
      *(undefined8 *)(lVar8 + 0x2868) = 0;
      goto LAB_02866040;
    }
    if (plVar4 == (long *)0x0) goto joined_r0x02866068;
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
joined_r0x02866068:
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
  return;
}


