/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0644; name: FUN_007f0644
 */


long FUN_007f0644(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 0x5a4) {
    lVar1 = param_1 + (ulong)(param_2 + 0x1c) + 0x30;
  }
  return lVar1;
}


