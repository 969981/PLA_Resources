/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d2c0; name: FUN_0333d2c0
 */


void FUN_0333d2c0(long *param_1,long param_2)

{
  long *plVar1;
  
  if ((*(long *)(param_2 + 0x118) != 0) || (*(long *)(param_2 + 0x120) != 0)) {
    FUN_0333d6b0(param_1,param_2,param_2);
  }
  plVar1 = param_1 + 1;
  if (*plVar1 == 0) {
    param_1[1] = param_2;
  }
  else {
    *(long *)(*plVar1 + 0x120) = param_2;
    *(long *)(param_2 + 0x118) = *plVar1;
    *(undefined8 *)(param_2 + 0x120) = 0;
    param_1 = plVar1;
  }
  *param_1 = param_2;
  return;
}


