/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e90b5c; name: FUN_00e90b5c
 */


void FUN_00e90b5c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  return;
}


