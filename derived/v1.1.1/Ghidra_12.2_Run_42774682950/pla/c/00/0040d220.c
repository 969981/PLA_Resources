/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d220; name: FUN_0040d220
 */


bool FUN_0040d220(undefined8 *param_1)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(int *)*param_1 == 1)) {
    return *(int *)(param_1 + 2) == 0;
  }
  return false;
}


