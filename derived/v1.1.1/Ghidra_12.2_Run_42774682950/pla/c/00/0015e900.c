/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015e900; name: FUN_0015e900
 */


void FUN_0015e900(long param_1)

{
  if ((*(long *)(param_1 + 0x1a0) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1a0) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1a8) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1a8) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1b0) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1b0) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1b8) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1b8) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1c0) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1c0) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1c8) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1c8) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1d0) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1d0) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1d8) != 0) && ((*(byte *)(*(long *)(param_1 + 0x1d8) + 9) & 3) != 0)) {
    FUN_0015cac0(param_1);
  }
  if ((*(long *)(param_1 + 0x1e0) == 0) || ((*(byte *)(*(long *)(param_1 + 0x1e0) + 9) & 3) == 0)) {
    return;
  }
  FUN_0015cac0(param_1);
  return;
}


