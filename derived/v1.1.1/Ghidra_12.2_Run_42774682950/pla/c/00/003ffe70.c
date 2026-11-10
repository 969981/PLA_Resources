/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ffe70; name: FUN_003ffe70
 */


undefined8 FUN_003ffe70(long param_1)

{
  int iVar1;
  
  if ((((*(long *)(param_1 + 0x508) == 0) || ((*(byte *)(param_1 + 0x44) & 1) != 0)) ||
      (iVar1 = FUN_004c9920(param_1), iVar1 != 0)) || (iVar1 = FUN_004c9950(param_1), iVar1 != 0)) {
    return 0;
  }
  FUN_003ffc60(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x508),1);
  return 1;
}


