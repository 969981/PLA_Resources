/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327d48c; name: FUN_0327d48c
 */


uint FUN_0327d48c(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0327d4d0();
  uVar2 = FUN_0327d5f0(param_1 + 0x40);
  return uVar2 + uVar1 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar1;
}


