/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db1088; name: FUN_00db1088
 */


undefined8 FUN_00db1088(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_0437b630 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437b630);
    if (iVar1 != 0) {
      FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
  }
  DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
  if (DAT_043ad1d0 == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = FUN_00db0eb8(DAT_043ad1d0,param_1);
  return uVar2;
}


