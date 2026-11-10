/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020a01ac; name: FUN_020a01ac
 */


undefined8 FUN_020a01ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04384698;
  if (((*PTR_DAT_04384690 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04384690), iVar3 != 0))
  {
    if (((*PTR_DAT_043846a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043846a0), puVar2 = PTR_DAT_043846a8, iVar3 != 0)) {
      FUN_020a04a0(PTR_DAT_043846a8);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043846a0);
    }
    *(undefined **)puVar1 = PTR_DAT_043846a8;
    __cxa_guard_release(PTR_DAT_04384690);
  }
  return *(undefined8 *)puVar1;
}


