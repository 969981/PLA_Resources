/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d67370; name: FUN_00d67370
 */


uint FUN_00d67370(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x5bc);
  if (*(uint *)(param_1 + 0x630) <= *(uint *)(param_1 + 0x5bc)) {
    uVar1 = *(uint *)(param_1 + 0x630);
  }
  return uVar1;
}


