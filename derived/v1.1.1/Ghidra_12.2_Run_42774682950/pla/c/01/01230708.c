/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01230708; name: FUN_01230708
 */


void FUN_01230708(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  uint param4;
  long *plVar1;
  long *plVar2;
  char *local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [96];
  
  param4 = param_2 * 10;
  snprintf(acStack_a0,0x60,"pane_L_settings_list_%02d_T_option_heading_%02d",param_3,param4);
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar1 = local_c8;
  if (local_c8 == (long *)0x0) {
    plVar2 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar2 = local_c8 + 0xb;
  }
  local_c0 = *plVar2;
  if (local_c8 == (long *)0x0) {
    plVar2 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar2 = local_c8 + 0xc;
  }
  lStack_b8 = *plVar2;
  if (local_c8 == (long *)0x0) {
    local_b0 = 0;
    local_a8 = (long *)0x0;
  }
  else {
    local_b0 = local_c8[0xd];
    local_a8 = (long *)0x0;
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar2 = local_a8;
    local_a8 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_01230458(param_1,param_4,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  snprintf(acStack_a0,0x60,"pane_L_settings_list_%02d_T_option_heading_%02d",param_3,param4 | 1);
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar1 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
LAB_012309b0:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_c8 != (long *)0x0) goto LAB_01230848;
LAB_012309c0:
    local_b0 = 0;
    local_a8 = (long *)0x0;
  }
  else {
    local_c0 = local_c8[0xb];
    if (local_c8 == (long *)0x0) goto LAB_012309b0;
    lStack_b8 = local_c8[0xc];
    if (local_c8 == (long *)0x0) goto LAB_012309c0;
LAB_01230848:
    local_b0 = local_c8[0xd];
    local_a8 = (long *)0x0;
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar2 = local_a8;
    local_a8 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_01230458(param_1,param_4,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  snprintf(acStack_a0,0x60,"pane_L_settings_list_%02d_T_option_heading_%02d",param_3,param4 + 2);
  local_d0 = acStack_a0;
  FUN_009313e8(&local_c8,&local_d0);
  plVar1 = local_c8;
  if (local_c8 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_c0 = local_c8[0xb];
    if (local_c8 != (long *)0x0) {
      lStack_b8 = local_c8[0xc];
      goto joined_r0x01230900;
    }
  }
  lStack_b8 = *(long *)PTR_PTR_04379d00;
joined_r0x01230900:
  if (local_c8 == (long *)0x0) {
    local_b0 = 0;
    local_a8 = (long *)0x0;
  }
  else {
    local_b0 = local_c8[0xd];
    local_a8 = (long *)0x0;
    (**(code **)(*local_c8 + 0x18))(local_c8);
    plVar2 = local_a8;
    local_a8 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_01230458(param_1,param_4,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


