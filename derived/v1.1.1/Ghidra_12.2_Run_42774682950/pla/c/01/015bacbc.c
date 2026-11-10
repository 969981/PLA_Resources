/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015bacbc; name: FUN_015bacbc
 */


undefined8 FUN_015bacbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0437fc90;
  if (((*PTR_DAT_0437fc88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437fc88), iVar3 != 0))
  {
    if (((*PTR_DAT_0437fc98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437fc98), puVar2 = PTR_DAT_0437fca0, iVar3 != 0)) {
      FUN_015bafd0(PTR_DAT_0437fca0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437fc98);
    }
    *(undefined **)puVar1 = PTR_DAT_0437fca0;
    __cxa_guard_release(PTR_DAT_0437fc88);
  }
  return *(undefined8 *)puVar1;
}


