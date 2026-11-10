/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7df0; name: FUN_02ea7df0
 */


void FUN_02ea7df0(long *param_1)

{
  long *plVar1;
  
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((long *)param_1[3] == (long *)0x0) {
    plVar1 = (long *)*param_1;
  }
  else {
    (**(code **)(*(long *)param_1[3] + 0x18))();
    param_1[3] = 0;
    plVar1 = (long *)*param_1;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *param_1 = 0;
  }
  return;
}


