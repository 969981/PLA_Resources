/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f0973c; name: FUN_00f0973c
 */


undefined8 FUN_00f0973c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0437d4c8;
  if (((*PTR_DAT_0437d4c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d4c0), iVar3 != 0))
  {
    if (((*PTR_DAT_0437d4d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d4d0), puVar2 = PTR_DAT_0437d4d8, iVar3 != 0)) {
      FUN_00f09a50(PTR_DAT_0437d4d8);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d4d0);
    }
    *(undefined **)puVar1 = PTR_DAT_0437d4d8;
    __cxa_guard_release(PTR_DAT_0437d4c0);
  }
  return *(undefined8 *)puVar1;
}


