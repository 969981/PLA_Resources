/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d1603c; name: FUN_00d1603c
 */


undefined * FUN_00d1603c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0437b1c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b1c0), iVar1 != 0))
  {
    FUN_00100250(&LAB_00d160a0,PTR_DAT_0437b1c8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b1c0);
  }
  return PTR_DAT_0437b1c8;
}


