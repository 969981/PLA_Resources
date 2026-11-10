/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033901e4; name: FUN_033901e4
 */


undefined8 FUN_033901e4(long param_1)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0xf0) == *(int *)(param_1 + 0x20)) &&
      (*(int *)(param_1 + 0xf4) == *(int *)(param_1 + 0x38))) &&
     (*(int *)(param_1 + 0xf8) == *(int *)(param_1 + 0xe0))) {
    return *(undefined8 *)(param_1 + 0x100);
  }
  uVar1 = FUN_03395b70();
  return uVar1;
}


