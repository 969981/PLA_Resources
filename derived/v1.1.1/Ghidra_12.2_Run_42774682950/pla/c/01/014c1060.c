/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c1060; name: FUN_014c1060
 */


undefined8 FUN_014c1060(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d7380c(param_1,0);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00d7380c(param_1,1), (uVar1 & 1) == 0)) {
    return 1;
  }
  return 0;
}


