/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2c440; name: FUN_02c2c440
 */


void FUN_02c2c440(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x238) != param_2) {
    *(int *)(param_1 + 0x238) = param_2;
  }
  return;
}


