/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c625c; name: FUN_027c625c
 */


void FUN_027c625c(void)

{
  int iVar1;
  
  if (((DAT_043ea8a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ea8a0), iVar1 != 0)) {
    DAT_043ea898 = FUN_027c61c0();
    __cxa_guard_release(&DAT_043ea8a0);
    return;
  }
  return;
}


