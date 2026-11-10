/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d681d0; name: FUN_00d681d0
 */


byte FUN_00d681d0(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x5c0) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x5c0) + 0x58) ^ 1;
  }
  return bVar1 & *(int *)(*(long *)(param_1 + 0x5b0) + 0x80) == 6;
}


