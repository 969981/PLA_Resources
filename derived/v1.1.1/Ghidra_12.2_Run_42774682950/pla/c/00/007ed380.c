/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ed380; name: FUN_007ed380
 */


void FUN_007ed380(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


