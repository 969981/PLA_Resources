/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6590; name: FUN_027a6590
 */


void FUN_027a6590(void)

{
  int iVar1;
  
  if (((DAT_043ea818 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ea818), iVar1 != 0)) {
    FUN_027a65f0(&DAT_043ea618,0x10,0x1021,0);
    __cxa_guard_release(&DAT_043ea818);
    return;
  }
  return;
}


