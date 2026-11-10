/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cca20; name: FUN_018cca20
 */


bool FUN_018cca20(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(long *)(param_2 + 8) = (long)*(int *)(param_2 + 0x10);
  lVar1 = FUN_018ccb68();
  if (lVar1 == 0) {
    FUN_018ccca8(param_1,param_2);
  }
  return lVar1 == 0;
}


