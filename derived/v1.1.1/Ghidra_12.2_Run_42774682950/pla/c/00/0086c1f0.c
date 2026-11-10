/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086c1f0; name: FUN_0086c1f0
 */


uint FUN_0086c1f0(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0xb00) != '\0') || (*(long *)(param_1 + 0xae8) == 0)) {
    return 0;
  }
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return (uVar1 ^ 1) & 1;
}


