/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00802584; name: FUN_00802584
 */


uint FUN_00802584(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return ~uVar1 & 1;
}


