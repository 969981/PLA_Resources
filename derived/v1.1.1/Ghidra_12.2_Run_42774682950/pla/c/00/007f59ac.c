/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f59ac; name: FUN_007f59ac
 */


void FUN_007f59ac(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x280) != param_2) {
    *(int *)(param_1 + 0x280) = param_2;
  }
  return;
}


