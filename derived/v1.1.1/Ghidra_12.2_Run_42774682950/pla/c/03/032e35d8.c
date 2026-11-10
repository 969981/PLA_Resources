/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e35d8; name: FUN_032e35d8
 */


undefined4 FUN_032e35d8(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while ((bVar1 & 1) == 0) {
    param_1 = *(byte **)(param_1 + 8);
    bVar1 = *param_1;
  }
  return *(undefined4 *)(param_1 + 0x10);
}


