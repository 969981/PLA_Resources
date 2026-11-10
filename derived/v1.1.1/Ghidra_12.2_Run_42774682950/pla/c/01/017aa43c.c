/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017aa43c; name: FUN_017aa43c
 */


undefined8 FUN_017aa43c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04380670;
  if (((*PTR_DAT_04380668 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04380668), iVar3 != 0))
  {
    if (((*PTR_DAT_04380678 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04380678), puVar2 = PTR_DAT_04380680, iVar3 != 0)) {
      FUN_01602e50(PTR_DAT_04380680);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04380678);
    }
    *(undefined **)puVar1 = PTR_DAT_04380680;
    __cxa_guard_release(PTR_DAT_04380668);
  }
  return *(undefined8 *)puVar1;
}


