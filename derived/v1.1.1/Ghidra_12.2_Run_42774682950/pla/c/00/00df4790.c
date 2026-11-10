/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00df4790; name: FUN_00df4790
 */


undefined * FUN_00df4790(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_0437bc10 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_0437bc10), puVar1 = PTR_DAT_0437bc18, iVar2 != 0)) {
    FUN_00df4810(PTR_DAT_0437bc18);
    FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437bc10);
  }
  return PTR_DAT_0437bc18;
}


