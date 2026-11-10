/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013da248; name: FUN_013da248
 */


void FUN_013da248(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0x5ab) != '\0') {
    FUN_013e1dd8(param_1 + 0x180);
    local_40 = 0xb9ef675c0ba05f50;
    pcStack_38 = "anime_page_out";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


