/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111d434; name: FUN_0111d434
 */


long FUN_0111d434(long param_1,uint param_2,uint param_3)

{
  if ((param_2 < 6) && (param_3 < 0x1e)) {
    return param_1 + (ulong)(param_3 + param_2 * 0x1e) * 4 + 0x68;
  }
  return 0;
}


