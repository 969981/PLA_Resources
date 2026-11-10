/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02139ad4; name: FUN_02139ad4
 */


undefined1 * FUN_02139ad4(void)

{
  int iVar1;
  
  if (((DAT_043db108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043db108), iVar1 != 0)) {
    if (((DAT_043db098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043db098), iVar1 != 0)) {
      FUN_02139170();
      FUN_00100250(PTR__string_04379718,&DAT_043db080,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043db098);
    }
    DAT_043db100 = &DAT_043db080;
    __cxa_guard_release(&DAT_043db108);
  }
  return DAT_043db100;
}


