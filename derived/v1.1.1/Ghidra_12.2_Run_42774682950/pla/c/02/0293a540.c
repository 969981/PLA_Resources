/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a540; name: FUN_0293a540
 */


bool FUN_0293a540(long param_1,uint param_2)

{
  return *(short *)(*(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)(param_2 & 0xff) * 8
                             + 0x120) + 0x496) != 0;
}


