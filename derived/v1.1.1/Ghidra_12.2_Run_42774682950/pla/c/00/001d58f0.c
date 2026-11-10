/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d58f0; name: FUN_001d58f0
 */


undefined4 FUN_001d58f0(long param_1)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x80040200;
  }
  uVar1 = FUN_001d5930(*(long *)(param_1 + 0x18) + 0x18);
  return uVar1;
}


