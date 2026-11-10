/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01705e80; name: FUN_01705e80
 */


undefined1 * FUN_01705e80(void)

{
  int iVar1;
  
  if (((DAT_043cd890 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cd890), iVar1 != 0)) {
    if (((DAT_043cd820 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cd820), iVar1 != 0)) {
      FUN_01705900();
      FUN_00100250(PTR__string_04379718,&DAT_043cd808,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd820);
    }
    DAT_043cd888 = &DAT_043cd808;
    __cxa_guard_release(&DAT_043cd890);
  }
  return DAT_043cd888;
}


