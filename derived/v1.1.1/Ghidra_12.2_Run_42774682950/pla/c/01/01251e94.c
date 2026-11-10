/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251e94; name: FUN_01251e94
 */


void FUN_01251e94(long param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x5deb53e286553cde;
  pcStack_28 = "anime_list_in";
  local_20 = 0xd;
  local_18 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


