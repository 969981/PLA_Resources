/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935ef0; name: FUN_00935ef0
 */


void FUN_00935ef0(long param_1)

{
  if (*(uint *)(param_1 + 0x84) < *(uint *)(param_1 + 0x80)) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) + 1;
  }
  return;
}


