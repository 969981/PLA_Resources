/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038e3e8; name: FUN_0038e3e8
 */


undefined8 FUN_0038e3e8(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 5) == -1) {
    return 0;
  }
  uVar1 = FUN_003425d4(param_1[7],*param_1,param_2);
  return uVar1;
}


