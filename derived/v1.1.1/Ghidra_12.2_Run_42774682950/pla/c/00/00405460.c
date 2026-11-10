/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405460; name: FUN_00405460
 */


ulong FUN_00405460(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((uVar1 < 0x80) && ((long)(int)uVar1 - 0x41U < 0x1a)) {
    param_1 = (ulong)(uVar1 ^ 0x20);
  }
  return param_1;
}


