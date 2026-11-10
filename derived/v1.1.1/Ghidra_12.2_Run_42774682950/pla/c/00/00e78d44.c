/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e78d44; name: FUN_00e78d44
 */


undefined1 * FUN_00e78d44(void)

{
  int iVar1;
  
  if (((DAT_043b0df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b0df8), iVar1 != 0)) {
    if (((DAT_043b0c50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b0c50), iVar1 != 0)) {
      FUN_00e77ae0();
      FUN_00100250(PTR__string_04379718,&DAT_043b0c38,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b0c50);
    }
    DAT_043b0df0 = &DAT_043b0c38;
    __cxa_guard_release(&DAT_043b0df8);
  }
  return DAT_043b0df0;
}


