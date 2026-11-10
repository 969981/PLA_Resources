/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2f18; name: FUN_032e2f18
 */


void FUN_032e2f18(byte *param_1)

{
  byte bVar1;
  
  do {
    bVar1 = *param_1;
    param_1 = *(byte **)(param_1 + 8);
  } while ((bVar1 & 1) == 0);
  return;
}


