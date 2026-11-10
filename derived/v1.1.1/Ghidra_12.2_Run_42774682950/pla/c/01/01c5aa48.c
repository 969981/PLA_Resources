/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5aa48; name: FUN_01c5aa48
 */


undefined8 FUN_01c5aa48(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x298) == 0) {
    FUN_01c5a23c(param_1 + -0x208);
    *(undefined4 *)(param_1 + 0x298) = 1;
  }
  else if (*(int *)(param_1 + 0x298) != 1) {
    return 0;
  }
  uVar1 = FUN_01c5a7f0(param_1 + -0x208);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


