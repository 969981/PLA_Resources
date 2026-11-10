/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257a150; name: FUN_0257a150
 */


ulong FUN_0257a150(long param_1)

{
  if (*(long *)(param_1 + 0x630) == *(long *)(param_1 + 0x638)) {
    return 0;
  }
  return (ulong)*(uint *)(*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8) <<
         0x20 | 1;
}


