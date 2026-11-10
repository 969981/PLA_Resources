/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012c9d24; name: FUN_012c9d24
 */


undefined1 * FUN_012c9d24(void)

{
  int iVar1;
  
  if (((DAT_043c1400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c1400), iVar1 != 0)) {
    if (((DAT_043c1390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c1390), iVar1 != 0)) {
      FUN_012c9770();
      FUN_00100250(PTR__string_04379718,&DAT_043c1378,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c1390);
    }
    DAT_043c13f8 = &DAT_043c1378;
    __cxa_guard_release(&DAT_043c1400);
  }
  return DAT_043c13f8;
}


