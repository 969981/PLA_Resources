/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6902c; name: FUN_02e6902c
 */


uint FUN_02e6902c(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_02e69064(param_1 + 0x278);
  uVar2 = FUN_02e69064(param_1 + 0x280);
  return uVar1 & uVar2 & 1;
}


