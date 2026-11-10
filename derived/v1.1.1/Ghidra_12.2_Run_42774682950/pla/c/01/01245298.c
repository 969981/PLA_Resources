/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01245298; name: FUN_01245298
 */


void FUN_01245298(long param_1)

{
  if (*(char *)(param_1 + 0x1aa) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
  FUN_01245070();
  return;
}


