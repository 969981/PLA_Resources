/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292f77c; name: FUN_0292f77c
 */


void FUN_0292f77c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  puVar2 = PTR_DAT_0437a0d0;
  if (param_3 == (undefined8 *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar3 = PTR_DAT_0437a0d8;
    local_60 = *(long *)PTR_DAT_0437a0d8;
    lStack_58 = *(long *)(PTR_DAT_0437a0d8 + 8);
    local_50 = *(long *)(PTR_DAT_0437a0d8 + 0x10);
    local_48 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_48 == (long *)0x0) {
      bVar1 = *puVar2;
    }
    else {
      (**(code **)(*local_48 + 0x18))();
      bVar1 = *puVar2;
    }
    if (((bVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_80 = *(long *)puVar3;
    lStack_78 = *(long *)(puVar3 + 8);
    local_70 = *(long *)(puVar3 + 0x10);
    local_68 = *(long **)(puVar3 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    if (param_4 == (undefined8 *)0x0) goto LAB_0292f934;
LAB_0292f868:
    plVar5 = (long *)*param_4;
    if (plVar5 == (long *)0x0) {
      local_a0 = *(long *)PTR_DAT_04379c88;
LAB_0292fbb8:
      lStack_98 = *(long *)PTR_PTR_04379d00;
      if (plVar5 != (long *)0x0) goto LAB_0292f888;
LAB_0292fbc8:
      local_90 = 0;
    }
    else {
      local_a0 = plVar5[0xb];
      if (plVar5 == (long *)0x0) goto LAB_0292fbb8;
      lStack_98 = plVar5[0xc];
      if (plVar5 == (long *)0x0) goto LAB_0292fbc8;
LAB_0292f888:
      local_90 = plVar5[0xd];
    }
    local_88 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar6 = (long *)param_4[3];
    if (plVar6 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_0292fbe0:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (plVar6 != (long *)0x0) goto LAB_0292f8bc;
LAB_0292fbf0:
      local_b0 = 0;
    }
    else {
      local_c0 = plVar6[0xb];
      if (plVar6 == (long *)0x0) goto LAB_0292fbe0;
      lStack_b8 = plVar6[0xc];
      if (plVar6 == (long *)0x0) goto LAB_0292fbf0;
LAB_0292f8bc:
      local_b0 = plVar6[0xd];
    }
    local_a8 = (long *)0x0;
    local_88 = plVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_a8 = plVar6;
LAB_0292fa50:
      FUN_0292fbf8(param_1,param_2,&local_60,&local_80,&local_a0,&local_c0,param_5);
      (**(code **)(*plVar6 + 0x20))(plVar6);
      goto joined_r0x0292fa84;
    }
    local_a8 = plVar6;
  }
  else {
    plVar6 = (long *)*param_3;
    if (plVar6 == (long *)0x0) {
      local_60 = *(long *)PTR_DAT_04379c88;
LAB_0292fb68:
      lStack_58 = *(long *)PTR_PTR_04379d00;
      if (plVar6 != (long *)0x0) goto LAB_0292f7cc;
LAB_0292fb78:
      local_50 = 0;
    }
    else {
      local_60 = plVar6[0xb];
      if (plVar6 == (long *)0x0) goto LAB_0292fb68;
      lStack_58 = plVar6[0xc];
      if (plVar6 == (long *)0x0) goto LAB_0292fb78;
LAB_0292f7cc:
      local_50 = plVar6[0xd];
    }
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    plVar5 = (long *)param_3[3];
    if (plVar5 == (long *)0x0) {
      local_80 = *(long *)PTR_DAT_04379c88;
LAB_0292fb90:
      lStack_78 = *(long *)PTR_PTR_04379d00;
      if (plVar5 != (long *)0x0) goto LAB_0292f800;
LAB_0292fba0:
      local_70 = 0;
    }
    else {
      local_80 = plVar5[0xb];
      if (plVar5 == (long *)0x0) goto LAB_0292fb90;
      lStack_78 = plVar5[0xc];
      if (plVar5 == (long *)0x0) goto LAB_0292fba0;
LAB_0292f800:
      local_70 = plVar5[0xd];
    }
    local_68 = (long *)0x0;
    local_48 = plVar6;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    local_68 = plVar5;
    if (param_4 != (undefined8 *)0x0) goto LAB_0292f868;
LAB_0292f934:
    puVar2 = PTR_DAT_0437a0d0;
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar3 = PTR_DAT_0437a0d8;
    local_a0 = *(long *)PTR_DAT_0437a0d8;
    lStack_98 = *(long *)(PTR_DAT_0437a0d8 + 8);
    local_90 = *(long *)(PTR_DAT_0437a0d8 + 0x10);
    local_88 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_88 == (long *)0x0) {
      bVar1 = *puVar2;
    }
    else {
      (**(code **)(*local_88 + 0x18))();
      bVar1 = *puVar2;
    }
    if (((bVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_c0 = *(long *)puVar3;
    lStack_b8 = *(long *)(puVar3 + 8);
    local_b0 = *(long *)(puVar3 + 0x10);
    plVar6 = *(long **)(puVar3 + 0x18);
    local_a8 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_0292fa50;
    }
  }
  FUN_0292fbf8(param_1,param_2,&local_60,&local_80,&local_a0,&local_c0,param_5);
joined_r0x0292fa84:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


