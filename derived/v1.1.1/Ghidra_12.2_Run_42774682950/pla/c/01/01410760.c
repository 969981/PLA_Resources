/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01410760; name: FUN_01410760
 */


void FUN_01410760(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x630) + 0x70) == 7) {
    FUN_00d42690(param_1,1,1);
    FUN_013e1dd8(param_1 + 0x180);
    local_40 = 0x27088d46a2383069;
    pcStack_38 = "anime_page_in_state";
    local_30 = 0x13;
    local_28 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


