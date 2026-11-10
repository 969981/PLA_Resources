/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e2008; name: FUN_032e2008
 */


uint * FUN_032e2008(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1U & *param_1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return param_1 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 2 + 4;
}


