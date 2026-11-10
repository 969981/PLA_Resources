/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01194578; name: FUN_01194578
 */


void FUN_01194578(long param_1)

{
  if (*(int *)(param_1 + 0x1d4) == 1) {
    FUN_011a0c80(*(undefined8 *)(param_1 + 0x1a8));
    FUN_011953c8(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x1d4) == 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 1;
  }
  return;
}


