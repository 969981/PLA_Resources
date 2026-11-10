/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279a7c4; name: FUN_0279a7c4
 */


void FUN_0279a7c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar2 = *param_2;
    *(undefined1 *)(param_1 + 0x110) = 1;
    plVar1 = *(long **)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x118) = uVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x70) = 1;
    FUN_0279a83c(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


