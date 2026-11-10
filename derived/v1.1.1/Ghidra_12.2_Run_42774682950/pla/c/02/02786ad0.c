/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786ad0; name: FUN_02786ad0
 */


int FUN_02786ad0(int param_1)

{
  uint uVar1;
  
  if ((uint)(param_1 * 0x19) < 10) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1 * 0x19) / 10;
  }
  if (0x31 < uVar1) {
    uVar1 = 0x32;
  }
  return uVar1 + 0x32;
}


