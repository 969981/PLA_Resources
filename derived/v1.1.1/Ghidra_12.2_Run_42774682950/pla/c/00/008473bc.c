/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008473bc; name: FUN_008473bc
 */


void FUN_008473bc(long param_1,short param_2)

{
  if (*(short *)(param_1 + 0x48) != param_2) {
    *(short *)(param_1 + 0x48) = param_2;
  }
  return;
}


