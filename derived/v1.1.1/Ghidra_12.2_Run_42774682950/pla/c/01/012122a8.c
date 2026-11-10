/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012122a8; name: FUN_012122a8
 */


void FUN_012122a8(undefined8 param_1,undefined4 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char *local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  char acStack_70 [64];
  
  snprintf(acStack_70,0x40,"pane_L_btn_search_sub_%02d_T_btn_sub_contents_00",param_3);
  local_a0 = acStack_70;
  FUN_009313e8(&local_98,&local_a0);
  plVar1 = local_98;
  if (local_98 == (long *)0x0) {
    local_90 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_90 = local_98[0xb];
    if (local_98 != (long *)0x0) {
      lStack_88 = local_98[0xc];
      goto joined_r0x01212310;
    }
  }
  lStack_88 = *(long *)PTR_PTR_04379d00;
joined_r0x01212310:
  if (local_98 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_98[0xd];
  }
  local_78 = (long *)0x0;
  if (local_98 == (long *)0x0) {
    local_78 = local_98;
  }
  else {
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar2 = local_78;
    local_78 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_01210c30(param_1,param_2,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_01212824(param_1,0,param_3,0);
  return;
}


