/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112e818; name: FUN_0112e818
 */


bool FUN_0112e818(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if (4 < param_2 - 1) {
    uVar1 = 1;
  }
  return (uVar1 & *(uint *)(param_1 + 0x6c)) != 0;
}


