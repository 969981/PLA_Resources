/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121f8bc; name: FUN_0121f8bc
 */


void FUN_0121f8bc(undefined8 param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  char acStack_70 [64];
  long *local_28;
  
  FUN_01217724(param_1,1,param_2,0);
  snprintf(acStack_70,0x40,"pane_L_list_temochi_base_%02d_T_nickname_00",param_2);
  local_98 = acStack_70;
  FUN_009313e8(&local_28,&local_98);
  plVar2 = local_28;
  if (local_28 == (long *)0x0) {
    local_90 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_90 = local_28[0xb];
    if (local_28 != (long *)0x0) {
      lStack_88 = local_28[0xc];
      goto joined_r0x0121f930;
    }
  }
  lStack_88 = *(long *)PTR_PTR_04379d00;
joined_r0x0121f930:
  if (local_28 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_28[0xd];
  }
  local_78 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_78 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar1 = local_78;
    local_78 = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  FUN_0121ac84(param_1,0xf3a3439af010602,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


