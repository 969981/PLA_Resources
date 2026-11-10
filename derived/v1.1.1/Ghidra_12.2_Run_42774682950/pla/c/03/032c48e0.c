/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c48e0; name: FUN_032c48e0
 */


void FUN_032c48e0(char *param_1,undefined8 param_2,char *param_3,uint param_4)

{
  if ((int)param_4 < 1) {
    return;
  }
  strncpy(param_1,param_3,(ulong)param_4);
  return;
}


