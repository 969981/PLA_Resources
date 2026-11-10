/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01112750; name: FUN_01112750
 */


void FUN_01112750(long param_1,ushort param_2,byte param_3)

{
  if (param_2 < 100) {
    *(byte *)(param_1 + (ulong)param_2 + 0x68) = param_3 & 1;
  }
  return;
}


