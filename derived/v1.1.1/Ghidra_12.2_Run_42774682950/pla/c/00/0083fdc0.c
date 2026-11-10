/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083fdc0; name: FUN_0083fdc0
 */


void FUN_0083fdc0(long param_1,byte param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = 0x10;
  if ((param_3 & 1) == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xe3 | bVar1 | (param_2 & 3) << 2;
  return;
}


