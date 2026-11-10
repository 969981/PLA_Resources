/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013da08c; name: FUN_013da08c
 */


void FUN_013da08c(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0x5ab) != '\0') {
    FUN_00d42690(param_1,1,1);
    FUN_013e1dd8(param_1 + 0x180);
    local_40 = 0x35c47871346bd963;
    pcStack_38 = "anime_page_in";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


