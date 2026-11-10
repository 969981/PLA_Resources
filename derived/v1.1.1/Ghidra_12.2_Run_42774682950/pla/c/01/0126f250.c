/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126f250; name: FUN_0126f250
 */


uint FUN_0126f250(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_01264334(param_1 + 0x628);
  uVar2 = FUN_012620b0(param_1 + 0x718);
  uVar3 = FUN_012614f8(param_1 + 0x808);
  return uVar1 & uVar2 & uVar3 & 1;
}


