/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d46c; name: FUN_0022d46c
 */


undefined * FUN_0022d46c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04372a58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_04372a60 = 0;
    __cxa_guard_release(PTR_DAT_04372a58);
    return PTR_DAT_04372a60;
  }
  return PTR_DAT_04372a60;
}


