/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ef2c; name: FUN_02e8ef2c
 */


undefined8 FUN_02e8ef2c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_02e97804(param_1 + 0xa8);
  if ((uVar1 & 1) == 0) {
    return 0x34;
  }
  uVar2 = FUN_02e9b2a8(param_1 + 8);
  return uVar2;
}


