/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5af0; name: FUN_004c5af0
 */


ulong FUN_004c5af0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (((*(long *)(param_1 + 0x508) == 0) ||
      (uVar1 = *(byte *)(*(long *)(param_1 + 0x508) + 0x280) - 1, 3 < uVar1)) ||
     (uVar2 = (ulong)(uint)(0x200 << (ulong)(uVar1 & 0x1f)), *(ulong *)(param_1 + 0x5f0) <= uVar2))
  {
    uVar1 = (uint)*(ulong *)(param_1 + 0x5f0);
    if (*(ulong *)(param_1 + 0x5f8) < *(ulong *)(param_1 + 0x5f0)) {
      uVar1 = (uint)*(ulong *)(param_1 + 0x5f8);
    }
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}


