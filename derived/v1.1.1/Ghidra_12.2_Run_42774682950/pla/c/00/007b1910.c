/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b1910; name: FUN_007b1910
 */


long FUN_007b1910(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(long *)(param_3 + 0x10);
  }
  uVar1 = FUN_007b1910();
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  return param_3;
}


