/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021b39e8; name: FUN_021b39e8
 */


undefined8 FUN_021b39e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_04385778;
  if (((*PTR_DAT_04385770 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04385770), iVar3 != 0))
  {
    if (((*PTR_DAT_043856d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043856d8), puVar1 = PTR_DAT_043856e0, iVar3 != 0)) {
      FUN_021b34e0(PTR_DAT_043856e0);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043856d8);
    }
    *(undefined **)puVar2 = PTR_DAT_043856e0;
    __cxa_guard_release(PTR_DAT_04385770);
  }
  return *(undefined8 *)puVar2;
}


