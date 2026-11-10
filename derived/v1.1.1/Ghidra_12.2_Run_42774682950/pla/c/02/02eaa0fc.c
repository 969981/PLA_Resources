/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa0fc; name: FUN_02eaa0fc
 */


undefined8 FUN_02eaa0fc(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if ((*(int *)(param_1 + 0xa8) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 == 0)) {
    if (*(int *)(param_1 + 0x48) != 1) {
      FUN_02ea99e8(param_1,param_2,param_3);
    }
    FUN_02e83050(DAT_0440a128,*(undefined4 *)(param_1 + 0x6c));
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (plVar3 = (long *)FUN_02e7d2ec(DAT_0440a120,*(int *)(param_1 + 0x78),0),
       plVar3 != (long *)0x0)) {
      FUN_02ed517c(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((*(int *)(param_1 + 0x90) != 0) &&
       (plVar3 = (long *)FUN_02e7d2ec(DAT_0440a120,*(int *)(param_1 + 0x90),0),
       plVar3 != (long *)0x0)) {
      FUN_02ed517c(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    iVar1 = *(int *)(DAT_0440a128 + 0x78);
    iVar2 = *(int *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return 1;
}


