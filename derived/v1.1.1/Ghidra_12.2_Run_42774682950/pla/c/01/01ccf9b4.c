/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ccf9b4; name: FUN_01ccf9b4
 */


void FUN_01ccf9b4(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(&local_d8);
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  FUN_018fed88(&local_e8,&local_d8);
  if (local_d8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d8 + 1);
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
      local_d8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_40 = (undefined8 *)*local_d8;
      FUN_02a44274(lVar6 + 0xd8,&local_40);
    }
  }
  local_d8 = (undefined8 *)0x0;
  if (local_e8 != (undefined8 *)0x0) {
    local_d8 = (undefined8 *)*local_e8;
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_008802f0(&local_40,*param_2 + 0x58);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_00b5f91c(&local_d0,&local_40);
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
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  local_90 = 0;
  local_a0 = local_d8;
  uStack_98 = 0;
  FUN_00b5fc1c(&uStack_98,&local_d0);
  local_c0 = FUN_01cd084c;
  local_b8 = FUN_01cd0a10;
  local_b0 = &LAB_01cd0ad0;
  local_a8 = FUN_01cd0af0;
  pcVar7 = *(code **)(lVar8 + 0xae8);
  if (pcVar7 == (code *)0x0) {
LAB_01ccfb70:
    (*local_a8)(&local_a0,lVar8 + 0xb00);
    pcVar7 = local_b8;
    *(code **)(lVar8 + 0xaf8) = local_a8;
    *(undefined8 *)(lVar8 + 0xae0) = local_c0;
    *(code **)(lVar8 + 0xae8) = local_b8;
    *(undefined1 **)(lVar8 + 0xaf0) = local_b0;
    if (local_b8 == (code *)0x0) goto LAB_01ccfbc4;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
  else {
    *(undefined8 *)(lVar8 + 0xaf0) = 0;
    *(undefined8 *)(lVar8 + 0xaf8) = 0;
    *(undefined8 *)(lVar8 + 0xae0) = 0;
    *(undefined8 *)(lVar8 + 0xae8) = 0;
    (*pcVar7)(lVar8 + 0xb00);
    if (local_a8 != (code *)0x0) goto LAB_01ccfb70;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
LAB_01ccfbc4:
  puVar4 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0 + 1);
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
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_40 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_40);
    }
  }
  puVar4 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e8 + 1);
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
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_40 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_40);
    }
  }
  return;
}


