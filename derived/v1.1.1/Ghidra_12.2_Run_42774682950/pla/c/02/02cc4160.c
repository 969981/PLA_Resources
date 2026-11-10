/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc4160; name: FUN_02cc4160
 */


long FUN_02cc4160(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x58;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
  }
  return lVar1;
}


