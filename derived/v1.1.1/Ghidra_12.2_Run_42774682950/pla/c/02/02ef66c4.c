/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef66c4; name: FUN_02ef66c4
 */


undefined8 FUN_02ef66c4(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) != 0)) {
    return 1;
  }
  uVar1 = FUN_02e96a0c(DAT_0440a148,param_1);
  return uVar1;
}


