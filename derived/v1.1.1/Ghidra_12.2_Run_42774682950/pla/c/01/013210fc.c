/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013210fc; name: FUN_013210fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013210fc(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar14 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar14;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar8 = *(long **)(lVar9 + 0xd0);
  if (plVar8 == (long *)0x0) {
    lVar9 = _DAT_000001a8;
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = plVar8[0x35];
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_3 + 0x720) = *(long *)(lVar14 + 0x50) + 0x2e00;
  (**(code **)(**(long **)(param_3 + 0x368) + 0x10))(local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01160f90(&local_58,local_48);
  puVar5 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_48[0] + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_38 = *puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_38);
    }
  }
  lVar14 = FUN_0132a9ac(&local_58);
  puVar5 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_58 + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar13 + 0xd8,local_48);
    }
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar7 = FUN_0131a338();
  if (iVar7 == 7) {
    iVar7 = 5;
    puVar10 = *(undefined4 **)(param_3 + 0x720);
  }
  else {
    puVar10 = *(undefined4 **)(param_3 + 0x720);
  }
  if (puVar10 != (undefined4 *)0x0) {
    *(undefined4 *)(lVar14 + 0x80) = *puVar10;
    *(int *)(lVar14 + 0x88) = iVar7;
    iVar3 = 7;
    if (**(int **)(param_3 + 0x720) != 1) {
      iVar3 = iVar7;
    }
    *(int *)(lVar14 + 0x84) = iVar3;
    *(int *)(lVar14 + 0x8c) = iVar3;
  }
  cVar4 = *(char *)(lVar9 + 0x94);
  if (*(int *)(lVar9 + 0x98) == iVar7) {
    uVar11 = *(undefined8 *)(lVar9 + 0x9c);
    *(undefined1 *)(lVar14 + 0x11c) = 1;
    *(undefined8 *)(lVar14 + 0x120) = uVar11;
    uVar15 = FUN_0131b824(lVar9);
    *(undefined1 *)(lVar14 + 0x110) = 1;
    *(undefined4 *)(lVar14 + 0x114) = uVar15;
    *(undefined4 *)(lVar14 + 0x118) = param_2;
  }
  if (*(int *)(lVar14 + 0x84) == 7) {
    uVar12 = 0;
    uVar15 = 2;
  }
  else {
    bVar6 = cVar4 != '\0';
    uVar15 = 3;
    if (bVar6) {
      uVar15 = 4;
    }
    *(undefined1 *)(lVar14 + 0xd0) = 1;
    uVar12 = 1;
    if (bVar6) {
      uVar12 = 2;
    }
  }
  *(undefined4 *)(lVar14 + 0x70) = uVar15;
  *(undefined4 *)(lVar14 + 0x90) = uVar12;
  *(undefined1 *)(lVar14 + 0x76) = 1;
  *(long *)(lVar14 + 0x78) = lVar9;
  *(undefined1 *)(lVar14 + 0x129) = 1;
  *(undefined1 *)(lVar14 + 0x350) = 0;
  return;
}


