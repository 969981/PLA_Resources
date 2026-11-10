/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025981c; name: FUN_0025981c
 */


undefined8 FUN_0025981c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return uVar1;
}


