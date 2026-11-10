/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4150; name: FUN_032c4150
 */


void FUN_032c4150(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *local_30;
  char *local_28;
  
  local_30 = param_2;
  if (param_2 == (char *)0x0) {
    local_28 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_2);
    local_28 = param_2 + sVar1;
  }
  FUN_032c41a8(param_1,&local_30);
  return;
}


