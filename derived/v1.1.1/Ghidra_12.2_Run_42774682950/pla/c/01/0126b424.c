/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126b424; name: FUN_0126b424
 */


void FUN_0126b424(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_01352050();
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  FUN_01352050();
  return;
}


