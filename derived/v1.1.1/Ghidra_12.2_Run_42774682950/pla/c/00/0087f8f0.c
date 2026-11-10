/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087f8f0; name: FUN_0087f8f0
 */


undefined * FUN_0087f8f0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_043794e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043794e0), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_043794e8 = 0;
    __cxa_guard_release(PTR_DAT_043794e0);
  }
  return PTR_DAT_043794e8;
}


