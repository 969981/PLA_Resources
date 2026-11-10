/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e75c; name: FUN_0081e75c
 */


undefined * FUN_0081e75c(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04377b80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04377b80), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04377b88 = PTR_DAT_04377b98 + 0x10;
    __cxa_guard_release(PTR_DAT_04377b80);
    return PTR_DAT_04377b88;
  }
  return PTR_DAT_04377b88;
}


