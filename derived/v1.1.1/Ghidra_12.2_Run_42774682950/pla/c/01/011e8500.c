/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e8500; name: FUN_011e8500
 */


void FUN_011e8500(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined1 *)(param_1 + 0x1670) = 0;
  if (*(char *)(param_1 + 0x1671) != '\0') {
    local_40 = 0x9df07271bfcdbeca;
    pcStack_38 = "anime_info_in";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_00d2e2d0(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x6382194909ee1083;
    pcStack_38 = "anime_info_out";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x1671) = 0;
  }
  return;
}


