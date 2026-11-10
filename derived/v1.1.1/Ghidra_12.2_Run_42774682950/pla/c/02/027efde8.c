/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027efde8; name: FUN_027efde8
 */


undefined1 * FUN_027efde8(void)

{
  int iVar1;
  
  if (((DAT_043eaf18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043eaf18), iVar1 != 0)) {
    if (((DAT_043eaea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043eaea8), iVar1 != 0)) {
      FUN_027ef680();
      FUN_00100250(PTR__string_04379718,&DAT_043eae90,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043eaea8);
    }
    DAT_043eaf10 = &DAT_043eae90;
    __cxa_guard_release(&DAT_043eaf18);
  }
  return DAT_043eaf10;
}


