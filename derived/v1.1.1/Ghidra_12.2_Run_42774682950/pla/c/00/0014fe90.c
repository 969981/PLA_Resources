/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014fe90; name: FUN_0014fe90
 */


undefined * FUN_0014fe90(long param_1)

{
  if (param_1 == 0) {
    return &DAT_039c5a20;
  }
  return *(undefined **)(*(long *)(param_1 + 0x18) + 0xd0);
}


