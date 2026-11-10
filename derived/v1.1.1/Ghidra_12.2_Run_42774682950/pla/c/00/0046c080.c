/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c080; name: FUN_0046c080
 */


void FUN_0046c080(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  FUN_0046bce0();
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}


