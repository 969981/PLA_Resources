/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b385b8; name: FUN_01b385b8
 */


void FUN_01b385b8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
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
  *(undefined8 *)((long)param_1 + 0x60d) = 0;
  local_40[0] = (undefined8 *)param_1[1];
  *(undefined4 *)(param_1 + 0xc3) = 0x10101;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined2 *)((long)param_1 + 0x61c) = 0x101;
  param_1[0xc4] = 0;
  lVar8 = FUN_01b3c354(local_40[0],local_40,param_2);
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[0xbd];
  param_1[0xbd] = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0xbd] = lVar8;
  lVar8 = FUN_017ea4e4(local_40,param_1[1]);
  if (lVar8 != 0) {
    lVar11 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[0xc4];
  param_1[0xc4] = 0;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0xc4] = lVar8;
  (**(code **)(*param_1 + 0x10))(local_40,param_1);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_009cc414(&local_50,local_40);
  puVar5 = local_40[0];
  if (local_40[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_40[0] + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_28 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_28);
    }
  }
  FUN_009ab200(lVar8 + 0x340,&local_50);
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_50 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
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
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_40[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar8 + 0xd8,local_40);
    }
  }
  uVar6 = FUN_02c6f924(*(undefined8 *)(param_1[0xbd] + 0x98));
  *(undefined1 *)(param_1 + 0xc5) = uVar6;
  *(undefined4 *)((long)param_1 + 0x62c) = 1;
  return;
}


