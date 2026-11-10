/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001530a0; name: FUN_001530a0
 */


undefined8 FUN_001530a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x46) {
    uVar1 = FUN_0015bb70(param_1,*(undefined8 *)
                                  (*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18),param_2,
                         param_3,param_4);
    return uVar1;
  }
  return 1;
}


