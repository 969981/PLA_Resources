/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081eeb0; name: FUN_0081eeb0
 */


void FUN_0081eeb0(undefined4 *param_1,int param_2,long param_3)

{
  if ((0 < param_2) && (param_3 != 0)) {
    *(long *)(param_1 + 2) = param_3;
    *param_1 = 0;
    param_1[1] = param_2;
  }
  return;
}


