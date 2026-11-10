/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb1b60; name: FUN_02eb1b60
 */


undefined8 * FUN_02eb1b60(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_042a9688;
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      FUN_02f053a0(param_1);
      FUN_02f047d4(param_1,0);
      plVar1 = (long *)param_1[2];
    }
    FUN_02eb1bc0(plVar1);
    param_1[2] = 0;
  }
  return param_1;
}


