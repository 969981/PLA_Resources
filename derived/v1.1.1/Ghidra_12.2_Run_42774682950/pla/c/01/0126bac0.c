/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126bac0; name: FUN_0126bac0
 */


void FUN_0126bac0(long param_1)

{
  if (*(char *)(param_1 + 0x1a2) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
  FUN_0126b898();
  return;
}


