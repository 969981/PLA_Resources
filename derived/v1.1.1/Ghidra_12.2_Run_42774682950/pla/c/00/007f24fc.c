/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f24fc; name: FUN_007f24fc
 */


undefined8 FUN_007f24fc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [16];
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  FUN_007e8444(auStack_20,param_1 + 0x30,*(long *)(param_1 + 0x20) + 0x17,
               *(int *)(param_1 + 0x28) + -0x17);
  uVar1 = FUN_007e8408(param_1 + 0x30);
  return uVar1;
}


