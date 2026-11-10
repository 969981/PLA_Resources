/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cce54; name: FUN_010cce54
 */


void FUN_010cce54(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    plVar1 = (long *)(param_1 + 8);
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar2 != lVar3) {
      do {
        FUN_010d099c(lVar2,*(undefined8 *)(param_1 + 0x40));
        lVar2 = lVar2 + 0x30;
      } while (lVar3 != lVar2);
      lVar2 = *plVar1;
    }
    *(long *)(param_1 + 0x10) = lVar2;
    FUN_010d09fc(plVar1);
  }
  else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return;
}


