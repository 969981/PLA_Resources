/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024e68; name: FUN_03024e68
 */


void FUN_03024e68(ushort *param_1)

{
  *param_1 = *param_1 | 0x400;
  *(byte *)(param_1 + 3) = (byte)param_1[3] & 0x1f | 0x60;
  return;
}


