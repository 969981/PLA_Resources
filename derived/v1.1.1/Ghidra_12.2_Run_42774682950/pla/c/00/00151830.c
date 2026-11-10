/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151830; name: FUN_00151830
 */


bool FUN_00151830(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *plVar1 = param_1;
  *(undefined4 *)(plVar1 + 1) = 0x48;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return *(long *)(*(long *)(param_1 + 0x18) + 200) == param_1;
}


