/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282dbc4; name: FUN_0282dbc4
 */


int FUN_0282dbc4(long param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return *param_2 + *(int *)(param_1 + 0x20) * param_2[1];
  }
  return param_2[1] + *(int *)(param_1 + 0x24) * *param_2;
}


