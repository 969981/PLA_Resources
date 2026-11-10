/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d2b0; name: FUN_0040d2b0
 */


uint FUN_0040d2b0(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) < 1) {
    return 0;
  }
  return *(uint *)*param_1 & 1;
}


