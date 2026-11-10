/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289c95c; name: FUN_0289c95c
 */


void FUN_0289c95c(long param_1,undefined4 param_2)

{
  if ((*(long *)(param_1 + 0x70) == 0) || (*(int *)(param_1 + 0x68) == 1)) {
    *(undefined4 *)(param_1 + 0x8c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x3f4) = param_2;
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  return;
}


