/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e9088; name: FUN_007e9088
 */


long * FUN_007e9088(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 == 0) {
    return (long *)0x0;
  }
  plVar3 = (long *)*param_1;
  lVar1 = *plVar3;
  *(long *)(lVar1 + 8) = plVar3[1];
  *(long *)plVar3[1] = lVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(param_1 + 2) = iVar2 + -1;
  return plVar3;
}


