/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0214de60; name: FUN_0214de60
 */


undefined * FUN_0214de60(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04385180 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04385180), puVar1 = PTR_DAT_04385188, iVar2 != 0)) {
    FUN_0214dee0(PTR_DAT_04385188);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04385180);
  }
  return PTR_DAT_04385188;
}


