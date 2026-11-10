/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6948; name: FUN_02ec6948
 */


void FUN_02ec6948(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_02ec721c();
  if (plVar1 != (long *)0x0) {
    *plVar1 = param_2;
    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
    *(int *)(*plVar1 + 0x84) = *(int *)(*plVar1 + 0x84) + 1;
  }
  return;
}


