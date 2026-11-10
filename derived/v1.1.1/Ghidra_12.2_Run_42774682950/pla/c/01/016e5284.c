/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016e5284; name: FUN_016e5284
 */


undefined1 * FUN_016e5284(void)

{
  int iVar1;
  
  if (((DAT_043cd0a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cd0a0), iVar1 != 0)) {
    if (((DAT_043cd030 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043cd030), iVar1 != 0)) {
      FUN_016e4d10();
      FUN_00100250(PTR__string_04379718,&DAT_043cd018,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043cd030);
    }
    DAT_043cd098 = &DAT_043cd018;
    __cxa_guard_release(&DAT_043cd0a0);
  }
  return DAT_043cd098;
}


