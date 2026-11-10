/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec708c; name: FUN_02ec708c
 */


void FUN_02ec708c(long *param_1,int param_2,undefined8 param_3)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    if (*(int *)(param_1[1] + 0x7c) == param_2) {
      FUN_02ec6948(param_3);
    }
  }
  return;
}


