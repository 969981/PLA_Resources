/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008405f0; name: FUN_008405f0
 */


bool FUN_008405f0(long param_1)

{
  if (*(short *)(param_1 + 0x5e8) == -1) {
    return false;
  }
  return (uint)*(byte *)(param_1 + 0x5eb) ==
         (~(-1 << (ulong)(*(byte *)(param_1 + 0x5ea) & 0x1f)) & 0xffU);
}


