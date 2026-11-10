/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdab50; name: FUN_02bdab50
 */


undefined8 FUN_02bdab50(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar4 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar4;
  pMVar1 = (MutexType *)(*(long *)(lVar4 + 0x230) + 0x128);
  nn::os::LockMutex(pMVar1);
  uVar3 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x118))
                    (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8));
  nn::os::UnlockMutex(pMVar1);
  return uVar3;
}


