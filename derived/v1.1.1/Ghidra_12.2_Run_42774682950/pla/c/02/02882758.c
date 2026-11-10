/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02882758; name: FUN_02882758
 */


undefined * FUN_02882758(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04387f28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04387f28), iVar1 != 0))
  {
    FUN_00100250(&LAB_028827bc,PTR_DAT_04387f30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04387f28);
  }
  return PTR_DAT_04387f30;
}


