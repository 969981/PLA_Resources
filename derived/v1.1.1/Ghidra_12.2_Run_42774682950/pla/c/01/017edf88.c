/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017edf88; name: FUN_017edf88
 */


void FUN_017edf88(void)

{
  int iVar1;
  
  if (((DAT_043d11d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d11d0), iVar1 != 0)) {
    DAT_043d11c8 = FUN_017edfd4();
    __cxa_guard_release(&DAT_043d11d0);
    return;
  }
  return;
}


