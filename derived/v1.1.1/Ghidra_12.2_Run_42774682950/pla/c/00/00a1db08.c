/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a1db08; name: FUN_00a1db08
 */


void FUN_00a1db08(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40 [2];
  long local_28;
  
  local_40[0] = (long *)*param_2;
  if (local_40[0] == (long *)0x0) {
    FUN_009c5324(param_1,local_40);
  }
  else {
    lVar9 = local_40[0][0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    plVar6 = local_40[0];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_009c5324(param_1,local_40);
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
  }
  *param_1 = &PTR_LAB_041c8228;
  param_1[0x10] = 0;
  param_1[9] = &PTR_LAB_041c8278;
  param_1[10] = &PTR_LAB_041c82c0;
  param_1[0xf] = 0;
  if ((long *)*param_2 != (long *)0x0) {
    (**(code **)(*(long *)*param_2 + 0x10))(local_40);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00a1e58c(&local_50,local_40);
    plVar6 = local_40[0];
    if (local_40[0] != (long *)0x0) {
      plVar2 = local_40[0] + 1;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *plVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
    FUN_00a1e88c(param_1 + 0xf,&local_50);
    puVar5 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_40[0] = (long *)*puVar5;
        FUN_02a44274(lVar9 + 0xd8,local_40);
      }
    }
  }
  return;
}


