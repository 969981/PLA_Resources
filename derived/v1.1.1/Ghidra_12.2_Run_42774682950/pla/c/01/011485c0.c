/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011485c0; name: FUN_011485c0
 */


uint FUN_011485c0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  if ((*(long *)(param_1 + 0x160) == 0) || (iVar1 = FUN_0114fa58(), iVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0114fb20(*(undefined8 *)(param_1 + 0x160));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  return uVar2 & 1;
}


