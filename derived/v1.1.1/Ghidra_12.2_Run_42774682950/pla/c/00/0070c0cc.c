/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070c0cc; name: FUN_0070c0cc
 */


undefined4 FUN_0070c0cc(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (((*PTR_DAT_04376510 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04376510), puVar1 = PTR_DAT_04376518, iVar3 != 0)) {
    nn::os::InitializeMutex((MutexType *)PTR_DAT_04376518,false,0);
    FUN_00100250(PTR__Mutex_04373970,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04376510);
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_04376518);
  uVar4 = FUN_0070c750();
                    /* try { // try from 0070c108 to 0070c113 has its CatchHandler @ 0070c188 */
  local_28 = param_1;
  uStack_24 = param_2;
  uVar2 = FUN_00617ab0(&local_28,uVar4,&local_28);
  nn::os::UnlockMutex((MutexType *)PTR_DAT_04376518);
  return uVar2;
}


