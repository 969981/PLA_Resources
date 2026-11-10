/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d57364; name: FUN_00d57364
 */


undefined8 FUN_00d57364(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *__format;
  long lVar4;
  long *plVar5;
  long *local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  char local_80 [96];
  
  if (param_2 == 0) {
    __format = "button_icon_main_%02d";
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    __format = "button_icon_sub_%02d";
  }
  iVar1 = snprintf(local_80,0x60,__format,param_3 & 0xffffffff);
  if (local_80[0] == '\0') {
    plVar3 = (long *)FUN_00938550(iVar1);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar2 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar2;
    FUN_02a47cd8(&local_a0,uVar2,local_80);
    plVar3 = local_a0;
  }
  if (plVar3 == (long *)0x0) {
    local_a0 = *(long **)PTR_DAT_04379c88;
    plVar5 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_a0 = (long *)plVar3[0xb];
    plVar5 = plVar3 + 0xc;
  }
  lStack_98 = *plVar5;
  if (plVar3 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = plVar3[0xd];
  }
  local_88 = (long *)0x0;
  if (plVar3 == (long *)0x0) {
    local_88 = (long *)0x0;
    plVar5 = local_88;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar5 = plVar3;
    if (local_88 != (long *)0x0) {
      lVar4 = *local_88;
      local_88 = plVar3;
      (**(code **)(lVar4 + 0x20))();
      plVar5 = local_88;
    }
  }
  local_88 = plVar5;
  uVar2 = FUN_00d2e944(param_1 + 0x180,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return uVar2;
}


