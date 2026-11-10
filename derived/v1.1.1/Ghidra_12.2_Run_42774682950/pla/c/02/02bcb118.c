/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcb118; name: FUN_02bcb118
 */


bool FUN_02bcb118(undefined8 *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((0.0 < (float)param_1[2] - (float)*param_1) &&
     (0.0 < (float)((ulong)param_1[2] >> 0x20) - (float)((ulong)*param_1 >> 0x20))) {
    bVar1 = 0.0 < (float)param_1[3] - (float)param_1[1];
  }
  return bVar1;
}


