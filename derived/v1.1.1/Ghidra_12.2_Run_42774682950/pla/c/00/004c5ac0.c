/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5ac0; name: FUN_004c5ac0
 */


int FUN_004c5ac0(long param_1)

{
  uint uVar1;
  
  if ((*(long *)(param_1 + 0x508) == 0) ||
     (uVar1 = *(byte *)(*(long *)(param_1 + 0x508) + 0x280) - 1, 3 < uVar1)) {
    return *(int *)(param_1 + 0x5f8);
  }
  return 0x200 << (ulong)(uVar1 & 0x1f);
}


