/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d848; name: FUN_0022d848
 */


undefined * FUN_0022d848(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04372a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04372a70), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_04372a78 = 0;
    __cxa_guard_release(PTR_DAT_04372a70);
    return PTR_DAT_04372a78;
  }
  return PTR_DAT_04372a78;
}


