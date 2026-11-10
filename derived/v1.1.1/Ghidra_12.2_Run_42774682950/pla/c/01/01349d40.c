/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01349d40; name: FUN_01349d40
 */


void FUN_01349d40(long param_1,uint param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined8 *)(param_1 + 0x5b4) = 1;
  *(undefined1 *)(param_1 + 0x98c) = 0;
  FUN_01349acc(param_1,0,param_1 + 0x980,0);
  if (*(char *)(param_1 + 0x95b) != '\0') {
    local_40 = 0x7a4a9d0dc22b5460;
    pcStack_38 = "STOP_UI_COMMON_MAP_CURSOR_MOVE";
    local_30 = 0x1e;
    local_28 = (long *)0x0;
    FUN_028354b0(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x95b) = 0;
  }
  FUN_01349de4(param_1,param_2 & 1);
  return;
}


