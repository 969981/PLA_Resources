/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d37828; name: FUN_00d37828
 */


undefined8 FUN_00d37828(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  if (*(long *)(param_1 + 8) == 0) {
LAB_00d37ab8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar11 = (ulong)*(uint *)(param_1 + 400);
  if (0xf < *(uint *)(param_1 + 400)) {
    return 0;
  }
  lVar7 = param_1 + uVar11 * 0x18;
  if (*(long *)(lVar7 + 0x18) != 0) {
    return 0;
  }
  pcVar9 = *(char **)(param_2 + 8);
  plVar10 = (long *)(lVar7 + 0x10);
  if (*pcVar9 == '\0') {
    local_70 = (long *)FUN_00938550();
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))(local_70);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar5 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
    FUN_02a47cd8(&local_70,uVar5,pcVar9);
  }
  plVar6 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *plVar10 = (long)local_70;
  lVar7 = FUN_00a24804(&local_70,*(undefined8 *)(param_1 + 8));
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_00d37ab8;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
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
  }
  plVar12 = (long *)(param_1 + uVar11 * 0x18 + 0x18);
  plVar6 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar6 == (long *)0x0) {
LAB_00d3791c:
    *plVar12 = lVar7;
  }
  else {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_00d3791c;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    *plVar12 = lVar7;
  }
  if (lVar7 == 0) {
    return 0;
  }
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
    local_70 = *(long **)PTR_DAT_04379c88;
  }
  else {
    local_70 = (long *)plVar10[0xb];
    if (plVar10 != (long *)0x0) {
      lStack_68 = plVar10[0xc];
      goto joined_r0x00d37aa4;
    }
  }
  lStack_68 = *(long *)PTR_PTR_04379d00;
joined_r0x00d37aa4:
  if (plVar10 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = plVar10[0xd];
  }
  local_58 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_58 = plVar10;
  FUN_010bc6c8(lVar7,&local_70,param_4,param_3,1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(undefined4 *)(param_1 + uVar11 * 0x18 + 0x20) = param_4;
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  return 1;
}


