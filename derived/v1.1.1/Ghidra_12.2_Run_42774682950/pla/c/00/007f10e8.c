/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f10e8; name: FUN_007f10e8
 */


ulong FUN_007f10e8(long param_1)

{
  ulong uVar1;
  ulong local_8;
  
  memcpy(&local_8,(void *)(param_1 + 0x10),8);
  uVar1 = (local_8 & 0xff00ff00ff00ff00) >> 8 | (local_8 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}


