/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f262c; name: FUN_020f262c
 */


undefined8 FUN_020f262c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04384bc8;
  if (((*PTR_DAT_04384bc0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04384bc0), iVar3 != 0))
  {
    if (((*PTR_DAT_04384bd0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04384bd0), puVar2 = PTR_DAT_04384bd8, iVar3 != 0)) {
      FUN_020f2940(PTR_DAT_04384bd8);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384bd0);
    }
    *(undefined **)puVar1 = PTR_DAT_04384bd8;
    __cxa_guard_release(PTR_DAT_04384bc0);
  }
  return *(undefined8 *)puVar1;
}


