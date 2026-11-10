/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b9174; name: FUN_014b9174
 */


undefined8 FUN_014b9174(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0xf8) == 0) || (uVar1 = FUN_00d37ad4(), (uVar1 & 1) != 0)) {
    return 1;
  }
  return 0;
}


