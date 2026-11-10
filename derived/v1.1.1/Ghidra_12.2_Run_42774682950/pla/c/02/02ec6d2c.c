/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6d2c; name: FUN_02ec6d2c
 */


void FUN_02ec6d2c(long *param_1)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    *(int *)(param_1[1] + 0x8c) = *(int *)(param_1[1] + 0x8c) + -1;
  }
  return;
}


