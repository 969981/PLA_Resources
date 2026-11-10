/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012206ac; name: FUN_012206ac
 */


bool FUN_012206ac(long param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + (ulong)param_3 * 4 + 0x169c);
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0x171c);
  }
  return (*puVar1 & 1 << (ulong)(param_4 & 0x1f)) != 0;
}


