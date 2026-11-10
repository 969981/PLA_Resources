/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdbce0; name: FUN_02bdbce0
 */


undefined1  [16] FUN_02bdbce0(long param_1)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined1 auVar6 [16];
  
  if (*(int *)(param_1 + 0x7c) == 2) {
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar5 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar5;
    pMVar1 = (MutexType *)(*(long *)(lVar5 + 0x230) + 0x128);
    nn::os::LockMutex(pMVar1);
    pauVar4 = (undefined1 (*) [16])
              (**(code **)(**(long **)(param_1 + 0xd0) + 0x1d0))
                        (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8));
    uVar2 = *(undefined8 *)*pauVar4;
    auVar6 = NEON_ext(*pauVar4,*pauVar4,8,1);
    nn::os::UnlockMutex(pMVar1);
    auVar6._8_4_ = auVar6._0_4_;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = 0;
  }
  else {
    auVar6 = ZEXT816(0);
  }
  return auVar6;
}


