/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f81a94; name: FUN_00f81a94
 */


undefined8 FUN_00f81a94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_0437d860;
  if (((*PTR_DAT_0437d858 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d858), iVar3 != 0))
  {
    if (((*PTR_DAT_0437d7c8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d7c8), puVar1 = PTR_DAT_0437d7b0, iVar3 != 0)) {
      FUN_00f81170(PTR_DAT_0437d7b0);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d7c8);
    }
    *(undefined **)puVar2 = PTR_DAT_0437d7b0;
    __cxa_guard_release(PTR_DAT_0437d858);
  }
  return *(undefined8 *)puVar2;
}


