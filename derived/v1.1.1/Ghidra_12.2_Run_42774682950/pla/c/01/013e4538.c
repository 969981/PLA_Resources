/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e4538; name: FUN_013e4538
 */


uint FUN_013e4538(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0284cd4c(*(undefined8 *)(param_1 + 0x730));
  uVar2 = FUN_013f5e04(*(undefined8 *)(param_1 + 0x758));
  return uVar1 & uVar2 & 1;
}


