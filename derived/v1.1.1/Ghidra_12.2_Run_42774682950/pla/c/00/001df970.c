/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df970; name: FUN_001df970
 */


void FUN_001df970(long param_1)

{
  if ((*(long **)(param_1 + 0x530) == (long *)0x0) || (**(long **)(param_1 + 0x530) == 0)) {
    FUN_001df85c(param_1);
    return;
  }
  FUN_00212db8();
  *(byte *)(param_1 + 0x538) = *(byte *)(param_1 + 0x538) | 1;
  FUN_001df8e8(param_1 + 0x510);
  return;
}


