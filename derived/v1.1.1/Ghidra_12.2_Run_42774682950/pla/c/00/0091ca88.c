/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091ca88; name: FUN_0091ca88
 */


void FUN_0091ca88(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_0091d3e0(param_1,param_2);
    return;
  }
  FUN_0091d47c(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 3;
  return;
}


