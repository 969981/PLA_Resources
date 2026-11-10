/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b294; name: FUN_0082b294
 */


void FUN_0082b294(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x68) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x68) = param_2;
  FUN_00835048(*(undefined8 *)(param_1 + 0x10));
  return;
}


