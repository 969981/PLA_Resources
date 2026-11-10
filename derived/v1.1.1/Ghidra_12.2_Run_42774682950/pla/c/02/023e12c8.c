/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023e12c8; name: FUN_023e12c8
 */


undefined1 * FUN_023e12c8(void)

{
  int iVar1;
  
  if (((DAT_043e3e58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e3e58), iVar1 != 0)) {
    if (((DAT_043e3de8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e3de8), iVar1 != 0)) {
      FUN_023e0960();
      FUN_00100250(PTR__string_04379718,&DAT_043e3dd0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e3de8);
    }
    DAT_043e3e50 = &DAT_043e3dd0;
    __cxa_guard_release(&DAT_043e3e58);
  }
  return DAT_043e3e50;
}


