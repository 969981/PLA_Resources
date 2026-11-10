/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b779ac; name: FUN_00b779ac
 */


undefined * FUN_00b779ac(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 local_18;
  
  if (((*PTR_DAT_0437a798 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a798), iVar2 != 0))
  {
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar2 != 0)) {
      local_18 = FUN_00938550();
      puVar1 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_18);
      FUN_00100250(PTR_LAB_0437a8d8,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    puVar1 = PTR_DAT_0437a7c8;
    FUN_00b0fd18(PTR_DAT_0437a7c8,PTR_DAT_0437a7d0,0);
    FUN_00100250(DAT_0437ae18,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a798);
  }
  return PTR_DAT_0437a7c8;
}


