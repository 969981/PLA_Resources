/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f213c; name: FUN_012f213c
 */


void FUN_012f213c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_60);
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_01160f90(&local_40,&local_60);
  puVar5 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *puVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  lVar9 = FUN_012f4b10(&local_40);
  plVar6 = local_40;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 1;
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
      local_40[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_60 = (undefined8 *)*plVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_60);
    }
  }
  if (lVar9 == 0) {
LAB_012f2424:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined1 *)(lVar9 + 0x6a) = 0;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_40);
  if (local_40 == (long *)0x0) goto LAB_012f2424;
  local_60 = (undefined8 *)0x2a231f3f4c127744;
  pcStack_58 = "FSYS_TUTORIAL_MODE_CRAFT";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  uVar8 = FUN_010f4bb4(local_40,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar8 & 1) == 0) {
    if (local_40 == (long *)0x0) {
      return;
    }
    lVar9 = local_40[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
      return;
    }
    return;
  }
  *(undefined1 *)(lVar9 + 0x6a) = 1;
  if (local_40 != (long *)0x0) {
    lVar9 = local_40[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
      lVar9 = *(long *)(param_1 + 0x730);
      goto joined_r0x012f2334;
    }
  }
  lVar9 = *(long *)(param_1 + 0x730);
joined_r0x012f2334:
  if (lVar9 != 0) {
    FUN_012f00ac();
  }
  return;
}


