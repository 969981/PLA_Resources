/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b35e3c; name: FUN_01b35e3c
 */


void FUN_01b35e3c(void)

{
  int iVar1;
  
  if (((DAT_043d2948 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d2948), iVar1 != 0)) {
    FUN_01b35da8();
    DAT_043d2940 = &DAT_043d2930;
    __cxa_guard_release(&DAT_043d2948);
    return;
  }
  return;
}


