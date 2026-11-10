/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1e904; name: FUN_00e1e904
 */


undefined1 * FUN_00e1e904(void)

{
  int iVar1;
  
  if (((DAT_043af1e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043af1e0), iVar1 != 0)) {
    if (((DAT_043aeed8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043aeed8), iVar1 != 0)) {
      FUN_00e17240();
      FUN_00100250(PTR__string_04379718,&DAT_043aeec0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043aeed8);
    }
    DAT_043af1d8 = &DAT_043aeec0;
    __cxa_guard_release(&DAT_043af1e0);
  }
  return DAT_043af1d8;
}


