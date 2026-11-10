/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d18f0c; name: FUN_00d18f0c
 */


void FUN_00d18f0c(long param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*(long *)(param_1 + 0xd0) + 8) | 1) == 3) {
    FUN_00d18674();
    uVar1 = 5;
  }
  else {
    FUN_00d18bd0();
    uVar1 = 0xf;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}


