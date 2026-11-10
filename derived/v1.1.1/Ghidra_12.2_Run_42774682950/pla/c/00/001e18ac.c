/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e18ac; name: FUN_001e18ac
 */


void FUN_001e18ac(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_001e0d90(param_2);
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001f43b0(param_1,3,2);
  }
  FUN_001e0d90(param_2);
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  FUN_001f43f8(param_1,3);
  return;
}


