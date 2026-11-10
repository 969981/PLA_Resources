/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea2088; name: FUN_02ea2088
 */


int * FUN_02ea2088(long *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  param_1 = (long *)*param_1;
  while( true ) {
    if (param_1 == (long *)0x0) {
      piVar1 = (int *)FUN_02ea5054();
      piVar2 = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar2 = piVar1 + 1;
        *piVar1 = param_2;
      }
      return piVar2;
    }
    if (*(int *)(param_1 + 1) == param_2) break;
    param_1 = (long *)*param_1;
  }
  return (int *)((long)param_1 + 0xc);
}


