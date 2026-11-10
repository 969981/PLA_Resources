/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02622b68; name: FUN_02622b68
 */


ulong FUN_02622b68(byte *param_1,ulong param_2,long param_3)

{
  ulong local_10;
  byte *local_8;
  
  local_10 = param_2;
  for (local_8 = param_1; *local_8 != 0; local_8 = local_8 + 1) {
    local_10 = (local_10 ^ *local_8) * param_3;
  }
  return local_10;
}


