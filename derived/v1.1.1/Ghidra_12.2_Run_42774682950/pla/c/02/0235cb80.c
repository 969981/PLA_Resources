/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0235cb80; name: FUN_0235cb80
 */


undefined * FUN_0235cb80(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04386790 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04386790), puVar1 = PTR_DAT_04386798, iVar2 != 0)) {
    FUN_0235cc00(PTR_DAT_04386798);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04386790);
  }
  return PTR_DAT_04386798;
}


