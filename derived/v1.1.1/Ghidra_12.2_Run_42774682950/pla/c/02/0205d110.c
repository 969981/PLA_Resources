/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0205d110; name: FUN_0205d110
 */


undefined * FUN_0205d110(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04383f98 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04383f98), puVar1 = PTR_DAT_04383fa0, iVar2 != 0)) {
    FUN_0205d190(PTR_DAT_04383fa0);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04383f98);
  }
  return PTR_DAT_04383fa0;
}


