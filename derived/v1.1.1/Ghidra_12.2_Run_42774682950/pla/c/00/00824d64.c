/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824d64; name: FUN_00824d64
 */


undefined8 FUN_00824d64(long param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    return 0;
  }
  nn::os::StartThread(*(ThreadType **)(param_1 + 0xd0));
  *(int *)(param_1 + 200) = (int)*(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 1;
    return 1;
  }
  return 1;
}


