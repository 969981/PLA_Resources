/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e1190; name: FUN_001e1190
 */


undefined8 FUN_001e1190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    uVar1 = FUN_001e3530(2,*(long *)(param_1 + 0x20) + 4,param_2,param_3);
    return uVar1;
  }
  return 0;
}


