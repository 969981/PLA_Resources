/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280b258; name: FUN_0280b258
 */


void FUN_0280b258(long param_1,int param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  if (param_2 == 3) {
    local_40 = 0xf54f37be1fa0fba6;
    local_30 = 0x21;
    pcStack_38 = "pane_common_context_menu_n_pos_rb";
  }
  else {
    local_40 = 0xfea54c0c828c235;
    local_30 = 0x23;
    pcStack_38 = "pane_common_context_menu_n_pos_rb_l";
    switch(param_2) {
    default:
      local_40 = 0xf5b55dbe1ff7ef6a;
      local_30 = 0x21;
      pcStack_38 = "pane_common_context_menu_n_pos_lt";
      break;
    case 1:
      local_40 = 0xf54f49be1fa11a3c;
      local_30 = 0x21;
      pcStack_38 = "pane_common_context_menu_n_pos_rt";
      break;
    case 2:
      local_40 = 0xf5b567be1ff80068;
      local_30 = 0x21;
      pcStack_38 = "pane_common_context_menu_n_pos_lb";
      break;
    case 4:
      break;
    }
  }
  local_60 = *(undefined8 *)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xe8);
  local_58 = *(undefined8 *)(param_1 + 0xb0);
  local_50 = *(undefined8 *)(param_1 + 0xb8);
  local_48 = *(long **)(param_1 + 0xc0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_60,&local_40);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = *(undefined8 *)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xe8);
  local_58 = *(undefined8 *)(param_1 + 0xb0);
  local_50 = *(undefined8 *)(param_1 + 0xb8);
  local_48 = *(long **)(param_1 + 0xc0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  auVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_60);
  *(undefined1 (*) [16])(param_1 + 0x460) = auVar2;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


