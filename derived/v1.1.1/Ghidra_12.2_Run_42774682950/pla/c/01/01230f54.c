/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01230f54; name: FUN_01230f54
 */


void FUN_01230f54(long param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [96];
  long *local_38;
  
  snprintf(acStack_a0,0x60,"anime_L_settings_list_%02d_text_color_%02d",param_3,param_2);
  uVar3 = 0x3f800000;
  if ((param_5 & 1) == 0) {
    uVar3 = 0x40000000;
  }
  uVar4 = 0;
  if ((param_4 & 1) == 0) {
    uVar4 = uVar3;
  }
  local_c8 = acStack_a0;
  FUN_009313e8(&local_38,&local_c8);
  plVar1 = local_38;
  if (local_38 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01231138:
    plVar2 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_c0 = local_38[0xb];
    if (local_38 == (long *)0x0) goto LAB_01231138;
    plVar2 = local_38 + 0xc;
  }
  lStack_b8 = *plVar2;
  if (local_38 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_38[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_38 == (long *)0x0) {
    local_a8 = local_38;
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    plVar2 = local_a8;
    local_a8 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_00d2df7c(param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_c8 = acStack_a0;
  FUN_009313e8(&local_38,&local_c8);
  plVar1 = local_38;
  if (local_38 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_c0 = local_38[0xb];
    if (local_38 != (long *)0x0) {
      lStack_b8 = local_38[0xc];
      goto joined_r0x01231060;
    }
  }
  lStack_b8 = *(long *)PTR_PTR_04379d00;
joined_r0x01231060:
  if (local_38 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_38[0xd];
  }
  local_a8 = (long *)0x0;
  if (local_38 == (long *)0x0) {
    local_a8 = local_38;
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    plVar2 = local_a8;
    local_a8 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_00d2e4b8(uVar4,param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


