/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085552c; name: FUN_0085552c
 */


void FUN_0085552c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00858114();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_00858114();
  return;
}


