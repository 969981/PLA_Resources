/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa2fc; name: FUN_02eaa2fc
 */


void FUN_02eaa2fc(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xa8) == 0) ||
     (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 != 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x48) != 1) {
    FUN_02ea99e8(param_1,0,4);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  iVar1 = *(int *)(DAT_0440a128 + 0x78);
  iVar2 = *(int *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


