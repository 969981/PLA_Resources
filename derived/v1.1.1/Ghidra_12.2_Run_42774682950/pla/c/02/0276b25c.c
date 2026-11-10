/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276b25c; name: FUN_0276b25c
 */


void FUN_0276b25c(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar2 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar2;
  if (lVar2 != 0) {
    FUN_0278f1c8();
  }
  uVar3 = FUN_0276b380();
  if ((uVar3 & 1) != 0) {
    if (((*PTR_DAT_043821d8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_043821d8), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04387d08,PTR_DAT_043821e0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043821d8);
    }
    lVar2 = *(long *)PTR_DAT_043821e0;
    *(long *)PTR_DAT_043821e8 = lVar2;
    if (lVar2 != 0) {
      local_18 = DAT_03a7e040;
      local_28 = DAT_03a7e030;
      uStack_20 = DAT_03a7e038;
      FUN_0276b54c(lVar2,1,&local_28,6);
    }
  }
  return;
}


