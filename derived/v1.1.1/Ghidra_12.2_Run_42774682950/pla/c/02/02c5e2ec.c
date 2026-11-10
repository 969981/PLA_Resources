/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5e2ec; name: FUN_02c5e2ec
 */


ulong FUN_02c5e2ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar1 = FUN_02c5e31c();
    return (ulong)(uVar1 & 0xffff);
  }
  uVar2 = FUN_02c66e84(*(long *)(param_1 + 0x98));
  return uVar2;
}


