/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013520e8; name: FUN_013520e8
 */


void FUN_013520e8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0xb0) == *(long *)(param_1 + 0xb8)) {
    FUN_0135a560(param_1 + 0xa8,param_2);
    return;
  }
  FUN_00e8dc78(param_1 + 0xc0);
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 8;
  return;
}


