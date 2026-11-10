/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bafaec; name: FUN_01bafaec
 */


byte FUN_01bafaec(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(char *)(param_1 + 0xb90) != '\0') {
    bVar1 = FUN_00b1ea40(param_1 + 0xb98);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1 & 1;
}


