/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01506318; name: FUN_01506318
 */


void FUN_01506318(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x630) + 0xb0) == 0) {
    local_40 = 0x139ef06098c020be;
    pcStack_38 = "pane_N_info_w_00";
    local_30 = 0x10;
    local_28 = (long *)0x0;
    FUN_014f425c(*(undefined8 *)(param_1 + 0x5e0),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    FUN_0150755c(param_1,&DAT_03a7c2e0,1);
    local_40 = 0xc8085df999f9679b;
    pcStack_38 = "anime_waza_nothing";
    local_30 = 0x12;
  }
  else {
    local_40 = 0x99b1cfc38df9c62a;
    pcStack_38 = "anime_waza_something";
    local_30 = 0x14;
  }
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


