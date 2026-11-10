/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021f58a0; name: FUN_021f58a0
 */


undefined * FUN_021f58a0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_043859b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_043859b8), puVar1 = PTR_DAT_043859c0, iVar2 != 0)) {
    FUN_021f5920(PTR_DAT_043859c0);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043859b8);
  }
  return PTR_DAT_043859c0;
}


