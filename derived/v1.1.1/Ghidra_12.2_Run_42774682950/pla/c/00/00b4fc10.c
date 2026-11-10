/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b4fc10; name: FUN_00b4fc10
 */


undefined8 FUN_00b4fc10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0437acc0;
  if (((*PTR_DAT_0437acb8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437acb8), iVar3 != 0))
  {
    if (((*PTR_DAT_0437acc8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437acc8), puVar2 = PTR_DAT_0437acd0, iVar3 != 0)) {
      FUN_00b4fcd0(PTR_DAT_0437acd0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437acc8);
    }
    *(undefined **)puVar1 = PTR_DAT_0437acd0;
    __cxa_guard_release(PTR_DAT_0437acb8);
  }
  return *(undefined8 *)puVar1;
}


