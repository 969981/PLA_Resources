/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027980b8; name: FUN_027980b8
 */


void FUN_027980b8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_02798078();
  if ((uVar1 & 1) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
    *(undefined1 *)(param_1 + 0x180) = 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  }
  if ((*(long *)(param_1 + 0x170) == 0) || (plVar2 = (long *)FUN_013b36b8(), plVar2 == (long *)0x0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0279810c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))();
  return;
}


