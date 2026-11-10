/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0231a5f8; name: FUN_0231a5f8
 */


undefined1 * FUN_0231a5f8(void)

{
  int iVar1;
  
  if (((DAT_043e19d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e19d0), iVar1 != 0)) {
    if (((DAT_043e1960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e1960), iVar1 != 0)) {
      FUN_0231a090();
      FUN_00100250(PTR__string_04379718,&DAT_043e1948,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e1960);
    }
    DAT_043e19c8 = &DAT_043e1948;
    __cxa_guard_release(&DAT_043e19d0);
  }
  return DAT_043e19c8;
}


