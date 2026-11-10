/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fb8340; name: FUN_01fb8340
 */


undefined8 FUN_01fb8340(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_043832d0;
  if (((*PTR_DAT_043832c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_043832c8), iVar3 != 0))
  {
    if (((*PTR_DAT_04383220 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04383220), puVar1 = PTR_DAT_04383238, iVar3 != 0)) {
      FUN_01fb7b40(PTR_DAT_04383238);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383220);
    }
    *(undefined **)puVar2 = PTR_DAT_04383238;
    __cxa_guard_release(PTR_DAT_043832c8);
  }
  return *(undefined8 *)puVar2;
}


