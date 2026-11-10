/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e69f80; name: FUN_00e69f80
 */


undefined8 FUN_00e69f80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_0437c548;
  if (((*PTR_DAT_0437c540 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437c540), iVar3 != 0))
  {
    if (((*PTR_DAT_0437c4b0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437c4b0), puVar1 = PTR_DAT_0437c498, iVar3 != 0)) {
      FUN_00e69830(PTR_DAT_0437c498);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437c4b0);
    }
    *(undefined **)puVar2 = PTR_DAT_0437c498;
    __cxa_guard_release(PTR_DAT_0437c540);
  }
  return *(undefined8 *)puVar2;
}


