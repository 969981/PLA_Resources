/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d570ec; name: FUN_00d570ec
 */


undefined8 FUN_00d570ec(long *param_1,undefined8 param_2,long param_3)

{
  if (*(int *)(param_3 + 4) == 0) {
    FUN_00d5712c(param_1,param_2,param_3);
    return 0;
  }
  (**(code **)(*param_1 + 0x128))();
  return 1;
}


