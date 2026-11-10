/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8ec8; name: FUN_007e8ec8
 */


void FUN_007e8ec8(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_007e9010(param_1 + 0x170,*(int *)(param_1 + 0x184) + param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_007e8fec(param_1 + 0x170,*(int *)(param_1 + 0x184) + param_2);
  return;
}


