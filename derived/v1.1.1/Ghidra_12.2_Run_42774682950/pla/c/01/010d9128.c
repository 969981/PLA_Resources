/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d9128; name: FUN_010d9128
 */


void FUN_010d9128(long param_1,uint param_2)

{
  if (0x98967e < param_2) {
    param_2 = 9999999;
  }
  *(uint *)(param_1 + 0x74) = param_2;
  return;
}


