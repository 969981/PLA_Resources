/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404d10; name: FUN_00404d10
 */


void FUN_00404d10(long param_1)

{
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) | *(uint *)(*(long *)(param_1 + 0x40) + 0x28) & 0xf;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x2c);
  return;
}


