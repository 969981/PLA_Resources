/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314492c; name: FUN_0314492c
 */


void FUN_0314492c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x2f0))(param_2,param_3);
  if (*plVar1 == -1 || plVar1[2] == -1) {
    return;
  }
  FUN_03145458(param_1,param_2,*plVar1,plVar1[2],1);
  return;
}


