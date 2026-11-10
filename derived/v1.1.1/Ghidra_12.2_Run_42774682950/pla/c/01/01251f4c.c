/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251f4c; name: FUN_01251f4c
 */


uint FUN_01251f4c(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x5deb53e286553cde;
  pcStack_38 = "anime_list_in";
  local_30 = 0xd;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  local_40 = 0xda74cfea38becf9f;
  pcStack_38 = "anime_list_out";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    uVar2 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&local_40);
    uVar1 = uVar1 & uVar2;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return uVar1 & 1;
}


