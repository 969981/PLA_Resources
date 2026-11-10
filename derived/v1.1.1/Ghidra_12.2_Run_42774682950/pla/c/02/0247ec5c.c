/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0247ec5c; name: FUN_0247ec5c
 */


undefined8 FUN_0247ec5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_043875a8;
  if (((*PTR_DAT_043875a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_043875a0), iVar3 != 0))
  {
    if (((*PTR_DAT_04387538 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04387538), puVar1 = PTR_DAT_04387540, iVar3 != 0)) {
      FUN_0247df80(PTR_DAT_04387540);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04387538);
    }
    *(undefined **)puVar2 = PTR_DAT_04387540;
    __cxa_guard_release(PTR_DAT_043875a0);
  }
  return *(undefined8 *)puVar2;
}


