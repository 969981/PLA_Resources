/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebc314; name: FUN_02ebc314
 */


bool FUN_02ebc314(char *param_1,char *param_2)

{
  if ((*(long *)(param_1 + 0x10) != 0 && *(long *)(param_2 + 0x10) == 0) ||
     ((param_1[8] != -1 && (param_2[8] == -1)))) {
    return true;
  }
  if (*param_1 == -1) {
    return false;
  }
  return *param_2 == -1;
}


