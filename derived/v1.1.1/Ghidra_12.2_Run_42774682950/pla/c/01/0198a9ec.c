/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0198a9ec; name: FUN_0198a9ec
 */


void FUN_0198a9ec(long param_1,long param_2)

{
  long *plVar1;
  undefined8 local_18;
  
  FUN_00947cf8(&local_18,*(undefined8 *)(param_2 + 8));
  plVar1 = *(long **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x2e0) = local_18;
  return;
}


