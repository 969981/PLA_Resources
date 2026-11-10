/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120e260; name: FUN_0120e260
 */


void FUN_0120e260(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x1f1620f8536596a7;
  pcStack_38 = "search_sub_cursor";
  local_30 = 0x11;
  FUN_0120d780(param_1,&local_40,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xa718d200e2b2efec;
  pcStack_38 = "anime_search_list_sub";
  local_30 = 0x15;
  local_28 = (long *)0x0;
  lVar1 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_40);
    lVar1 = *(long *)(param_1 + 0x2c8);
  }
  local_40 = 0xfe5f54723c2cbde6;
  pcStack_38 = "anime_sub_to_main";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  if (lVar1 != 0) {
    FUN_0283b1e8(lVar1,&local_40);
  }
  FUN_00d42438(param_1,0,1);
  return;
}


