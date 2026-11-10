/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e86ddc; name: FUN_02e86ddc
 */


void FUN_02e86ddc(long param_1,ulong param_2)

{
  *(int *)(param_1 + 0x30) = (int)param_2;
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0xbf | (byte)(param_2 >> 0x1a) & 0x40;
  return;
}


