/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026228f8; name: FUN_026228f8
 */


undefined * FUN_026228f8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379660), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  return PTR_DAT_04379668;
}


