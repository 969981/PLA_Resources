/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015cc07c; name: FUN_015cc07c
 */


undefined8 FUN_015cc07c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04380118;
  if (((*PTR_DAT_04380110 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04380110), iVar3 != 0))
  {
    if (((*PTR_DAT_04380120 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04380120), puVar2 = PTR_DAT_04380128, iVar3 != 0)) {
      FUN_015cc390(PTR_DAT_04380128);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04380120);
    }
    *(undefined **)puVar1 = PTR_DAT_04380128;
    __cxa_guard_release(PTR_DAT_04380110);
  }
  return *(undefined8 *)puVar1;
}


