/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015c88fc; name: FUN_015c88fc
 */


undefined8 FUN_015c88fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04380030;
  if (((*PTR_DAT_04380028 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04380028), iVar3 != 0))
  {
    if (((*PTR_DAT_04380038 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04380038), puVar2 = PTR_DAT_04380040, iVar3 != 0)) {
      FUN_015c8c10(PTR_DAT_04380040);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04380038);
    }
    *(undefined **)puVar1 = PTR_DAT_04380040;
    __cxa_guard_release(PTR_DAT_04380028);
  }
  return *(undefined8 *)puVar1;
}


