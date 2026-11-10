/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f6fc4; name: FUN_007f6fc4
 */


undefined8 FUN_007f6fc4(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x160) != 0) && (uVar1 = FUN_007e5f0c(), (uVar1 & 1) != 0)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x148) == 0) || (uVar1 = FUN_007e5f0c(), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}


