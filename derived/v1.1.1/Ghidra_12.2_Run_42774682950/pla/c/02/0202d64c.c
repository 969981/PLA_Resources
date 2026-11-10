/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0202d64c; name: FUN_0202d64c
 */


undefined8 FUN_0202d64c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04383ab0;
  if (((*PTR_DAT_04383aa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04383aa8), iVar3 != 0))
  {
    if (((*PTR_DAT_04383ab8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04383ab8), puVar2 = PTR_DAT_04383ac0, iVar3 != 0)) {
      FUN_0202d960(PTR_DAT_04383ac0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383ab8);
    }
    *(undefined **)puVar1 = PTR_DAT_04383ac0;
    __cxa_guard_release(PTR_DAT_04383aa8);
  }
  return *(undefined8 *)puVar1;
}


