/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0116a204; name: FUN_0116a204
 */


undefined1 * FUN_0116a204(void)

{
  int iVar1;
  
  if (((DAT_043baad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043baad8), iVar1 != 0)) {
    if (((DAT_043ba8c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ba8c0), iVar1 != 0)) {
      FUN_01168b80();
      FUN_00100250(PTR__string_04379718,&DAT_043ba8a8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ba8c0);
    }
    DAT_043baad0 = &DAT_043ba8a8;
    __cxa_guard_release(&DAT_043baad8);
  }
  return DAT_043baad0;
}


