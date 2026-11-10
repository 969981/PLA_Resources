/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276bb54; name: FUN_0276bb54
 */


void FUN_0276bb54(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_14;
  
  uVar2 = FUN_0276b380();
  if ((uVar2 & 1) != 0) {
    if (((*PTR_DAT_043821d8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_043821d8), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04387d08,PTR_DAT_043821e0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043821d8);
    }
    lVar3 = *(long *)PTR_DAT_043821e0;
    *(long *)PTR_DAT_043821e8 = lVar3;
    if (lVar3 != 0) {
      local_14 = 4;
      FUN_0276b54c(lVar3,1,&local_14,1);
    }
  }
  return;
}


