/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01143280; name: FUN_01143280
 */


bool FUN_01143280(long param_1,uint param_2)

{
  if (param_2 < 0x100) {
    return (*(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 0x88) & 1 << (ulong)(param_2 & 0x1f)) !=
           0;
  }
  return false;
}


