/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028759cc; name: FUN_028759cc
 */


void FUN_028759cc(void)

{
  int iVar1;
  
  if (((DAT_043ebee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ebee0), iVar1 != 0)) {
    DAT_043ebed8 = FUN_027f5f94();
    __cxa_guard_release(&DAT_043ebee0);
    return;
  }
  return;
}


