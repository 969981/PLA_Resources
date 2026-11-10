/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001738a0; name: FUN_001738a0
 */


long FUN_001738a0(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_001723b0(param_1,param_3);
  if (*(int *)(lVar1 + 8) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | (byte)(1 << (ulong)(param_2 & 0x1f));
    return 0;
  }
  return lVar1;
}


