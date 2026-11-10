/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e4d68; name: FUN_013e4d68
 */


void FUN_013e4d68(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_28;
  
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_50);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01160f90(&local_60,&local_50);
  puVar3 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar8 = (int *)(local_50 + 1);
    do {
      iVar4 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar3;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  lVar6 = FUN_013e86c0(&local_60);
  puVar3 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar8 = (int *)(local_60 + 1);
    do {
      iVar4 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_50 = (undefined8 *)*puVar3;
      FUN_02a44274(lVar7 + 0xd8,&local_50);
    }
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_50 = (undefined8 *)0xb7bb79e53203acd4;
  pcStack_48 = "View_Detail";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  uVar5 = FUN_013eaef0(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_01406ccc(uVar5,1);
  *(undefined1 *)(*(long *)(lVar6 + 0xa0) + 8) = 0;
  *(undefined1 *)(lVar6 + 0xf10) = 0;
  *(undefined4 *)(lVar6 + 0xf14) = 0;
  *(undefined2 *)(lVar6 + 0xf18) = 0;
  *(undefined4 *)(lVar6 + 0xf1c) = 0;
  *(undefined2 *)(lVar6 + 0xf20) = 0;
  *(undefined8 *)(lVar6 + 0xf24) = 0xffffffff00000000;
  *(undefined1 *)(lVar6 + 0xf2c) = 0;
  piVar8 = *(int **)(param_1 + 0x720);
  if (piVar8 != (int *)0x0) {
    if (*piVar8 == 1) {
      *(undefined1 *)(*(long *)(lVar6 + 0xa0) + 8) = 1;
    }
    else {
      if (*piVar8 != 2) {
        return;
      }
      iVar4 = piVar8[7];
      *(undefined1 *)(lVar6 + 0xf10) = 1;
      uVar10 = *(undefined8 *)(piVar8 + 1);
      uVar9 = *(undefined8 *)(piVar8 + 5);
      *(undefined8 *)(lVar6 + 0xf1c) = *(undefined8 *)(piVar8 + 3);
      *(undefined8 *)(lVar6 + 0xf24) = uVar9;
      *(undefined8 *)(lVar6 + 0xf14) = uVar10;
      *(char *)(lVar6 + 0xf2c) = (char)iVar4;
    }
    FUN_01406ccc(uVar5,0);
  }
  return;
}


