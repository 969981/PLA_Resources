/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f5a4; name: FUN_0021f5a4
 */


undefined * FUN_0021f5a4(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04372880 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04372880), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_04372888 = 0;
    __cxa_guard_release(PTR_DAT_04372880);
    return PTR_DAT_04372888;
  }
  return PTR_DAT_04372888;
}


