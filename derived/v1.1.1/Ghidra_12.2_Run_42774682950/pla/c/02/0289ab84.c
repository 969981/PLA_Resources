/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289ab84; name: FUN_0289ab84
 */


undefined8 FUN_0289ab84(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x3e1) = 1;
  if (*(long *)(param_1 + 0x170) != 0) {
    if (((*PTR_DAT_0437b578 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b578), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04382970,PTR_DAT_0437b580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b578);
    }
    lVar3 = *(long *)PTR_DAT_0437b580;
    *(long *)PTR_DAT_0437b588 = lVar3;
    pMVar1 = (MutexType *)(*(long *)(lVar3 + 0x50) + 0x178);
    nn::os::LockMutex(pMVar1);
    lVar3 = *(long *)(param_1 + 0x170);
    if (*(char *)(lVar3 + 0xf8) == '\0') {
      *(undefined1 *)(lVar3 + 0xf8) = 1;
      if (*(long *)(lVar3 + 0x100) != 0) {
        FUN_0327f20c();
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return 1;
}


