/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024d3d88; name: FUN_024d3d88
 */


undefined1 * FUN_024d3d88(void)

{
  int iVar1;
  
  if (((DAT_043e7d28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e7d28), iVar1 != 0)) {
    if (((DAT_043e7cb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e7cb8), iVar1 != 0)) {
      FUN_024d34a0();
      FUN_00100250(PTR__string_04379718,&DAT_043e7ca0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e7cb8);
    }
    DAT_043e7d20 = &DAT_043e7ca0;
    __cxa_guard_release(&DAT_043e7d28);
  }
  return DAT_043e7d20;
}


