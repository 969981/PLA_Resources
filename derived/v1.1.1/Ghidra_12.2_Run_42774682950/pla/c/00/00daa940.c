/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daa940; name: FUN_00daa940
 */


long FUN_00daa940(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_0437b648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b648), iVar1 != 0))
  {
    FUN_00100250(&LAB_00daae04,PTR_DAT_0437b650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b648);
  }
  lVar2 = *(long *)PTR_DAT_0437b650;
  *(long *)PTR_DAT_0437b658 = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  return (long)*(int *)(lVar2 + 0x350);
}


