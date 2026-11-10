/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085500c; name: FUN_0085500c
 */


int FUN_0085500c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar3 = -uVar1;
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x70) + 0x20) + 0x38);
  if (uVar2 < uVar1) {
    uVar3 = ~uVar1;
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  return uVar3 + uVar2;
}


