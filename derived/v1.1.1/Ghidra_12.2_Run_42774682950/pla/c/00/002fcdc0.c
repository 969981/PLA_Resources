/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fcdc0; name: FUN_002fcdc0
 */


uint FUN_002fcdc0(void)

{
  uint uVar1;
  
  uVar1 = FUN_002fd060(0,0);
  if (-1 < (int)uVar1) {
    nnsocketClose();
  }
  return ~uVar1 >> 0x1f;
}


