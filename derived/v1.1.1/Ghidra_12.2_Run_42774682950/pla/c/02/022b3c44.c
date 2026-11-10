/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022b3c44; name: FUN_022b3c44
 */


undefined1 * FUN_022b3c44(void)

{
  int iVar1;
  
  if (((DAT_043e0b38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e0b38), iVar1 != 0)) {
    if (((DAT_043e0ac8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043e0ac8), iVar1 != 0)) {
      FUN_022b3640();
      FUN_00100250(PTR__string_04379718,&DAT_043e0ab0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e0ac8);
    }
    DAT_043e0b30 = &DAT_043e0ab0;
    __cxa_guard_release(&DAT_043e0b38);
  }
  return DAT_043e0b30;
}


