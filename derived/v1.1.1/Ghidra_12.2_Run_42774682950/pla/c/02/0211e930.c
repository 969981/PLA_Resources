/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0211e930; name: FUN_0211e930
 */


undefined8 FUN_0211e930(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_04384ef0;
  if (((*PTR_DAT_04384ee8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04384ee8), iVar3 != 0))
  {
    if (((*PTR_DAT_04384e40 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04384e40), puVar1 = PTR_DAT_04384e58, iVar3 != 0)) {
      FUN_0211e460(PTR_DAT_04384e58);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384e40);
    }
    *(undefined **)puVar2 = PTR_DAT_04384e58;
    __cxa_guard_release(PTR_DAT_04384ee8);
  }
  return *(undefined8 *)puVar2;
}


