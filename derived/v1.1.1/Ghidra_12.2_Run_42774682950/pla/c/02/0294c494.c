/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294c494; name: FUN_0294c494
 */


ulong FUN_0294c494(long param_1,char param_2)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x30) == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + uVar1 * 8) + 0x7d) == param_2) {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while (*(byte *)(param_1 + 0x30) != uVar1);
  return 0xffffffff;
}


