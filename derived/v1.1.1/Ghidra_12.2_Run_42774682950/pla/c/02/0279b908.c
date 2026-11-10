/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279b908; name: FUN_0279b908
 */


void FUN_0279b908(long param_1)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0x70) == 0) {
    plVar1 = *(long **)(param_1 + 0x128);
    *(undefined1 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x70) = 3;
    FUN_0279a83c(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


