/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d260; name: FUN_0040d260
 */


bool FUN_0040d260(undefined8 *param_1,int param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(int *)*param_1 == param_2)) {
    if (param_2 == 0) {
      return true;
    }
    return *(int *)(param_1 + 2) == 0;
  }
  if (param_2 == 0) {
    return *(int *)(param_1 + 1) == 0;
  }
  return false;
}


