/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002113bc; name: FUN_002113bc
 */


void FUN_002113bc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[1] = param_2;
    plVar1 = param_1;
  }
  else {
    *(long *)(lVar2 + 0x88) = param_2;
    plVar1 = param_1 + 1;
  }
  *plVar1 = param_2;
  param_1[2] = param_1[2] + 1;
  return;
}


