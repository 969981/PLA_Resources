/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00230538; name: FUN_00230538
 */


void FUN_00230538(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  *plVar1 = *param_1;
  *(long **)(lVar2 + 8) = param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = lVar2;
  return;
}


