/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291a870; name: FUN_0291a870
 */


void FUN_0291a870(long param_1)

{
  long *plVar1;
  long local_50;
  char *pcStack_48;
  long local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  if (*(char *)(param_1 + 0x4a0) != '\0') {
    plVar1 = *(long **)(param_1 + 0x438);
    if ((plVar1 != (long *)0x0) && (*(char *)plVar1[0xc] != '\0')) {
      local_50 = plVar1[0xb];
      local_40 = plVar1[0xd];
      pcStack_48 = (char *)plVar1[0xc];
      (**(code **)(*plVar1 + 0x18))(plVar1);
      local_38 = plVar1;
      FUN_0290b66c(param_1,&local_50,0);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
    *(undefined1 *)(param_1 + 0x4a2) = 1;
    *(undefined1 *)(param_1 + 0x4a0) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  return;
}


