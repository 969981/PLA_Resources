/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8aec; name: FUN_007e8aec
 */


undefined8 FUN_007e8aec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_007f01a4(param_2,param_1 + 0x54);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_007ee660(param_1 + 0x54,param_2);
  return 1;
}


