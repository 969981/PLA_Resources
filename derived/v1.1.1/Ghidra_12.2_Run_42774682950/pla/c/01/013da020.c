/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013da020; name: FUN_013da020
 */


uint FUN_013da020(long param_1)

{
  uint uVar1;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x2c8) == 0)) ||
     (*(char *)(*(long *)(param_1 + 0x2c8) + 500) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00d73754();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


