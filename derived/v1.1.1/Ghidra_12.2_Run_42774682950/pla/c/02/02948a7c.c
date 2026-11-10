/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02948a7c; name: FUN_02948a7c
 */


bool FUN_02948a7c(long param_1,char param_2)

{
  return param_2 == '\0' || **(int **)(param_1 + 0x58) != 0;
}


