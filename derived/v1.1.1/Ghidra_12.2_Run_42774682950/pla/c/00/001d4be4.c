/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d4be4; name: FUN_001d4be4
 */


undefined4 FUN_001d4be4(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x80040200;
  }
  uVar1 = FUN_02fc7c84(*(long *)(param_1 + 0x18) + 0x18,param_2 << 1);
  return uVar1;
}


