/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f1f1e4; name: FUN_00f1f1e4
 */


undefined1 * FUN_00f1f1e4(void)

{
  int iVar1;
  
  if (((DAT_043b4660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b4660), iVar1 != 0)) {
    if (((DAT_043b4558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043b4558), iVar1 != 0)) {
      FUN_00f1bf40();
      FUN_00100250(PTR__string_04379718,&DAT_043b4540,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b4558);
    }
    DAT_043b4658 = &DAT_043b4540;
    __cxa_guard_release(&DAT_043b4660);
  }
  return DAT_043b4658;
}


