/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e332f8; name: FUN_00e332f8
 */


undefined8 FUN_00e332f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_0437c260;
  if (((*PTR_DAT_0437c258 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437c258), iVar3 != 0))
  {
    if (((*PTR_DAT_0437c1c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437c1c0), puVar1 = PTR_DAT_0437c1c8, iVar3 != 0)) {
      FUN_00e32da0(PTR_DAT_0437c1c8);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437c1c0);
    }
    *(undefined **)puVar2 = PTR_DAT_0437c1c8;
    __cxa_guard_release(PTR_DAT_0437c258);
  }
  return *(undefined8 *)puVar2;
}


