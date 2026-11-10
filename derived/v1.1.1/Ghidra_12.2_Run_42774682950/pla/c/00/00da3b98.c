/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da3b98; name: FUN_00da3b98
 */


void FUN_00da3b98(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_24;
  
  cVar1 = *(char *)(param_1 + 0x100);
  local_24 = param_2;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_02bc9b48(*(undefined8 *)(param_1 + 0x60));
  }
  FUN_02bc900c(*(undefined8 *)(param_1 + 0x60),&local_24);
  FUN_00da3a70(param_1,cVar1 != '\0');
  return;
}


