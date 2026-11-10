/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083fd04; name: FUN_0083fd04
 */


undefined8 FUN_0083fd04(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_007f0f48(param_1 + 0x18,param_2 + 0x18);
  if (((((uVar1 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_2 + 8))) ||
      (*(short *)(param_1 + 0x10) != *(short *)(param_2 + 0x10))) ||
     (*(char *)(param_1 + 0x38) != *(char *)(param_2 + 0x38))) {
    return 1;
  }
  return 0;
}


