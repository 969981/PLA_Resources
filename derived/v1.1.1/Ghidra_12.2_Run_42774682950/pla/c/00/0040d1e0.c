/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d1e0; name: FUN_0040d1e0
 */


bool FUN_0040d1e0(undefined8 *param_1,int param_2)

{
  if ((*(int *)(param_1 + 1) == 1) && (*(int *)*param_1 == param_2)) {
    return true;
  }
  return param_2 == 0 && *(int *)(param_1 + 1) == 0;
}


