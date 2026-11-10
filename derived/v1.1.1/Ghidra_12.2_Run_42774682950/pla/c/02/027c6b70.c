/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c6b70; name: FUN_027c6b70
 */


ulong FUN_027c6b70(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1a0) == 0) {
    uVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x230);
  }
  else {
    uVar1 = (ulong)*(byte *)(param_1 + 0x1a8);
    lVar2 = *(long *)(param_1 + 0x230);
  }
  if (lVar2 != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 0x238);
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 0x2c8);
  }
  if (*(long *)(param_1 + 0x350) != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 0x358);
  }
  if (*(long *)(param_1 + 0x3e0) != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 1000);
  }
  if (*(long *)(param_1 + 0x470) != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 0x478);
  }
  if (*(long *)(param_1 + 0x500) != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 0x508);
  }
  if (*(long *)(param_1 + 0x590) != 0) {
    uVar1 = uVar1 + *(byte *)(param_1 + 0x598);
  }
  return uVar1;
}


