/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2d7c; name: FUN_001f2d7c
 */


void FUN_001f2d7c(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = *(uint *)(param_1 + 0xfac) & 0xffffffbf;
    *(undefined8 *)(param_1 + 0xf80) = 0;
  }
  else {
    *(long *)(param_1 + 0xf80) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfac) | 0x40;
  }
  *(uint *)(param_1 + 0xfac) = uVar1;
  return;
}


