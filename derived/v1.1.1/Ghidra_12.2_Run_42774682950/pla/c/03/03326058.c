/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326058; name: FUN_03326058
 */


bool FUN_03326058(int *param_1,int *param_2)

{
  if (*(long *)(param_1 + 2) == *(long *)(param_2 + 2)) {
    return *param_1 != *param_2;
  }
  return true;
}


