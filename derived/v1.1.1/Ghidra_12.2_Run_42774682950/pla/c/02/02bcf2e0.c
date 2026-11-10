/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf2e0; name: FUN_02bcf2e0
 */


bool FUN_02bcf2e0(long param_1,ulong param_2,long *param_3)

{
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    return false;
  }
  return *param_3 + param_2 < *(long *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x30);
}


