/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096f674; name: FUN_0096f674
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096f674(long param_1)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  iVar7 = *(int *)(param_1 + 0x468);
  uVar1 = iVar7 + 2;
  if (-1 < iVar7 + 1) {
    uVar1 = iVar7 + 1;
  }
  iVar7 = (iVar7 + 1) - (uVar1 & 0xfffffffe);
  *(int *)(param_1 + 0x468) = iVar7;
  (**(code **)(*(long *)(param_1 + (long)iVar7 * 0x1f0 + 0x68) + 0x10))(local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00970f28(&local_58,local_48);
  puVar6 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_48[0] + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
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
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  FUN_00971228((long *)(param_1 + 0x448),&local_58);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_58 + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
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
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar10 + 0xd8,local_48);
    }
  }
  iVar7 = *(int *)(param_1 + 0x468);
  uVar1 = iVar7 + 2;
  if (-1 < iVar7 + 1) {
    uVar1 = iVar7 + 1;
  }
  (**(code **)(*(long *)(param_1 + (long)(int)((iVar7 + 1) - (uVar1 & 0xfffffffe)) * 0x1f0 + 0x68) +
              0x10))(local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00970f28(&local_58,local_48);
  puVar6 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_48[0] + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
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
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  plVar9 = (long *)(param_1 + 0x458);
  FUN_00971228(plVar9,&local_58);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_58 + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
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
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar10 + 0xd8,local_48);
    }
  }
  lVar10 = *(long *)(param_1 + 0x448);
  if (lVar10 == 0) {
LAB_0096f98c:
    lVar10 = 0;
    lVar11 = *plVar9;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x18);
    if (lVar10 != 0) {
      uVar8 = FUN_009717a0(lVar10);
      if ((uVar8 & 1) == 0) goto LAB_0096f98c;
      lVar10 = lVar10 + -0x50;
    }
    lVar11 = *plVar9;
  }
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) goto LAB_0096f8f8;
    uVar8 = FUN_009717a0(lVar11);
    if ((uVar8 & 1) != 0) {
      lVar11 = lVar11 + -0x50;
      goto LAB_0096f8f8;
    }
  }
  lVar11 = 0;
LAB_0096f8f8:
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar12 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar12;
  plVar9 = *(long **)(lVar12 + 0xb0);
  if (plVar9 == (long *)0x0) {
    lVar12 = _DAT_000000e0;
  }
  else {
    plVar3 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = plVar9[0x1c];
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  FUN_00966140(lVar10,lVar11,lVar12,*(undefined8 *)(param_1 + 8));
  return;
}


