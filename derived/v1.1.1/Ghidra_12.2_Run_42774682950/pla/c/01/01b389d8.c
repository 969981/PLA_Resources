/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b389d8; name: FUN_01b389d8
 */


void FUN_01b389d8(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_01a6fbe4();
  *param_1 = (long)&PTR_FUN_0423ed38;
  param_1[0xb4] = 0;
  param_1[9] = (long)&PTR_LAB_0423ee80;
  param_1[10] = (long)&PTR_LAB_0423ef60;
  param_1[0xb5] = 0;
  FUN_01b388e8(param_1 + 0xb6);
  plVar1 = param_1 + 0xbd;
  *(undefined8 *)((long)param_1 + 0x60d) = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x10101;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined2 *)((long)param_1 + 0x61c) = 0x101;
  param_1[0xc4] = 0;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    param_1[0xc4] = 0;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9 = (long *)param_1[0xc4];
    param_1[0xc4] = lVar12;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      piVar3 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
  }
  lVar12 = param_1[0xc4];
  (**(code **)(*param_1 + 0x10))(local_58,param_1);
  local_68 = (long *)0x0;
  uStack_60 = 0;
  FUN_009cc414(&local_68,local_58);
  puVar6 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    piVar3 = (int *)(local_58[0] + 1);
    do {
      iVar8 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  FUN_009ab200(lVar12 + 0x340,&local_68);
  plVar9 = local_68;
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58[0] = (undefined8 *)*plVar9;
      FUN_02a44274(lVar12 + 0xd8,local_58);
    }
  }
  lVar12 = *param_4;
  if (lVar12 == 0) {
    local_58[0] = (undefined8 *)param_1[1];
    lVar12 = FUN_01b3c354(local_58[0],local_58,param_3);
    if (lVar12 != 0) {
      piVar3 = (int *)(lVar12 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar9 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *plVar1 = lVar12;
  }
  else {
    piVar3 = (int *)(lVar12 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9 = (long *)*plVar1;
    *plVar1 = lVar12;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  uVar7 = FUN_02c6f924(*(undefined8 *)(param_1[0xbd] + 0x98));
  *(undefined1 *)(param_1 + 0xc5) = uVar7;
  *(undefined4 *)((long)param_1 + 0x62c) = 1;
  return;
}


