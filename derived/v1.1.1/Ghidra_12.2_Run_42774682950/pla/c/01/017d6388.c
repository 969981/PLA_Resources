/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d6388; name: FUN_017d6388
 */


uint FUN_017d6388(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_02a43a8c();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


