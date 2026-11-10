/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b054c; name: FUN_014b054c
 */


uint FUN_014b054c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_014b0594();
  uVar1 = FUN_014b2ae0(lVar3 + 0x90);
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00d37ad4();
  }
  return uVar1 & uVar2 & 1;
}


