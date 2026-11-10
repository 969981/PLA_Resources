/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d582e4; name: FUN_00d582e4
 */


void FUN_00d582e4(long *param_1,int param_2,ulong param_3,int param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char local_88 [96];
  long *local_28;
  
  if ((param_5 & 1) == 0) {
    if (param_2 == 0) {
      pcVar3 = "pane_L_inventory_parts_00_L_btn_main_%02d_T_%02d";
    }
    else if (param_2 == 1) {
      pcVar3 = "pane_L_inventory_parts_00_L_btn_sub_%02d_T_%02d";
    }
    else {
      pcVar3 = "pane_L_inventory_parts_00_L_btn_catch_%02d_T_%02d";
    }
    iVar1 = snprintf(local_88,0x60,pcVar3,param_3 & 0xffffffff);
  }
  else {
    if (param_2 == 0) {
      if (param_4 == 0) {
        pcVar3 = "pane_L_inventory_parts_00_L_btn_main_%02d_N_price_00";
      }
      else {
        pcVar3 = "pane_L_inventory_parts_00_L_btn_main_%02d_N_item_num_00";
      }
    }
    else if (param_2 == 1) {
      if (param_4 == 0) {
        pcVar3 = "pane_L_inventory_parts_00_L_btn_sub_%02d_N_price_00";
      }
      else {
        pcVar3 = "pane_L_inventory_parts_00_L_btn_sub_%02d_N_item_num_00";
      }
    }
    else if (param_4 == 0) {
      pcVar3 = "pane_L_inventory_parts_00_L_btn_catch_%02d_N_price_00";
    }
    else {
      pcVar3 = "pane_L_inventory_parts_00_L_btn_catch_%02d_N_item_num_00";
    }
    iVar1 = snprintf(local_88,0x60,pcVar3,param_3 & 0xffffffff);
  }
  if (local_88[0] == '\0') {
    local_28 = (long *)FUN_00938550(iVar1);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
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
    FUN_02a47cd8(&local_28,uVar2,local_88);
  }
  if (local_28 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04379c88;
    lVar5 = *(long *)PTR_PTR_04379d00;
    lVar6 = 0;
  }
  else {
    lVar4 = local_28[0xb];
    lVar5 = local_28[0xc];
    lVar6 = local_28[0xd];
  }
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = 0;
  if (local_28 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    param_1[3] = (long)local_28;
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return;
}


