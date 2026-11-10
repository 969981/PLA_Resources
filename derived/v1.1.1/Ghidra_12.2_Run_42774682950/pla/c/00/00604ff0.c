/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00604ff0; name: _INIT_85
 */


void _INIT_85(void)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_043734b8 == 0) {
    if (((*PTR_DAT_04373fb0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04373fb0), iVar1 != 0)) {
      __cxa_guard_release(PTR_DAT_04373fb0);
    }
    *(undefined **)PTR_DAT_043734b8 = PTR_PTR_04373fb8;
    lVar2 = *(long *)PTR_DAT_04373140;
  }
  else {
    lVar2 = *(long *)PTR_DAT_04373140;
  }
  if (lVar2 != 0) {
    return;
  }
  if (((*PTR_DAT_04373fa0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04373fa0), iVar1 != 0))
  {
    __cxa_guard_release(PTR_DAT_04373fa0);
  }
  *(undefined **)PTR_DAT_04373140 = PTR_PTR_04373fa8;
  return;
}


