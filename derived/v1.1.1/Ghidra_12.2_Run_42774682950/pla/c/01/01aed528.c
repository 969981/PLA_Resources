/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aed528; name: FUN_01aed528
 */


void FUN_01aed528(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01b00924(&local_40,param_1 + 0x688);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_30);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 != (long *)0x0) {
    uVar6 = local_30[0x188];
    local_30[0x188] = uVar6 & 0xfffffffffffffff7;
    if (((uVar6 & 0x37) == 0) || (*(char *)((long)local_30 + 0xa1d) == '\0')) {
      local_30[0x189] = local_30[0x189] & 0xfffffffffffffff7;
    }
    else {
      (**(code **)(*local_30 + 0x310))();
      local_30[0x189] = local_30[0x189] & 0xfffffffffffffff7;
      if (local_30 == (long *)0x0) goto LAB_01aed5a8;
    }
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
LAB_01aed5a8:
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01b00b94(&local_40,param_1 + 0x6e8);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_009bd2d4(&local_30);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 != (long *)0x0) {
    local_30[0x56] = local_30[0x56] & 0xfffffffffffffffe;
    if ((int)local_30[0x48] == 1) {
      *(undefined4 *)(local_30 + 0x48) = 0;
    }
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    local_30[0x4a] = 0;
    *(undefined4 *)(local_30 + 0x4e) = 0;
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0x900) = 1;
  *(undefined1 *)(param_1 + 0x83a) = 1;
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01b0043c(&local_40,param_1 + 0x668);
  FUN_01aeb948(&local_30,&local_40);
  puVar4 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40 + 1);
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
      local_40[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  if (local_30 != (long *)0x0) {
    local_30[0x4b] = local_30[0x4b] & 0xfffffffffffffff7;
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


