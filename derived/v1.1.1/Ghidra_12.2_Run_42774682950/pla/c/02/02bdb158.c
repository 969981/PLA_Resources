/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdb158; name: FUN_02bdb158
 */


void FUN_02bdb158(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_3;
  *(undefined4 *)(param_1 + 0xb8) = param_4;
  *(undefined4 *)(param_1 + 0xbc) = param_5;
  if (*(int *)(param_1 + 0x7c) != 2) {
    return;
  }
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar3 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar3;
  pMVar1 = (MutexType *)(*(long *)(lVar3 + 0x230) + 0x128);
  nn::os::LockMutex(pMVar1);
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x228))
            (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
             *(uint *)(param_1 + 0xb0) | *(int *)(param_1 + 0xb4) << 0x10 |
             *(int *)(param_1 + 0xb8) << 6 | *(int *)(param_1 + 0xbc) << 0xb,0,0);
  nn::os::UnlockMutex(pMVar1);
  return;
}


