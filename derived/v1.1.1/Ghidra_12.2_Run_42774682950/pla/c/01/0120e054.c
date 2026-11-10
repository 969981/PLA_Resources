/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120e054; name: FUN_0120e054
 */


void FUN_0120e054(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x5d8) = 8;
  local_40 = 0xb7df13b127374897;
  pcStack_38 = "anime_search_list_main";
  local_30 = 0x16;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
  }
  FUN_0120d658(param_1);
  return;
}


