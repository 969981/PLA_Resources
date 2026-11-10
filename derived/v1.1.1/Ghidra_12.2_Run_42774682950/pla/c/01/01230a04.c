/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01230a04; name: FUN_01230a04
 */


void FUN_01230a04(undefined8 param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  char acStack_90 [96];
  long *local_28;
  
  snprintf(acStack_90,0x60,"anime_L_settings_list_%02d_switch",param_3);
  local_b8 = acStack_90;
  FUN_009313e8(&local_28,&local_b8);
  plVar1 = local_28;
  if (local_28 == (long *)0x0) {
    local_b0 = *(long *)PTR_DAT_04379c88;
LAB_01230bbc:
    plVar2 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_b0 = local_28[0xb];
    if (local_28 == (long *)0x0) goto LAB_01230bbc;
    plVar2 = local_28 + 0xc;
  }
  lStack_a8 = *plVar2;
  if (local_28 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_28[0xd];
  }
  local_98 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_98 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar2 = local_98;
    local_98 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_00d2df7c(param_2 + 0x180,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_b8 = acStack_90;
  FUN_009313e8(&local_28,&local_b8);
  plVar1 = local_28;
  if (local_28 == (long *)0x0) {
    local_b0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_b0 = local_28[0xb];
    if (local_28 != (long *)0x0) {
      lStack_a8 = local_28[0xc];
      goto joined_r0x01230ae8;
    }
  }
  lStack_a8 = *(long *)PTR_PTR_04379d00;
joined_r0x01230ae8:
  if (local_28 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_28[0xd];
  }
  local_98 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_98 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar2 = local_98;
    local_98 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_00d2e4b8(param_1,param_2 + 0x180,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


