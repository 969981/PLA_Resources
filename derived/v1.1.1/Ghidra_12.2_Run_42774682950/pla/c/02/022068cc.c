/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022068cc; name: FUN_022068cc
 */


undefined8 FUN_022068cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_04385de8;
  if (((*PTR_DAT_04385de0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04385de0), iVar3 != 0))
  {
    if (((*PTR_DAT_04385df0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04385df0), puVar2 = PTR_DAT_04385df8, iVar3 != 0)) {
      FUN_02206be0(PTR_DAT_04385df8);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385df0);
    }
    *(undefined **)puVar1 = PTR_DAT_04385df8;
    __cxa_guard_release(PTR_DAT_04385de0);
  }
  return *(undefined8 *)puVar1;
}


