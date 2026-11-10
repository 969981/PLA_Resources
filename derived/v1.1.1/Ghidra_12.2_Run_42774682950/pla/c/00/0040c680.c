/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c680; name: FUN_0040c680
 */


undefined4 FUN_0040c680(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 1) == 1) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}


