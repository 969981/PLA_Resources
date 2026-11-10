/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01212e64; name: FUN_01212e64
 */


undefined8 FUN_01212e64(long param_1)

{
  ulong uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xaadeb44d187f565e;
  pcStack_38 = "anime_main_to_sub";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  local_40 = 0x1f1620f8536596a7;
  pcStack_38 = "search_sub_cursor";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  FUN_0120d780(param_1,&local_40,1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xa718d200e2b2efec;
  pcStack_38 = "anime_search_list_sub";
  local_30 = 0x15;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  FUN_0120f3d0(param_1);
  FUN_0120f25c(param_1);
  FUN_00d42438(param_1,1,1);
  if (*(long *)(param_1 + 0x440) != 0) {
    FUN_02831440();
  }
  return 1;
}


