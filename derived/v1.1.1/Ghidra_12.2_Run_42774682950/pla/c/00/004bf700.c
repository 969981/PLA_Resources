/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bf700; name: FUN_004bf700
 */


int * FUN_004bf700(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)(param_1 + 8) + 0x90))(param_2);
  if (((piVar1 == (int *)0x0) || (param_3 != 0)) || (*piVar1 != 0)) {
    return piVar1;
  }
  return (int *)0x0;
}


