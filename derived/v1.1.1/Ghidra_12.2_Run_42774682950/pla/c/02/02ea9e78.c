/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9e78; name: FUN_02ea9e78
 */


void FUN_02ea9e78(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_02e82be8(DAT_0440a128,*(undefined4 *)(param_1 + 0x6c));
  if ((param_2 == 0) && (*(int *)(param_1 + 0x90) != 0)) {
    plVar1 = (long *)FUN_02e7d2ec(DAT_0440a120,*(int *)(param_1 + 0x90),0);
    if (plVar1 != (long *)0x0) {
      FUN_02ed50e8(plVar1,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_3,
                   param_4);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  if ((*(int *)(param_1 + 0x78) == 0) ||
     (plVar1 = (long *)FUN_02e7d2ec(DAT_0440a120,*(int *)(param_1 + 0x78),0), plVar1 == (long *)0x0)
     ) {
    return;
  }
  if (param_2 == 0) {
    FUN_02ed50e8(plVar1,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_3,
                 param_4);
  }
  else {
    (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(param_1 + 0x50),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02ea9f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


