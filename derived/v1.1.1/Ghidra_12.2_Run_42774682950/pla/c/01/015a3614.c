/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015a3614; name: FUN_015a3614
 */


undefined1 * FUN_015a3614(void)

{
  int iVar1;
  
  if (((DAT_043c9fb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c9fb0), iVar1 != 0)) {
    if (((DAT_043c9e98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c9e98), iVar1 != 0)) {
      FUN_015a26b0();
      FUN_00100250(PTR__string_04379718,&DAT_043c9e80,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c9e98);
    }
    DAT_043c9fa8 = &DAT_043c9e80;
    __cxa_guard_release(&DAT_043c9fb0);
  }
  return DAT_043c9fa8;
}


