/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00efe95c; name: FUN_00efe95c
 */


undefined8 FUN_00efe95c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0437d208;
  if (((*PTR_DAT_0437d200 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d200), iVar3 != 0))
  {
    if (((*PTR_DAT_0437d210 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d210), puVar2 = PTR_DAT_0437d218, iVar3 != 0)) {
      FUN_00efec70(PTR_DAT_0437d218);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d210);
    }
    *(undefined **)puVar1 = PTR_DAT_0437d218;
    __cxa_guard_release(PTR_DAT_0437d200);
  }
  return *(undefined8 *)puVar1;
}


