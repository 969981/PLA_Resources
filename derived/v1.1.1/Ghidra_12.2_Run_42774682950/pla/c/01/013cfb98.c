/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cfb98; name: FUN_013cfb98
 */


void FUN_013cfb98(long param_1,byte param_2)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x119590b524a3f263;
  pcStack_48 = "pane_L_button_00_L_icon_new_00";
  local_40 = 0x1e;
  lVar1 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((lVar1 != 0) &&
     (*(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_2 & 1, (param_2 & 1) != 0)) {
    local_50 = 0x5f894972a2ff59f6;
    pcStack_48 = "anime_L_button_00_L_icon_new_00_flashing";
    local_40 = 0x28;
    local_38 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


