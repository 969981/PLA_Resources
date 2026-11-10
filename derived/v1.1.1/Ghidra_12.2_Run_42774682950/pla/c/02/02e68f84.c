/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e68f84; name: FUN_02e68f84
 */


long * FUN_02e68f84(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x48))();
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)((long)plVar1 + 0x6b) = 1;
    (**(code **)(*plVar1 + 0x40))(plVar1,param_4);
    nn::os::LockMutex((MutexType *)(param_1 + 0x51));
    if (param_1[0x50] == 0) {
      param_1[0x50] = (long)plVar1;
      plVar1[2] = 0;
    }
    else {
      plVar1[2] = param_1[0x50];
      param_1[0x50] = (long)plVar1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x51));
  }
  return plVar1;
}


