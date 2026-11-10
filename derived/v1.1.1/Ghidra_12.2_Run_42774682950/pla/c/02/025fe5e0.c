/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025fe5e0; name: FUN_025fe5e0
 */


ulong FUN_025fe5e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x1f8);
  if ((uVar1 & 0xff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((*(ulong *)(param_1 + 0x1f0) & 1L << (uVar1 >> 0x20 & 0x3f)) != 0);
  }
  return uVar2 | uVar1 & 0xffffffff00000000;
}


