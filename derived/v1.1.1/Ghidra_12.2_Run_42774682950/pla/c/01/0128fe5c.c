/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128fe5c; name: FUN_0128fe5c
 */


void FUN_0128fe5c(long param_1)

{
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = &DAT_bcaa842e33ae880f;
  pcStack_38 = "anime_L_money_00_money_add";
  local_30 = 0x1a;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  FUN_00d2e5c8(param_1 + 0x180,&local_40);
  FUN_00d2e4b8(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


