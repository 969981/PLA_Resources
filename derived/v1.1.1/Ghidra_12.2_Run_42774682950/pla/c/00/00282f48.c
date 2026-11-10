/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00282f48; name: FUN_00282f48
 */


void FUN_00282f48(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0xc) == '\0') {
    FUN_00271770("EmitterSet has been already deleted.\n");
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
  iVar1 = *(int *)(param_1 + 0x8b8);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x8b0) + lVar2 * 8) == param_2) goto LAB_00282fb4;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  *(long *)(*(long *)(param_1 + 0x8b0) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_00282fb4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
  return;
}


