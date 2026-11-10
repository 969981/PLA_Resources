/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114dae4; name: FUN_0114dae4
 */


void FUN_0114dae4(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_0114dea0(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x80;
    return;
  }
  FUN_0114ddc8(param_1);
  return;
}


