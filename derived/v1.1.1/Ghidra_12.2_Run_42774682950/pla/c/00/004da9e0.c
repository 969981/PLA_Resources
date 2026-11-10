/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004da9e0; name: FUN_004da9e0
 */


undefined8 FUN_004da9e0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x5ce) >> 1 & 1) == 0) {
    uVar1 = FUN_004e2fc0(param_1,0xf,0,0,0);
    return uVar1;
  }
  return 0;
}


