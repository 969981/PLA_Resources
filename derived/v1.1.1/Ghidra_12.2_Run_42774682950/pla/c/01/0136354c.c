/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136354c; name: FUN_0136354c
 */


void FUN_0136354c(long param_1,byte param_2)

{
  byte *local_20;
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  if (*(long *)(param_1 + 0x90) != 0) {
    local_20 = local_14;
    FUN_013651c4(*(long *)(param_1 + 0x90) + 0xf0,&local_20);
  }
  return;
}


