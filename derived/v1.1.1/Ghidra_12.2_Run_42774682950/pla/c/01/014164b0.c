/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014164b0; name: FUN_014164b0
 */


uint FUN_014164b0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((*(long *)(param_1 + 0xf8) == 0) || (uVar2 = FUN_00d37ad4(), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  uVar1 = FUN_01414f8c(param_1 + 0x720);
  return uVar3 & uVar1;
}


