/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015ccb0; name: FUN_0015ccb0
 */


void FUN_0015ccb0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  param_2[1] = lVar1 + -1;
  if ((lVar1 + -1 == 0) && ((long *)*param_2 == param_2 + 2)) {
    FUN_00161510(param_1,param_2,0x20,0);
    return;
  }
  return;
}


