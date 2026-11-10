/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181710c; name: FUN_0181710c
 */


void FUN_0181710c(float param_1,long param_2)

{
  if (*(char *)(param_2 + 0x251) == '\0') {
    *(undefined1 *)(param_2 + 0x210) = 1;
    *(float *)(param_2 + 0x214) = ABS(param_1);
  }
  return;
}


