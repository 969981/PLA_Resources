/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01698a68; name: FUN_01698a68
 */


void FUN_01698a68(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_0169a3f0(param_1,param_2);
    return;
  }
  FUN_0169a4d0(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  return;
}


