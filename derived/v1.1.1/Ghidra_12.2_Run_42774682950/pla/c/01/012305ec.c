/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012305ec; name: FUN_012305ec
 */


void FUN_012305ec(undefined8 param_1,int param_2,undefined8 param_3)

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
  
  snprintf(acStack_90,0x60,"pane_L_settings_list_%02d_T_heading_00",param_2);
  local_b8 = acStack_90;
  FUN_009313e8(&local_28,&local_b8);
  plVar2 = local_28;
  if (local_28 == (long *)0x0) {
    local_b0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_b0 = local_28[0xb];
    if (local_28 != (long *)0x0) {
      lStack_a8 = local_28[0xc];
      goto joined_r0x01230650;
    }
  }
  lStack_a8 = *(long *)PTR_PTR_04379d00;
joined_r0x01230650:
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
    plVar1 = local_98;
    local_98 = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  FUN_01230458(param_1,param_3,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


