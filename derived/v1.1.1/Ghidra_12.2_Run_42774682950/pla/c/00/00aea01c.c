/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aea01c; name: FUN_00aea01c
 */


void FUN_00aea01c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x2b1) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_00aea040(param_1,*(char *)(param_1 + 0x2b2) == '\0');
    return;
  }
  FUN_00aea040(param_1,0);
  return;
}


