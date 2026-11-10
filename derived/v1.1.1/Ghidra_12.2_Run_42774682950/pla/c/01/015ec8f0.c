/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015ec8f0; name: FUN_015ec8f0
 */


undefined * FUN_015ec8f0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04380420 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04380420), puVar1 = PTR_DAT_04380428, iVar2 != 0)) {
    FUN_015ec970(PTR_DAT_04380428);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04380420);
  }
  return PTR_DAT_04380428;
}


