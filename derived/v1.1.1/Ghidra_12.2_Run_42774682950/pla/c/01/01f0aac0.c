/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0aac0; name: FUN_01f0aac0
 */


void FUN_01f0aac0(long param_1)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    FUN_02b21b70(DAT_043ef5b0);
    if (*(int *)(param_1 + 0x6c) == 0) {
      FUN_01f0a400(param_1);
      return;
    }
  }
  return;
}


