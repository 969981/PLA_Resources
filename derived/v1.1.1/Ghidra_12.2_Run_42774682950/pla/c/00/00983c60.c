/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00983c60; name: FUN_00983c60
 */


undefined8 FUN_00983c60(long param_1)

{
  long lVar1;
  long local_28;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8);
    do {
      FUN_00983cb8(&local_28,param_1 + 0x88,lVar1);
      lVar1 = local_28;
    } while (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0) * 0x20 != local_28);
  }
  return 1;
}


