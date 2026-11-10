/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011d880; name: FUN_0011d880
 */


ulong FUN_0011d880(uint param_1)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_1 & 0x1f);
  return (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 0x1f &
         0xfffffffffffffff0;
}


