/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad3d4; name: FUN_00aad3d4
 */


void FUN_00aad3d4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_14;
  
  local_14 = FUN_00aad46c();
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379578), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar2 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar2;
  FUN_00994130(param_1,*(undefined8 *)(lVar2 + 200),&local_14);
  return;
}


