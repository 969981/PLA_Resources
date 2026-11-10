/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015cf7ec; name: FUN_015cf7ec
 */


undefined8 FUN_015cf7ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04380200;
  if (((*PTR_DAT_043801f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_043801f8), iVar3 != 0))
  {
    if (((*PTR_DAT_04380208 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04380208), puVar2 = PTR_DAT_04380210, iVar3 != 0)) {
      FUN_015cfb00(PTR_DAT_04380210);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04380208);
    }
    *(undefined **)puVar1 = PTR_DAT_04380210;
    __cxa_guard_release(PTR_DAT_043801f8);
  }
  return *(undefined8 *)puVar1;
}


