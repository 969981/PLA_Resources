/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ee2bac; name: FUN_00ee2bac
 */


undefined8 FUN_00ee2bac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0437ca00;
  if (((*PTR_DAT_0437c9f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437c9f8), iVar3 != 0))
  {
    if (((*PTR_DAT_0437ca08 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437ca08), puVar2 = PTR_DAT_0437ca10, iVar3 != 0)) {
      FUN_00ee2ec0(PTR_DAT_0437ca10);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ca08);
    }
    *(undefined **)puVar1 = PTR_DAT_0437ca10;
    __cxa_guard_release(PTR_DAT_0437c9f8);
  }
  return *(undefined8 *)puVar1;
}


