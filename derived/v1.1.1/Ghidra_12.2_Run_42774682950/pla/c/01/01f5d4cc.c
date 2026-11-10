/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5d4cc; name: FUN_01f5d4cc
 */


void FUN_01f5d4cc(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_01f5dbe4(param_1,param_2);
    return;
  }
  FUN_01f5dcc4(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return;
}


