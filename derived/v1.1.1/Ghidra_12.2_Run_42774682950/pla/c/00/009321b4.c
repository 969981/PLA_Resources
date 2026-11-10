/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009321b4; name: FUN_009321b4
 */


undefined4 FUN_009321b4(long param_1,uint param_2)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x70) + (ulong)(param_2 & 0xff) * 0x1c + 0x300);
}


