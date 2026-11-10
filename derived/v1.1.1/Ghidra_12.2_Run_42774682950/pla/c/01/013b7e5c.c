/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b7e5c; name: FUN_013b7e5c
 */


void FUN_013b7e5c(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(char *)(param_1 + 0x110) != '\0') {
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
    FUN_013b7ec8(param_1 + 0x120,param_2);
    *(undefined4 *)(param_1 + 0x70) = 2;
    FUN_013b6914(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


