/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0f48; name: FUN_007f0f48
 */


undefined8 FUN_007f0f48(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18)) &&
     (iVar1 = memcmp((void *)(param_1 + 8),(void *)(param_2 + 8),0x10), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


