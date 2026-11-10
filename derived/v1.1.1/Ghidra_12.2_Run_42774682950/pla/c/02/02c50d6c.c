/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c50d6c; name: FUN_02c50d6c
 */


int FUN_02c50d6c(undefined8 param_1,undefined2 param_2)

{
  int iVar1;
  long local_20 [2];
  
  FUN_02c4fb44(local_20,param_2);
  if (*(char *)(local_20[0] + 0x20) == '\x01') {
    iVar1 = *(byte *)(local_20[0] + 0x21) + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


