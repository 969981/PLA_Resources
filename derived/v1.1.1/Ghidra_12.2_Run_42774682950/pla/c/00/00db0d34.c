/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db0d34; name: FUN_00db0d34
 */


void FUN_00db0d34(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0437b630;
  if (((*PTR_DAT_0437b630 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar3 != 0))
  {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  puVar2 = PTR_DAT_0437b638;
  DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
  if (DAT_043ad1d0 == 0) {
    return;
  }
  lVar4 = FUN_00db0eb8(DAT_043ad1d0,param_1);
  if (lVar4 == -1) {
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar3 != 0)) {
      FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
    DAT_043ad1d0 = *(long *)puVar2;
    if (DAT_043ad1d0 == 0) {
      return;
    }
  }
  else {
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar3 != 0)) {
      FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
    DAT_043ad1d0 = *(long *)puVar2;
    if (DAT_043ad1d0 == 0) {
      return;
    }
    param_2 = lVar4 + param_2;
  }
  FUN_00db0b58(DAT_043ad1d0,param_1,param_2);
  return;
}


