/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021dd144; name: FUN_021dd144
 */


undefined1 * FUN_021dd144(void)

{
  int iVar1;
  
  if (((DAT_043dd708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043dd708), iVar1 != 0)) {
    if (((DAT_043dd600 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043dd600), iVar1 != 0)) {
      FUN_021dbd10();
      FUN_00100250(PTR__string_04379718,&DAT_043dd5e8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043dd600);
    }
    DAT_043dd700 = &DAT_043dd5e8;
    __cxa_guard_release(&DAT_043dd708);
  }
  return DAT_043dd700;
}


