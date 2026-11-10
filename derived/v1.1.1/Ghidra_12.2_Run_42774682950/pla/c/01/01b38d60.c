/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b38d60; name: FUN_01b38d60
 */


void FUN_01b38d60(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  FUN_01a6fbe4();
  *param_1 = (long)&PTR_FUN_0423ed38;
  param_1[0xb4] = 0;
  param_1[9] = (long)&PTR_LAB_0423ee80;
  param_1[10] = (long)&PTR_LAB_0423ef60;
  param_1[0xb5] = 0;
  FUN_01b388e8(param_1 + 0xb6);
  plVar7 = param_1 + 0xbd;
  *(undefined8 *)((long)param_1 + 0x60d) = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x10101;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined2 *)((long)param_1 + 0x61c) = 0x101;
  param_1[0xc4] = 0;
  lVar11 = *param_2;
  if (lVar11 == 0) {
    *plVar7 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = (long *)*plVar7;
    *plVar7 = lVar11;
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  lVar11 = FUN_017ea4e4(local_40,param_1[1]);
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)param_1[0xc4];
  param_1[0xc4] = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  param_1[0xc4] = lVar11;
  (**(code **)(*param_1 + 0x10))(local_40,param_1);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_009cc414(&local_50,local_40);
  puVar4 = local_40[0];
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  FUN_009ab200(lVar11 + 0x340,&local_50);
  puVar4 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_40[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar11 + 0xd8,local_40);
    }
  }
  uVar5 = FUN_02c6f924(*(undefined8 *)(param_1[0xbd] + 0x98));
  *(undefined1 *)(param_1 + 0xc5) = uVar5;
  *(undefined4 *)((long)param_1 + 0x62c) = 1;
  return;
}


