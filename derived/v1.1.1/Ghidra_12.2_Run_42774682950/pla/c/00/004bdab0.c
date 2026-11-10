/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bdab0; name: FUN_004bdab0
 */


undefined8 FUN_004bdab0(void)

{
  uint uVar1;
  
  uVar1 = FUN_004c1b20();
  uVar1 = uVar1 >> 8 & 0xff;
  if (uVar1 < 0xc) {
    return (&DAT_0439ea30)[uVar1];
  }
  return 0;
}


