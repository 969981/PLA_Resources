/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce1788; name: FUN_00ce1788
 */


void FUN_00ce1788(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_00ce1f98(param_1,param_2);
    return;
  }
  FUN_00ce2074(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  return;
}


