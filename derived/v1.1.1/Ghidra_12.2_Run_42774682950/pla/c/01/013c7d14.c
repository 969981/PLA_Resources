/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c7d14; name: FUN_013c7d14
 */


void FUN_013c7d14(long param_1)

{
  if (*(int *)(param_1 + 0x5b8) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x5b8) = 1;
  FUN_00d42690(param_1,1,1);
  FUN_013c7d70(param_1,*(undefined1 *)(param_1 + 0x705));
  FUN_00d7331c(param_1,0);
  return;
}


