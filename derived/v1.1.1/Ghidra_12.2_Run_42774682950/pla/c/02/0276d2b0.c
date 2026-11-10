/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d2b0; name: FUN_0276d2b0
 */


void FUN_0276d2b0(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar4 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar4;
  if (lVar4 != 0) {
    lVar2 = param_1[1];
    for (lVar1 = *param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
      FUN_02792804(lVar4,lVar1);
      FUN_0279324c(lVar4,lVar1);
    }
  }
  return;
}


