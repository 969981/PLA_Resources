/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f6c5ec; name: FUN_00f6c5ec
 */


undefined8 FUN_00f6c5ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0437d718;
  if (((*PTR_DAT_0437d710 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d710), iVar3 != 0))
  {
    if (((*PTR_DAT_0437d720 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437d720), puVar2 = PTR_DAT_0437d728, iVar3 != 0)) {
      FUN_00f6c900(PTR_DAT_0437d728);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d720);
    }
    *(undefined **)puVar1 = PTR_DAT_0437d728;
    __cxa_guard_release(PTR_DAT_0437d710);
  }
  return *(undefined8 *)puVar1;
}


