/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bda70; name: FUN_004bda70
 */


undefined8 FUN_004bda70(void)

{
  uint uVar1;
  
  uVar1 = FUN_004c1b20();
  if ((uVar1 & 0xff) < 0xc) {
    return (&DAT_0439ea30)[uVar1 & 0xff];
  }
  return 0;
}


