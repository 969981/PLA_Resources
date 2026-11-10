/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112194c; name: FUN_0112194c
 */


bool FUN_0112194c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x800) {
    return (1 << (ulong)(uVar1 & 7) & (uint)*(byte *)(param_1 + (ulong)(uVar1 >> 3) + 0x7bd8)) != 0;
  }
  return false;
}


