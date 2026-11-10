/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824d14; name: FUN_00824d14
 */


void FUN_00824d14(long param_1)

{
  if ((*(uint *)(param_1 + 0xcc) | 4) == 4) {
    return;
  }
  nn::os::WaitThread(*(ThreadType **)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0xcc) = 4;
  return;
}


