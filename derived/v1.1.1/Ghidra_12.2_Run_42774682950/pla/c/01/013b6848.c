/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b6848; name: FUN_013b6848
 */


void FUN_013b6848(undefined1 *param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_2 + 0x188));
  *param_1 = 0;
  if (*(char *)(param_2 + 0x110) != '\0') {
    *(undefined8 *)(param_1 + 8) = 0;
    *param_1 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x188));
  return;
}


