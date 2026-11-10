/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00617940; name: FUN_00617940
 */


undefined1 * FUN_00617940(void)

{
  int iVar1;
  
  if (((DAT_0439f450 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439f450), iVar1 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_0439f458,false,0);
    FUN_00100250(PTR__Mutex_04373970,&DAT_0439f458,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_0439f450);
  }
  nn::os::LockMutex((MutexType *)&DAT_0439f458);
  if (DAT_0439f478 == '\0') {
    snprintf(&DAT_0439f478,0x40,"NPLN/%s (%s; %s)","0.28.0","Horizon","NX");
    DAT_0439f4b7 = 0;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0439f458);
  return &DAT_0439f478;
}


