/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01145784; name: FUN_01145784
 */


void FUN_01145784(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 != 2) {
    FUN_011457e4(param_1);
    nn::os::SleepThread(10000000);
    iVar1 = *(int *)(param_1 + 4);
  }
  return;
}


