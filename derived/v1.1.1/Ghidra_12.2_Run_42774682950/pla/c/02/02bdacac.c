/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdacac; name: FUN_02bdacac
 */


void FUN_02bdacac(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar3 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar3;
  pMVar1 = (MutexType *)(*(long *)(lVar3 + 0x230) + 0x128);
  nn::os::LockMutex(pMVar1);
  (**(code **)(**(long **)(param_1 + 0xd0) + 0xd8))(*(long **)(param_1 + 0xd0),param_1 + 0xd8,1,0);
  nn::os::UnlockMutex(pMVar1);
  return;
}


